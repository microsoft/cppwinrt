// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.Popups.0.h"
#include "winrt/impl/Windows.Media.Casting.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Casting {

struct WINRT_EBO ICastingConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingConnection>,
    impl::require<ICastingConnection, Windows::Foundation::IClosable>
{
    ICastingConnection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICastingConnectionErrorOccurredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingConnectionErrorOccurredEventArgs>
{
    ICastingConnectionErrorOccurredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICastingDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingDevice>
{
    ICastingDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICastingDevicePicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingDevicePicker>
{
    ICastingDevicePicker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICastingDevicePickerFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingDevicePickerFilter>
{
    ICastingDevicePickerFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICastingDeviceSelectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingDeviceSelectedEventArgs>
{
    ICastingDeviceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICastingDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingDeviceStatics>
{
    ICastingDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICastingSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICastingSource>
{
    ICastingSource(std::nullptr_t = nullptr) noexcept {}
};

}
