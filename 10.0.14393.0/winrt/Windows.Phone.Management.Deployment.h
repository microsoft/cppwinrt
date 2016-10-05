// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Management.Deployment.3.h"
#include "internal/Windows.Phone.Management.Deployment.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Phone::Management::Deployment::IEnterprise> : produce_base<D, Windows::Phone::Management::Deployment::IEnterprise>
{
    HRESULT __stdcall get_Id(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall get_WorkplaceId(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WorkplaceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnrollmentValidFrom(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnrollmentValidFrom());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnrollmentValidTo(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnrollmentValidTo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Phone::Management::Deployment::EnterpriseStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
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
    HRESULT __stdcall get_EnrolledEnterprises(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Phone::Management::Deployment::Enterprise>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().EnrolledEnterprises());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentEnterprise(abi_arg_out<Windows::Phone::Management::Deployment::IEnterprise> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CurrentEnterprise());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ValidateEnterprisesAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ValidateEnterprisesAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestEnrollmentAsync(abi_arg_in<hstring> enrollmentToken, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestEnrollmentAsync(*reinterpret_cast<const hstring *>(&enrollmentToken)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestUnenrollmentAsync(abi_arg_in<Windows::Phone::Management::Deployment::IEnterprise> enterprise, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestUnenrollmentAsync(*reinterpret_cast<const Windows::Phone::Management::Deployment::Enterprise *>(&enterprise)));
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
    HRESULT __stdcall get_EnrolledEnterprise(abi_arg_out<Windows::Phone::Management::Deployment::IEnterprise> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().EnrolledEnterprise());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
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
    HRESULT __stdcall abi_AddPackageAsync(abi_arg_in<hstring> title, abi_arg_in<Windows::Foundation::IUriRuntimeClass> sourceLocation, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().AddPackageAsync(*reinterpret_cast<const hstring *>(&title), *reinterpret_cast<const Windows::Foundation::Uri *>(&sourceLocation)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddPackagePreloadedAsync(abi_arg_in<hstring> title, abi_arg_in<Windows::Foundation::IUriRuntimeClass> sourceLocation, abi_arg_in<hstring> instanceId, abi_arg_in<hstring> offerId, abi_arg_in<Windows::Foundation::IUriRuntimeClass> license, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().AddPackageAsync(*reinterpret_cast<const hstring *>(&title), *reinterpret_cast<const Windows::Foundation::Uri *>(&sourceLocation), *reinterpret_cast<const hstring *>(&instanceId), *reinterpret_cast<const hstring *>(&offerId), *reinterpret_cast<const Windows::Foundation::Uri *>(&license)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPendingPackageInstalls(abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>>> items) noexcept override
    {
        try
        {
            *items = detach(this->shim().GetPendingPackageInstalls());
            return S_OK;
        }
        catch (...)
        {
            *items = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesForCurrentPublisher(abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> items) noexcept override
    {
        try
        {
            *items = detach(this->shim().FindPackagesForCurrentPublisher());
            return S_OK;
        }
        catch (...)
        {
            *items = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackages(abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> items) noexcept override
    {
        try
        {
            *items = detach(this->shim().FindPackages());
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
    HRESULT __stdcall abi_RemovePackageAsync(abi_arg_in<hstring> packageFullName, Windows::Management::Deployment::RemovalOptions removalOptions, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().RemovePackageAsync(*reinterpret_cast<const hstring *>(&packageFullName), removalOptions));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterPackageAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> manifestUri, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri>> dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().RegisterPackageAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&manifestUri), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> *>(&dependencyPackageUris), deploymentOptions));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindPackagesByNamePublisher(abi_arg_in<hstring> packageName, abi_arg_in<hstring> packagePublisher, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>> items) noexcept override
    {
        try
        {
            *items = detach(this->shim().FindPackages(*reinterpret_cast<const hstring *>(&packageName), *reinterpret_cast<const hstring *>(&packagePublisher)));
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
    HRESULT __stdcall get_ProductId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProductId());
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
struct produce<D, Windows::Phone::Management::Deployment::IPackageInstallResult2> : produce_base<D, Windows::Phone::Management::Deployment::IPackageInstallResult2>
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
};

}

namespace Windows::Phone::Management::Deployment {

template <typename D> GUID impl_IEnterprise<D>::Id() const
{
    GUID value {};
    check_hresult(static_cast<const IEnterprise &>(static_cast<const D &>(*this))->get_Id(&value));
    return value;
}

template <typename D> hstring impl_IEnterprise<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IEnterprise &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> int32_t impl_IEnterprise<D>::WorkplaceId() const
{
    int32_t value {};
    check_hresult(static_cast<const IEnterprise &>(static_cast<const D &>(*this))->get_WorkplaceId(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IEnterprise<D>::EnrollmentValidFrom() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IEnterprise &>(static_cast<const D &>(*this))->get_EnrollmentValidFrom(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IEnterprise<D>::EnrollmentValidTo() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IEnterprise &>(static_cast<const D &>(*this))->get_EnrollmentValidTo(put(value)));
    return value;
}

template <typename D> Windows::Phone::Management::Deployment::EnterpriseStatus impl_IEnterprise<D>::Status() const
{
    Windows::Phone::Management::Deployment::EnterpriseStatus value {};
    check_hresult(static_cast<const IEnterprise &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Phone::Management::Deployment::Enterprise> impl_IEnterpriseEnrollmentManager<D>::EnrolledEnterprises() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Management::Deployment::Enterprise> result;
    check_hresult(static_cast<const IEnterpriseEnrollmentManager &>(static_cast<const D &>(*this))->get_EnrolledEnterprises(put(result)));
    return result;
}

template <typename D> Windows::Phone::Management::Deployment::Enterprise impl_IEnterpriseEnrollmentManager<D>::CurrentEnterprise() const
{
    Windows::Phone::Management::Deployment::Enterprise result { nullptr };
    check_hresult(static_cast<const IEnterpriseEnrollmentManager &>(static_cast<const D &>(*this))->get_CurrentEnterprise(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEnterpriseEnrollmentManager<D>::ValidateEnterprisesAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEnterpriseEnrollmentManager &>(static_cast<const D &>(*this))->abi_ValidateEnterprisesAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> impl_IEnterpriseEnrollmentManager<D>::RequestEnrollmentAsync(hstring_ref enrollmentToken) const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> result;
    check_hresult(static_cast<const IEnterpriseEnrollmentManager &>(static_cast<const D &>(*this))->abi_RequestEnrollmentAsync(get(enrollmentToken), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IEnterpriseEnrollmentManager<D>::RequestUnenrollmentAsync(const Windows::Phone::Management::Deployment::Enterprise & enterprise) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IEnterpriseEnrollmentManager &>(static_cast<const D &>(*this))->abi_RequestUnenrollmentAsync(get(enterprise), put(result)));
    return result;
}

template <typename D> hstring impl_IPackageInstallResult<D>::ProductId() const
{
    hstring value;
    check_hresult(static_cast<const IPackageInstallResult &>(static_cast<const D &>(*this))->get_ProductId(put(value)));
    return value;
}

template <typename D> Windows::Management::Deployment::PackageInstallState impl_IPackageInstallResult<D>::InstallState() const
{
    Windows::Management::Deployment::PackageInstallState value {};
    check_hresult(static_cast<const IPackageInstallResult &>(static_cast<const D &>(*this))->get_InstallState(&value));
    return value;
}

template <typename D> hstring impl_IPackageInstallResult2<D>::ErrorText() const
{
    hstring value;
    check_hresult(static_cast<const IPackageInstallResult2 &>(static_cast<const D &>(*this))->get_ErrorText(put(value)));
    return value;
}

template <typename D> Windows::Phone::Management::Deployment::Enterprise impl_IEnterpriseEnrollmentResult<D>::EnrolledEnterprise() const
{
    Windows::Phone::Management::Deployment::Enterprise result { nullptr };
    check_hresult(static_cast<const IEnterpriseEnrollmentResult &>(static_cast<const D &>(*this))->get_EnrolledEnterprise(put(result)));
    return result;
}

template <typename D> Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus impl_IEnterpriseEnrollmentResult<D>::Status() const
{
    Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus value {};
    check_hresult(static_cast<const IEnterpriseEnrollmentResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> impl_IInstallationManagerStatics<D>::AddPackageAsync(hstring_ref title, const Windows::Foundation::Uri & sourceLocation) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> asyncInfo;
    check_hresult(static_cast<const IInstallationManagerStatics &>(static_cast<const D &>(*this))->abi_AddPackageAsync(get(title), get(sourceLocation), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> impl_IInstallationManagerStatics<D>::AddPackageAsync(hstring_ref title, const Windows::Foundation::Uri & sourceLocation, hstring_ref instanceId, hstring_ref offerId, const Windows::Foundation::Uri & license) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> asyncInfo;
    check_hresult(static_cast<const IInstallationManagerStatics &>(static_cast<const D &>(*this))->abi_AddPackagePreloadedAsync(get(title), get(sourceLocation), get(instanceId), get(offerId), get(license), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> impl_IInstallationManagerStatics<D>::GetPendingPackageInstalls() const
{
    Windows::Foundation::Collections::IIterable<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> items;
    check_hresult(static_cast<const IInstallationManagerStatics &>(static_cast<const D &>(*this))->abi_GetPendingPackageInstalls(put(items)));
    return items;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IInstallationManagerStatics<D>::FindPackagesForCurrentPublisher() const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> items;
    check_hresult(static_cast<const IInstallationManagerStatics &>(static_cast<const D &>(*this))->abi_FindPackagesForCurrentPublisher(put(items)));
    return items;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IInstallationManagerStatics<D>::FindPackages() const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> items;
    check_hresult(static_cast<const IInstallationManagerStatics &>(static_cast<const D &>(*this))->abi_FindPackages(put(items)));
    return items;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> impl_IInstallationManagerStatics2<D>::RemovePackageAsync(hstring_ref packageFullName, Windows::Management::Deployment::RemovalOptions removalOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> asyncInfo;
    check_hresult(static_cast<const IInstallationManagerStatics2 &>(static_cast<const D &>(*this))->abi_RemovePackageAsync(get(packageFullName), removalOptions, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> impl_IInstallationManagerStatics2<D>::RegisterPackageAsync(const Windows::Foundation::Uri & manifestUri, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> asyncInfo;
    check_hresult(static_cast<const IInstallationManagerStatics2 &>(static_cast<const D &>(*this))->abi_RegisterPackageAsync(get(manifestUri), get(dependencyPackageUris), deploymentOptions, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> impl_IInstallationManagerStatics2<D>::FindPackages(hstring_ref packageName, hstring_ref packagePublisher) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> items;
    check_hresult(static_cast<const IInstallationManagerStatics2 &>(static_cast<const D &>(*this))->abi_FindPackagesByNamePublisher(get(packageName), get(packagePublisher), put(items)));
    return items;
}

inline Windows::Foundation::Collections::IVectorView<Windows::Phone::Management::Deployment::Enterprise> EnterpriseEnrollmentManager::EnrolledEnterprises()
{
    return get_activation_factory<EnterpriseEnrollmentManager, IEnterpriseEnrollmentManager>().EnrolledEnterprises();
}

inline Windows::Phone::Management::Deployment::Enterprise EnterpriseEnrollmentManager::CurrentEnterprise()
{
    return get_activation_factory<EnterpriseEnrollmentManager, IEnterpriseEnrollmentManager>().CurrentEnterprise();
}

inline Windows::Foundation::IAsyncAction EnterpriseEnrollmentManager::ValidateEnterprisesAsync()
{
    return get_activation_factory<EnterpriseEnrollmentManager, IEnterpriseEnrollmentManager>().ValidateEnterprisesAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> EnterpriseEnrollmentManager::RequestEnrollmentAsync(hstring_ref enrollmentToken)
{
    return get_activation_factory<EnterpriseEnrollmentManager, IEnterpriseEnrollmentManager>().RequestEnrollmentAsync(enrollmentToken);
}

inline Windows::Foundation::IAsyncOperation<bool> EnterpriseEnrollmentManager::RequestUnenrollmentAsync(const Windows::Phone::Management::Deployment::Enterprise & enterprise)
{
    return get_activation_factory<EnterpriseEnrollmentManager, IEnterpriseEnrollmentManager>().RequestUnenrollmentAsync(enterprise);
}

inline Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> InstallationManager::AddPackageAsync(hstring_ref title, const Windows::Foundation::Uri & sourceLocation)
{
    return get_activation_factory<InstallationManager, IInstallationManagerStatics>().AddPackageAsync(title, sourceLocation);
}

inline Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> InstallationManager::AddPackageAsync(hstring_ref title, const Windows::Foundation::Uri & sourceLocation, hstring_ref instanceId, hstring_ref offerId, const Windows::Foundation::Uri & license)
{
    return get_activation_factory<InstallationManager, IInstallationManagerStatics>().AddPackageAsync(title, sourceLocation, instanceId, offerId, license);
}

inline Windows::Foundation::Collections::IIterable<Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>> InstallationManager::GetPendingPackageInstalls()
{
    return get_activation_factory<InstallationManager, IInstallationManagerStatics>().GetPendingPackageInstalls();
}

inline Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> InstallationManager::FindPackagesForCurrentPublisher()
{
    return get_activation_factory<InstallationManager, IInstallationManagerStatics>().FindPackagesForCurrentPublisher();
}

inline Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> InstallationManager::FindPackages()
{
    return get_activation_factory<InstallationManager, IInstallationManagerStatics>().FindPackages();
}

inline Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> InstallationManager::RemovePackageAsync(hstring_ref packageFullName, Windows::Management::Deployment::RemovalOptions removalOptions)
{
    return get_activation_factory<InstallationManager, IInstallationManagerStatics2>().RemovePackageAsync(packageFullName, removalOptions);
}

inline Windows::Foundation::IAsyncOperationWithProgress<Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t> InstallationManager::RegisterPackageAsync(const Windows::Foundation::Uri & manifestUri, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions)
{
    return get_activation_factory<InstallationManager, IInstallationManagerStatics2>().RegisterPackageAsync(manifestUri, dependencyPackageUris, deploymentOptions);
}

inline Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> InstallationManager::FindPackages(hstring_ref packageName, hstring_ref packagePublisher)
{
    return get_activation_factory<InstallationManager, IInstallationManagerStatics2>().FindPackages(packageName, packagePublisher);
}

}

}
