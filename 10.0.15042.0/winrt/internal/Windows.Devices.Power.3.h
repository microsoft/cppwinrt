// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Power.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Power {

struct WINRT_EBO Battery :
    Windows::Devices::Power::IBattery
{
    Battery(std::nullptr_t) noexcept {}
    static Windows::Devices::Power::Battery AggregateBattery();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Power::Battery> FromIdAsync(hstring_view deviceId);
    static hstring GetDeviceSelector();
};

struct WINRT_EBO BatteryReport :
    Windows::Devices::Power::IBatteryReport
{
    BatteryReport(std::nullptr_t) noexcept {}
};

}

}
