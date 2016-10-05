// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Gaming.UI.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Gaming::UI {

struct __declspec(uuid("1db9a292-cc78-4173-be45-b61e67283ea7")) __declspec(novtable) IGameBarStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall add_VisibilityChanged(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_VisibilityChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_IsInputRedirectedChanged(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_IsInputRedirectedChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_Visible(bool * value) = 0;
    virtual HRESULT __stdcall get_IsInputRedirected(bool * value) = 0;
};

}

namespace ABI {


}

namespace Windows::Gaming::UI {

template <typename T> struct impl_IGameBarStatics;

}

namespace impl {

template <> struct traits<Windows::Gaming::UI::IGameBarStatics>
{
    using abi = ABI::Windows::Gaming::UI::IGameBarStatics;
    template <typename D> using consume = Windows::Gaming::UI::impl_IGameBarStatics<D>;
};

template <> struct traits<Windows::Gaming::UI::GameBar>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.UI.GameBar"; }
};

}

}
