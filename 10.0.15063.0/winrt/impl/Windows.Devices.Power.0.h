// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System::Power {

enum class BatteryStatus;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Power {

struct IBattery;
struct IBatteryReport;
struct IBatteryStatics;
struct Battery;
struct BatteryReport;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Power::IBattery>{ using type = interface_category; };
template <> struct category<Windows::Devices::Power::IBatteryReport>{ using type = interface_category; };
template <> struct category<Windows::Devices::Power::IBatteryStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Power::Battery>{ using type = class_category; };
template <> struct category<Windows::Devices::Power::BatteryReport>{ using type = class_category; };
template <> struct name<Windows::Devices::Power::IBattery>{ static constexpr auto & value{ L"Windows.Devices.Power.IBattery" }; };
template <> struct name<Windows::Devices::Power::IBatteryReport>{ static constexpr auto & value{ L"Windows.Devices.Power.IBatteryReport" }; };
template <> struct name<Windows::Devices::Power::IBatteryStatics>{ static constexpr auto & value{ L"Windows.Devices.Power.IBatteryStatics" }; };
template <> struct name<Windows::Devices::Power::Battery>{ static constexpr auto & value{ L"Windows.Devices.Power.Battery" }; };
template <> struct name<Windows::Devices::Power::BatteryReport>{ static constexpr auto & value{ L"Windows.Devices.Power.BatteryReport" }; };
template <> struct guid<Windows::Devices::Power::IBattery>{ static constexpr GUID value{ 0xBC894FC6,0x0072,0x47C8,{ 0x8B,0x5D,0x61,0x4A,0xAA,0x7A,0x43,0x7E } }; };
template <> struct guid<Windows::Devices::Power::IBatteryReport>{ static constexpr GUID value{ 0xC9858C3A,0x4E13,0x420A,{ 0xA8,0xD0,0x24,0xF1,0x8F,0x39,0x54,0x01 } }; };
template <> struct guid<Windows::Devices::Power::IBatteryStatics>{ static constexpr GUID value{ 0x79CD72B6,0x9E5E,0x4452,{ 0xBE,0xA6,0xDF,0xCD,0x54,0x1E,0x59,0x7F } }; };
template <> struct default_interface<Windows::Devices::Power::Battery>{ using type = Windows::Devices::Power::IBattery; };
template <> struct default_interface<Windows::Devices::Power::BatteryReport>{ using type = Windows::Devices::Power::IBatteryReport; };

template <typename D>
struct consume_Windows_Devices_Power_IBattery
{
    hstring DeviceId() const;
    Windows::Devices::Power::BatteryReport GetReport() const;
    event_token ReportUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::Power::Battery, Windows::Foundation::IInspectable> const& handler) const;
    using ReportUpdated_revoker = event_revoker<Windows::Devices::Power::IBattery>;
    ReportUpdated_revoker ReportUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Power::Battery, Windows::Foundation::IInspectable> const& handler) const;
    void ReportUpdated(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Power::IBattery> { template <typename D> using type = consume_Windows_Devices_Power_IBattery<D>; };

template <typename D>
struct consume_Windows_Devices_Power_IBatteryReport
{
    Windows::Foundation::IReference<int32_t> ChargeRateInMilliwatts() const;
    Windows::Foundation::IReference<int32_t> DesignCapacityInMilliwattHours() const;
    Windows::Foundation::IReference<int32_t> FullChargeCapacityInMilliwattHours() const;
    Windows::Foundation::IReference<int32_t> RemainingCapacityInMilliwattHours() const;
    Windows::System::Power::BatteryStatus Status() const;
};
template <> struct consume<Windows::Devices::Power::IBatteryReport> { template <typename D> using type = consume_Windows_Devices_Power_IBatteryReport<D>; };

template <typename D>
struct consume_Windows_Devices_Power_IBatteryStatics
{
    Windows::Devices::Power::Battery AggregateBattery() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Power::Battery> FromIdAsync(param::hstring const& deviceId) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::Devices::Power::IBatteryStatics> { template <typename D> using type = consume_Windows_Devices_Power_IBatteryStatics<D>; };

template <> struct abi<Windows::Devices::Power::IBattery>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetReport(::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_ReportUpdated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ReportUpdated(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Power::IBatteryReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChargeRateInMilliwatts(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DesignCapacityInMilliwattHours(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FullChargeCapacityInMilliwattHours(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemainingCapacityInMilliwattHours(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::System::Power::BatteryStatus>* value) = 0;
};};

template <> struct abi<Windows::Devices::Power::IBatteryStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AggregateBattery(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* result) = 0;
};};

}
