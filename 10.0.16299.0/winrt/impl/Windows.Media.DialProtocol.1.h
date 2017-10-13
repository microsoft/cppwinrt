// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.Popups.0.h"
#include "winrt/impl/Windows.Media.DialProtocol.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::DialProtocol {

struct WINRT_EBO IDialApp :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialApp>
{
    IDialApp(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDialAppStateDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialAppStateDetails>
{
    IDialAppStateDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDialDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDevice>
{
    IDialDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDialDevice2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDevice2>
{
    IDialDevice2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDialDevicePicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDevicePicker>
{
    IDialDevicePicker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDialDevicePickerFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDevicePickerFilter>
{
    IDialDevicePickerFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDialDeviceSelectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDeviceSelectedEventArgs>
{
    IDialDeviceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDialDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDeviceStatics>
{
    IDialDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDialDisconnectButtonClickedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialDisconnectButtonClickedEventArgs>
{
    IDialDisconnectButtonClickedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDialReceiverApp :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialReceiverApp>
{
    IDialReceiverApp(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDialReceiverAppStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialReceiverAppStatics>
{
    IDialReceiverAppStatics(std::nullptr_t = nullptr) noexcept {}
};

}
