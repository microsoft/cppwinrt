// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Sensors.Custom.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Sensors::Custom {

struct WINRT_EBO CustomSensor :
    Windows::Devices::Sensors::Custom::ICustomSensor
{
    CustomSensor(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector(GUID const& interfaceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> FromIdAsync(param::hstring const& sensorId);
};

struct WINRT_EBO CustomSensorReading :
    Windows::Devices::Sensors::Custom::ICustomSensorReading
{
    CustomSensorReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CustomSensorReadingChangedEventArgs :
    Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs
{
    CustomSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

}
