// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Notifications {

enum class NotificationKinds : unsigned;
struct UserNotification;
struct UserNotificationChangedEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::UI::Notifications::Management {

enum class UserNotificationListenerAccessStatus
{
    Unspecified = 0,
    Allowed = 1,
    Denied = 2,
};

struct IUserNotificationListener;
struct IUserNotificationListenerStatics;
struct UserNotificationListener;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Notifications::Management::IUserNotificationListener>{ using type = interface_category; };
template <> struct category<Windows::UI::Notifications::Management::IUserNotificationListenerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Notifications::Management::UserNotificationListener>{ using type = class_category; };
template <> struct category<Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus>{ using type = enum_category; };
template <> struct name<Windows::UI::Notifications::Management::IUserNotificationListener>{ static constexpr auto & value{ L"Windows.UI.Notifications.Management.IUserNotificationListener" }; };
template <> struct name<Windows::UI::Notifications::Management::IUserNotificationListenerStatics>{ static constexpr auto & value{ L"Windows.UI.Notifications.Management.IUserNotificationListenerStatics" }; };
template <> struct name<Windows::UI::Notifications::Management::UserNotificationListener>{ static constexpr auto & value{ L"Windows.UI.Notifications.Management.UserNotificationListener" }; };
template <> struct name<Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus>{ static constexpr auto & value{ L"Windows.UI.Notifications.Management.UserNotificationListenerAccessStatus" }; };
template <> struct guid<Windows::UI::Notifications::Management::IUserNotificationListener>{ static constexpr GUID value{ 0x62553E41,0x8A06,0x4CEF,{ 0x82,0x15,0x60,0x33,0xA5,0xBE,0x4B,0x03 } }; };
template <> struct guid<Windows::UI::Notifications::Management::IUserNotificationListenerStatics>{ static constexpr GUID value{ 0xFF6123CF,0x4386,0x4AA3,{ 0xB7,0x3D,0xB8,0x04,0xE5,0xB6,0x3B,0x23 } }; };
template <> struct default_interface<Windows::UI::Notifications::Management::UserNotificationListener>{ using type = Windows::UI::Notifications::Management::IUserNotificationListener; };

template <typename D>
struct consume_Windows_UI_Notifications_Management_IUserNotificationListener
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> RequestAccessAsync() const;
    Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus GetAccessStatus() const;
    event_token NotificationChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::Management::UserNotificationListener, Windows::UI::Notifications::UserNotificationChangedEventArgs> const& handler) const;
    using NotificationChanged_revoker = event_revoker<Windows::UI::Notifications::Management::IUserNotificationListener>;
    NotificationChanged_revoker NotificationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::Management::UserNotificationListener, Windows::UI::Notifications::UserNotificationChangedEventArgs> const& handler) const;
    void NotificationChanged(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::UserNotification>> GetNotificationsAsync(Windows::UI::Notifications::NotificationKinds const& kinds) const;
    Windows::UI::Notifications::UserNotification GetNotification(uint32_t notificationId) const;
    void ClearNotifications() const;
    void RemoveNotification(uint32_t notificationId) const;
};
template <> struct consume<Windows::UI::Notifications::Management::IUserNotificationListener> { template <typename D> using type = consume_Windows_UI_Notifications_Management_IUserNotificationListener<D>; };

template <typename D>
struct consume_Windows_UI_Notifications_Management_IUserNotificationListenerStatics
{
    Windows::UI::Notifications::Management::UserNotificationListener Current() const;
};
template <> struct consume<Windows::UI::Notifications::Management::IUserNotificationListenerStatics> { template <typename D> using type = consume_Windows_UI_Notifications_Management_IUserNotificationListenerStatics<D>; };

template <> struct abi<Windows::UI::Notifications::Management::IUserNotificationListener>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetAccessStatus(abi_t<Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus>* accessStatus) = 0;
    virtual HRESULT __stdcall add_NotificationChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_NotificationChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall GetNotificationsAsync(abi_t<Windows::UI::Notifications::NotificationKinds> kinds, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetNotification(uint32_t notificationId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ClearNotifications() = 0;
    virtual HRESULT __stdcall RemoveNotification(uint32_t notificationId) = 0;
};};

template <> struct abi<Windows::UI::Notifications::Management::IUserNotificationListenerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Current(::IUnknown** result) = 0;
};};

}
