// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel {

struct Package;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Management::Deployment {

enum class DeploymentOptions : unsigned;
enum class PackageInstallState;
enum class RemovalOptions : unsigned;

}

WINRT_EXPORT namespace winrt::Windows::Phone::Management::Deployment {

enum class EnterpriseEnrollmentStatus
{
    Success = 0,
    CancelledByUser = 1,
    UnknownFailure = 2,
};

enum class EnterpriseStatus
{
    Enrolled = 0,
    Disabled = 1,
    Revoked = 2,
    Expired = 3,
};

struct IEnterprise;
struct IEnterpriseEnrollmentManager;
struct IEnterpriseEnrollmentResult;
struct IInstallationManagerStatics;
struct IInstallationManagerStatics2;
struct IPackageInstallResult;
struct IPackageInstallResult2;
struct Enterprise;
struct EnterpriseEnrollmentManager;
struct EnterpriseEnrollmentResult;
struct InstallationManager;
struct PackageInstallResult;

}

namespace winrt::impl {

template <> struct category<Windows::Phone::Management::Deployment::IEnterprise>{ using type = interface_category; };
template <> struct category<Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager>{ using type = interface_category; };
template <> struct category<Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult>{ using type = interface_category; };
template <> struct category<Windows::Phone::Management::Deployment::IInstallationManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::Management::Deployment::IInstallationManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Phone::Management::Deployment::IPackageInstallResult>{ using type = interface_category; };
template <> struct category<Windows::Phone::Management::Deployment::IPackageInstallResult2>{ using type = interface_category; };
template <> struct category<Windows::Phone::Management::Deployment::Enterprise>{ using type = class_category; };
template <> struct category<Windows::Phone::Management::Deployment::EnterpriseEnrollmentManager>{ using type = class_category; };
template <> struct category<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult>{ using type = class_category; };
template <> struct category<Windows::Phone::Management::Deployment::InstallationManager>{ using type = class_category; };
template <> struct category<Windows::Phone::Management::Deployment::PackageInstallResult>{ using type = class_category; };
template <> struct category<Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus>{ using type = enum_category; };
template <> struct category<Windows::Phone::Management::Deployment::EnterpriseStatus>{ using type = enum_category; };
template <> struct name<Windows::Phone::Management::Deployment::IEnterprise>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.IEnterprise" }; };
template <> struct name<Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.IEnterpriseEnrollmentManager" }; };
template <> struct name<Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.IEnterpriseEnrollmentResult" }; };
template <> struct name<Windows::Phone::Management::Deployment::IInstallationManagerStatics>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.IInstallationManagerStatics" }; };
template <> struct name<Windows::Phone::Management::Deployment::IInstallationManagerStatics2>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.IInstallationManagerStatics2" }; };
template <> struct name<Windows::Phone::Management::Deployment::IPackageInstallResult>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.IPackageInstallResult" }; };
template <> struct name<Windows::Phone::Management::Deployment::IPackageInstallResult2>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.IPackageInstallResult2" }; };
template <> struct name<Windows::Phone::Management::Deployment::Enterprise>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.Enterprise" }; };
template <> struct name<Windows::Phone::Management::Deployment::EnterpriseEnrollmentManager>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.EnterpriseEnrollmentManager" }; };
template <> struct name<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.EnterpriseEnrollmentResult" }; };
template <> struct name<Windows::Phone::Management::Deployment::InstallationManager>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.InstallationManager" }; };
template <> struct name<Windows::Phone::Management::Deployment::PackageInstallResult>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.PackageInstallResult" }; };
template <> struct name<Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.EnterpriseEnrollmentStatus" }; };
template <> struct name<Windows::Phone::Management::Deployment::EnterpriseStatus>{ static constexpr auto & value{ L"Windows.Phone.Management.Deployment.EnterpriseStatus" }; };
template <> struct guid<Windows::Phone::Management::Deployment::IEnterprise>{ static constexpr GUID value{ 0x96592F8D,0x856C,0x4426,{ 0xA9,0x47,0xB0,0x63,0x07,0x71,0x80,0x78 } }; };
template <> struct guid<Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager>{ static constexpr GUID value{ 0x20F9F390,0x2C69,0x41D8,{ 0x88,0xE6,0xE4,0xB3,0x88,0x40,0x26,0xCB } }; };
template <> struct guid<Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult>{ static constexpr GUID value{ 0x9FF71CE6,0x90DB,0x4342,{ 0xB3,0x26,0x17,0x29,0xAA,0x91,0x30,0x1C } }; };
template <> struct guid<Windows::Phone::Management::Deployment::IInstallationManagerStatics>{ static constexpr GUID value{ 0x929AA738,0x8D49,0x42AC,{ 0x80,0xC9,0xB4,0xAD,0x79,0x3C,0x43,0xF2 } }; };
template <> struct guid<Windows::Phone::Management::Deployment::IInstallationManagerStatics2>{ static constexpr GUID value{ 0x7C6C2CBD,0xFA4A,0x4C8E,{ 0xAB,0x97,0xD9,0x59,0x45,0x2F,0x19,0xE5 } }; };
template <> struct guid<Windows::Phone::Management::Deployment::IPackageInstallResult>{ static constexpr GUID value{ 0x33E8EED5,0x0F7E,0x4473,{ 0x96,0x7C,0x7D,0x6E,0x1C,0x0E,0x7D,0xE1 } }; };
template <> struct guid<Windows::Phone::Management::Deployment::IPackageInstallResult2>{ static constexpr GUID value{ 0x7149D909,0x3FF9,0x41ED,{ 0xA7,0x17,0x2B,0xC6,0x5F,0xFC,0x61,0xD2 } }; };
template <> struct default_interface<Windows::Phone::Management::Deployment::Enterprise>{ using type = Windows::Phone::Management::Deployment::IEnterprise; };
template <> struct default_interface<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult>{ using type = Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult; };
template <> struct default_interface<Windows::Phone::Management::Deployment::PackageInstallResult>{ using type = Windows::Phone::Management::Deployment::IPackageInstallResult; };

template <typename D>
struct consume_Windows_Phone_Management_Deployment_IEnterprise
{
    GUID Id() const;
    hstring Name() const;
    int32_t WorkplaceId() const;
    Windows::Foundation::DateTime EnrollmentValidFrom() const;
    Windows::Foundation::DateTime EnrollmentValidTo() const;
    Windows::Phone::Management::Deployment::EnterpriseStatus Status() const;
};
template <> struct consume<Windows::Phone::Management::Deployment::IEnterprise> { template <typename D> using type = consume_Windows_Phone_Management_Deployment_IEnterprise<D>; };

template <typename D>
struct consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentManager
{
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Management::Deployment::Enterprise> EnrolledEnterprises() const;
    Windows::Phone::Management::Deployment::Enterprise CurrentEnterprise() const;
    Windows::Foundation::IAsyncAction ValidateEnterprisesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> RequestEnrollmentAsync(param::hstring const& enrollmentToken) const;
    Windows::Foundation::IAsyncOperation<bool> RequestUnenrollmentAsync(Windows::Phone::Management::Deployment::Enterprise const& enterprise) const;
};
template <> struct consume<Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager> { template <typename D> using type = consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentManager<D>; };

template <typename D>
struct consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentResult
{
    Windows::Phone::Management::Deployment::Enterprise EnrolledEnterprise() const;
    Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus Status() const;
};
template <> struct consume<Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult> { template <typename D> using type = consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentResult<D>; };

template <typename D>
struct consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> AddPackageAsync(param::hstring const& title, Windows::Foundation::Uri const& sourceLocation) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> AddPackageAsync(param::hstring const& title, Windows::Foundation::Uri const& sourceLocation, param::hstring const& instanceId, param::hstring const& offerId, Windows::Foundation::Uri const& license) const;
    Windows::Foundation::Collections::IIterable<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> GetPendingPackageInstalls() const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackagesForCurrentPublisher() const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackages() const;
};
template <> struct consume<Windows::Phone::Management::Deployment::IInstallationManagerStatics> { template <typename D> using type = consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics<D>; };

template <typename D>
struct consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics2
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> RemovePackageAsync(param::hstring const& packageFullName, Windows::Management::Deployment::RemovalOptions const& removalOptions) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> RegisterPackageAsync(Windows::Foundation::Uri const& manifestUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher) const;
};
template <> struct consume<Windows::Phone::Management::Deployment::IInstallationManagerStatics2> { template <typename D> using type = consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics2<D>; };

template <typename D>
struct consume_Windows_Phone_Management_Deployment_IPackageInstallResult
{
    hstring ProductId() const;
    Windows::Management::Deployment::PackageInstallState InstallState() const;
};
template <> struct consume<Windows::Phone::Management::Deployment::IPackageInstallResult> { template <typename D> using type = consume_Windows_Phone_Management_Deployment_IPackageInstallResult<D>; };

template <typename D>
struct consume_Windows_Phone_Management_Deployment_IPackageInstallResult2
{
    hstring ErrorText() const;
};
template <> struct consume<Windows::Phone::Management::Deployment::IPackageInstallResult2> { template <typename D> using type = consume_Windows_Phone_Management_Deployment_IPackageInstallResult2<D>; };

template <> struct abi<Windows::Phone::Management::Deployment::IEnterprise>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_WorkplaceId(int32_t* value) = 0;
    virtual HRESULT __stdcall get_EnrollmentValidFrom(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_EnrollmentValidTo(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Phone::Management::Deployment::EnterpriseStatus>* value) = 0;
};};

template <> struct abi<Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EnrolledEnterprises(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_CurrentEnterprise(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ValidateEnterprisesAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestEnrollmentAsync(HSTRING enrollmentToken, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestUnenrollmentAsync(::IUnknown* enterprise, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EnrolledEnterprise(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus>* value) = 0;
};};

template <> struct abi<Windows::Phone::Management::Deployment::IInstallationManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddPackageAsync(HSTRING title, ::IUnknown* sourceLocation, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall AddPackagePreloadedAsync(HSTRING title, ::IUnknown* sourceLocation, HSTRING instanceId, HSTRING offerId, ::IUnknown* license, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall GetPendingPackageInstalls(::IUnknown** items) = 0;
    virtual HRESULT __stdcall FindPackagesForCurrentPublisher(::IUnknown** items) = 0;
    virtual HRESULT __stdcall FindPackages(::IUnknown** items) = 0;
};};

template <> struct abi<Windows::Phone::Management::Deployment::IInstallationManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RemovePackageAsync(HSTRING packageFullName, abi_t<Windows::Management::Deployment::RemovalOptions> removalOptions, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall RegisterPackageAsync(::IUnknown* manifestUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall FindPackagesByNamePublisher(HSTRING packageName, HSTRING packagePublisher, ::IUnknown** items) = 0;
};};

template <> struct abi<Windows::Phone::Management::Deployment::IPackageInstallResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProductId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_InstallState(abi_t<Windows::Management::Deployment::PackageInstallState>* value) = 0;
};};

template <> struct abi<Windows::Phone::Management::Deployment::IPackageInstallResult2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ErrorText(HSTRING* value) = 0;
};};

}
