// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.SocialInfo.Provider.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::SocialInfo::Provider {

struct [[deprecated("SocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] WINRT_EBO SocialDashboardItemUpdater :
    Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater
{
    SocialDashboardItemUpdater(std::nullptr_t) noexcept {}
};

struct [[deprecated("SocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] WINRT_EBO SocialFeedUpdater :
    Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater
{
    SocialFeedUpdater(std::nullptr_t) noexcept {}
};

struct [[deprecated("SocialInfoProviderManager is deprecated and might not work on all platforms. For more info, see MSDN.")]] SocialInfoProviderManager
{
    SocialInfoProviderManager() = delete;
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater> CreateSocialFeedUpdaterAsync(Windows::ApplicationModel::SocialInfo::SocialFeedKind kind, Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode mode, hstring_view ownerRemoteId);
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater> CreateDashboardItemUpdaterAsync(hstring_view ownerRemoteId);
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static void UpdateBadgeCountValue(hstring_view itemRemoteId, int32_t newCount);
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static void ReportNewContentAvailable(hstring_view contactRemoteId, Windows::ApplicationModel::SocialInfo::SocialFeedKind kind);
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<bool> ProvisionAsync();
    [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncAction DeprovisionAsync();
};

}

}
