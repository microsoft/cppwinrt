// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.UI.Notifications.0.h"
#include "winrt/impl/Windows.Networking.PushNotifications.0.h"

WINRT_EXPORT namespace winrt::Windows::Networking::PushNotifications {

struct WINRT_EBO IPushNotificationChannel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationChannel>
{
    IPushNotificationChannel(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPushNotificationChannelManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationChannelManagerForUser>
{
    IPushNotificationChannelManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPushNotificationChannelManagerForUser2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationChannelManagerForUser2>
{
    IPushNotificationChannelManagerForUser2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPushNotificationChannelManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationChannelManagerStatics>
{
    IPushNotificationChannelManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPushNotificationChannelManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationChannelManagerStatics2>
{
    IPushNotificationChannelManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPushNotificationChannelManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationChannelManagerStatics3>
{
    IPushNotificationChannelManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPushNotificationReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationReceivedEventArgs>
{
    IPushNotificationReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRawNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRawNotification>
{
    IRawNotification(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRawNotification2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRawNotification2>
{
    IRawNotification2(std::nullptr_t = nullptr) noexcept {}
};

}
