// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Notifications {

struct BadgeUpdater;
struct TileUpdater;
struct ToastNotifier;

}

WINRT_EXPORT namespace winrt::Windows::Phone::StartScreen {

struct IDualSimTile;
struct IDualSimTileStatics;
struct IToastNotificationManagerStatics3;
struct DualSimTile;

}

namespace winrt::impl {

template <> struct category<Windows::Phone::StartScreen::IDualSimTile>{ using type = interface_category; };
template <> struct category<Windows::Phone::StartScreen::IDualSimTileStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::StartScreen::IToastNotificationManagerStatics3>{ using type = interface_category; };
template <> struct category<Windows::Phone::StartScreen::DualSimTile>{ using type = class_category; };
template <> struct name<Windows::Phone::StartScreen::IDualSimTile>{ static constexpr auto & value{ L"Windows.Phone.StartScreen.IDualSimTile" }; };
template <> struct name<Windows::Phone::StartScreen::IDualSimTileStatics>{ static constexpr auto & value{ L"Windows.Phone.StartScreen.IDualSimTileStatics" }; };
template <> struct name<Windows::Phone::StartScreen::IToastNotificationManagerStatics3>{ static constexpr auto & value{ L"Windows.Phone.StartScreen.IToastNotificationManagerStatics3" }; };
template <> struct name<Windows::Phone::StartScreen::DualSimTile>{ static constexpr auto & value{ L"Windows.Phone.StartScreen.DualSimTile" }; };
template <> struct guid<Windows::Phone::StartScreen::IDualSimTile>{ static constexpr GUID value{ 0x143AB213,0xD05F,0x4041,{ 0xA1,0x8C,0x3E,0x3F,0xCB,0x75,0xB4,0x1E } }; };
template <> struct guid<Windows::Phone::StartScreen::IDualSimTileStatics>{ static constexpr GUID value{ 0x50567C9E,0xC58F,0x4DC9,{ 0xB6,0xE8,0xFA,0x67,0x77,0xEE,0xEB,0x37 } }; };
template <> struct guid<Windows::Phone::StartScreen::IToastNotificationManagerStatics3>{ static constexpr GUID value{ 0x2717F54B,0x50DF,0x4455,{ 0x8E,0x6E,0x41,0xE0,0xFC,0x8E,0x13,0xCE } }; };
template <> struct default_interface<Windows::Phone::StartScreen::DualSimTile>{ using type = Windows::Phone::StartScreen::IDualSimTile; };

template <typename D>
struct consume_Windows_Phone_StartScreen_IDualSimTile
{
    void DisplayName(param::hstring const& value) const;
    hstring DisplayName() const;
    bool IsPinnedToStart() const;
    Windows::Foundation::IAsyncOperation<bool> CreateAsync() const;
    Windows::Foundation::IAsyncOperation<bool> UpdateAsync() const;
    Windows::Foundation::IAsyncOperation<bool> DeleteAsync() const;
};
template <> struct consume<Windows::Phone::StartScreen::IDualSimTile> { template <typename D> using type = consume_Windows_Phone_StartScreen_IDualSimTile<D>; };

template <typename D>
struct consume_Windows_Phone_StartScreen_IDualSimTileStatics
{
    Windows::Phone::StartScreen::DualSimTile GetTileForSim2() const;
    Windows::Foundation::IAsyncOperation<bool> UpdateDisplayNameForSim1Async(param::hstring const& name) const;
    Windows::UI::Notifications::TileUpdater CreateTileUpdaterForSim1() const;
    Windows::UI::Notifications::TileUpdater CreateTileUpdaterForSim2() const;
    Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForSim1() const;
    Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForSim2() const;
    Windows::UI::Notifications::ToastNotifier CreateToastNotifierForSim1() const;
    Windows::UI::Notifications::ToastNotifier CreateToastNotifierForSim2() const;
};
template <> struct consume<Windows::Phone::StartScreen::IDualSimTileStatics> { template <typename D> using type = consume_Windows_Phone_StartScreen_IDualSimTileStatics<D>; };

template <typename D>
struct consume_Windows_Phone_StartScreen_IToastNotificationManagerStatics3
{
    Windows::UI::Notifications::ToastNotifier CreateToastNotifierForSecondaryTile(param::hstring const& tileId) const;
};
template <> struct consume<Windows::Phone::StartScreen::IToastNotificationManagerStatics3> { template <typename D> using type = consume_Windows_Phone_StartScreen_IToastNotificationManagerStatics3<D>; };

template <> struct abi<Windows::Phone::StartScreen::IDualSimTile>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsPinnedToStart(bool* value) = 0;
    virtual HRESULT __stdcall CreateAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UpdateAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeleteAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Phone::StartScreen::IDualSimTileStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetTileForSim2(::IUnknown** result) = 0;
    virtual HRESULT __stdcall UpdateDisplayNameForSim1Async(HSTRING name, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateTileUpdaterForSim1(::IUnknown** updater) = 0;
    virtual HRESULT __stdcall CreateTileUpdaterForSim2(::IUnknown** updater) = 0;
    virtual HRESULT __stdcall CreateBadgeUpdaterForSim1(::IUnknown** updater) = 0;
    virtual HRESULT __stdcall CreateBadgeUpdaterForSim2(::IUnknown** updater) = 0;
    virtual HRESULT __stdcall CreateToastNotifierForSim1(::IUnknown** notifier) = 0;
    virtual HRESULT __stdcall CreateToastNotifierForSim2(::IUnknown** notifier) = 0;
};};

template <> struct abi<Windows::Phone::StartScreen::IToastNotificationManagerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateToastNotifierForSecondaryTile(HSTRING tileId, ::IUnknown** notifier) = 0;
};};

}
