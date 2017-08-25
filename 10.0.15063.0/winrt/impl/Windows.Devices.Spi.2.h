// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Spi.Provider.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Spi.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Spi {

struct WINRT_EBO SpiBusInfo :
    Windows::Devices::Spi::ISpiBusInfo
{
    SpiBusInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpiConnectionSettings :
    Windows::Devices::Spi::ISpiConnectionSettings
{
    SpiConnectionSettings(std::nullptr_t) noexcept {}
    SpiConnectionSettings(int32_t chipSelectLine);
};

struct WINRT_EBO SpiController :
    Windows::Devices::Spi::ISpiController
{
    SpiController(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiController> GetDefaultAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::SpiController>> GetControllersAsync(Windows::Devices::Spi::Provider::ISpiProvider const& provider);
};

struct WINRT_EBO SpiDevice :
    Windows::Devices::Spi::ISpiDevice
{
    SpiDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(param::hstring const& friendlyName);
    static Windows::Devices::Spi::SpiBusInfo GetBusInfo(param::hstring const& busId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiDevice> FromIdAsync(param::hstring const& busId, Windows::Devices::Spi::SpiConnectionSettings const& settings);
};

}
