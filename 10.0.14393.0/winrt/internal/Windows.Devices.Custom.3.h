// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Custom.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Custom {

struct WINRT_EBO CustomDevice :
    Windows::Devices::Custom::ICustomDevice
{
    CustomDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector(GUID classGuid);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Custom::CustomDevice> FromIdAsync(hstring_ref deviceId, Windows::Devices::Custom::DeviceAccessMode desiredAccess, Windows::Devices::Custom::DeviceSharingMode sharingMode);
};

struct WINRT_EBO IOControlCode :
    Windows::Devices::Custom::IIOControlCode
{
    IOControlCode(std::nullptr_t) noexcept {}
    IOControlCode(uint16_t deviceType, uint16_t function, Windows::Devices::Custom::IOControlAccessMode accessMode, Windows::Devices::Custom::IOControlBufferingMethod bufferingMethod);
};

struct KnownDeviceTypes
{
    KnownDeviceTypes() = delete;
    static uint16_t Unknown();
};

}

}
