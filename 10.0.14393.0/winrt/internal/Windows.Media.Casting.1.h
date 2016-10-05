// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Media.Casting.0.h"
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Casting {

struct __declspec(uuid("cd951653-c2f1-4498-8b78-5fb4cd3640dd")) __declspec(novtable) ICastingConnection : Windows::IInspectable
{
    virtual HRESULT __stdcall get_State(winrt::Windows::Media::Casting::CastingConnectionState * value) = 0;
    virtual HRESULT __stdcall get_Device(Windows::Media::Casting::ICastingDevice ** value) = 0;
    virtual HRESULT __stdcall get_Source(Windows::Media::Casting::ICastingSource ** value) = 0;
    virtual HRESULT __stdcall put_Source(Windows::Media::Casting::ICastingSource * value) = 0;
    virtual HRESULT __stdcall add_StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StateChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ErrorOccurred(event_token token) = 0;
    virtual HRESULT __stdcall abi_RequestStartCastingAsync(Windows::Media::Casting::ICastingSource * value, Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingConnectionErrorStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_DisconnectAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingConnectionErrorStatus> ** operation) = 0;
};

struct __declspec(uuid("a7fb3c69-8719-4f00-81fb-961863c79a32")) __declspec(novtable) ICastingConnectionErrorOccurredEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ErrorStatus(winrt::Windows::Media::Casting::CastingConnectionErrorStatus * value) = 0;
    virtual HRESULT __stdcall get_Message(hstring * value) = 0;
};

struct __declspec(uuid("de721c83-4a43-4ad1-a6d2-2492a796c3f2")) __declspec(novtable) ICastingDevice : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_FriendlyName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Icon(Windows::Storage::Streams::IRandomAccessStreamWithContentType ** value) = 0;
    virtual HRESULT __stdcall abi_GetSupportedCastingPlaybackTypesAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingPlaybackTypes> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateCastingConnection(Windows::Media::Casting::ICastingConnection ** value) = 0;
};

struct __declspec(uuid("dcd39924-0591-49be-aacb-4b82ee756a95")) __declspec(novtable) ICastingDevicePicker : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Filter(Windows::Media::Casting::ICastingDevicePickerFilter ** value) = 0;
    virtual HRESULT __stdcall get_Appearance(Windows::Devices::Enumeration::IDevicePickerAppearance ** value) = 0;
    virtual HRESULT __stdcall add_CastingDeviceSelected(Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CastingDeviceSelected(event_token token) = 0;
    virtual HRESULT __stdcall add_CastingDevicePickerDismissed(Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CastingDevicePickerDismissed(event_token token) = 0;
    virtual HRESULT __stdcall abi_Show(Windows::Foundation::Rect selection) = 0;
    virtual HRESULT __stdcall abi_ShowWithPlacement(Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement) = 0;
    virtual HRESULT __stdcall abi_Hide() = 0;
};

struct __declspec(uuid("be8c619c-b563-4354-ae33-9fdaad8c6291")) __declspec(novtable) ICastingDevicePickerFilter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SupportsAudio(bool * value) = 0;
    virtual HRESULT __stdcall put_SupportsAudio(bool value) = 0;
    virtual HRESULT __stdcall get_SupportsVideo(bool * value) = 0;
    virtual HRESULT __stdcall put_SupportsVideo(bool value) = 0;
    virtual HRESULT __stdcall get_SupportsPictures(bool * value) = 0;
    virtual HRESULT __stdcall put_SupportsPictures(bool value) = 0;
    virtual HRESULT __stdcall get_SupportedCastingSources(Windows::Foundation::Collections::IVector<Windows::Media::Casting::CastingSource> ** value) = 0;
};

struct __declspec(uuid("dc439e86-dd57-4d0d-9400-af45e4fb3663")) __declspec(novtable) ICastingDeviceSelectedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SelectedCastingDevice(Windows::Media::Casting::ICastingDevice ** value) = 0;
};

struct __declspec(uuid("e7d958d7-4d13-4237-a365-4c4f6a4cfd2f")) __declspec(novtable) ICastingDeviceStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeviceSelector(winrt::Windows::Media::Casting::CastingPlaybackTypes type, hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelectorFromCastingSourceAsync(Windows::Media::Casting::ICastingSource * castingSource, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_FromIdAsync(hstring value, Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice> ** operation) = 0;
    virtual HRESULT __stdcall abi_DeviceInfoSupportsCastingAsync(Windows::Devices::Enumeration::IDeviceInformation * device, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
};

struct __declspec(uuid("f429ea72-3467-47e6-a027-522923e9d727")) __declspec(novtable) ICastingSource : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PreferredSourceUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_PreferredSourceUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Media::Casting::CastingConnection> { using default_interface = Windows::Media::Casting::ICastingConnection; };
template <> struct traits<Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> { using default_interface = Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs; };
template <> struct traits<Windows::Media::Casting::CastingDevice> { using default_interface = Windows::Media::Casting::ICastingDevice; };
template <> struct traits<Windows::Media::Casting::CastingDevicePicker> { using default_interface = Windows::Media::Casting::ICastingDevicePicker; };
template <> struct traits<Windows::Media::Casting::CastingDevicePickerFilter> { using default_interface = Windows::Media::Casting::ICastingDevicePickerFilter; };
template <> struct traits<Windows::Media::Casting::CastingDeviceSelectedEventArgs> { using default_interface = Windows::Media::Casting::ICastingDeviceSelectedEventArgs; };
template <> struct traits<Windows::Media::Casting::CastingSource> { using default_interface = Windows::Media::Casting::ICastingSource; };

}

namespace Windows::Media::Casting {

template <typename T> struct impl_ICastingConnection;
template <typename T> struct impl_ICastingConnectionErrorOccurredEventArgs;
template <typename T> struct impl_ICastingDevice;
template <typename T> struct impl_ICastingDevicePicker;
template <typename T> struct impl_ICastingDevicePickerFilter;
template <typename T> struct impl_ICastingDeviceSelectedEventArgs;
template <typename T> struct impl_ICastingDeviceStatics;
template <typename T> struct impl_ICastingSource;

}

namespace impl {

template <> struct traits<Windows::Media::Casting::ICastingConnection>
{
    using abi = ABI::Windows::Media::Casting::ICastingConnection;
    template <typename D> using consume = Windows::Media::Casting::impl_ICastingConnection<D>;
};

template <> struct traits<Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs>
{
    using abi = ABI::Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs;
    template <typename D> using consume = Windows::Media::Casting::impl_ICastingConnectionErrorOccurredEventArgs<D>;
};

template <> struct traits<Windows::Media::Casting::ICastingDevice>
{
    using abi = ABI::Windows::Media::Casting::ICastingDevice;
    template <typename D> using consume = Windows::Media::Casting::impl_ICastingDevice<D>;
};

template <> struct traits<Windows::Media::Casting::ICastingDevicePicker>
{
    using abi = ABI::Windows::Media::Casting::ICastingDevicePicker;
    template <typename D> using consume = Windows::Media::Casting::impl_ICastingDevicePicker<D>;
};

template <> struct traits<Windows::Media::Casting::ICastingDevicePickerFilter>
{
    using abi = ABI::Windows::Media::Casting::ICastingDevicePickerFilter;
    template <typename D> using consume = Windows::Media::Casting::impl_ICastingDevicePickerFilter<D>;
};

template <> struct traits<Windows::Media::Casting::ICastingDeviceSelectedEventArgs>
{
    using abi = ABI::Windows::Media::Casting::ICastingDeviceSelectedEventArgs;
    template <typename D> using consume = Windows::Media::Casting::impl_ICastingDeviceSelectedEventArgs<D>;
};

template <> struct traits<Windows::Media::Casting::ICastingDeviceStatics>
{
    using abi = ABI::Windows::Media::Casting::ICastingDeviceStatics;
    template <typename D> using consume = Windows::Media::Casting::impl_ICastingDeviceStatics<D>;
};

template <> struct traits<Windows::Media::Casting::ICastingSource>
{
    using abi = ABI::Windows::Media::Casting::ICastingSource;
    template <typename D> using consume = Windows::Media::Casting::impl_ICastingSource<D>;
};

template <> struct traits<Windows::Media::Casting::CastingConnection>
{
    using abi = ABI::Windows::Media::Casting::CastingConnection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Casting.CastingConnection"; }
};

template <> struct traits<Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs>
{
    using abi = ABI::Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Casting.CastingConnectionErrorOccurredEventArgs"; }
};

template <> struct traits<Windows::Media::Casting::CastingDevice>
{
    using abi = ABI::Windows::Media::Casting::CastingDevice;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Casting.CastingDevice"; }
};

template <> struct traits<Windows::Media::Casting::CastingDevicePicker>
{
    using abi = ABI::Windows::Media::Casting::CastingDevicePicker;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Casting.CastingDevicePicker"; }
};

template <> struct traits<Windows::Media::Casting::CastingDevicePickerFilter>
{
    using abi = ABI::Windows::Media::Casting::CastingDevicePickerFilter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Casting.CastingDevicePickerFilter"; }
};

template <> struct traits<Windows::Media::Casting::CastingDeviceSelectedEventArgs>
{
    using abi = ABI::Windows::Media::Casting::CastingDeviceSelectedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Casting.CastingDeviceSelectedEventArgs"; }
};

template <> struct traits<Windows::Media::Casting::CastingSource>
{
    using abi = ABI::Windows::Media::Casting::CastingSource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Casting.CastingSource"; }
};

}

}
