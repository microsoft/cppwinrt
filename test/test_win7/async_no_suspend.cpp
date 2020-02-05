#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    //
    // Checks that coroutines lacking suspension points work.
    //

    IAsyncAction Action()
    {
        co_return;
    }

    IAsyncActionWithProgress<int> ActionWithProgress()
    {
        co_return;
    }

    IAsyncOperation<int> Operation()
    {
        co_return 1;
    }

    IAsyncOperationWithProgress<int, int> OperationWithProgress()
    {
        co_return 1;
    }

    IAsyncAction Await()
    {
        co_await Action();
        co_await ActionWithProgress();
        co_await Operation();
        co_await OperationWithProgress();
    }

    template <typename T>
    void Check(T const& async)
    {
        REQUIRE(async.Status() == AsyncStatus::Completed);
        REQUIRE(async.ErrorCode() == 0);
        REQUIRE(async.Id() == 1);

        // Should not throw in the Completed state.
        async.GetResults();

        bool completed = false;

        async.Completed([&](auto&& sender, AsyncStatus status)
        {
            completed = true;
            REQUIRE(async == sender);
            REQUIRE(status == AsyncStatus::Completed);
        });

        REQUIRE(completed);

        // May only assign Completed handler once.
        REQUIRE_THROWS_AS(async.Completed([&](auto && ...) {}), hresult_illegal_delegate_assignment);

        // Close does nothing.
        async.Close();

        // Harmless but too late to cancel.
        async.Cancel();
        REQUIRE(async.Status() == AsyncStatus::Completed);
    }
}

TEST_CASE("async_no_suspend")
{
    Action().get();
    ActionWithProgress().get();
    Operation().get();
    OperationWithProgress().get();
    Await().get();

    Check(Action());
    Check(ActionWithProgress());
    Check(Operation());
    Check(OperationWithProgress());
}
