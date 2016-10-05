// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.Management.Deployment.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Phone::Management::Deployment {

struct WINRT_EBO Enterprise :
    Windows::Phone::Management::Deployment::IEnterprise
{
    Enterprise(std::nullptr_t) noexcept {}
};

struct EnterpriseEnrollmentManager
{
    EnterpriseEnrollmentManager() = delete;
    static Windows::Foundation::Collections::IVectorView<Windows::Phone::Management::Deployment::Enterprise> EnrolledEnterprises();
    static Windows::Phone::Management::Deployment::Enterprise CurrentEnterprise();
    static Windows::Foundation::IAsyncAction ValidateEnterprisesAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> RequestEnrollmentAsync(hstring_ref enrollmentToken);
    static Windows::Foundation::IAsyncOperation<bool> RequestUnenrollmentAsync(const Windows::Phone::Management::Deployment::Enterprise & enterprise);
};

struct WINRT_EBO EnterpriseEnrollmentResult :
    Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult
{
    EnterpriseEnrollmentResult(std::nullptr_t) noexcept {}
};

struct InstallationManager
{
    InstallationManager() = delete;
    static Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> AddPackageAsync(hstring_ref title, const Windows::Foundation::Uri & sourceLocation);
    static Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> AddPackageAsync(hstring_ref title, const Windows::Foundation::Uri & sourceLocation, hstring_ref instanceId, hstring_ref offerId, const Windows::Foundation::Uri & license);
    static Windows::Foundation::Collections::IIterable<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> GetPendingPackageInstalls();
    static Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackagesForCurrentPublisher();
    static Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackages();
    static Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> RemovePackageAsync(hstring_ref packageFullName, Windows::Management::Deployment::RemovalOptions removalOptions);
    static Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> RegisterPackageAsync(const Windows::Foundation::Uri & manifestUri, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions);
    static Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackages(hstring_ref packageName, hstring_ref packagePublisher);
};

struct WINRT_EBO PackageInstallResult :
    Windows::Phone::Management::Deployment::IPackageInstallResult,
    impl::require<PackageInstallResult, Windows::Phone::Management::Deployment::IPackageInstallResult2>
{
    PackageInstallResult(std::nullptr_t) noexcept {}
};

}

}
