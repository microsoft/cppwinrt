// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core::Preview {

struct ISystemNavigationCloseRequestedPreviewEventArgs;
struct ISystemNavigationManagerPreview;
struct ISystemNavigationManagerPreviewStatics;
struct SystemNavigationCloseRequestedPreviewEventArgs;
struct SystemNavigationManagerPreview;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::Preview::ISystemNavigationManagerPreview>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::Preview::SystemNavigationManagerPreview>{ using type = class_category; };
template <> struct name<Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.Preview.ISystemNavigationCloseRequestedPreviewEventArgs" }; };
template <> struct name<Windows::UI::Core::Preview::ISystemNavigationManagerPreview>{ static constexpr auto & value{ L"Windows.UI.Core.Preview.ISystemNavigationManagerPreview" }; };
template <> struct name<Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>{ static constexpr auto & value{ L"Windows.UI.Core.Preview.ISystemNavigationManagerPreviewStatics" }; };
template <> struct name<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.Preview.SystemNavigationCloseRequestedPreviewEventArgs" }; };
template <> struct name<Windows::UI::Core::Preview::SystemNavigationManagerPreview>{ static constexpr auto & value{ L"Windows.UI.Core.Preview.SystemNavigationManagerPreview" }; };
template <> struct guid<Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs>{ static constexpr GUID value{ 0x83D00DE1,0xCBE5,0x4F31,{ 0x84,0x14,0x36,0x1D,0xA0,0x46,0x51,0x8F } }; };
template <> struct guid<Windows::UI::Core::Preview::ISystemNavigationManagerPreview>{ static constexpr GUID value{ 0xEC5F0488,0x6425,0x4777,{ 0xA5,0x36,0xCB,0x56,0x34,0x42,0x7F,0x0D } }; };
template <> struct guid<Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>{ static constexpr GUID value{ 0x0E971360,0xDF74,0x4BCE,{ 0x84,0xCB,0xBD,0x11,0x81,0xAC,0x0A,0x71 } }; };
template <> struct default_interface<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs>{ using type = Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs; };
template <> struct default_interface<Windows::UI::Core::Preview::SystemNavigationManagerPreview>{ using type = Windows::UI::Core::Preview::ISystemNavigationManagerPreview; };

template <typename D>
struct consume_Windows_UI_Core_Preview_ISystemNavigationCloseRequestedPreviewEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs> { template <typename D> using type = consume_Windows_UI_Core_Preview_ISystemNavigationCloseRequestedPreviewEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_Preview_ISystemNavigationManagerPreview
{
    event_token CloseRequested(Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> const& handler) const;
    using CloseRequested_revoker = event_revoker<Windows::UI::Core::Preview::ISystemNavigationManagerPreview>;
    CloseRequested_revoker CloseRequested(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> const& handler) const;
    void CloseRequested(event_token const& token) const;
};
template <> struct consume<Windows::UI::Core::Preview::ISystemNavigationManagerPreview> { template <typename D> using type = consume_Windows_UI_Core_Preview_ISystemNavigationManagerPreview<D>; };

template <typename D>
struct consume_Windows_UI_Core_Preview_ISystemNavigationManagerPreviewStatics
{
    Windows::UI::Core::Preview::SystemNavigationManagerPreview GetForCurrentView() const;
};
template <> struct consume<Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics> { template <typename D> using type = consume_Windows_UI_Core_Preview_ISystemNavigationManagerPreviewStatics<D>; };

template <> struct abi<Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Core::Preview::ISystemNavigationManagerPreview>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_CloseRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CloseRequested(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** loader) = 0;
};};

}
