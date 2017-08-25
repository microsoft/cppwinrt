// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Sensors.Custom.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Sensors::Custom {

struct WINRT_EBO ICustomSensor :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomSensor>
{
    ICustomSensor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICustomSensorReading :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomSensorReading>
{
    ICustomSensorReading(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICustomSensorReadingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomSensorReadingChangedEventArgs>
{
    ICustomSensorReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICustomSensorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomSensorStatics>
{
    ICustomSensorStatics(std::nullptr_t = nullptr) noexcept {}
};

}
