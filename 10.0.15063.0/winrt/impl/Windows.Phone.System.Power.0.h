// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Phone::System::Power {

enum class PowerSavingMode
{
    Off = 0,
    On = 1,
};

struct IPowerManagerStatics;
struct IPowerManagerStatics2;
struct PowerManager;

}

namespace winrt::impl {

template <> struct category<Windows::Phone::System::Power::IPowerManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::System::Power::IPowerManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Phone::System::Power::PowerManager>{ using type = class_category; };
template <> struct category<Windows::Phone::System::Power::PowerSavingMode>{ using type = enum_category; };
template <> struct name<Windows::Phone::System::Power::IPowerManagerStatics>{ static constexpr auto & value{ L"Windows.Phone.System.Power.IPowerManagerStatics" }; };
template <> struct name<Windows::Phone::System::Power::IPowerManagerStatics2>{ static constexpr auto & value{ L"Windows.Phone.System.Power.IPowerManagerStatics2" }; };
template <> struct name<Windows::Phone::System::Power::PowerManager>{ static constexpr auto & value{ L"Windows.Phone.System.Power.PowerManager" }; };
template <> struct name<Windows::Phone::System::Power::PowerSavingMode>{ static constexpr auto & value{ L"Windows.Phone.System.Power.PowerSavingMode" }; };
template <> struct guid<Windows::Phone::System::Power::IPowerManagerStatics>{ static constexpr GUID value{ 0x25DE8FD0,0x1C5B,0x11E1,{ 0xBD,0xDB,0x08,0x00,0x20,0x0C,0x9A,0x66 } }; };
template <> struct guid<Windows::Phone::System::Power::IPowerManagerStatics2>{ static constexpr GUID value{ 0x596236CF,0x1918,0x4551,{ 0xA4,0x66,0xC5,0x1A,0xAE,0x37,0x3B,0xF8 } }; };

template <typename D>
struct consume_Windows_Phone_System_Power_IPowerManagerStatics
{
    Windows::Phone::System::Power::PowerSavingMode PowerSavingMode() const;
    event_token PowerSavingModeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const;
    using PowerSavingModeChanged_revoker = event_revoker<Windows::Phone::System::Power::IPowerManagerStatics>;
    PowerSavingModeChanged_revoker PowerSavingModeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const;
    void PowerSavingModeChanged(event_token const& token) const;
};
template <> struct consume<Windows::Phone::System::Power::IPowerManagerStatics> { template <typename D> using type = consume_Windows_Phone_System_Power_IPowerManagerStatics<D>; };

template <typename D>
struct consume_Windows_Phone_System_Power_IPowerManagerStatics2
{
    bool PowerSavingModeEnabled() const;
};
template <> struct consume<Windows::Phone::System::Power::IPowerManagerStatics2> { template <typename D> using type = consume_Windows_Phone_System_Power_IPowerManagerStatics2<D>; };

template <> struct abi<Windows::Phone::System::Power::IPowerManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PowerSavingMode(abi_t<Windows::Phone::System::Power::PowerSavingMode>* value) = 0;
    virtual HRESULT __stdcall add_PowerSavingModeChanged(::IUnknown* changeHandler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PowerSavingModeChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Phone::System::Power::IPowerManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PowerSavingModeEnabled(bool* value) = 0;
};};

}
