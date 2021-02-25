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

    bool is_nta_on_mta()
    {
        APTTYPE type;
        APTTYPEQUALIFIER qualifier;
        check_hresult(CoGetApartmentType(&type, &qualifier));
        return (type == APTTYPE_NA) && (qualifier == APTTYPEQUALIFIER_NA_ON_MTA || qualifier == APTTYPEQUALIFIER_NA_ON_IMPLICIT_MTA);
    }

    IAsyncAction TestNeutralApartmentContext()
    {
        auto controller = DispatcherQueueController::CreateOnDedicatedThread();
        co_await resume_foreground(controller.DispatcherQueue());

        // Entering neutral apartment from STA should resume on explicit background thread.
        auto nta = get_winrt_apartment_context_for_com_context(capture<::IContextCallback>(CoGetDefaultContext, APTTYPE_NA));
        co_await nta;

        REQUIRE(is_nta_on_mta());
    }

    IAsyncAction TestStaToStaApartmentContext()
    {
        bool pass = false;

        apartment_context original;

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

}

TEST_CASE("apartment_context coverage")
{
    Async().get();
}

TEST_CASE("apartment_context nta")
{
    TestNeutralApartmentContext().get();
}

TEST_CASE("apartment_context sta")
{
    TestStaToStaApartmentContext().get();
}
