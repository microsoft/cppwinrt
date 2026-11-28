#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    //
    // Checks that cancellation_token::originate_on_cancel(false) suppresses origination
    // on every path that can throw hresult_canceled, and that it stays suppressed for the
    // lifetime of the coroutine rather than just for the first cancellation check.
    //
    // NOTE: these tests do not observe RoOriginateLanguageException itself. They count
    // calls to winrt_throw_hresult_handler as a *proxy* for it: hresult_error::originate
    // invokes the handler and calls RoOriginateLanguageException together, so the handler
    // firing means origination was attempted on that path. The two are not equivalent --
    // RoOriginateLanguageException does not raise the debugger notification on every call,
    // so a handler count is an upper bound on the notifications a debugger would see, and
    // the handler is also reachable for non-cancellation errors. Only ERROR_CANCELLED
    // results are counted here, which is what originate_on_cancel controls. Observing the
    // RoOriginateLanguageException calls themselves requires an out-of-process debugger
    // and is out of scope for a unit test.
    //

    std::atomic<int> s_originations{ 0 };

    void __stdcall countOriginations(uint32_t, char const*, char const*, void*, winrt::hresult const result) noexcept
    {
        if (result == HRESULT_FROM_WIN32(ERROR_CANCELLED))
        {
            s_originations.fetch_add(1, std::memory_order_relaxed);
        }
    }

    struct origination_counter
    {
        origination_counter()
        {
            REQUIRE(!winrt_throw_hresult_handler);
            s_originations.store(0, std::memory_order_relaxed);
            winrt_throw_hresult_handler = countOriginations;
        }

        ~origination_counter()
        {
            winrt_throw_hresult_handler = nullptr;
        }

        origination_counter(origination_counter const&) = delete;
        void operator=(origination_counter const&) = delete;

        int count() const noexcept
        {
            return s_originations.load(std::memory_order_relaxed);
        }
    };

    // Never cancelled, so nothing should ever originate. This is the zero baseline that
    // shows the counter is not picking up originations from the surrounding machinery.
    IAsyncAction NoCancelAction(HANDLE resume, bool originate)
    {
        auto cancel = co_await get_cancellation_token();
        cancel.originate_on_cancel(originate);

        co_await resume_on_signal(resume);
        co_return;
    }

    // Cancelled while suspended, then resumed and allowed to return without reaching
    // another co_await, so the only cancellation check is in promise_base::Cancel.
    IAsyncAction SingleCheckAction(HANDLE resume, bool originate)
    {
        auto cancel = co_await get_cancellation_token();
        cancel.originate_on_cancel(originate);

        co_await resume_on_signal(resume);

        REQUIRE(cancel());
        co_return;
    }

    // Same as above, but reaches a further co_await after being cancelled so that
    // promise_base::await_transform performs a second cancellation check. This is the
    // case a single-cancellation test cannot catch: the guard used to re-arm origination
    // after the first check, so only the second and later checks regressed.
    IAsyncAction RepeatedChecksAction(HANDLE resume, bool originate)
    {
        auto cancel = co_await get_cancellation_token();
        cancel.originate_on_cancel(originate);

        co_await resume_on_signal(resume);

        // Status() is Canceled by now, so this co_await throws from await_transform.
        co_await std::suspend_never();
        REQUIRE(false);
    }

    // Cancellation is propagated into an awaited WinRT async, so the outer coroutine
    // resumes through await_adapter::await_resume -> check_status_canceled.
    IAsyncAction InnerSignalAction(HANDLE started, bool originate)
    {
        co_await resume_background();

        auto cancel = co_await get_cancellation_token();
        cancel.enable_propagation();
        cancel.originate_on_cancel(originate);

        SetEvent(started);
        co_await resume_on_signal(GetCurrentProcess()); // never wakes
        REQUIRE(false);
    }

    IAsyncAction AwaitAsyncAction(HANDLE started, bool originate)
    {
        co_await resume_background();

        auto cancel = co_await get_cancellation_token();
        cancel.enable_propagation();
        cancel.originate_on_cancel(originate);

        co_await InnerSignalAction(started, originate);
        REQUIRE(false);
    }

    // Resumes through resume_after, which is timespan_awaiter::await_resume.
    IAsyncAction ResumeAfterAction(HANDLE started, bool originate)
    {
        co_await resume_background();

        auto cancel = co_await get_cancellation_token();
        cancel.enable_propagation();
        cancel.originate_on_cancel(originate);

        SetEvent(started);
        co_await resume_after(std::chrono::hours(1)); // effectively sleeps forever
        REQUIRE(false);
    }

    // Resumes through resume_on_signal, which is signal_awaiter::await_resume.
    IAsyncAction ResumeOnSignalAction(HANDLE started, bool originate)
    {
        co_await resume_background();

        auto cancel = co_await get_cancellation_token();
        cancel.enable_propagation();
        cancel.originate_on_cancel(originate);

        SetEvent(started);
        co_await resume_on_signal(GetCurrentProcess()); // never wakes
        REQUIRE(false);
    }

    // A child async that owns its own cancellation token and states its own preference.
    // Cancelling it exercises the two promise-side sites plus signal_awaiter, all of
    // which consult this coroutine's own promise.
    IAsyncAction CancellableChildAction(HANDLE started, bool originate)
    {
        co_await resume_background();

        auto cancel = co_await get_cancellation_token();
        cancel.enable_propagation();
        cancel.originate_on_cancel(originate);

        SetEvent(started);
        co_await resume_on_signal(GetCurrentProcess()); // never wakes
        REQUIRE(false);
    }

    // Awaits the child from a fire_and_forget, whose promise_type does NOT derive from
    // cancellable_promise. The awaiting coroutine therefore has no preference of its own
    // to state, and cannot be given one -- fire_and_forget has no await_transform for
    // get_cancellation_token.
    fire_and_forget FireAndForgetParent(IAsyncAction child, HANDLE done)
    {
        try
        {
            co_await child;
        }
        catch (hresult_canceled const&)
        {
        }

        SetEvent(done);
    }

    // The same shape, but awaiting from a coroutine whose promise IS cancellable, so it
    // can state a preference of its own.
    IAsyncAction AsyncActionParent(IAsyncAction child, HANDLE done, bool originate)
    {
        auto cancel = co_await get_cancellation_token();
        cancel.originate_on_cancel(originate);

        try
        {
            co_await child;
        }
        catch (hresult_canceled const&)
        {
        }

        SetEvent(done);
    }

    void WaitForCompletion(HANDLE completed)
    {
        REQUIRE(WaitForSingleObject(completed, IsDebuggerPresent() ? INFINITE : 10000) == WAIT_OBJECT_0);
    }

    // Cancels a coroutine that is suspended on a cancellable await and returns the number
    // of cancellation originations observed while it unwound.
    template <typename F>
    int CountOriginationsOnPropagatedCancel(F make, bool originate)
    {
        handle started{ CreateEvent(nullptr, true, false, nullptr) };
        handle completed{ CreateEvent(nullptr, true, false, nullptr) };
        int originations = 0;

        {
            origination_counter counter;

            auto async = make(started.get(), originate);
            async.Completed([&](auto&&, AsyncStatus status)
                {
                    REQUIRE(status == AsyncStatus::Canceled);
                    SetEvent(completed.get());
                });

            // Make sure the coroutine has reached the cancellable await before cancelling,
            // otherwise cancellation is observed by await_transform instead and a
            // different set of origination sites runs on the way out.
            WaitForCompletion(started.get());
            Sleep(500);

            async.Cancel();
            WaitForCompletion(completed.get());

            originations = counter.count();
            REQUIRE(async.Status() == AsyncStatus::Canceled);
        }

        return originations;
    }

    // Runs a coroutine that suspends on a non-cancellable resume_on_signal, optionally
    // cancels it while it is suspended, then releases it and counts what originated.
    template <typename F>
    int CountOriginations(F make, bool originate, bool cancel)
    {
        handle resume{ CreateEvent(nullptr, true, false, nullptr) };
        handle completed{ CreateEvent(nullptr, true, false, nullptr) };
        auto const expected = cancel ? AsyncStatus::Canceled : AsyncStatus::Completed;
        int originations = 0;

        {
            origination_counter counter;

            auto async = make(resume.get(), originate);
            async.Completed([&](auto&&, AsyncStatus status)
                {
                    REQUIRE(status == expected);
                    SetEvent(completed.get());
                });

            if (cancel)
            {
                async.Cancel();
            }

            SetEvent(resume.get());
            WaitForCompletion(completed.get());

            originations = counter.count();
            REQUIRE(async.Status() == expected);
        }

        return originations;
    }

    int CountOriginationsWithoutCancel(bool originate)
    {
        return CountOriginations(NoCancelAction, originate, false);
    }

    int CountOriginationsOnSingleCheck(bool originate)
    {
        return CountOriginations(SingleCheckAction, originate, true);
    }

    int CountOriginationsOnRepeatedChecks(bool originate)
    {
        return CountOriginations(RepeatedChecksAction, originate, true);
    }

    // Cancels a child async that stated its own origination preference, while it is being
    // awaited by a parent coroutine, and counts what originated.
    template <typename F>
    int CountOriginationsOnAwaitedChild(F startParent, bool originate)
    {
        handle started{ CreateEvent(nullptr, true, false, nullptr) };
        handle done{ CreateEvent(nullptr, true, false, nullptr) };
        int originations = 0;

        {
            origination_counter counter;

            auto child = CancellableChildAction(started.get(), originate);
            startParent(child, done.get());

            // Let the child park on its cancellable await and the parent reach its
            // co_await of the child before cancelling.
            WaitForCompletion(started.get());
            Sleep(500);

            child.Cancel();
            WaitForCompletion(done.get());

            originations = counter.count();
            REQUIRE(child.Status() == AsyncStatus::Canceled);
        }

        return originations;
    }

    int CountOriginationsAwaitedByFireAndForget(bool originate)
    {
        return CountOriginationsOnAwaitedChild(
            [](IAsyncAction const& child, HANDLE done) { FireAndForgetParent(child, done); },
            originate);
    }

    int CountOriginationsAwaitedByAsyncAction(bool originate)
    {
        return CountOriginationsOnAwaitedChild(
            [originate](IAsyncAction const& child, HANDLE done) { AsyncActionParent(child, done, originate); },
            originate);
    }

    // An opted-out child awaited by an IAsyncAction parent that did NOT opt out. Shows
    // that a cancellable promise is necessary but not sufficient: the awaiting coroutine
    // states its own preference, and the default is to originate.
    int CountOriginationsOnOptedOutChildWithOriginatingParent()
    {
        return CountOriginationsOnAwaitedChild(
            [](IAsyncAction const& child, HANDLE done) { AsyncActionParent(child, done, true); },
            false);
    }
}

// NOTE: tagged [.clang-crash] for consistency with every other async cancellation test in
// this directory (async_check_cancel, async_propagate_cancel, async_auto_cancel, ...),
// which are all hidden under clang because cancelling a coroutine segfaults there. This
// test drives the same machinery, but the tag has NOT been independently verified against
// clang-cl -- see the FIXME on those tests for the underlying issue.
#if defined(__clang__) && defined(_MSC_VER)
TEST_CASE("async_originate_count_on_cancel", "[.clang-crash]")
#else
TEST_CASE("async_originate_count_on_cancel")
#endif
{
    // Baseline: no cancellation at all, so the opt-out setting is irrelevant.
    SECTION("no cancellation")
    {
        REQUIRE(CountOriginationsWithoutCancel(true) == 0);
        REQUIRE(CountOriginationsWithoutCancel(false) == 0);
    }

    // Baseline: exactly one cancellation check, in promise_base::Cancel. This passes even
    // with the setter/getter bug present, which is why the repeated-check case below is
    // the meaningful one.
    SECTION("single cancellation check")
    {
        REQUIRE(CountOriginationsOnSingleCheck(true) == 1);
        REQUIRE(CountOriginationsOnSingleCheck(false) == 0);
    }

    // promise_base::Cancel, then promise_base::await_transform on the next co_await.
    SECTION("repeated cancellation checks")
    {
        REQUIRE(CountOriginationsOnRepeatedChecks(true) == 2);
        REQUIRE(CountOriginationsOnRepeatedChecks(false) == 0);
    }

    // Outer promise_base::Cancel, inner promise_base::Cancel via propagation, the inner
    // coroutine's own signal_awaiter::await_resume, and finally the outer coroutine's
    // await_adapter::await_resume -> check_status_canceled.
    SECTION("awaited async completes canceled")
    {
        REQUIRE(CountOriginationsOnPropagatedCancel(AwaitAsyncAction, true) == 4);
        REQUIRE(CountOriginationsOnPropagatedCancel(AwaitAsyncAction, false) == 0);
    }

    // promise_base::Cancel, then timespan_awaiter::await_resume.
    SECTION("resume_after canceled")
    {
        REQUIRE(CountOriginationsOnPropagatedCancel(ResumeAfterAction, true) == 2);
        REQUIRE(CountOriginationsOnPropagatedCancel(ResumeAfterAction, false) == 0);
    }

    // promise_base::Cancel, then signal_awaiter::await_resume.
    SECTION("resume_on_signal canceled")
    {
        REQUIRE(CountOriginationsOnPropagatedCancel(ResumeOnSignalAction, true) == 2);
        REQUIRE(CountOriginationsOnPropagatedCancel(ResumeOnSignalAction, false) == 0);
    }

    // A child that states its own preference, awaited by a coroutine whose promise is
    // cancellable. Child's Cancel, child's signal_awaiter, then the parent's
    // await_adapter -> check_status_canceled.
    SECTION("child awaited by IAsyncAction")
    {
        REQUIRE(CountOriginationsAwaitedByAsyncAction(true) == 3);
        REQUIRE(CountOriginationsAwaitedByAsyncAction(false) == 0);
    }

    // The same child awaited by a fire_and_forget, whose promise_type does not derive
    // from cancellable_promise. The child's own sites are suppressed, but the awaiting
    // coroutine has no preference to state, so its await_adapter still originates.
    SECTION("child awaited by fire_and_forget")
    {
        REQUIRE(CountOriginationsAwaitedByFireAndForget(true) == 3);
        REQUIRE(CountOriginationsAwaitedByFireAndForget(false) == 1);
    }

    // Giving the awaiting coroutine a cancellable promise is not by itself enough: it
    // must also opt out, since await_adapter captures that coroutine's own preference and
    // the default is to originate.
    SECTION("opted-out child awaited by originating parent")
    {
        REQUIRE(CountOriginationsOnOptedOutChildWithOriginatingParent() == 1);
    }
}
