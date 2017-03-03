// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.ApplicationModel.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::IAppDisplayInfo> : produce_base<D, Windows::ApplicationModel::IAppDisplayInfo>
{
    HRESULT __stdcall get_DisplayName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLogo(impl::abi_arg_in<Windows::Foundation::Size> size, impl::abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLogo(*reinterpret_cast<const Windows::Foundation::Size *>(&size)));
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
struct produce<D, Windows::ApplicationModel::IAppInfo> : produce_base<D, Windows::ApplicationModel::IAppInfo>
{
    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppUserModelId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppUserModelId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayInfo(impl::abi_arg_out<Windows::ApplicationModel::IAppDisplayInfo> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageFamilyName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PackageFamilyName());
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
struct produce<D, Windows::ApplicationModel::ICameraApplicationManagerStatics> : produce_base<D, Windows::ApplicationModel::ICameraApplicationManagerStatics>
{
    HRESULT __stdcall abi_ShowInstalledApplicationsUI() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowInstalledApplicationsUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IDesignModeStatics> : produce_base<D, Windows::ApplicationModel::IDesignModeStatics>
{
    HRESULT __stdcall get_DesignModeEnabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesignModeEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IEnteredBackgroundEventArgs> : produce_base<D, Windows::ApplicationModel::IEnteredBackgroundEventArgs>
{
    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::IFullTrustProcessLauncherStatics> : produce_base<D, Windows::ApplicationModel::IFullTrustProcessLauncherStatics>
{
    HRESULT __stdcall abi_LaunchFullTrustProcessForCurrentAppAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().LaunchFullTrustProcessForCurrentAppAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchFullTrustProcessForCurrentAppWithParametersAsync(impl::abi_arg_in<hstring> parameterGroupId, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().LaunchFullTrustProcessForCurrentAppAsync(*reinterpret_cast<const hstring *>(&parameterGroupId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchFullTrustProcessForAppAsync(impl::abi_arg_in<hstring> fullTrustPackageRelativeAppId, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().LaunchFullTrustProcessForAppAsync(*reinterpret_cast<const hstring *>(&fullTrustPackageRelativeAppId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchFullTrustProcessForAppWithParametersAsync(impl::abi_arg_in<hstring> fullTrustPackageRelativeAppId, impl::abi_arg_in<hstring> parameterGroupId, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().LaunchFullTrustProcessForAppAsync(*reinterpret_cast<const hstring *>(&fullTrustPackageRelativeAppId), *reinterpret_cast<const hstring *>(&parameterGroupId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::ILeavingBackgroundEventArgs> : produce_base<D, Windows::ApplicationModel::ILeavingBackgroundEventArgs>
{
    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::IPackage> : produce_base<D, Windows::ApplicationModel::IPackage>
{
    HRESULT __stdcall get_Id(impl::abi_arg_out<Windows::ApplicationModel::IPackageId> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstalledLocation(impl::abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstalledLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFramework(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsFramework());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dependencies(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Dependencies());
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
struct produce<D, Windows::ApplicationModel::IPackage2> : produce_base<D, Windows::ApplicationModel::IPackage2>
{
    HRESULT __stdcall get_DisplayName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PublisherDisplayName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PublisherDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Logo(impl::abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsResourcePackage(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsResourcePackage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBundle(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBundle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDevelopmentMode(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDevelopmentMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackage3> : produce_base<D, Windows::ApplicationModel::IPackage3>
{
    HRESULT __stdcall get_Status(impl::abi_arg_out<Windows::ApplicationModel::IPackageStatus> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstalledDate(impl::abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstalledDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAppListEntriesAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAppListEntriesAsync());
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
struct produce<D, Windows::ApplicationModel::IPackage4> : produce_base<D, Windows::ApplicationModel::IPackage4>
{
    HRESULT __stdcall get_SignatureKind(Windows::ApplicationModel::PackageSignatureKind * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignatureKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOptional(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOptional());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_VerifyContentIntegrityAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().VerifyContentIntegrityAsync());
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
struct produce<D, Windows::ApplicationModel::IPackage5> : produce_base<D, Windows::ApplicationModel::IPackage5>
{
    HRESULT __stdcall abi_GetContentGroupsAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetContentGroupsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetContentGroupAsync(impl::abi_arg_in<hstring> name, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageContentGroup>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetContentGroupAsync(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StageContentGroupsAsync(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> names, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StageContentGroupsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&names)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StageContentGroupsWithPriorityAsync(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> names, bool moveToHeadOfQueue, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StageContentGroupsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&names), moveToHeadOfQueue));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetInUseAsync(bool inUse, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetInUseAsync(inUse));
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
struct produce<D, Windows::ApplicationModel::IPackageCatalog> : produce_base<D, Windows::ApplicationModel::IPackageCatalog>
{
    HRESULT __stdcall add_PackageStaging(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PackageStaging(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageStaging(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageStaging(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageInstalling(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PackageInstalling(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageInstalling(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageInstalling(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageUpdating(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PackageUpdating(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> *>(&handler)));
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
            typename D::abi_guard guard(this->shim());
            this->shim().PackageUpdating(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageUninstalling(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PackageUninstalling(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> *>(&handler)));
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
            typename D::abi_guard guard(this->shim());
            this->shim().PackageUninstalling(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageStatusChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PackageStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> *>(&handler)));
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
            typename D::abi_guard guard(this->shim());
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
struct produce<D, Windows::ApplicationModel::IPackageCatalog2> : produce_base<D, Windows::ApplicationModel::IPackageCatalog2>
{
    HRESULT __stdcall add_PackageContentGroupStaging(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageContentGroupStagingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PackageContentGroupStaging(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageContentGroupStagingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageContentGroupStaging(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageContentGroupStaging(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddOptionalPackageAsync(impl::abi_arg_in<hstring> optionalPackageFamilyName, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AddOptionalPackageAsync(*reinterpret_cast<const hstring *>(&optionalPackageFamilyName)));
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
struct produce<D, Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult> : produce_base<D, Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult>
{
    HRESULT __stdcall get_Package(impl::abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(HRESULT * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageCatalogStatics> : produce_base<D, Windows::ApplicationModel::IPackageCatalogStatics>
{
    HRESULT __stdcall abi_OpenForCurrentPackage(impl::abi_arg_out<Windows::ApplicationModel::IPackageCatalog> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenForCurrentPackage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenForCurrentUser(impl::abi_arg_out<Windows::ApplicationModel::IPackageCatalog> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenForCurrentUser());
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
struct produce<D, Windows::ApplicationModel::IPackageContentGroup> : produce_base<D, Windows::ApplicationModel::IPackageContentGroup>
{
    HRESULT __stdcall get_Package(impl::abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_State(Windows::ApplicationModel::PackageContentGroupState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRequired(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRequired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageContentGroupStagingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageContentGroupStagingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
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

    HRESULT __stdcall get_Package(impl::abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(HRESULT * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentGroupName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentGroupName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsContentGroupRequired(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsContentGroupRequired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageContentGroupStatics> : produce_base<D, Windows::ApplicationModel::IPackageContentGroupStatics>
{
    HRESULT __stdcall get_RequiredGroupName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequiredGroupName());
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
struct produce<D, Windows::ApplicationModel::IPackageId> : produce_base<D, Windows::ApplicationModel::IPackageId>
{
    HRESULT __stdcall get_Name(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Version(impl::abi_arg_out<Windows::ApplicationModel::PackageVersion> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Architecture(Windows::System::ProcessorArchitecture * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Architecture());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Publisher(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Publisher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PublisherId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PublisherId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FullName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FamilyName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FamilyName());
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
struct produce<D, Windows::ApplicationModel::IPackageIdWithMetadata> : produce_base<D, Windows::ApplicationModel::IPackageIdWithMetadata>
{
    HRESULT __stdcall get_ProductId(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Author(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Author());
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
struct produce<D, Windows::ApplicationModel::IPackageInstallingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageInstallingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
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

    HRESULT __stdcall get_Package(impl::abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(HRESULT * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStagingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageStagingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
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

    HRESULT __stdcall get_Package(impl::abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(HRESULT * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStatics> : produce_base<D, Windows::ApplicationModel::IPackageStatics>
{
    HRESULT __stdcall get_Current(impl::abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Current());
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
struct produce<D, Windows::ApplicationModel::IPackageStatus> : produce_base<D, Windows::ApplicationModel::IPackageStatus>
{
    HRESULT __stdcall abi_VerifyIsOK(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerifyIsOK());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NotAvailable(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NotAvailable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageOffline(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PackageOffline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataOffline(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataOffline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Disabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Disabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NeedsRemediation(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NeedsRemediation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LicenseIssue(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LicenseIssue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Modified(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Modified());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tampered(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tampered());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DependencyIssue(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DependencyIssue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Servicing(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Servicing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeploymentInProgress(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeploymentInProgress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStatus2> : produce_base<D, Windows::ApplicationModel::IPackageStatus2>
{
    HRESULT __stdcall get_IsPartiallyStaged(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPartiallyStaged());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStatusChangedEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageStatusChangedEventArgs>
{
    HRESULT __stdcall get_Package(impl::abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
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
struct produce<D, Windows::ApplicationModel::IPackageUninstallingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageUninstallingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
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

    HRESULT __stdcall get_Package(impl::abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(HRESULT * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageUpdatingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageUpdatingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
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

    HRESULT __stdcall get_SourcePackage(impl::abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourcePackage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetPackage(impl::abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetPackage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(HRESULT * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageWithMetadata> : produce_base<D, Windows::ApplicationModel::IPackageWithMetadata>
{
    HRESULT __stdcall get_InstallDate(impl::abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstallDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetThumbnailToken(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetThumbnailToken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Launch(impl::abi_arg_in<hstring> parameters) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Launch(*reinterpret_cast<const hstring *>(&parameters));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IStartupTask> : produce_base<D, Windows::ApplicationModel::IStartupTask>
{
    HRESULT __stdcall abi_RequestEnableAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::StartupTaskState>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestEnableAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Disable() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disable();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::ApplicationModel::StartupTaskState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TaskId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TaskId());
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
struct produce<D, Windows::ApplicationModel::IStartupTaskStatics> : produce_base<D, Windows::ApplicationModel::IStartupTaskStatics>
{
    HRESULT __stdcall abi_GetForCurrentPackageAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetForCurrentPackageAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAsync(impl::abi_arg_in<hstring> taskId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAsync(*reinterpret_cast<const hstring *>(&taskId)));
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
struct produce<D, Windows::ApplicationModel::ISuspendingDeferral> : produce_base<D, Windows::ApplicationModel::ISuspendingDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::ISuspendingEventArgs> : produce_base<D, Windows::ApplicationModel::ISuspendingEventArgs>
{
    HRESULT __stdcall get_SuspendingOperation(impl::abi_arg_out<Windows::ApplicationModel::ISuspendingOperation> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuspendingOperation());
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
struct produce<D, Windows::ApplicationModel::ISuspendingOperation> : produce_base<D, Windows::ApplicationModel::ISuspendingOperation>
{
    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::ApplicationModel::ISuspendingDeferral> deferral) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deferral = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(impl::abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel {

template <typename D> void impl_ICameraApplicationManagerStatics<D>::ShowInstalledApplicationsUI() const
{
    check_hresult(WINRT_SHIM(ICameraApplicationManagerStatics)->abi_ShowInstalledApplicationsUI());
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForCurrentAppAsync() const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(WINRT_SHIM(IFullTrustProcessLauncherStatics)->abi_LaunchFullTrustProcessForCurrentAppAsync(put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForCurrentAppAsync(hstring_view parameterGroupId) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(WINRT_SHIM(IFullTrustProcessLauncherStatics)->abi_LaunchFullTrustProcessForCurrentAppWithParametersAsync(get_abi(parameterGroupId), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForAppAsync(hstring_view fullTrustPackageRelativeAppId) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(WINRT_SHIM(IFullTrustProcessLauncherStatics)->abi_LaunchFullTrustProcessForAppAsync(get_abi(fullTrustPackageRelativeAppId), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForAppAsync(hstring_view fullTrustPackageRelativeAppId, hstring_view parameterGroupId) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(WINRT_SHIM(IFullTrustProcessLauncherStatics)->abi_LaunchFullTrustProcessForAppWithParametersAsync(get_abi(fullTrustPackageRelativeAppId), get_abi(parameterGroupId), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::StartupTaskState> impl_IStartupTask<D>::RequestEnableAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::StartupTaskState> operation;
    check_hresult(WINRT_SHIM(IStartupTask)->abi_RequestEnableAsync(put_abi(operation)));
    return operation;
}

template <typename D> void impl_IStartupTask<D>::Disable() const
{
    check_hresult(WINRT_SHIM(IStartupTask)->abi_Disable());
}

template <typename D> Windows::ApplicationModel::StartupTaskState impl_IStartupTask<D>::State() const
{
    Windows::ApplicationModel::StartupTaskState value {};
    check_hresult(WINRT_SHIM(IStartupTask)->get_State(&value));
    return value;
}

template <typename D> hstring impl_IStartupTask<D>::TaskId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IStartupTask)->get_TaskId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> impl_IStartupTaskStatics<D>::GetForCurrentPackageAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> operation;
    check_hresult(WINRT_SHIM(IStartupTaskStatics)->abi_GetForCurrentPackageAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask> impl_IStartupTaskStatics<D>::GetAsync(hstring_view taskId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask> operation;
    check_hresult(WINRT_SHIM(IStartupTaskStatics)->abi_GetAsync(get_abi(taskId), put_abi(operation)));
    return operation;
}

template <typename D> hstring impl_IAppDisplayInfo<D>::DisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppDisplayInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IAppDisplayInfo<D>::Description() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppDisplayInfo)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference impl_IAppDisplayInfo<D>::GetLogo(const Windows::Foundation::Size & size) const
{
    Windows::Storage::Streams::RandomAccessStreamReference value { nullptr };
    check_hresult(WINRT_SHIM(IAppDisplayInfo)->abi_GetLogo(get_abi(size), put_abi(value)));
    return value;
}

template <typename D> hstring impl_IAppInfo<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppInfo)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IAppInfo<D>::AppUserModelId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppInfo)->get_AppUserModelId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::AppDisplayInfo impl_IAppInfo<D>::DisplayInfo() const
{
    Windows::ApplicationModel::AppDisplayInfo value { nullptr };
    check_hresult(WINRT_SHIM(IAppInfo)->get_DisplayInfo(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IAppInfo<D>::PackageFamilyName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppInfo)->get_PackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPackageIdWithMetadata<D>::ProductId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackageIdWithMetadata)->get_ProductId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPackageIdWithMetadata<D>::Author() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackageIdWithMetadata)->get_Author(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPackageWithMetadata<D>::InstallDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(WINRT_SHIM(IPackageWithMetadata)->get_InstallDate(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPackageWithMetadata<D>::GetThumbnailToken() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackageWithMetadata)->abi_GetThumbnailToken(put_abi(value)));
    return value;
}

template <typename D> void impl_IPackageWithMetadata<D>::Launch(hstring_view parameters) const
{
    check_hresult(WINRT_SHIM(IPackageWithMetadata)->abi_Launch(get_abi(parameters)));
}

template <typename D> bool impl_IPackageStatus<D>::VerifyIsOK() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStatus)->abi_VerifyIsOK(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::NotAvailable() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStatus)->get_NotAvailable(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::PackageOffline() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStatus)->get_PackageOffline(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::DataOffline() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStatus)->get_DataOffline(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::Disabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStatus)->get_Disabled(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::NeedsRemediation() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStatus)->get_NeedsRemediation(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::LicenseIssue() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStatus)->get_LicenseIssue(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::Modified() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStatus)->get_Modified(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::Tampered() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStatus)->get_Tampered(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::DependencyIssue() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStatus)->get_DependencyIssue(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::Servicing() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStatus)->get_Servicing(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::DeploymentInProgress() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStatus)->get_DeploymentInProgress(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus2<D>::IsPartiallyStaged() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStatus2)->get_IsPartiallyStaged(&value));
    return value;
}

template <typename D> hstring impl_IPackageId<D>::Name() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackageId)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageVersion impl_IPackageId<D>::Version() const
{
    Windows::ApplicationModel::PackageVersion value {};
    check_hresult(WINRT_SHIM(IPackageId)->get_Version(put_abi(value)));
    return value;
}

template <typename D> Windows::System::ProcessorArchitecture impl_IPackageId<D>::Architecture() const
{
    Windows::System::ProcessorArchitecture value {};
    check_hresult(WINRT_SHIM(IPackageId)->get_Architecture(&value));
    return value;
}

template <typename D> hstring impl_IPackageId<D>::ResourceId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackageId)->get_ResourceId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPackageId<D>::Publisher() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackageId)->get_Publisher(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPackageId<D>::PublisherId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackageId)->get_PublisherId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPackageId<D>::FullName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackageId)->get_FullName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPackageId<D>::FamilyName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackageId)->get_FamilyName(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageId impl_IPackage<D>::Id() const
{
    Windows::ApplicationModel::PackageId value { nullptr };
    check_hresult(WINRT_SHIM(IPackage)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IPackage<D>::InstalledLocation() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(WINRT_SHIM(IPackage)->get_InstalledLocation(put_abi(value)));
    return value;
}

template <typename D> bool impl_IPackage<D>::IsFramework() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackage)->get_IsFramework(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package> impl_IPackage<D>::Dependencies() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package> value;
    check_hresult(WINRT_SHIM(IPackage)->get_Dependencies(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPackage2<D>::DisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackage2)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPackage2<D>::PublisherDisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackage2)->get_PublisherDisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPackage2<D>::Description() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackage2)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IPackage2<D>::Logo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(WINRT_SHIM(IPackage2)->get_Logo(put_abi(value)));
    return value;
}

template <typename D> bool impl_IPackage2<D>::IsResourcePackage() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackage2)->get_IsResourcePackage(&value));
    return value;
}

template <typename D> bool impl_IPackage2<D>::IsBundle() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackage2)->get_IsBundle(&value));
    return value;
}

template <typename D> bool impl_IPackage2<D>::IsDevelopmentMode() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackage2)->get_IsDevelopmentMode(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageStatus impl_IPackage3<D>::Status() const
{
    Windows::ApplicationModel::PackageStatus value { nullptr };
    check_hresult(WINRT_SHIM(IPackage3)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPackage3<D>::InstalledDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(WINRT_SHIM(IPackage3)->get_InstalledDate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>> impl_IPackage3<D>::GetAppListEntriesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>> operation;
    check_hresult(WINRT_SHIM(IPackage3)->abi_GetAppListEntriesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::PackageSignatureKind impl_IPackage4<D>::SignatureKind() const
{
    Windows::ApplicationModel::PackageSignatureKind value {};
    check_hresult(WINRT_SHIM(IPackage4)->get_SignatureKind(&value));
    return value;
}

template <typename D> bool impl_IPackage4<D>::IsOptional() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackage4)->get_IsOptional(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IPackage4<D>::VerifyContentIntegrityAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IPackage4)->abi_VerifyContentIntegrityAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> impl_IPackage5<D>::GetContentGroupsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> operation;
    check_hresult(WINRT_SHIM(IPackage5)->abi_GetContentGroupsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageContentGroup> impl_IPackage5<D>::GetContentGroupAsync(hstring_view name) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageContentGroup> operation;
    check_hresult(WINRT_SHIM(IPackage5)->abi_GetContentGroupAsync(get_abi(name), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> impl_IPackage5<D>::StageContentGroupsAsync(iterable<hstring> names) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> operation;
    check_hresult(WINRT_SHIM(IPackage5)->abi_StageContentGroupsAsync(get_abi(names), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> impl_IPackage5<D>::StageContentGroupsAsync(iterable<hstring> names, bool moveToHeadOfQueue) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> operation;
    check_hresult(WINRT_SHIM(IPackage5)->abi_StageContentGroupsWithPriorityAsync(get_abi(names), moveToHeadOfQueue, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IPackage5<D>::SetInUseAsync(bool inUse) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IPackage5)->abi_SetInUseAsync(inUse, put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageStatics<D>::Current() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(WINRT_SHIM(IPackageStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> GUID impl_IPackageStagingEventArgs<D>::ActivityId() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IPackageStagingEventArgs)->get_ActivityId(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageStagingEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(WINRT_SHIM(IPackageStagingEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> double impl_IPackageStagingEventArgs<D>::Progress() const
{
    double value {};
    check_hresult(WINRT_SHIM(IPackageStagingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool impl_IPackageStagingEventArgs<D>::IsComplete() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageStagingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT impl_IPackageStagingEventArgs<D>::ErrorCode() const
{
    HRESULT value {};
    check_hresult(WINRT_SHIM(IPackageStagingEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> GUID impl_IPackageInstallingEventArgs<D>::ActivityId() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IPackageInstallingEventArgs)->get_ActivityId(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageInstallingEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(WINRT_SHIM(IPackageInstallingEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> double impl_IPackageInstallingEventArgs<D>::Progress() const
{
    double value {};
    check_hresult(WINRT_SHIM(IPackageInstallingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool impl_IPackageInstallingEventArgs<D>::IsComplete() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageInstallingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT impl_IPackageInstallingEventArgs<D>::ErrorCode() const
{
    HRESULT value {};
    check_hresult(WINRT_SHIM(IPackageInstallingEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> GUID impl_IPackageUpdatingEventArgs<D>::ActivityId() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IPackageUpdatingEventArgs)->get_ActivityId(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageUpdatingEventArgs<D>::SourcePackage() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(WINRT_SHIM(IPackageUpdatingEventArgs)->get_SourcePackage(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageUpdatingEventArgs<D>::TargetPackage() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(WINRT_SHIM(IPackageUpdatingEventArgs)->get_TargetPackage(put_abi(value)));
    return value;
}

template <typename D> double impl_IPackageUpdatingEventArgs<D>::Progress() const
{
    double value {};
    check_hresult(WINRT_SHIM(IPackageUpdatingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool impl_IPackageUpdatingEventArgs<D>::IsComplete() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageUpdatingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT impl_IPackageUpdatingEventArgs<D>::ErrorCode() const
{
    HRESULT value {};
    check_hresult(WINRT_SHIM(IPackageUpdatingEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> GUID impl_IPackageUninstallingEventArgs<D>::ActivityId() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IPackageUninstallingEventArgs)->get_ActivityId(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageUninstallingEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(WINRT_SHIM(IPackageUninstallingEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> double impl_IPackageUninstallingEventArgs<D>::Progress() const
{
    double value {};
    check_hresult(WINRT_SHIM(IPackageUninstallingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool impl_IPackageUninstallingEventArgs<D>::IsComplete() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageUninstallingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT impl_IPackageUninstallingEventArgs<D>::ErrorCode() const
{
    HRESULT value {};
    check_hresult(WINRT_SHIM(IPackageUninstallingEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageStatusChangedEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(WINRT_SHIM(IPackageStatusChangedEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> GUID impl_IPackageContentGroupStagingEventArgs<D>::ActivityId() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IPackageContentGroupStagingEventArgs)->get_ActivityId(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageContentGroupStagingEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(WINRT_SHIM(IPackageContentGroupStagingEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> double impl_IPackageContentGroupStagingEventArgs<D>::Progress() const
{
    double value {};
    check_hresult(WINRT_SHIM(IPackageContentGroupStagingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool impl_IPackageContentGroupStagingEventArgs<D>::IsComplete() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageContentGroupStagingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT impl_IPackageContentGroupStagingEventArgs<D>::ErrorCode() const
{
    HRESULT value {};
    check_hresult(WINRT_SHIM(IPackageContentGroupStagingEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> hstring impl_IPackageContentGroupStagingEventArgs<D>::ContentGroupName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackageContentGroupStagingEventArgs)->get_ContentGroupName(put_abi(value)));
    return value;
}

template <typename D> bool impl_IPackageContentGroupStagingEventArgs<D>::IsContentGroupRequired() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageContentGroupStagingEventArgs)->get_IsContentGroupRequired(&value));
    return value;
}

template <typename D> event_token impl_IPackageCatalog<D>::PackageStaging(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IPackageCatalog)->add_PackageStaging(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IPackageCatalog> impl_IPackageCatalog<D>::PackageStaging(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPackageCatalog>(this, &ABI::Windows::ApplicationModel::IPackageCatalog::remove_PackageStaging, PackageStaging(handler));
}

template <typename D> void impl_IPackageCatalog<D>::PackageStaging(event_token token) const
{
    check_hresult(WINRT_SHIM(IPackageCatalog)->remove_PackageStaging(token));
}

template <typename D> event_token impl_IPackageCatalog<D>::PackageInstalling(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IPackageCatalog)->add_PackageInstalling(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IPackageCatalog> impl_IPackageCatalog<D>::PackageInstalling(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPackageCatalog>(this, &ABI::Windows::ApplicationModel::IPackageCatalog::remove_PackageInstalling, PackageInstalling(handler));
}

template <typename D> void impl_IPackageCatalog<D>::PackageInstalling(event_token token) const
{
    check_hresult(WINRT_SHIM(IPackageCatalog)->remove_PackageInstalling(token));
}

template <typename D> event_token impl_IPackageCatalog<D>::PackageUpdating(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IPackageCatalog)->add_PackageUpdating(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IPackageCatalog> impl_IPackageCatalog<D>::PackageUpdating(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPackageCatalog>(this, &ABI::Windows::ApplicationModel::IPackageCatalog::remove_PackageUpdating, PackageUpdating(handler));
}

template <typename D> void impl_IPackageCatalog<D>::PackageUpdating(event_token token) const
{
    check_hresult(WINRT_SHIM(IPackageCatalog)->remove_PackageUpdating(token));
}

template <typename D> event_token impl_IPackageCatalog<D>::PackageUninstalling(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IPackageCatalog)->add_PackageUninstalling(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IPackageCatalog> impl_IPackageCatalog<D>::PackageUninstalling(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPackageCatalog>(this, &ABI::Windows::ApplicationModel::IPackageCatalog::remove_PackageUninstalling, PackageUninstalling(handler));
}

template <typename D> void impl_IPackageCatalog<D>::PackageUninstalling(event_token token) const
{
    check_hresult(WINRT_SHIM(IPackageCatalog)->remove_PackageUninstalling(token));
}

template <typename D> event_token impl_IPackageCatalog<D>::PackageStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IPackageCatalog)->add_PackageStatusChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IPackageCatalog> impl_IPackageCatalog<D>::PackageStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPackageCatalog>(this, &ABI::Windows::ApplicationModel::IPackageCatalog::remove_PackageStatusChanged, PackageStatusChanged(handler));
}

template <typename D> void impl_IPackageCatalog<D>::PackageStatusChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IPackageCatalog)->remove_PackageStatusChanged(token));
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageCatalogAddOptionalPackageResult<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(WINRT_SHIM(IPackageCatalogAddOptionalPackageResult)->get_Package(put_abi(value)));
    return value;
}

template <typename D> HRESULT impl_IPackageCatalogAddOptionalPackageResult<D>::ExtendedError() const
{
    HRESULT value {};
    check_hresult(WINRT_SHIM(IPackageCatalogAddOptionalPackageResult)->get_ExtendedError(&value));
    return value;
}

template <typename D> event_token impl_IPackageCatalog2<D>::PackageContentGroupStaging(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageContentGroupStagingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IPackageCatalog2)->add_PackageContentGroupStaging(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IPackageCatalog2> impl_IPackageCatalog2<D>::PackageContentGroupStaging(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageContentGroupStagingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPackageCatalog2>(this, &ABI::Windows::ApplicationModel::IPackageCatalog2::remove_PackageContentGroupStaging, PackageContentGroupStaging(handler));
}

template <typename D> void impl_IPackageCatalog2<D>::PackageContentGroupStaging(event_token token) const
{
    check_hresult(WINRT_SHIM(IPackageCatalog2)->remove_PackageContentGroupStaging(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult> impl_IPackageCatalog2<D>::AddOptionalPackageAsync(hstring_view optionalPackageFamilyName) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult> operation;
    check_hresult(WINRT_SHIM(IPackageCatalog2)->abi_AddOptionalPackageAsync(get_abi(optionalPackageFamilyName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::PackageCatalog impl_IPackageCatalogStatics<D>::OpenForCurrentPackage() const
{
    Windows::ApplicationModel::PackageCatalog value { nullptr };
    check_hresult(WINRT_SHIM(IPackageCatalogStatics)->abi_OpenForCurrentPackage(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageCatalog impl_IPackageCatalogStatics<D>::OpenForCurrentUser() const
{
    Windows::ApplicationModel::PackageCatalog value { nullptr };
    check_hresult(WINRT_SHIM(IPackageCatalogStatics)->abi_OpenForCurrentUser(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageContentGroup<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(WINRT_SHIM(IPackageContentGroup)->get_Package(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPackageContentGroup<D>::Name() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackageContentGroup)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageContentGroupState impl_IPackageContentGroup<D>::State() const
{
    Windows::ApplicationModel::PackageContentGroupState value {};
    check_hresult(WINRT_SHIM(IPackageContentGroup)->get_State(&value));
    return value;
}

template <typename D> bool impl_IPackageContentGroup<D>::IsRequired() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPackageContentGroup)->get_IsRequired(&value));
    return value;
}

template <typename D> hstring impl_IPackageContentGroupStatics<D>::RequiredGroupName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPackageContentGroupStatics)->get_RequiredGroupName(put_abi(value)));
    return value;
}

template <typename D> bool impl_IDesignModeStatics<D>::DesignModeEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IDesignModeStatics)->get_DesignModeEnabled(&value));
    return value;
}

template <typename D> void impl_ISuspendingDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(ISuspendingDeferral)->abi_Complete());
}

template <typename D> Windows::ApplicationModel::SuspendingDeferral impl_ISuspendingOperation<D>::GetDeferral() const
{
    Windows::ApplicationModel::SuspendingDeferral deferral { nullptr };
    check_hresult(WINRT_SHIM(ISuspendingOperation)->abi_GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> Windows::Foundation::DateTime impl_ISuspendingOperation<D>::Deadline() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(WINRT_SHIM(ISuspendingOperation)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SuspendingOperation impl_ISuspendingEventArgs<D>::SuspendingOperation() const
{
    Windows::ApplicationModel::SuspendingOperation value { nullptr };
    check_hresult(WINRT_SHIM(ISuspendingEventArgs)->get_SuspendingOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_ILeavingBackgroundEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(ILeavingBackgroundEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEnteredBackgroundEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(IEnteredBackgroundEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

inline void CameraApplicationManager::ShowInstalledApplicationsUI()
{
    get_activation_factory<CameraApplicationManager, ICameraApplicationManagerStatics>().ShowInstalledApplicationsUI();
}

inline bool DesignMode::DesignModeEnabled()
{
    return get_activation_factory<DesignMode, IDesignModeStatics>().DesignModeEnabled();
}

inline Windows::Foundation::IAsyncAction FullTrustProcessLauncher::LaunchFullTrustProcessForCurrentAppAsync()
{
    return get_activation_factory<FullTrustProcessLauncher, IFullTrustProcessLauncherStatics>().LaunchFullTrustProcessForCurrentAppAsync();
}

inline Windows::Foundation::IAsyncAction FullTrustProcessLauncher::LaunchFullTrustProcessForCurrentAppAsync(hstring_view parameterGroupId)
{
    return get_activation_factory<FullTrustProcessLauncher, IFullTrustProcessLauncherStatics>().LaunchFullTrustProcessForCurrentAppAsync(parameterGroupId);
}

inline Windows::Foundation::IAsyncAction FullTrustProcessLauncher::LaunchFullTrustProcessForAppAsync(hstring_view fullTrustPackageRelativeAppId)
{
    return get_activation_factory<FullTrustProcessLauncher, IFullTrustProcessLauncherStatics>().LaunchFullTrustProcessForAppAsync(fullTrustPackageRelativeAppId);
}

inline Windows::Foundation::IAsyncAction FullTrustProcessLauncher::LaunchFullTrustProcessForAppAsync(hstring_view fullTrustPackageRelativeAppId, hstring_view parameterGroupId)
{
    return get_activation_factory<FullTrustProcessLauncher, IFullTrustProcessLauncherStatics>().LaunchFullTrustProcessForAppAsync(fullTrustPackageRelativeAppId, parameterGroupId);
}

inline Windows::ApplicationModel::Package Package::Current()
{
    return get_activation_factory<Package, IPackageStatics>().Current();
}

inline Windows::ApplicationModel::PackageCatalog PackageCatalog::OpenForCurrentPackage()
{
    return get_activation_factory<PackageCatalog, IPackageCatalogStatics>().OpenForCurrentPackage();
}

inline Windows::ApplicationModel::PackageCatalog PackageCatalog::OpenForCurrentUser()
{
    return get_activation_factory<PackageCatalog, IPackageCatalogStatics>().OpenForCurrentUser();
}

inline hstring PackageContentGroup::RequiredGroupName()
{
    return get_activation_factory<PackageContentGroup, IPackageContentGroupStatics>().RequiredGroupName();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> StartupTask::GetForCurrentPackageAsync()
{
    return get_activation_factory<StartupTask, IStartupTaskStatics>().GetForCurrentPackageAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask> StartupTask::GetAsync(hstring_view taskId)
{
    return get_activation_factory<StartupTask, IStartupTaskStatics>().GetAsync(taskId);
}

}

}

template<>
struct std::hash<winrt::Windows::ApplicationModel::IAppDisplayInfo>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IAppDisplayInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IAppInfo>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IAppInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::ICameraApplicationManagerStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::ICameraApplicationManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IDesignModeStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IDesignModeStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IEnteredBackgroundEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IEnteredBackgroundEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IFullTrustProcessLauncherStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IFullTrustProcessLauncherStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::ILeavingBackgroundEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::ILeavingBackgroundEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackage>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackage2>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackage2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackage3>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackage3 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackage4>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackage4 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackage5>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackage5 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageCatalog>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageCatalog & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageCatalog2>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageCatalog2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageCatalogStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageCatalogStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageContentGroup>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageContentGroup & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageContentGroupStagingEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageContentGroupStagingEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageContentGroupStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageContentGroupStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageId>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageId & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageIdWithMetadata>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageIdWithMetadata & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageInstallingEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageInstallingEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageStagingEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageStagingEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageStatus>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageStatus & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageStatus2>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageStatus2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageStatusChangedEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageStatusChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageUninstallingEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageUninstallingEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageUpdatingEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageUpdatingEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IPackageWithMetadata>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IPackageWithMetadata & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IStartupTask>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IStartupTask & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::IStartupTaskStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::IStartupTaskStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::ISuspendingDeferral>
{
    size_t operator()(const winrt::Windows::ApplicationModel::ISuspendingDeferral & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::ISuspendingEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::ISuspendingEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::ISuspendingOperation>
{
    size_t operator()(const winrt::Windows::ApplicationModel::ISuspendingOperation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::AppDisplayInfo>
{
    size_t operator()(const winrt::Windows::ApplicationModel::AppDisplayInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::AppInfo>
{
    size_t operator()(const winrt::Windows::ApplicationModel::AppInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::EnteredBackgroundEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::EnteredBackgroundEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::LeavingBackgroundEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::LeavingBackgroundEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Package>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Package & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::PackageCatalog>
{
    size_t operator()(const winrt::Windows::ApplicationModel::PackageCatalog & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult>
{
    size_t operator()(const winrt::Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::PackageContentGroup>
{
    size_t operator()(const winrt::Windows::ApplicationModel::PackageContentGroup & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::PackageContentGroupStagingEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::PackageContentGroupStagingEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::PackageId>
{
    size_t operator()(const winrt::Windows::ApplicationModel::PackageId & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::PackageInstallingEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::PackageInstallingEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::PackageStagingEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::PackageStagingEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::PackageStatus>
{
    size_t operator()(const winrt::Windows::ApplicationModel::PackageStatus & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::PackageStatusChangedEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::PackageStatusChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::PackageUninstallingEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::PackageUninstallingEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::PackageUpdatingEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::PackageUpdatingEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::StartupTask>
{
    size_t operator()(const winrt::Windows::ApplicationModel::StartupTask & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::SuspendingDeferral>
{
    size_t operator()(const winrt::Windows::ApplicationModel::SuspendingDeferral & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::SuspendingEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::SuspendingEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::SuspendingOperation>
{
    size_t operator()(const winrt::Windows::ApplicationModel::SuspendingOperation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
