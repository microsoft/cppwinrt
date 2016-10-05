// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Phone.Management.Deployment.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Management.Deployment.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.ApplicationModel.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Phone::Management::Deployment {

struct __declspec(uuid("96592f8d-856c-4426-a947-b06307718078")) __declspec(novtable) IEnterprise : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(GUID * value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_WorkplaceId(int32_t * value) = 0;
    virtual HRESULT __stdcall get_EnrollmentValidFrom(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_EnrollmentValidTo(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Phone::Management::Deployment::EnterpriseStatus * value) = 0;
};

struct __declspec(uuid("20f9f390-2c69-41d8-88e6-e4b3884026cb")) __declspec(novtable) IEnterpriseEnrollmentManager : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EnrolledEnterprises(Windows::Foundation::Collections::IVectorView<Windows::Phone::Management::Deployment::Enterprise> ** result) = 0;
    virtual HRESULT __stdcall get_CurrentEnterprise(Windows::Phone::Management::Deployment::IEnterprise ** result) = 0;
    virtual HRESULT __stdcall abi_ValidateEnterprisesAsync(Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_RequestEnrollmentAsync(hstring enrollmentToken, Windows::Foundation::IAsyncOperation<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> ** result) = 0;
    virtual HRESULT __stdcall abi_RequestUnenrollmentAsync(Windows::Phone::Management::Deployment::IEnterprise * enterprise, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
};

struct __declspec(uuid("9ff71ce6-90db-4342-b326-1729aa91301c")) __declspec(novtable) IEnterpriseEnrollmentResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EnrolledEnterprise(Windows::Phone::Management::Deployment::IEnterprise ** result) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus * value) = 0;
};

struct __declspec(uuid("929aa738-8d49-42ac-80c9-b4ad793c43f2")) __declspec(novtable) IInstallationManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_AddPackageAsync(hstring title, Windows::Foundation::IUriRuntimeClass * sourceLocation, Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_AddPackagePreloadedAsync(hstring title, Windows::Foundation::IUriRuntimeClass * sourceLocation, hstring instanceId, hstring offerId, Windows::Foundation::IUriRuntimeClass * license, Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_GetPendingPackageInstalls(Windows::Foundation::Collections::IIterable<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> ** items) = 0;
    virtual HRESULT __stdcall abi_FindPackagesForCurrentPublisher(Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> ** items) = 0;
    virtual HRESULT __stdcall abi_FindPackages(Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> ** items) = 0;
};

struct __declspec(uuid("7c6c2cbd-fa4a-4c8e-ab97-d959452f19e5")) __declspec(novtable) IInstallationManagerStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RemovePackageAsync(hstring packageFullName, winrt::Windows::Management::Deployment::RemovalOptions removalOptions, Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_RegisterPackageAsync(Windows::Foundation::IUriRuntimeClass * manifestUri, Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> * dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions deploymentOptions, Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_FindPackagesByNamePublisher(hstring packageName, hstring packagePublisher, Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> ** items) = 0;
};

struct __declspec(uuid("33e8eed5-0f7e-4473-967c-7d6e1c0e7de1")) __declspec(novtable) IPackageInstallResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ProductId(hstring * value) = 0;
    virtual HRESULT __stdcall get_InstallState(winrt::Windows::Management::Deployment::PackageInstallState * value) = 0;
};

struct __declspec(uuid("7149d909-3ff9-41ed-a717-2bc65ffc61d2")) __declspec(novtable) IPackageInstallResult2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ErrorText(hstring * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Phone::Management::Deployment::Enterprise> { using default_interface = Windows::Phone::Management::Deployment::IEnterprise; };
template <> struct traits<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> { using default_interface = Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult; };
template <> struct traits<Windows::Phone::Management::Deployment::PackageInstallResult> { using default_interface = Windows::Phone::Management::Deployment::IPackageInstallResult; };

}

namespace Windows::Phone::Management::Deployment {

template <typename T> struct impl_IEnterprise;
template <typename T> struct impl_IEnterpriseEnrollmentManager;
template <typename T> struct impl_IEnterpriseEnrollmentResult;
template <typename T> struct impl_IInstallationManagerStatics;
template <typename T> struct impl_IInstallationManagerStatics2;
template <typename T> struct impl_IPackageInstallResult;
template <typename T> struct impl_IPackageInstallResult2;

}

namespace impl {

template <> struct traits<Windows::Phone::Management::Deployment::IEnterprise>
{
    using abi = ABI::Windows::Phone::Management::Deployment::IEnterprise;
    template <typename D> using consume = Windows::Phone::Management::Deployment::impl_IEnterprise<D>;
};

template <> struct traits<Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager>
{
    using abi = ABI::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager;
    template <typename D> using consume = Windows::Phone::Management::Deployment::impl_IEnterpriseEnrollmentManager<D>;
};

template <> struct traits<Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult>
{
    using abi = ABI::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult;
    template <typename D> using consume = Windows::Phone::Management::Deployment::impl_IEnterpriseEnrollmentResult<D>;
};

template <> struct traits<Windows::Phone::Management::Deployment::IInstallationManagerStatics>
{
    using abi = ABI::Windows::Phone::Management::Deployment::IInstallationManagerStatics;
    template <typename D> using consume = Windows::Phone::Management::Deployment::impl_IInstallationManagerStatics<D>;
};

template <> struct traits<Windows::Phone::Management::Deployment::IInstallationManagerStatics2>
{
    using abi = ABI::Windows::Phone::Management::Deployment::IInstallationManagerStatics2;
    template <typename D> using consume = Windows::Phone::Management::Deployment::impl_IInstallationManagerStatics2<D>;
};

template <> struct traits<Windows::Phone::Management::Deployment::IPackageInstallResult>
{
    using abi = ABI::Windows::Phone::Management::Deployment::IPackageInstallResult;
    template <typename D> using consume = Windows::Phone::Management::Deployment::impl_IPackageInstallResult<D>;
};

template <> struct traits<Windows::Phone::Management::Deployment::IPackageInstallResult2>
{
    using abi = ABI::Windows::Phone::Management::Deployment::IPackageInstallResult2;
    template <typename D> using consume = Windows::Phone::Management::Deployment::impl_IPackageInstallResult2<D>;
};

template <> struct traits<Windows::Phone::Management::Deployment::Enterprise>
{
    using abi = ABI::Windows::Phone::Management::Deployment::Enterprise;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Management.Deployment.Enterprise"; }
};

template <> struct traits<Windows::Phone::Management::Deployment::EnterpriseEnrollmentManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Management.Deployment.EnterpriseEnrollmentManager"; }
};

template <> struct traits<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult>
{
    using abi = ABI::Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Management.Deployment.EnterpriseEnrollmentResult"; }
};

template <> struct traits<Windows::Phone::Management::Deployment::InstallationManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Management.Deployment.InstallationManager"; }
};

template <> struct traits<Windows::Phone::Management::Deployment::PackageInstallResult>
{
    using abi = ABI::Windows::Phone::Management::Deployment::PackageInstallResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Management.Deployment.PackageInstallResult"; }
};

}

}
