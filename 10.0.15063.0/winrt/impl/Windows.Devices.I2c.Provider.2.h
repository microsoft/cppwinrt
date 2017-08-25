// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.I2c.Provider.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::I2c::Provider {

struct ProviderI2cTransferResult
{
    Windows::Devices::I2c::Provider::ProviderI2cTransferStatus Status;
    uint32_t BytesTransferred;
};

struct WINRT_EBO ProviderI2cConnectionSettings :
    Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings
{
    ProviderI2cConnectionSettings(std::nullptr_t) noexcept {}
};

}
