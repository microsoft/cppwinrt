// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Portable.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Portable {

struct ServiceDevice
{
    ServiceDevice() = delete;
    static hstring GetDeviceSelector(Windows::Devices::Portable::ServiceDeviceType serviceType);
    static hstring GetDeviceSelectorFromServiceId(GUID serviceId);
};

struct StorageDevice
{
    StorageDevice() = delete;
    static Windows::Storage::StorageFolder FromId(hstring_view deviceId);
    static hstring GetDeviceSelector();
};

}

}
