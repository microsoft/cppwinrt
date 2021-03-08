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

    IAsyncOperationWithProgress<hstring, int> Operation(HANDLE event)
    {
        co_await resume_on_signal(event);

        // Invoke from a lambda to ensure that operator() is const.
        [progress = co_await get_progress_token()]()
        {
            progress.set_result(L"working");
            progress(123);
        }();
        co_return L"done";
    }

    template <typename F>
    IAsyncAction Check(F make)
    {
        // Event not set to allow Progress handler to be wired up.
        handle start{ CreateEvent(nullptr, true, false, nullptr) };

        auto async = make(start.get());
        using TResult = decltype(async.GetResults());

        bool progress = false;

        async.Progress([&](auto&& sender, int value)
            {
                progress = true;
                REQUIRE(async == sender);
                REQUIRE(async.Status() == AsyncStatus::Started);
                if constexpr (std::is_same_v<TResult, hstring>)
                {
                    REQUIRE(async.GetResults() == L"working");
                    // Confirm that reading does not destroy partial results.
                    REQUIRE(async.GetResults() == L"working");
                }
                REQUIRE(value == 123);
            });

        SetEvent(start.get());
        co_await async;

        REQUIRE(progress);
        REQUIRE(async.Status() == AsyncStatus::Completed);
        REQUIRE(async.ErrorCode() == S_OK);

        // Confirm that you can read results from a completed WithProgress multiple times.
        // (We must allow this to avoid race conditions where a progress callback
        // does async work and then tries to read an intermediate result, only to
        // discover that the operation has already completed.)
        if constexpr (std::is_same_v<TResult, hstring>)
        {
            REQUIRE(async.GetResults() == L"done");
        }
        else
        {
            REQUIRE_NOTHROW(async.GetResults());
        }
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
