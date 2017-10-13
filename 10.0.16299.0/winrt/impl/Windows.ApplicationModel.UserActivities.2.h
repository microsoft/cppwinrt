// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Shell.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities {

struct WINRT_EBO UserActivity :
    Windows::ApplicationModel::UserActivities::IUserActivity
{
    UserActivity(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserActivityAttribution :
    Windows::ApplicationModel::UserActivities::IUserActivityAttribution
{
    UserActivityAttribution(std::nullptr_t) noexcept {}
    UserActivityAttribution();
    UserActivityAttribution(Windows::Foundation::Uri const& iconUri);
};

struct WINRT_EBO UserActivityChannel :
    Windows::ApplicationModel::UserActivities::IUserActivityChannel
{
    UserActivityChannel(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::UserActivities::UserActivityChannel GetDefault();
};

struct WINRT_EBO UserActivityContentInfo :
    Windows::ApplicationModel::UserActivities::IUserActivityContentInfo
{
    UserActivityContentInfo(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::UserActivities::UserActivityContentInfo FromJson(param::hstring const& value);
};

struct WINRT_EBO UserActivitySession :
    Windows::ApplicationModel::UserActivities::IUserActivitySession
{
    UserActivitySession(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserActivityVisualElements :
    Windows::ApplicationModel::UserActivities::IUserActivityVisualElements
{
    UserActivityVisualElements(std::nullptr_t) noexcept {}
};

}
