// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Devices.Enumeration.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Popups.3.h"
#include "internal/Windows.Media.Casting.3.h"
#include "Windows.Media.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Casting::ICastingConnection> : produce_base<D, Windows::Media::Casting::ICastingConnection>
{
    HRESULT __stdcall get_State(Windows::Media::Casting::CastingConnectionState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Device(abi_arg_out<Windows::Media::Casting::ICastingDevice> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Device());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(abi_arg_out<Windows::Media::Casting::ICastingSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(abi_arg_in<Windows::Media::Casting::ICastingSource> value) noexcept override
    {
        try
        {
            this->shim().Source(*reinterpret_cast<const Windows::Media::Casting::CastingSource *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().StateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().StateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ErrorOccurred(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ErrorOccurred(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ErrorOccurred(event_token token) noexcept override
    {
        try
        {
            this->shim().ErrorOccurred(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestStartCastingAsync(abi_arg_in<Windows::Media::Casting::ICastingSource> value, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingConnectionErrorStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestStartCastingAsync(*reinterpret_cast<const Windows::Media::Casting::CastingSource *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DisconnectAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingConnectionErrorStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DisconnectAsync());
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
    HRESULT __stdcall get_ErrorStatus(Windows::Media::Casting::CastingConnectionErrorStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ErrorStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Message());
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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Icon(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamWithContentType> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Icon());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSupportedCastingPlaybackTypesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingPlaybackTypes>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetSupportedCastingPlaybackTypesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateCastingConnection(abi_arg_out<Windows::Media::Casting::ICastingConnection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateCastingConnection());
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
    HRESULT __stdcall get_Filter(abi_arg_out<Windows::Media::Casting::ICastingDevicePickerFilter> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Filter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Appearance(abi_arg_out<Windows::Devices::Enumeration::IDevicePickerAppearance> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Appearance());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CastingDeviceSelected(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CastingDeviceSelected(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CastingDeviceSelected(event_token token) noexcept override
    {
        try
        {
            this->shim().CastingDeviceSelected(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CastingDevicePickerDismissed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CastingDevicePickerDismissed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CastingDevicePickerDismissed(event_token token) noexcept override
    {
        try
        {
            this->shim().CastingDevicePickerDismissed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Show(abi_arg_in<Windows::Foundation::Rect> selection) noexcept override
    {
        try
        {
            this->shim().Show(*reinterpret_cast<const Windows::Foundation::Rect *>(&selection));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowWithPlacement(abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement) noexcept override
    {
        try
        {
            this->shim().Show(*reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Hide() noexcept override
    {
        try
        {
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
    HRESULT __stdcall get_SupportsAudio(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportsAudio());
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
            this->shim().SupportsAudio(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsVideo(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportsVideo());
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
            this->shim().SupportsVideo(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsPictures(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportsPictures());
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
            this->shim().SupportsPictures(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedCastingSources(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Media::Casting::CastingSource>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedCastingSources());
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
    HRESULT __stdcall get_SelectedCastingDevice(abi_arg_out<Windows::Media::Casting::ICastingDevice> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedCastingDevice());
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
    HRESULT __stdcall abi_GetDeviceSelector(Windows::Media::Casting::CastingPlaybackTypes type, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeviceSelector(type));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorFromCastingSourceAsync(abi_arg_in<Windows::Media::Casting::ICastingSource> castingSource, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetDeviceSelectorFromCastingSourceAsync(*reinterpret_cast<const Windows::Media::Casting::CastingSource *>(&castingSource)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> value, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeviceInfoSupportsCastingAsync(abi_arg_in<Windows::Devices::Enumeration::IDeviceInformation> device, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DeviceInfoSupportsCastingAsync(*reinterpret_cast<const Windows::Devices::Enumeration::DeviceInformation *>(&device)));
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
    HRESULT __stdcall get_PreferredSourceUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreferredSourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredSourceUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().PreferredSourceUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::Casting {

template <typename D> Windows::Foundation::Uri impl_ICastingSource<D>::PreferredSourceUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ICastingSource &>(static_cast<const D &>(*this))->get_PreferredSourceUri(put(value)));
    return value;
}

template <typename D> void impl_ICastingSource<D>::PreferredSourceUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ICastingSource &>(static_cast<const D &>(*this))->put_PreferredSourceUri(get(value)));
}

template <typename D> Windows::Media::Casting::CastingConnectionErrorStatus impl_ICastingConnectionErrorOccurredEventArgs<D>::ErrorStatus() const
{
    Windows::Media::Casting::CastingConnectionErrorStatus value {};
    check_hresult(static_cast<const ICastingConnectionErrorOccurredEventArgs &>(static_cast<const D &>(*this))->get_ErrorStatus(&value));
    return value;
}

template <typename D> hstring impl_ICastingConnectionErrorOccurredEventArgs<D>::Message() const
{
    hstring value;
    check_hresult(static_cast<const ICastingConnectionErrorOccurredEventArgs &>(static_cast<const D &>(*this))->get_Message(put(value)));
    return value;
}

template <typename D> Windows::Media::Casting::CastingConnectionState impl_ICastingConnection<D>::State() const
{
    Windows::Media::Casting::CastingConnectionState value {};
    check_hresult(static_cast<const ICastingConnection &>(static_cast<const D &>(*this))->get_State(&value));
    return value;
}

template <typename D> Windows::Media::Casting::CastingDevice impl_ICastingConnection<D>::Device() const
{
    Windows::Media::Casting::CastingDevice value { nullptr };
    check_hresult(static_cast<const ICastingConnection &>(static_cast<const D &>(*this))->get_Device(put(value)));
    return value;
}

template <typename D> Windows::Media::Casting::CastingSource impl_ICastingConnection<D>::Source() const
{
    Windows::Media::Casting::CastingSource value { nullptr };
    check_hresult(static_cast<const ICastingConnection &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> void impl_ICastingConnection<D>::Source(const Windows::Media::Casting::CastingSource & value) const
{
    check_hresult(static_cast<const ICastingConnection &>(static_cast<const D &>(*this))->put_Source(get(value)));
}

template <typename D> event_token impl_ICastingConnection<D>::StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ICastingConnection &>(static_cast<const D &>(*this))->add_StateChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICastingConnection> impl_ICastingConnection<D>::StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ICastingConnection>(this, &ABI::Windows::Media::Casting::ICastingConnection::remove_StateChanged, StateChanged(handler));
}

template <typename D> void impl_ICastingConnection<D>::StateChanged(event_token token) const
{
    check_hresult(static_cast<const ICastingConnection &>(static_cast<const D &>(*this))->remove_StateChanged(token));
}

template <typename D> event_token impl_ICastingConnection<D>::ErrorOccurred(const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ICastingConnection &>(static_cast<const D &>(*this))->add_ErrorOccurred(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICastingConnection> impl_ICastingConnection<D>::ErrorOccurred(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICastingConnection>(this, &ABI::Windows::Media::Casting::ICastingConnection::remove_ErrorOccurred, ErrorOccurred(handler));
}

template <typename D> void impl_ICastingConnection<D>::ErrorOccurred(event_token token) const
{
    check_hresult(static_cast<const ICastingConnection &>(static_cast<const D &>(*this))->remove_ErrorOccurred(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingConnectionErrorStatus> impl_ICastingConnection<D>::RequestStartCastingAsync(const Windows::Media::Casting::CastingSource & value) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingConnectionErrorStatus> operation;
    check_hresult(static_cast<const ICastingConnection &>(static_cast<const D &>(*this))->abi_RequestStartCastingAsync(get(value), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingConnectionErrorStatus> impl_ICastingConnection<D>::DisconnectAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingConnectionErrorStatus> operation;
    check_hresult(static_cast<const ICastingConnection &>(static_cast<const D &>(*this))->abi_DisconnectAsync(put(operation)));
    return operation;
}

template <typename D> hstring impl_ICastingDevice<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const ICastingDevice &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_ICastingDevice<D>::FriendlyName() const
{
    hstring value;
    check_hresult(static_cast<const ICastingDevice &>(static_cast<const D &>(*this))->get_FriendlyName(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamWithContentType impl_ICastingDevice<D>::Icon() const
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType value;
    check_hresult(static_cast<const ICastingDevice &>(static_cast<const D &>(*this))->get_Icon(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingPlaybackTypes> impl_ICastingDevice<D>::GetSupportedCastingPlaybackTypesAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingPlaybackTypes> operation;
    check_hresult(static_cast<const ICastingDevice &>(static_cast<const D &>(*this))->abi_GetSupportedCastingPlaybackTypesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Media::Casting::CastingConnection impl_ICastingDevice<D>::CreateCastingConnection() const
{
    Windows::Media::Casting::CastingConnection value { nullptr };
    check_hresult(static_cast<const ICastingDevice &>(static_cast<const D &>(*this))->abi_CreateCastingConnection(put(value)));
    return value;
}

template <typename D> hstring impl_ICastingDeviceStatics<D>::GetDeviceSelector(Windows::Media::Casting::CastingPlaybackTypes type) const
{
    hstring value;
    check_hresult(static_cast<const ICastingDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(type, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_ICastingDeviceStatics<D>::GetDeviceSelectorFromCastingSourceAsync(const Windows::Media::Casting::CastingSource & castingSource) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const ICastingDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelectorFromCastingSourceAsync(get(castingSource), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice> impl_ICastingDeviceStatics<D>::FromIdAsync(hstring_ref value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice> operation;
    check_hresult(static_cast<const ICastingDeviceStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(value), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ICastingDeviceStatics<D>::DeviceInfoSupportsCastingAsync(const Windows::Devices::Enumeration::DeviceInformation & device) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ICastingDeviceStatics &>(static_cast<const D &>(*this))->abi_DeviceInfoSupportsCastingAsync(get(device), put(operation)));
    return operation;
}

template <typename D> Windows::Media::Casting::CastingDevice impl_ICastingDeviceSelectedEventArgs<D>::SelectedCastingDevice() const
{
    Windows::Media::Casting::CastingDevice value { nullptr };
    check_hresult(static_cast<const ICastingDeviceSelectedEventArgs &>(static_cast<const D &>(*this))->get_SelectedCastingDevice(put(value)));
    return value;
}

template <typename D> bool impl_ICastingDevicePickerFilter<D>::SupportsAudio() const
{
    bool value {};
    check_hresult(static_cast<const ICastingDevicePickerFilter &>(static_cast<const D &>(*this))->get_SupportsAudio(&value));
    return value;
}

template <typename D> void impl_ICastingDevicePickerFilter<D>::SupportsAudio(bool value) const
{
    check_hresult(static_cast<const ICastingDevicePickerFilter &>(static_cast<const D &>(*this))->put_SupportsAudio(value));
}

template <typename D> bool impl_ICastingDevicePickerFilter<D>::SupportsVideo() const
{
    bool value {};
    check_hresult(static_cast<const ICastingDevicePickerFilter &>(static_cast<const D &>(*this))->get_SupportsVideo(&value));
    return value;
}

template <typename D> void impl_ICastingDevicePickerFilter<D>::SupportsVideo(bool value) const
{
    check_hresult(static_cast<const ICastingDevicePickerFilter &>(static_cast<const D &>(*this))->put_SupportsVideo(value));
}

template <typename D> bool impl_ICastingDevicePickerFilter<D>::SupportsPictures() const
{
    bool value {};
    check_hresult(static_cast<const ICastingDevicePickerFilter &>(static_cast<const D &>(*this))->get_SupportsPictures(&value));
    return value;
}

template <typename D> void impl_ICastingDevicePickerFilter<D>::SupportsPictures(bool value) const
{
    check_hresult(static_cast<const ICastingDevicePickerFilter &>(static_cast<const D &>(*this))->put_SupportsPictures(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Casting::CastingSource> impl_ICastingDevicePickerFilter<D>::SupportedCastingSources() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Casting::CastingSource> value;
    check_hresult(static_cast<const ICastingDevicePickerFilter &>(static_cast<const D &>(*this))->get_SupportedCastingSources(put(value)));
    return value;
}

template <typename D> Windows::Media::Casting::CastingDevicePickerFilter impl_ICastingDevicePicker<D>::Filter() const
{
    Windows::Media::Casting::CastingDevicePickerFilter value { nullptr };
    check_hresult(static_cast<const ICastingDevicePicker &>(static_cast<const D &>(*this))->get_Filter(put(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DevicePickerAppearance impl_ICastingDevicePicker<D>::Appearance() const
{
    Windows::Devices::Enumeration::DevicePickerAppearance value { nullptr };
    check_hresult(static_cast<const ICastingDevicePicker &>(static_cast<const D &>(*this))->get_Appearance(put(value)));
    return value;
}

template <typename D> event_token impl_ICastingDevicePicker<D>::CastingDeviceSelected(const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ICastingDevicePicker &>(static_cast<const D &>(*this))->add_CastingDeviceSelected(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICastingDevicePicker> impl_ICastingDevicePicker<D>::CastingDeviceSelected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICastingDevicePicker>(this, &ABI::Windows::Media::Casting::ICastingDevicePicker::remove_CastingDeviceSelected, CastingDeviceSelected(handler));
}

template <typename D> void impl_ICastingDevicePicker<D>::CastingDeviceSelected(event_token token) const
{
    check_hresult(static_cast<const ICastingDevicePicker &>(static_cast<const D &>(*this))->remove_CastingDeviceSelected(token));
}

template <typename D> event_token impl_ICastingDevicePicker<D>::CastingDevicePickerDismissed(const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ICastingDevicePicker &>(static_cast<const D &>(*this))->add_CastingDevicePickerDismissed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICastingDevicePicker> impl_ICastingDevicePicker<D>::CastingDevicePickerDismissed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ICastingDevicePicker>(this, &ABI::Windows::Media::Casting::ICastingDevicePicker::remove_CastingDevicePickerDismissed, CastingDevicePickerDismissed(handler));
}

template <typename D> void impl_ICastingDevicePicker<D>::CastingDevicePickerDismissed(event_token token) const
{
    check_hresult(static_cast<const ICastingDevicePicker &>(static_cast<const D &>(*this))->remove_CastingDevicePickerDismissed(token));
}

template <typename D> void impl_ICastingDevicePicker<D>::Show(const Windows::Foundation::Rect & selection) const
{
    check_hresult(static_cast<const ICastingDevicePicker &>(static_cast<const D &>(*this))->abi_Show(get(selection)));
}

template <typename D> void impl_ICastingDevicePicker<D>::Show(const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const
{
    check_hresult(static_cast<const ICastingDevicePicker &>(static_cast<const D &>(*this))->abi_ShowWithPlacement(get(selection), preferredPlacement));
}

template <typename D> void impl_ICastingDevicePicker<D>::Hide() const
{
    check_hresult(static_cast<const ICastingDevicePicker &>(static_cast<const D &>(*this))->abi_Hide());
}

inline hstring CastingDevice::GetDeviceSelector(Windows::Media::Casting::CastingPlaybackTypes type)
{
    return get_activation_factory<CastingDevice, ICastingDeviceStatics>().GetDeviceSelector(type);
}

inline Windows::Foundation::IAsyncOperation<hstring> CastingDevice::GetDeviceSelectorFromCastingSourceAsync(const Windows::Media::Casting::CastingSource & castingSource)
{
    return get_activation_factory<CastingDevice, ICastingDeviceStatics>().GetDeviceSelectorFromCastingSourceAsync(castingSource);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice> CastingDevice::FromIdAsync(hstring_ref value)
{
    return get_activation_factory<CastingDevice, ICastingDeviceStatics>().FromIdAsync(value);
}

inline Windows::Foundation::IAsyncOperation<bool> CastingDevice::DeviceInfoSupportsCastingAsync(const Windows::Devices::Enumeration::DeviceInformation & device)
{
    return get_activation_factory<CastingDevice, ICastingDeviceStatics>().DeviceInfoSupportsCastingAsync(device);
}

inline CastingDevicePicker::CastingDevicePicker() :
    CastingDevicePicker(activate_instance<CastingDevicePicker>())
{}

}

}
