// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Spi {

struct ISpiBusInfo;
struct ISpiConnectionSettings;
struct ISpiConnectionSettingsFactory;
struct ISpiController;
struct ISpiControllerStatics;
struct ISpiDevice;
struct ISpiDeviceStatics;
struct SpiBusInfo;
struct SpiConnectionSettings;
struct SpiController;
struct SpiDevice;

}

namespace Windows::Devices::Spi {

struct ISpiBusInfo;
struct ISpiConnectionSettings;
struct ISpiConnectionSettingsFactory;
struct ISpiController;
struct ISpiControllerStatics;
struct ISpiDevice;
struct ISpiDeviceStatics;
struct SpiBusInfo;
struct SpiConnectionSettings;
struct SpiController;
struct SpiDevice;

}

namespace Windows::Devices::Spi {

enum class SpiMode
{
    Mode0 = 0,
    Mode1 = 1,
    Mode2 = 2,
    Mode3 = 3,
};

enum class SpiSharingMode
{
    Exclusive = 0,
    Shared = 1,
};

}

}
