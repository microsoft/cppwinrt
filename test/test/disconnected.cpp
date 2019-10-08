#include "pch.h"

using namespace std::literals;
using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    IAsyncAction Action()
    {
        co_return;
    }

    IAsyncActionWithProgress<int> ActionProgress()
    {
        co_await 500ms;
        auto progress = co_await get_progress_token();
        progress(123);
        co_return;
    }

    IAsyncOperation<int> Operation()
    {
        co_return 123;
    }

    IAsyncOperationWithProgress<int, int> OperationProgress()
    {
        co_await 500ms;
        auto progress = co_await get_progress_token();
        progress(123);
        co_return 123;
    }
}

TEST_CASE("disconnected")
{
    {
        event<EventHandler<int>> source;

        source.add([](auto...)
            {
                throw hresult_error(RPC_E_DISCONNECTED);
            });

        auto token = source.add([](auto...)
            {
                throw hresult_error(E_INVALIDARG);
            });

        // Should have two delegates
        REQUIRE(source);

        // Should lose the disconnected delegate
        source(nullptr, 123);
        REQUIRE(source);

        // Fire the remaining delegate
        source(nullptr, 123);
        REQUIRE(source);

        // Remove the final delegate
        source.remove(token);

        // No more delegates
        REQUIRE(!source);

        source(nullptr, 123);
    }

    {
        auto async = Action();

        async.Completed([](auto&&...)
            {
                throw hresult_error(RPC_E_DISCONNECTED);
            });
    }

    {
        auto async = ActionProgress();

        async.Progress([](auto&&...)
            {
                throw hresult_error(RPC_E_DISCONNECTED);
            });

        async.Completed([](auto&&...)
            {
                throw hresult_error(RPC_E_DISCONNECTED);
            });
    }

    {
        auto async = Operation();

        async.Completed([](auto&&...)
            {
                throw hresult_error(RPC_E_DISCONNECTED);
            });
    }

    {
        auto async = OperationProgress();

        async.Progress([](auto&&...)
            {
                throw hresult_error(RPC_E_DISCONNECTED);
            });

        async.Completed([](auto&&...)
            {
                throw hresult_error(RPC_E_DISCONNECTED);
            });
    }
}
