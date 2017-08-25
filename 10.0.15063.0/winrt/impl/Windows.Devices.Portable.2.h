// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Devices.Portable.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Portable {

struct ServiceDevice
{
    ServiceDevice() = delete;
    static hstring GetDeviceSelector(Windows::Devices::Portable::ServiceDeviceType const& serviceType);
    static hstring GetDeviceSelectorFromServiceId(GUID const& serviceId);
};

struct StorageDevice
{
    StorageDevice() = delete;
    static Windows::Storage::StorageFolder FromId(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
};

}
