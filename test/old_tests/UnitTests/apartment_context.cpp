#include "pch.h"
#include "catch.hpp"
#include <ctxtcall.h>

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::System;

namespace
{
    IAsyncAction Async()
    {
        apartment_context context;
        REQUIRE(context);

        // Verify basic operations.

        // copyable - verify source is still good after copy
        apartment_context context2(context);
        REQUIRE(context);

        // movable - verify source is empty after move
        apartment_context context3(std::move(context));
        REQUIRE(!context);

        // copy-assignable - verify source is still good
        context = context2;
        REQUIRE(context2);

        // move-assignable - verify source is empty after move
        context = std::move(context3);
        REQUIRE(!context3);

        // emptyable
        context2 = nullptr;
        REQUIRE(!context2);

        // Self-copy-assignment
        context = context;
        REQUIRE(context);

        // Self-move-assignment
        context = std::move(context);
        REQUIRE(context);

        co_await context;
    }

// Not yet buildable on mingw-w64. The lambda needs to have __stdcall
// specified on it but there is a Clang crash bug blocking this:
// https://github.com/llvm/llvm-project/issues/58366
#if !defined(__MINGW32__)

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

    auto get_winrt_apartment_context_for_com_context(com_ptr<::IContextCallback> const& com_context)
    {
        apartment_context context{ nullptr };
        REQUIRE(!context); // constructed empty
        InvokeInContext(com_context.get(), [&] {
            context = apartment_context();
            });
        return context;
    }

#endif

// Exclude on mingw-w64 to suppress `-Wunused-function`
#if !defined(__MINGW32__)
    bool is_nta_on_mta()
    {
        APTTYPE type;
        APTTYPEQUALIFIER qualifier;
        check_hresult(CoGetApartmentType(&type, &qualifier));
        return (type == APTTYPE_NA) && (qualifier == APTTYPEQUALIFIER_NA_ON_MTA || qualifier == APTTYPEQUALIFIER_NA_ON_IMPLICIT_MTA);
    }
#endif

    bool is_mta()
    {
        APTTYPE type;
        APTTYPEQUALIFIER qualifier;
        check_hresult(CoGetApartmentType(&type, &qualifier));
        return type == APTTYPE_MTA;
    }

    bool is_invalid_context_error(HRESULT hr)
    {
        return (hr == RPC_E_SERVER_DIED_DNE) || (hr == RPC_E_DISCONNECTED);
    }

// Not yet buildable on mingw-w64.
// Missing __uuidof(IContextCallback).
#if !defined(__MINGW32__)

    IAsyncAction TestNeutralApartmentContext()
    {
        auto controller = DispatcherQueueController::CreateOnDedicatedThread();
        co_await resume_foreground(controller.DispatcherQueue());

        // Entering neutral apartment from STA should resume on explicit background thread.
        auto nta = get_winrt_apartment_context_for_com_context(capture<::IContextCallback>(CoGetDefaultContext, APTTYPE_NA));
        co_await nta;

        REQUIRE(is_nta_on_mta());
    }

#endif

    IAsyncAction TestStaToStaApartmentContext()
    {
        bool pass = false;

        const apartment_context original;

        // Create an STA thread and switch to it.
        auto controller1 = DispatcherQueueController::CreateOnDedicatedThread();
        co_await resume_foreground(controller1.DispatcherQueue());

        // Save the COM context for the first STA thread.
        apartment_context context1;

        // Create another STA thread and switch to it.
        auto controller2 = DispatcherQueueController::CreateOnDedicatedThread();
        co_await resume_foreground(controller2.DispatcherQueue());

        // The first STA thread remains hung as long as this is true.
        bool hang_sta_1 = true;

        // Hang the first STA thread.
        controller1.DispatcherQueue().TryEnqueue([&] {
            bool hang = true;
            while (hang_sta_1)
            {
                if (!WaitOnAddress(&hang_sta_1, &hang, sizeof(hang), 1000))
                {
                    return; // failed - timed out
                }
            }
            pass = true;
        });

        // Queue work to the second STA thread to unstick the first thread.
        // This requires that the second STA thread be available to dispatch work
        // after the "co_await context1" below.
        controller2.DispatcherQueue().TryEnqueue([&] {
            hang_sta_1 = false;
            WakeByAddressAll(&hang_sta_1);
        });

        // Try to switch to the first STA thread via COM context.
        // The first STA thread is hung, but once this thread (the second STA thread)
        // processes work, it will unstick the first STA thread.
        // This test verifies that the second STA thread does become available
        // to do work and is not hung waiting for the first STA thread.
        co_await context1;

        REQUIRE(pass);

        // Clean up.
        co_await original;

        co_await controller1.ShutdownQueueAsync();
        co_await controller2.ShutdownQueueAsync();
}

IAsyncAction TestDisconnectedApartmentContext()
{
    // Create an STA thread and switch to it.
    auto controller1 = DispatcherQueueController::CreateOnDedicatedThread();
    co_await resume_foreground(controller1.DispatcherQueue());

    // Create another STA thread.
    auto controller2 = DispatcherQueueController::CreateOnDedicatedThread();

    // Test returning to a destroyed context after IAsyncXxx completion on STA.
    HRESULT error = S_OK;
    try
    {
        co_await[](auto controller1, auto controller2) -> IAsyncAction
        {
            co_await resume_foreground(controller2.DispatcherQueue());
            co_await controller1.ShutdownQueueAsync();
        }(controller1, controller2);
    }
    catch (...)
    {
        error = winrt::to_hresult();
        REQUIRE(is_mta());
    }
    REQUIRE(is_invalid_context_error(error));

    // Re-create the STA thread for the next test.
    controller1 = DispatcherQueueController::CreateOnDedicatedThread();
    co_await resume_foreground(controller1.DispatcherQueue());

    // Save the COM context for the first STA thread.
    apartment_context context1;

    // Test returning to a destroyed context after IAsyncXxx completion on MTA.
    error = S_OK;
    try
    {
        co_await[](auto controller1) -> IAsyncAction
        {
            co_await resume_background(); // doesn't work
            co_await controller1.ShutdownQueueAsync();
        }(controller1);
    }
    catch (...)
    {
        error = winrt::to_hresult();
        REQUIRE(is_mta());
    }
    REQUIRE(is_invalid_context_error(error));

    // Test switching to a destroyed context from an STA.
    co_await resume_foreground(controller2.DispatcherQueue());

    error = S_OK;
    try {
        co_await context1;
    }
    catch (...)
    {
        error = winrt::to_hresult();
        REQUIRE(is_mta());
    }
    REQUIRE(is_invalid_context_error(error));

    // Test switching to a destroyed context from an MTA.
    error = S_OK;
    try {
        co_await context1;
    }
    catch (...)
    {
        error = winrt::to_hresult();
        REQUIRE(is_mta());
    }
    REQUIRE(is_invalid_context_error(error));

    // Clean up.
    co_await controller2.ShutdownQueueAsync();
}

}
TEST_CASE("apartment_context coverage")
{
    Async().get();
}

// Not yet buildable on mingw-w64.
// Missing __uuidof(IContextCallback).
#if !defined(__MINGW32__)

TEST_CASE("apartment_context nta")
{
    TestNeutralApartmentContext().get();
}

#endif

TEST_CASE("apartment_context sta")
{
    TestStaToStaApartmentContext().get();
}

#if defined(__clang__) && defined(_MSC_VER) && (defined(_M_IX86) || defined(__i386__))
// FIXME: Test is known to segfault on x86 when built with Clang.
TEST_CASE("apartment_context disconnected", "[.clang-crash]")
#else
TEST_CASE("apartment_context disconnected")
#endif
{
    TestDisconnectedApartmentContext().get();
}
