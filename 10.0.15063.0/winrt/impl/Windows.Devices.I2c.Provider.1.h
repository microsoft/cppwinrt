// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.I2c.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::I2c::Provider {

struct WINRT_EBO II2cControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<II2cControllerProvider>
{
    II2cControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO II2cDeviceProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<II2cDeviceProvider>,
    impl::require<II2cDeviceProvider, Windows::Foundation::IClosable>
{
    II2cDeviceProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO II2cProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<II2cProvider>
{
    II2cProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProviderI2cConnectionSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProviderI2cConnectionSettings>
{
    IProviderI2cConnectionSettings(std::nullptr_t = nullptr) noexcept {}
};

}
