// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct BitmapSize;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IInputStream;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo {

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

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::ISocialFeedContent>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::ISocialFeedItem>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::ISocialUserInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedChildItem>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedContent>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedItem>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::SocialUserInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.ISocialFeedChildItem" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::ISocialFeedContent>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.ISocialFeedContent" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::ISocialFeedItem>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.ISocialFeedItem" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.ISocialFeedSharedItem" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.ISocialItemThumbnail" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::ISocialUserInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.ISocialUserInfo" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedChildItem>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedChildItem" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedContent>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedContent" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedItem>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedItem" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedSharedItem" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialItemThumbnail" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::SocialUserInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialUserInfo" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedItemStyle" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedKind" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedUpdateMode" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialItemBadgeStyle" }; };
template <> struct guid<Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem>{ static constexpr GUID value{ 0x0B6A985A,0xD59D,0x40BE,{ 0x98,0x0C,0x48,0x8A,0x2A,0xB3,0x0A,0x83 } }; };
template <> struct guid<Windows::ApplicationModel::SocialInfo::ISocialFeedContent>{ static constexpr GUID value{ 0xA234E429,0x3E39,0x494D,{ 0xA3,0x7C,0xF4,0x62,0xA2,0x49,0x45,0x14 } }; };
template <> struct guid<Windows::ApplicationModel::SocialInfo::ISocialFeedItem>{ static constexpr GUID value{ 0x4F1392AB,0x1F72,0x4D33,{ 0xB6,0x95,0xDE,0x3E,0x1D,0xB6,0x03,0x17 } }; };
template <> struct guid<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem>{ static constexpr GUID value{ 0x7BFB9E40,0xA6AA,0x45A7,{ 0x9F,0xF6,0x54,0xC4,0x21,0x05,0xDD,0x1F } }; };
template <> struct guid<Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail>{ static constexpr GUID value{ 0x5CBF831A,0x3F08,0x497F,{ 0x91,0x7F,0x57,0xE0,0x9D,0x84,0xB1,0x41 } }; };
template <> struct guid<Windows::ApplicationModel::SocialInfo::ISocialUserInfo>{ static constexpr GUID value{ 0x9E5E1BD1,0x90D0,0x4E1D,{ 0x95,0x54,0x84,0x4D,0x46,0x60,0x7F,0x61 } }; };
template <> struct default_interface<Windows::ApplicationModel::SocialInfo::SocialFeedChildItem>{ using type = Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem; };
template <> struct default_interface<Windows::ApplicationModel::SocialInfo::SocialFeedContent>{ using type = Windows::ApplicationModel::SocialInfo::ISocialFeedContent; };
template <> struct default_interface<Windows::ApplicationModel::SocialInfo::SocialFeedItem>{ using type = Windows::ApplicationModel::SocialInfo::ISocialFeedItem; };
template <> struct default_interface<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem>{ using type = Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem; };
template <> struct default_interface<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>{ using type = Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail; };
template <> struct default_interface<Windows::ApplicationModel::SocialInfo::SocialUserInfo>{ using type = Windows::ApplicationModel::SocialInfo::ISocialUserInfo; };

template <typename D>
struct consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem
{
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialUserInfo Author() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedContent PrimaryContent() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedContent SecondaryContent() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::DateTime Timestamp() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Timestamp(Windows::Foundation::DateTime const& value) const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri TargetUri() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TargetUri(Windows::Foundation::Uri const& value) const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> Thumbnails() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem SharedItem() const;
    [[deprecated("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void SharedItem(Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem const& value) const;
};
template <> struct consume<Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem> { template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent
{
    [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring Title() const;
    [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Title(param::hstring const& value) const;
    [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring Message() const;
    [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Message(param::hstring const& value) const;
    [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri TargetUri() const;
    [[deprecated("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TargetUri(Windows::Foundation::Uri const& value) const;
};
template <> struct consume<Windows::ApplicationModel::SocialInfo::ISocialFeedContent> { template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem
{
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialUserInfo Author() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedContent PrimaryContent() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedContent SecondaryContent() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::DateTime Timestamp() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Timestamp(Windows::Foundation::DateTime const& value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri TargetUri() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TargetUri(Windows::Foundation::Uri const& value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> Thumbnails() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem SharedItem() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void SharedItem(Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem const& value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle BadgeStyle() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void BadgeStyle(Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle const& value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] int32_t BadgeCountValue() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void BadgeCountValue(int32_t value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring RemoteId() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void RemoteId(param::hstring const& value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedChildItem ChildItem() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void ChildItem(Windows::ApplicationModel::SocialInfo::SocialFeedChildItem const& value) const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle Style() const;
    [[deprecated("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Style(Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle const& value) const;
};
template <> struct consume<Windows::ApplicationModel::SocialInfo::ISocialFeedItem> { template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem
{
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri OriginalSource() const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void OriginalSource(Windows::Foundation::Uri const& value) const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedContent Content() const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::DateTime Timestamp() const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Timestamp(Windows::Foundation::DateTime const& value) const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri TargetUri() const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TargetUri(Windows::Foundation::Uri const& value) const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Thumbnail(Windows::ApplicationModel::SocialInfo::SocialItemThumbnail const& value) const;
    [[deprecated("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialItemThumbnail Thumbnail() const;
};
template <> struct consume<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem> { template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail
{
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri TargetUri() const;
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TargetUri(Windows::Foundation::Uri const& value) const;
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri ImageUri() const;
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] void ImageUri(Windows::Foundation::Uri const& value) const;
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Graphics::Imaging::BitmapSize BitmapSize() const;
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] void BitmapSize(Windows::Graphics::Imaging::BitmapSize const& value) const;
    [[deprecated("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncAction SetImageAsync(Windows::Storage::Streams::IInputStream const& image) const;
};
template <> struct consume<Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail> { template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo
{
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring DisplayName() const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] void DisplayName(param::hstring const& value) const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring UserName() const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] void UserName(param::hstring const& value) const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring RemoteId() const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] void RemoteId(param::hstring const& value) const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri TargetUri() const;
    [[deprecated("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TargetUri(Windows::Foundation::Uri const& value) const;
};
template <> struct consume<Windows::ApplicationModel::SocialInfo::ISocialUserInfo> { template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>; };

template <> struct abi<Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Author(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PrimaryContent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SecondaryContent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall put_Timestamp(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall get_TargetUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Thumbnails(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SharedItem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SharedItem(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::SocialInfo::ISocialFeedContent>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Message(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Message(HSTRING value) = 0;
    virtual HRESULT __stdcall get_TargetUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::SocialInfo::ISocialFeedItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Author(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PrimaryContent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SecondaryContent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall put_Timestamp(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall get_TargetUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Thumbnails(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SharedItem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SharedItem(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_BadgeStyle(abi_t<Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle>* value) = 0;
    virtual HRESULT __stdcall put_BadgeStyle(abi_t<Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle> value) = 0;
    virtual HRESULT __stdcall get_BadgeCountValue(int32_t* value) = 0;
    virtual HRESULT __stdcall put_BadgeCountValue(int32_t value) = 0;
    virtual HRESULT __stdcall get_RemoteId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_RemoteId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ChildItem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ChildItem(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Style(abi_t<Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle>* value) = 0;
    virtual HRESULT __stdcall put_Style(abi_t<Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OriginalSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_OriginalSource(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Content(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall put_Timestamp(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall get_TargetUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ImageUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ImageUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_BitmapSize(abi_t<Windows::Graphics::Imaging::BitmapSize>* value) = 0;
    virtual HRESULT __stdcall put_BitmapSize(abi_t<Windows::Graphics::Imaging::BitmapSize> value) = 0;
    virtual HRESULT __stdcall SetImageAsync(::IUnknown* image, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::SocialInfo::ISocialUserInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_UserName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_UserName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_RemoteId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_RemoteId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_TargetUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(::IUnknown* value) = 0;
};};

}
