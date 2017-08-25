// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Background.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Background {

struct WINRT_EBO DeviceServicingDetails :
    Windows::Devices::Background::IDeviceServicingDetails
{
    DeviceServicingDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DeviceUseDetails :
    Windows::Devices::Background::IDeviceUseDetails
{
    DeviceUseDetails(std::nullptr_t) noexcept {}
};

}
