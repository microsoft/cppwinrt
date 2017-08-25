// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Adc.Provider.0.h"
#include "winrt/impl/Windows.Devices.Gpio.Provider.0.h"
#include "winrt/impl/Windows.Devices.I2c.Provider.0.h"
#include "winrt/impl/Windows.Devices.Pwm.Provider.0.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.0.h"
#include "winrt/impl/Windows.Devices.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices {

struct WINRT_EBO ILowLevelDevicesAggregateProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLevelDevicesAggregateProvider>
{
    ILowLevelDevicesAggregateProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLevelDevicesAggregateProviderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLevelDevicesAggregateProviderFactory>
{
    ILowLevelDevicesAggregateProviderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLevelDevicesController :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLevelDevicesController>
{
    ILowLevelDevicesController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLevelDevicesControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLevelDevicesControllerStatics>
{
    ILowLevelDevicesControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
