// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Management.Deployment.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.ApplicationModel.Store.Preview.InstallControl.2.h"
#include "winrt/Windows.ApplicationModel.Store.Preview.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::ProductId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem)->get_ProductId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::PackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem)->get_PackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::InstallType() const
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem)->get_InstallType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::IsUserInitiated() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem)->get_IsUserInitiated(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::GetCurrentStatus() const
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem)->GetCurrentStatus(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::Cancel() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem)->Cancel());
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::Pause() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem)->Pause());
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::Restart() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem)->Restart());
}

template <typename D> event_token consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::Completed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem)->add_Completed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>(this, &abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::remove_Completed, Completed(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::Completed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem)->remove_Completed(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::StatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem)->add_StatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>(this, &abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::remove_StatusChanged, StatusChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>::StatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem)->remove_StatusChanged(get_abi(token)));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2<D>::Cancel(param::hstring const& correlationVector) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2)->CancelWithTelemetry(get_abi(correlationVector)));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2<D>::Pause(param::hstring const& correlationVector) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2)->PauseWithTelemetry(get_abi(correlationVector)));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2<D>::Restart(param::hstring const& correlationVector) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2)->RestartWithTelemetry(get_abi(correlationVector)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem3<D>::Children() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3)->get_Children(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem3<D>::ItemOperationsMightAffectOtherItems() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3)->get_ItemOperationsMightAffectOtherItems(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::AppInstallItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->get_AppInstallItems(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::Cancel(param::hstring const& productId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->Cancel(get_abi(productId)));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::Pause(param::hstring const& productId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->Pause(get_abi(productId)));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::Restart(param::hstring const& productId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->Restart(get_abi(productId)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::ItemCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->add_ItemCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::ItemCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>(this, &abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::remove_ItemCompleted, ItemCompleted(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::ItemCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->remove_ItemCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::ItemStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->add_ItemStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::ItemStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>(this, &abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::remove_ItemStatusChanged, ItemStatusChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::ItemStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->remove_ItemStatusChanged(get_abi(token)));
}

template <typename D> Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::AutoUpdateSetting() const
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->get_AutoUpdateSetting(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::AutoUpdateSetting(Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->put_AutoUpdateSetting(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::AcquisitionIdentity() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->get_AcquisitionIdentity(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::AcquisitionIdentity(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->put_AcquisitionIdentity(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::GetIsApplicableAsync(param::hstring const& productId, param::hstring const& skuId) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->GetIsApplicableAsync(get_abi(productId), get_abi(skuId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::StartAppInstallAsync(param::hstring const& productId, param::hstring const& skuId, bool repair, bool forceUseOfNonRemovableStorage) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->StartAppInstallAsync(get_abi(productId), get_abi(skuId), repair, forceUseOfNonRemovableStorage, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::UpdateAppByPackageFamilyNameAsync(param::hstring const& packageFamilyName) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->UpdateAppByPackageFamilyNameAsync(get_abi(packageFamilyName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::SearchForUpdatesAsync(param::hstring const& productId, param::hstring const& skuId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->SearchForUpdatesAsync(get_abi(productId), get_abi(skuId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::SearchForAllUpdatesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->SearchForAllUpdatesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::IsStoreBlockedByPolicyAsync(param::hstring const& storeClientName, param::hstring const& storeClientPublisher) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->IsStoreBlockedByPolicyAsync(get_abi(storeClientName), get_abi(storeClientPublisher), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>::GetIsAppAllowedToInstallAsync(param::hstring const& productId) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager)->GetIsAppAllowedToInstallAsync(get_abi(productId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2<D>::StartAppInstallAsync(param::hstring const& productId, param::hstring const& skuId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& catalogId, param::hstring const& bundleId, param::hstring const& correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2)->StartAppInstallWithTelemetryAsync(get_abi(productId), get_abi(skuId), repair, forceUseOfNonRemovableStorage, get_abi(catalogId), get_abi(bundleId), get_abi(correlationVector), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2<D>::UpdateAppByPackageFamilyNameAsync(param::hstring const& packageFamilyName, param::hstring const& correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2)->UpdateAppByPackageFamilyNameWithTelemetryAsync(get_abi(packageFamilyName), get_abi(correlationVector), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2<D>::SearchForUpdatesAsync(param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2)->SearchForUpdatesWithTelemetryAsync(get_abi(productId), get_abi(skuId), get_abi(catalogId), get_abi(correlationVector), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2<D>::SearchForAllUpdatesAsync(param::hstring const& correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2)->SearchForAllUpdatesWithTelemetryAsync(get_abi(correlationVector), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2<D>::GetIsAppAllowedToInstallAsync(param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2)->GetIsAppAllowedToInstallWithTelemetryAsync(get_abi(productId), get_abi(skuId), get_abi(catalogId), get_abi(correlationVector), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2<D>::Cancel(param::hstring const& productId, param::hstring const& correlationVector) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2)->CancelWithTelemetry(get_abi(productId), get_abi(correlationVector)));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2<D>::Pause(param::hstring const& productId, param::hstring const& correlationVector) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2)->PauseWithTelemetry(get_abi(productId), get_abi(correlationVector)));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2<D>::Restart(param::hstring const& productId, param::hstring const& correlationVector) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2)->RestartWithTelemetry(get_abi(productId), get_abi(correlationVector)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3<D>::StartProductInstallAsync(param::hstring const& productId, param::hstring const& catalogId, param::hstring const& flightId, param::hstring const& clientId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& correlationVector, Windows::Management::Deployment::PackageVolume const& targetVolume) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3)->StartProductInstallAsync(get_abi(productId), get_abi(catalogId), get_abi(flightId), get_abi(clientId), repair, forceUseOfNonRemovableStorage, get_abi(correlationVector), get_abi(targetVolume), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3<D>::StartProductInstallForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& catalogId, param::hstring const& flightId, param::hstring const& clientId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& correlationVector, Windows::Management::Deployment::PackageVolume const& targetVolume) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3)->StartProductInstallForUserAsync(get_abi(user), get_abi(productId), get_abi(catalogId), get_abi(flightId), get_abi(clientId), repair, forceUseOfNonRemovableStorage, get_abi(correlationVector), get_abi(targetVolume), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3<D>::UpdateAppByPackageFamilyNameForUserAsync(Windows::System::User const& user, param::hstring const& packageFamilyName, param::hstring const& correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3)->UpdateAppByPackageFamilyNameForUserAsync(get_abi(user), get_abi(packageFamilyName), get_abi(correlationVector), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3<D>::SearchForUpdatesForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3)->SearchForUpdatesForUserAsync(get_abi(user), get_abi(productId), get_abi(skuId), get_abi(catalogId), get_abi(correlationVector), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3<D>::SearchForAllUpdatesForUserAsync(Windows::System::User const& user, param::hstring const& correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3)->SearchForAllUpdatesForUserAsync(get_abi(user), get_abi(correlationVector), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3<D>::GetIsAppAllowedToInstallForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3)->GetIsAppAllowedToInstallForUserAsync(get_abi(user), get_abi(productId), get_abi(skuId), get_abi(catalogId), get_abi(correlationVector), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3<D>::GetIsApplicableForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3)->GetIsApplicableForUserAsync(get_abi(user), get_abi(productId), get_abi(skuId), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3<D>::MoveToFrontOfDownloadQueue(param::hstring const& productId, param::hstring const& correlationVector) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3)->MoveToFrontOfDownloadQueue(get_abi(productId), get_abi(correlationVector)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4<D>::GetFreeUserEntitlementAsync(param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> ppAsyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4)->GetFreeUserEntitlementAsync(get_abi(storeId), get_abi(campaignId), get_abi(correlationVector), put_abi(ppAsyncOperation)));
    return ppAsyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4<D>::GetFreeUserEntitlementForUserAsync(Windows::System::User const& user, param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> ppAsyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4)->GetFreeUserEntitlementForUserAsync(get_abi(user), get_abi(storeId), get_abi(campaignId), get_abi(correlationVector), put_abi(ppAsyncOperation)));
    return ppAsyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4<D>::GetFreeDeviceEntitlementAsync(param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> ppAsyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4)->GetFreeDeviceEntitlementAsync(get_abi(storeId), get_abi(campaignId), get_abi(correlationVector), put_abi(ppAsyncOperation)));
    return ppAsyncOperation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager5<D>::AppInstallItemsWithGroupSupport() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5)->get_AppInstallItemsWithGroupSupport(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManagerItemEventArgs<D>::Item() const
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs)->get_Item(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<D>::InstallState() const
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus)->get_InstallState(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<D>::DownloadSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus)->get_DownloadSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<D>::BytesDownloaded() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus)->get_BytesDownloaded(&value));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<D>::PercentComplete() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus)->get_PercentComplete(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<D>::ErrorCode() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus2<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2)->get_User(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus2<D>::ReadyForLaunch() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2)->get_ReadyForLaunch(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus consume_Windows_ApplicationModel_Store_Preview_InstallControl_IGetEntitlementResult<D>::Status() const
{
    Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>
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

    HRESULT __stdcall get_PackageFamilyName(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_InstallType(abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstallType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsUserInitiated(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsUserInitiated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentStatus(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCurrentStatus());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Cancel() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Pause() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Restart() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Restart();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Completed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusChanged(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall CancelWithTelemetry(HSTRING correlationVector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel(*reinterpret_cast<hstring const*>(&correlationVector));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PauseWithTelemetry(HSTRING correlationVector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause(*reinterpret_cast<hstring const*>(&correlationVector));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RestartWithTelemetry(HSTRING correlationVector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Restart(*reinterpret_cast<hstring const*>(&correlationVector));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>
{
    HRESULT __stdcall get_Children(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Children());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemOperationsMightAffectOtherItems(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemOperationsMightAffectOtherItems());
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
    HRESULT __stdcall get_AppInstallItems(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppInstallItems());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Cancel(HSTRING productId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel(*reinterpret_cast<hstring const*>(&productId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Pause(HSTRING productId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause(*reinterpret_cast<hstring const*>(&productId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Restart(HSTRING productId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Restart(*reinterpret_cast<hstring const*>(&productId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ItemCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ItemCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ItemStatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ItemStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemStatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoUpdateSetting(abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoUpdateSetting());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoUpdateSetting(abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoUpdateSetting(*reinterpret_cast<Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AcquisitionIdentity(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AcquisitionIdentity());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AcquisitionIdentity(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcquisitionIdentity(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsApplicableAsync(HSTRING productId, HSTRING skuId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIsApplicableAsync(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&skuId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartAppInstallAsync(HSTRING productId, HSTRING skuId, bool repair, bool forceUseOfNonRemovableStorage, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartAppInstallAsync(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&skuId), repair, forceUseOfNonRemovableStorage));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateAppByPackageFamilyNameAsync(HSTRING packageFamilyName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().UpdateAppByPackageFamilyNameAsync(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SearchForUpdatesAsync(HSTRING productId, HSTRING skuId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SearchForUpdatesAsync(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&skuId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SearchForAllUpdatesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SearchForAllUpdatesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsStoreBlockedByPolicyAsync(HSTRING storeClientName, HSTRING storeClientPublisher, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().IsStoreBlockedByPolicyAsync(*reinterpret_cast<hstring const*>(&storeClientName), *reinterpret_cast<hstring const*>(&storeClientPublisher)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsAppAllowedToInstallAsync(HSTRING productId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIsAppAllowedToInstallAsync(*reinterpret_cast<hstring const*>(&productId)));
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
    HRESULT __stdcall StartAppInstallWithTelemetryAsync(HSTRING productId, HSTRING skuId, bool repair, bool forceUseOfNonRemovableStorage, HSTRING catalogId, HSTRING bundleId, HSTRING correlationVector, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartAppInstallAsync(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&skuId), repair, forceUseOfNonRemovableStorage, *reinterpret_cast<hstring const*>(&catalogId), *reinterpret_cast<hstring const*>(&bundleId), *reinterpret_cast<hstring const*>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateAppByPackageFamilyNameWithTelemetryAsync(HSTRING packageFamilyName, HSTRING correlationVector, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().UpdateAppByPackageFamilyNameAsync(*reinterpret_cast<hstring const*>(&packageFamilyName), *reinterpret_cast<hstring const*>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SearchForUpdatesWithTelemetryAsync(HSTRING productId, HSTRING skuId, HSTRING catalogId, HSTRING correlationVector, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SearchForUpdatesAsync(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&skuId), *reinterpret_cast<hstring const*>(&catalogId), *reinterpret_cast<hstring const*>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SearchForAllUpdatesWithTelemetryAsync(HSTRING correlationVector, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SearchForAllUpdatesAsync(*reinterpret_cast<hstring const*>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsAppAllowedToInstallWithTelemetryAsync(HSTRING productId, HSTRING skuId, HSTRING catalogId, HSTRING correlationVector, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIsAppAllowedToInstallAsync(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&skuId), *reinterpret_cast<hstring const*>(&catalogId), *reinterpret_cast<hstring const*>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CancelWithTelemetry(HSTRING productId, HSTRING correlationVector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&correlationVector));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PauseWithTelemetry(HSTRING productId, HSTRING correlationVector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&correlationVector));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RestartWithTelemetry(HSTRING productId, HSTRING correlationVector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Restart(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&correlationVector));
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
    HRESULT __stdcall StartProductInstallAsync(HSTRING productId, HSTRING catalogId, HSTRING flightId, HSTRING clientId, bool repair, bool forceUseOfNonRemovableStorage, HSTRING correlationVector, ::IUnknown* targetVolume, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartProductInstallAsync(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&catalogId), *reinterpret_cast<hstring const*>(&flightId), *reinterpret_cast<hstring const*>(&clientId), repair, forceUseOfNonRemovableStorage, *reinterpret_cast<hstring const*>(&correlationVector), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartProductInstallForUserAsync(::IUnknown* user, HSTRING productId, HSTRING catalogId, HSTRING flightId, HSTRING clientId, bool repair, bool forceUseOfNonRemovableStorage, HSTRING correlationVector, ::IUnknown* targetVolume, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartProductInstallForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&catalogId), *reinterpret_cast<hstring const*>(&flightId), *reinterpret_cast<hstring const*>(&clientId), repair, forceUseOfNonRemovableStorage, *reinterpret_cast<hstring const*>(&correlationVector), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateAppByPackageFamilyNameForUserAsync(::IUnknown* user, HSTRING packageFamilyName, HSTRING correlationVector, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().UpdateAppByPackageFamilyNameForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&packageFamilyName), *reinterpret_cast<hstring const*>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SearchForUpdatesForUserAsync(::IUnknown* user, HSTRING productId, HSTRING skuId, HSTRING catalogId, HSTRING correlationVector, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SearchForUpdatesForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&skuId), *reinterpret_cast<hstring const*>(&catalogId), *reinterpret_cast<hstring const*>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SearchForAllUpdatesForUserAsync(::IUnknown* user, HSTRING correlationVector, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SearchForAllUpdatesForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsAppAllowedToInstallForUserAsync(::IUnknown* user, HSTRING productId, HSTRING skuId, HSTRING catalogId, HSTRING correlationVector, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIsAppAllowedToInstallForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&skuId), *reinterpret_cast<hstring const*>(&catalogId), *reinterpret_cast<hstring const*>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsApplicableForUserAsync(::IUnknown* user, HSTRING productId, HSTRING skuId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIsApplicableForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&skuId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveToFrontOfDownloadQueue(HSTRING productId, HSTRING correlationVector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MoveToFrontOfDownloadQueue(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&correlationVector));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>
{
    HRESULT __stdcall GetFreeUserEntitlementAsync(HSTRING storeId, HSTRING campaignId, HSTRING correlationVector, ::IUnknown** ppAsyncOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppAsyncOperation = detach_abi(this->shim().GetFreeUserEntitlementAsync(*reinterpret_cast<hstring const*>(&storeId), *reinterpret_cast<hstring const*>(&campaignId), *reinterpret_cast<hstring const*>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *ppAsyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFreeUserEntitlementForUserAsync(::IUnknown* user, HSTRING storeId, HSTRING campaignId, HSTRING correlationVector, ::IUnknown** ppAsyncOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppAsyncOperation = detach_abi(this->shim().GetFreeUserEntitlementForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&storeId), *reinterpret_cast<hstring const*>(&campaignId), *reinterpret_cast<hstring const*>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *ppAsyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFreeDeviceEntitlementAsync(HSTRING storeId, HSTRING campaignId, HSTRING correlationVector, ::IUnknown** ppAsyncOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppAsyncOperation = detach_abi(this->shim().GetFreeDeviceEntitlementAsync(*reinterpret_cast<hstring const*>(&storeId), *reinterpret_cast<hstring const*>(&campaignId), *reinterpret_cast<hstring const*>(&correlationVector)));
            return S_OK;
        }
        catch (...)
        {
            *ppAsyncOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>
{
    HRESULT __stdcall get_AppInstallItemsWithGroupSupport(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppInstallItemsWithGroupSupport());
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
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>
{
    HRESULT __stdcall get_Item(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Item());
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
    HRESULT __stdcall get_InstallState(abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState>* value) noexcept override
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

    HRESULT __stdcall get_DownloadSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DownloadSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytesDownloaded(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BytesDownloaded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PercentComplete(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PercentComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(abi_t<HRESULT>* value) noexcept override
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
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>
{
    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadyForLaunch(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadyForLaunch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult> : produce_base<D, Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus>* value) noexcept override
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

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::Preview::InstallControl {

inline AppInstallManager::AppInstallManager() :
    AppInstallManager(activate_instance<AppInstallManager>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> {};

}

WINRT_WARNING_POP
