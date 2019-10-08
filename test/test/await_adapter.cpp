#include "pch.h"
#include "winrt/Windows.System.h"

using namespace std::literals;
using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::System;

namespace
{
    static handle signal{ CreateEventW(nullptr, false, false, nullptr) };

    IAsyncAction OtherForegroundAsync()
    {
        // Simple coroutine that completes on a unique STA thread.

        auto controller = DispatcherQueueController::CreateOnDedicatedThread();
        auto dispatcher = controller.DispatcherQueue();

        co_await resume_foreground(dispatcher);
    }

    IAsyncAction OtherBackgroundAsync()
    {
        // Simple coroutine that completes on some MTA thread.

        co_await resume_background();
    }

    IAsyncAction ForegroundAsync(DispatcherQueue dispatcher)
    {
        REQUIRE(!impl::is_sta());
        co_await resume_foreground(dispatcher);
        REQUIRE(impl::is_sta());

        // This exercises one STA thread waiting on another thus one context callback
        // completing on another.
        uint32_t id = GetCurrentThreadId();
        co_await OtherForegroundAsync();
        REQUIRE(id == GetCurrentThreadId());

        // This just avoids the ForegroundAsync coroutine completing before
        // BackgroundAsync waits on the result, forcing the Completed handler
        // to be called on the foreground thread. This just makes the test
        // success/failure more predictable.
        Sleep(100);
    }

    fire_and_forget SignalFromForeground(DispatcherQueue dispatcher)
    {
        REQUIRE(!impl::is_sta());
        co_await resume_foreground(dispatcher);
        REQUIRE(impl::is_sta());

        // Previously, this signal was never raised because the foreground thread
        // was always blocked waiting for ContextCallback to return.
        REQUIRE(SetEvent(signal.get()));
    }

    IAsyncAction BackgroundAsync(DispatcherQueue dispatcher)
    {
        // Switch to a background (MTA) thread.
        co_await resume_background();
        REQUIRE(!impl::is_sta());

        // This exercises one MTA thread waiting on another and just completing
        // directly without the overhead of a context switch.
        co_await OtherBackgroundAsync();
        REQUIRE(!impl::is_sta());

        // Wait for a coroutine that completes on a foreground (STA) thread.
        co_await ForegroundAsync(dispatcher);

        // Resumption should automatically switch to a background (MTA) thread
        // without blocking the Completed handler (which would in turn block the foreground thread).
        REQUIRE(!impl::is_sta());

        // Attempt to signal from the foreground thread under the assumption
        // that the foreground thread is not blocked.
        SignalFromForeground(dispatcher);

        // Block the background (MTA) thread indefinitely until the signal is raied.
        // Previously this would deadlock.
        REQUIRE(WAIT_OBJECT_0 == WaitForSingleObject(signal.get(), INFINITE));
    }
}

TEST_CASE("await_adapter")
{
    auto controller = DispatcherQueueController::CreateOnDedicatedThread();
    auto dispatcher = controller.DispatcherQueue();

    BackgroundAsync(dispatcher).get();
}
