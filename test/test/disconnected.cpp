#include "pch.h"
#include <ctxtcall.h>

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

TEST_CASE("disconnected,handler")
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

    {
        auto async = Operation();

        async.Completed([](auto&&...)
            {
                throw hresult_error(RPC_E_DISCONNECTED);
            });
    }

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
}

// Custom action to simulate an out-of-process server that crashes before it can complete.
struct non_agile_abandoned_action : implements<non_agile_abandoned_action, IAsyncAction, IAsyncInfo, non_agile>
{
    non_agile_abandoned_action(void* event_handle) : m_awaited(event_handle) {}

    void Completed(AsyncActionCompletedHandler const& handler) {
        m_handler = handler;
        // Tell the test to disconnect the IAsyncAction, which simulates the server crash.
        SetEvent(m_awaited);
    }
    auto Completed() { return m_handler; }
    void GetResults() {}

    auto Id() { return 0U; }
    auto Status() { return AsyncStatus::Completed; }
    auto ErrorCode() { return hresult(0); }
    void Cancel() {}
    void Close() {}

    AsyncActionCompletedHandler m_handler;
    HANDLE m_awaited;
};

namespace
{
    template<typename TLambda>
    void InvokeInContext(IContextCallback* context, TLambda&& lambda)
    {
        ComCallData data;
        data.pUserDefined = &lambda;
        check_hresult(context->ContextCallback([](ComCallData* data) -> HRESULT
            {
                auto& lambda = *reinterpret_cast<TLambda*>(data->pUserDefined);
                lambda();
                return S_OK;
            }, &data, IID_ICallbackWithNoReentrancyToApplicationSTA, 5, nullptr));
    }

    fire_and_forget disconnect_on_signal(com_ptr<IContextCallback> context, void* signal)
    {
        co_await resume_on_signal(signal);
        InvokeInContext(context.get(), []()
            {
                // This disconnects the IAsyncAction, simulating a server crash.
                CoDisconnectContext(INFINITE);
            });
    }
}

TEST_CASE("disconnected,action")
{
    auto private_context = create_instance<IContextCallback>(CLSID_ContextSwitcher);
    handle signal{ CreateEventW(nullptr, true, false, nullptr) };
    disconnect_on_signal(private_context, signal.get());

    agile_ref<IAsyncAction> action;
    InvokeInContext(private_context.get(), [&]()
        {
            action = make<non_agile_abandoned_action>(signal.get());
        });

    auto result = [](IAsyncAction action) -> IAsyncAction
        {
            co_await action;
            co_return;
        }(action.get());

    REQUIRE_THROWS_AS(result.get(), hresult_error);
}
