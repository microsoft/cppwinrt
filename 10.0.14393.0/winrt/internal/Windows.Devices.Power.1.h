// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Power.0.h"
#include "Windows.System.Power.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Power {

struct __declspec(uuid("bc894fc6-0072-47c8-8b5d-614aaa7a437e")) __declspec(novtable) IBattery : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetReport(Windows::Devices::Power::IBatteryReport ** result) = 0;
    virtual HRESULT __stdcall add_ReportUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::Power::Battery, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ReportUpdated(event_token token) = 0;
};

struct __declspec(uuid("c9858c3a-4e13-420a-a8d0-24f18f395401")) __declspec(novtable) IBatteryReport : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ChargeRateInMilliwatts(Windows::Foundation::IReference<int32_t> ** value) = 0;
    virtual HRESULT __stdcall get_DesignCapacityInMilliwattHours(Windows::Foundation::IReference<int32_t> ** value) = 0;
    virtual HRESULT __stdcall get_FullChargeCapacityInMilliwattHours(Windows::Foundation::IReference<int32_t> ** value) = 0;
    virtual HRESULT __stdcall get_RemainingCapacityInMilliwattHours(Windows::Foundation::IReference<int32_t> ** value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::System::Power::BatteryStatus * value) = 0;
};

struct __declspec(uuid("79cd72b6-9e5e-4452-bea6-dfcd541e597f")) __declspec(novtable) IBatteryStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AggregateBattery(Windows::Devices::Power::IBattery ** result) = 0;
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::Power::Battery> ** result) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelector(hstring * result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Power::Battery> { using default_interface = Windows::Devices::Power::IBattery; };
template <> struct traits<Windows::Devices::Power::BatteryReport> { using default_interface = Windows::Devices::Power::IBatteryReport; };

}

namespace Windows::Devices::Power {

template <typename T> struct impl_IBattery;
template <typename T> struct impl_IBatteryReport;
template <typename T> struct impl_IBatteryStatics;

}

namespace impl {

template <> struct traits<Windows::Devices::Power::IBattery>
{
    using abi = ABI::Windows::Devices::Power::IBattery;
    template <typename D> using consume = Windows::Devices::Power::impl_IBattery<D>;
};

template <> struct traits<Windows::Devices::Power::IBatteryReport>
{
    using abi = ABI::Windows::Devices::Power::IBatteryReport;
    template <typename D> using consume = Windows::Devices::Power::impl_IBatteryReport<D>;
};

template <> struct traits<Windows::Devices::Power::IBatteryStatics>
{
    using abi = ABI::Windows::Devices::Power::IBatteryStatics;
    template <typename D> using consume = Windows::Devices::Power::impl_IBatteryStatics<D>;
};

template <> struct traits<Windows::Devices::Power::Battery>
{
    using abi = ABI::Windows::Devices::Power::Battery;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Power.Battery"; }
};

template <> struct traits<Windows::Devices::Power::BatteryReport>
{
    using abi = ABI::Windows::Devices::Power::BatteryReport;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Power.BatteryReport"; }
};

}

}
