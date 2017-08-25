// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.Notifications.1.h"
#include "winrt/impl/Windows.Networking.PushNotifications.1.h"

WINRT_EXPORT namespace winrt::Windows::Networking::PushNotifications {

struct WINRT_EBO PushNotificationChannel :
    Windows::Networking::PushNotifications::IPushNotificationChannel
{
    PushNotificationChannel(std::nullptr_t) noexcept {}
};

struct PushNotificationChannelManager
{
    PushNotificationChannelManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForApplicationAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForApplicationAsync(param::hstring const& applicationId);
    static Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForSecondaryTileAsync(param::hstring const& tileId);
    static Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser GetForUser(Windows::System::User const& user);
    static Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser GetDefault();
};

struct WINRT_EBO PushNotificationChannelManagerForUser :
    Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser,
    impl::require<PushNotificationChannelManagerForUser, Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2>
{
    PushNotificationChannelManagerForUser(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PushNotificationReceivedEventArgs :
    Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs
{
    PushNotificationReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RawNotification :
    Windows::Networking::PushNotifications::IRawNotification,
    impl::require<RawNotification, Windows::Networking::PushNotifications::IRawNotification2>
{
    RawNotification(std::nullptr_t) noexcept {}
};

}
