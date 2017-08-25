// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Gpio.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Gpio::Provider {

struct WINRT_EBO IGpioControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioControllerProvider>
{
    IGpioControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGpioPinProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioPinProvider>
{
    IGpioPinProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGpioPinProviderValueChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioPinProviderValueChangedEventArgs>
{
    IGpioPinProviderValueChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGpioPinProviderValueChangedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioPinProviderValueChangedEventArgsFactory>
{
    IGpioPinProviderValueChangedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGpioProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioProvider>
{
    IGpioProvider(std::nullptr_t = nullptr) noexcept {}
};

}
