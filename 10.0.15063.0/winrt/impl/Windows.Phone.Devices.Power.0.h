// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Phone::Devices::Power {

struct IBattery;
struct IBatteryStatics;
struct Battery;

}

namespace winrt::impl {

template <> struct category<Windows::Phone::Devices::Power::IBattery>{ using type = interface_category; };
template <> struct category<Windows::Phone::Devices::Power::IBatteryStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::Devices::Power::Battery>{ using type = class_category; };
template <> struct name<Windows::Phone::Devices::Power::IBattery>{ static constexpr auto & value{ L"Windows.Phone.Devices.Power.IBattery" }; };
template <> struct name<Windows::Phone::Devices::Power::IBatteryStatics>{ static constexpr auto & value{ L"Windows.Phone.Devices.Power.IBatteryStatics" }; };
template <> struct name<Windows::Phone::Devices::Power::Battery>{ static constexpr auto & value{ L"Windows.Phone.Devices.Power.Battery" }; };
template <> struct guid<Windows::Phone::Devices::Power::IBattery>{ static constexpr GUID value{ 0x972ADBDD,0x6720,0x4702,{ 0xA4,0x76,0xB9,0xD3,0x8A,0x00,0x70,0xE3 } }; };
template <> struct guid<Windows::Phone::Devices::Power::IBatteryStatics>{ static constexpr GUID value{ 0xFAF5BC70,0x6369,0x11E1,{ 0xB8,0x6C,0x08,0x00,0x20,0x0C,0x9A,0x66 } }; };
template <> struct default_interface<Windows::Phone::Devices::Power::Battery>{ using type = Windows::Phone::Devices::Power::IBattery; };

template <typename D>
struct consume_Windows_Phone_Devices_Power_IBattery
{
    int32_t RemainingChargePercent() const;
    Windows::Foundation::TimeSpan RemainingDischargeTime() const;
    event_token RemainingChargePercentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const;
    using RemainingChargePercentChanged_revoker = event_revoker<Windows::Phone::Devices::Power::IBattery>;
    RemainingChargePercentChanged_revoker RemainingChargePercentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const;
    void RemainingChargePercentChanged(event_token const& token) const;
};
template <> struct consume<Windows::Phone::Devices::Power::IBattery> { template <typename D> using type = consume_Windows_Phone_Devices_Power_IBattery<D>; };

template <typename D>
struct consume_Windows_Phone_Devices_Power_IBatteryStatics
{
    Windows::Phone::Devices::Power::Battery GetDefault() const;
};
template <> struct consume<Windows::Phone::Devices::Power::IBatteryStatics> { template <typename D> using type = consume_Windows_Phone_Devices_Power_IBatteryStatics<D>; };

template <> struct abi<Windows::Phone::Devices::Power::IBattery>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemainingChargePercent(int32_t* value) = 0;
    virtual HRESULT __stdcall get_RemainingDischargeTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall add_RemainingChargePercentChanged(::IUnknown* changeHandler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RemainingChargePercentChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Phone::Devices::Power::IBatteryStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

}
