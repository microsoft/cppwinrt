// C++/WinRT v1.0.171013.2
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

}

namespace winrt::impl {

template <> struct is_struct<Windows::Devices::I2c::Provider::ProviderI2cTransferResult>
{
    static constexpr bool value{ true };
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::I2c::Provider {

struct WINRT_EBO ProviderI2cConnectionSettings :
    Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings
{
    ProviderI2cConnectionSettings(std::nullptr_t) noexcept {}
};

}
