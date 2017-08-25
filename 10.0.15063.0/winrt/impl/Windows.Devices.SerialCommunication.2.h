// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.SerialCommunication.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::SerialCommunication {

struct WINRT_EBO ErrorReceivedEventArgs :
    Windows::Devices::SerialCommunication::IErrorReceivedEventArgs
{
    ErrorReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PinChangedEventArgs :
    Windows::Devices::SerialCommunication::IPinChangedEventArgs
{
    PinChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SerialDevice :
    Windows::Devices::SerialCommunication::ISerialDevice
{
    SerialDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(param::hstring const& portName);
    static hstring GetDeviceSelectorFromUsbVidPid(uint16_t vendorId, uint16_t productId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::SerialCommunication::SerialDevice> FromIdAsync(param::hstring const& deviceId);
};

}
