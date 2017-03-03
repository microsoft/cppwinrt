// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Networking::PushNotifications {

struct IPushNotificationChannel;
struct IPushNotificationChannelManagerForUser;
struct IPushNotificationChannelManagerForUser2;
struct IPushNotificationChannelManagerStatics;
struct IPushNotificationChannelManagerStatics2;
struct IPushNotificationChannelManagerStatics3;
struct IPushNotificationReceivedEventArgs;
struct IRawNotification;
struct IRawNotification2;
struct PushNotificationChannel;
struct PushNotificationChannelManagerForUser;
struct PushNotificationReceivedEventArgs;
struct RawNotification;

}

namespace Windows::Networking::PushNotifications {

struct IPushNotificationChannel;
struct IPushNotificationChannelManagerForUser;
struct IPushNotificationChannelManagerForUser2;
struct IPushNotificationChannelManagerStatics;
struct IPushNotificationChannelManagerStatics2;
struct IPushNotificationChannelManagerStatics3;
struct IPushNotificationReceivedEventArgs;
struct IRawNotification;
struct IRawNotification2;
struct PushNotificationChannel;
struct PushNotificationChannelManager;
struct PushNotificationChannelManagerForUser;
struct PushNotificationReceivedEventArgs;
struct RawNotification;

}

namespace Windows::Networking::PushNotifications {

template <typename T> struct impl_IPushNotificationChannel;
template <typename T> struct impl_IPushNotificationChannelManagerForUser;
template <typename T> struct impl_IPushNotificationChannelManagerForUser2;
template <typename T> struct impl_IPushNotificationChannelManagerStatics;
template <typename T> struct impl_IPushNotificationChannelManagerStatics2;
template <typename T> struct impl_IPushNotificationChannelManagerStatics3;
template <typename T> struct impl_IPushNotificationReceivedEventArgs;
template <typename T> struct impl_IRawNotification;
template <typename T> struct impl_IRawNotification2;

}

namespace Windows::Networking::PushNotifications {

enum class PushNotificationType
{
    Toast = 0,
    Tile = 1,
    Badge = 2,
    Raw = 3,
    TileFlyout = 4,
};

}

}
