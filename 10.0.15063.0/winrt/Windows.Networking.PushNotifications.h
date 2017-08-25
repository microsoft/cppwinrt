// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Notifications.2.h"
#include "winrt/impl/Windows.Networking.PushNotifications.2.h"
#include "winrt/Windows.Networking.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Networking_PushNotifications_IPushNotificationChannel<D>::Uri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannel)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Networking_PushNotifications_IPushNotificationChannel<D>::ExpirationTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannel)->get_ExpirationTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_PushNotifications_IPushNotificationChannel<D>::Close() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannel)->Close());
}

template <typename D> event_token consume_Windows_Networking_PushNotifications_IPushNotificationChannel<D>::PushNotificationReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannel)->add_PushNotificationReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::PushNotifications::IPushNotificationChannel> consume_Windows_Networking_PushNotifications_IPushNotificationChannel<D>::PushNotificationReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::PushNotifications::IPushNotificationChannel>(this, &abi_t<Windows::Networking::PushNotifications::IPushNotificationChannel>::remove_PushNotificationReceived, PushNotificationReceived(handler));
}

template <typename D> void consume_Windows_Networking_PushNotifications_IPushNotificationChannel<D>::PushNotificationReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannel)->remove_PushNotificationReceived(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser<D>::CreatePushNotificationChannelForApplicationAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser)->CreatePushNotificationChannelForApplicationAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser<D>::CreatePushNotificationChannelForApplicationAsync(param::hstring const& applicationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser)->CreatePushNotificationChannelForApplicationAsyncWithId(get_abi(applicationId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser<D>::CreatePushNotificationChannelForSecondaryTileAsync(param::hstring const& tileId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser)->CreatePushNotificationChannelForSecondaryTileAsync(get_abi(tileId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::User consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser2<D>::CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(Windows::Storage::Streams::IBuffer const& appServerKey, param::hstring const& channelId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2)->CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(get_abi(appServerKey), get_abi(channelId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser2<D>::CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(Windows::Storage::Streams::IBuffer const& appServerKey, param::hstring const& channelId, param::hstring const& appId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2)->CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsyncWithId(get_abi(appServerKey), get_abi(channelId), get_abi(appId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics<D>::CreatePushNotificationChannelForApplicationAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics)->CreatePushNotificationChannelForApplicationAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics<D>::CreatePushNotificationChannelForApplicationAsync(param::hstring const& applicationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics)->CreatePushNotificationChannelForApplicationAsyncWithId(get_abi(applicationId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics<D>::CreatePushNotificationChannelForSecondaryTileAsync(param::hstring const& tileId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics)->CreatePushNotificationChannelForSecondaryTileAsync(get_abi(tileId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics2<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics3<D>::GetDefault() const
{
    Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_PushNotifications_IPushNotificationReceivedEventArgs<D>::Cancel(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs)->put_Cancel(value));
}

template <typename D> bool consume_Windows_Networking_PushNotifications_IPushNotificationReceivedEventArgs<D>::Cancel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs)->get_Cancel(&value));
    return value;
}

template <typename D> Windows::Networking::PushNotifications::PushNotificationType consume_Windows_Networking_PushNotifications_IPushNotificationReceivedEventArgs<D>::NotificationType() const
{
    Windows::Networking::PushNotifications::PushNotificationType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs)->get_NotificationType(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::ToastNotification consume_Windows_Networking_PushNotifications_IPushNotificationReceivedEventArgs<D>::ToastNotification() const
{
    Windows::UI::Notifications::ToastNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs)->get_ToastNotification(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::TileNotification consume_Windows_Networking_PushNotifications_IPushNotificationReceivedEventArgs<D>::TileNotification() const
{
    Windows::UI::Notifications::TileNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs)->get_TileNotification(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::BadgeNotification consume_Windows_Networking_PushNotifications_IPushNotificationReceivedEventArgs<D>::BadgeNotification() const
{
    Windows::UI::Notifications::BadgeNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs)->get_BadgeNotification(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::PushNotifications::RawNotification consume_Windows_Networking_PushNotifications_IPushNotificationReceivedEventArgs<D>::RawNotification() const
{
    Windows::Networking::PushNotifications::RawNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs)->get_RawNotification(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_PushNotifications_IRawNotification<D>::Content() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IRawNotification)->get_Content(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> consume_Windows_Networking_PushNotifications_IRawNotification2<D>::Headers() const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IRawNotification2)->get_Headers(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_PushNotifications_IRawNotification2<D>::ChannelId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::PushNotifications::IRawNotification2)->get_ChannelId(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Networking::PushNotifications::IPushNotificationChannel> : produce_base<D, Windows::Networking::PushNotifications::IPushNotificationChannel>
{
    HRESULT __stdcall get_Uri(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_ExpirationTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
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

    HRESULT __stdcall Close() noexcept override
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

    HRESULT __stdcall add_PushNotificationReceived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PushNotificationReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PushNotificationReceived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PushNotificationReceived(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall CreatePushNotificationChannelForApplicationAsync(::IUnknown** operation) noexcept override
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

    HRESULT __stdcall CreatePushNotificationChannelForApplicationAsyncWithId(HSTRING applicationId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreatePushNotificationChannelForApplicationAsync(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePushNotificationChannelForSecondaryTileAsync(HSTRING tileId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreatePushNotificationChannelForSecondaryTileAsync(*reinterpret_cast<hstring const*>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
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
    HRESULT __stdcall CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(::IUnknown* appServerKey, HSTRING channelId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&appServerKey), *reinterpret_cast<hstring const*>(&channelId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsyncWithId(::IUnknown* appServerKey, HSTRING channelId, HSTRING appId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&appServerKey), *reinterpret_cast<hstring const*>(&channelId), *reinterpret_cast<hstring const*>(&appId)));
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
    HRESULT __stdcall CreatePushNotificationChannelForApplicationAsync(::IUnknown** operation) noexcept override
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

    HRESULT __stdcall CreatePushNotificationChannelForApplicationAsyncWithId(HSTRING applicationId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreatePushNotificationChannelForApplicationAsync(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePushNotificationChannelForSecondaryTileAsync(HSTRING tileId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreatePushNotificationChannelForSecondaryTileAsync(*reinterpret_cast<hstring const*>(&tileId)));
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
    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
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
    HRESULT __stdcall GetDefault(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Cancel(bool* value) noexcept override
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

    HRESULT __stdcall get_NotificationType(abi_t<Windows::Networking::PushNotifications::PushNotificationType>* value) noexcept override
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

    HRESULT __stdcall get_ToastNotification(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_TileNotification(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_BadgeNotification(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_RawNotification(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_Content(HSTRING* value) noexcept override
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
    HRESULT __stdcall get_Headers(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_ChannelId(HSTRING* value) noexcept override
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

WINRT_EXPORT namespace winrt::Windows::Networking::PushNotifications {

inline Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> PushNotificationChannelManager::CreatePushNotificationChannelForApplicationAsync()
{
    return get_activation_factory<PushNotificationChannelManager, Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics>().CreatePushNotificationChannelForApplicationAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> PushNotificationChannelManager::CreatePushNotificationChannelForApplicationAsync(param::hstring const& applicationId)
{
    return get_activation_factory<PushNotificationChannelManager, Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics>().CreatePushNotificationChannelForApplicationAsync(applicationId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> PushNotificationChannelManager::CreatePushNotificationChannelForSecondaryTileAsync(param::hstring const& tileId)
{
    return get_activation_factory<PushNotificationChannelManager, Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics>().CreatePushNotificationChannelForSecondaryTileAsync(tileId);
}

inline Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser PushNotificationChannelManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<PushNotificationChannelManager, Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2>().GetForUser(user);
}

inline Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser PushNotificationChannelManager::GetDefault()
{
    return get_activation_factory<PushNotificationChannelManager, Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3>().GetDefault();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Networking::PushNotifications::IPushNotificationChannel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::IPushNotificationChannel> {};

template<> struct hash<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser> {};

template<> struct hash<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2> {};

template<> struct hash<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics> {};

template<> struct hash<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2> {};

template<> struct hash<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3> {};

template<> struct hash<winrt::Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Networking::PushNotifications::IRawNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::IRawNotification> {};

template<> struct hash<winrt::Windows::Networking::PushNotifications::IRawNotification2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::IRawNotification2> {};

template<> struct hash<winrt::Windows::Networking::PushNotifications::PushNotificationChannel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::PushNotificationChannel> {};

template<> struct hash<winrt::Windows::Networking::PushNotifications::PushNotificationChannelManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::PushNotificationChannelManager> {};

template<> struct hash<winrt::Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser> {};

template<> struct hash<winrt::Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Networking::PushNotifications::RawNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::PushNotifications::RawNotification> {};

}

WINRT_WARNING_POP
