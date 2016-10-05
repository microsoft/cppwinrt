// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::I2c::Provider {

struct ProviderI2cTransferResult;

}

namespace Windows::Devices::I2c::Provider {

using ProviderI2cTransferResult = ABI::Windows::Devices::I2c::Provider::ProviderI2cTransferResult;

}

namespace ABI::Windows::Devices::I2c::Provider {

struct II2cControllerProvider;
struct II2cDeviceProvider;
struct II2cProvider;
struct IProviderI2cConnectionSettings;
struct ProviderI2cConnectionSettings;

}

namespace Windows::Devices::I2c::Provider {

struct II2cControllerProvider;
struct II2cDeviceProvider;
struct II2cProvider;
struct IProviderI2cConnectionSettings;
struct ProviderI2cConnectionSettings;

}

namespace Windows::Devices::I2c::Provider {

enum class ProviderI2cBusSpeed
{
    StandardMode = 0,
    FastMode = 1,
};

enum class ProviderI2cSharingMode
{
    Exclusive = 0,
    Shared = 1,
};

enum class ProviderI2cTransferStatus
{
    FullTransfer = 0,
    PartialTransfer = 1,
    SlaveAddressNotAcknowledged = 2,
};

}

}
