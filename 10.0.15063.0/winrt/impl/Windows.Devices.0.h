// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Adc::Provider {

struct IAdcControllerProvider;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Gpio::Provider {

struct IGpioControllerProvider;

}

WINRT_EXPORT namespace winrt::Windows::Devices::I2c::Provider {

struct II2cControllerProvider;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Pwm::Provider {

struct IPwmControllerProvider;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Spi::Provider {

struct ISpiControllerProvider;

}

WINRT_EXPORT namespace winrt::Windows::Devices {

struct ILowLevelDevicesAggregateProvider;
struct ILowLevelDevicesAggregateProviderFactory;
struct ILowLevelDevicesController;
struct ILowLevelDevicesControllerStatics;
struct LowLevelDevicesAggregateProvider;
struct LowLevelDevicesController;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::ILowLevelDevicesAggregateProvider>{ using type = interface_category; };
template <> struct category<Windows::Devices::ILowLevelDevicesAggregateProviderFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::ILowLevelDevicesController>{ using type = interface_category; };
template <> struct category<Windows::Devices::ILowLevelDevicesControllerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::LowLevelDevicesAggregateProvider>{ using type = class_category; };
template <> struct category<Windows::Devices::LowLevelDevicesController>{ using type = class_category; };
template <> struct name<Windows::Devices::ILowLevelDevicesAggregateProvider>{ static constexpr auto & value{ L"Windows.Devices.ILowLevelDevicesAggregateProvider" }; };
template <> struct name<Windows::Devices::ILowLevelDevicesAggregateProviderFactory>{ static constexpr auto & value{ L"Windows.Devices.ILowLevelDevicesAggregateProviderFactory" }; };
template <> struct name<Windows::Devices::ILowLevelDevicesController>{ static constexpr auto & value{ L"Windows.Devices.ILowLevelDevicesController" }; };
template <> struct name<Windows::Devices::ILowLevelDevicesControllerStatics>{ static constexpr auto & value{ L"Windows.Devices.ILowLevelDevicesControllerStatics" }; };
template <> struct name<Windows::Devices::LowLevelDevicesAggregateProvider>{ static constexpr auto & value{ L"Windows.Devices.LowLevelDevicesAggregateProvider" }; };
template <> struct name<Windows::Devices::LowLevelDevicesController>{ static constexpr auto & value{ L"Windows.Devices.LowLevelDevicesController" }; };
template <> struct guid<Windows::Devices::ILowLevelDevicesAggregateProvider>{ static constexpr GUID value{ 0xA73E561C,0xAAC1,0x4EC7,{ 0xA8,0x52,0x47,0x9F,0x70,0x60,0xD0,0x1F } }; };
template <> struct guid<Windows::Devices::ILowLevelDevicesAggregateProviderFactory>{ static constexpr GUID value{ 0x9AC4AAF6,0x3473,0x465E,{ 0x96,0xD5,0x36,0x28,0x1A,0x2C,0x57,0xAF } }; };
template <> struct guid<Windows::Devices::ILowLevelDevicesController>{ static constexpr GUID value{ 0x2EC23DD4,0x179B,0x45DE,{ 0x9B,0x39,0x3A,0xE0,0x25,0x27,0xDE,0x52 } }; };
template <> struct guid<Windows::Devices::ILowLevelDevicesControllerStatics>{ static constexpr GUID value{ 0x093E926A,0xFCCB,0x4394,{ 0xA6,0x97,0x19,0xDE,0x63,0x7C,0x2D,0xB3 } }; };
template <> struct default_interface<Windows::Devices::LowLevelDevicesAggregateProvider>{ using type = Windows::Devices::ILowLevelDevicesAggregateProvider; };
template <> struct default_interface<Windows::Devices::LowLevelDevicesController>{ using type = Windows::Devices::ILowLevelDevicesController; };

template <typename D>
struct consume_Windows_Devices_ILowLevelDevicesAggregateProvider
{
    Windows::Devices::Adc::Provider::IAdcControllerProvider AdcControllerProvider() const;
    Windows::Devices::Pwm::Provider::IPwmControllerProvider PwmControllerProvider() const;
    Windows::Devices::Gpio::Provider::IGpioControllerProvider GpioControllerProvider() const;
    Windows::Devices::I2c::Provider::II2cControllerProvider I2cControllerProvider() const;
    Windows::Devices::Spi::Provider::ISpiControllerProvider SpiControllerProvider() const;
};
template <> struct consume<Windows::Devices::ILowLevelDevicesAggregateProvider> { template <typename D> using type = consume_Windows_Devices_ILowLevelDevicesAggregateProvider<D>; };

template <typename D>
struct consume_Windows_Devices_ILowLevelDevicesAggregateProviderFactory
{
    Windows::Devices::LowLevelDevicesAggregateProvider Create(Windows::Devices::Adc::Provider::IAdcControllerProvider const& adc, Windows::Devices::Pwm::Provider::IPwmControllerProvider const& pwm, Windows::Devices::Gpio::Provider::IGpioControllerProvider const& gpio, Windows::Devices::I2c::Provider::II2cControllerProvider const& i2c, Windows::Devices::Spi::Provider::ISpiControllerProvider const& spi) const;
};
template <> struct consume<Windows::Devices::ILowLevelDevicesAggregateProviderFactory> { template <typename D> using type = consume_Windows_Devices_ILowLevelDevicesAggregateProviderFactory<D>; };

template <typename D>
struct consume_Windows_Devices_ILowLevelDevicesController
{
};
template <> struct consume<Windows::Devices::ILowLevelDevicesController> { template <typename D> using type = consume_Windows_Devices_ILowLevelDevicesController<D>; };

template <typename D>
struct consume_Windows_Devices_ILowLevelDevicesControllerStatics
{
    Windows::Devices::ILowLevelDevicesAggregateProvider DefaultProvider() const;
    void DefaultProvider(Windows::Devices::ILowLevelDevicesAggregateProvider const& value) const;
};
template <> struct consume<Windows::Devices::ILowLevelDevicesControllerStatics> { template <typename D> using type = consume_Windows_Devices_ILowLevelDevicesControllerStatics<D>; };

template <> struct abi<Windows::Devices::ILowLevelDevicesAggregateProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AdcControllerProvider(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PwmControllerProvider(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_GpioControllerProvider(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_I2cControllerProvider(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SpiControllerProvider(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::ILowLevelDevicesAggregateProviderFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* adc, ::IUnknown* pwm, ::IUnknown* gpio, ::IUnknown* i2c, ::IUnknown* spi, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::ILowLevelDevicesController>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Devices::ILowLevelDevicesControllerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DefaultProvider(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DefaultProvider(::IUnknown* value) = 0;
};};

}
