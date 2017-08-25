// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.SerialCommunication.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::SerialCommunication {

struct WINRT_EBO IErrorReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IErrorReceivedEventArgs>
{
    IErrorReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPinChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPinChangedEventArgs>
{
    IPinChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISerialDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISerialDevice>,
    impl::require<ISerialDevice, Windows::Foundation::IClosable>
{
    ISerialDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISerialDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISerialDeviceStatics>
{
    ISerialDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

}
