// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Management.Deployment.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.ApplicationModel.Store.Preview.InstallControl.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::Preview::InstallControl {

struct WINRT_EBO AppInstallItem :
    Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem,
    impl::require<AppInstallItem, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>
{
    AppInstallItem(std::nullptr_t) noexcept {}
    using impl::consume_t<AppInstallItem, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>::Cancel;
    using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem::Cancel;
    using impl::consume_t<AppInstallItem, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>::Pause;
    using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem::Pause;
    using impl::consume_t<AppInstallItem, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>::Restart;
    using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem::Restart;
};

struct WINRT_EBO AppInstallManager :
    Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager,
    impl::require<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>
{
    AppInstallManager(std::nullptr_t) noexcept {}
    AppInstallManager();
    using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::Cancel;
    using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::Cancel;
    using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::GetIsAppAllowedToInstallAsync;
    using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::GetIsAppAllowedToInstallAsync;
    using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::Pause;
    using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::Pause;
    using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::Restart;
    using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::Restart;
    using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::SearchForAllUpdatesAsync;
    using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::SearchForAllUpdatesAsync;
    using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::SearchForUpdatesAsync;
    using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::SearchForUpdatesAsync;
    using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::StartAppInstallAsync;
    using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::StartAppInstallAsync;
    using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::UpdateAppByPackageFamilyNameAsync;
    using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::UpdateAppByPackageFamilyNameAsync;
};

struct WINRT_EBO AppInstallManagerItemEventArgs :
    Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs
{
    AppInstallManagerItemEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppInstallStatus :
    Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus,
    impl::require<AppInstallStatus, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>
{
    AppInstallStatus(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GetEntitlementResult :
    Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult
{
    GetEntitlementResult(std::nullptr_t) noexcept {}
};

}
