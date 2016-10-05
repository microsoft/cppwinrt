// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Notifications.Management.0.h"
#include "Windows.UI.Notifications.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.UI.Notifications.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Notifications::Management {

struct __declspec(uuid("62553e41-8a06-4cef-8215-6033a5be4b03")) __declspec(novtable) IUserNotificationListener : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RequestAccessAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> ** result) = 0;
    virtual HRESULT __stdcall abi_GetAccessStatus(winrt::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus * accessStatus) = 0;
    virtual HRESULT __stdcall add_NotificationChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::Management::UserNotificationListener, Windows::UI::Notifications::UserNotificationChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_NotificationChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_GetNotificationsAsync(winrt::Windows::UI::Notifications::NotificationKinds kinds, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::UserNotification>> ** result) = 0;
    virtual HRESULT __stdcall abi_GetNotification(uint32_t notificationId, Windows::UI::Notifications::IUserNotification ** result) = 0;
    virtual HRESULT __stdcall abi_ClearNotifications() = 0;
    virtual HRESULT __stdcall abi_RemoveNotification(uint32_t notificationId) = 0;
};

struct __declspec(uuid("ff6123cf-4386-4aa3-b73d-b804e5b63b23")) __declspec(novtable) IUserNotificationListenerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Current(Windows::UI::Notifications::Management::IUserNotificationListener ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Notifications::Management::UserNotificationListener> { using default_interface = Windows::UI::Notifications::Management::IUserNotificationListener; };

}

namespace Windows::UI::Notifications::Management {

template <typename T> struct impl_IUserNotificationListener;
template <typename T> struct impl_IUserNotificationListenerStatics;

}

namespace impl {

template <> struct traits<Windows::UI::Notifications::Management::IUserNotificationListener>
{
    using abi = ABI::Windows::UI::Notifications::Management::IUserNotificationListener;
    template <typename D> using consume = Windows::UI::Notifications::Management::impl_IUserNotificationListener<D>;
};

template <> struct traits<Windows::UI::Notifications::Management::IUserNotificationListenerStatics>
{
    using abi = ABI::Windows::UI::Notifications::Management::IUserNotificationListenerStatics;
    template <typename D> using consume = Windows::UI::Notifications::Management::impl_IUserNotificationListenerStatics<D>;
};

template <> struct traits<Windows::UI::Notifications::Management::UserNotificationListener>
{
    using abi = ABI::Windows::UI::Notifications::Management::UserNotificationListener;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Notifications.Management.UserNotificationListener"; }
};

}

}
