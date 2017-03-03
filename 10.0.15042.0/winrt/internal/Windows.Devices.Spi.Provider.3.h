// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Spi.Provider.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Spi::Provider {

struct WINRT_EBO ProviderSpiConnectionSettings :
    Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings
{
    ProviderSpiConnectionSettings(std::nullptr_t) noexcept {}
    ProviderSpiConnectionSettings(int32_t chipSelectLine);
};

}

}
