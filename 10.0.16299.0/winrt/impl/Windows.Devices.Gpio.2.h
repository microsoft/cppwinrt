// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Gpio.Provider.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Gpio.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Gpio {

struct GpioChangeCount
{
    uint64_t Count;
    Windows::Foundation::TimeSpan RelativeTime;
};

struct GpioChangeRecord
{
    Windows::Foundation::TimeSpan RelativeTime;
    Windows::Devices::Gpio::GpioPinEdge Edge;
};

}

namespace winrt::impl {

template <> struct is_struct<Windows::Devices::Gpio::GpioChangeCount>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Windows::Devices::Gpio::GpioChangeRecord>
{
    static constexpr bool value{ true };
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Gpio {

struct WINRT_EBO GpioChangeCounter :
    Windows::Devices::Gpio::IGpioChangeCounter
{
    GpioChangeCounter(std::nullptr_t) noexcept {}
    GpioChangeCounter(Windows::Devices::Gpio::GpioPin const& pin);
};

struct WINRT_EBO GpioChangeReader :
    Windows::Devices::Gpio::IGpioChangeReader
{
    GpioChangeReader(std::nullptr_t) noexcept {}
    GpioChangeReader(Windows::Devices::Gpio::GpioPin const& pin);
    GpioChangeReader(Windows::Devices::Gpio::GpioPin const& pin, int32_t minCapacity);
};

struct WINRT_EBO GpioController :
    Windows::Devices::Gpio::IGpioController
{
    GpioController(std::nullptr_t) noexcept {}
    static Windows::Devices::Gpio::GpioController GetDefault();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> GetControllersAsync(Windows::Devices::Gpio::Provider::IGpioProvider const& provider);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController> GetDefaultAsync();
};

struct WINRT_EBO GpioPin :
    Windows::Devices::Gpio::IGpioPin
{
    GpioPin(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GpioPinValueChangedEventArgs :
    Windows::Devices::Gpio::IGpioPinValueChangedEventArgs
{
    GpioPinValueChangedEventArgs(std::nullptr_t) noexcept {}
};

}
