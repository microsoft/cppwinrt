// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Notifications.1.h"
#include "winrt/impl/Windows.UI.Notifications.Management.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Notifications::Management {

struct WINRT_EBO UserNotificationListener :
    Windows::UI::Notifications::Management::IUserNotificationListener
{
    UserNotificationListener(std::nullptr_t) noexcept {}
    static Windows::UI::Notifications::Management::UserNotificationListener Current();
};

}
