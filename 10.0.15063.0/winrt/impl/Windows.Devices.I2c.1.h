// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.I2c.Provider.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.I2c.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::I2c {

struct WINRT_EBO II2cConnectionSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<II2cConnectionSettings>
{
    II2cConnectionSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO II2cConnectionSettingsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<II2cConnectionSettingsFactory>
{
    II2cConnectionSettingsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO II2cController :
    Windows::Foundation::IInspectable,
    impl::consume_t<II2cController>
{
    II2cController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO II2cControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<II2cControllerStatics>
{
    II2cControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO II2cDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<II2cDevice>,
    impl::require<II2cDevice, Windows::Foundation::IClosable>
{
    II2cDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO II2cDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<II2cDeviceStatics>
{
    II2cDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

}
