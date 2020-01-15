#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    //
    // Checks that coroutine locals are destroyed prior to notifying waiters.
    //

    struct Local
    {
        bool& destroyed;

        ~Local()
        {
            REQUIRE(!destroyed);
            destroyed = true;
        }
    };

    IAsyncAction Action(HANDLE event, bool& destroyed)
    {
        co_await resume_on_signal(event);
        Local local{ destroyed };
    }

    IAsyncActionWithProgress<int> ActionWithProgress(HANDLE event, bool& destroyed)
    {
        co_await resume_on_signal(event);
        Local local{ destroyed };
    }

    IAsyncOperation<int> Operation(HANDLE event, bool& destroyed)
    {
        co_await resume_on_signal(event);
        Local local{ destroyed };
        co_return 1;
    }

    IAsyncOperationWithProgress<int, int> OperationWithProgress(HANDLE event, bool& destroyed)
    {
        co_await resume_on_signal(event);
        Local local{ destroyed };
        co_return 1;
    }

    template <typename F>
    void Check(F make)
    {
        handle start{ CreateEvent(nullptr, true, false, nullptr) };
        handle completed{ CreateEvent(nullptr, true, false, nullptr) };
        bool destroyed = false;
        auto async = make(start.get(), destroyed);

        async.Completed([&](auto&&...)
            {
                REQUIRE(destroyed);
                SetEvent(completed.get());
            });

        SetEvent(start.get());
        REQUIRE(WaitForSingleObject(completed.get(), 1000) == WAIT_OBJECT_0);
    }
}

TEST_CASE("async_local")
{
    Check(Action);
    Check(ActionWithProgress);
    Check(Operation);
    Check(OperationWithProgress);
}
