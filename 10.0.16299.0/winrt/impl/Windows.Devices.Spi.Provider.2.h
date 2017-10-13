// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Spi::Provider {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Devices::Spi::Provider {

struct WINRT_EBO ProviderSpiConnectionSettings :
    Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings
{
    ProviderSpiConnectionSettings(std::nullptr_t) noexcept {}
    ProviderSpiConnectionSettings(int32_t chipSelectLine);
};

}
