// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.ApplicationModel.3.h"
#include "internal/Windows.Management.Deployment.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Management::Deployment::IDeploymentResult> : produce_base<D, Windows::Management::Deployment::IDeploymentResult>
{
    HRESULT __stdcall get_ErrorText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ErrorText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedErrorCode(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedErrorCode());
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
    HRESULT __stdcall abi_AddPackageAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> packageUri, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri>> dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().AddPackageAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&packageUri), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> *>(&dependencyPackageUris), deploymentOptions));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdatePackageAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> packageUri, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri>> dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().UpdatePackageAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&packageUri), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> *>(&dependencyPackageUris), deploymentOptions));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemovePackageAsync(abi_arg_in<hstring> packageFullName, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().RemovePackageAsync(*reinterpret_cast<const hstring *>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StagePackageAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> packageUri, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri>> dependencyPackageUris, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().StagePackageAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&packageUri), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> *>(&dependencyPackageUris)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterPackageAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> manifestUri, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri>> dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().RegisterPackageAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&manifestUri), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> *>(&dependencyPackageUris), deploymentOptions));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackages(abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackages());
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByUserSecurityId(abi_arg_in<hstring> userSecurityId, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesForUser(*reinterpret_cast<const hstring *>(&userSecurityId)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByNamePublisher(abi_arg_in<hstring> packageName, abi_arg_in<hstring> packagePublisher, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackages(*reinterpret_cast<const hstring *>(&packageName), *reinterpret_cast<const hstring *>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByUserSecurityIdNamePublisher(abi_arg_in<hstring> userSecurityId, abi_arg_in<hstring> packageName, abi_arg_in<hstring> packagePublisher, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesForUser(*reinterpret_cast<const hstring *>(&userSecurityId), *reinterpret_cast<const hstring *>(&packageName), *reinterpret_cast<const hstring *>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindUsers(abi_arg_in<hstring> packageFullName, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageUserInformation>> users) noexcept override
    {
        try
        {
            *users = detach(this->shim().FindUsers(*reinterpret_cast<const hstring *>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            *users = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPackageState(abi_arg_in<hstring> packageFullName, Windows::Management::Deployment::PackageState packageState) noexcept override
    {
        try
        {
            this->shim().SetPackageState(*reinterpret_cast<const hstring *>(&packageFullName), packageState);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackageByPackageFullName(abi_arg_in<hstring> packageFullName, abi_arg_out<Windows::ApplicationModel::IPackage> packageInformation) noexcept override
    {
        try
        {
            *packageInformation = detach(this->shim().FindPackage(*reinterpret_cast<const hstring *>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            *packageInformation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CleanupPackageForUserAsync(abi_arg_in<hstring> packageName, abi_arg_in<hstring> userSecurityId, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().CleanupPackageForUserAsync(*reinterpret_cast<const hstring *>(&packageName), *reinterpret_cast<const hstring *>(&userSecurityId)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByPackageFamilyName(abi_arg_in<hstring> packageFamilyName, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackages(*reinterpret_cast<const hstring *>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByUserSecurityIdPackageFamilyName(abi_arg_in<hstring> userSecurityId, abi_arg_in<hstring> packageFamilyName, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesForUser(*reinterpret_cast<const hstring *>(&userSecurityId), *reinterpret_cast<const hstring *>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackageByUserSecurityIdPackageFullName(abi_arg_in<hstring> userSecurityId, abi_arg_in<hstring> packageFullName, abi_arg_out<Windows::ApplicationModel::IPackage> packageInformation) noexcept override
    {
        try
        {
            *packageInformation = detach(this->shim().FindPackageForUser(*reinterpret_cast<const hstring *>(&userSecurityId), *reinterpret_cast<const hstring *>(&packageFullName)));
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
    HRESULT __stdcall abi_RemovePackageWithOptionsAsync(abi_arg_in<hstring> packageFullName, Windows::Management::Deployment::RemovalOptions removalOptions, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().RemovePackageAsync(*reinterpret_cast<const hstring *>(&packageFullName), removalOptions));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StagePackageWithOptionsAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> packageUri, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri>> dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().StagePackageAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&packageUri), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> *>(&dependencyPackageUris), deploymentOptions));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterPackageByFullNameAsync(abi_arg_in<hstring> mainPackageFullName, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> dependencyPackageFullNames, Windows::Management::Deployment::DeploymentOptions deploymentOptions, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().RegisterPackageByFullNameAsync(*reinterpret_cast<const hstring *>(&mainPackageFullName), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&dependencyPackageFullNames), deploymentOptions));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes packageTypes, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesWithPackageTypes(packageTypes));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByUserSecurityIdWithPackageTypes(abi_arg_in<hstring> userSecurityId, Windows::Management::Deployment::PackageTypes packageTypes, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<const hstring *>(&userSecurityId), packageTypes));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByNamePublisherWithPackageTypes(abi_arg_in<hstring> packageName, abi_arg_in<hstring> packagePublisher, Windows::Management::Deployment::PackageTypes packageTypes, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<const hstring *>(&packageName), *reinterpret_cast<const hstring *>(&packagePublisher), packageTypes));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(abi_arg_in<hstring> userSecurityId, abi_arg_in<hstring> packageName, abi_arg_in<hstring> packagePublisher, Windows::Management::Deployment::PackageTypes packageTypes, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<const hstring *>(&userSecurityId), *reinterpret_cast<const hstring *>(&packageName), *reinterpret_cast<const hstring *>(&packagePublisher), packageTypes));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByPackageFamilyNameWithPackageTypes(abi_arg_in<hstring> packageFamilyName, Windows::Management::Deployment::PackageTypes packageTypes, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<const hstring *>(&packageFamilyName), packageTypes));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(abi_arg_in<hstring> userSecurityId, abi_arg_in<hstring> packageFamilyName, Windows::Management::Deployment::PackageTypes packageTypes, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<const hstring *>(&userSecurityId), *reinterpret_cast<const hstring *>(&packageFamilyName), packageTypes));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StageUserDataAsync(abi_arg_in<hstring> packageFullName, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().StageUserDataAsync(*reinterpret_cast<const hstring *>(&packageFullName)));
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
    HRESULT __stdcall abi_AddPackageVolumeAsync(abi_arg_in<hstring> packageStorePath, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Management::Deployment::PackageVolume>> packageVolume) noexcept override
    {
        try
        {
            *packageVolume = detach(this->shim().AddPackageVolumeAsync(*reinterpret_cast<const hstring *>(&packageStorePath)));
            return S_OK;
        }
        catch (...)
        {
            *packageVolume = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddPackageToVolumeAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> packageUri, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri>> dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, abi_arg_in<Windows::Management::Deployment::IPackageVolume> targetVolume, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().AddPackageAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&packageUri), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> *>(&dependencyPackageUris), deploymentOptions, *reinterpret_cast<const Windows::Management::Deployment::PackageVolume *>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearPackageStatus(abi_arg_in<hstring> packageFullName, Windows::Management::Deployment::PackageStatus status) noexcept override
    {
        try
        {
            this->shim().ClearPackageStatus(*reinterpret_cast<const hstring *>(&packageFullName), status);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterPackageWithAppDataVolumeAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> manifestUri, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri>> dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, abi_arg_in<Windows::Management::Deployment::IPackageVolume> appDataVolume, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().RegisterPackageAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&manifestUri), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> *>(&dependencyPackageUris), deploymentOptions, *reinterpret_cast<const Windows::Management::Deployment::PackageVolume *>(&appDataVolume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackageVolumeByName(abi_arg_in<hstring> volumeName, abi_arg_out<Windows::Management::Deployment::IPackageVolume> volume) noexcept override
    {
        try
        {
            *volume = detach(this->shim().FindPackageVolume(*reinterpret_cast<const hstring *>(&volumeName)));
            return S_OK;
        }
        catch (...)
        {
            *volume = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackageVolumes(abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageVolume>> volumeCollection) noexcept override
    {
        try
        {
            *volumeCollection = detach(this->shim().FindPackageVolumes());
            return S_OK;
        }
        catch (...)
        {
            *volumeCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDefaultPackageVolume(abi_arg_out<Windows::Management::Deployment::IPackageVolume> volume) noexcept override
    {
        try
        {
            *volume = detach(this->shim().GetDefaultPackageVolume());
            return S_OK;
        }
        catch (...)
        {
            *volume = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MovePackageToVolumeAsync(abi_arg_in<hstring> packageFullName, Windows::Management::Deployment::DeploymentOptions deploymentOptions, abi_arg_in<Windows::Management::Deployment::IPackageVolume> targetVolume, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().MovePackageToVolumeAsync(*reinterpret_cast<const hstring *>(&packageFullName), deploymentOptions, *reinterpret_cast<const Windows::Management::Deployment::PackageVolume *>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemovePackageVolumeAsync(abi_arg_in<Windows::Management::Deployment::IPackageVolume> volume, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().RemovePackageVolumeAsync(*reinterpret_cast<const Windows::Management::Deployment::PackageVolume *>(&volume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDefaultPackageVolume(abi_arg_in<Windows::Management::Deployment::IPackageVolume> volume) noexcept override
    {
        try
        {
            this->shim().SetDefaultPackageVolume(*reinterpret_cast<const Windows::Management::Deployment::PackageVolume *>(&volume));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPackageStatus(abi_arg_in<hstring> packageFullName, Windows::Management::Deployment::PackageStatus status) noexcept override
    {
        try
        {
            this->shim().SetPackageStatus(*reinterpret_cast<const hstring *>(&packageFullName), status);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPackageVolumeOfflineAsync(abi_arg_in<Windows::Management::Deployment::IPackageVolume> packageVolume, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().SetPackageVolumeOfflineAsync(*reinterpret_cast<const Windows::Management::Deployment::PackageVolume *>(&packageVolume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPackageVolumeOnlineAsync(abi_arg_in<Windows::Management::Deployment::IPackageVolume> packageVolume, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().SetPackageVolumeOnlineAsync(*reinterpret_cast<const Windows::Management::Deployment::PackageVolume *>(&packageVolume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StagePackageToVolumeAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> packageUri, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri>> dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, abi_arg_in<Windows::Management::Deployment::IPackageVolume> targetVolume, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().StagePackageAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&packageUri), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> *>(&dependencyPackageUris), deploymentOptions, *reinterpret_cast<const Windows::Management::Deployment::PackageVolume *>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            *deploymentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StageUserDataWithOptionsAsync(abi_arg_in<hstring> packageFullName, Windows::Management::Deployment::DeploymentOptions deploymentOptions, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>> deploymentOperation) noexcept override
    {
        try
        {
            *deploymentOperation = detach(this->shim().StageUserDataAsync(*reinterpret_cast<const hstring *>(&packageFullName), deploymentOptions));
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
    HRESULT __stdcall abi_GetPackageVolumesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Management::Deployment::PackageVolume>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPackageVolumesAsync());
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
struct produce<D, Windows::Management::Deployment::IPackageUserInformation> : produce_base<D, Windows::Management::Deployment::IPackageUserInformation>
{
    HRESULT __stdcall get_UserSecurityId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserSecurityId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstallState(Windows::Management::Deployment::PackageInstallState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InstallState());
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
    HRESULT __stdcall get_IsOffline(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsOffline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSystemVolume(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSystemVolume());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MountPoint(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MountPoint());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageStorePath(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PackageStorePath());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsHardLinks(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportsHardLinks());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackages(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackages());
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByNamePublisher(abi_arg_in<hstring> packageName, abi_arg_in<hstring> packagePublisher, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackages(*reinterpret_cast<const hstring *>(&packageName), *reinterpret_cast<const hstring *>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByPackageFamilyName(abi_arg_in<hstring> packageFamilyName, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackages(*reinterpret_cast<const hstring *>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes packageTypes, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesWithPackageTypes(packageTypes));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByNamePublisherWithPackagesTypes(Windows::Management::Deployment::PackageTypes packageTypes, abi_arg_in<hstring> packageName, abi_arg_in<hstring> packagePublisher, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesWithPackageTypes(packageTypes, *reinterpret_cast<const hstring *>(&packageName), *reinterpret_cast<const hstring *>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByPackageFamilyNameWithPackageTypes(Windows::Management::Deployment::PackageTypes packageTypes, abi_arg_in<hstring> packageFamilyName, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesWithPackageTypes(packageTypes, *reinterpret_cast<const hstring *>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackageByPackageFullName(abi_arg_in<hstring> packageFullName, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackage(*reinterpret_cast<const hstring *>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByUserSecurityId(abi_arg_in<hstring> userSecurityId, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesForUser(*reinterpret_cast<const hstring *>(&userSecurityId)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByUserSecurityIdNamePublisher(abi_arg_in<hstring> userSecurityId, abi_arg_in<hstring> packageName, abi_arg_in<hstring> packagePublisher, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesForUser(*reinterpret_cast<const hstring *>(&userSecurityId), *reinterpret_cast<const hstring *>(&packageName), *reinterpret_cast<const hstring *>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByUserSecurityIdPackageFamilyName(abi_arg_in<hstring> userSecurityId, abi_arg_in<hstring> packageFamilyName, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesForUser(*reinterpret_cast<const hstring *>(&userSecurityId), *reinterpret_cast<const hstring *>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByUserSecurityIdWithPackageTypes(abi_arg_in<hstring> userSecurityId, Windows::Management::Deployment::PackageTypes packageTypes, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<const hstring *>(&userSecurityId), packageTypes));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(abi_arg_in<hstring> userSecurityId, Windows::Management::Deployment::PackageTypes packageTypes, abi_arg_in<hstring> packageName, abi_arg_in<hstring> packagePublisher, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<const hstring *>(&userSecurityId), packageTypes, *reinterpret_cast<const hstring *>(&packageName), *reinterpret_cast<const hstring *>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(abi_arg_in<hstring> userSecurityId, Windows::Management::Deployment::PackageTypes packageTypes, abi_arg_in<hstring> packageFamilyName, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<const hstring *>(&userSecurityId), packageTypes, *reinterpret_cast<const hstring *>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *packageCollection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackageByUserSecurityIdPackageFullName(abi_arg_in<hstring> userSecurityId, abi_arg_in<hstring> packageFullName, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>> packageCollection) noexcept override
    {
        try
        {
            *packageCollection = detach(this->shim().FindPackageForUser(*reinterpret_cast<const hstring *>(&userSecurityId), *reinterpret_cast<const hstring *>(&packageFullName)));
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
    HRESULT __stdcall get_IsFullTrustPackageSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsFullTrustPackageSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAppxInstallSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsAppxInstallSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAvailableSpaceAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<uint64_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetAvailableSpaceAsync());
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

namespace Windows::Management::Deployment {

template <typename D> hstring impl_IDeploymentResult<D>::ErrorText() const
{
    hstring value;
    check_hresult(static_cast<const IDeploymentResult &>(static_cast<const D &>(*this))->get_ErrorText(put(value)));
    return value;
}

template <typename D> GUID impl_IDeploymentResult<D>::ActivityId() const
{
    GUID value {};
    check_hresult(static_cast<const IDeploymentResult &>(static_cast<const D &>(*this))->get_ActivityId(&value));
    return value;
}

template <typename D> HRESULT impl_IDeploymentResult<D>::ExtendedErrorCode() const
{
    HRESULT value {};
    check_hresult(static_cast<const IDeploymentResult &>(static_cast<const D &>(*this))->get_ExtendedErrorCode(&value));
    return value;
}

template <typename D> hstring impl_IPackageUserInformation<D>::UserSecurityId() const
{
    hstring value;
    check_hresult(static_cast<const IPackageUserInformation &>(static_cast<const D &>(*this))->get_UserSecurityId(put(value)));
    return value;
}

template <typename D> Windows::Management::Deployment::PackageInstallState impl_IPackageUserInformation<D>::InstallState() const
{
    Windows::Management::Deployment::PackageInstallState value {};
    check_hresult(static_cast<const IPackageUserInformation &>(static_cast<const D &>(*this))->get_InstallState(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager<D>::AddPackageAsync(const Windows::Foundation::Uri & packageUri, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_AddPackageAsync(get(packageUri), get(dependencyPackageUris), deploymentOptions, put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager<D>::UpdatePackageAsync(const Windows::Foundation::Uri & packageUri, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_UpdatePackageAsync(get(packageUri), get(dependencyPackageUris), deploymentOptions, put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager<D>::RemovePackageAsync(hstring_ref packageFullName) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_RemovePackageAsync(get(packageFullName), put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager<D>::StagePackageAsync(const Windows::Foundation::Uri & packageUri, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & dependencyPackageUris) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_StagePackageAsync(get(packageUri), get(dependencyPackageUris), put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager<D>::RegisterPackageAsync(const Windows::Foundation::Uri & manifestUri, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_RegisterPackageAsync(get(manifestUri), get(dependencyPackageUris), deploymentOptions, put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IPackageManager<D>::FindPackages() const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_FindPackages(put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IPackageManager<D>::FindPackagesForUser(hstring_ref userSecurityId) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_FindPackagesByUserSecurityId(get(userSecurityId), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IPackageManager<D>::FindPackages(hstring_ref packageName, hstring_ref packagePublisher) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_FindPackagesByNamePublisher(get(packageName), get(packagePublisher), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IPackageManager<D>::FindPackagesForUser(hstring_ref userSecurityId, hstring_ref packageName, hstring_ref packagePublisher) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_FindPackagesByUserSecurityIdNamePublisher(get(userSecurityId), get(packageName), get(packagePublisher), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageUserInformation> impl_IPackageManager<D>::FindUsers(hstring_ref packageFullName) const
{
    Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageUserInformation> users;
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_FindUsers(get(packageFullName), put(users)));
    return users;
}

template <typename D> void impl_IPackageManager<D>::SetPackageState(hstring_ref packageFullName, Windows::Management::Deployment::PackageState packageState) const
{
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_SetPackageState(get(packageFullName), packageState));
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageManager<D>::FindPackage(hstring_ref packageFullName) const
{
    Windows::ApplicationModel::Package packageInformation { nullptr };
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_FindPackageByPackageFullName(get(packageFullName), put(packageInformation)));
    return packageInformation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager<D>::CleanupPackageForUserAsync(hstring_ref packageName, hstring_ref userSecurityId) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_CleanupPackageForUserAsync(get(packageName), get(userSecurityId), put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IPackageManager<D>::FindPackages(hstring_ref packageFamilyName) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_FindPackagesByPackageFamilyName(get(packageFamilyName), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IPackageManager<D>::FindPackagesForUser(hstring_ref userSecurityId, hstring_ref packageFamilyName) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_FindPackagesByUserSecurityIdPackageFamilyName(get(userSecurityId), get(packageFamilyName), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageManager<D>::FindPackageForUser(hstring_ref userSecurityId, hstring_ref packageFullName) const
{
    Windows::ApplicationModel::Package packageInformation { nullptr };
    check_hresult(static_cast<const IPackageManager &>(static_cast<const D &>(*this))->abi_FindPackageByUserSecurityIdPackageFullName(get(userSecurityId), get(packageFullName), put(packageInformation)));
    return packageInformation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager2<D>::RemovePackageAsync(hstring_ref packageFullName, Windows::Management::Deployment::RemovalOptions removalOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager2 &>(static_cast<const D &>(*this))->abi_RemovePackageWithOptionsAsync(get(packageFullName), removalOptions, put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager2<D>::StagePackageAsync(const Windows::Foundation::Uri & packageUri, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager2 &>(static_cast<const D &>(*this))->abi_StagePackageWithOptionsAsync(get(packageUri), get(dependencyPackageUris), deploymentOptions, put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager2<D>::RegisterPackageByFullNameAsync(hstring_ref mainPackageFullName, const Windows::Foundation::Collections::IIterable<hstring> & dependencyPackageFullNames, Windows::Management::Deployment::DeploymentOptions deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager2 &>(static_cast<const D &>(*this))->abi_RegisterPackageByFullNameAsync(get(mainPackageFullName), get(dependencyPackageFullNames), deploymentOptions, put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IPackageManager2<D>::FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageManager2 &>(static_cast<const D &>(*this))->abi_FindPackagesWithPackageTypes(packageTypes, put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IPackageManager2<D>::FindPackagesForUserWithPackageTypes(hstring_ref userSecurityId, Windows::Management::Deployment::PackageTypes packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageManager2 &>(static_cast<const D &>(*this))->abi_FindPackagesByUserSecurityIdWithPackageTypes(get(userSecurityId), packageTypes, put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IPackageManager2<D>::FindPackagesWithPackageTypes(hstring_ref packageName, hstring_ref packagePublisher, Windows::Management::Deployment::PackageTypes packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageManager2 &>(static_cast<const D &>(*this))->abi_FindPackagesByNamePublisherWithPackageTypes(get(packageName), get(packagePublisher), packageTypes, put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IPackageManager2<D>::FindPackagesForUserWithPackageTypes(hstring_ref userSecurityId, hstring_ref packageName, hstring_ref packagePublisher, Windows::Management::Deployment::PackageTypes packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageManager2 &>(static_cast<const D &>(*this))->abi_FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(get(userSecurityId), get(packageName), get(packagePublisher), packageTypes, put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IPackageManager2<D>::FindPackagesWithPackageTypes(hstring_ref packageFamilyName, Windows::Management::Deployment::PackageTypes packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageManager2 &>(static_cast<const D &>(*this))->abi_FindPackagesByPackageFamilyNameWithPackageTypes(get(packageFamilyName), packageTypes, put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IPackageManager2<D>::FindPackagesForUserWithPackageTypes(hstring_ref userSecurityId, hstring_ref packageFamilyName, Windows::Management::Deployment::PackageTypes packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageManager2 &>(static_cast<const D &>(*this))->abi_FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(get(userSecurityId), get(packageFamilyName), packageTypes, put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager2<D>::StageUserDataAsync(hstring_ref packageFullName) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager2 &>(static_cast<const D &>(*this))->abi_StageUserDataAsync(get(packageFullName), put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Management::Deployment::PackageVolume> impl_IPackageManager3<D>::AddPackageVolumeAsync(hstring_ref packageStorePath) const
{
    Windows::Foundation::IAsyncOperation<Windows::Management::Deployment::PackageVolume> packageVolume;
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_AddPackageVolumeAsync(get(packageStorePath), put(packageVolume)));
    return packageVolume;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager3<D>::AddPackageAsync(const Windows::Foundation::Uri & packageUri, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, const Windows::Management::Deployment::PackageVolume & targetVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_AddPackageToVolumeAsync(get(packageUri), get(dependencyPackageUris), deploymentOptions, get(targetVolume), put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> void impl_IPackageManager3<D>::ClearPackageStatus(hstring_ref packageFullName, Windows::Management::Deployment::PackageStatus status) const
{
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_ClearPackageStatus(get(packageFullName), status));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager3<D>::RegisterPackageAsync(const Windows::Foundation::Uri & manifestUri, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, const Windows::Management::Deployment::PackageVolume & appDataVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_RegisterPackageWithAppDataVolumeAsync(get(manifestUri), get(dependencyPackageUris), deploymentOptions, get(appDataVolume), put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Management::Deployment::PackageVolume impl_IPackageManager3<D>::FindPackageVolume(hstring_ref volumeName) const
{
    Windows::Management::Deployment::PackageVolume volume { nullptr };
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_FindPackageVolumeByName(get(volumeName), put(volume)));
    return volume;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageVolume> impl_IPackageManager3<D>::FindPackageVolumes() const
{
    Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageVolume> volumeCollection;
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_FindPackageVolumes(put(volumeCollection)));
    return volumeCollection;
}

template <typename D> Windows::Management::Deployment::PackageVolume impl_IPackageManager3<D>::GetDefaultPackageVolume() const
{
    Windows::Management::Deployment::PackageVolume volume { nullptr };
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_GetDefaultPackageVolume(put(volume)));
    return volume;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager3<D>::MovePackageToVolumeAsync(hstring_ref packageFullName, Windows::Management::Deployment::DeploymentOptions deploymentOptions, const Windows::Management::Deployment::PackageVolume & targetVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_MovePackageToVolumeAsync(get(packageFullName), deploymentOptions, get(targetVolume), put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager3<D>::RemovePackageVolumeAsync(const Windows::Management::Deployment::PackageVolume & volume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_RemovePackageVolumeAsync(get(volume), put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> void impl_IPackageManager3<D>::SetDefaultPackageVolume(const Windows::Management::Deployment::PackageVolume & volume) const
{
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_SetDefaultPackageVolume(get(volume)));
}

template <typename D> void impl_IPackageManager3<D>::SetPackageStatus(hstring_ref packageFullName, Windows::Management::Deployment::PackageStatus status) const
{
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_SetPackageStatus(get(packageFullName), status));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager3<D>::SetPackageVolumeOfflineAsync(const Windows::Management::Deployment::PackageVolume & packageVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_SetPackageVolumeOfflineAsync(get(packageVolume), put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager3<D>::SetPackageVolumeOnlineAsync(const Windows::Management::Deployment::PackageVolume & packageVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_SetPackageVolumeOnlineAsync(get(packageVolume), put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager3<D>::StagePackageAsync(const Windows::Foundation::Uri & packageUri, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, const Windows::Management::Deployment::PackageVolume & targetVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_StagePackageToVolumeAsync(get(packageUri), get(dependencyPackageUris), deploymentOptions, get(targetVolume), put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> impl_IPackageManager3<D>::StageUserDataAsync(hstring_ref packageFullName, Windows::Management::Deployment::DeploymentOptions deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation;
    check_hresult(static_cast<const IPackageManager3 &>(static_cast<const D &>(*this))->abi_StageUserDataWithOptionsAsync(get(packageFullName), deploymentOptions, put(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Management::Deployment::PackageVolume>> impl_IPackageManager4<D>::GetPackageVolumesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Management::Deployment::PackageVolume>> operation;
    check_hresult(static_cast<const IPackageManager4 &>(static_cast<const D &>(*this))->abi_GetPackageVolumesAsync(put(operation)));
    return operation;
}

template <typename D> bool impl_IPackageVolume<D>::IsOffline() const
{
    bool value {};
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->get_IsOffline(&value));
    return value;
}

template <typename D> bool impl_IPackageVolume<D>::IsSystemVolume() const
{
    bool value {};
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->get_IsSystemVolume(&value));
    return value;
}

template <typename D> hstring impl_IPackageVolume<D>::MountPoint() const
{
    hstring value;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->get_MountPoint(put(value)));
    return value;
}

template <typename D> hstring impl_IPackageVolume<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> hstring impl_IPackageVolume<D>::PackageStorePath() const
{
    hstring value;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->get_PackageStorePath(put(value)));
    return value;
}

template <typename D> bool impl_IPackageVolume<D>::SupportsHardLinks() const
{
    bool value {};
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->get_SupportsHardLinks(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackages() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackages(put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackages(hstring_ref packageName, hstring_ref packagePublisher) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackagesByNamePublisher(get(packageName), get(packagePublisher), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackages(hstring_ref packageFamilyName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackagesByPackageFamilyName(get(packageFamilyName), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes packageTypes) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackagesWithPackageTypes(packageTypes, put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes packageTypes, hstring_ref packageName, hstring_ref packagePublisher) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackagesByNamePublisherWithPackagesTypes(packageTypes, get(packageName), get(packagePublisher), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes packageTypes, hstring_ref packageFamilyName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackagesByPackageFamilyNameWithPackageTypes(packageTypes, get(packageFamilyName), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackage(hstring_ref packageFullName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackageByPackageFullName(get(packageFullName), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackagesForUser(hstring_ref userSecurityId) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackagesByUserSecurityId(get(userSecurityId), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackagesForUser(hstring_ref userSecurityId, hstring_ref packageName, hstring_ref packagePublisher) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackagesByUserSecurityIdNamePublisher(get(userSecurityId), get(packageName), get(packagePublisher), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackagesForUser(hstring_ref userSecurityId, hstring_ref packageFamilyName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackagesByUserSecurityIdPackageFamilyName(get(userSecurityId), get(packageFamilyName), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackagesForUserWithPackageTypes(hstring_ref userSecurityId, Windows::Management::Deployment::PackageTypes packageTypes) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackagesByUserSecurityIdWithPackageTypes(get(userSecurityId), packageTypes, put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackagesForUserWithPackageTypes(hstring_ref userSecurityId, Windows::Management::Deployment::PackageTypes packageTypes, hstring_ref packageName, hstring_ref packagePublisher) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(get(userSecurityId), packageTypes, get(packageName), get(packagePublisher), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackagesForUserWithPackageTypes(hstring_ref userSecurityId, Windows::Management::Deployment::PackageTypes packageTypes, hstring_ref packageFamilyName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(get(userSecurityId), packageTypes, get(packageFamilyName), put(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> impl_IPackageVolume<D>::FindPackageForUser(hstring_ref userSecurityId, hstring_ref packageFullName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection;
    check_hresult(static_cast<const IPackageVolume &>(static_cast<const D &>(*this))->abi_FindPackageByUserSecurityIdPackageFullName(get(userSecurityId), get(packageFullName), put(packageCollection)));
    return packageCollection;
}

template <typename D> bool impl_IPackageVolume2<D>::IsFullTrustPackageSupported() const
{
    bool value {};
    check_hresult(static_cast<const IPackageVolume2 &>(static_cast<const D &>(*this))->get_IsFullTrustPackageSupported(&value));
    return value;
}

template <typename D> bool impl_IPackageVolume2<D>::IsAppxInstallSupported() const
{
    bool value {};
    check_hresult(static_cast<const IPackageVolume2 &>(static_cast<const D &>(*this))->get_IsAppxInstallSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint64_t> impl_IPackageVolume2<D>::GetAvailableSpaceAsync() const
{
    Windows::Foundation::IAsyncOperation<uint64_t> operation;
    check_hresult(static_cast<const IPackageVolume2 &>(static_cast<const D &>(*this))->abi_GetAvailableSpaceAsync(put(operation)));
    return operation;
}

inline PackageManager::PackageManager() :
    PackageManager(activate_instance<PackageManager>())
{}

}

}
