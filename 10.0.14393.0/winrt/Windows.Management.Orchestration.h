// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Management.Orchestration.3.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Management::Orchestration::ICurrentAppOrchestration> : produce_base<D, Windows::Management::Orchestration::ICurrentAppOrchestration>
{
    HRESULT __stdcall abi_StartSingleAppMode(abi_arg_out<Windows::Management::Orchestration::ISingleAppModeContext> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().StartSingleAppMode());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Orchestration::ICurrentAppOrchestrationStatics> : produce_base<D, Windows::Management::Orchestration::ICurrentAppOrchestrationStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::Management::Orchestration::ICurrentAppOrchestration> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Orchestration::ISingleAppModeContext> : produce_base<D, Windows::Management::Orchestration::ISingleAppModeContext>
{};

}

namespace Windows::Management::Orchestration {

template <typename D> Windows::Management::Orchestration::CurrentAppOrchestration impl_ICurrentAppOrchestrationStatics<D>::GetForCurrentView() const
{
    Windows::Management::Orchestration::CurrentAppOrchestration result { nullptr };
    check_hresult(static_cast<const ICurrentAppOrchestrationStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(result)));
    return result;
}

template <typename D> Windows::Management::Orchestration::SingleAppModeContext impl_ICurrentAppOrchestration<D>::StartSingleAppMode() const
{
    Windows::Management::Orchestration::SingleAppModeContext result { nullptr };
    check_hresult(static_cast<const ICurrentAppOrchestration &>(static_cast<const D &>(*this))->abi_StartSingleAppMode(put(result)));
    return result;
}

inline Windows::Management::Orchestration::CurrentAppOrchestration CurrentAppOrchestration::GetForCurrentView()
{
    return get_activation_factory<CurrentAppOrchestration, ICurrentAppOrchestrationStatics>().GetForCurrentView();
}

}

}
