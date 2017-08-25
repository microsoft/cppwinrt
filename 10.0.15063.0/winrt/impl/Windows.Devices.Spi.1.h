// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Spi.Provider.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Spi.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Spi {

struct WINRT_EBO ISpiBusInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiBusInfo>
{
    ISpiBusInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpiConnectionSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiConnectionSettings>
{
    ISpiConnectionSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpiConnectionSettingsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiConnectionSettingsFactory>
{
    ISpiConnectionSettingsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpiController :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiController>
{
    ISpiController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpiControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiControllerStatics>
{
    ISpiControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpiDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiDevice>,
    impl::require<ISpiDevice, Windows::Foundation::IClosable>
{
    ISpiDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpiDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiDeviceStatics>
{
    ISpiDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

}
