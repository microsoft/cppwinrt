// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

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

enum class SocialFeedItemStyle
{
    Default = 0,
    Photo = 1,
};

enum class SocialFeedKind
{
    HomeFeed = 0,
    ContactFeed = 1,
    Dashboard = 2,
};

enum class SocialFeedUpdateMode
{
    Append = 0,
    Replace = 1,
};

enum class SocialItemBadgeStyle
{
    Hidden = 0,
    Visible = 1,
    VisibleWithCount = 2,
};

}

}
