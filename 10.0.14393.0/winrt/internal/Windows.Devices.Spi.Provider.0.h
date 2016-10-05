// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Spi::Provider {

struct IProviderSpiConnectionSettings;
struct IProviderSpiConnectionSettingsFactory;
struct ISpiControllerProvider;
struct ISpiDeviceProvider;
struct ISpiProvider;
struct ProviderSpiConnectionSettings;

}

namespace Windows::Devices::Spi::Provider {

struct IProviderSpiConnectionSettings;
struct IProviderSpiConnectionSettingsFactory;
struct ISpiControllerProvider;
struct ISpiDeviceProvider;
struct ISpiProvider;
struct ProviderSpiConnectionSettings;

}

namespace Windows::Devices::Spi::Provider {

enum class ProviderSpiMode
{
    Mode0 = 0,
    Mode1 = 1,
    Mode2 = 2,
    Mode3 = 3,
};

enum class ProviderSpiSharingMode
{
    Exclusive = 0,
    Shared = 1,
};

}

}
