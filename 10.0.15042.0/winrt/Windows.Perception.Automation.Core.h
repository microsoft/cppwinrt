// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Perception.Automation.Core.3.h"
#include "Windows.Perception.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics> : produce_base<D, Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>
{
    HRESULT __stdcall abi_SetActivationFactoryProvider(impl::abi_arg_in<Windows::Foundation::IGetActivationFactory> provider) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    check_hresult(WINRT_SHIM(ICorePerceptionAutomationStatics)->abi_SetActivationFactoryProvider(get_abi(provider)));
}

inline void CorePerceptionAutomation::SetActivationFactoryProvider(const Windows::Foundation::IGetActivationFactory & provider)
{
    get_activation_factory<CorePerceptionAutomation, ICorePerceptionAutomationStatics>().SetActivationFactoryProvider(provider);
}

}

}

template<>
struct std::hash<winrt::Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>
{
    size_t operator()(const winrt::Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
