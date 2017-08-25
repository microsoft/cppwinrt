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
#include "winrt/impl/Windows.Phone.Management.Deployment.2.h"

namespace winrt::impl {

template <typename D> GUID consume_Windows_Phone_Management_Deployment_IEnterprise<D>::Id() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IEnterprise)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Management_Deployment_IEnterprise<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IEnterprise)->get_Name(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Phone_Management_Deployment_IEnterprise<D>::WorkplaceId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IEnterprise)->get_WorkplaceId(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Phone_Management_Deployment_IEnterprise<D>::EnrollmentValidFrom() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IEnterprise)->get_EnrollmentValidFrom(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Phone_Management_Deployment_IEnterprise<D>::EnrollmentValidTo() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IEnterprise)->get_EnrollmentValidTo(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::Management::Deployment::EnterpriseStatus consume_Windows_Phone_Management_Deployment_IEnterprise<D>::Status() const
{
    Windows::Phone::Management::Deployment::EnterpriseStatus value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IEnterprise)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Phone::Management::Deployment::Enterprise> consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentManager<D>::EnrolledEnterprises() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Management::Deployment::Enterprise> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager)->get_EnrolledEnterprises(put_abi(result)));
    return result;
}

template <typename D> Windows::Phone::Management::Deployment::Enterprise consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentManager<D>::CurrentEnterprise() const
{
    Windows::Phone::Management::Deployment::Enterprise result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager)->get_CurrentEnterprise(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentManager<D>::ValidateEnterprisesAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager)->ValidateEnterprisesAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentManager<D>::RequestEnrollmentAsync(param::hstring const& enrollmentToken) const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager)->RequestEnrollmentAsync(get_abi(enrollmentToken), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentManager<D>::RequestUnenrollmentAsync(Windows::Phone::Management::Deployment::Enterprise const& enterprise) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager)->RequestUnenrollmentAsync(get_abi(enterprise), put_abi(result)));
    return result;
}

template <typename D> Windows::Phone::Management::Deployment::Enterprise consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentResult<D>::EnrolledEnterprise() const
{
    Windows::Phone::Management::Deployment::Enterprise result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult)->get_EnrolledEnterprise(put_abi(result)));
    return result;
}

template <typename D> Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentResult<D>::Status() const
{
    Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics<D>::AddPackageAsync(param::hstring const& title, Windows::Foundation::Uri const& sourceLocation) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IInstallationManagerStatics)->AddPackageAsync(get_abi(title), get_abi(sourceLocation), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics<D>::AddPackageAsync(param::hstring const& title, Windows::Foundation::Uri const& sourceLocation, param::hstring const& instanceId, param::hstring const& offerId, Windows::Foundation::Uri const& license) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IInstallationManagerStatics)->AddPackagePreloadedAsync(get_abi(title), get_abi(sourceLocation), get_abi(instanceId), get_abi(offerId), get_abi(license), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics<D>::GetPendingPackageInstalls() const
{
    Windows::Foundation::Collections::IIterable<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> items{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IInstallationManagerStatics)->GetPendingPackageInstalls(put_abi(items)));
    return items;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics<D>::FindPackagesForCurrentPublisher() const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> items{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IInstallationManagerStatics)->FindPackagesForCurrentPublisher(put_abi(items)));
    return items;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics<D>::FindPackages() const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> items{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IInstallationManagerStatics)->FindPackages(put_abi(items)));
    return items;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics2<D>::RemovePackageAsync(param::hstring const& packageFullName, Windows::Management::Deployment::RemovalOptions const& removalOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IInstallationManagerStatics2)->RemovePackageAsync(get_abi(packageFullName), get_abi(removalOptions), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics2<D>::RegisterPackageAsync(Windows::Foundation::Uri const& manifestUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IInstallationManagerStatics2)->RegisterPackageAsync(get_abi(manifestUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics2<D>::FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> items{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IInstallationManagerStatics2)->FindPackagesByNamePublisher(get_abi(packageName), get_abi(packagePublisher), put_abi(items)));
    return items;
}

template <typename D> hstring consume_Windows_Phone_Management_Deployment_IPackageInstallResult<D>::ProductId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IPackageInstallResult)->get_ProductId(put_abi(value)));
    return value;
}

template <typename D> Windows::Management::Deployment::PackageInstallState consume_Windows_Phone_Management_Deployment_IPackageInstallResult<D>::InstallState() const
{
    Windows::Management::Deployment::PackageInstallState value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IPackageInstallResult)->get_InstallState(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Management_Deployment_IPackageInstallResult2<D>::ErrorText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Management::Deployment::IPackageInstallResult2)->get_ErrorText(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Phone::Management::Deployment::IEnterprise> : produce_base<D, Windows::Phone::Management::Deployment::IEnterprise>
{
    HRESULT __stdcall get_Id(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall get_WorkplaceId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WorkplaceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnrollmentValidFrom(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnrollmentValidFrom());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnrollmentValidTo(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnrollmentValidTo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Phone::Management::Deployment::EnterpriseStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager> : produce_base<D, Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager>
{
    HRESULT __stdcall get_EnrolledEnterprises(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().EnrolledEnterprises());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentEnterprise(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CurrentEnterprise());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ValidateEnterprisesAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ValidateEnterprisesAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestEnrollmentAsync(HSTRING enrollmentToken, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestEnrollmentAsync(*reinterpret_cast<hstring const*>(&enrollmentToken)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestUnenrollmentAsync(::IUnknown* enterprise, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestUnenrollmentAsync(*reinterpret_cast<Windows::Phone::Management::Deployment::Enterprise const*>(&enterprise)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult> : produce_base<D, Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult>
{
    HRESULT __stdcall get_EnrolledEnterprise(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().EnrolledEnterprise());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Management::Deployment::IInstallationManagerStatics> : produce_base<D, Windows::Phone::Management::Deployment::IInstallationManagerStatics>
{
    HRESULT __stdcall AddPackageAsync(HSTRING title, ::IUnknown* sourceLocation, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().AddPackageAsync(*reinterpret_cast<hstring const*>(&title), *reinterpret_cast<Windows::Foundation::Uri const*>(&sourceLocation)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddPackagePreloadedAsync(HSTRING title, ::IUnknown* sourceLocation, HSTRING instanceId, HSTRING offerId, ::IUnknown* license, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().AddPackageAsync(*reinterpret_cast<hstring const*>(&title), *reinterpret_cast<Windows::Foundation::Uri const*>(&sourceLocation), *reinterpret_cast<hstring const*>(&instanceId), *reinterpret_cast<hstring const*>(&offerId), *reinterpret_cast<Windows::Foundation::Uri const*>(&license)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPendingPackageInstalls(::IUnknown** items) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *items = detach_abi(this->shim().GetPendingPackageInstalls());
            return S_OK;
        }
        catch (...)
        {
            *items = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesForCurrentPublisher(::IUnknown** items) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *items = detach_abi(this->shim().FindPackagesForCurrentPublisher());
            return S_OK;
        }
        catch (...)
        {
            *items = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackages(::IUnknown** items) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *items = detach_abi(this->shim().FindPackages());
            return S_OK;
        }
        catch (...)
        {
            *items = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Management::Deployment::IInstallationManagerStatics2> : produce_base<D, Windows::Phone::Management::Deployment::IInstallationManagerStatics2>
{
    HRESULT __stdcall RemovePackageAsync(HSTRING packageFullName, abi_t<Windows::Management::Deployment::RemovalOptions> removalOptions, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().RemovePackageAsync(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<Windows::Management::Deployment::RemovalOptions const*>(&removalOptions)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterPackageAsync(::IUnknown* manifestUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().RegisterPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&manifestUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByNamePublisher(HSTRING packageName, HSTRING packagePublisher, ::IUnknown** items) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *items = detach_abi(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            *items = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Management::Deployment::IPackageInstallResult> : produce_base<D, Windows::Phone::Management::Deployment::IPackageInstallResult>
{
    HRESULT __stdcall get_ProductId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProductId());
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
struct produce<D, Windows::Phone::Management::Deployment::IPackageInstallResult2> : produce_base<D, Windows::Phone::Management::Deployment::IPackageInstallResult2>
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
};

}

WINRT_EXPORT namespace winrt::Windows::Phone::Management::Deployment {

inline Windows::Foundation::Collections::IVectorView<Windows::Phone::Management::Deployment::Enterprise> EnterpriseEnrollmentManager::EnrolledEnterprises()
{
    return get_activation_factory<EnterpriseEnrollmentManager, Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager>().EnrolledEnterprises();
}

inline Windows::Phone::Management::Deployment::Enterprise EnterpriseEnrollmentManager::CurrentEnterprise()
{
    return get_activation_factory<EnterpriseEnrollmentManager, Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager>().CurrentEnterprise();
}

inline Windows::Foundation::IAsyncAction EnterpriseEnrollmentManager::ValidateEnterprisesAsync()
{
    return get_activation_factory<EnterpriseEnrollmentManager, Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager>().ValidateEnterprisesAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> EnterpriseEnrollmentManager::RequestEnrollmentAsync(param::hstring const& enrollmentToken)
{
    return get_activation_factory<EnterpriseEnrollmentManager, Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager>().RequestEnrollmentAsync(enrollmentToken);
}

inline Windows::Foundation::IAsyncOperation<bool> EnterpriseEnrollmentManager::RequestUnenrollmentAsync(Windows::Phone::Management::Deployment::Enterprise const& enterprise)
{
    return get_activation_factory<EnterpriseEnrollmentManager, Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager>().RequestUnenrollmentAsync(enterprise);
}

inline Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> InstallationManager::AddPackageAsync(param::hstring const& title, Windows::Foundation::Uri const& sourceLocation)
{
    return get_activation_factory<InstallationManager, Windows::Phone::Management::Deployment::IInstallationManagerStatics>().AddPackageAsync(title, sourceLocation);
}

inline Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> InstallationManager::AddPackageAsync(param::hstring const& title, Windows::Foundation::Uri const& sourceLocation, param::hstring const& instanceId, param::hstring const& offerId, Windows::Foundation::Uri const& license)
{
    return get_activation_factory<InstallationManager, Windows::Phone::Management::Deployment::IInstallationManagerStatics>().AddPackageAsync(title, sourceLocation, instanceId, offerId, license);
}

inline Windows::Foundation::Collections::IIterable<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> InstallationManager::GetPendingPackageInstalls()
{
    return get_activation_factory<InstallationManager, Windows::Phone::Management::Deployment::IInstallationManagerStatics>().GetPendingPackageInstalls();
}

inline Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> InstallationManager::FindPackagesForCurrentPublisher()
{
    return get_activation_factory<InstallationManager, Windows::Phone::Management::Deployment::IInstallationManagerStatics>().FindPackagesForCurrentPublisher();
}

inline Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> InstallationManager::FindPackages()
{
    return get_activation_factory<InstallationManager, Windows::Phone::Management::Deployment::IInstallationManagerStatics>().FindPackages();
}

inline Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> InstallationManager::RemovePackageAsync(param::hstring const& packageFullName, Windows::Management::Deployment::RemovalOptions const& removalOptions)
{
    return get_activation_factory<InstallationManager, Windows::Phone::Management::Deployment::IInstallationManagerStatics2>().RemovePackageAsync(packageFullName, removalOptions);
}

inline Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> InstallationManager::RegisterPackageAsync(Windows::Foundation::Uri const& manifestUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions)
{
    return get_activation_factory<InstallationManager, Windows::Phone::Management::Deployment::IInstallationManagerStatics2>().RegisterPackageAsync(manifestUri, dependencyPackageUris, deploymentOptions);
}

inline Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> InstallationManager::FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher)
{
    return get_activation_factory<InstallationManager, Windows::Phone::Management::Deployment::IInstallationManagerStatics2>().FindPackages(packageName, packagePublisher);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Phone::Management::Deployment::IEnterprise> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Management::Deployment::IEnterprise> {};

template<> struct hash<winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager> {};

template<> struct hash<winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult> {};

template<> struct hash<winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics> {};

template<> struct hash<winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics2> {};

template<> struct hash<winrt::Windows::Phone::Management::Deployment::IPackageInstallResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Management::Deployment::IPackageInstallResult> {};

template<> struct hash<winrt::Windows::Phone::Management::Deployment::IPackageInstallResult2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Management::Deployment::IPackageInstallResult2> {};

template<> struct hash<winrt::Windows::Phone::Management::Deployment::Enterprise> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Management::Deployment::Enterprise> {};

template<> struct hash<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentManager> {};

template<> struct hash<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> {};

template<> struct hash<winrt::Windows::Phone::Management::Deployment::InstallationManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Management::Deployment::InstallationManager> {};

template<> struct hash<winrt::Windows::Phone::Management::Deployment::PackageInstallResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Management::Deployment::PackageInstallResult> {};

}

WINRT_WARNING_POP
