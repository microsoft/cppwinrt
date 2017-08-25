// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.Provider.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo::Provider {

struct WINRT_EBO [[deprecated("SocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialDashboardItemUpdater :
    Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater
{
    SocialDashboardItemUpdater(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("SocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialFeedUpdater :
    Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater
{
    SocialFeedUpdater(std::nullptr_t) noexcept {}
};

struct [[deprecated("SocialInfoProviderManager is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialInfoProviderManager
{
    SocialInfoProviderManager() = delete;
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater> CreateSocialFeedUpdaterAsync(Windows::ApplicationModel::SocialInfo::SocialFeedKind const& kind, Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode const& mode, param::hstring const& ownerRemoteId);
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater> CreateDashboardItemUpdaterAsync(param::hstring const& ownerRemoteId);
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static void UpdateBadgeCountValue(param::hstring const& itemRemoteId, int32_t newCount);
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static void ReportNewContentAvailable(param::hstring const& contactRemoteId, Windows::ApplicationModel::SocialInfo::SocialFeedKind const& kind);
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<bool> ProvisionAsync();
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncAction DeprovisionAsync();
};

}
