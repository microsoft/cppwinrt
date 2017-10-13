// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Gpio.Provider.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Gpio::Provider {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Devices::Gpio::Provider {

struct WINRT_EBO GpioPinProviderValueChangedEventArgs :
    Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs
{
    GpioPinProviderValueChangedEventArgs(std::nullptr_t) noexcept {}
    GpioPinProviderValueChangedEventArgs(Windows::Devices::Gpio::Provider::ProviderGpioPinEdge const& edge);
};

}
