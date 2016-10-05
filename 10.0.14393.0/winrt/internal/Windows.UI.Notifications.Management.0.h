// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Notifications::Management {

struct IUserNotificationListener;
struct IUserNotificationListenerStatics;
struct UserNotificationListener;

}

namespace Windows::UI::Notifications::Management {

struct IUserNotificationListener;
struct IUserNotificationListenerStatics;
struct UserNotificationListener;

}

namespace Windows::UI::Notifications::Management {

enum class UserNotificationListenerAccessStatus
{
    Unspecified = 0,
    Allowed = 1,
    Denied = 2,
};

}

}
