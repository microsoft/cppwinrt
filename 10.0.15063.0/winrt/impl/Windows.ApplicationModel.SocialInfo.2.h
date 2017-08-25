// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo {

struct WINRT_EBO [[deprecated("SocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialFeedChildItem :
    Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem
{
    SocialFeedChildItem(std::nullptr_t) noexcept {}
    SocialFeedChildItem();
};

struct WINRT_EBO [[deprecated("SocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialFeedContent :
    Windows::ApplicationModel::SocialInfo::ISocialFeedContent
{
    SocialFeedContent(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("SocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialFeedItem :
    Windows::ApplicationModel::SocialInfo::ISocialFeedItem
{
    SocialFeedItem(std::nullptr_t) noexcept {}
    SocialFeedItem();
};

struct WINRT_EBO [[deprecated("SocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialFeedSharedItem :
    Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem
{
    SocialFeedSharedItem(std::nullptr_t) noexcept {}
    SocialFeedSharedItem();
};

struct WINRT_EBO [[deprecated("SocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialItemThumbnail :
    Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail
{
    SocialItemThumbnail(std::nullptr_t) noexcept {}
    SocialItemThumbnail();
};

struct WINRT_EBO [[deprecated("SocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialUserInfo :
    Windows::ApplicationModel::SocialInfo::ISocialUserInfo
{
    SocialUserInfo(std::nullptr_t) noexcept {}
};

}
