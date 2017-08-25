// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::LockScreen {

struct ILockApplicationHost;
struct ILockApplicationHostStatics;
struct ILockScreenBadge;
struct ILockScreenInfo;
struct ILockScreenUnlockingDeferral;
struct ILockScreenUnlockingEventArgs;
struct LockApplicationHost;
struct LockScreenBadge;
struct LockScreenInfo;
struct LockScreenUnlockingDeferral;
struct LockScreenUnlockingEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::LockScreen::ILockApplicationHost>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::LockScreen::ILockScreenBadge>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::LockScreen::ILockScreenInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::LockScreen::LockApplicationHost>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::LockScreen::LockScreenBadge>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::LockScreen::LockScreenInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::LockScreen::ILockApplicationHost>{ static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.ILockApplicationHost" }; };
template <> struct name<Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.ILockApplicationHostStatics" }; };
template <> struct name<Windows::ApplicationModel::LockScreen::ILockScreenBadge>{ static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.ILockScreenBadge" }; };
template <> struct name<Windows::ApplicationModel::LockScreen::ILockScreenInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.ILockScreenInfo" }; };
template <> struct name<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.ILockScreenUnlockingDeferral" }; };
template <> struct name<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.ILockScreenUnlockingEventArgs" }; };
template <> struct name<Windows::ApplicationModel::LockScreen::LockApplicationHost>{ static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.LockApplicationHost" }; };
template <> struct name<Windows::ApplicationModel::LockScreen::LockScreenBadge>{ static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.LockScreenBadge" }; };
template <> struct name<Windows::ApplicationModel::LockScreen::LockScreenInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.LockScreenInfo" }; };
template <> struct name<Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.LockScreenUnlockingDeferral" }; };
template <> struct name<Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.LockScreenUnlockingEventArgs" }; };
template <> struct guid<Windows::ApplicationModel::LockScreen::ILockApplicationHost>{ static constexpr GUID value{ 0x38EE31AD,0xD94F,0x4E7C,{ 0x81,0xFA,0x4F,0x44,0x36,0x50,0x62,0x81 } }; };
template <> struct guid<Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics>{ static constexpr GUID value{ 0xF48FAB8E,0x23D7,0x4E63,{ 0x96,0xA1,0x66,0x6F,0xF5,0x2D,0x3B,0x2C } }; };
template <> struct guid<Windows::ApplicationModel::LockScreen::ILockScreenBadge>{ static constexpr GUID value{ 0xE95105D9,0x2BFF,0x4DB0,{ 0x9B,0x4F,0x38,0x24,0x77,0x8B,0x9C,0x9A } }; };
template <> struct guid<Windows::ApplicationModel::LockScreen::ILockScreenInfo>{ static constexpr GUID value{ 0xF59AA65C,0x9711,0x4DC9,{ 0xA6,0x30,0x95,0xB6,0xCB,0x8C,0xDA,0xD0 } }; };
template <> struct guid<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral>{ static constexpr GUID value{ 0x7E7D1AD6,0x5203,0x43E7,{ 0x9B,0xD6,0x7C,0x39,0x47,0xD1,0xE3,0xFE } }; };
template <> struct guid<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs>{ static constexpr GUID value{ 0x44E6C007,0x75FB,0x4ABB,{ 0x9F,0x8B,0x82,0x47,0x48,0x90,0x0C,0x71 } }; };
template <> struct default_interface<Windows::ApplicationModel::LockScreen::LockApplicationHost>{ using type = Windows::ApplicationModel::LockScreen::ILockApplicationHost; };
template <> struct default_interface<Windows::ApplicationModel::LockScreen::LockScreenBadge>{ using type = Windows::ApplicationModel::LockScreen::ILockScreenBadge; };
template <> struct default_interface<Windows::ApplicationModel::LockScreen::LockScreenInfo>{ using type = Windows::ApplicationModel::LockScreen::ILockScreenInfo; };
template <> struct default_interface<Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral>{ using type = Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral; };
template <> struct default_interface<Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs>{ using type = Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs; };

template <typename D>
struct consume_Windows_ApplicationModel_LockScreen_ILockApplicationHost
{
    void RequestUnlock() const;
    event_token Unlocking(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> const& handler) const;
    using Unlocking_revoker = event_revoker<Windows::ApplicationModel::LockScreen::ILockApplicationHost>;
    Unlocking_revoker Unlocking(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> const& handler) const;
    void Unlocking(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::LockScreen::ILockApplicationHost> { template <typename D> using type = consume_Windows_ApplicationModel_LockScreen_ILockApplicationHost<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_LockScreen_ILockApplicationHostStatics
{
    Windows::ApplicationModel::LockScreen::LockApplicationHost GetForCurrentView() const;
};
template <> struct consume<Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics> { template <typename D> using type = consume_Windows_ApplicationModel_LockScreen_ILockApplicationHostStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge
{
    Windows::Storage::Streams::IRandomAccessStream Logo() const;
    Windows::Storage::Streams::IRandomAccessStream Glyph() const;
    Windows::Foundation::IReference<uint32_t> Number() const;
    hstring AutomationName() const;
    void LaunchApp() const;
};
template <> struct consume<Windows::ApplicationModel::LockScreen::ILockScreenBadge> { template <typename D> using type = consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo
{
    event_token LockScreenImageChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
    using LockScreenImageChanged_revoker = event_revoker<Windows::ApplicationModel::LockScreen::ILockScreenInfo>;
    LockScreenImageChanged_revoker LockScreenImageChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
    void LockScreenImageChanged(event_token const& token) const;
    Windows::Storage::Streams::IRandomAccessStream LockScreenImage() const;
    event_token BadgesChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
    using BadgesChanged_revoker = event_revoker<Windows::ApplicationModel::LockScreen::ILockScreenInfo>;
    BadgesChanged_revoker BadgesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
    void BadgesChanged(event_token const& token) const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::LockScreen::LockScreenBadge> Badges() const;
    event_token DetailTextChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
    using DetailTextChanged_revoker = event_revoker<Windows::ApplicationModel::LockScreen::ILockScreenInfo>;
    DetailTextChanged_revoker DetailTextChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
    void DetailTextChanged(event_token const& token) const;
    Windows::Foundation::Collections::IVectorView<hstring> DetailText() const;
    event_token AlarmIconChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
    using AlarmIconChanged_revoker = event_revoker<Windows::ApplicationModel::LockScreen::ILockScreenInfo>;
    AlarmIconChanged_revoker AlarmIconChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
    void AlarmIconChanged(event_token const& token) const;
    Windows::Storage::Streams::IRandomAccessStream AlarmIcon() const;
};
template <> struct consume<Windows::ApplicationModel::LockScreen::ILockScreenInfo> { template <typename D> using type = consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral> { template <typename D> using type = consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingDeferral<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingEventArgs
{
    Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral GetDeferral() const;
    Windows::Foundation::DateTime Deadline() const;
};
template <> struct consume<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingEventArgs<D>; };

template <> struct abi<Windows::ApplicationModel::LockScreen::ILockApplicationHost>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestUnlock() = 0;
    virtual HRESULT __stdcall add_Unlocking(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Unlocking(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::LockScreen::ILockScreenBadge>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Logo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Glyph(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Number(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AutomationName(HSTRING* value) = 0;
    virtual HRESULT __stdcall LaunchApp() = 0;
};};

template <> struct abi<Windows::ApplicationModel::LockScreen::ILockScreenInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_LockScreenImageChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_LockScreenImageChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_LockScreenImage(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_BadgesChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BadgesChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Badges(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_DetailTextChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DetailTextChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_DetailText(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_AlarmIconChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AlarmIconChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_AlarmIcon(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeferral(::IUnknown** deferral) = 0;
    virtual HRESULT __stdcall get_Deadline(abi_t<Windows::Foundation::DateTime>* value) = 0;
};};

}
