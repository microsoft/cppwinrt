// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.Popups.1.h"
#include "winrt/impl/Windows.Media.Casting.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Casting {

struct WINRT_EBO CastingConnection :
    Windows::Media::Casting::ICastingConnection
{
    CastingConnection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CastingConnectionErrorOccurredEventArgs :
    Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs
{
    CastingConnectionErrorOccurredEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CastingDevice :
    Windows::Media::Casting::ICastingDevice
{
    CastingDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector(Windows::Media::Casting::CastingPlaybackTypes const& type);
    static Windows::Foundation::IAsyncOperation<hstring> GetDeviceSelectorFromCastingSourceAsync(Windows::Media::Casting::CastingSource const& castingSource);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice> FromIdAsync(param::hstring const& value);
    static Windows::Foundation::IAsyncOperation<bool> DeviceInfoSupportsCastingAsync(Windows::Devices::Enumeration::DeviceInformation const& device);
};

struct WINRT_EBO CastingDevicePicker :
    Windows::Media::Casting::ICastingDevicePicker
{
    CastingDevicePicker(std::nullptr_t) noexcept {}
    CastingDevicePicker();
};

struct WINRT_EBO CastingDevicePickerFilter :
    Windows::Media::Casting::ICastingDevicePickerFilter
{
    CastingDevicePickerFilter(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CastingDeviceSelectedEventArgs :
    Windows::Media::Casting::ICastingDeviceSelectedEventArgs
{
    CastingDeviceSelectedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CastingSource :
    Windows::Media::Casting::ICastingSource
{
    CastingSource(std::nullptr_t) noexcept {}
};

}
