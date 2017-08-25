// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Perception.Automation.Core.2.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Perception_Automation_Core_ICorePerceptionAutomationStatics<D>::SetActivationFactoryProvider(Windows::Foundation::IGetActivationFactory const& provider) const
{
    check_hresult(WINRT_SHIM(Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics)->SetActivationFactoryProvider(get_abi(provider)));
}

template <typename D>
struct produce<D, Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics> : produce_base<D, Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>
{
    HRESULT __stdcall SetActivationFactoryProvider(::IUnknown* provider) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetActivationFactoryProvider(*reinterpret_cast<Windows::Foundation::IGetActivationFactory const*>(&provider));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Perception::Automation::Core {

inline void CorePerceptionAutomation::SetActivationFactoryProvider(Windows::Foundation::IGetActivationFactory const& provider)
{
    get_activation_factory<CorePerceptionAutomation, Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>().SetActivationFactoryProvider(provider);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics> {};

template<> struct hash<winrt::Windows::Perception::Automation::Core::CorePerceptionAutomation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::Automation::Core::CorePerceptionAutomation> {};

}

WINRT_WARNING_POP
