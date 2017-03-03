// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.UI.Notifications.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Networking.PushNotifications.3.h"
#include "Windows.Networking.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Networking::PushNotifications::IPushNotificationChannel> : produce_base<D, Windows::Networking::PushNotifications::IPushNotificationChannel>
{
    HRESULT __stdcall get_Uri(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(impl::abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpirationTime());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PushNotificationReceived(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PushNotificationReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> *>(&handler)));
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall abi_CreatePushNotificationChannelForApplicationAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreatePushNotificationChannelForApplicationAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePushNotificationChannelForApplicationAsyncWithId(impl::abi_arg_in<hstring> applicationId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreatePushNotificationChannelForApplicationAsync(*reinterpret_cast<const hstring *>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePushNotificationChannelForSecondaryTileAsync(impl::abi_arg_in<hstring> tileId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreatePushNotificationChannelForSecondaryTileAsync(*reinterpret_cast<const hstring *>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(impl::abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
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
struct produce<D, Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2> : produce_base<D, Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2>
{
    HRESULT __stdcall abi_CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> appServerKey, impl::abi_arg_in<hstring> channelId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&appServerKey), *reinterpret_cast<const hstring *>(&channelId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsyncWithId(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> appServerKey, impl::abi_arg_in<hstring> channelId, impl::abi_arg_in<hstring> appId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&appServerKey), *reinterpret_cast<const hstring *>(&channelId), *reinterpret_cast<const hstring *>(&appId)));
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
struct produce<D, Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics> : produce_base<D, Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics>
{
    HRESULT __stdcall abi_CreatePushNotificationChannelForApplicationAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreatePushNotificationChannelForApplicationAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePushNotificationChannelForApplicationAsyncWithId(impl::abi_arg_in<hstring> applicationId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreatePushNotificationChannelForApplicationAsync(*reinterpret_cast<const hstring *>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePushNotificationChannelForSecondaryTileAsync(impl::abi_arg_in<hstring> tileId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreatePushNotificationChannelForSecondaryTileAsync(*reinterpret_cast<const hstring *>(&tileId)));
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
    HRESULT __stdcall abi_GetForUser(impl::abi_arg_in<Windows::System::IUser> user, impl::abi_arg_out<Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
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
struct produce<D, Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3> : produce_base<D, Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3>
{
    HRESULT __stdcall abi_GetDefault(impl::abi_arg_out<Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs> : produce_base<D, Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs>
{
    HRESULT __stdcall put_Cancel(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Cancel());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NotificationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToastNotification(impl::abi_arg_out<Windows::UI::Notifications::IToastNotification> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToastNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TileNotification(impl::abi_arg_out<Windows::UI::Notifications::ITileNotification> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TileNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BadgeNotification(impl::abi_arg_out<Windows::UI::Notifications::IBadgeNotification> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BadgeNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawNotification(impl::abi_arg_out<Windows::Networking::PushNotifications::IRawNotification> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RawNotification());
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
    HRESULT __stdcall get_Content(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Content());
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
struct produce<D, Windows::Networking::PushNotifications::IRawNotification2> : produce_base<D, Windows::Networking::PushNotifications::IRawNotification2>
{
    HRESULT __stdcall get_Headers(impl::abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, hstring>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Headers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChannelId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChannelId());
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
    check_hresult(WINRT_SHIM(IPushNotificationChannelManagerStatics)->abi_CreatePushNotificationChannelForApplicationAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> impl_IPushNotificationChannelManagerStatics<D>::CreatePushNotificationChannelForApplicationAsync(hstring_view applicationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation;
    check_hresult(WINRT_SHIM(IPushNotificationChannelManagerStatics)->abi_CreatePushNotificationChannelForApplicationAsyncWithId(get_abi(applicationId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> impl_IPushNotificationChannelManagerStatics<D>::CreatePushNotificationChannelForSecondaryTileAsync(hstring_view tileId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation;
    check_hresult(WINRT_SHIM(IPushNotificationChannelManagerStatics)->abi_CreatePushNotificationChannelForSecondaryTileAsync(get_abi(tileId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser impl_IPushNotificationChannelManagerStatics2<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser result { nullptr };
    check_hresult(WINRT_SHIM(IPushNotificationChannelManagerStatics2)->abi_GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser impl_IPushNotificationChannelManagerStatics3<D>::GetDefault() const
{
    Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser value { nullptr };
    check_hresult(WINRT_SHIM(IPushNotificationChannelManagerStatics3)->abi_GetDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> impl_IPushNotificationChannelManagerForUser<D>::CreatePushNotificationChannelForApplicationAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation;
    check_hresult(WINRT_SHIM(IPushNotificationChannelManagerForUser)->abi_CreatePushNotificationChannelForApplicationAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> impl_IPushNotificationChannelManagerForUser<D>::CreatePushNotificationChannelForApplicationAsync(hstring_view applicationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation;
    check_hresult(WINRT_SHIM(IPushNotificationChannelManagerForUser)->abi_CreatePushNotificationChannelForApplicationAsyncWithId(get_abi(applicationId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> impl_IPushNotificationChannelManagerForUser<D>::CreatePushNotificationChannelForSecondaryTileAsync(hstring_view tileId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation;
    check_hresult(WINRT_SHIM(IPushNotificationChannelManagerForUser)->abi_CreatePushNotificationChannelForSecondaryTileAsync(get_abi(tileId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::User impl_IPushNotificationChannelManagerForUser<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(WINRT_SHIM(IPushNotificationChannelManagerForUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> impl_IPushNotificationChannelManagerForUser2<D>::CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(const Windows::Storage::Streams::IBuffer & appServerKey, hstring_view channelId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation;
    check_hresult(WINRT_SHIM(IPushNotificationChannelManagerForUser2)->abi_CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(get_abi(appServerKey), get_abi(channelId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> impl_IPushNotificationChannelManagerForUser2<D>::CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(const Windows::Storage::Streams::IBuffer & appServerKey, hstring_view channelId, hstring_view appId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation;
    check_hresult(WINRT_SHIM(IPushNotificationChannelManagerForUser2)->abi_CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsyncWithId(get_abi(appServerKey), get_abi(channelId), get_abi(appId), put_abi(operation)));
    return operation;
}

template <typename D> hstring impl_IPushNotificationChannel<D>::Uri() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPushNotificationChannel)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPushNotificationChannel<D>::ExpirationTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(WINRT_SHIM(IPushNotificationChannel)->get_ExpirationTime(put_abi(value)));
    return value;
}

template <typename D> void impl_IPushNotificationChannel<D>::Close() const
{
    check_hresult(WINRT_SHIM(IPushNotificationChannel)->abi_Close());
}

template <typename D> event_token impl_IPushNotificationChannel<D>::PushNotificationReceived(const Windows::Foundation::TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IPushNotificationChannel)->add_PushNotificationReceived(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IPushNotificationChannel> impl_IPushNotificationChannel<D>::PushNotificationReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPushNotificationChannel>(this, &ABI::Windows::Networking::PushNotifications::IPushNotificationChannel::remove_PushNotificationReceived, PushNotificationReceived(handler));
}

template <typename D> void impl_IPushNotificationChannel<D>::PushNotificationReceived(event_token token) const
{
    check_hresult(WINRT_SHIM(IPushNotificationChannel)->remove_PushNotificationReceived(token));
}

template <typename D> void impl_IPushNotificationReceivedEventArgs<D>::Cancel(bool value) const
{
    check_hresult(WINRT_SHIM(IPushNotificationReceivedEventArgs)->put_Cancel(value));
}

template <typename D> bool impl_IPushNotificationReceivedEventArgs<D>::Cancel() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPushNotificationReceivedEventArgs)->get_Cancel(&value));
    return value;
}

template <typename D> Windows::Networking::PushNotifications::PushNotificationType impl_IPushNotificationReceivedEventArgs<D>::NotificationType() const
{
    Windows::Networking::PushNotifications::PushNotificationType value {};
    check_hresult(WINRT_SHIM(IPushNotificationReceivedEventArgs)->get_NotificationType(&value));
    return value;
}

template <typename D> Windows::UI::Notifications::ToastNotification impl_IPushNotificationReceivedEventArgs<D>::ToastNotification() const
{
    Windows::UI::Notifications::ToastNotification value { nullptr };
    check_hresult(WINRT_SHIM(IPushNotificationReceivedEventArgs)->get_ToastNotification(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::TileNotification impl_IPushNotificationReceivedEventArgs<D>::TileNotification() const
{
    Windows::UI::Notifications::TileNotification value { nullptr };
    check_hresult(WINRT_SHIM(IPushNotificationReceivedEventArgs)->get_TileNotification(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::BadgeNotification impl_IPushNotificationReceivedEventArgs<D>::BadgeNotification() const
{
    Windows::UI::Notifications::BadgeNotification value { nullptr };
    check_hresult(WINRT_SHIM(IPushNotificationReceivedEventArgs)->get_BadgeNotification(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::PushNotifications::RawNotification impl_IPushNotificationReceivedEventArgs<D>::RawNotification() const
{
    Windows::Networking::PushNotifications::RawNotification value { nullptr };
    check_hresult(WINRT_SHIM(IPushNotificationReceivedEventArgs)->get_RawNotification(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRawNotification<D>::Content() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRawNotification)->get_Content(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> impl_IRawNotification2<D>::Headers() const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> value;
    check_hresult(WINRT_SHIM(IRawNotification2)->get_Headers(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRawNotification2<D>::ChannelId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRawNotification2)->get_ChannelId(put_abi(value)));
    return value;
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> PushNotificationChannelManager::CreatePushNotificationChannelForApplicationAsync()
{
    return get_activation_factory<PushNotificationChannelManager, IPushNotificationChannelManagerStatics>().CreatePushNotificationChannelForApplicationAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> PushNotificationChannelManager::CreatePushNotificationChannelForApplicationAsync(hstring_view applicationId)
{
    return get_activation_factory<PushNotificationChannelManager, IPushNotificationChannelManagerStatics>().CreatePushNotificationChannelForApplicationAsync(applicationId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> PushNotificationChannelManager::CreatePushNotificationChannelForSecondaryTileAsync(hstring_view tileId)
{
    return get_activation_factory<PushNotificationChannelManager, IPushNotificationChannelManagerStatics>().CreatePushNotificationChannelForSecondaryTileAsync(tileId);
}

inline Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser PushNotificationChannelManager::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<PushNotificationChannelManager, IPushNotificationChannelManagerStatics2>().GetForUser(user);
}

inline Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser PushNotificationChannelManager::GetDefault()
{
    return get_activation_factory<PushNotificationChannelManager, IPushNotificationChannelManagerStatics3>().GetDefault();
}

}

}

template<>
struct std::hash<winrt::Windows::Networking::PushNotifications::IPushNotificationChannel>
{
    size_t operator()(const winrt::Windows::Networking::PushNotifications::IPushNotificationChannel & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser>
{
    size_t operator()(const winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2>
{
    size_t operator()(const winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics>
{
    size_t operator()(const winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2>
{
    size_t operator()(const winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3>
{
    size_t operator()(const winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs>
{
    size_t operator()(const winrt::Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Networking::PushNotifications::IRawNotification>
{
    size_t operator()(const winrt::Windows::Networking::PushNotifications::IRawNotification & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Networking::PushNotifications::IRawNotification2>
{
    size_t operator()(const winrt::Windows::Networking::PushNotifications::IRawNotification2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Networking::PushNotifications::PushNotificationChannel>
{
    size_t operator()(const winrt::Windows::Networking::PushNotifications::PushNotificationChannel & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser>
{
    size_t operator()(const winrt::Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs>
{
    size_t operator()(const winrt::Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Networking::PushNotifications::RawNotification>
{
    size_t operator()(const winrt::Windows::Networking::PushNotifications::RawNotification & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
