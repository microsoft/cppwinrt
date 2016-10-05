// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.SocialInfo.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_c210bbd7_2f56_5076_bb0e_b7497726cf95
#define WINRT_GENERIC_c210bbd7_2f56_5076_bb0e_b7497726cf95
template <> struct __declspec(uuid("c210bbd7-2f56-5076-bb0e-b7497726cf95")) __declspec(novtable) IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> : impl_IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> {};
#endif

#ifndef WINRT_GENERIC_fabcf39f_fd48_5550_8f47_a0f1573e1f53
#define WINRT_GENERIC_fabcf39f_fd48_5550_8f47_a0f1573e1f53
template <> struct __declspec(uuid("fabcf39f-fd48-5550-8f47-a0f1573e1f53")) __declspec(novtable) IIterator<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> : impl_IIterator<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> {};
#endif

#ifndef WINRT_GENERIC_5d102c6d_92c3_59f3_b1dc_5986c56445a5
#define WINRT_GENERIC_5d102c6d_92c3_59f3_b1dc_5986c56445a5
template <> struct __declspec(uuid("5d102c6d-92c3-59f3-b1dc-5986c56445a5")) __declspec(novtable) IIterable<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> : impl_IIterable<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> {};
#endif

#ifndef WINRT_GENERIC_9a3e6d46_e880_5deb_9006_92fe5c43ace1
#define WINRT_GENERIC_9a3e6d46_e880_5deb_9006_92fe5c43ace1
template <> struct __declspec(uuid("9a3e6d46-e880-5deb-9006-92fe5c43ace1")) __declspec(novtable) IVectorView<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> : impl_IVectorView<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> {};
#endif


}

namespace Windows::ApplicationModel::SocialInfo {

template <typename D>
struct WINRT_EBO impl_ISocialFeedChildItem
{
    Windows::ApplicationModel::SocialInfo::SocialUserInfo Author() const;
    Windows::ApplicationModel::SocialInfo::SocialFeedContent PrimaryContent() const;
    Windows::ApplicationModel::SocialInfo::SocialFeedContent SecondaryContent() const;
    Windows::Foundation::DateTime Timestamp() const;
    void Timestamp(const Windows::Foundation::DateTime & value) const;
    Windows::Foundation::Uri TargetUri() const;
    void TargetUri(const Windows::Foundation::Uri & value) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> Thumbnails() const;
    Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem SharedItem() const;
    void SharedItem(const Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem & value) const;
};

template <typename D>
struct WINRT_EBO impl_ISocialFeedContent
{
    hstring Title() const;
    void Title(hstring_ref value) const;
    hstring Message() const;
    void Message(hstring_ref value) const;
    Windows::Foundation::Uri TargetUri() const;
    void TargetUri(const Windows::Foundation::Uri & value) const;
};

template <typename D>
struct WINRT_EBO impl_ISocialFeedItem
{
    Windows::ApplicationModel::SocialInfo::SocialUserInfo Author() const;
    Windows::ApplicationModel::SocialInfo::SocialFeedContent PrimaryContent() const;
    Windows::ApplicationModel::SocialInfo::SocialFeedContent SecondaryContent() const;
    Windows::Foundation::DateTime Timestamp() const;
    void Timestamp(const Windows::Foundation::DateTime & value) const;
    Windows::Foundation::Uri TargetUri() const;
    void TargetUri(const Windows::Foundation::Uri & value) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> Thumbnails() const;
    Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem SharedItem() const;
    void SharedItem(const Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem & value) const;
    Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle BadgeStyle() const;
    void BadgeStyle(Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle value) const;
    int32_t BadgeCountValue() const;
    void BadgeCountValue(int32_t value) const;
    hstring RemoteId() const;
    void RemoteId(hstring_ref value) const;
    Windows::ApplicationModel::SocialInfo::SocialFeedChildItem ChildItem() const;
    void ChildItem(const Windows::ApplicationModel::SocialInfo::SocialFeedChildItem & value) const;
    Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle Style() const;
    void Style(Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle value) const;
};

template <typename D>
struct WINRT_EBO impl_ISocialFeedSharedItem
{
    Windows::Foundation::Uri OriginalSource() const;
    void OriginalSource(const Windows::Foundation::Uri & value) const;
    Windows::ApplicationModel::SocialInfo::SocialFeedContent Content() const;
    Windows::Foundation::DateTime Timestamp() const;
    void Timestamp(const Windows::Foundation::DateTime & value) const;
    Windows::Foundation::Uri TargetUri() const;
    void TargetUri(const Windows::Foundation::Uri & value) const;
    void Thumbnail(const Windows::ApplicationModel::SocialInfo::SocialItemThumbnail & value) const;
    Windows::ApplicationModel::SocialInfo::SocialItemThumbnail Thumbnail() const;
};

template <typename D>
struct WINRT_EBO impl_ISocialItemThumbnail
{
    Windows::Foundation::Uri TargetUri() const;
    void TargetUri(const Windows::Foundation::Uri & value) const;
    Windows::Foundation::Uri ImageUri() const;
    void ImageUri(const Windows::Foundation::Uri & value) const;
    Windows::Graphics::Imaging::BitmapSize BitmapSize() const;
    void BitmapSize(const Windows::Graphics::Imaging::BitmapSize & value) const;
    Windows::Foundation::IAsyncAction SetImageAsync(const Windows::Storage::Streams::IInputStream & image) const;
};

template <typename D>
struct WINRT_EBO impl_ISocialUserInfo
{
    hstring DisplayName() const;
    void DisplayName(hstring_ref value) const;
    hstring UserName() const;
    void UserName(hstring_ref value) const;
    hstring RemoteId() const;
    void RemoteId(hstring_ref value) const;
    Windows::Foundation::Uri TargetUri() const;
    void TargetUri(const Windows::Foundation::Uri & value) const;
};

struct ISocialFeedChildItem :
    Windows::IInspectable,
    impl::consume<ISocialFeedChildItem>
{
    ISocialFeedChildItem(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISocialFeedChildItem>(m_ptr); }
};

struct ISocialFeedContent :
    Windows::IInspectable,
    impl::consume<ISocialFeedContent>
{
    ISocialFeedContent(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISocialFeedContent>(m_ptr); }
};

struct ISocialFeedItem :
    Windows::IInspectable,
    impl::consume<ISocialFeedItem>
{
    ISocialFeedItem(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISocialFeedItem>(m_ptr); }
};

struct ISocialFeedSharedItem :
    Windows::IInspectable,
    impl::consume<ISocialFeedSharedItem>
{
    ISocialFeedSharedItem(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISocialFeedSharedItem>(m_ptr); }
};

struct ISocialItemThumbnail :
    Windows::IInspectable,
    impl::consume<ISocialItemThumbnail>
{
    ISocialItemThumbnail(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISocialItemThumbnail>(m_ptr); }
};

struct ISocialUserInfo :
    Windows::IInspectable,
    impl::consume<ISocialUserInfo>
{
    ISocialUserInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISocialUserInfo>(m_ptr); }
};

}

}
