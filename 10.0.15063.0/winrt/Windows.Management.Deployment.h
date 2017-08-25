// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Management.Deployment.2.h"
#include "winrt/Windows.Management.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Management_Deployment_IDeploymentResult<D>::ErrorText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IDeploymentResult)->get_ErrorText(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Management_Deployment_IDeploymentResult<D>::ActivityId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IDeploymentResult)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Management_Deployment_IDeploymentResult<D>::ExtendedErrorCode() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IDeploymentResult)->get_ExtendedErrorCode(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Management_Deployment_IDeploymentResult2<D>::IsRegistered() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IDeploymentResult2)->get_IsRegistered(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager<D>::AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->AddPackageAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager<D>::UpdatePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->UpdatePackageAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager<D>::RemovePackageAsync(param::hstring const& packageFullName) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->RemovePackageAsync(get_abi(packageFullName), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager<D>::StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->StagePackageAsync(get_abi(packageUri), get_abi(dependencyPackageUris), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager<D>::RegisterPackageAsync(Windows::Foundation::Uri const& manifestUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->RegisterPackageAsync(get_abi(manifestUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager<D>::FindPackages() const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackages(put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager<D>::FindPackagesForUser(param::hstring const& userSecurityId) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackagesByUserSecurityId(get_abi(userSecurityId), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager<D>::FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackagesByNamePublisher(get_abi(packageName), get_abi(packagePublisher), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager<D>::FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackagesByUserSecurityIdNamePublisher(get_abi(userSecurityId), get_abi(packageName), get_abi(packagePublisher), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageUserInformation> consume_Windows_Management_Deployment_IPackageManager<D>::FindUsers(param::hstring const& packageFullName) const
{
    Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageUserInformation> users{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindUsers(get_abi(packageFullName), put_abi(users)));
    return users;
}

template <typename D> void consume_Windows_Management_Deployment_IPackageManager<D>::SetPackageState(param::hstring const& packageFullName, Windows::Management::Deployment::PackageState const& packageState) const
{
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->SetPackageState(get_abi(packageFullName), get_abi(packageState)));
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_Management_Deployment_IPackageManager<D>::FindPackage(param::hstring const& packageFullName) const
{
    Windows::ApplicationModel::Package packageInformation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackageByPackageFullName(get_abi(packageFullName), put_abi(packageInformation)));
    return packageInformation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager<D>::CleanupPackageForUserAsync(param::hstring const& packageName, param::hstring const& userSecurityId) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->CleanupPackageForUserAsync(get_abi(packageName), get_abi(userSecurityId), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager<D>::FindPackages(param::hstring const& packageFamilyName) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackagesByPackageFamilyName(get_abi(packageFamilyName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager<D>::FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageFamilyName) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackagesByUserSecurityIdPackageFamilyName(get_abi(userSecurityId), get_abi(packageFamilyName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_Management_Deployment_IPackageManager<D>::FindPackageForUser(param::hstring const& userSecurityId, param::hstring const& packageFullName) const
{
    Windows::ApplicationModel::Package packageInformation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackageByUserSecurityIdPackageFullName(get_abi(userSecurityId), get_abi(packageFullName), put_abi(packageInformation)));
    return packageInformation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager2<D>::RemovePackageAsync(param::hstring const& packageFullName, Windows::Management::Deployment::RemovalOptions const& removalOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->RemovePackageWithOptionsAsync(get_abi(packageFullName), get_abi(removalOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager2<D>::StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->StagePackageWithOptionsAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager2<D>::RegisterPackageByFullNameAsync(param::hstring const& mainPackageFullName, param::async_iterable<hstring> const& dependencyPackageFullNames, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->RegisterPackageByFullNameAsync(get_abi(mainPackageFullName), get_abi(dependencyPackageFullNames), get_abi(deploymentOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->FindPackagesWithPackageTypes(get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->FindPackagesByUserSecurityIdWithPackageTypes(get_abi(userSecurityId), get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesWithPackageTypes(param::hstring const& packageName, param::hstring const& packagePublisher, Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->FindPackagesByNamePublisherWithPackageTypes(get_abi(packageName), get_abi(packagePublisher), get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher, Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(get_abi(userSecurityId), get_abi(packageName), get_abi(packagePublisher), get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesWithPackageTypes(param::hstring const& packageFamilyName, Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->FindPackagesByPackageFamilyNameWithPackageTypes(get_abi(packageFamilyName), get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, param::hstring const& packageFamilyName, Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(get_abi(userSecurityId), get_abi(packageFamilyName), get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager2<D>::StageUserDataAsync(param::hstring const& packageFullName) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->StageUserDataAsync(get_abi(packageFullName), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Management::Deployment::PackageVolume> consume_Windows_Management_Deployment_IPackageManager3<D>::AddPackageVolumeAsync(param::hstring const& packageStorePath) const
{
    Windows::Foundation::IAsyncOperation<Windows::Management::Deployment::PackageVolume> packageVolume{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->AddPackageVolumeAsync(get_abi(packageStorePath), put_abi(packageVolume)));
    return packageVolume;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->AddPackageToVolumeAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), get_abi(targetVolume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> void consume_Windows_Management_Deployment_IPackageManager3<D>::ClearPackageStatus(param::hstring const& packageFullName, Windows::Management::Deployment::PackageStatus const& status) const
{
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->ClearPackageStatus(get_abi(packageFullName), get_abi(status)));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::RegisterPackageAsync(Windows::Foundation::Uri const& manifestUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& appDataVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->RegisterPackageWithAppDataVolumeAsync(get_abi(manifestUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), get_abi(appDataVolume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Management::Deployment::PackageVolume consume_Windows_Management_Deployment_IPackageManager3<D>::FindPackageVolume(param::hstring const& volumeName) const
{
    Windows::Management::Deployment::PackageVolume volume{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->FindPackageVolumeByName(get_abi(volumeName), put_abi(volume)));
    return volume;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageVolume> consume_Windows_Management_Deployment_IPackageManager3<D>::FindPackageVolumes() const
{
    Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageVolume> volumeCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->FindPackageVolumes(put_abi(volumeCollection)));
    return volumeCollection;
}

template <typename D> Windows::Management::Deployment::PackageVolume consume_Windows_Management_Deployment_IPackageManager3<D>::GetDefaultPackageVolume() const
{
    Windows::Management::Deployment::PackageVolume volume{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->GetDefaultPackageVolume(put_abi(volume)));
    return volume;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::MovePackageToVolumeAsync(param::hstring const& packageFullName, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->MovePackageToVolumeAsync(get_abi(packageFullName), get_abi(deploymentOptions), get_abi(targetVolume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::RemovePackageVolumeAsync(Windows::Management::Deployment::PackageVolume const& volume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->RemovePackageVolumeAsync(get_abi(volume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> void consume_Windows_Management_Deployment_IPackageManager3<D>::SetDefaultPackageVolume(Windows::Management::Deployment::PackageVolume const& volume) const
{
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->SetDefaultPackageVolume(get_abi(volume)));
}

template <typename D> void consume_Windows_Management_Deployment_IPackageManager3<D>::SetPackageStatus(param::hstring const& packageFullName, Windows::Management::Deployment::PackageStatus const& status) const
{
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->SetPackageStatus(get_abi(packageFullName), get_abi(status)));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::SetPackageVolumeOfflineAsync(Windows::Management::Deployment::PackageVolume const& packageVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->SetPackageVolumeOfflineAsync(get_abi(packageVolume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::SetPackageVolumeOnlineAsync(Windows::Management::Deployment::PackageVolume const& packageVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->SetPackageVolumeOnlineAsync(get_abi(packageVolume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->StagePackageToVolumeAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), get_abi(targetVolume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::StageUserDataAsync(param::hstring const& packageFullName, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->StageUserDataWithOptionsAsync(get_abi(packageFullName), get_abi(deploymentOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Management::Deployment::PackageVolume>> consume_Windows_Management_Deployment_IPackageManager4<D>::GetPackageVolumesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Management::Deployment::PackageVolume>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager4)->GetPackageVolumesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager5<D>::AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& externalPackageUris) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager5)->AddPackageToVolumeAndOptionalPackagesAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), get_abi(targetVolume), get_abi(optionalPackageFamilyNames), get_abi(externalPackageUris), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager5<D>::StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& externalPackageUris) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager5)->StagePackageToVolumeAndOptionalPackagesAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), get_abi(targetVolume), get_abi(optionalPackageFamilyNames), get_abi(externalPackageUris), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager5<D>::RegisterPackageByFamilyNameAsync(param::hstring const& mainPackageFamilyName, param::async_iterable<hstring> const& dependencyPackageFamilyNames, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& appDataVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager5)->RegisterPackageByFamilyNameAndOptionalPackagesAsync(get_abi(mainPackageFamilyName), get_abi(dependencyPackageFamilyNames), get_abi(deploymentOptions), get_abi(appDataVolume), get_abi(optionalPackageFamilyNames), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Management::Deployment::PackageManagerDebugSettings consume_Windows_Management_Deployment_IPackageManager5<D>::DebugSettings() const
{
    Windows::Management::Deployment::PackageManagerDebugSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager5)->get_DebugSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Management_Deployment_IPackageManagerDebugSettings<D>::SetContentGroupStateAsync(Windows::ApplicationModel::Package const& package, param::hstring const& contentGroupName, Windows::ApplicationModel::PackageContentGroupState const& state) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManagerDebugSettings)->SetContentGroupStateAsync(get_abi(package), get_abi(contentGroupName), get_abi(state), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Management_Deployment_IPackageManagerDebugSettings<D>::SetContentGroupStateAsync(Windows::ApplicationModel::Package const& package, param::hstring const& contentGroupName, Windows::ApplicationModel::PackageContentGroupState const& state, double completionPercentage) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManagerDebugSettings)->SetContentGroupStateWithPercentageAsync(get_abi(package), get_abi(contentGroupName), get_abi(state), completionPercentage, put_abi(action)));
    return action;
}

template <typename D> hstring consume_Windows_Management_Deployment_IPackageUserInformation<D>::UserSecurityId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageUserInformation)->get_UserSecurityId(put_abi(value)));
    return value;
}

template <typename D> Windows::Management::Deployment::PackageInstallState consume_Windows_Management_Deployment_IPackageUserInformation<D>::InstallState() const
{
    Windows::Management::Deployment::PackageInstallState value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageUserInformation)->get_InstallState(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Management_Deployment_IPackageVolume<D>::IsOffline() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->get_IsOffline(&value));
    return value;
}

template <typename D> bool consume_Windows_Management_Deployment_IPackageVolume<D>::IsSystemVolume() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->get_IsSystemVolume(&value));
    return value;
}

template <typename D> hstring consume_Windows_Management_Deployment_IPackageVolume<D>::MountPoint() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->get_MountPoint(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Management_Deployment_IPackageVolume<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Management_Deployment_IPackageVolume<D>::PackageStorePath() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->get_PackageStorePath(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Management_Deployment_IPackageVolume<D>::SupportsHardLinks() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->get_SupportsHardLinks(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackages() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackages(put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByNamePublisher(get_abi(packageName), get_abi(packagePublisher), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackages(param::hstring const& packageFamilyName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByPackageFamilyName(get_abi(packageFamilyName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesWithPackageTypes(get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageName, param::hstring const& packagePublisher) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByNamePublisherWithPackagesTypes(get_abi(packageTypes), get_abi(packageName), get_abi(packagePublisher), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageFamilyName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByPackageFamilyNameWithPackageTypes(get_abi(packageTypes), get_abi(packageFamilyName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackage(param::hstring const& packageFullName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackageByPackageFullName(get_abi(packageFullName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUser(param::hstring const& userSecurityId) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityId(get_abi(userSecurityId), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdNamePublisher(get_abi(userSecurityId), get_abi(packageName), get_abi(packagePublisher), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageFamilyName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdPackageFamilyName(get_abi(userSecurityId), get_abi(packageFamilyName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdWithPackageTypes(get_abi(userSecurityId), get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageName, param::hstring const& packagePublisher) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(get_abi(userSecurityId), get_abi(packageTypes), get_abi(packageName), get_abi(packagePublisher), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageFamilyName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(get_abi(userSecurityId), get_abi(packageTypes), get_abi(packageFamilyName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackageForUser(param::hstring const& userSecurityId, param::hstring const& packageFullName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackageByUserSecurityIdPackageFullName(get_abi(userSecurityId), get_abi(packageFullName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> bool consume_Windows_Management_Deployment_IPackageVolume2<D>::IsFullTrustPackageSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume2)->get_IsFullTrustPackageSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Management_Deployment_IPackageVolume2<D>::IsAppxInstallSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume2)->get_IsAppxInstallSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint64_t> consume_Windows_Management_Deployment_IPackageVolume2<D>::GetAvailableSpaceAsync() const
{
    Windows::Foundation::IAsyncOperation<uint64_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume2)->GetAvailableSpaceAsync(put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Management::Deployment::IDeploymentResult> : produce_base<D, Windows::Management::Deployment::IDeploymentResult>
{
    HRESULT __stdcall get_ErrorText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActivityId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedErrorCode(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IDeploymentResult2> : produce_base<D, Windows::Management::Deployment::IDeploymentResult2>
{
    HRESULT __stdcall get_IsRegistered(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRegistered());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManager> : produce_base<D, Windows::Management::Deployment::IPackageManager>
{
    HRESULT __stdcall AddPackageAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().AddPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdatePackageAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().UpdatePackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemovePackageAsync(HSTRING packageFullName, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().RemovePackageAsync(*reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StagePackageAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().StagePackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterPackageAsync(::IUnknown* manifestUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().RegisterPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&manifestUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackages(::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackages());
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityId(HSTRING userSecurityId, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByNamePublisher(HSTRING packageName, HSTRING packagePublisher, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdNamePublisher(HSTRING userSecurityId, HSTRING packageName, HSTRING packagePublisher, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindUsers(HSTRING packageFullName, ::IUnknown** users) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *users = detach_abi(this->shim().FindUsers(*reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            *users = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPackageState(HSTRING packageFullName, abi_t<Windows::Management::Deployment::PackageState> packageState) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPackageState(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<Windows::Management::Deployment::PackageState const*>(&packageState));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackageByPackageFullName(HSTRING packageFullName, ::IUnknown** packageInformation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageInformation = detach_abi(this->shim().FindPackage(*reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            *packageInformation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CleanupPackageForUserAsync(HSTRING packageName, HSTRING userSecurityId, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().CleanupPackageForUserAsync(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&userSecurityId)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByPackageFamilyName(HSTRING packageFamilyName, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdPackageFamilyName(HSTRING userSecurityId, HSTRING packageFamilyName, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackageByUserSecurityIdPackageFullName(HSTRING userSecurityId, HSTRING packageFullName, ::IUnknown** packageInformation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageInformation = detach_abi(this->shim().FindPackageForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            *packageInformation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManager2> : produce_base<D, Windows::Management::Deployment::IPackageManager2>
{
    HRESULT __stdcall RemovePackageWithOptionsAsync(HSTRING packageFullName, abi_t<Windows::Management::Deployment::RemovalOptions> removalOptions, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().RemovePackageAsync(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<Windows::Management::Deployment::RemovalOptions const*>(&removalOptions)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StagePackageWithOptionsAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().StagePackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterPackageByFullNameAsync(HSTRING mainPackageFullName, ::IUnknown* dependencyPackageFullNames, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().RegisterPackageByFullNameAsync(*reinterpret_cast<hstring const*>(&mainPackageFullName), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&dependencyPackageFullNames), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesWithPackageTypes(abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdWithPackageTypes(HSTRING userSecurityId, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByNamePublisherWithPackageTypes(HSTRING packageName, HSTRING packagePublisher, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(HSTRING userSecurityId, HSTRING packageName, HSTRING packagePublisher, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByPackageFamilyNameWithPackageTypes(HSTRING packageFamilyName, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<hstring const*>(&packageFamilyName), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(HSTRING userSecurityId, HSTRING packageFamilyName, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFamilyName), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StageUserDataAsync(HSTRING packageFullName, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().StageUserDataAsync(*reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManager3> : produce_base<D, Windows::Management::Deployment::IPackageManager3>
{
    HRESULT __stdcall AddPackageVolumeAsync(HSTRING packageStorePath, ::IUnknown** packageVolume) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageVolume = detach_abi(this->shim().AddPackageVolumeAsync(*reinterpret_cast<hstring const*>(&packageStorePath)));
            return S_OK;
        }
        catch (...)
        {
            *packageVolume = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddPackageToVolumeAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* targetVolume, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().AddPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearPackageStatus(HSTRING packageFullName, abi_t<Windows::Management::Deployment::PackageStatus> status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearPackageStatus(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<Windows::Management::Deployment::PackageStatus const*>(&status));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterPackageWithAppDataVolumeAsync(::IUnknown* manifestUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* appDataVolume, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().RegisterPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&manifestUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&appDataVolume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackageVolumeByName(HSTRING volumeName, ::IUnknown** volume) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *volume = detach_abi(this->shim().FindPackageVolume(*reinterpret_cast<hstring const*>(&volumeName)));
            return S_OK;
        }
        catch (...)
        {
            *volume = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackageVolumes(::IUnknown** volumeCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *volumeCollection = detach_abi(this->shim().FindPackageVolumes());
            return S_OK;
        }
        catch (...)
        {
            *volumeCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultPackageVolume(::IUnknown** volume) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *volume = detach_abi(this->shim().GetDefaultPackageVolume());
            return S_OK;
        }
        catch (...)
        {
            *volume = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MovePackageToVolumeAsync(HSTRING packageFullName, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* targetVolume, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().MovePackageToVolumeAsync(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemovePackageVolumeAsync(::IUnknown* volume, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().RemovePackageVolumeAsync(*reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&volume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDefaultPackageVolume(::IUnknown* volume) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDefaultPackageVolume(*reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&volume));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPackageStatus(HSTRING packageFullName, abi_t<Windows::Management::Deployment::PackageStatus> status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPackageStatus(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<Windows::Management::Deployment::PackageStatus const*>(&status));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPackageVolumeOfflineAsync(::IUnknown* packageVolume, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().SetPackageVolumeOfflineAsync(*reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&packageVolume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPackageVolumeOnlineAsync(::IUnknown* packageVolume, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().SetPackageVolumeOnlineAsync(*reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&packageVolume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StagePackageToVolumeAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* targetVolume, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().StagePackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StageUserDataWithOptionsAsync(HSTRING packageFullName, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().StageUserDataAsync(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManager4> : produce_base<D, Windows::Management::Deployment::IPackageManager4>
{
    HRESULT __stdcall GetPackageVolumesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPackageVolumesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManager5> : produce_base<D, Windows::Management::Deployment::IPackageManager5>
{
    HRESULT __stdcall AddPackageToVolumeAndOptionalPackagesAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* targetVolume, ::IUnknown* optionalPackageFamilyNames, ::IUnknown* externalPackageUris, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().AddPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&externalPackageUris)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StagePackageToVolumeAndOptionalPackagesAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* targetVolume, ::IUnknown* optionalPackageFamilyNames, ::IUnknown* externalPackageUris, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().StagePackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&externalPackageUris)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterPackageByFamilyNameAndOptionalPackagesAsync(HSTRING mainPackageFamilyName, ::IUnknown* dependencyPackageFamilyNames, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* appDataVolume, ::IUnknown* optionalPackageFamilyNames, ::IUnknown** deploymentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_abi(this->shim().RegisterPackageByFamilyNameAsync(*reinterpret_cast<hstring const*>(&mainPackageFamilyName), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&dependencyPackageFamilyNames), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&appDataVolume), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DebugSettings(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DebugSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManagerDebugSettings> : produce_base<D, Windows::Management::Deployment::IPackageManagerDebugSettings>
{
    HRESULT __stdcall SetContentGroupStateAsync(::IUnknown* package, HSTRING contentGroupName, abi_t<Windows::ApplicationModel::PackageContentGroupState> state, ::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SetContentGroupStateAsync(*reinterpret_cast<Windows::ApplicationModel::Package const*>(&package), *reinterpret_cast<hstring const*>(&contentGroupName), *reinterpret_cast<Windows::ApplicationModel::PackageContentGroupState const*>(&state)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetContentGroupStateWithPercentageAsync(::IUnknown* package, HSTRING contentGroupName, abi_t<Windows::ApplicationModel::PackageContentGroupState> state, double completionPercentage, ::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SetContentGroupStateAsync(*reinterpret_cast<Windows::ApplicationModel::Package const*>(&package), *reinterpret_cast<hstring const*>(&contentGroupName), *reinterpret_cast<Windows::ApplicationModel::PackageContentGroupState const*>(&state), completionPercentage));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageUserInformation> : produce_base<D, Windows::Management::Deployment::IPackageUserInformation>
{
    HRESULT __stdcall get_UserSecurityId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserSecurityId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstallState(abi_t<Windows::Management::Deployment::PackageInstallState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstallState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageVolume> : produce_base<D, Windows::Management::Deployment::IPackageVolume>
{
    HRESULT __stdcall get_IsOffline(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOffline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSystemVolume(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSystemVolume());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MountPoint(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MountPoint());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageStorePath(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PackageStorePath());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsHardLinks(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportsHardLinks());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackages(::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackages());
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByNamePublisher(HSTRING packageName, HSTRING packagePublisher, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByPackageFamilyName(HSTRING packageFamilyName, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesWithPackageTypes(abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByNamePublisherWithPackagesTypes(abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, HSTRING packageName, HSTRING packagePublisher, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByPackageFamilyNameWithPackageTypes(abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, HSTRING packageFamilyName, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackageByPackageFullName(HSTRING packageFullName, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackage(*reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityId(HSTRING userSecurityId, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdNamePublisher(HSTRING userSecurityId, HSTRING packageName, HSTRING packagePublisher, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdPackageFamilyName(HSTRING userSecurityId, HSTRING packageFamilyName, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdWithPackageTypes(HSTRING userSecurityId, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(HSTRING userSecurityId, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, HSTRING packageName, HSTRING packagePublisher, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(HSTRING userSecurityId, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, HSTRING packageFamilyName, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackageByUserSecurityIdPackageFullName(HSTRING userSecurityId, HSTRING packageFullName, ::IUnknown** packageCollection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_abi(this->shim().FindPackageForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageVolume2> : produce_base<D, Windows::Management::Deployment::IPackageVolume2>
{
    HRESULT __stdcall get_IsFullTrustPackageSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsFullTrustPackageSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAppxInstallSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAppxInstallSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAvailableSpaceAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAvailableSpaceAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Management::Deployment {

inline PackageManager::PackageManager() :
    PackageManager(activate_instance<PackageManager>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Management::Deployment::IDeploymentResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::IDeploymentResult> {};

template<> struct hash<winrt::Windows::Management::Deployment::IDeploymentResult2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::IDeploymentResult2> {};

template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::IPackageManager> {};

template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::IPackageManager2> {};

template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::IPackageManager3> {};

template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::IPackageManager4> {};

template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::IPackageManager5> {};

template<> struct hash<winrt::Windows::Management::Deployment::IPackageManagerDebugSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::IPackageManagerDebugSettings> {};

template<> struct hash<winrt::Windows::Management::Deployment::IPackageUserInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::IPackageUserInformation> {};

template<> struct hash<winrt::Windows::Management::Deployment::IPackageVolume> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::IPackageVolume> {};

template<> struct hash<winrt::Windows::Management::Deployment::IPackageVolume2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::IPackageVolume2> {};

template<> struct hash<winrt::Windows::Management::Deployment::DeploymentResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::DeploymentResult> {};

template<> struct hash<winrt::Windows::Management::Deployment::PackageManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::PackageManager> {};

template<> struct hash<winrt::Windows::Management::Deployment::PackageManagerDebugSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::PackageManagerDebugSettings> {};

template<> struct hash<winrt::Windows::Management::Deployment::PackageUserInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::PackageUserInformation> {};

template<> struct hash<winrt::Windows::Management::Deployment::PackageVolume> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::PackageVolume> {};

}

WINRT_WARNING_POP
