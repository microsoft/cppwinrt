// Intentionally not using pch...
#include "catch.hpp"

// Only need winrt/Windows.System.h for resume_foreground DispatcherQueue support
#include "winrt/Windows.System.h"

using namespace winrt;
using namespace Windows::System;

namespace
{
    fire_and_forget Async(DispatcherQueue queue)
    {
        co_await resume_foreground(queue);

// FIXME: Fail to compile with Clang due to co_await overload resolution
#if !defined(__clang__)
        co_await queue;
#endif
    }
}

TEST_CASE("coro_system")
{
    auto controller = DispatcherQueueController::CreateOnDedicatedThread();
    Async(controller.DispatcherQueue());
}
