#include "pch.h"
#include <ctxtcall.h>
#include <winrt/Windows.System.h>

using namespace std::literals;
using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::System;

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

// Exclude on mingw-w64 to suppress `-Wunused-function`
#if !defined(__MINGW32__)
    bool is_mta()
    {
        APTTYPE type;
        APTTYPEQUALIFIER qualifier;
        check_hresult(CoGetApartmentType(&type, &qualifier));
        return type == APTTYPE_MTA;
    }
#endif
}

TEST_CASE("disconnected,handler,1")
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

TEST_CASE("disconnected,handler,2")
{
    auto async = Action();

    async.Completed([](auto&&...)
        {
            throw hresult_error(RPC_E_DISCONNECTED);
        });
}

TEST_CASE("disconnected,handler,3")
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
    // Give some time for to_hresult() to complete.
    Sleep(500);
}

TEST_CASE("disconnected,handler,4")
{
    auto async = Operation();

    async.Completed([](auto&&...)
        {
            throw hresult_error(RPC_E_DISCONNECTED);
        });
}

TEST_CASE("disconnected,handler,5")
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
    // Give some time for to_hresult() to complete.
    Sleep(500);
}

// Custom action to simulate an out-of-process server that crashes before it can complete.
struct non_agile_abandoned_action : implements<non_agile_abandoned_action, IAsyncAction, IAsyncInfo, non_agile>
{
    non_agile_abandoned_action(delegate<> disconnect) : m_disconnect(disconnect) {}

    static fire_and_forget final_release(std::unique_ptr<non_agile_abandoned_action> /*self*/)
    {
        // The C++/WinRT m_handler is agile but not context-aware,
        // so we need to make sure to release it from the context it
        // was created from, which for this particular test is the MTA.
        co_await resume_background();
        // Now we can destruct.
    }

    void Completed(AsyncActionCompletedHandler const& handler) {
        m_handler = handler;
        m_disconnect();
    }
    auto Completed() { return m_handler; }
    void GetResults() {}

    auto Id() { return 0U; }
    auto Status() { return AsyncStatus::Completed; }
    auto ErrorCode() { return hresult(0); }
    void Cancel() {}
    void Close() {}

    AsyncActionCompletedHandler m_handler;
    delegate<> m_disconnect;
};

// Not yet buildable on mingw-w64.
// Missing CLSID_ContextSwitcher, IID_ICallbackWithNoReentrancyToApplicationSTA
// and __uuidof(IContextCallback). Also, the lambda needs to have __stdcall
// specified on it but there is a Clang crash bug blocking this:
// https://github.com/llvm/llvm-project/issues/58366
#if !defined(__MINGW32__)
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

struct holds_hresult : public Catch::MatcherBase<hresult_error>
{
    holds_hresult(hresult value) : expected(value) {}

    hresult expected;

    bool match(hresult_error const& e) const override
    {
        return e.code() == expected;
    }

    virtual std::string describe() const override
    {
        return "is code " + std::to_string(expected.value);
    }
};

TEST_CASE("disconnected,action")
{
    auto private_context = create_instance<IContextCallback>(CLSID_ContextSwitcher);
    handle signal{ CreateEventW(nullptr, true, false, nullptr) };
    disconnect_on_signal(private_context, signal.get());

    agile_ref<IAsyncAction> action;
    InvokeInContext(private_context.get(), [&]()
        {
            action = make<non_agile_abandoned_action>([&]{ SetEvent(signal.get()); });
        });

    auto result = [](IAsyncAction action) -> IAsyncAction
        {
            co_await action;
        }(action.get());

    REQUIRE_THROWS_MATCHES(result.get(), hresult_error, holds_hresult(RPC_E_DISCONNECTED));
}

#if defined(__clang__) && (defined(_M_IX86) || defined(__i386__))
// FIXME: Test is known to crash with exit code 0xc000070a on x86 when built with Clang.
TEST_CASE("disconnected,double", "[.clang-crash]")
#else
TEST_CASE("disconnected,double")
#endif
{
    // The double-disconnect case, where the IAsyncAction disconnects,
    // and tries to return to the original context, but it too has disconnected!
    auto test = []() -> IAsyncAction
    {
        auto private_context = create_instance<IContextCallback>(CLSID_ContextSwitcher);
        handle signal{ CreateEventW(nullptr, true, false, nullptr) };
        disconnect_on_signal(private_context, signal.get());

        // Create an STA thread that we will destroy while awaiting.
        auto controller = DispatcherQueueController::CreateOnDedicatedThread();

        agile_ref<IAsyncAction> action;
        InvokeInContext(private_context.get(), [&]()
            {
                action = make<non_agile_abandoned_action>([&]() -> fire_and_forget
                    {
                        // Get off the DispatcherQueue thread.
                        co_await resume_background();
                        // Destroy the DispatcherQueue, so the co_await has nowhere to return to.
                        co_await controller.ShutdownQueueAsync();
                        // Now set the event to force the action to disconnect.
                        SetEvent(signal.get());
                    });
            });

        // Go to our STA thread.
        co_await resume_foreground(controller.DispatcherQueue());

        HRESULT hr = S_OK;
        try
        {
            co_await action.get();
        }
        catch (...)
        {
            hr = to_hresult();
            REQUIRE(is_mta());
        }
        REQUIRE(FAILED(hr));

    }();

    test.get();
}
#endif
