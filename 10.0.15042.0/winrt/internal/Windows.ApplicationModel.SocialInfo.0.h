// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::SocialInfo {

struct ISocialFeedChildItem;
struct ISocialFeedContent;
struct ISocialFeedItem;
struct ISocialFeedSharedItem;
struct ISocialItemThumbnail;
struct ISocialUserInfo;
struct SocialFeedChildItem;
struct SocialFeedContent;
struct SocialFeedItem;
struct SocialFeedSharedItem;
struct SocialItemThumbnail;
struct SocialUserInfo;

}

namespace Windows::ApplicationModel::SocialInfo {

struct ISocialFeedChildItem;
struct ISocialFeedContent;
struct ISocialFeedItem;
struct ISocialFeedSharedItem;
struct ISocialItemThumbnail;
struct ISocialUserInfo;
struct SocialFeedChildItem;
struct SocialFeedContent;
struct SocialFeedItem;
struct SocialFeedSharedItem;
struct SocialItemThumbnail;
struct SocialUserInfo;

}

namespace Windows::ApplicationModel::SocialInfo {

template <typename T> struct impl_ISocialFeedChildItem;
template <typename T> struct impl_ISocialFeedContent;
template <typename T> struct impl_ISocialFeedItem;
template <typename T> struct impl_ISocialFeedSharedItem;
template <typename T> struct impl_ISocialItemThumbnail;
template <typename T> struct impl_ISocialUserInfo;

}

namespace Windows::ApplicationModel::SocialInfo {

enum class [[deprecated("SocialFeedItemStyle is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialFeedItemStyle
{
    Default = 0,
    Photo = 1,
};

enum class [[deprecated("SocialFeedKind is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialFeedKind
{
    HomeFeed = 0,
    ContactFeed = 1,
    Dashboard = 2,
};

enum class [[deprecated("SocialFeedUpdateMode is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialFeedUpdateMode
{
    Append = 0,
    Replace = 1,
};

enum class [[deprecated("SocialItemBadgeStyle is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialItemBadgeStyle
{
    Hidden = 0,
    Visible = 1,
    VisibleWithCount = 2,
};

}

}
