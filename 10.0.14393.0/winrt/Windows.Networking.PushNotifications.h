// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.UI.Notifications.3.h"
#include "internal/Windows.Networking.PushNotifications.3.h"
#include "Windows.Networking.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Networking::PushNotifications::IPushNotificationChannel> : produce_base<D, Windows::Networking::PushNotifications::IPushNotificationChannel>
{
    HRESULT __stdcall get_Uri(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpirationTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Close() noexcept override
    {
        try
        {
            this->shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PushNotificationReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PushNotificationReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PushNotificationReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().PushNotificationReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser> : produce_base<D, Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser>
{
    HRESULT __stdcall abi_CreatePushNotificationChannelForApplicationAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreatePushNotificationChannelForApplicationAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePushNotificationChannelForApplicationAsyncWithId(abi_arg_in<hstring> applicationId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreatePushNotificationChannelForApplicationAsync(*reinterpret_cast<const hstring *>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePushNotificationChannelForSecondaryTileAsync(abi_arg_in<hstring> tileId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreatePushNotificationChannelForSecondaryTileAsync(*reinterpret_cast<const hstring *>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().User());
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
struct produce<D, Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics> : produce_base<D, Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics>
{
    HRESULT __stdcall abi_CreatePushNotificationChannelForApplicationAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreatePushNotificationChannelForApplicationAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePushNotificationChannelForApplicationAsyncWithId(abi_arg_in<hstring> applicationId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreatePushNotificationChannelForApplicationAsync(*reinterpret_cast<const hstring *>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePushNotificationChannelForSecondaryTileAsync(abi_arg_in<hstring> tileId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreatePushNotificationChannelForSecondaryTileAsync(*reinterpret_cast<const hstring *>(&tileId)));
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
struct produce<D, Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2> : produce_base<D, Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2>
{
    HRESULT __stdcall abi_GetForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_out<Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs> : produce_base<D, Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs>
{
    HRESULT __stdcall put_Cancel(bool value) noexcept override
    {
        try
        {
            this->shim().Cancel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cancel(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cancel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NotificationType(Windows::Networking::PushNotifications::PushNotificationType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NotificationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToastNotification(abi_arg_out<Windows::UI::Notifications::IToastNotification> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ToastNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TileNotification(abi_arg_out<Windows::UI::Notifications::ITileNotification> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TileNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BadgeNotification(abi_arg_out<Windows::UI::Notifications::IBadgeNotification> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BadgeNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawNotification(abi_arg_out<Windows::Networking::PushNotifications::IRawNotification> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RawNotification());
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
struct produce<D, Windows::Networking::PushNotifications::IRawNotification> : produce_base<D, Windows::Networking::PushNotifications::IRawNotification>
{
    HRESULT __stdcall get_Content(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Networking::PushNotifications {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> impl_IPushNotificationChannelManagerStatics<D>::CreatePushNotificationChannelForApplicationAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation;
    check_hresult(static_cast<const IPushNotificationChannelManagerStatics &>(static_cast<const D &>(*this))->abi_CreatePushNotificationChannelForApplicationAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> impl_IPushNotificationChannelManagerStatics<D>::CreatePushNotificationChannelForApplicationAsync(hstring_ref applicationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation;
    check_hresult(static_cast<const IPushNotificationChannelManagerStatics &>(static_cast<const D &>(*this))->abi_CreatePushNotificationChannelForApplicationAsyncWithId(get(applicationId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> impl_IPushNotificationChannelManagerStatics<D>::CreatePushNotificationChannelForSecondaryTileAsync(hstring_ref tileId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation;
    check_hresult(static_cast<const IPushNotificationChannelManagerStatics &>(static_cast<const D &>(*this))->abi_CreatePushNotificationChannelForSecondaryTileAsync(get(tileId), put(operation)));
    return operation;
}

template <typename D> Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser impl_IPushNotificationChannelManagerStatics2<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser result { nullptr };
    check_hresult(static_cast<const IPushNotificationChannelManagerStatics2 &>(static_cast<const D &>(*this))->abi_GetForUser(get(user), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> impl_IPushNotificationChannelManagerForUser<D>::CreatePushNotificationChannelForApplicationAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation;
    check_hresult(static_cast<const IPushNotificationChannelManagerForUser &>(static_cast<const D &>(*this))->abi_CreatePushNotificationChannelForApplicationAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> impl_IPushNotificationChannelManagerForUser<D>::CreatePushNotificationChannelForApplicationAsync(hstring_ref applicationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation;
    check_hresult(static_cast<const IPushNotificationChannelManagerForUser &>(static_cast<const D &>(*this))->abi_CreatePushNotificationChannelForApplicationAsyncWithId(get(applicationId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> impl_IPushNotificationChannelManagerForUser<D>::CreatePushNotificationChannelForSecondaryTileAsync(hstring_ref tileId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation;
    check_hresult(static_cast<const IPushNotificationChannelManagerForUser &>(static_cast<const D &>(*this))->abi_CreatePushNotificationChannelForSecondaryTileAsync(get(tileId), put(operation)));
    return operation;
}

template <typename D> Windows::System::User impl_IPushNotificationChannelManagerForUser<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IPushNotificationChannelManagerForUser &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> hstring impl_IPushNotificationChannel<D>::Uri() const
{
    hstring value;
    check_hresult(static_cast<const IPushNotificationChannel &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPushNotificationChannel<D>::ExpirationTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IPushNotificationChannel &>(static_cast<const D &>(*this))->get_ExpirationTime(put(value)));
    return value;
}

template <typename D> void impl_IPushNotificationChannel<D>::Close() const
{
    check_hresult(static_cast<const IPushNotificationChannel &>(static_cast<const D &>(*this))->abi_Close());
}

template <typename D> event_token impl_IPushNotificationChannel<D>::PushNotificationReceived(const Windows::Foundation::TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPushNotificationChannel &>(static_cast<const D &>(*this))->add_PushNotificationReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPushNotificationChannel> impl_IPushNotificationChannel<D>::PushNotificationReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPushNotificationChannel>(this, &ABI::Windows::Networking::PushNotifications::IPushNotificationChannel::remove_PushNotificationReceived, PushNotificationReceived(handler));
}

template <typename D> void impl_IPushNotificationChannel<D>::PushNotificationReceived(event_token token) const
{
    check_hresult(static_cast<const IPushNotificationChannel &>(static_cast<const D &>(*this))->remove_PushNotificationReceived(token));
}

template <typename D> void impl_IPushNotificationReceivedEventArgs<D>::Cancel(bool value) const
{
    check_hresult(static_cast<const IPushNotificationReceivedEventArgs &>(static_cast<const D &>(*this))->put_Cancel(value));
}

template <typename D> bool impl_IPushNotificationReceivedEventArgs<D>::Cancel() const
{
    bool value {};
    check_hresult(static_cast<const IPushNotificationReceivedEventArgs &>(static_cast<const D &>(*this))->get_Cancel(&value));
    return value;
}

template <typename D> Windows::Networking::PushNotifications::PushNotificationType impl_IPushNotificationReceivedEventArgs<D>::NotificationType() const
{
    Windows::Networking::PushNotifications::PushNotificationType value {};
    check_hresult(static_cast<const IPushNotificationReceivedEventArgs &>(static_cast<const D &>(*this))->get_NotificationType(&value));
    return value;
}

template <typename D> Windows::UI::Notifications::ToastNotification impl_IPushNotificationReceivedEventArgs<D>::ToastNotification() const
{
    Windows::UI::Notifications::ToastNotification value { nullptr };
    check_hresult(static_cast<const IPushNotificationReceivedEventArgs &>(static_cast<const D &>(*this))->get_ToastNotification(put(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::TileNotification impl_IPushNotificationReceivedEventArgs<D>::TileNotification() const
{
    Windows::UI::Notifications::TileNotification value { nullptr };
    check_hresult(static_cast<const IPushNotificationReceivedEventArgs &>(static_cast<const D &>(*this))->get_TileNotification(put(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::BadgeNotification impl_IPushNotificationReceivedEventArgs<D>::BadgeNotification() const
{
    Windows::UI::Notifications::BadgeNotification value { nullptr };
    check_hresult(static_cast<const IPushNotificationReceivedEventArgs &>(static_cast<const D &>(*this))->get_BadgeNotification(put(value)));
    return value;
}

template <typename D> Windows::Networking::PushNotifications::RawNotification impl_IPushNotificationReceivedEventArgs<D>::RawNotification() const
{
    Windows::Networking::PushNotifications::RawNotification value { nullptr };
    check_hresult(static_cast<const IPushNotificationReceivedEventArgs &>(static_cast<const D &>(*this))->get_RawNotification(put(value)));
    return value;
}

template <typename D> hstring impl_IRawNotification<D>::Content() const
{
    hstring value;
    check_hresult(static_cast<const IRawNotification &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> PushNotificationChannelManager::CreatePushNotificationChannelForApplicationAsync()
{
    return get_activation_factory<PushNotificationChannelManager, IPushNotificationChannelManagerStatics>().CreatePushNotificationChannelForApplicationAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> PushNotificationChannelManager::CreatePushNotificationChannelForApplicationAsync(hstring_ref applicationId)
{
    return get_activation_factory<PushNotificationChannelManager, IPushNotificationChannelManagerStatics>().CreatePushNotificationChannelForApplicationAsync(applicationId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> PushNotificationChannelManager::CreatePushNotificationChannelForSecondaryTileAsync(hstring_ref tileId)
{
    return get_activation_factory<PushNotificationChannelManager, IPushNotificationChannelManagerStatics>().CreatePushNotificationChannelForSecondaryTileAsync(tileId);
}

inline Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser PushNotificationChannelManager::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<PushNotificationChannelManager, IPushNotificationChannelManagerStatics2>().GetForUser(user);
}

}

}
