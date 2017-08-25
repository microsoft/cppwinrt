// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Notifications.0.h"
#include "winrt/impl/Windows.UI.Notifications.Management.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Notifications::Management {

struct WINRT_EBO IUserNotificationListener :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserNotificationListener>
{
    IUserNotificationListener(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserNotificationListenerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserNotificationListenerStatics>
{
    IUserNotificationListenerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
