// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo {

struct WINRT_EBO [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialFeedChildItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialFeedChildItem>
{
    ISocialFeedChildItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialFeedContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialFeedContent>
{
    ISocialFeedContent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialFeedItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialFeedItem>
{
    ISocialFeedItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialFeedSharedItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialFeedSharedItem>
{
    ISocialFeedSharedItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialItemThumbnail :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialItemThumbnail>
{
    ISocialItemThumbnail(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialUserInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialUserInfo>
{
    ISocialUserInfo(std::nullptr_t = nullptr) noexcept {}
};

}
