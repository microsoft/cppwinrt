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
        co_await resume_after(500ms);
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
        co_await resume_after(500ms);
        auto progress = co_await get_progress_token();
        progress(123);
        co_return 123;
    }
}

TEST_CASE("disconnected,1")
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

#if defined(__clang__)
// FIXME: Test is known to fail with unhandled exception when built with Clang.
TEST_CASE("disconnected,2", "[!shouldfail]")
#else
TEST_CASE("disconnected,2")
#endif
{
    auto async = Action();

    async.Completed([](auto&&...)
        {
            throw hresult_error(RPC_E_DISCONNECTED);
        });
}

TEST_CASE("disconnected,3")
{
    auto async = ActionProgress();
    handle signal{ CreateEventW(nullptr, true, false, nullptr) };

    async.Progress([](auto&&...)
        {
            throw hresult_error(RPC_E_DISCONNECTED);
        });

    async.Completed([&](auto&&...)
        {
            SetEvent(signal.get());
            throw hresult_error(RPC_E_DISCONNECTED);
        });

    WaitForSingleObject(signal.get(), INFINITE);
}

#if defined(__clang__)
// FIXME: Test is known to fail with unhandled exception when built with Clang.
TEST_CASE("disconnected,4", "[!shouldfail]")
#else
TEST_CASE("disconnected,4")
#endif
{
    auto async = Operation();

    async.Completed([](auto&&...)
        {
            throw hresult_error(RPC_E_DISCONNECTED);
        });
}

TEST_CASE("disconnected,5")
{
    auto async = OperationProgress();
    handle signal{ CreateEventW(nullptr, true, false, nullptr) };

    async.Progress([](auto&&...)
        {
            throw hresult_error(RPC_E_DISCONNECTED);
        });

    async.Completed([&](auto&&...)
        {
            SetEvent(signal.get());
            throw hresult_error(RPC_E_DISCONNECTED);
        });

    WaitForSingleObject(signal.get(), INFINITE);
}
