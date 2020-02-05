#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    //
    // Checks that result values are propagated properly.
    //

    IAsyncOperation<int> Operation(HANDLE event)
    {
        co_await resume_on_signal(event);
        co_return 123;
    }

    IAsyncOperationWithProgress<int, int> OperationWithProgress(HANDLE event)
    {
        co_await resume_on_signal(event);
        co_return 123;
    }

    IAsyncAction Await()
    {
        // Manual reset so that all waiters will resume and initially set so they won't block.
        handle event{ CreateEvent(nullptr, true, true, nullptr) };

        int a = co_await Operation(event.get());
        int b = co_await OperationWithProgress(event.get());

        REQUIRE(a == 123);
        REQUIRE(b == 123);
    }

    template <typename F>
    void Check(F make)
    {
        handle start{ CreateEvent(nullptr, true, false, nullptr) };
        handle completed{ CreateEvent(nullptr, true, false, nullptr) };
        auto async = make(start.get());
        REQUIRE(async.Status() == AsyncStatus::Started);
        REQUIRE_THROWS_AS(async.GetResults(), hresult_illegal_method_call);

        async.Completed([&](auto&& sender, AsyncStatus status)
            {
                REQUIRE(async == sender);
                REQUIRE(status == AsyncStatus::Completed);
                SetEvent(completed.get());
            });

        // Still in Started state waiting for signal.
        Sleep(100);
        REQUIRE(WaitForSingleObject(completed.get(), 0) == WAIT_TIMEOUT);
        REQUIRE(async.Status() == AsyncStatus::Started);

        // Signal async to run.
        SetEvent(start.get());

        // Wait for async to complete.
        REQUIRE(WaitForSingleObject(completed.get(), 1000) == WAIT_OBJECT_0);

        REQUIRE(async.Status() == AsyncStatus::Completed);
        REQUIRE(async.ErrorCode() == S_OK);
        REQUIRE(async.GetResults() == 123);
    }
}

TEST_CASE("async_result")
{
    handle start{ CreateEvent(nullptr, true, true, nullptr) };
    REQUIRE(123 == Operation(start.get()).get());
    REQUIRE(123 == OperationWithProgress(start.get()).get());
    Await().get();

    Check(Operation);
    Check(OperationWithProgress);
}
