// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::I2c {

struct I2cTransferResult;

}

namespace Windows::Devices::I2c {

using I2cTransferResult = ABI::Windows::Devices::I2c::I2cTransferResult;

}

namespace ABI::Windows::Devices::I2c {

struct II2cConnectionSettings;
struct II2cConnectionSettingsFactory;
struct II2cController;
struct II2cControllerStatics;
struct II2cDevice;
struct II2cDeviceStatics;
struct I2cConnectionSettings;
struct I2cController;
struct I2cDevice;

}

namespace Windows::Devices::I2c {

struct II2cConnectionSettings;
struct II2cConnectionSettingsFactory;
struct II2cController;
struct II2cControllerStatics;
struct II2cDevice;
struct II2cDeviceStatics;
struct I2cConnectionSettings;
struct I2cController;
struct I2cDevice;

}

namespace Windows::Devices::I2c {

enum class I2cBusSpeed
{
    StandardMode = 0,
    FastMode = 1,
};

enum class I2cSharingMode
{
    Exclusive = 0,
    Shared = 1,
};

enum class I2cTransferStatus
{
    FullTransfer = 0,
    PartialTransfer = 1,
    SlaveAddressNotAcknowledged = 2,
};

}

}
