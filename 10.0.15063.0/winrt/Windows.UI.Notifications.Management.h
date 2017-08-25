// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.UI.Notifications.2.h"
#include "winrt/impl/Windows.UI.Notifications.Management.2.h"
#include "winrt/Windows.UI.Notifications.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> consume_Windows_UI_Notifications_Management_IUserNotificationListener<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::Management::IUserNotificationListener)->RequestAccessAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus consume_Windows_UI_Notifications_Management_IUserNotificationListener<D>::GetAccessStatus() const
{
    Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus accessStatus{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::Management::IUserNotificationListener)->GetAccessStatus(put_abi(accessStatus)));
    return accessStatus;
}

template <typename D> event_token consume_Windows_UI_Notifications_Management_IUserNotificationListener<D>::NotificationChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::Management::UserNotificationListener, Windows::UI::Notifications::UserNotificationChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::Management::IUserNotificationListener)->add_NotificationChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Notifications::Management::IUserNotificationListener> consume_Windows_UI_Notifications_Management_IUserNotificationListener<D>::NotificationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::Management::UserNotificationListener, Windows::UI::Notifications::UserNotificationChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Notifications::Management::IUserNotificationListener>(this, &abi_t<Windows::UI::Notifications::Management::IUserNotificationListener>::remove_NotificationChanged, NotificationChanged(handler));
}

template <typename D> void consume_Windows_UI_Notifications_Management_IUserNotificationListener<D>::NotificationChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::Management::IUserNotificationListener)->remove_NotificationChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::UserNotification>> consume_Windows_UI_Notifications_Management_IUserNotificationListener<D>::GetNotificationsAsync(Windows::UI::Notifications::NotificationKinds const& kinds) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::UserNotification>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::Management::IUserNotificationListener)->GetNotificationsAsync(get_abi(kinds), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::UserNotification consume_Windows_UI_Notifications_Management_IUserNotificationListener<D>::GetNotification(uint32_t notificationId) const
{
    Windows::UI::Notifications::UserNotification result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::Management::IUserNotificationListener)->GetNotification(notificationId, put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Notifications_Management_IUserNotificationListener<D>::ClearNotifications() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::Management::IUserNotificationListener)->ClearNotifications());
}

template <typename D> void consume_Windows_UI_Notifications_Management_IUserNotificationListener<D>::RemoveNotification(uint32_t notificationId) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::Management::IUserNotificationListener)->RemoveNotification(notificationId));
}

template <typename D> Windows::UI::Notifications::Management::UserNotificationListener consume_Windows_UI_Notifications_Management_IUserNotificationListenerStatics<D>::Current() const
{
    Windows::UI::Notifications::Management::UserNotificationListener result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::Management::IUserNotificationListenerStatics)->get_Current(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::UI::Notifications::Management::IUserNotificationListener> : produce_base<D, Windows::UI::Notifications::Management::IUserNotificationListener>
{
    HRESULT __stdcall RequestAccessAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAccessStatus(abi_t<Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus>* accessStatus) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *accessStatus = detach_abi(this->shim().GetAccessStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NotificationChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().NotificationChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::Management::UserNotificationListener, Windows::UI::Notifications::UserNotificationChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NotificationChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotificationChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNotificationsAsync(abi_t<Windows::UI::Notifications::NotificationKinds> kinds, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetNotificationsAsync(*reinterpret_cast<Windows::UI::Notifications::NotificationKinds const*>(&kinds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNotification(uint32_t notificationId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetNotification(notificationId));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearNotifications() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearNotifications();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveNotification(uint32_t notificationId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveNotification(notificationId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::Management::IUserNotificationListenerStatics> : produce_base<D, Windows::UI::Notifications::Management::IUserNotificationListenerStatics>
{
    HRESULT __stdcall get_Current(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Notifications::Management {

inline Windows::UI::Notifications::Management::UserNotificationListener UserNotificationListener::Current()
{
    return get_activation_factory<UserNotificationListener, Windows::UI::Notifications::Management::IUserNotificationListenerStatics>().Current();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Notifications::Management::IUserNotificationListener> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::Management::IUserNotificationListener> {};

template<> struct hash<winrt::Windows::UI::Notifications::Management::IUserNotificationListenerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::Management::IUserNotificationListenerStatics> {};

template<> struct hash<winrt::Windows::UI::Notifications::Management::UserNotificationListener> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::Management::UserNotificationListener> {};

}

WINRT_WARNING_POP
