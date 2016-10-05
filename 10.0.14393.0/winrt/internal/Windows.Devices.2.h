// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices {

template <typename D>
struct WINRT_EBO impl_ILowLevelDevicesAggregateProvider
{
    Windows::Devices::Adc::Provider::IAdcControllerProvider AdcControllerProvider() const;
    Windows::Devices::Pwm::Provider::IPwmControllerProvider PwmControllerProvider() const;
    Windows::Devices::Gpio::Provider::IGpioControllerProvider GpioControllerProvider() const;
    Windows::Devices::I2c::Provider::II2cControllerProvider I2cControllerProvider() const;
    Windows::Devices::Spi::Provider::ISpiControllerProvider SpiControllerProvider() const;
};

template <typename D>
struct WINRT_EBO impl_ILowLevelDevicesAggregateProviderFactory
{
    Windows::Devices::LowLevelDevicesAggregateProvider Create(const Windows::Devices::Adc::Provider::IAdcControllerProvider & adc, const Windows::Devices::Pwm::Provider::IPwmControllerProvider & pwm, const Windows::Devices::Gpio::Provider::IGpioControllerProvider & gpio, const Windows::Devices::I2c::Provider::II2cControllerProvider & i2c, const Windows::Devices::Spi::Provider::ISpiControllerProvider & spi) const;
};

template <typename D>
struct WINRT_EBO impl_ILowLevelDevicesController
{
};

template <typename D>
struct WINRT_EBO impl_ILowLevelDevicesControllerStatics
{
    Windows::Devices::ILowLevelDevicesAggregateProvider DefaultProvider() const;
    void DefaultProvider(const Windows::Devices::ILowLevelDevicesAggregateProvider & value) const;
};

struct ILowLevelDevicesAggregateProvider :
    Windows::IInspectable,
    impl::consume<ILowLevelDevicesAggregateProvider>
{
    ILowLevelDevicesAggregateProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILowLevelDevicesAggregateProvider>(m_ptr); }
};

struct ILowLevelDevicesAggregateProviderFactory :
    Windows::IInspectable,
    impl::consume<ILowLevelDevicesAggregateProviderFactory>
{
    ILowLevelDevicesAggregateProviderFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILowLevelDevicesAggregateProviderFactory>(m_ptr); }
};

struct ILowLevelDevicesController :
    Windows::IInspectable,
    impl::consume<ILowLevelDevicesController>
{
    ILowLevelDevicesController(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILowLevelDevicesController>(m_ptr); }
};

struct ILowLevelDevicesControllerStatics :
    Windows::IInspectable,
    impl::consume<ILowLevelDevicesControllerStatics>
{
    ILowLevelDevicesControllerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILowLevelDevicesControllerStatics>(m_ptr); }
};

}

}
