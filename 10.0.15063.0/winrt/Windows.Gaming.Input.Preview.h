// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Gaming.Input.Custom.2.h"
#include "winrt/impl/Windows.Gaming.Input.Preview.2.h"
#include "winrt/Windows.Gaming.Input.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics<D>::GetParentProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics)->GetParentProviderId(get_abi(provider), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics<D>::GetProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics)->GetProviderId(get_abi(provider), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics> : produce_base<D, Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
{
    HRESULT __stdcall GetParentProviderId(::IUnknown* provider, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetParentProviderId(*reinterpret_cast<Windows::Gaming::Input::Custom::IGameControllerProvider const*>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetProviderId(::IUnknown* provider, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetProviderId(*reinterpret_cast<Windows::Gaming::Input::Custom::IGameControllerProvider const*>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Gaming::Input::Preview {

inline hstring GameControllerProviderInfo::GetParentProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider)
{
    return get_activation_factory<GameControllerProviderInfo, Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>().GetParentProviderId(provider);
}

inline hstring GameControllerProviderInfo::GetProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider)
{
    return get_activation_factory<GameControllerProviderInfo, Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>().GetProviderId(provider);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics> {};

template<> struct hash<winrt::Windows::Gaming::Input::Preview::GameControllerProviderInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Preview::GameControllerProviderInfo> {};

}

WINRT_WARNING_POP
