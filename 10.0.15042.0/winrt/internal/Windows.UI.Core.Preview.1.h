// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Core.Preview.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Core::Preview {

struct __declspec(uuid("83d00de1-cbe5-4f31-8414-361da046518f")) __declspec(novtable) ISystemNavigationCloseRequestedPreviewEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool * value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** result) = 0;
};

struct __declspec(uuid("ec5f0488-6425-4777-a536-cb5634427f0d")) __declspec(novtable) ISystemNavigationManagerPreview : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall add_CloseRequested(Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CloseRequested(event_token token) = 0;
};

struct __declspec(uuid("0e971360-df74-4bce-84cb-bd1181ac0a71")) __declspec(novtable) ISystemNavigationManagerPreviewStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::UI::Core::Preview::ISystemNavigationManagerPreview ** loader) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> { using default_interface = Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs; };
template <> struct traits<Windows::UI::Core::Preview::SystemNavigationManagerPreview> { using default_interface = Windows::UI::Core::Preview::ISystemNavigationManagerPreview; };

}

namespace Windows::UI::Core::Preview {

template <typename D>
struct WINRT_EBO impl_ISystemNavigationCloseRequestedPreviewEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_ISystemNavigationManagerPreview
{
    event_token CloseRequested(const Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> & handler) const;
    using CloseRequested_revoker = event_revoker<ISystemNavigationManagerPreview>;
    CloseRequested_revoker CloseRequested(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> & handler) const;
    void CloseRequested(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_ISystemNavigationManagerPreviewStatics
{
    Windows::UI::Core::Preview::SystemNavigationManagerPreview GetForCurrentView() const;
};

}

namespace impl {

template <> struct traits<Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs>
{
    using abi = ABI::Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs;
    template <typename D> using consume = Windows::UI::Core::Preview::impl_ISystemNavigationCloseRequestedPreviewEventArgs<D>;
};

template <> struct traits<Windows::UI::Core::Preview::ISystemNavigationManagerPreview>
{
    using abi = ABI::Windows::UI::Core::Preview::ISystemNavigationManagerPreview;
    template <typename D> using consume = Windows::UI::Core::Preview::impl_ISystemNavigationManagerPreview<D>;
};

template <> struct traits<Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>
{
    using abi = ABI::Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics;
    template <typename D> using consume = Windows::UI::Core::Preview::impl_ISystemNavigationManagerPreviewStatics<D>;
};

template <> struct traits<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs>
{
    using abi = ABI::Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Core.Preview.SystemNavigationCloseRequestedPreviewEventArgs"; }
};

template <> struct traits<Windows::UI::Core::Preview::SystemNavigationManagerPreview>
{
    using abi = ABI::Windows::UI::Core::Preview::SystemNavigationManagerPreview;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Core.Preview.SystemNavigationManagerPreview"; }
};

}

}
