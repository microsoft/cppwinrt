// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Adc.Provider.1.h"
#include "winrt/impl/Windows.Devices.Gpio.Provider.1.h"
#include "winrt/impl/Windows.Devices.I2c.Provider.1.h"
#include "winrt/impl/Windows.Devices.Pwm.Provider.1.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.1.h"
#include "winrt/impl/Windows.Devices.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices {

struct WINRT_EBO LowLevelDevicesAggregateProvider :
    Windows::Devices::ILowLevelDevicesAggregateProvider
{
    LowLevelDevicesAggregateProvider(std::nullptr_t) noexcept {}
    LowLevelDevicesAggregateProvider(Windows::Devices::Adc::Provider::IAdcControllerProvider const& adc, Windows::Devices::Pwm::Provider::IPwmControllerProvider const& pwm, Windows::Devices::Gpio::Provider::IGpioControllerProvider const& gpio, Windows::Devices::I2c::Provider::II2cControllerProvider const& i2c, Windows::Devices::Spi::Provider::ISpiControllerProvider const& spi);
};

struct WINRT_EBO LowLevelDevicesController :
    Windows::Devices::ILowLevelDevicesController
{
    LowLevelDevicesController(std::nullptr_t) noexcept {}
    static Windows::Devices::ILowLevelDevicesAggregateProvider DefaultProvider();
    static void DefaultProvider(Windows::Devices::ILowLevelDevicesAggregateProvider const& value);
};

}
