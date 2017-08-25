// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Management.Deployment.1.h"

WINRT_EXPORT namespace winrt::Windows::Management::Deployment {

struct DeploymentProgress
{
    Windows::Management::Deployment::DeploymentProgressState state;
    uint32_t percentage;
};

struct WINRT_EBO DeploymentResult :
    Windows::Management::Deployment::IDeploymentResult,
    impl::require<DeploymentResult, Windows::Management::Deployment::IDeploymentResult2>
{
    DeploymentResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PackageManager :
    Windows::Management::Deployment::IPackageManager,
    impl::require<PackageManager, Windows::Management::Deployment::IPackageManager2, Windows::Management::Deployment::IPackageManager3, Windows::Management::Deployment::IPackageManager4, Windows::Management::Deployment::IPackageManager5>
{
    PackageManager(std::nullptr_t) noexcept {}
    PackageManager();
    using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager3>::AddPackageAsync;
    using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager5>::AddPackageAsync;
    using Windows::Management::Deployment::IPackageManager::AddPackageAsync;
    using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager3>::RegisterPackageAsync;
    using Windows::Management::Deployment::IPackageManager::RegisterPackageAsync;
    using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager2>::RemovePackageAsync;
    using Windows::Management::Deployment::IPackageManager::RemovePackageAsync;
    using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager2>::StagePackageAsync;
    using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager3>::StagePackageAsync;
    using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager5>::StagePackageAsync;
    using Windows::Management::Deployment::IPackageManager::StagePackageAsync;
    using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager2>::StageUserDataAsync;
    using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager3>::StageUserDataAsync;
};

struct WINRT_EBO PackageManagerDebugSettings :
    Windows::Management::Deployment::IPackageManagerDebugSettings
{
    PackageManagerDebugSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PackageUserInformation :
    Windows::Management::Deployment::IPackageUserInformation
{
    PackageUserInformation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PackageVolume :
    Windows::Management::Deployment::IPackageVolume,
    impl::require<PackageVolume, Windows::Management::Deployment::IPackageVolume2>
{
    PackageVolume(std::nullptr_t) noexcept {}
};

}
