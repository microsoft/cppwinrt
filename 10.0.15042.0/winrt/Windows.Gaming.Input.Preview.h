// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Gaming.Input.Custom.3.h"
#include "internal/Windows.Gaming.Input.Preview.3.h"
#include "Windows.Gaming.Input.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics> : produce_base<D, Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
{
    HRESULT __stdcall abi_GetParentProviderId(impl::abi_arg_in<Windows::Gaming::Input::Custom::IGameControllerProvider> provider, impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetParentProviderId(*reinterpret_cast<const Windows::Gaming::Input::Custom::IGameControllerProvider *>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetProviderId(impl::abi_arg_in<Windows::Gaming::Input::Custom::IGameControllerProvider> provider, impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetProviderId(*reinterpret_cast<const Windows::Gaming::Input::Custom::IGameControllerProvider *>(&provider)));
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

namespace Windows::Gaming::Input::Preview {

template <typename D> hstring impl_IGameControllerProviderInfoStatics<D>::GetParentProviderId(const Windows::Gaming::Input::Custom::IGameControllerProvider & provider) const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGameControllerProviderInfoStatics)->abi_GetParentProviderId(get_abi(provider), put_abi(value)));
    return value;
}

template <typename D> hstring impl_IGameControllerProviderInfoStatics<D>::GetProviderId(const Windows::Gaming::Input::Custom::IGameControllerProvider & provider) const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGameControllerProviderInfoStatics)->abi_GetProviderId(get_abi(provider), put_abi(value)));
    return value;
}

inline hstring GameControllerProviderInfo::GetParentProviderId(const Windows::Gaming::Input::Custom::IGameControllerProvider & provider)
{
    return get_activation_factory<GameControllerProviderInfo, IGameControllerProviderInfoStatics>().GetParentProviderId(provider);
}

inline hstring GameControllerProviderInfo::GetProviderId(const Windows::Gaming::Input::Custom::IGameControllerProvider & provider)
{
    return get_activation_factory<GameControllerProviderInfo, IGameControllerProviderInfoStatics>().GetProviderId(provider);
}

}

}

template<>
struct std::hash<winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
