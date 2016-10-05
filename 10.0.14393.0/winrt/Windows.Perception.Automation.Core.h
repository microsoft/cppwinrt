// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Perception.Automation.Core.3.h"
#include "Windows.Perception.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics> : produce_base<D, Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>
{
    HRESULT __stdcall abi_SetActivationFactoryProvider(abi_arg_in<Windows::Foundation::IGetActivationFactory> provider) noexcept override
    {
        try
        {
            this->shim().SetActivationFactoryProvider(*reinterpret_cast<const Windows::Foundation::IGetActivationFactory *>(&provider));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Perception::Automation::Core {

template <typename D> void impl_ICorePerceptionAutomationStatics<D>::SetActivationFactoryProvider(const Windows::Foundation::IGetActivationFactory & provider) const
{
    check_hresult(static_cast<const ICorePerceptionAutomationStatics &>(static_cast<const D &>(*this))->abi_SetActivationFactoryProvider(get(provider)));
}

inline void CorePerceptionAutomation::SetActivationFactoryProvider(const Windows::Foundation::IGetActivationFactory & provider)
{
    get_activation_factory<CorePerceptionAutomation, ICorePerceptionAutomationStatics>().SetActivationFactoryProvider(provider);
}

}

}
