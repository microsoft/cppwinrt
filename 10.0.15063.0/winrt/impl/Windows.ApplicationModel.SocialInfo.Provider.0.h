// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo {

enum class SocialFeedKind;
enum class SocialFeedUpdateMode;
struct SocialFeedContent;
struct SocialFeedItem;
struct SocialItemThumbnail;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo::Provider {

struct ISocialDashboardItemUpdater;
struct ISocialFeedUpdater;
struct ISocialInfoProviderManagerStatics;
struct SocialDashboardItemUpdater;
struct SocialFeedUpdater;
struct SocialInfoProviderManager;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::SocialInfo::Provider::SocialInfoProviderManager>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.Provider.ISocialDashboardItemUpdater" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.Provider.ISocialFeedUpdater" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.Provider.ISocialInfoProviderManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.Provider.SocialDashboardItemUpdater" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.Provider.SocialFeedUpdater" }; };
template <> struct name<Windows::ApplicationModel::SocialInfo::Provider::SocialInfoProviderManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.Provider.SocialInfoProviderManager" }; };
template <> struct guid<Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater>{ static constexpr GUID value{ 0x3CDE9DC9,0x4800,0x46CD,{ 0x86,0x9B,0x19,0x73,0xEC,0x68,0x5B,0xDE } }; };
template <> struct guid<Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater>{ static constexpr GUID value{ 0x7A0C0AA7,0xED89,0x4BD5,{ 0xA8,0xD9,0x15,0xF4,0xD9,0x86,0x1C,0x10 } }; };
template <> struct guid<Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>{ static constexpr GUID value{ 0x1B88E52B,0x7787,0x48D6,{ 0xAA,0x12,0xD8,0xE8,0xF4,0x7A,0xB8,0x5A } }; };
template <> struct default_interface<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater>{ using type = Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater; };
template <> struct default_interface<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater>{ using type = Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater; };

template <typename D>
struct consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater
{
    [[deprecated("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring OwnerRemoteId() const;
    [[deprecated("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedContent Content() const;
    [[deprecated("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::DateTime Timestamp() const;
    [[deprecated("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Timestamp(Windows::Foundation::DateTime const& value) const;
    [[deprecated("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Thumbnail(Windows::ApplicationModel::SocialInfo::SocialItemThumbnail const& value) const;
    [[deprecated("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialItemThumbnail Thumbnail() const;
    [[deprecated("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncAction CommitAsync() const;
    [[deprecated("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Uri TargetUri() const;
    [[deprecated("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] void TargetUri(Windows::Foundation::Uri const& value) const;
};
template <> struct consume<Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater> { template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialFeedUpdater
{
    [[deprecated("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] hstring OwnerRemoteId() const;
    [[deprecated("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::ApplicationModel::SocialInfo::SocialFeedKind Kind() const;
    [[deprecated("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialFeedItem> Items() const;
    [[deprecated("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncAction CommitAsync() const;
};
template <> struct consume<Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater> { template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialFeedUpdater<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialInfoProviderManagerStatics
{
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater> CreateSocialFeedUpdaterAsync(Windows::ApplicationModel::SocialInfo::SocialFeedKind const& kind, Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode const& mode, param::hstring const& ownerRemoteId) const;
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater> CreateDashboardItemUpdaterAsync(param::hstring const& ownerRemoteId) const;
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] void UpdateBadgeCountValue(param::hstring const& itemRemoteId, int32_t newCount) const;
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] void ReportNewContentAvailable(param::hstring const& contactRemoteId, Windows::ApplicationModel::SocialInfo::SocialFeedKind const& kind) const;
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<bool> ProvisionAsync() const;
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncAction DeprovisionAsync() const;
};
template <> struct consume<Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialInfoProviderManagerStatics<D>; };

template <> struct abi<Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OwnerRemoteId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Content(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall put_Timestamp(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CommitAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_TargetUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OwnerRemoteId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::SocialInfo::SocialFeedKind>* value) = 0;
    virtual HRESULT __stdcall get_Items(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CommitAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSocialFeedUpdaterAsync(abi_t<Windows::ApplicationModel::SocialInfo::SocialFeedKind> kind, abi_t<Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode> mode, HSTRING ownerRemoteId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateDashboardItemUpdaterAsync(HSTRING ownerRemoteId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UpdateBadgeCountValue(HSTRING itemRemoteId, int32_t newCount) = 0;
    virtual HRESULT __stdcall ReportNewContentAvailable(HSTRING contactRemoteId, abi_t<Windows::ApplicationModel::SocialInfo::SocialFeedKind> kind) = 0;
    virtual HRESULT __stdcall ProvisionAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeprovisionAsync(::IUnknown** operation) = 0;
};};

}
