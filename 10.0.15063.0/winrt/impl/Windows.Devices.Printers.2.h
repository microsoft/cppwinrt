// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.Printers.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Printers {

struct WINRT_EBO Print3DDevice :
    Windows::Devices::Printers::IPrint3DDevice
{
    Print3DDevice(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
};

struct WINRT_EBO PrintSchema :
    Windows::Devices::Printers::IPrintSchema
{
    PrintSchema(std::nullptr_t) noexcept {}
};

}
