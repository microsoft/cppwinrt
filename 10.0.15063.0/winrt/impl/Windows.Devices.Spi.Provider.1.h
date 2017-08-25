// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Spi::Provider {

struct WINRT_EBO IProviderSpiConnectionSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProviderSpiConnectionSettings>
{
    IProviderSpiConnectionSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProviderSpiConnectionSettingsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProviderSpiConnectionSettingsFactory>
{
    IProviderSpiConnectionSettingsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpiControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiControllerProvider>
{
    ISpiControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpiDeviceProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiDeviceProvider>,
    impl::require<ISpiDeviceProvider, Windows::Foundation::IClosable>
{
    ISpiDeviceProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpiProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpiProvider>
{
    ISpiProvider(std::nullptr_t = nullptr) noexcept {}
};

}
