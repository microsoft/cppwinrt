// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Sensors.Custom.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Sensors::Custom {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Devices::Sensors::Custom {

struct WINRT_EBO CustomSensor :
    Windows::Devices::Sensors::Custom::ICustomSensor,
    impl::require<CustomSensor, Windows::Devices::Sensors::Custom::ICustomSensor2>
{
    CustomSensor(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector(GUID const& interfaceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> FromIdAsync(param::hstring const& sensorId);
};

struct WINRT_EBO CustomSensorReading :
    Windows::Devices::Sensors::Custom::ICustomSensorReading,
    impl::require<CustomSensorReading, Windows::Devices::Sensors::Custom::ICustomSensorReading2>
{
    CustomSensorReading(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CustomSensorReadingChangedEventArgs :
    Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs
{
    CustomSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
};

}
