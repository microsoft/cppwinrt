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
        std::optional<decltype(apartment_context())> context;
        InvokeInContext(com_context.get(), [&] {
            context = apartment_context();
            });
        return context.value();
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
}

TEST_CASE("apartment_context coverage")
{
    Async().get();
}

TEST_CASE("apartment_context nta")
{
    TestNeutralApartmentContext().get();
}
