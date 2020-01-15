#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    //
    // Checks that progress reporting works.
    //

    IAsyncActionWithProgress<int> Action(HANDLE event)
    {
        co_await resume_on_signal(event);
        auto progress = co_await get_progress_token();
        progress(123);
    }

    IAsyncOperationWithProgress<int, int> Operation(HANDLE event)
    {
        co_await resume_on_signal(event);
        auto progress = co_await get_progress_token();
        progress(123);
        co_return 1;
    }

    template <typename F>
    IAsyncAction Check(F make)
    {
        // Event not set to allow Progress handler to be wired up.
        handle start{ CreateEvent(nullptr, true, false, nullptr) };

        auto async = make(start.get());
        bool progress = false;

        async.Progress([&](auto&& sender, int value)
            {
                progress = true;
                REQUIRE(async == sender);
                REQUIRE(value == 123);
            });

        SetEvent(start.get());
        co_await async;

        REQUIRE(progress);
        REQUIRE(async.Status() == AsyncStatus::Completed);
        REQUIRE(async.ErrorCode() == S_OK);
    }

    template <typename F>
    IAsyncAction TooLate(F make)
    {
        // Event initially set so that coroutine does not suspend.
        handle start{ CreateEvent(nullptr, true, true, nullptr) };

        auto async = make(start.get());
        REQUIRE(async.Status() == AsyncStatus::Completed);

        bool progress = false;

        async.Progress([&](auto&&...)
            {
                REQUIRE(false);
            });

        co_await async;

        REQUIRE(!progress);
        REQUIRE(async.Status() == AsyncStatus::Completed);
        REQUIRE(async.ErrorCode() == S_OK);
    }
}

TEST_CASE("async_progress")
{
    Check(Action);
    Check(Operation);

    TooLate(Action);
    TooLate(Operation);
}
