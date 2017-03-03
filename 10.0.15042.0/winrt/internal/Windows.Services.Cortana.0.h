// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Services::Cortana {

struct ICortanaPermissionsManager;
struct ICortanaPermissionsManagerStatics;
struct ICortanaSettings;
struct ICortanaSettingsStatics;
struct CortanaPermissionsManager;
struct CortanaSettings;

}

namespace Windows::Services::Cortana {

struct ICortanaPermissionsManager;
struct ICortanaPermissionsManagerStatics;
struct ICortanaSettings;
struct ICortanaSettingsStatics;
struct CortanaPermissionsManager;
struct CortanaSettings;

}

namespace Windows::Services::Cortana {

template <typename T> struct impl_ICortanaPermissionsManager;
template <typename T> struct impl_ICortanaPermissionsManagerStatics;
template <typename T> struct impl_ICortanaSettings;
template <typename T> struct impl_ICortanaSettingsStatics;

}

namespace Windows::Services::Cortana {

enum class CortanaPermission
{
    BrowsingHistory = 0,
    Calendar = 1,
    CallHistory = 2,
    Contacts = 3,
    Email = 4,
    InputPersonalization = 5,
    Location = 6,
    Messaging = 7,
    Microphone = 8,
    Personalization = 9,
    PhoneCall = 10,
};

enum class CortanaPermissionsChangeResult
{
    Success = 0,
    Unavailable = 1,
    DisabledByPolicy = 2,
};

}

}
