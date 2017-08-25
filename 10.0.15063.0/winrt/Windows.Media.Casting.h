// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.Media.Casting.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Media::Casting::CastingConnectionState consume_Windows_Media_Casting_ICastingConnection<D>::State() const
{
    Windows::Media::Casting::CastingConnectionState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingConnection)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Casting::CastingDevice consume_Windows_Media_Casting_ICastingConnection<D>::Device() const
{
    Windows::Media::Casting::CastingDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingConnection)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Casting::CastingSource consume_Windows_Media_Casting_ICastingConnection<D>::Source() const
{
    Windows::Media::Casting::CastingSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingConnection)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Casting_ICastingConnection<D>::Source(Windows::Media::Casting::CastingSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingConnection)->put_Source(get_abi(value)));
}

template <typename D> event_token consume_Windows_Media_Casting_ICastingConnection<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingConnection)->add_StateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Casting::ICastingConnection> consume_Windows_Media_Casting_ICastingConnection<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Casting::ICastingConnection>(this, &abi_t<Windows::Media::Casting::ICastingConnection>::remove_StateChanged, StateChanged(handler));
}

template <typename D> void consume_Windows_Media_Casting_ICastingConnection<D>::StateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingConnection)->remove_StateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Casting_ICastingConnection<D>::ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingConnection)->add_ErrorOccurred(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Casting::ICastingConnection> consume_Windows_Media_Casting_ICastingConnection<D>::ErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Casting::ICastingConnection>(this, &abi_t<Windows::Media::Casting::ICastingConnection>::remove_ErrorOccurred, ErrorOccurred(handler));
}

template <typename D> void consume_Windows_Media_Casting_ICastingConnection<D>::ErrorOccurred(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingConnection)->remove_ErrorOccurred(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingConnectionErrorStatus> consume_Windows_Media_Casting_ICastingConnection<D>::RequestStartCastingAsync(Windows::Media::Casting::CastingSource const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingConnectionErrorStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingConnection)->RequestStartCastingAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingConnectionErrorStatus> consume_Windows_Media_Casting_ICastingConnection<D>::DisconnectAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingConnectionErrorStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingConnection)->DisconnectAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::Casting::CastingConnectionErrorStatus consume_Windows_Media_Casting_ICastingConnectionErrorOccurredEventArgs<D>::ErrorStatus() const
{
    Windows::Media::Casting::CastingConnectionErrorStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs)->get_ErrorStatus(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Casting_ICastingConnectionErrorOccurredEventArgs<D>::Message() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Casting_ICastingDevice<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevice)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Casting_ICastingDevice<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevice)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamWithContentType consume_Windows_Media_Casting_ICastingDevice<D>::Icon() const
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevice)->get_Icon(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingPlaybackTypes> consume_Windows_Media_Casting_ICastingDevice<D>::GetSupportedCastingPlaybackTypesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingPlaybackTypes> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevice)->GetSupportedCastingPlaybackTypesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::Casting::CastingConnection consume_Windows_Media_Casting_ICastingDevice<D>::CreateCastingConnection() const
{
    Windows::Media::Casting::CastingConnection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevice)->CreateCastingConnection(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Casting::CastingDevicePickerFilter consume_Windows_Media_Casting_ICastingDevicePicker<D>::Filter() const
{
    Windows::Media::Casting::CastingDevicePickerFilter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePicker)->get_Filter(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DevicePickerAppearance consume_Windows_Media_Casting_ICastingDevicePicker<D>::Appearance() const
{
    Windows::Devices::Enumeration::DevicePickerAppearance value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePicker)->get_Appearance(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDeviceSelected(Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePicker)->add_CastingDeviceSelected(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Casting::ICastingDevicePicker> consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDeviceSelected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Casting::ICastingDevicePicker>(this, &abi_t<Windows::Media::Casting::ICastingDevicePicker>::remove_CastingDeviceSelected, CastingDeviceSelected(handler));
}

template <typename D> void consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDeviceSelected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePicker)->remove_CastingDeviceSelected(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDevicePickerDismissed(Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePicker)->add_CastingDevicePickerDismissed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Casting::ICastingDevicePicker> consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDevicePickerDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Casting::ICastingDevicePicker>(this, &abi_t<Windows::Media::Casting::ICastingDevicePicker>::remove_CastingDevicePickerDismissed, CastingDevicePickerDismissed(handler));
}

template <typename D> void consume_Windows_Media_Casting_ICastingDevicePicker<D>::CastingDevicePickerDismissed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePicker)->remove_CastingDevicePickerDismissed(get_abi(token)));
}

template <typename D> void consume_Windows_Media_Casting_ICastingDevicePicker<D>::Show(Windows::Foundation::Rect const& selection) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePicker)->Show(get_abi(selection)));
}

template <typename D> void consume_Windows_Media_Casting_ICastingDevicePicker<D>::Show(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePicker)->ShowWithPlacement(get_abi(selection), get_abi(preferredPlacement)));
}

template <typename D> void consume_Windows_Media_Casting_ICastingDevicePicker<D>::Hide() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePicker)->Hide());
}

template <typename D> bool consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportsAudio() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->get_SupportsAudio(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportsAudio(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->put_SupportsAudio(value));
}

template <typename D> bool consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportsVideo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->get_SupportsVideo(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportsVideo(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->put_SupportsVideo(value));
}

template <typename D> bool consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportsPictures() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->get_SupportsPictures(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportsPictures(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->put_SupportsPictures(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Casting::CastingSource> consume_Windows_Media_Casting_ICastingDevicePickerFilter<D>::SupportedCastingSources() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Casting::CastingSource> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDevicePickerFilter)->get_SupportedCastingSources(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Casting::CastingDevice consume_Windows_Media_Casting_ICastingDeviceSelectedEventArgs<D>::SelectedCastingDevice() const
{
    Windows::Media::Casting::CastingDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDeviceSelectedEventArgs)->get_SelectedCastingDevice(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Casting_ICastingDeviceStatics<D>::GetDeviceSelector(Windows::Media::Casting::CastingPlaybackTypes const& type) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDeviceStatics)->GetDeviceSelector(get_abi(type), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Media_Casting_ICastingDeviceStatics<D>::GetDeviceSelectorFromCastingSourceAsync(Windows::Media::Casting::CastingSource const& castingSource) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDeviceStatics)->GetDeviceSelectorFromCastingSourceAsync(get_abi(castingSource), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice> consume_Windows_Media_Casting_ICastingDeviceStatics<D>::FromIdAsync(param::hstring const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDeviceStatics)->FromIdAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Media_Casting_ICastingDeviceStatics<D>::DeviceInfoSupportsCastingAsync(Windows::Devices::Enumeration::DeviceInformation const& device) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingDeviceStatics)->DeviceInfoSupportsCastingAsync(get_abi(device), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Casting_ICastingSource<D>::PreferredSourceUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingSource)->get_PreferredSourceUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Casting_ICastingSource<D>::PreferredSourceUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Casting::ICastingSource)->put_PreferredSourceUri(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::Media::Casting::ICastingConnection> : produce_base<D, Windows::Media::Casting::ICastingConnection>
{
    HRESULT __stdcall get_State(abi_t<Windows::Media::Casting::CastingConnectionState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Device(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Device());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Media::Casting::CastingSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ErrorOccurred(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ErrorOccurred(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ErrorOccurred(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ErrorOccurred(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestStartCastingAsync(::IUnknown* value, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestStartCastingAsync(*reinterpret_cast<Windows::Media::Casting::CastingSource const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DisconnectAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DisconnectAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs> : produce_base<D, Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs>
{
    HRESULT __stdcall get_ErrorStatus(abi_t<Windows::Media::Casting::CastingConnectionErrorStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Casting::ICastingDevice> : produce_base<D, Windows::Media::Casting::ICastingDevice>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Icon(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Icon());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSupportedCastingPlaybackTypesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetSupportedCastingPlaybackTypesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCastingConnection(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateCastingConnection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Casting::ICastingDevicePicker> : produce_base<D, Windows::Media::Casting::ICastingDevicePicker>
{
    HRESULT __stdcall get_Filter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Filter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Appearance(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Appearance());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CastingDeviceSelected(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CastingDeviceSelected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CastingDeviceSelected(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CastingDeviceSelected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CastingDevicePickerDismissed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CastingDevicePickerDismissed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CastingDevicePickerDismissed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CastingDevicePickerDismissed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Show(abi_t<Windows::Foundation::Rect> selection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowWithPlacement(abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Hide() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hide();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Casting::ICastingDevicePickerFilter> : produce_base<D, Windows::Media::Casting::ICastingDevicePickerFilter>
{
    HRESULT __stdcall get_SupportsAudio(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportsAudio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SupportsAudio(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportsAudio(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsVideo(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportsVideo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SupportsVideo(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportsVideo(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsPictures(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportsPictures());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SupportsPictures(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportsPictures(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedCastingSources(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedCastingSources());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Casting::ICastingDeviceSelectedEventArgs> : produce_base<D, Windows::Media::Casting::ICastingDeviceSelectedEventArgs>
{
    HRESULT __stdcall get_SelectedCastingDevice(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedCastingDevice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Casting::ICastingDeviceStatics> : produce_base<D, Windows::Media::Casting::ICastingDeviceStatics>
{
    HRESULT __stdcall GetDeviceSelector(abi_t<Windows::Media::Casting::CastingPlaybackTypes> type, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Media::Casting::CastingPlaybackTypes const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromCastingSourceAsync(::IUnknown* castingSource, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDeviceSelectorFromCastingSourceAsync(*reinterpret_cast<Windows::Media::Casting::CastingSource const*>(&castingSource)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING value, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeviceInfoSupportsCastingAsync(::IUnknown* device, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeviceInfoSupportsCastingAsync(*reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&device)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Casting::ICastingSource> : produce_base<D, Windows::Media::Casting::ICastingSource>
{
    HRESULT __stdcall get_PreferredSourceUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreferredSourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredSourceUri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredSourceUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Casting {

inline hstring CastingDevice::GetDeviceSelector(Windows::Media::Casting::CastingPlaybackTypes const& type)
{
    return get_activation_factory<CastingDevice, Windows::Media::Casting::ICastingDeviceStatics>().GetDeviceSelector(type);
}

inline Windows::Foundation::IAsyncOperation<hstring> CastingDevice::GetDeviceSelectorFromCastingSourceAsync(Windows::Media::Casting::CastingSource const& castingSource)
{
    return get_activation_factory<CastingDevice, Windows::Media::Casting::ICastingDeviceStatics>().GetDeviceSelectorFromCastingSourceAsync(castingSource);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice> CastingDevice::FromIdAsync(param::hstring const& value)
{
    return get_activation_factory<CastingDevice, Windows::Media::Casting::ICastingDeviceStatics>().FromIdAsync(value);
}

inline Windows::Foundation::IAsyncOperation<bool> CastingDevice::DeviceInfoSupportsCastingAsync(Windows::Devices::Enumeration::DeviceInformation const& device)
{
    return get_activation_factory<CastingDevice, Windows::Media::Casting::ICastingDeviceStatics>().DeviceInfoSupportsCastingAsync(device);
}

inline CastingDevicePicker::CastingDevicePicker() :
    CastingDevicePicker(activate_instance<CastingDevicePicker>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Casting::ICastingConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::ICastingConnection> {};

template<> struct hash<winrt::Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs> {};

template<> struct hash<winrt::Windows::Media::Casting::ICastingDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::ICastingDevice> {};

template<> struct hash<winrt::Windows::Media::Casting::ICastingDevicePicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::ICastingDevicePicker> {};

template<> struct hash<winrt::Windows::Media::Casting::ICastingDevicePickerFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::ICastingDevicePickerFilter> {};

template<> struct hash<winrt::Windows::Media::Casting::ICastingDeviceSelectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::ICastingDeviceSelectedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Casting::ICastingDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::ICastingDeviceStatics> {};

template<> struct hash<winrt::Windows::Media::Casting::ICastingSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::ICastingSource> {};

template<> struct hash<winrt::Windows::Media::Casting::CastingConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::CastingConnection> {};

template<> struct hash<winrt::Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> {};

template<> struct hash<winrt::Windows::Media::Casting::CastingDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::CastingDevice> {};

template<> struct hash<winrt::Windows::Media::Casting::CastingDevicePicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::CastingDevicePicker> {};

template<> struct hash<winrt::Windows::Media::Casting::CastingDevicePickerFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::CastingDevicePickerFilter> {};

template<> struct hash<winrt::Windows::Media::Casting::CastingDeviceSelectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::CastingDeviceSelectedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Casting::CastingSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Casting::CastingSource> {};

}

WINRT_WARNING_POP
