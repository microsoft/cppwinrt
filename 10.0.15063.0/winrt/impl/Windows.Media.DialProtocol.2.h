// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.Popups.1.h"
#include "winrt/impl/Windows.Media.DialProtocol.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::DialProtocol {

struct WINRT_EBO DialApp :
    Windows::Media::DialProtocol::IDialApp
{
    DialApp(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DialAppStateDetails :
    Windows::Media::DialProtocol::IDialAppStateDetails
{
    DialAppStateDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DialDevice :
    Windows::Media::DialProtocol::IDialDevice,
    impl::require<DialDevice, Windows::Media::DialProtocol::IDialDevice2>
{
    DialDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector(param::hstring const& appName);
    static Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice> FromIdAsync(param::hstring const& value);
    static Windows::Foundation::IAsyncOperation<bool> DeviceInfoSupportsDialAsync(Windows::Devices::Enumeration::DeviceInformation const& device);
};

struct WINRT_EBO DialDevicePicker :
    Windows::Media::DialProtocol::IDialDevicePicker
{
    DialDevicePicker(std::nullptr_t) noexcept {}
    DialDevicePicker();
};

struct WINRT_EBO DialDevicePickerFilter :
    Windows::Media::DialProtocol::IDialDevicePickerFilter
{
    DialDevicePickerFilter(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DialDeviceSelectedEventArgs :
    Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs
{
    DialDeviceSelectedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DialDisconnectButtonClickedEventArgs :
    Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs
{
    DialDisconnectButtonClickedEventArgs(std::nullptr_t) noexcept {}
};

}
