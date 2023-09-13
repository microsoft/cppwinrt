#include "pch.h"
#include "winrt/Windows.System.h"

using namespace std::literals;
using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::System;

namespace
{
    bool is_sta()
    {
        APTTYPE type;
        APTTYPEQUALIFIER qualifier;
        check_hresult(CoGetApartmentType(&type, &qualifier));
        return (type == APTTYPE_STA) || (type == APTTYPE_MAINSTA);
    }

    static handle signal{ CreateEventW(nullptr, false, false, nullptr) };

    IAsyncAction OtherForegroundAsync(DispatcherQueue dispatcher)
    {
        // Simple coroutine that completes on the specified STA thread.
        co_await resume_foreground(dispatcher);
    }

    IAsyncAction OtherBackgroundAsync()
    {
        // Simple coroutine that completes on some MTA thread.

        co_await resume_background();
    }

    // Coroutine that completes on dispatcher1, while potentially blocking dispatcher2.
    IAsyncAction ForegroundAsync(DispatcherQueue dispatcher1, DispatcherQueue dispatcher2)
    {
        REQUIRE(!is_sta());
        co_await resume_foreground(dispatcher1);
        REQUIRE(is_sta());

        // This exercises one STA thread waiting on another thus one context callback
        // completing on another.
        uint32_t id = GetCurrentThreadId();
        co_await OtherForegroundAsync(dispatcher2);
        REQUIRE(id == GetCurrentThreadId());

        // This Sleep() makes it more likely that the caller will actually suspend in await_suspend,
        // so that the Completed handler triggers a resumption from the dispatcher1 thread.
        Sleep(100);
    }

    fire_and_forget SignalFromForeground(DispatcherQueue dispatcher1)
    {
        REQUIRE(!is_sta());
        co_await resume_foreground(dispatcher1);
        REQUIRE(is_sta());

        // Previously, we never got here because of a deadlock:
        // The dispatcher1 thread was blocked waiting for ContextCallback to return,
        // but the ContextCallback is waiting for this event to get signaled.
        REQUIRE(SetEvent(signal.get()));
    }

    IAsyncAction BackgroundAsync(DispatcherQueue dispatcher1, DispatcherQueue dispatcher2)
    {
        // Switch to a background (MTA) thread.
        co_await resume_background();
        REQUIRE(!is_sta());

        // This exercises one MTA thread waiting on another and just completing
        // directly without the overhead of a context switch.
        co_await OtherBackgroundAsync();
        REQUIRE(!is_sta());

        // Wait for a coroutine that completes on a the dispatcher1 thread (STA).
        co_await ForegroundAsync(dispatcher1, dispatcher2);

        // Resumption should automatically switch to a background (MTA) thread
        // without blocking the Completed handler (which would in turn block the dispatcher1 thread).
        REQUIRE(!is_sta());

        // Attempt to signal from the dispatcher1 thread under the assumption
        // that the dispatcher1 thread is not blocked.
        SignalFromForeground(dispatcher1);

        // Block the background (MTA) thread indefinitely until the signal is raised.
        // Previously this would hang because the signal never got raised.
        REQUIRE(WAIT_OBJECT_0 == WaitForSingleObject(signal.get(), INFINITE));
    }
}

#if defined(__clang__) && defined(_MSC_VER) && (defined(_M_IX86) || defined(__i386__))
// FIXME: Test is known to segfault on x86 when built with Clang.
TEST_CASE("await_adapter", "[.clang-crash]")
#else
TEST_CASE("await_adapter")
#endif
{
    auto controller1 = DispatcherQueueController::CreateOnDedicatedThread();
    auto controller2 = DispatcherQueueController::CreateOnDedicatedThread();

    BackgroundAsync(controller1.DispatcherQueue(), controller2.DispatcherQueue()).get();
    controller1.ShutdownQueueAsync().get();
    controller2.ShutdownQueueAsync().get();
}

namespace
{
    IAsyncAction OtherBackgroundDelayAsync()
    {
        // Simple coroutine that completes on some MTA thread after a brief delay
        // to ensure that the caller has suspended.

        co_await resume_after(100ms);
    }

    IAsyncAction AgileAsync(DispatcherQueue dispatcher)
    {
        // Switch to the STA.
        co_await resume_foreground(dispatcher);
        REQUIRE(is_sta());

        // Ask for agile resumption of a coroutine that finishes on a background thread.
        // Add a 100ms delay to ensure we suspend.
        co_await resume_agile(OtherBackgroundDelayAsync());
        // We should be on the background thread now.
        REQUIRE(!is_sta());
    }
}

TEST_CASE("await_adapter_agile")
{
    auto controller = DispatcherQueueController::CreateOnDedicatedThread();
    auto dispatcher = controller.DispatcherQueue();

    AgileAsync(dispatcher).get();
    controller.ShutdownQueueAsync().get();
}

namespace
{
    IAsyncAction AgileAsyncVariable(DispatcherQueue dispatcher)
    {
        // Switch to the STA.
        co_await resume_foreground(dispatcher);
        REQUIRE(is_sta());

        // Ask for agile resumption of a coroutine that finishes on a background thread.
        // Add a 100ms delay to ensure we suspend. Store the resume_agile in a variable
        // and await the variable.
        auto op = resume_agile(OtherBackgroundDelayAsync());
        co_await op;
        // We should be on the background thread now.
        REQUIRE(!is_sta());

        // Second attempt to await the op should fail cleanly.
        REQUIRE_THROWS_AS(co_await op, hresult_illegal_delegate_assignment);
        // We should still be on the background thread.
        REQUIRE(!is_sta());
    }
}


TEST_CASE("await_adapter_agile_variable")
{
    auto controller = DispatcherQueueController::CreateOnDedicatedThread();
    auto dispatcher = controller.DispatcherQueue();

    AgileAsyncVariable(dispatcher).get();
    controller.ShutdownQueueAsync().get();
}
