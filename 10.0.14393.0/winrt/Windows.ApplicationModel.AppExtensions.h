// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.ApplicationModel.AppExtensions.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::AppExtensions::IAppExtension> : produce_base<D, Windows::ApplicationModel::AppExtensions::IAppExtension>
{
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppInfo(abi_arg_out<Windows::ApplicationModel::IAppInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetExtensionPropertiesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetExtensionPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPublicFolderAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPublicFolderAsync());
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
struct produce<D, Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog> : produce_base<D, Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>
{
    HRESULT __stdcall abi_FindAllAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestRemovePackageAsync(abi_arg_in<hstring> packageFullName, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestRemovePackageAsync(*reinterpret_cast<const hstring *>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageInstalled(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PackageInstalled(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageInstalled(event_token token) noexcept override
    {
        try
        {
            this->shim().PackageInstalled(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageUpdating(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PackageUpdating(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageUpdating(event_token token) noexcept override
    {
        try
        {
            this->shim().PackageUpdating(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageUpdated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PackageUpdated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageUpdated(event_token token) noexcept override
    {
        try
        {
            this->shim().PackageUpdated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageUninstalling(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PackageUninstalling(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageUninstalling(event_token token) noexcept override
    {
        try
        {
            this->shim().PackageUninstalling(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageStatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PackageStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageStatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PackageStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics> : produce_base<D, Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>
{
    HRESULT __stdcall abi_Open(abi_arg_in<hstring> appExtensionName, abi_arg_out<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Open(*reinterpret_cast<const hstring *>(&appExtensionName)));
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
struct produce<D, Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs> : produce_base<D, Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs>
{
    HRESULT __stdcall get_AppExtensionName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppExtensionName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Extensions(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension>> values) noexcept override
    {
        try
        {
            *values = detach(this->shim().Extensions());
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs> : produce_base<D, Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs>
{
    HRESULT __stdcall get_AppExtensionName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppExtensionName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Package());
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
struct produce<D, Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs> : produce_base<D, Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs>
{
    HRESULT __stdcall get_AppExtensionName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppExtensionName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Package());
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
struct produce<D, Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs> : produce_base<D, Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs>
{
    HRESULT __stdcall get_AppExtensionName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppExtensionName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Extensions(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension>> values) noexcept override
    {
        try
        {
            *values = detach(this->shim().Extensions());
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs> : produce_base<D, Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs>
{
    HRESULT __stdcall get_AppExtensionName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppExtensionName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Package());
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

namespace Windows::ApplicationModel::AppExtensions {

template <typename D> Windows::ApplicationModel::AppExtensions::AppExtensionCatalog impl_IAppExtensionCatalogStatics<D>::Open(hstring_ref appExtensionName) const
{
    Windows::ApplicationModel::AppExtensions::AppExtensionCatalog value { nullptr };
    check_hresult(static_cast<const IAppExtensionCatalogStatics &>(static_cast<const D &>(*this))->abi_Open(get(appExtensionName), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension>> impl_IAppExtensionCatalog<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension>> operation;
    check_hresult(static_cast<const IAppExtensionCatalog &>(static_cast<const D &>(*this))->abi_FindAllAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppExtensionCatalog<D>::RequestRemovePackageAsync(hstring_ref packageFullName) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IAppExtensionCatalog &>(static_cast<const D &>(*this))->abi_RequestRemovePackageAsync(get(packageFullName), put(operation)));
    return operation;
}

template <typename D> event_token impl_IAppExtensionCatalog<D>::PackageInstalled(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAppExtensionCatalog &>(static_cast<const D &>(*this))->add_PackageInstalled(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppExtensionCatalog> impl_IAppExtensionCatalog<D>::PackageInstalled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppExtensionCatalog>(this, &ABI::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog::remove_PackageInstalled, PackageInstalled(handler));
}

template <typename D> void impl_IAppExtensionCatalog<D>::PackageInstalled(event_token token) const
{
    check_hresult(static_cast<const IAppExtensionCatalog &>(static_cast<const D &>(*this))->remove_PackageInstalled(token));
}

template <typename D> event_token impl_IAppExtensionCatalog<D>::PackageUpdating(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAppExtensionCatalog &>(static_cast<const D &>(*this))->add_PackageUpdating(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppExtensionCatalog> impl_IAppExtensionCatalog<D>::PackageUpdating(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppExtensionCatalog>(this, &ABI::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog::remove_PackageUpdating, PackageUpdating(handler));
}

template <typename D> void impl_IAppExtensionCatalog<D>::PackageUpdating(event_token token) const
{
    check_hresult(static_cast<const IAppExtensionCatalog &>(static_cast<const D &>(*this))->remove_PackageUpdating(token));
}

template <typename D> event_token impl_IAppExtensionCatalog<D>::PackageUpdated(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAppExtensionCatalog &>(static_cast<const D &>(*this))->add_PackageUpdated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppExtensionCatalog> impl_IAppExtensionCatalog<D>::PackageUpdated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppExtensionCatalog>(this, &ABI::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog::remove_PackageUpdated, PackageUpdated(handler));
}

template <typename D> void impl_IAppExtensionCatalog<D>::PackageUpdated(event_token token) const
{
    check_hresult(static_cast<const IAppExtensionCatalog &>(static_cast<const D &>(*this))->remove_PackageUpdated(token));
}

template <typename D> event_token impl_IAppExtensionCatalog<D>::PackageUninstalling(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAppExtensionCatalog &>(static_cast<const D &>(*this))->add_PackageUninstalling(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppExtensionCatalog> impl_IAppExtensionCatalog<D>::PackageUninstalling(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppExtensionCatalog>(this, &ABI::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog::remove_PackageUninstalling, PackageUninstalling(handler));
}

template <typename D> void impl_IAppExtensionCatalog<D>::PackageUninstalling(event_token token) const
{
    check_hresult(static_cast<const IAppExtensionCatalog &>(static_cast<const D &>(*this))->remove_PackageUninstalling(token));
}

template <typename D> event_token impl_IAppExtensionCatalog<D>::PackageStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAppExtensionCatalog &>(static_cast<const D &>(*this))->add_PackageStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppExtensionCatalog> impl_IAppExtensionCatalog<D>::PackageStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppExtensionCatalog>(this, &ABI::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog::remove_PackageStatusChanged, PackageStatusChanged(handler));
}

template <typename D> void impl_IAppExtensionCatalog<D>::PackageStatusChanged(event_token token) const
{
    check_hresult(static_cast<const IAppExtensionCatalog &>(static_cast<const D &>(*this))->remove_PackageStatusChanged(token));
}

template <typename D> hstring impl_IAppExtension<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IAppExtension &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IAppExtension<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IAppExtension &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IAppExtension<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IAppExtension &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IAppExtension<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(static_cast<const IAppExtension &>(static_cast<const D &>(*this))->get_Package(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::AppInfo impl_IAppExtension<D>::AppInfo() const
{
    Windows::ApplicationModel::AppInfo value { nullptr };
    check_hresult(static_cast<const IAppExtension &>(static_cast<const D &>(*this))->get_AppInfo(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet> impl_IAppExtension<D>::GetExtensionPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet> operation;
    check_hresult(static_cast<const IAppExtension &>(static_cast<const D &>(*this))->abi_GetExtensionPropertiesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> impl_IAppExtension<D>::GetPublicFolderAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation;
    check_hresult(static_cast<const IAppExtension &>(static_cast<const D &>(*this))->abi_GetPublicFolderAsync(put(operation)));
    return operation;
}

template <typename D> hstring impl_IAppExtensionPackageInstalledEventArgs<D>::AppExtensionName() const
{
    hstring value;
    check_hresult(static_cast<const IAppExtensionPackageInstalledEventArgs &>(static_cast<const D &>(*this))->get_AppExtensionName(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IAppExtensionPackageInstalledEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(static_cast<const IAppExtensionPackageInstalledEventArgs &>(static_cast<const D &>(*this))->get_Package(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension> impl_IAppExtensionPackageInstalledEventArgs<D>::Extensions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension> values;
    check_hresult(static_cast<const IAppExtensionPackageInstalledEventArgs &>(static_cast<const D &>(*this))->get_Extensions(put(values)));
    return values;
}

template <typename D> hstring impl_IAppExtensionPackageUpdatingEventArgs<D>::AppExtensionName() const
{
    hstring value;
    check_hresult(static_cast<const IAppExtensionPackageUpdatingEventArgs &>(static_cast<const D &>(*this))->get_AppExtensionName(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IAppExtensionPackageUpdatingEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(static_cast<const IAppExtensionPackageUpdatingEventArgs &>(static_cast<const D &>(*this))->get_Package(put(value)));
    return value;
}

template <typename D> hstring impl_IAppExtensionPackageUpdatedEventArgs<D>::AppExtensionName() const
{
    hstring value;
    check_hresult(static_cast<const IAppExtensionPackageUpdatedEventArgs &>(static_cast<const D &>(*this))->get_AppExtensionName(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IAppExtensionPackageUpdatedEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(static_cast<const IAppExtensionPackageUpdatedEventArgs &>(static_cast<const D &>(*this))->get_Package(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension> impl_IAppExtensionPackageUpdatedEventArgs<D>::Extensions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension> values;
    check_hresult(static_cast<const IAppExtensionPackageUpdatedEventArgs &>(static_cast<const D &>(*this))->get_Extensions(put(values)));
    return values;
}

template <typename D> hstring impl_IAppExtensionPackageUninstallingEventArgs<D>::AppExtensionName() const
{
    hstring value;
    check_hresult(static_cast<const IAppExtensionPackageUninstallingEventArgs &>(static_cast<const D &>(*this))->get_AppExtensionName(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IAppExtensionPackageUninstallingEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(static_cast<const IAppExtensionPackageUninstallingEventArgs &>(static_cast<const D &>(*this))->get_Package(put(value)));
    return value;
}

template <typename D> hstring impl_IAppExtensionPackageStatusChangedEventArgs<D>::AppExtensionName() const
{
    hstring value;
    check_hresult(static_cast<const IAppExtensionPackageStatusChangedEventArgs &>(static_cast<const D &>(*this))->get_AppExtensionName(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IAppExtensionPackageStatusChangedEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(static_cast<const IAppExtensionPackageStatusChangedEventArgs &>(static_cast<const D &>(*this))->get_Package(put(value)));
    return value;
}

inline Windows::ApplicationModel::AppExtensions::AppExtensionCatalog AppExtensionCatalog::Open(hstring_ref appExtensionName)
{
    return get_activation_factory<AppExtensionCatalog, IAppExtensionCatalogStatics>().Open(appExtensionName);
}

}

}
