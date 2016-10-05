// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.System.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Management.Deployment.3.h"
#include "internal/Windows.ApplicationModel.Store.Preview.InstallControl.3.h"
#include "Windows.ApplicationModel.Store.Preview.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>
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

    HRESULT __stdcall get_PackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstallType(Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InstallType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsUserInitiated(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsUserInitiated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentStatus(abi_arg_out<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetCurrentStatus());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Cancel() noexcept override
    {
        try
        {
            this->shim().Cancel();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Pause() noexcept override
    {
        try
        {
            this->shim().Pause();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Restart() noexcept override
    {
        try
        {
            this->shim().Restart();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Completed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token token) noexcept override
    {
        try
        {
            this->shim().Completed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().StatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().StatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>
{
    HRESULT __stdcall abi_CancelWithTelemetry(abi_arg_in<hstring> correlationVector) noexcept override
    {
        try
        {
            this->shim().Cancel(*reinterpret_cast<const hstring *>(&correlationVector));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PauseWithTelemetry(abi_arg_in<hstring> correlationVector) noexcept override
    {
        try
        {
            this->shim().Pause(*reinterpret_cast<const hstring *>(&correlationVector));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RestartWithTelemetry(abi_arg_in<hstring> correlationVector) noexcept override
    {
        try
        {
            this->shim().Restart(*reinterpret_cast<const hstring *>(&correlationVector));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>
{
    HRESULT __stdcall get_AppInstallItems(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppInstallItems());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Cancel(abi_arg_in<hstring> productId) noexcept override
    {
        try
        {
            this->shim().Cancel(*reinterpret_cast<const hstring *>(&productId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Pause(abi_arg_in<hstring> productId) noexcept override
    {
        try
        {
            this->shim().Pause(*reinterpret_cast<const hstring *>(&productId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Restart(abi_arg_in<hstring> productId) noexcept override
    {
        try
        {
            this->shim().Restart(*reinterpret_cast<const hstring *>(&productId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ItemCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ItemCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().ItemCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ItemStatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ItemStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemStatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ItemStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoUpdateSetting(Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoUpdateSetting());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoUpdateSetting(Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting value) noexcept override
    {
        try
        {
            this->shim().AutoUpdateSetting(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AcquisitionIdentity(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AcquisitionIdentity());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AcquisitionIdentity(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AcquisitionIdentity(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsApplicableAsync(abi_arg_in<hstring> productId, abi_arg_in<hstring> skuId, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetIsApplicableAsync(*reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&skuId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartAppInstallAsync(abi_arg_in<hstring> productId, abi_arg_in<hstring> skuId, bool repair, bool forceUseOfNonRemovableStorage, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().StartAppInstallAsync(*reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&skuId), repair, forceUseOfNonRemovableStorage));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateAppByPackageFamilyNameAsync(abi_arg_in<hstring> packageFamilyName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().UpdateAppByPackageFamilyNameAsync(*reinterpret_cast<const hstring *>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SearchForUpdatesAsync(abi_arg_in<hstring> productId, abi_arg_in<hstring> skuId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SearchForUpdatesAsync(*reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&skuId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SearchForAllUpdatesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SearchForAllUpdatesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsStoreBlockedByPolicyAsync(abi_arg_in<hstring> storeClientName, abi_arg_in<hstring> storeClientPublisher, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().IsStoreBlockedByPolicyAsync(*reinterpret_cast<const hstring *>(&storeClientName), *reinterpret_cast<const hstring *>(&storeClientPublisher)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsAppAllowedToInstallAsync(abi_arg_in<hstring> productId, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetIsAppAllowedToInstallAsync(*reinterpret_cast<const hstring *>(&productId)));
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
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>
{
    HRESULT __stdcall abi_StartAppInstallWithTelemetryAsync(abi_arg_in<hstring> productId, abi_arg_in<hstring> skuId, bool repair, bool forceUseOfNonRemovableStorage, abi_arg_in<hstring> catalogId, abi_arg_in<hstring> bundleId, abi_arg_in<hstring> correlationVector, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().StartAppInstallAsync(*reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&skuId), repair, forceUseOfNonRemovableStorage, *reinterpret_cast<const hstring *>(&catalogId), *reinterpret_cast<const hstring *>(&bundleId), *reinterpret_cast<const hstring *>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateAppByPackageFamilyNameWithTelemetryAsync(abi_arg_in<hstring> packageFamilyName, abi_arg_in<hstring> correlationVector, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().UpdateAppByPackageFamilyNameAsync(*reinterpret_cast<const hstring *>(&packageFamilyName), *reinterpret_cast<const hstring *>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SearchForUpdatesWithTelemetryAsync(abi_arg_in<hstring> productId, abi_arg_in<hstring> skuId, abi_arg_in<hstring> catalogId, abi_arg_in<hstring> correlationVector, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SearchForUpdatesAsync(*reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&skuId), *reinterpret_cast<const hstring *>(&catalogId), *reinterpret_cast<const hstring *>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SearchForAllUpdatesWithTelemetryAsync(abi_arg_in<hstring> correlationVector, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SearchForAllUpdatesAsync(*reinterpret_cast<const hstring *>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsAppAllowedToInstallWithTelemetryAsync(abi_arg_in<hstring> productId, abi_arg_in<hstring> skuId, abi_arg_in<hstring> catalogId, abi_arg_in<hstring> correlationVector, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetIsAppAllowedToInstallAsync(*reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&skuId), *reinterpret_cast<const hstring *>(&catalogId), *reinterpret_cast<const hstring *>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CancelWithTelemetry(abi_arg_in<hstring> productId, abi_arg_in<hstring> correlationVector) noexcept override
    {
        try
        {
            this->shim().Cancel(*reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&correlationVector));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PauseWithTelemetry(abi_arg_in<hstring> productId, abi_arg_in<hstring> correlationVector) noexcept override
    {
        try
        {
            this->shim().Pause(*reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&correlationVector));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RestartWithTelemetry(abi_arg_in<hstring> productId, abi_arg_in<hstring> correlationVector) noexcept override
    {
        try
        {
            this->shim().Restart(*reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&correlationVector));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>
{
    HRESULT __stdcall abi_StartProductInstallAsync(abi_arg_in<hstring> productId, abi_arg_in<hstring> catalogId, abi_arg_in<hstring> flightId, abi_arg_in<hstring> clientId, bool repair, bool forceUseOfNonRemovableStorage, abi_arg_in<hstring> correlationVector, abi_arg_in<Windows::Management::Deployment::IPackageVolume> targetVolume, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().StartProductInstallAsync(*reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&catalogId), *reinterpret_cast<const hstring *>(&flightId), *reinterpret_cast<const hstring *>(&clientId), repair, forceUseOfNonRemovableStorage, *reinterpret_cast<const hstring *>(&correlationVector), *reinterpret_cast<const Windows::Management::Deployment::PackageVolume *>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartProductInstallForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> productId, abi_arg_in<hstring> catalogId, abi_arg_in<hstring> flightId, abi_arg_in<hstring> clientId, bool repair, bool forceUseOfNonRemovableStorage, abi_arg_in<hstring> correlationVector, abi_arg_in<Windows::Management::Deployment::IPackageVolume> targetVolume, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().StartProductInstallForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&catalogId), *reinterpret_cast<const hstring *>(&flightId), *reinterpret_cast<const hstring *>(&clientId), repair, forceUseOfNonRemovableStorage, *reinterpret_cast<const hstring *>(&correlationVector), *reinterpret_cast<const Windows::Management::Deployment::PackageVolume *>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateAppByPackageFamilyNameForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> packageFamilyName, abi_arg_in<hstring> correlationVector, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().UpdateAppByPackageFamilyNameForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&packageFamilyName), *reinterpret_cast<const hstring *>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SearchForUpdatesForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> productId, abi_arg_in<hstring> skuId, abi_arg_in<hstring> catalogId, abi_arg_in<hstring> correlationVector, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SearchForUpdatesForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&skuId), *reinterpret_cast<const hstring *>(&catalogId), *reinterpret_cast<const hstring *>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SearchForAllUpdatesForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> correlationVector, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SearchForAllUpdatesForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsAppAllowedToInstallForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> productId, abi_arg_in<hstring> skuId, abi_arg_in<hstring> catalogId, abi_arg_in<hstring> correlationVector, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetIsAppAllowedToInstallForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&skuId), *reinterpret_cast<const hstring *>(&catalogId), *reinterpret_cast<const hstring *>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsApplicableForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> productId, abi_arg_in<hstring> skuId, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetIsApplicableForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&skuId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveToFrontOfDownloadQueue(abi_arg_in<hstring> productId, abi_arg_in<hstring> correlationVector) noexcept override
    {
        try
        {
            this->shim().MoveToFrontOfDownloadQueue(*reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&correlationVector));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>
{
    HRESULT __stdcall get_Item(abi_arg_out<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Item());
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
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>
{
    HRESULT __stdcall get_InstallState(Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState * value) noexcept override
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

    HRESULT __stdcall get_DownloadSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DownloadSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytesDownloaded(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BytesDownloaded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PercentComplete(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PercentComplete());
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
            *value = detach(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>
{
    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadyForLaunch(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadyForLaunch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Store::Preview::InstallControl {

template <typename D> Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState impl_IAppInstallStatus<D>::InstallState() const
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState value {};
    check_hresult(static_cast<const IAppInstallStatus &>(static_cast<const D &>(*this))->get_InstallState(&value));
    return value;
}

template <typename D> uint64_t impl_IAppInstallStatus<D>::DownloadSizeInBytes() const
{
    uint64_t value {};
    check_hresult(static_cast<const IAppInstallStatus &>(static_cast<const D &>(*this))->get_DownloadSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IAppInstallStatus<D>::BytesDownloaded() const
{
    uint64_t value {};
    check_hresult(static_cast<const IAppInstallStatus &>(static_cast<const D &>(*this))->get_BytesDownloaded(&value));
    return value;
}

template <typename D> double impl_IAppInstallStatus<D>::PercentComplete() const
{
    double value {};
    check_hresult(static_cast<const IAppInstallStatus &>(static_cast<const D &>(*this))->get_PercentComplete(&value));
    return value;
}

template <typename D> HRESULT impl_IAppInstallStatus<D>::ErrorCode() const
{
    HRESULT value {};
    check_hresult(static_cast<const IAppInstallStatus &>(static_cast<const D &>(*this))->get_ErrorCode(&value));
    return value;
}

template <typename D> Windows::System::User impl_IAppInstallStatus2<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IAppInstallStatus2 &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> bool impl_IAppInstallStatus2<D>::ReadyForLaunch() const
{
    bool value {};
    check_hresult(static_cast<const IAppInstallStatus2 &>(static_cast<const D &>(*this))->get_ReadyForLaunch(&value));
    return value;
}

template <typename D> hstring impl_IAppInstallItem<D>::ProductId() const
{
    hstring value;
    check_hresult(static_cast<const IAppInstallItem &>(static_cast<const D &>(*this))->get_ProductId(put(value)));
    return value;
}

template <typename D> hstring impl_IAppInstallItem<D>::PackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IAppInstallItem &>(static_cast<const D &>(*this))->get_PackageFamilyName(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType impl_IAppInstallItem<D>::InstallType() const
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType value {};
    check_hresult(static_cast<const IAppInstallItem &>(static_cast<const D &>(*this))->get_InstallType(&value));
    return value;
}

template <typename D> bool impl_IAppInstallItem<D>::IsUserInitiated() const
{
    bool value {};
    check_hresult(static_cast<const IAppInstallItem &>(static_cast<const D &>(*this))->get_IsUserInitiated(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus impl_IAppInstallItem<D>::GetCurrentStatus() const
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus result { nullptr };
    check_hresult(static_cast<const IAppInstallItem &>(static_cast<const D &>(*this))->abi_GetCurrentStatus(put(result)));
    return result;
}

template <typename D> void impl_IAppInstallItem<D>::Cancel() const
{
    check_hresult(static_cast<const IAppInstallItem &>(static_cast<const D &>(*this))->abi_Cancel());
}

template <typename D> void impl_IAppInstallItem<D>::Pause() const
{
    check_hresult(static_cast<const IAppInstallItem &>(static_cast<const D &>(*this))->abi_Pause());
}

template <typename D> void impl_IAppInstallItem<D>::Restart() const
{
    check_hresult(static_cast<const IAppInstallItem &>(static_cast<const D &>(*this))->abi_Restart());
}

template <typename D> event_token impl_IAppInstallItem<D>::Completed(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAppInstallItem &>(static_cast<const D &>(*this))->add_Completed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppInstallItem> impl_IAppInstallItem<D>::Completed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IAppInstallItem>(this, &ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem::remove_Completed, Completed(handler));
}

template <typename D> void impl_IAppInstallItem<D>::Completed(event_token token) const
{
    check_hresult(static_cast<const IAppInstallItem &>(static_cast<const D &>(*this))->remove_Completed(token));
}

template <typename D> event_token impl_IAppInstallItem<D>::StatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAppInstallItem &>(static_cast<const D &>(*this))->add_StatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppInstallItem> impl_IAppInstallItem<D>::StatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IAppInstallItem>(this, &ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem::remove_StatusChanged, StatusChanged(handler));
}

template <typename D> void impl_IAppInstallItem<D>::StatusChanged(event_token token) const
{
    check_hresult(static_cast<const IAppInstallItem &>(static_cast<const D &>(*this))->remove_StatusChanged(token));
}

template <typename D> void impl_IAppInstallItem2<D>::Cancel(hstring_ref correlationVector) const
{
    check_hresult(static_cast<const IAppInstallItem2 &>(static_cast<const D &>(*this))->abi_CancelWithTelemetry(get(correlationVector)));
}

template <typename D> void impl_IAppInstallItem2<D>::Pause(hstring_ref correlationVector) const
{
    check_hresult(static_cast<const IAppInstallItem2 &>(static_cast<const D &>(*this))->abi_PauseWithTelemetry(get(correlationVector)));
}

template <typename D> void impl_IAppInstallItem2<D>::Restart(hstring_ref correlationVector) const
{
    check_hresult(static_cast<const IAppInstallItem2 &>(static_cast<const D &>(*this))->abi_RestartWithTelemetry(get(correlationVector)));
}

template <typename D> Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem impl_IAppInstallManagerItemEventArgs<D>::Item() const
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem value { nullptr };
    check_hresult(static_cast<const IAppInstallManagerItemEventArgs &>(static_cast<const D &>(*this))->get_Item(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> impl_IAppInstallManager<D>::AppInstallItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> value;
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->get_AppInstallItems(put(value)));
    return value;
}

template <typename D> void impl_IAppInstallManager<D>::Cancel(hstring_ref productId) const
{
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->abi_Cancel(get(productId)));
}

template <typename D> void impl_IAppInstallManager<D>::Pause(hstring_ref productId) const
{
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->abi_Pause(get(productId)));
}

template <typename D> void impl_IAppInstallManager<D>::Restart(hstring_ref productId) const
{
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->abi_Restart(get(productId)));
}

template <typename D> event_token impl_IAppInstallManager<D>::ItemCompleted(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->add_ItemCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppInstallManager> impl_IAppInstallManager<D>::ItemCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppInstallManager>(this, &ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::remove_ItemCompleted, ItemCompleted(handler));
}

template <typename D> void impl_IAppInstallManager<D>::ItemCompleted(event_token token) const
{
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->remove_ItemCompleted(token));
}

template <typename D> event_token impl_IAppInstallManager<D>::ItemStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->add_ItemStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppInstallManager> impl_IAppInstallManager<D>::ItemStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppInstallManager>(this, &ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::remove_ItemStatusChanged, ItemStatusChanged(handler));
}

template <typename D> void impl_IAppInstallManager<D>::ItemStatusChanged(event_token token) const
{
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->remove_ItemStatusChanged(token));
}

template <typename D> Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting impl_IAppInstallManager<D>::AutoUpdateSetting() const
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting value {};
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->get_AutoUpdateSetting(&value));
    return value;
}

template <typename D> void impl_IAppInstallManager<D>::AutoUpdateSetting(Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting value) const
{
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->put_AutoUpdateSetting(value));
}

template <typename D> hstring impl_IAppInstallManager<D>::AcquisitionIdentity() const
{
    hstring value;
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->get_AcquisitionIdentity(put(value)));
    return value;
}

template <typename D> void impl_IAppInstallManager<D>::AcquisitionIdentity(hstring_ref value) const
{
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->put_AcquisitionIdentity(get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppInstallManager<D>::GetIsApplicableAsync(hstring_ref productId, hstring_ref skuId) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->abi_GetIsApplicableAsync(get(productId), get(skuId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> impl_IAppInstallManager<D>::StartAppInstallAsync(hstring_ref productId, hstring_ref skuId, bool repair, bool forceUseOfNonRemovableStorage) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation;
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->abi_StartAppInstallAsync(get(productId), get(skuId), repair, forceUseOfNonRemovableStorage, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> impl_IAppInstallManager<D>::UpdateAppByPackageFamilyNameAsync(hstring_ref packageFamilyName) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation;
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->abi_UpdateAppByPackageFamilyNameAsync(get(packageFamilyName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> impl_IAppInstallManager<D>::SearchForUpdatesAsync(hstring_ref productId, hstring_ref skuId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation;
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->abi_SearchForUpdatesAsync(get(productId), get(skuId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> impl_IAppInstallManager<D>::SearchForAllUpdatesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation;
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->abi_SearchForAllUpdatesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppInstallManager<D>::IsStoreBlockedByPolicyAsync(hstring_ref storeClientName, hstring_ref storeClientPublisher) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->abi_IsStoreBlockedByPolicyAsync(get(storeClientName), get(storeClientPublisher), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppInstallManager<D>::GetIsAppAllowedToInstallAsync(hstring_ref productId) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IAppInstallManager &>(static_cast<const D &>(*this))->abi_GetIsAppAllowedToInstallAsync(get(productId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> impl_IAppInstallManager2<D>::StartAppInstallAsync(hstring_ref productId, hstring_ref skuId, bool repair, bool forceUseOfNonRemovableStorage, hstring_ref catalogId, hstring_ref bundleId, hstring_ref correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation;
    check_hresult(static_cast<const IAppInstallManager2 &>(static_cast<const D &>(*this))->abi_StartAppInstallWithTelemetryAsync(get(productId), get(skuId), repair, forceUseOfNonRemovableStorage, get(catalogId), get(bundleId), get(correlationVector), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> impl_IAppInstallManager2<D>::UpdateAppByPackageFamilyNameAsync(hstring_ref packageFamilyName, hstring_ref correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation;
    check_hresult(static_cast<const IAppInstallManager2 &>(static_cast<const D &>(*this))->abi_UpdateAppByPackageFamilyNameWithTelemetryAsync(get(packageFamilyName), get(correlationVector), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> impl_IAppInstallManager2<D>::SearchForUpdatesAsync(hstring_ref productId, hstring_ref skuId, hstring_ref catalogId, hstring_ref correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation;
    check_hresult(static_cast<const IAppInstallManager2 &>(static_cast<const D &>(*this))->abi_SearchForUpdatesWithTelemetryAsync(get(productId), get(skuId), get(catalogId), get(correlationVector), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> impl_IAppInstallManager2<D>::SearchForAllUpdatesAsync(hstring_ref correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation;
    check_hresult(static_cast<const IAppInstallManager2 &>(static_cast<const D &>(*this))->abi_SearchForAllUpdatesWithTelemetryAsync(get(correlationVector), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppInstallManager2<D>::GetIsAppAllowedToInstallAsync(hstring_ref productId, hstring_ref skuId, hstring_ref catalogId, hstring_ref correlationVector) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IAppInstallManager2 &>(static_cast<const D &>(*this))->abi_GetIsAppAllowedToInstallWithTelemetryAsync(get(productId), get(skuId), get(catalogId), get(correlationVector), put(operation)));
    return operation;
}

template <typename D> void impl_IAppInstallManager2<D>::Cancel(hstring_ref productId, hstring_ref correlationVector) const
{
    check_hresult(static_cast<const IAppInstallManager2 &>(static_cast<const D &>(*this))->abi_CancelWithTelemetry(get(productId), get(correlationVector)));
}

template <typename D> void impl_IAppInstallManager2<D>::Pause(hstring_ref productId, hstring_ref correlationVector) const
{
    check_hresult(static_cast<const IAppInstallManager2 &>(static_cast<const D &>(*this))->abi_PauseWithTelemetry(get(productId), get(correlationVector)));
}

template <typename D> void impl_IAppInstallManager2<D>::Restart(hstring_ref productId, hstring_ref correlationVector) const
{
    check_hresult(static_cast<const IAppInstallManager2 &>(static_cast<const D &>(*this))->abi_RestartWithTelemetry(get(productId), get(correlationVector)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> impl_IAppInstallManager3<D>::StartProductInstallAsync(hstring_ref productId, hstring_ref catalogId, hstring_ref flightId, hstring_ref clientId, bool repair, bool forceUseOfNonRemovableStorage, hstring_ref correlationVector, const Windows::Management::Deployment::PackageVolume & targetVolume) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation;
    check_hresult(static_cast<const IAppInstallManager3 &>(static_cast<const D &>(*this))->abi_StartProductInstallAsync(get(productId), get(catalogId), get(flightId), get(clientId), repair, forceUseOfNonRemovableStorage, get(correlationVector), get(targetVolume), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> impl_IAppInstallManager3<D>::StartProductInstallForUserAsync(const Windows::System::User & user, hstring_ref productId, hstring_ref catalogId, hstring_ref flightId, hstring_ref clientId, bool repair, bool forceUseOfNonRemovableStorage, hstring_ref correlationVector, const Windows::Management::Deployment::PackageVolume & targetVolume) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation;
    check_hresult(static_cast<const IAppInstallManager3 &>(static_cast<const D &>(*this))->abi_StartProductInstallForUserAsync(get(user), get(productId), get(catalogId), get(flightId), get(clientId), repair, forceUseOfNonRemovableStorage, get(correlationVector), get(targetVolume), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> impl_IAppInstallManager3<D>::UpdateAppByPackageFamilyNameForUserAsync(const Windows::System::User & user, hstring_ref packageFamilyName, hstring_ref correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation;
    check_hresult(static_cast<const IAppInstallManager3 &>(static_cast<const D &>(*this))->abi_UpdateAppByPackageFamilyNameForUserAsync(get(user), get(packageFamilyName), get(correlationVector), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> impl_IAppInstallManager3<D>::SearchForUpdatesForUserAsync(const Windows::System::User & user, hstring_ref productId, hstring_ref skuId, hstring_ref catalogId, hstring_ref correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation;
    check_hresult(static_cast<const IAppInstallManager3 &>(static_cast<const D &>(*this))->abi_SearchForUpdatesForUserAsync(get(user), get(productId), get(skuId), get(catalogId), get(correlationVector), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> impl_IAppInstallManager3<D>::SearchForAllUpdatesForUserAsync(const Windows::System::User & user, hstring_ref correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation;
    check_hresult(static_cast<const IAppInstallManager3 &>(static_cast<const D &>(*this))->abi_SearchForAllUpdatesForUserAsync(get(user), get(correlationVector), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppInstallManager3<D>::GetIsAppAllowedToInstallForUserAsync(const Windows::System::User & user, hstring_ref productId, hstring_ref skuId, hstring_ref catalogId, hstring_ref correlationVector) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IAppInstallManager3 &>(static_cast<const D &>(*this))->abi_GetIsAppAllowedToInstallForUserAsync(get(user), get(productId), get(skuId), get(catalogId), get(correlationVector), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppInstallManager3<D>::GetIsApplicableForUserAsync(const Windows::System::User & user, hstring_ref productId, hstring_ref skuId) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IAppInstallManager3 &>(static_cast<const D &>(*this))->abi_GetIsApplicableForUserAsync(get(user), get(productId), get(skuId), put(operation)));
    return operation;
}

template <typename D> void impl_IAppInstallManager3<D>::MoveToFrontOfDownloadQueue(hstring_ref productId, hstring_ref correlationVector) const
{
    check_hresult(static_cast<const IAppInstallManager3 &>(static_cast<const D &>(*this))->abi_MoveToFrontOfDownloadQueue(get(productId), get(correlationVector)));
}

inline AppInstallManager::AppInstallManager() :
    AppInstallManager(activate_instance<AppInstallManager>())
{}

}

}
