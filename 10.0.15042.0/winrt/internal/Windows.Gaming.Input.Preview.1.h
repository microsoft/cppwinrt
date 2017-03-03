// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Gaming.Input.Preview.0.h"
#include "Windows.Gaming.Input.Custom.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Gaming::Input::Preview {

struct __declspec(uuid("0be1e6c5-d9bd-44ee-8362-488b2e464bfb")) __declspec(novtable) IGameControllerProviderInfoStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetParentProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider * provider, hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider * provider, hstring * value) = 0;
};

}

namespace ABI {


}

namespace Windows::Gaming::Input::Preview {

template <typename D>
struct WINRT_EBO impl_IGameControllerProviderInfoStatics
{
    hstring GetParentProviderId(const Windows::Gaming::Input::Custom::IGameControllerProvider & provider) const;
    hstring GetProviderId(const Windows::Gaming::Input::Custom::IGameControllerProvider & provider) const;
};

}

namespace impl {

template <> struct traits<Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
{
    using abi = ABI::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics;
    template <typename D> using consume = Windows::Gaming::Input::Preview::impl_IGameControllerProviderInfoStatics<D>;
};

template <> struct traits<Windows::Gaming::Input::Preview::GameControllerProviderInfo>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.Input.Preview.GameControllerProviderInfo"; }
};

}

}
