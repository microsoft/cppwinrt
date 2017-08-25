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
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.Services.Store.2.h"

namespace winrt::impl {

template <typename D> Windows::Services::Store::StorePackageLicense consume_Windows_Services_Store_IStoreAcquireLicenseResult<D>::StorePackageLicense() const
{
    Windows::Services::Store::StorePackageLicense value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAcquireLicenseResult)->get_StorePackageLicense(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Services_Store_IStoreAcquireLicenseResult<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAcquireLicenseResult)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreAppLicense<D>::SkuStoreId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAppLicense)->get_SkuStoreId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Store_IStoreAppLicense<D>::IsActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAppLicense)->get_IsActive(&value));
    return value;
}

template <typename D> bool consume_Windows_Services_Store_IStoreAppLicense<D>::IsTrial() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAppLicense)->get_IsTrial(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Services_Store_IStoreAppLicense<D>::ExpirationDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAppLicense)->get_ExpirationDate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreAppLicense<D>::ExtendedJsonData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAppLicense)->get_ExtendedJsonData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreLicense> consume_Windows_Services_Store_IStoreAppLicense<D>::AddOnLicenses() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreLicense> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAppLicense)->get_AddOnLicenses(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Services_Store_IStoreAppLicense<D>::TrialTimeRemaining() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAppLicense)->get_TrialTimeRemaining(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Store_IStoreAppLicense<D>::IsTrialOwnedByThisUser() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAppLicense)->get_IsTrialOwnedByThisUser(&value));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreAppLicense<D>::TrialUniqueId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAppLicense)->get_TrialUniqueId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreAvailability<D>::StoreId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAvailability)->get_StoreId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Services_Store_IStoreAvailability<D>::EndDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAvailability)->get_EndDate(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Store::StorePrice consume_Windows_Services_Store_IStoreAvailability<D>::Price() const
{
    Windows::Services::Store::StorePrice value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAvailability)->get_Price(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreAvailability<D>::ExtendedJsonData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAvailability)->get_ExtendedJsonData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> consume_Windows_Services_Store_IStoreAvailability<D>::RequestPurchaseAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAvailability)->RequestPurchaseAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> consume_Windows_Services_Store_IStoreAvailability<D>::RequestPurchaseAsync(Windows::Services::Store::StorePurchaseProperties const& storePurchaseProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreAvailability)->RequestPurchaseWithPurchasePropertiesAsync(get_abi(storePurchaseProperties), put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Services_Store_IStoreCollectionData<D>::IsTrial() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreCollectionData)->get_IsTrial(&value));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreCollectionData<D>::CampaignId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreCollectionData)->get_CampaignId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreCollectionData<D>::DeveloperOfferId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreCollectionData)->get_DeveloperOfferId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Services_Store_IStoreCollectionData<D>::AcquiredDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreCollectionData)->get_AcquiredDate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Services_Store_IStoreCollectionData<D>::StartDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreCollectionData)->get_StartDate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Services_Store_IStoreCollectionData<D>::EndDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreCollectionData)->get_EndDate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Services_Store_IStoreCollectionData<D>::TrialTimeRemaining() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreCollectionData)->get_TrialTimeRemaining(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreCollectionData<D>::ExtendedJsonData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreCollectionData)->get_ExtendedJsonData(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Store::StoreConsumableStatus consume_Windows_Services_Store_IStoreConsumableResult<D>::Status() const
{
    Windows::Services::Store::StoreConsumableStatus value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreConsumableResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Services_Store_IStoreConsumableResult<D>::TrackingId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreConsumableResult)->get_TrackingId(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Services_Store_IStoreConsumableResult<D>::BalanceRemaining() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreConsumableResult)->get_BalanceRemaining(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_Services_Store_IStoreConsumableResult<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreConsumableResult)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_Services_Store_IStoreContext<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->get_User(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Services_Store_IStoreContext<D>::OfflineLicensesChanged(Windows::Foundation::TypedEventHandler<Windows::Services::Store::StoreContext, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->add_OfflineLicensesChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Services::Store::IStoreContext> consume_Windows_Services_Store_IStoreContext<D>::OfflineLicensesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Store::StoreContext, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Services::Store::IStoreContext>(this, &abi_t<Windows::Services::Store::IStoreContext>::remove_OfflineLicensesChanged, OfflineLicensesChanged(handler));
}

template <typename D> void consume_Windows_Services_Store_IStoreContext<D>::OfflineLicensesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->remove_OfflineLicensesChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Services_Store_IStoreContext<D>::GetCustomerPurchaseIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->GetCustomerPurchaseIdAsync(get_abi(serviceTicket), get_abi(publisherUserId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Services_Store_IStoreContext<D>::GetCustomerCollectionsIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->GetCustomerCollectionsIdAsync(get_abi(serviceTicket), get_abi(publisherUserId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAppLicense> consume_Windows_Services_Store_IStoreContext<D>::GetAppLicenseAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAppLicense> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->GetAppLicenseAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductResult> consume_Windows_Services_Store_IStoreContext<D>::GetStoreProductForCurrentAppAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->GetStoreProductForCurrentAppAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> consume_Windows_Services_Store_IStoreContext<D>::GetStoreProductsAsync(param::async_iterable<hstring> const& productKinds, param::async_iterable<hstring> const& storeIds) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->GetStoreProductsAsync(get_abi(productKinds), get_abi(storeIds), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> consume_Windows_Services_Store_IStoreContext<D>::GetAssociatedStoreProductsAsync(param::async_iterable<hstring> const& productKinds) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->GetAssociatedStoreProductsAsync(get_abi(productKinds), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> consume_Windows_Services_Store_IStoreContext<D>::GetAssociatedStoreProductsWithPagingAsync(param::async_iterable<hstring> const& productKinds, uint32_t maxItemsToRetrievePerPage) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->GetAssociatedStoreProductsWithPagingAsync(get_abi(productKinds), maxItemsToRetrievePerPage, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> consume_Windows_Services_Store_IStoreContext<D>::GetUserCollectionAsync(param::async_iterable<hstring> const& productKinds) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->GetUserCollectionAsync(get_abi(productKinds), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> consume_Windows_Services_Store_IStoreContext<D>::GetUserCollectionWithPagingAsync(param::async_iterable<hstring> const& productKinds, uint32_t maxItemsToRetrievePerPage) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->GetUserCollectionWithPagingAsync(get_abi(productKinds), maxItemsToRetrievePerPage, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult> consume_Windows_Services_Store_IStoreContext<D>::ReportConsumableFulfillmentAsync(param::hstring const& productStoreId, uint32_t quantity, GUID const& trackingId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->ReportConsumableFulfillmentAsync(get_abi(productStoreId), quantity, get_abi(trackingId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult> consume_Windows_Services_Store_IStoreContext<D>::GetConsumableBalanceRemainingAsync(param::hstring const& productStoreId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->GetConsumableBalanceRemainingAsync(get_abi(productStoreId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAcquireLicenseResult> consume_Windows_Services_Store_IStoreContext<D>::AcquireStoreLicenseForOptionalPackageAsync(Windows::ApplicationModel::Package const& optionalPackage) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAcquireLicenseResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->AcquireStoreLicenseForOptionalPackageAsync(get_abi(optionalPackage), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> consume_Windows_Services_Store_IStoreContext<D>::RequestPurchaseAsync(param::hstring const& storeId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->RequestPurchaseAsync(get_abi(storeId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> consume_Windows_Services_Store_IStoreContext<D>::RequestPurchaseAsync(param::hstring const& storeId, Windows::Services::Store::StorePurchaseProperties const& storePurchaseProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->RequestPurchaseWithPurchasePropertiesAsync(get_abi(storeId), get_abi(storePurchaseProperties), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdate>> consume_Windows_Services_Store_IStoreContext<D>::GetAppAndOptionalStorePackageUpdatesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdate>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->GetAppAndOptionalStorePackageUpdatesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> consume_Windows_Services_Store_IStoreContext<D>::RequestDownloadStorePackageUpdatesAsync(param::async_iterable<Windows::Services::Store::StorePackageUpdate> const& storePackageUpdates) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->RequestDownloadStorePackageUpdatesAsync(get_abi(storePackageUpdates), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> consume_Windows_Services_Store_IStoreContext<D>::RequestDownloadAndInstallStorePackageUpdatesAsync(param::async_iterable<Windows::Services::Store::StorePackageUpdate> const& storePackageUpdates) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->RequestDownloadAndInstallStorePackageUpdatesAsync(get_abi(storePackageUpdates), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> consume_Windows_Services_Store_IStoreContext<D>::RequestDownloadAndInstallStorePackagesAsync(param::async_iterable<hstring> const& storeIds) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext)->RequestDownloadAndInstallStorePackagesAsync(get_abi(storeIds), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductResult> consume_Windows_Services_Store_IStoreContext2<D>::FindStoreProductForPackageAsync(param::async_iterable<hstring> const& productKinds, Windows::ApplicationModel::Package const& package) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContext2)->FindStoreProductForPackageAsync(get_abi(productKinds), get_abi(package), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Services::Store::StoreContext consume_Windows_Services_Store_IStoreContextStatics<D>::GetDefault() const
{
    Windows::Services::Store::StoreContext value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContextStatics)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Store::StoreContext consume_Windows_Services_Store_IStoreContextStatics<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::Services::Store::StoreContext value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreContextStatics)->GetForUser(get_abi(user), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Services_Store_IStoreImage<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreImage)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreImage<D>::ImagePurposeTag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreImage)->get_ImagePurposeTag(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Services_Store_IStoreImage<D>::Width() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreImage)->get_Width(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Services_Store_IStoreImage<D>::Height() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreImage)->get_Height(&value));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreImage<D>::Caption() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreImage)->get_Caption(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreLicense<D>::SkuStoreId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreLicense)->get_SkuStoreId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Store_IStoreLicense<D>::IsActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreLicense)->get_IsActive(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Services_Store_IStoreLicense<D>::ExpirationDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreLicense)->get_ExpirationDate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreLicense<D>::ExtendedJsonData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreLicense)->get_ExtendedJsonData(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreLicense<D>::InAppOfferToken() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreLicense)->get_InAppOfferToken(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Services_Store_IStorePackageLicense<D>::LicenseLost(Windows::Foundation::TypedEventHandler<Windows::Services::Store::StorePackageLicense, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePackageLicense)->add_LicenseLost(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Services::Store::IStorePackageLicense> consume_Windows_Services_Store_IStorePackageLicense<D>::LicenseLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Store::StorePackageLicense, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Services::Store::IStorePackageLicense>(this, &abi_t<Windows::Services::Store::IStorePackageLicense>::remove_LicenseLost, LicenseLost(handler));
}

template <typename D> void consume_Windows_Services_Store_IStorePackageLicense<D>::LicenseLost(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePackageLicense)->remove_LicenseLost(get_abi(token)));
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_Services_Store_IStorePackageLicense<D>::Package() const
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePackageLicense)->get_Package(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Store_IStorePackageLicense<D>::IsValid() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePackageLicense)->get_IsValid(&value));
    return value;
}

template <typename D> void consume_Windows_Services_Store_IStorePackageLicense<D>::ReleaseLicense() const
{
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePackageLicense)->ReleaseLicense());
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_Services_Store_IStorePackageUpdate<D>::Package() const
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePackageUpdate)->get_Package(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Store_IStorePackageUpdate<D>::Mandatory() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePackageUpdate)->get_Mandatory(&value));
    return value;
}

template <typename D> Windows::Services::Store::StorePackageUpdateState consume_Windows_Services_Store_IStorePackageUpdateResult<D>::OverallState() const
{
    Windows::Services::Store::StorePackageUpdateState value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePackageUpdateResult)->get_OverallState(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdateStatus> consume_Windows_Services_Store_IStorePackageUpdateResult<D>::StorePackageUpdateStatuses() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdateStatus> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePackageUpdateResult)->get_StorePackageUpdateStatuses(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStorePrice<D>::FormattedBasePrice() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePrice)->get_FormattedBasePrice(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStorePrice<D>::FormattedPrice() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePrice)->get_FormattedPrice(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Store_IStorePrice<D>::IsOnSale() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePrice)->get_IsOnSale(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Services_Store_IStorePrice<D>::SaleEndDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePrice)->get_SaleEndDate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStorePrice<D>::CurrencyCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePrice)->get_CurrencyCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStorePrice<D>::FormattedRecurrencePrice() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePrice)->get_FormattedRecurrencePrice(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreProduct<D>::StoreId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_StoreId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreProduct<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_Language(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreProduct<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_Title(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreProduct<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_Description(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreProduct<D>::ProductKind() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_ProductKind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Store_IStoreProduct<D>::HasDigitalDownload() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_HasDigitalDownload(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Services_Store_IStoreProduct<D>::Keywords() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_Keywords(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage> consume_Windows_Services_Store_IStoreProduct<D>::Images() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_Images(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo> consume_Windows_Services_Store_IStoreProduct<D>::Videos() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_Videos(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreSku> consume_Windows_Services_Store_IStoreProduct<D>::Skus() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreSku> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_Skus(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Store_IStoreProduct<D>::IsInUserCollection() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_IsInUserCollection(&value));
    return value;
}

template <typename D> Windows::Services::Store::StorePrice consume_Windows_Services_Store_IStoreProduct<D>::Price() const
{
    Windows::Services::Store::StorePrice value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_Price(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreProduct<D>::ExtendedJsonData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_ExtendedJsonData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Services_Store_IStoreProduct<D>::LinkUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_LinkUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Services_Store_IStoreProduct<D>::GetIsAnySkuInstalledAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->GetIsAnySkuInstalledAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> consume_Windows_Services_Store_IStoreProduct<D>::RequestPurchaseAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->RequestPurchaseAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> consume_Windows_Services_Store_IStoreProduct<D>::RequestPurchaseAsync(Windows::Services::Store::StorePurchaseProperties const& storePurchaseProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->RequestPurchaseWithPurchasePropertiesAsync(get_abi(storePurchaseProperties), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreProduct<D>::InAppOfferToken() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProduct)->get_InAppOfferToken(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct> consume_Windows_Services_Store_IStoreProductPagedQueryResult<D>::Products() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProductPagedQueryResult)->get_Products(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Store_IStoreProductPagedQueryResult<D>::HasMoreResults() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProductPagedQueryResult)->get_HasMoreResults(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_Services_Store_IStoreProductPagedQueryResult<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProductPagedQueryResult)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> consume_Windows_Services_Store_IStoreProductPagedQueryResult<D>::GetNextAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProductPagedQueryResult)->GetNextAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct> consume_Windows_Services_Store_IStoreProductQueryResult<D>::Products() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProductQueryResult)->get_Products(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Services_Store_IStoreProductQueryResult<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProductQueryResult)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Store::StoreProduct consume_Windows_Services_Store_IStoreProductResult<D>::Product() const
{
    Windows::Services::Store::StoreProduct value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProductResult)->get_Product(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Services_Store_IStoreProductResult<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreProductResult)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStorePurchaseProperties<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePurchaseProperties)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Services_Store_IStorePurchaseProperties<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePurchaseProperties)->put_Name(get_abi(value)));
}

template <typename D> hstring consume_Windows_Services_Store_IStorePurchaseProperties<D>::ExtendedJsonData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePurchaseProperties)->get_ExtendedJsonData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Services_Store_IStorePurchaseProperties<D>::ExtendedJsonData(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePurchaseProperties)->put_ExtendedJsonData(get_abi(value)));
}

template <typename D> Windows::Services::Store::StorePurchaseProperties consume_Windows_Services_Store_IStorePurchasePropertiesFactory<D>::Create(param::hstring const& name) const
{
    Windows::Services::Store::StorePurchaseProperties storePurchaseProperties{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePurchasePropertiesFactory)->Create(get_abi(name), put_abi(storePurchaseProperties)));
    return storePurchaseProperties;
}

template <typename D> Windows::Services::Store::StorePurchaseStatus consume_Windows_Services_Store_IStorePurchaseResult<D>::Status() const
{
    Windows::Services::Store::StorePurchaseStatus value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePurchaseResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Services_Store_IStorePurchaseResult<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStorePurchaseResult)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreSendRequestResult> consume_Windows_Services_Store_IStoreRequestHelperStatics<D>::SendRequestAsync(Windows::Services::Store::StoreContext const& context, uint32_t requestKind, param::hstring const& parametersAsJson) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreSendRequestResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreRequestHelperStatics)->SendRequestAsync(get_abi(context), requestKind, get_abi(parametersAsJson), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreSendRequestResult<D>::Response() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSendRequestResult)->get_Response(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Services_Store_IStoreSendRequestResult<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSendRequestResult)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpStatusCode consume_Windows_Services_Store_IStoreSendRequestResult2<D>::HttpStatusCode() const
{
    Windows::Web::Http::HttpStatusCode value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSendRequestResult2)->get_HttpStatusCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreSku<D>::StoreId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_StoreId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreSku<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_Language(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreSku<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_Title(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreSku<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_Description(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Store_IStoreSku<D>::IsTrial() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_IsTrial(&value));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreSku<D>::CustomDeveloperData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_CustomDeveloperData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage> consume_Windows_Services_Store_IStoreSku<D>::Images() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_Images(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo> consume_Windows_Services_Store_IStoreSku<D>::Videos() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_Videos(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreAvailability> consume_Windows_Services_Store_IStoreSku<D>::Availabilities() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreAvailability> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_Availabilities(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Store::StorePrice consume_Windows_Services_Store_IStoreSku<D>::Price() const
{
    Windows::Services::Store::StorePrice value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_Price(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreSku<D>::ExtendedJsonData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_ExtendedJsonData(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Store_IStoreSku<D>::IsInUserCollection() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_IsInUserCollection(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Services_Store_IStoreSku<D>::BundledSkus() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_BundledSkus(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Store::StoreCollectionData consume_Windows_Services_Store_IStoreSku<D>::CollectionData() const
{
    Windows::Services::Store::StoreCollectionData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_CollectionData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Services_Store_IStoreSku<D>::GetIsInstalledAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->GetIsInstalledAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> consume_Windows_Services_Store_IStoreSku<D>::RequestPurchaseAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->RequestPurchaseAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> consume_Windows_Services_Store_IStoreSku<D>::RequestPurchaseAsync(Windows::Services::Store::StorePurchaseProperties const& storePurchaseProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->RequestPurchaseWithPurchasePropertiesAsync(get_abi(storePurchaseProperties), put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Services_Store_IStoreSku<D>::IsSubscription() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_IsSubscription(&value));
    return value;
}

template <typename D> Windows::Services::Store::StoreSubscriptionInfo consume_Windows_Services_Store_IStoreSku<D>::SubscriptionInfo() const
{
    Windows::Services::Store::StoreSubscriptionInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSku)->get_SubscriptionInfo(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Services_Store_IStoreSubscriptionInfo<D>::BillingPeriod() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSubscriptionInfo)->get_BillingPeriod(&value));
    return value;
}

template <typename D> Windows::Services::Store::StoreDurationUnit consume_Windows_Services_Store_IStoreSubscriptionInfo<D>::BillingPeriodUnit() const
{
    Windows::Services::Store::StoreDurationUnit value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSubscriptionInfo)->get_BillingPeriodUnit(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_Store_IStoreSubscriptionInfo<D>::HasTrialPeriod() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSubscriptionInfo)->get_HasTrialPeriod(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Services_Store_IStoreSubscriptionInfo<D>::TrialPeriod() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSubscriptionInfo)->get_TrialPeriod(&value));
    return value;
}

template <typename D> Windows::Services::Store::StoreDurationUnit consume_Windows_Services_Store_IStoreSubscriptionInfo<D>::TrialPeriodUnit() const
{
    Windows::Services::Store::StoreDurationUnit value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreSubscriptionInfo)->get_TrialPeriodUnit(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Services_Store_IStoreVideo<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreVideo)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreVideo<D>::VideoPurposeTag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreVideo)->get_VideoPurposeTag(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Services_Store_IStoreVideo<D>::Width() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreVideo)->get_Width(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Services_Store_IStoreVideo<D>::Height() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreVideo)->get_Height(&value));
    return value;
}

template <typename D> hstring consume_Windows_Services_Store_IStoreVideo<D>::Caption() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreVideo)->get_Caption(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Store::StoreImage consume_Windows_Services_Store_IStoreVideo<D>::PreviewImage() const
{
    Windows::Services::Store::StoreImage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Store::IStoreVideo)->get_PreviewImage(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Services::Store::IStoreAcquireLicenseResult> : produce_base<D, Windows::Services::Store::IStoreAcquireLicenseResult>
{
    HRESULT __stdcall get_StorePackageLicense(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StorePackageLicense());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) noexcept override
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
struct produce<D, Windows::Services::Store::IStoreAppLicense> : produce_base<D, Windows::Services::Store::IStoreAppLicense>
{
    HRESULT __stdcall get_SkuStoreId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SkuStoreId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsActive(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTrial(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTrial());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationDate(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpirationDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedJsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AddOnLicenses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AddOnLicenses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrialTimeRemaining(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrialTimeRemaining());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTrialOwnedByThisUser(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTrialOwnedByThisUser());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrialUniqueId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrialUniqueId());
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
struct produce<D, Windows::Services::Store::IStoreAvailability> : produce_base<D, Windows::Services::Store::IStoreAvailability>
{
    HRESULT __stdcall get_StoreId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StoreId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndDate(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Price(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Price());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedJsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestPurchaseAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestPurchaseAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestPurchaseWithPurchasePropertiesAsync(::IUnknown* storePurchaseProperties, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestPurchaseAsync(*reinterpret_cast<Windows::Services::Store::StorePurchaseProperties const*>(&storePurchaseProperties)));
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
struct produce<D, Windows::Services::Store::IStoreCollectionData> : produce_base<D, Windows::Services::Store::IStoreCollectionData>
{
    HRESULT __stdcall get_IsTrial(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTrial());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CampaignId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CampaignId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeveloperOfferId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeveloperOfferId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AcquiredDate(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AcquiredDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartDate(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndDate(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrialTimeRemaining(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrialTimeRemaining());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedJsonData());
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
struct produce<D, Windows::Services::Store::IStoreConsumableResult> : produce_base<D, Windows::Services::Store::IStoreConsumableResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Services::Store::StoreConsumableStatus>* value) noexcept override
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

    HRESULT __stdcall get_TrackingId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrackingId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BalanceRemaining(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BalanceRemaining());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) noexcept override
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
struct produce<D, Windows::Services::Store::IStoreContext> : produce_base<D, Windows::Services::Store::IStoreContext>
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

    HRESULT __stdcall add_OfflineLicensesChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().OfflineLicensesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::Store::StoreContext, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OfflineLicensesChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OfflineLicensesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCustomerPurchaseIdAsync(HSTRING serviceTicket, HSTRING publisherUserId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCustomerPurchaseIdAsync(*reinterpret_cast<hstring const*>(&serviceTicket), *reinterpret_cast<hstring const*>(&publisherUserId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCustomerCollectionsIdAsync(HSTRING serviceTicket, HSTRING publisherUserId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCustomerCollectionsIdAsync(*reinterpret_cast<hstring const*>(&serviceTicket), *reinterpret_cast<hstring const*>(&publisherUserId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAppLicenseAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAppLicenseAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStoreProductForCurrentAppAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetStoreProductForCurrentAppAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStoreProductsAsync(::IUnknown* productKinds, ::IUnknown* storeIds, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetStoreProductsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&productKinds), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&storeIds)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAssociatedStoreProductsAsync(::IUnknown* productKinds, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAssociatedStoreProductsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&productKinds)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAssociatedStoreProductsWithPagingAsync(::IUnknown* productKinds, uint32_t maxItemsToRetrievePerPage, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAssociatedStoreProductsWithPagingAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&productKinds), maxItemsToRetrievePerPage));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUserCollectionAsync(::IUnknown* productKinds, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetUserCollectionAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&productKinds)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUserCollectionWithPagingAsync(::IUnknown* productKinds, uint32_t maxItemsToRetrievePerPage, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetUserCollectionWithPagingAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&productKinds), maxItemsToRetrievePerPage));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportConsumableFulfillmentAsync(HSTRING productStoreId, uint32_t quantity, abi_t<GUID> trackingId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ReportConsumableFulfillmentAsync(*reinterpret_cast<hstring const*>(&productStoreId), quantity, *reinterpret_cast<GUID const*>(&trackingId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetConsumableBalanceRemainingAsync(HSTRING productStoreId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetConsumableBalanceRemainingAsync(*reinterpret_cast<hstring const*>(&productStoreId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AcquireStoreLicenseForOptionalPackageAsync(::IUnknown* optionalPackage, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AcquireStoreLicenseForOptionalPackageAsync(*reinterpret_cast<Windows::ApplicationModel::Package const*>(&optionalPackage)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestPurchaseAsync(HSTRING storeId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestPurchaseAsync(*reinterpret_cast<hstring const*>(&storeId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestPurchaseWithPurchasePropertiesAsync(HSTRING storeId, ::IUnknown* storePurchaseProperties, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestPurchaseAsync(*reinterpret_cast<hstring const*>(&storeId), *reinterpret_cast<Windows::Services::Store::StorePurchaseProperties const*>(&storePurchaseProperties)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAppAndOptionalStorePackageUpdatesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAppAndOptionalStorePackageUpdatesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestDownloadStorePackageUpdatesAsync(::IUnknown* storePackageUpdates, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestDownloadStorePackageUpdatesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Store::StorePackageUpdate> const*>(&storePackageUpdates)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestDownloadAndInstallStorePackageUpdatesAsync(::IUnknown* storePackageUpdates, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestDownloadAndInstallStorePackageUpdatesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Store::StorePackageUpdate> const*>(&storePackageUpdates)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestDownloadAndInstallStorePackagesAsync(::IUnknown* storeIds, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestDownloadAndInstallStorePackagesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&storeIds)));
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
struct produce<D, Windows::Services::Store::IStoreContext2> : produce_base<D, Windows::Services::Store::IStoreContext2>
{
    HRESULT __stdcall FindStoreProductForPackageAsync(::IUnknown* productKinds, ::IUnknown* package, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindStoreProductForPackageAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&productKinds), *reinterpret_cast<Windows::ApplicationModel::Package const*>(&package)));
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
struct produce<D, Windows::Services::Store::IStoreContextStatics> : produce_base<D, Windows::Services::Store::IStoreContextStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
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
struct produce<D, Windows::Services::Store::IStoreImage> : produce_base<D, Windows::Services::Store::IStoreImage>
{
    HRESULT __stdcall get_Uri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImagePurposeTag(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImagePurposeTag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Caption(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Caption());
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
struct produce<D, Windows::Services::Store::IStoreLicense> : produce_base<D, Windows::Services::Store::IStoreLicense>
{
    HRESULT __stdcall get_SkuStoreId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SkuStoreId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsActive(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationDate(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpirationDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedJsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InAppOfferToken(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InAppOfferToken());
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
struct produce<D, Windows::Services::Store::IStorePackageLicense> : produce_base<D, Windows::Services::Store::IStorePackageLicense>
{
    HRESULT __stdcall add_LicenseLost(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().LicenseLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::Store::StorePackageLicense, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LicenseLost(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LicenseLost(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_IsValid(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsValid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReleaseLicense() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReleaseLicense();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStorePackageUpdate> : produce_base<D, Windows::Services::Store::IStorePackageUpdate>
{
    HRESULT __stdcall get_Package(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Mandatory(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mandatory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStorePackageUpdateResult> : produce_base<D, Windows::Services::Store::IStorePackageUpdateResult>
{
    HRESULT __stdcall get_OverallState(abi_t<Windows::Services::Store::StorePackageUpdateState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OverallState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StorePackageUpdateStatuses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StorePackageUpdateStatuses());
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
struct produce<D, Windows::Services::Store::IStorePrice> : produce_base<D, Windows::Services::Store::IStorePrice>
{
    HRESULT __stdcall get_FormattedBasePrice(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FormattedBasePrice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FormattedPrice(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FormattedPrice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOnSale(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOnSale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SaleEndDate(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SaleEndDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrencyCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrencyCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FormattedRecurrencePrice(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FormattedRecurrencePrice());
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
struct produce<D, Windows::Services::Store::IStoreProduct> : produce_base<D, Windows::Services::Store::IStoreProduct>
{
    HRESULT __stdcall get_StoreId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StoreId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_ProductKind(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProductKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasDigitalDownload(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasDigitalDownload());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Keywords(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Keywords());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Images(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Images());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Videos(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Videos());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Skus(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Skus());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInUserCollection(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInUserCollection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Price(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Price());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedJsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinkUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LinkUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsAnySkuInstalledAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIsAnySkuInstalledAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestPurchaseAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestPurchaseAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestPurchaseWithPurchasePropertiesAsync(::IUnknown* storePurchaseProperties, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestPurchaseAsync(*reinterpret_cast<Windows::Services::Store::StorePurchaseProperties const*>(&storePurchaseProperties)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InAppOfferToken(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InAppOfferToken());
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
struct produce<D, Windows::Services::Store::IStoreProductPagedQueryResult> : produce_base<D, Windows::Services::Store::IStoreProductPagedQueryResult>
{
    HRESULT __stdcall get_Products(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Products());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasMoreResults(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasMoreResults());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) noexcept override
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

    HRESULT __stdcall GetNextAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetNextAsync());
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
struct produce<D, Windows::Services::Store::IStoreProductQueryResult> : produce_base<D, Windows::Services::Store::IStoreProductQueryResult>
{
    HRESULT __stdcall get_Products(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Products());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) noexcept override
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
struct produce<D, Windows::Services::Store::IStoreProductResult> : produce_base<D, Windows::Services::Store::IStoreProductResult>
{
    HRESULT __stdcall get_Product(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Product());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) noexcept override
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
struct produce<D, Windows::Services::Store::IStorePurchaseProperties> : produce_base<D, Windows::Services::Store::IStorePurchaseProperties>
{
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

    HRESULT __stdcall put_Name(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedJsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExtendedJsonData(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExtendedJsonData(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStorePurchasePropertiesFactory> : produce_base<D, Windows::Services::Store::IStorePurchasePropertiesFactory>
{
    HRESULT __stdcall Create(HSTRING name, ::IUnknown** storePurchaseProperties) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *storePurchaseProperties = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *storePurchaseProperties = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStorePurchaseResult> : produce_base<D, Windows::Services::Store::IStorePurchaseResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Services::Store::StorePurchaseStatus>* value) noexcept override
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

    HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) noexcept override
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
struct produce<D, Windows::Services::Store::IStoreRequestHelperStatics> : produce_base<D, Windows::Services::Store::IStoreRequestHelperStatics>
{
    HRESULT __stdcall SendRequestAsync(::IUnknown* context, uint32_t requestKind, HSTRING parametersAsJson, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendRequestAsync(*reinterpret_cast<Windows::Services::Store::StoreContext const*>(&context), requestKind, *reinterpret_cast<hstring const*>(&parametersAsJson)));
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
struct produce<D, Windows::Services::Store::IStoreSendRequestResult> : produce_base<D, Windows::Services::Store::IStoreSendRequestResult>
{
    HRESULT __stdcall get_Response(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Response());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) noexcept override
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
struct produce<D, Windows::Services::Store::IStoreSendRequestResult2> : produce_base<D, Windows::Services::Store::IStoreSendRequestResult2>
{
    HRESULT __stdcall get_HttpStatusCode(abi_t<Windows::Web::Http::HttpStatusCode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HttpStatusCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStoreSku> : produce_base<D, Windows::Services::Store::IStoreSku>
{
    HRESULT __stdcall get_StoreId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StoreId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_IsTrial(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTrial());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomDeveloperData(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomDeveloperData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Images(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Images());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Videos(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Videos());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Availabilities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Availabilities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Price(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Price());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedJsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInUserCollection(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInUserCollection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BundledSkus(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BundledSkus());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CollectionData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CollectionData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsInstalledAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIsInstalledAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestPurchaseAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestPurchaseAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestPurchaseWithPurchasePropertiesAsync(::IUnknown* storePurchaseProperties, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestPurchaseAsync(*reinterpret_cast<Windows::Services::Store::StorePurchaseProperties const*>(&storePurchaseProperties)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSubscription(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSubscription());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubscriptionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubscriptionInfo());
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
struct produce<D, Windows::Services::Store::IStoreSubscriptionInfo> : produce_base<D, Windows::Services::Store::IStoreSubscriptionInfo>
{
    HRESULT __stdcall get_BillingPeriod(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BillingPeriod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BillingPeriodUnit(abi_t<Windows::Services::Store::StoreDurationUnit>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BillingPeriodUnit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasTrialPeriod(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasTrialPeriod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrialPeriod(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrialPeriod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrialPeriodUnit(abi_t<Windows::Services::Store::StoreDurationUnit>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrialPeriodUnit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStoreVideo> : produce_base<D, Windows::Services::Store::IStoreVideo>
{
    HRESULT __stdcall get_Uri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoPurposeTag(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoPurposeTag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Caption(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Caption());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviewImage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreviewImage());
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

WINRT_EXPORT namespace winrt::Windows::Services::Store {

inline Windows::Services::Store::StoreContext StoreContext::GetDefault()
{
    return get_activation_factory<StoreContext, Windows::Services::Store::IStoreContextStatics>().GetDefault();
}

inline Windows::Services::Store::StoreContext StoreContext::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<StoreContext, Windows::Services::Store::IStoreContextStatics>().GetForUser(user);
}

inline StorePurchaseProperties::StorePurchaseProperties() :
    StorePurchaseProperties(activate_instance<StorePurchaseProperties>())
{}

inline StorePurchaseProperties::StorePurchaseProperties(param::hstring const& name) :
    StorePurchaseProperties(get_activation_factory<StorePurchaseProperties, Windows::Services::Store::IStorePurchasePropertiesFactory>().Create(name))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreSendRequestResult> StoreRequestHelper::SendRequestAsync(Windows::Services::Store::StoreContext const& context, uint32_t requestKind, param::hstring const& parametersAsJson)
{
    return get_activation_factory<StoreRequestHelper, Windows::Services::Store::IStoreRequestHelperStatics>().SendRequestAsync(context, requestKind, parametersAsJson);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Services::Store::IStoreAcquireLicenseResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreAcquireLicenseResult> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreAppLicense> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreAppLicense> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreAvailability> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreAvailability> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreCollectionData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreCollectionData> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreConsumableResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreConsumableResult> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreContext> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreContext2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreContext2> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreContextStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreContextStatics> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreImage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreImage> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreLicense> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreLicense> {};

template<> struct hash<winrt::Windows::Services::Store::IStorePackageLicense> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStorePackageLicense> {};

template<> struct hash<winrt::Windows::Services::Store::IStorePackageUpdate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStorePackageUpdate> {};

template<> struct hash<winrt::Windows::Services::Store::IStorePackageUpdateResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStorePackageUpdateResult> {};

template<> struct hash<winrt::Windows::Services::Store::IStorePrice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStorePrice> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreProduct> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreProduct> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreProductPagedQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreProductPagedQueryResult> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreProductQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreProductQueryResult> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreProductResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreProductResult> {};

template<> struct hash<winrt::Windows::Services::Store::IStorePurchaseProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStorePurchaseProperties> {};

template<> struct hash<winrt::Windows::Services::Store::IStorePurchasePropertiesFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStorePurchasePropertiesFactory> {};

template<> struct hash<winrt::Windows::Services::Store::IStorePurchaseResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStorePurchaseResult> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreRequestHelperStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreRequestHelperStatics> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreSendRequestResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreSendRequestResult> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreSendRequestResult2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreSendRequestResult2> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreSku> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreSku> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreSubscriptionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreSubscriptionInfo> {};

template<> struct hash<winrt::Windows::Services::Store::IStoreVideo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::IStoreVideo> {};

template<> struct hash<winrt::Windows::Services::Store::StoreAcquireLicenseResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreAcquireLicenseResult> {};

template<> struct hash<winrt::Windows::Services::Store::StoreAppLicense> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreAppLicense> {};

template<> struct hash<winrt::Windows::Services::Store::StoreAvailability> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreAvailability> {};

template<> struct hash<winrt::Windows::Services::Store::StoreCollectionData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreCollectionData> {};

template<> struct hash<winrt::Windows::Services::Store::StoreConsumableResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreConsumableResult> {};

template<> struct hash<winrt::Windows::Services::Store::StoreContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreContext> {};

template<> struct hash<winrt::Windows::Services::Store::StoreImage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreImage> {};

template<> struct hash<winrt::Windows::Services::Store::StoreLicense> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreLicense> {};

template<> struct hash<winrt::Windows::Services::Store::StorePackageLicense> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StorePackageLicense> {};

template<> struct hash<winrt::Windows::Services::Store::StorePackageUpdate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StorePackageUpdate> {};

template<> struct hash<winrt::Windows::Services::Store::StorePackageUpdateResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StorePackageUpdateResult> {};

template<> struct hash<winrt::Windows::Services::Store::StorePrice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StorePrice> {};

template<> struct hash<winrt::Windows::Services::Store::StoreProduct> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreProduct> {};

template<> struct hash<winrt::Windows::Services::Store::StoreProductPagedQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreProductPagedQueryResult> {};

template<> struct hash<winrt::Windows::Services::Store::StoreProductQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreProductQueryResult> {};

template<> struct hash<winrt::Windows::Services::Store::StoreProductResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreProductResult> {};

template<> struct hash<winrt::Windows::Services::Store::StorePurchaseProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StorePurchaseProperties> {};

template<> struct hash<winrt::Windows::Services::Store::StorePurchaseResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StorePurchaseResult> {};

template<> struct hash<winrt::Windows::Services::Store::StoreRequestHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreRequestHelper> {};

template<> struct hash<winrt::Windows::Services::Store::StoreSendRequestResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreSendRequestResult> {};

template<> struct hash<winrt::Windows::Services::Store::StoreSku> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreSku> {};

template<> struct hash<winrt::Windows::Services::Store::StoreSubscriptionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreSubscriptionInfo> {};

template<> struct hash<winrt::Windows::Services::Store::StoreVideo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Store::StoreVideo> {};

}

WINRT_WARNING_POP
