#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    //
    // Checks that cancellation propagation works.
    //

    IAsyncAction Action()
    {
        // Do an extra co_await before the resume_on_signal
        // so that there is a race window where we can try to cancel
        // the "co_await resume_on_signal()" before it starts.
        co_await resume_background();

        auto cancel = co_await get_cancellation_token();
        cancel.enable_propagation();
        co_await resume_on_signal(GetCurrentProcess()); // never wakes
        REQUIRE(false);
    }

    IAsyncActionWithProgress<int> ActionWithProgress()
    {
        // Do an extra co_await before the resume_on_signal
        // so that there is a race window where we can try to cancel
        // the "co_await resume_on_signal()" before it starts.
        co_await resume_background();

        auto cancel = co_await get_cancellation_token();
        cancel.enable_propagation();
        co_await resume_on_signal(GetCurrentProcess()); // never wakes
        REQUIRE(false);
    }

    IAsyncOperation<int> Operation()
    {
        // Do an extra co_await before the resume_on_signal
        // so that there is a race window where we can try to cancel
        // the "co_await resume_on_signal()" before it starts.
        co_await resume_background();

        auto cancel = co_await get_cancellation_token();
        cancel.enable_propagation();
        co_await resume_on_signal(GetCurrentProcess()); // never wakes
        REQUIRE(false);
        co_return 1;
    }

    IAsyncOperationWithProgress<int, int> OperationWithProgress()
    {
        // Do an extra co_await before the resume_on_signal
        // so that there is a race window where we can try to cancel
        // the "co_await resume_on_signal()" before it starts.
        co_await resume_background();

        auto cancel = co_await get_cancellation_token();
        cancel.enable_propagation();
        co_await resume_on_signal(GetCurrentProcess()); // never wakes
        REQUIRE(false);
        co_return 1;
    }

    // Checking cancellation propagation for resume_after.
    IAsyncAction DelayAction()
    {
        // Do an extra co_await before the resume_on_signal
        // so that there is a race window where we can try to cancel
        // the "co_await resume_after()" before it starts.
        co_await resume_background();

        auto cancel = co_await get_cancellation_token();
        cancel.enable_propagation();
        co_await resume_after(std::chrono::hours(1)); // effectively sleep forever
        REQUIRE(false);
    }

    // Checking cancellation propagation for IAsyncAction.
    // We nest "depth" layers deep and then cancel the very
    // deeply-nested IAsyncAction. This validates that propagation
    // carried all the way down, and also lets us verify (via
    // manual debugging) the deep cancellation doesn't cause us to
    // blow up the stack on deeply nested cancellation.
    IAsyncAction ActionAction(int depth)
    {
        // Do an extra co_await before the resume_on_signal
        // so that there is a race window where we can try to cancel
        // the "co_await ActionAction()" before it starts.
        co_await resume_background();

        auto cancel = co_await get_cancellation_token();
        cancel.enable_propagation();
        if (depth > 0)
        {
            co_await ActionAction(depth - 1);
        }
        else
        {
            co_await Action();
        }
        REQUIRE(false);
    }

    template <typename F>
    void CheckWithWait(F make, bool wait)
    {
        handle completed{ CreateEvent(nullptr, true, false, nullptr) };
        auto async = make();
        REQUIRE(async.Status() == AsyncStatus::Started);

        async.Completed([&](auto&& sender, AsyncStatus status)
            {
                REQUIRE(async == sender);
                REQUIRE(status == AsyncStatus::Canceled);
                SetEvent(completed.get());
            });

        if (wait)
        {
            // ensure we hit the co_await that's cancellable before trying to cancel.
            Sleep(1000);
        }

        async.Cancel();

        // Wait indefinitely if a debugger is present, to make it easier to debug this test.
        REQUIRE(WaitForSingleObject(completed.get(), IsDebuggerPresent() ? INFINITE : 1000) == WAIT_OBJECT_0);

        REQUIRE(async.Status() == AsyncStatus::Canceled);
        REQUIRE(async.ErrorCode() == HRESULT_FROM_WIN32(ERROR_CANCELLED));
        REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);
    }

    template <typename F>
    void Check(F make)
    {
        CheckWithWait(make, false);
        CheckWithWait(make, true);
    }
}

#if defined(__clang__) && defined(_MSC_VER)
// FIXME: Test is known to segfault when built with Clang.
TEST_CASE("async_propagate_cancel", "[.clang-crash]")
#else
TEST_CASE("async_propagate_cancel")
#endif
{
    Check(Action);
    Check(ActionWithProgress);
    Check(Operation);
    Check(OperationWithProgress);
    Check(DelayAction);
    Check([] { return ActionAction(10); });
}
