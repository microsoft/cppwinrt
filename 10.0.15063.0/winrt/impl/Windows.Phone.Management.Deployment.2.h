// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Management.Deployment.1.h"
#include "winrt/impl/Windows.Phone.Management.Deployment.1.h"

WINRT_EXPORT namespace winrt::Windows::Phone::Management::Deployment {

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
    static Windows::Foundation::IAsyncOperation<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> RequestEnrollmentAsync(param::hstring const& enrollmentToken);
    static Windows::Foundation::IAsyncOperation<bool> RequestUnenrollmentAsync(Windows::Phone::Management::Deployment::Enterprise const& enterprise);
};

struct WINRT_EBO EnterpriseEnrollmentResult :
    Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult
{
    EnterpriseEnrollmentResult(std::nullptr_t) noexcept {}
};

struct InstallationManager
{
    InstallationManager() = delete;
    static Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> AddPackageAsync(param::hstring const& title, Windows::Foundation::Uri const& sourceLocation);
    static Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> AddPackageAsync(param::hstring const& title, Windows::Foundation::Uri const& sourceLocation, param::hstring const& instanceId, param::hstring const& offerId, Windows::Foundation::Uri const& license);
    static Windows::Foundation::Collections::IIterable<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> GetPendingPackageInstalls();
    static Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackagesForCurrentPublisher();
    static Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackages();
    static Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> RemovePackageAsync(param::hstring const& packageFullName, Windows::Management::Deployment::RemovalOptions const& removalOptions);
    static Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> RegisterPackageAsync(Windows::Foundation::Uri const& manifestUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions);
    static Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher);
};

struct WINRT_EBO PackageInstallResult :
    Windows::Phone::Management::Deployment::IPackageInstallResult,
    impl::require<PackageInstallResult, Windows::Phone::Management::Deployment::IPackageInstallResult2>
{
    PackageInstallResult(std::nullptr_t) noexcept {}
};

}
