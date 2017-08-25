// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Core.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.ApplicationModel.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel {

struct WINRT_EBO IAppDisplayInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppDisplayInfo>
{
    IAppDisplayInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppInfo>
{
    IAppInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICameraApplicationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraApplicationManagerStatics>
{
    ICameraApplicationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDesignModeStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDesignModeStatics>
{
    IDesignModeStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEnteredBackgroundEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnteredBackgroundEventArgs>
{
    IEnteredBackgroundEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFullTrustProcessLauncherStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFullTrustProcessLauncherStatics>
{
    IFullTrustProcessLauncherStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILeavingBackgroundEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILeavingBackgroundEventArgs>
{
    ILeavingBackgroundEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackage>
{
    IPackage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackage2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackage2>
{
    IPackage2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackage3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackage3>
{
    IPackage3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackage4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackage4>
{
    IPackage4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackage5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackage5>
{
    IPackage5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageCatalog :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageCatalog>
{
    IPackageCatalog(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageCatalog2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageCatalog2>
{
    IPackageCatalog2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageCatalogAddOptionalPackageResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageCatalogAddOptionalPackageResult>
{
    IPackageCatalogAddOptionalPackageResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageCatalogStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageCatalogStatics>
{
    IPackageCatalogStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageContentGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageContentGroup>
{
    IPackageContentGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageContentGroupStagingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageContentGroupStagingEventArgs>
{
    IPackageContentGroupStagingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageContentGroupStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageContentGroupStatics>
{
    IPackageContentGroupStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageId>
{
    IPackageId(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageIdWithMetadata :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageIdWithMetadata>
{
    IPackageIdWithMetadata(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageInstallingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageInstallingEventArgs>
{
    IPackageInstallingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageStagingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageStagingEventArgs>
{
    IPackageStagingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageStatics>
{
    IPackageStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageStatus :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageStatus>
{
    IPackageStatus(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageStatus2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageStatus2>
{
    IPackageStatus2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageStatusChangedEventArgs>
{
    IPackageStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageUninstallingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageUninstallingEventArgs>
{
    IPackageUninstallingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageUpdatingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageUpdatingEventArgs>
{
    IPackageUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageWithMetadata :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageWithMetadata>
{
    IPackageWithMetadata(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStartupTask :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStartupTask>
{
    IStartupTask(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStartupTaskStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStartupTaskStatics>
{
    IStartupTaskStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISuspendingDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISuspendingDeferral>
{
    ISuspendingDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISuspendingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISuspendingEventArgs>
{
    ISuspendingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISuspendingOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISuspendingOperation>
{
    ISuspendingOperation(std::nullptr_t = nullptr) noexcept {}
};

}
