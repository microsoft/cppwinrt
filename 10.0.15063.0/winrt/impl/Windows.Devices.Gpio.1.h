// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Gpio.Provider.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Gpio.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Gpio {

struct WINRT_EBO IGpioChangeCounter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioChangeCounter>,
    impl::require<IGpioChangeCounter, Windows::Foundation::IClosable>
{
    IGpioChangeCounter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGpioChangeCounterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioChangeCounterFactory>
{
    IGpioChangeCounterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGpioChangeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioChangeReader>,
    impl::require<IGpioChangeReader, Windows::Foundation::IClosable>
{
    IGpioChangeReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGpioChangeReaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioChangeReaderFactory>
{
    IGpioChangeReaderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGpioController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioController>
{
    IGpioController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGpioControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioControllerStatics>
{
    IGpioControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGpioControllerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioControllerStatics2>
{
    IGpioControllerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGpioPin :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioPin>,
    impl::require<IGpioPin, Windows::Foundation::IClosable>
{
    IGpioPin(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGpioPinValueChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGpioPinValueChangedEventArgs>
{
    IGpioPinValueChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
