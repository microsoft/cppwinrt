// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.SocialInfo.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::SocialInfo {

struct __declspec(uuid("0b6a985a-d59d-40be-980c-488a2ab30a83")) __declspec(novtable) ISocialFeedChildItem : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Author(Windows::ApplicationModel::SocialInfo::ISocialUserInfo ** value) = 0;
    virtual HRESULT __stdcall get_PrimaryContent(Windows::ApplicationModel::SocialInfo::ISocialFeedContent ** value) = 0;
    virtual HRESULT __stdcall get_SecondaryContent(Windows::ApplicationModel::SocialInfo::ISocialFeedContent ** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall put_Timestamp(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall get_TargetUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Thumbnails(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> ** value) = 0;
    virtual HRESULT __stdcall get_SharedItem(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem ** value) = 0;
    virtual HRESULT __stdcall put_SharedItem(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem * value) = 0;
};

struct __declspec(uuid("a234e429-3e39-494d-a37c-f462a2494514")) __declspec(novtable) ISocialFeedContent : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall put_Title(hstring value) = 0;
    virtual HRESULT __stdcall get_Message(hstring * value) = 0;
    virtual HRESULT __stdcall put_Message(hstring value) = 0;
    virtual HRESULT __stdcall get_TargetUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
};

struct __declspec(uuid("4f1392ab-1f72-4d33-b695-de3e1db60317")) __declspec(novtable) ISocialFeedItem : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Author(Windows::ApplicationModel::SocialInfo::ISocialUserInfo ** value) = 0;
    virtual HRESULT __stdcall get_PrimaryContent(Windows::ApplicationModel::SocialInfo::ISocialFeedContent ** value) = 0;
    virtual HRESULT __stdcall get_SecondaryContent(Windows::ApplicationModel::SocialInfo::ISocialFeedContent ** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall put_Timestamp(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall get_TargetUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Thumbnails(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> ** value) = 0;
    virtual HRESULT __stdcall get_SharedItem(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem ** value) = 0;
    virtual HRESULT __stdcall put_SharedItem(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem * value) = 0;
    virtual HRESULT __stdcall get_BadgeStyle(winrt::Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle * value) = 0;
    virtual HRESULT __stdcall put_BadgeStyle(winrt::Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle value) = 0;
    virtual HRESULT __stdcall get_BadgeCountValue(int32_t * value) = 0;
    virtual HRESULT __stdcall put_BadgeCountValue(int32_t value) = 0;
    virtual HRESULT __stdcall get_RemoteId(hstring * value) = 0;
    virtual HRESULT __stdcall put_RemoteId(hstring value) = 0;
    virtual HRESULT __stdcall get_ChildItem(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem ** value) = 0;
    virtual HRESULT __stdcall put_ChildItem(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem * value) = 0;
    virtual HRESULT __stdcall get_Style(winrt::Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle * value) = 0;
    virtual HRESULT __stdcall put_Style(winrt::Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle value) = 0;
};

struct __declspec(uuid("7bfb9e40-a6aa-45a7-9ff6-54c42105dd1f")) __declspec(novtable) ISocialFeedSharedItem : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_OriginalSource(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_OriginalSource(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Content(Windows::ApplicationModel::SocialInfo::ISocialFeedContent ** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall put_Timestamp(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall get_TargetUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail * value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail ** value) = 0;
};

struct __declspec(uuid("5cbf831a-3f08-497f-917f-57e09d84b141")) __declspec(novtable) ISocialItemThumbnail : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_TargetUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_ImageUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_ImageUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_BitmapSize(Windows::Graphics::Imaging::BitmapSize * value) = 0;
    virtual HRESULT __stdcall put_BitmapSize(Windows::Graphics::Imaging::BitmapSize value) = 0;
    virtual HRESULT __stdcall abi_SetImageAsync(Windows::Storage::Streams::IInputStream * image, Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("9e5e1bd1-90d0-4e1d-9554-844d46607f61")) __declspec(novtable) ISocialUserInfo : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall put_DisplayName(hstring value) = 0;
    virtual HRESULT __stdcall get_UserName(hstring * value) = 0;
    virtual HRESULT __stdcall put_UserName(hstring value) = 0;
    virtual HRESULT __stdcall get_RemoteId(hstring * value) = 0;
    virtual HRESULT __stdcall put_RemoteId(hstring value) = 0;
    virtual HRESULT __stdcall get_TargetUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::SocialInfo::SocialFeedChildItem> { using default_interface = Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem; };
template <> struct traits<Windows::ApplicationModel::SocialInfo::SocialFeedContent> { using default_interface = Windows::ApplicationModel::SocialInfo::ISocialFeedContent; };
template <> struct traits<Windows::ApplicationModel::SocialInfo::SocialFeedItem> { using default_interface = Windows::ApplicationModel::SocialInfo::ISocialFeedItem; };
template <> struct traits<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem> { using default_interface = Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem; };
template <> struct traits<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> { using default_interface = Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail; };
template <> struct traits<Windows::ApplicationModel::SocialInfo::SocialUserInfo> { using default_interface = Windows::ApplicationModel::SocialInfo::ISocialUserInfo; };

}

namespace Windows::ApplicationModel::SocialInfo {

template <typename D>
struct WINRT_EBO impl_ISocialFeedChildItem
{
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialUserInfo Author() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedContent PrimaryContent() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedContent SecondaryContent() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::DateTime Timestamp() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Timestamp(const Windows::Foundation::DateTime & value) const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri TargetUri() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TargetUri(const Windows::Foundation::Uri & value) const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> Thumbnails() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem SharedItem() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void SharedItem(const Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem & value) const;
};

template <typename D>
struct WINRT_EBO impl_ISocialFeedContent
{
    [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring Title() const;
    [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Title(hstring_view value) const;
    [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring Message() const;
    [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Message(hstring_view value) const;
    [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri TargetUri() const;
    [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TargetUri(const Windows::Foundation::Uri & value) const;
};

template <typename D>
struct WINRT_EBO impl_ISocialFeedItem
{
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialUserInfo Author() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedContent PrimaryContent() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedContent SecondaryContent() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::DateTime Timestamp() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Timestamp(const Windows::Foundation::DateTime & value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri TargetUri() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TargetUri(const Windows::Foundation::Uri & value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> Thumbnails() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem SharedItem() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void SharedItem(const Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem & value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle BadgeStyle() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void BadgeStyle(Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] int32_t BadgeCountValue() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void BadgeCountValue(int32_t value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring RemoteId() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void RemoteId(hstring_view value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedChildItem ChildItem() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void ChildItem(const Windows::ApplicationModel::SocialInfo::SocialFeedChildItem & value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle Style() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Style(Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle value) const;
};

template <typename D>
struct WINRT_EBO impl_ISocialFeedSharedItem
{
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri OriginalSource() const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void OriginalSource(const Windows::Foundation::Uri & value) const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedContent Content() const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::DateTime Timestamp() const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Timestamp(const Windows::Foundation::DateTime & value) const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri TargetUri() const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TargetUri(const Windows::Foundation::Uri & value) const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Thumbnail(const Windows::ApplicationModel::SocialInfo::SocialItemThumbnail & value) const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialItemThumbnail Thumbnail() const;
};

template <typename D>
struct WINRT_EBO impl_ISocialItemThumbnail
{
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri TargetUri() const;
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TargetUri(const Windows::Foundation::Uri & value) const;
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri ImageUri() const;
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] void ImageUri(const Windows::Foundation::Uri & value) const;
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Graphics::Imaging::BitmapSize BitmapSize() const;
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] void BitmapSize(const Windows::Graphics::Imaging::BitmapSize & value) const;
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncAction SetImageAsync(const Windows::Storage::Streams::IInputStream & image) const;
};

template <typename D>
struct WINRT_EBO impl_ISocialUserInfo
{
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring DisplayName() const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] void DisplayName(hstring_view value) const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring UserName() const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] void UserName(hstring_view value) const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring RemoteId() const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] void RemoteId(hstring_view value) const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri TargetUri() const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TargetUri(const Windows::Foundation::Uri & value) const;
};

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem;
    template <typename D> using consume = Windows::ApplicationModel::SocialInfo::impl_ISocialFeedChildItem<D>;
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::ISocialFeedContent>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedContent;
    template <typename D> using consume = Windows::ApplicationModel::SocialInfo::impl_ISocialFeedContent<D>;
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::ISocialFeedItem>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem;
    template <typename D> using consume = Windows::ApplicationModel::SocialInfo::impl_ISocialFeedItem<D>;
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem;
    template <typename D> using consume = Windows::ApplicationModel::SocialInfo::impl_ISocialFeedSharedItem<D>;
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail;
    template <typename D> using consume = Windows::ApplicationModel::SocialInfo::impl_ISocialItemThumbnail<D>;
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::ISocialUserInfo>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::ISocialUserInfo;
    template <typename D> using consume = Windows::ApplicationModel::SocialInfo::impl_ISocialUserInfo<D>;
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::SocialFeedChildItem>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::SocialFeedChildItem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.SocialInfo.SocialFeedChildItem"; }
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::SocialFeedContent>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::SocialFeedContent;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.SocialInfo.SocialFeedContent"; }
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::SocialFeedItem>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.SocialInfo.SocialFeedItem"; }
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.SocialInfo.SocialFeedSharedItem"; }
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.SocialInfo.SocialItemThumbnail"; }
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::SocialUserInfo>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::SocialUserInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.SocialInfo.SocialUserInfo"; }
};

}

}
