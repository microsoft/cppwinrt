// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Devices.Adc.Provider.3.h"
#include "internal/Windows.Devices.Pwm.Provider.3.h"
#include "internal/Windows.Devices.Gpio.Provider.3.h"
#include "internal/Windows.Devices.I2c.Provider.3.h"
#include "internal/Windows.Devices.Spi.Provider.3.h"
#include "internal/Windows.Devices.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::ILowLevelDevicesAggregateProvider> : produce_base<D, Windows::Devices::ILowLevelDevicesAggregateProvider>
{
    HRESULT __stdcall get_AdcControllerProvider(abi_arg_out<Windows::Devices::Adc::Provider::IAdcControllerProvider> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AdcControllerProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PwmControllerProvider(abi_arg_out<Windows::Devices::Pwm::Provider::IPwmControllerProvider> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PwmControllerProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GpioControllerProvider(abi_arg_out<Windows::Devices::Gpio::Provider::IGpioControllerProvider> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GpioControllerProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_I2cControllerProvider(abi_arg_out<Windows::Devices::I2c::Provider::II2cControllerProvider> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().I2cControllerProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpiControllerProvider(abi_arg_out<Windows::Devices::Spi::Provider::ISpiControllerProvider> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SpiControllerProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::ILowLevelDevicesAggregateProviderFactory> : produce_base<D, Windows::Devices::ILowLevelDevicesAggregateProviderFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Devices::Adc::Provider::IAdcControllerProvider> adc, abi_arg_in<Windows::Devices::Pwm::Provider::IPwmControllerProvider> pwm, abi_arg_in<Windows::Devices::Gpio::Provider::IGpioControllerProvider> gpio, abi_arg_in<Windows::Devices::I2c::Provider::II2cControllerProvider> i2c, abi_arg_in<Windows::Devices::Spi::Provider::ISpiControllerProvider> spi, abi_arg_out<Windows::Devices::ILowLevelDevicesAggregateProvider> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Create(*reinterpret_cast<const Windows::Devices::Adc::Provider::IAdcControllerProvider *>(&adc), *reinterpret_cast<const Windows::Devices::Pwm::Provider::IPwmControllerProvider *>(&pwm), *reinterpret_cast<const Windows::Devices::Gpio::Provider::IGpioControllerProvider *>(&gpio), *reinterpret_cast<const Windows::Devices::I2c::Provider::II2cControllerProvider *>(&i2c), *reinterpret_cast<const Windows::Devices::Spi::Provider::ISpiControllerProvider *>(&spi)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::ILowLevelDevicesController> : produce_base<D, Windows::Devices::ILowLevelDevicesController>
{};

template <typename D>
struct produce<D, Windows::Devices::ILowLevelDevicesControllerStatics> : produce_base<D, Windows::Devices::ILowLevelDevicesControllerStatics>
{
    HRESULT __stdcall get_DefaultProvider(abi_arg_out<Windows::Devices::ILowLevelDevicesAggregateProvider> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultProvider(abi_arg_in<Windows::Devices::ILowLevelDevicesAggregateProvider> value) noexcept override
    {
        try
        {
            this->shim().DefaultProvider(*reinterpret_cast<const Windows::Devices::ILowLevelDevicesAggregateProvider *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices {

template <typename D> Windows::Devices::Adc::Provider::IAdcControllerProvider impl_ILowLevelDevicesAggregateProvider<D>::AdcControllerProvider() const
{
    Windows::Devices::Adc::Provider::IAdcControllerProvider value;
    check_hresult(static_cast<const ILowLevelDevicesAggregateProvider &>(static_cast<const D &>(*this))->get_AdcControllerProvider(put(value)));
    return value;
}

template <typename D> Windows::Devices::Pwm::Provider::IPwmControllerProvider impl_ILowLevelDevicesAggregateProvider<D>::PwmControllerProvider() const
{
    Windows::Devices::Pwm::Provider::IPwmControllerProvider value;
    check_hresult(static_cast<const ILowLevelDevicesAggregateProvider &>(static_cast<const D &>(*this))->get_PwmControllerProvider(put(value)));
    return value;
}

template <typename D> Windows::Devices::Gpio::Provider::IGpioControllerProvider impl_ILowLevelDevicesAggregateProvider<D>::GpioControllerProvider() const
{
    Windows::Devices::Gpio::Provider::IGpioControllerProvider value;
    check_hresult(static_cast<const ILowLevelDevicesAggregateProvider &>(static_cast<const D &>(*this))->get_GpioControllerProvider(put(value)));
    return value;
}

template <typename D> Windows::Devices::I2c::Provider::II2cControllerProvider impl_ILowLevelDevicesAggregateProvider<D>::I2cControllerProvider() const
{
    Windows::Devices::I2c::Provider::II2cControllerProvider value;
    check_hresult(static_cast<const ILowLevelDevicesAggregateProvider &>(static_cast<const D &>(*this))->get_I2cControllerProvider(put(value)));
    return value;
}

template <typename D> Windows::Devices::Spi::Provider::ISpiControllerProvider impl_ILowLevelDevicesAggregateProvider<D>::SpiControllerProvider() const
{
    Windows::Devices::Spi::Provider::ISpiControllerProvider value;
    check_hresult(static_cast<const ILowLevelDevicesAggregateProvider &>(static_cast<const D &>(*this))->get_SpiControllerProvider(put(value)));
    return value;
}

template <typename D> Windows::Devices::LowLevelDevicesAggregateProvider impl_ILowLevelDevicesAggregateProviderFactory<D>::Create(const Windows::Devices::Adc::Provider::IAdcControllerProvider & adc, const Windows::Devices::Pwm::Provider::IPwmControllerProvider & pwm, const Windows::Devices::Gpio::Provider::IGpioControllerProvider & gpio, const Windows::Devices::I2c::Provider::II2cControllerProvider & i2c, const Windows::Devices::Spi::Provider::ISpiControllerProvider & spi) const
{
    Windows::Devices::LowLevelDevicesAggregateProvider value { nullptr };
    check_hresult(static_cast<const ILowLevelDevicesAggregateProviderFactory &>(static_cast<const D &>(*this))->abi_Create(get(adc), get(pwm), get(gpio), get(i2c), get(spi), put(value)));
    return value;
}

template <typename D> Windows::Devices::ILowLevelDevicesAggregateProvider impl_ILowLevelDevicesControllerStatics<D>::DefaultProvider() const
{
    Windows::Devices::ILowLevelDevicesAggregateProvider value;
    check_hresult(static_cast<const ILowLevelDevicesControllerStatics &>(static_cast<const D &>(*this))->get_DefaultProvider(put(value)));
    return value;
}

template <typename D> void impl_ILowLevelDevicesControllerStatics<D>::DefaultProvider(const Windows::Devices::ILowLevelDevicesAggregateProvider & value) const
{
    check_hresult(static_cast<const ILowLevelDevicesControllerStatics &>(static_cast<const D &>(*this))->put_DefaultProvider(get(value)));
}

inline LowLevelDevicesAggregateProvider::LowLevelDevicesAggregateProvider(const Windows::Devices::Adc::Provider::IAdcControllerProvider & adc, const Windows::Devices::Pwm::Provider::IPwmControllerProvider & pwm, const Windows::Devices::Gpio::Provider::IGpioControllerProvider & gpio, const Windows::Devices::I2c::Provider::II2cControllerProvider & i2c, const Windows::Devices::Spi::Provider::ISpiControllerProvider & spi) :
    LowLevelDevicesAggregateProvider(get_activation_factory<LowLevelDevicesAggregateProvider, ILowLevelDevicesAggregateProviderFactory>().Create(adc, pwm, gpio, i2c, spi))
{}

inline Windows::Devices::ILowLevelDevicesAggregateProvider LowLevelDevicesController::DefaultProvider()
{
    return get_activation_factory<LowLevelDevicesController, ILowLevelDevicesControllerStatics>().DefaultProvider();
}

inline void LowLevelDevicesController::DefaultProvider(const Windows::Devices::ILowLevelDevicesAggregateProvider & value)
{
    get_activation_factory<LowLevelDevicesController, ILowLevelDevicesControllerStatics>().DefaultProvider(value);
}

}

}
