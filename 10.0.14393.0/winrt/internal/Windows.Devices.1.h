// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.0.h"
#include "Windows.Devices.Adc.Provider.0.h"
#include "Windows.Devices.Gpio.Provider.0.h"
#include "Windows.Devices.I2c.Provider.0.h"
#include "Windows.Devices.Pwm.Provider.0.h"
#include "Windows.Devices.Spi.Provider.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices {

struct __declspec(uuid("a73e561c-aac1-4ec7-a852-479f7060d01f")) __declspec(novtable) ILowLevelDevicesAggregateProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AdcControllerProvider(Windows::Devices::Adc::Provider::IAdcControllerProvider ** value) = 0;
    virtual HRESULT __stdcall get_PwmControllerProvider(Windows::Devices::Pwm::Provider::IPwmControllerProvider ** value) = 0;
    virtual HRESULT __stdcall get_GpioControllerProvider(Windows::Devices::Gpio::Provider::IGpioControllerProvider ** value) = 0;
    virtual HRESULT __stdcall get_I2cControllerProvider(Windows::Devices::I2c::Provider::II2cControllerProvider ** value) = 0;
    virtual HRESULT __stdcall get_SpiControllerProvider(Windows::Devices::Spi::Provider::ISpiControllerProvider ** value) = 0;
};

struct __declspec(uuid("9ac4aaf6-3473-465e-96d5-36281a2c57af")) __declspec(novtable) ILowLevelDevicesAggregateProviderFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Devices::Adc::Provider::IAdcControllerProvider * adc, Windows::Devices::Pwm::Provider::IPwmControllerProvider * pwm, Windows::Devices::Gpio::Provider::IGpioControllerProvider * gpio, Windows::Devices::I2c::Provider::II2cControllerProvider * i2c, Windows::Devices::Spi::Provider::ISpiControllerProvider * spi, Windows::Devices::ILowLevelDevicesAggregateProvider ** value) = 0;
};

struct __declspec(uuid("2ec23dd4-179b-45de-9b39-3ae02527de52")) __declspec(novtable) ILowLevelDevicesController : Windows::IInspectable
{
};

struct __declspec(uuid("093e926a-fccb-4394-a697-19de637c2db3")) __declspec(novtable) ILowLevelDevicesControllerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DefaultProvider(Windows::Devices::ILowLevelDevicesAggregateProvider ** value) = 0;
    virtual HRESULT __stdcall put_DefaultProvider(Windows::Devices::ILowLevelDevicesAggregateProvider * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::LowLevelDevicesAggregateProvider> { using default_interface = Windows::Devices::ILowLevelDevicesAggregateProvider; };
template <> struct traits<Windows::Devices::LowLevelDevicesController> { using default_interface = Windows::Devices::ILowLevelDevicesController; };

}

namespace Windows::Devices {

template <typename T> struct impl_ILowLevelDevicesAggregateProvider;
template <typename T> struct impl_ILowLevelDevicesAggregateProviderFactory;
template <typename T> struct impl_ILowLevelDevicesController;
template <typename T> struct impl_ILowLevelDevicesControllerStatics;

}

namespace impl {

template <> struct traits<Windows::Devices::ILowLevelDevicesAggregateProvider>
{
    using abi = ABI::Windows::Devices::ILowLevelDevicesAggregateProvider;
    template <typename D> using consume = Windows::Devices::impl_ILowLevelDevicesAggregateProvider<D>;
};

template <> struct traits<Windows::Devices::ILowLevelDevicesAggregateProviderFactory>
{
    using abi = ABI::Windows::Devices::ILowLevelDevicesAggregateProviderFactory;
    template <typename D> using consume = Windows::Devices::impl_ILowLevelDevicesAggregateProviderFactory<D>;
};

template <> struct traits<Windows::Devices::ILowLevelDevicesController>
{
    using abi = ABI::Windows::Devices::ILowLevelDevicesController;
    template <typename D> using consume = Windows::Devices::impl_ILowLevelDevicesController<D>;
};

template <> struct traits<Windows::Devices::ILowLevelDevicesControllerStatics>
{
    using abi = ABI::Windows::Devices::ILowLevelDevicesControllerStatics;
    template <typename D> using consume = Windows::Devices::impl_ILowLevelDevicesControllerStatics<D>;
};

template <> struct traits<Windows::Devices::LowLevelDevicesAggregateProvider>
{
    using abi = ABI::Windows::Devices::LowLevelDevicesAggregateProvider;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.LowLevelDevicesAggregateProvider"; }
};

template <> struct traits<Windows::Devices::LowLevelDevicesController>
{
    using abi = ABI::Windows::Devices::LowLevelDevicesController;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.LowLevelDevicesController"; }
};

}

}
