// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Media.AppBroadcasting.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::AppBroadcasting {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Media::AppBroadcasting {

struct WINRT_EBO AppBroadcastingMonitor :
    Windows::Media::AppBroadcasting::IAppBroadcastingMonitor
{
    AppBroadcastingMonitor(std::nullptr_t) noexcept {}
    AppBroadcastingMonitor();
};

struct WINRT_EBO AppBroadcastingStatus :
    Windows::Media::AppBroadcasting::IAppBroadcastingStatus
{
    AppBroadcastingStatus(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastingStatusDetails :
    Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails
{
    AppBroadcastingStatusDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastingUI :
    Windows::Media::AppBroadcasting::IAppBroadcastingUI
{
    AppBroadcastingUI(std::nullptr_t) noexcept {}
    static Windows::Media::AppBroadcasting::AppBroadcastingUI GetDefault();
    static Windows::Media::AppBroadcasting::AppBroadcastingUI GetForUser(Windows::System::User const& user);
};

}
