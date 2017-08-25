// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.Power.1.h"
#include "winrt/impl/Windows.Devices.Power.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Power {

struct WINRT_EBO Battery :
    Windows::Devices::Power::IBattery
{
    Battery(std::nullptr_t) noexcept {}
    static Windows::Devices::Power::Battery AggregateBattery();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Power::Battery> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
};

struct WINRT_EBO BatteryReport :
    Windows::Devices::Power::IBatteryReport
{
    BatteryReport(std::nullptr_t) noexcept {}
};

}
