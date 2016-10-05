// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.SocialInfo.Provider.0.h"
#include "Windows.ApplicationModel.SocialInfo.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.ApplicationModel.SocialInfo.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::SocialInfo::Provider {

struct __declspec(uuid("3cde9dc9-4800-46cd-869b-1973ec685bde")) __declspec(novtable) ISocialDashboardItemUpdater : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OwnerRemoteId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Content(Windows::ApplicationModel::SocialInfo::ISocialFeedContent ** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall put_Timestamp(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail * value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail ** value) = 0;
    virtual HRESULT __stdcall abi_CommitAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall get_TargetUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_TargetUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
};

struct __declspec(uuid("7a0c0aa7-ed89-4bd5-a8d9-15f4d9861c10")) __declspec(novtable) ISocialFeedUpdater : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OwnerRemoteId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Kind(winrt::Windows::ApplicationModel::SocialInfo::SocialFeedKind * value) = 0;
    virtual HRESULT __stdcall get_Items(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialFeedItem> ** value) = 0;
    virtual HRESULT __stdcall abi_CommitAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("1b88e52b-7787-48d6-aa12-d8e8f47ab85a")) __declspec(novtable) ISocialInfoProviderManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateSocialFeedUpdaterAsync(winrt::Windows::ApplicationModel::SocialInfo::SocialFeedKind kind, winrt::Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode mode, hstring ownerRemoteId, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateDashboardItemUpdaterAsync(hstring ownerRemoteId, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater> ** operation) = 0;
    virtual HRESULT __stdcall abi_UpdateBadgeCountValue(hstring itemRemoteId, int32_t newCount) = 0;
    virtual HRESULT __stdcall abi_ReportNewContentAvailable(hstring contactRemoteId, winrt::Windows::ApplicationModel::SocialInfo::SocialFeedKind kind) = 0;
    virtual HRESULT __stdcall abi_ProvisionAsync(Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_DeprovisionAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater> { using default_interface = Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater; };
template <> struct traits<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater> { using default_interface = Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater; };

}

namespace Windows::ApplicationModel::SocialInfo::Provider {

template <typename T> struct impl_ISocialDashboardItemUpdater;
template <typename T> struct impl_ISocialFeedUpdater;
template <typename T> struct impl_ISocialInfoProviderManagerStatics;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater;
    template <typename D> using consume = Windows::ApplicationModel::SocialInfo::Provider::impl_ISocialDashboardItemUpdater<D>;
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater;
    template <typename D> using consume = Windows::ApplicationModel::SocialInfo::Provider::impl_ISocialFeedUpdater<D>;
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics;
    template <typename D> using consume = Windows::ApplicationModel::SocialInfo::Provider::impl_ISocialInfoProviderManagerStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.SocialInfo.Provider.SocialDashboardItemUpdater"; }
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater>
{
    using abi = ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.SocialInfo.Provider.SocialFeedUpdater"; }
};

template <> struct traits<Windows::ApplicationModel::SocialInfo::Provider::SocialInfoProviderManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.SocialInfo.Provider.SocialInfoProviderManager"; }
};

}

}
