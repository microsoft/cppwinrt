// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.Store.Preview.InstallControl.0.h"
#include "Windows.Management.Deployment.0.h"
#include "Windows.System.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Store::Preview::InstallControl {

struct __declspec(uuid("49d3dfab-168a-4cbf-a93a-9e448c82737d")) __declspec(novtable) IAppInstallItem : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ProductId(hstring * value) = 0;
    virtual HRESULT __stdcall get_PackageFamilyName(hstring * value) = 0;
    virtual HRESULT __stdcall get_InstallType(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType * value) = 0;
    virtual HRESULT __stdcall get_IsUserInitiated(bool * value) = 0;
    virtual HRESULT __stdcall abi_GetCurrentStatus(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus ** result) = 0;
    virtual HRESULT __stdcall abi_Cancel() = 0;
    virtual HRESULT __stdcall abi_Pause() = 0;
    virtual HRESULT __stdcall abi_Restart() = 0;
    virtual HRESULT __stdcall add_Completed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Completed(event_token token) = 0;
    virtual HRESULT __stdcall add_StatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StatusChanged(event_token token) = 0;
};

struct __declspec(uuid("d3972af8-40c0-4fd7-aa6c-0aa13ca6188c")) __declspec(novtable) IAppInstallItem2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CancelWithTelemetry(hstring correlationVector) = 0;
    virtual HRESULT __stdcall abi_PauseWithTelemetry(hstring correlationVector) = 0;
    virtual HRESULT __stdcall abi_RestartWithTelemetry(hstring correlationVector) = 0;
};

struct __declspec(uuid("9353e170-8441-4b45-bd72-7c2fa925beee")) __declspec(novtable) IAppInstallManager : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AppInstallItems(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> ** value) = 0;
    virtual HRESULT __stdcall abi_Cancel(hstring productId) = 0;
    virtual HRESULT __stdcall abi_Pause(hstring productId) = 0;
    virtual HRESULT __stdcall abi_Restart(hstring productId) = 0;
    virtual HRESULT __stdcall add_ItemCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ItemCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_ItemStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ItemStatusChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_AutoUpdateSetting(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting * value) = 0;
    virtual HRESULT __stdcall put_AutoUpdateSetting(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting value) = 0;
    virtual HRESULT __stdcall get_AcquisitionIdentity(hstring * value) = 0;
    virtual HRESULT __stdcall put_AcquisitionIdentity(hstring value) = 0;
    virtual HRESULT __stdcall abi_GetIsApplicableAsync(hstring productId, hstring skuId, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_StartAppInstallAsync(hstring productId, hstring skuId, bool repair, bool forceUseOfNonRemovableStorage, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> ** operation) = 0;
    virtual HRESULT __stdcall abi_UpdateAppByPackageFamilyNameAsync(hstring packageFamilyName, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> ** operation) = 0;
    virtual HRESULT __stdcall abi_SearchForUpdatesAsync(hstring productId, hstring skuId, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> ** operation) = 0;
    virtual HRESULT __stdcall abi_SearchForAllUpdatesAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> ** operation) = 0;
    virtual HRESULT __stdcall abi_IsStoreBlockedByPolicyAsync(hstring storeClientName, hstring storeClientPublisher, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetIsAppAllowedToInstallAsync(hstring productId, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
};

struct __declspec(uuid("16937851-ed37-480d-8314-52e27c03f04a")) __declspec(novtable) IAppInstallManager2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_StartAppInstallWithTelemetryAsync(hstring productId, hstring skuId, bool repair, bool forceUseOfNonRemovableStorage, hstring catalogId, hstring bundleId, hstring correlationVector, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> ** operation) = 0;
    virtual HRESULT __stdcall abi_UpdateAppByPackageFamilyNameWithTelemetryAsync(hstring packageFamilyName, hstring correlationVector, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> ** operation) = 0;
    virtual HRESULT __stdcall abi_SearchForUpdatesWithTelemetryAsync(hstring productId, hstring skuId, hstring catalogId, hstring correlationVector, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> ** operation) = 0;
    virtual HRESULT __stdcall abi_SearchForAllUpdatesWithTelemetryAsync(hstring correlationVector, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetIsAppAllowedToInstallWithTelemetryAsync(hstring productId, hstring skuId, hstring catalogId, hstring correlationVector, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_CancelWithTelemetry(hstring productId, hstring correlationVector) = 0;
    virtual HRESULT __stdcall abi_PauseWithTelemetry(hstring productId, hstring correlationVector) = 0;
    virtual HRESULT __stdcall abi_RestartWithTelemetry(hstring productId, hstring correlationVector) = 0;
};

struct __declspec(uuid("95b24b17-e96a-4d0e-84e1-c8cb417a0178")) __declspec(novtable) IAppInstallManager3 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_StartProductInstallAsync(hstring productId, hstring catalogId, hstring flightId, hstring clientId, bool repair, bool forceUseOfNonRemovableStorage, hstring correlationVector, Windows::Management::Deployment::IPackageVolume * targetVolume, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> ** operation) = 0;
    virtual HRESULT __stdcall abi_StartProductInstallForUserAsync(Windows::System::IUser * user, hstring productId, hstring catalogId, hstring flightId, hstring clientId, bool repair, bool forceUseOfNonRemovableStorage, hstring correlationVector, Windows::Management::Deployment::IPackageVolume * targetVolume, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> ** operation) = 0;
    virtual HRESULT __stdcall abi_UpdateAppByPackageFamilyNameForUserAsync(Windows::System::IUser * user, hstring packageFamilyName, hstring correlationVector, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> ** operation) = 0;
    virtual HRESULT __stdcall abi_SearchForUpdatesForUserAsync(Windows::System::IUser * user, hstring productId, hstring skuId, hstring catalogId, hstring correlationVector, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> ** operation) = 0;
    virtual HRESULT __stdcall abi_SearchForAllUpdatesForUserAsync(Windows::System::IUser * user, hstring correlationVector, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetIsAppAllowedToInstallForUserAsync(Windows::System::IUser * user, hstring productId, hstring skuId, hstring catalogId, hstring correlationVector, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetIsApplicableForUserAsync(Windows::System::IUser * user, hstring productId, hstring skuId, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_MoveToFrontOfDownloadQueue(hstring productId, hstring correlationVector) = 0;
};

struct __declspec(uuid("bc505743-4674-4dd1-957e-c25682086a14")) __declspec(novtable) IAppInstallManagerItemEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Item(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem ** value) = 0;
};

struct __declspec(uuid("936dccfa-2450-4126-88b1-6127a644dd5c")) __declspec(novtable) IAppInstallStatus : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InstallState(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState * value) = 0;
    virtual HRESULT __stdcall get_DownloadSizeInBytes(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_BytesDownloaded(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_PercentComplete(double * value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(HRESULT * value) = 0;
};

struct __declspec(uuid("96e7818a-5e92-4aa9-8edc-58fed4b87e00")) __declspec(novtable) IAppInstallStatus2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_User(Windows::System::IUser ** value) = 0;
    virtual HRESULT __stdcall get_ReadyForLaunch(bool * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> { using default_interface = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem; };
template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager> { using default_interface = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager; };
template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> { using default_interface = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs; };
template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus> { using default_interface = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus; };

}

namespace Windows::ApplicationModel::Store::Preview::InstallControl {

template <typename T> struct impl_IAppInstallItem;
template <typename T> struct impl_IAppInstallItem2;
template <typename T> struct impl_IAppInstallManager;
template <typename T> struct impl_IAppInstallManager2;
template <typename T> struct impl_IAppInstallManager3;
template <typename T> struct impl_IAppInstallManagerItemEventArgs;
template <typename T> struct impl_IAppInstallStatus;
template <typename T> struct impl_IAppInstallStatus2;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::InstallControl::impl_IAppInstallItem<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::InstallControl::impl_IAppInstallItem2<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::InstallControl::impl_IAppInstallManager<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::InstallControl::impl_IAppInstallManager2<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::InstallControl::impl_IAppInstallManager3<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::InstallControl::impl_IAppInstallManagerItemEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::InstallControl::impl_IAppInstallStatus<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::InstallControl::impl_IAppInstallStatus2<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem"; }
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager"; }
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManagerItemEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus"; }
};

}

}
