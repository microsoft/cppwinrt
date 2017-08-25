// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.ApplicationModel.Store.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::Store::LicenseInformation consume_Windows_ApplicationModel_Store_ICurrentApp<D>::LicenseInformation() const
{
    Windows::ApplicationModel::Store::LicenseInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentApp)->get_LicenseInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_Store_ICurrentApp<D>::LinkUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentApp)->get_LinkUri(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_Store_ICurrentApp<D>::AppId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentApp)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Store_ICurrentApp<D>::RequestAppPurchaseAsync(bool includeReceipt) const
{
    Windows::Foundation::IAsyncOperation<hstring> requestAppPurchaseOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentApp)->RequestAppPurchaseAsync(includeReceipt, put_abi(requestAppPurchaseOperation)));
    return requestAppPurchaseOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Store_ICurrentApp<D>::RequestProductPurchaseAsync(param::hstring const& productId, bool includeReceipt) const
{
    Windows::Foundation::IAsyncOperation<hstring> requestProductPurchaseOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentApp)->RequestProductPurchaseAsync(get_abi(productId), includeReceipt, put_abi(requestProductPurchaseOperation)));
    return requestProductPurchaseOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> consume_Windows_ApplicationModel_Store_ICurrentApp<D>::LoadListingInformationAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> loadListingOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentApp)->LoadListingInformationAsync(put_abi(loadListingOperation)));
    return loadListingOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Store_ICurrentApp<D>::GetAppReceiptAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> appReceiptOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentApp)->GetAppReceiptAsync(put_abi(appReceiptOperation)));
    return appReceiptOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Store_ICurrentApp<D>::GetProductReceiptAsync(param::hstring const& productId) const
{
    Windows::Foundation::IAsyncOperation<hstring> getProductReceiptOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentApp)->GetProductReceiptAsync(get_abi(productId), put_abi(getProductReceiptOperation)));
    return getProductReceiptOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Store_ICurrentApp2Statics<D>::GetCustomerPurchaseIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentApp2Statics)->GetCustomerPurchaseIdAsync(get_abi(serviceTicket), get_abi(publisherUserId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Store_ICurrentApp2Statics<D>::GetCustomerCollectionsIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentApp2Statics)->GetCustomerCollectionsIdAsync(get_abi(serviceTicket), get_abi(publisherUserId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Store::LicenseInformation consume_Windows_ApplicationModel_Store_ICurrentAppSimulator<D>::LicenseInformation() const
{
    Windows::ApplicationModel::Store::LicenseInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulator)->get_LicenseInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_Store_ICurrentAppSimulator<D>::LinkUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulator)->get_LinkUri(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_Store_ICurrentAppSimulator<D>::AppId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulator)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Store_ICurrentAppSimulator<D>::RequestAppPurchaseAsync(bool includeReceipt) const
{
    Windows::Foundation::IAsyncOperation<hstring> requestAppPurchaseOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulator)->RequestAppPurchaseAsync(includeReceipt, put_abi(requestAppPurchaseOperation)));
    return requestAppPurchaseOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Store_ICurrentAppSimulator<D>::RequestProductPurchaseAsync(param::hstring const& productId, bool includeReceipt) const
{
    Windows::Foundation::IAsyncOperation<hstring> requestProductPurchaseOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulator)->RequestProductPurchaseAsync(get_abi(productId), includeReceipt, put_abi(requestProductPurchaseOperation)));
    return requestProductPurchaseOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> consume_Windows_ApplicationModel_Store_ICurrentAppSimulator<D>::LoadListingInformationAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> loadListingOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulator)->LoadListingInformationAsync(put_abi(loadListingOperation)));
    return loadListingOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Store_ICurrentAppSimulator<D>::GetAppReceiptAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> appReceiptOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulator)->GetAppReceiptAsync(put_abi(appReceiptOperation)));
    return appReceiptOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Store_ICurrentAppSimulator<D>::GetProductReceiptAsync(param::hstring const& productId) const
{
    Windows::Foundation::IAsyncOperation<hstring> getProductReceiptOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulator)->GetProductReceiptAsync(get_abi(productId), put_abi(getProductReceiptOperation)));
    return getProductReceiptOperation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Store_ICurrentAppSimulator<D>::ReloadSimulatorAsync(Windows::Storage::StorageFile const& simulatorSettingsFile) const
{
    Windows::Foundation::IAsyncAction reloadSimulatorOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulator)->ReloadSimulatorAsync(get_abi(simulatorSettingsFile), put_abi(reloadSimulatorOperation)));
    return reloadSimulatorOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorStaticsWithFiltering<D>::LoadListingInformationByProductIdsAsync(param::async_iterable<hstring> const& productIds) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> loadListingOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering)->LoadListingInformationByProductIdsAsync(get_abi(productIds), put_abi(loadListingOperation)));
    return loadListingOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorStaticsWithFiltering<D>::LoadListingInformationByKeywordsAsync(param::async_iterable<hstring> const& keywords) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> loadListingOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering)->LoadListingInformationByKeywordsAsync(get_abi(keywords), put_abi(loadListingOperation)));
    return loadListingOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithCampaignId<D>::GetAppPurchaseCampaignIdAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId)->GetAppPurchaseCampaignIdAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::FulfillmentResult> consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithConsumables<D>::ReportConsumableFulfillmentAsync(param::hstring const& productId, GUID const& transactionId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::FulfillmentResult> reportConsumableFulfillmentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables)->ReportConsumableFulfillmentAsync(get_abi(productId), get_abi(transactionId), put_abi(reportConsumableFulfillmentOperation)));
    return reportConsumableFulfillmentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithConsumables<D>::RequestProductPurchaseAsync(param::hstring const& productId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> requestProductPurchaseWithResultsOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables)->RequestProductPurchaseWithResultsAsync(get_abi(productId), put_abi(requestProductPurchaseWithResultsOperation)));
    return requestProductPurchaseWithResultsOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithConsumables<D>::RequestProductPurchaseAsync(param::hstring const& productId, param::hstring const& offerId, Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties const& displayProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> requestProductPurchaseWithDisplayPropertiesOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables)->RequestProductPurchaseWithDisplayPropertiesAsync(get_abi(productId), get_abi(offerId), get_abi(displayProperties), put_abi(requestProductPurchaseWithDisplayPropertiesOperation)));
    return requestProductPurchaseWithDisplayPropertiesOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::UnfulfilledConsumable>> consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithConsumables<D>::GetUnfulfilledConsumablesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::UnfulfilledConsumable>> getUnfulfilledConsumablesOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables)->GetUnfulfilledConsumablesAsync(put_abi(getUnfulfilledConsumablesOperation)));
    return getUnfulfilledConsumablesOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> consume_Windows_ApplicationModel_Store_ICurrentAppStaticsWithFiltering<D>::LoadListingInformationByProductIdsAsync(param::async_iterable<hstring> const& productIds) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> loadListingOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering)->LoadListingInformationByProductIdsAsync(get_abi(productIds), put_abi(loadListingOperation)));
    return loadListingOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> consume_Windows_ApplicationModel_Store_ICurrentAppStaticsWithFiltering<D>::LoadListingInformationByKeywordsAsync(param::async_iterable<hstring> const& keywords) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> loadListingOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering)->LoadListingInformationByKeywordsAsync(get_abi(keywords), put_abi(loadListingOperation)));
    return loadListingOperation;
}

template <typename D> void consume_Windows_ApplicationModel_Store_ICurrentAppStaticsWithFiltering<D>::ReportProductFulfillment(param::hstring const& productId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering)->ReportProductFulfillment(get_abi(productId)));
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Store_ICurrentAppWithCampaignId<D>::GetAppPurchaseCampaignIdAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppWithCampaignId)->GetAppPurchaseCampaignIdAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::FulfillmentResult> consume_Windows_ApplicationModel_Store_ICurrentAppWithConsumables<D>::ReportConsumableFulfillmentAsync(param::hstring const& productId, GUID const& transactionId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::FulfillmentResult> reportConsumableFulfillmentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppWithConsumables)->ReportConsumableFulfillmentAsync(get_abi(productId), get_abi(transactionId), put_abi(reportConsumableFulfillmentOperation)));
    return reportConsumableFulfillmentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> consume_Windows_ApplicationModel_Store_ICurrentAppWithConsumables<D>::RequestProductPurchaseAsync(param::hstring const& productId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> requestProductPurchaseWithResultsOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppWithConsumables)->RequestProductPurchaseWithResultsAsync(get_abi(productId), put_abi(requestProductPurchaseWithResultsOperation)));
    return requestProductPurchaseWithResultsOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> consume_Windows_ApplicationModel_Store_ICurrentAppWithConsumables<D>::RequestProductPurchaseAsync(param::hstring const& productId, param::hstring const& offerId, Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties const& displayProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> requestProductPurchaseWithDisplayPropertiesOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppWithConsumables)->RequestProductPurchaseWithDisplayPropertiesAsync(get_abi(productId), get_abi(offerId), get_abi(displayProperties), put_abi(requestProductPurchaseWithDisplayPropertiesOperation)));
    return requestProductPurchaseWithDisplayPropertiesOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::UnfulfilledConsumable>> consume_Windows_ApplicationModel_Store_ICurrentAppWithConsumables<D>::GetUnfulfilledConsumablesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::UnfulfilledConsumable>> getUnfulfilledConsumablesOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ICurrentAppWithConsumables)->GetUnfulfilledConsumablesAsync(put_abi(getUnfulfilledConsumablesOperation)));
    return getUnfulfilledConsumablesOperation;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Store::ProductLicense> consume_Windows_ApplicationModel_Store_ILicenseInformation<D>::ProductLicenses() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Store::ProductLicense> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ILicenseInformation)->get_ProductLicenses(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_ILicenseInformation<D>::IsActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ILicenseInformation)->get_IsActive(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_ILicenseInformation<D>::IsTrial() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ILicenseInformation)->get_IsTrial(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Store_ILicenseInformation<D>::ExpirationDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ILicenseInformation)->get_ExpirationDate(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Store_ILicenseInformation<D>::LicenseChanged(Windows::ApplicationModel::Store::LicenseChangedEventHandler const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ILicenseInformation)->add_LicenseChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::Store::ILicenseInformation> consume_Windows_ApplicationModel_Store_ILicenseInformation<D>::LicenseChanged(auto_revoke_t, Windows::ApplicationModel::Store::LicenseChangedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Store::ILicenseInformation>(this, &abi_t<Windows::ApplicationModel::Store::ILicenseInformation>::remove_LicenseChanged, LicenseChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Store_ILicenseInformation<D>::LicenseChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::ILicenseInformation)->remove_LicenseChanged(get_abi(cookie)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IListingInformation<D>::CurrentMarket() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IListingInformation)->get_CurrentMarket(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IListingInformation<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IListingInformation)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Store::ProductListing> consume_Windows_ApplicationModel_Store_IListingInformation<D>::ProductListings() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Store::ProductListing> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IListingInformation)->get_ProductListings(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IListingInformation<D>::FormattedPrice() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IListingInformation)->get_FormattedPrice(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IListingInformation<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IListingInformation)->get_Name(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Store_IListingInformation<D>::AgeRating() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IListingInformation)->get_AgeRating(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IListingInformation2<D>::FormattedBasePrice() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IListingInformation2)->get_FormattedBasePrice(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Store_IListingInformation2<D>::SaleEndDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IListingInformation2)->get_SaleEndDate(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_IListingInformation2<D>::IsOnSale() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IListingInformation2)->get_IsOnSale(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IListingInformation2<D>::CurrencyCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IListingInformation2)->get_CurrencyCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IProductLicense<D>::ProductId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductLicense)->get_ProductId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_IProductLicense<D>::IsActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductLicense)->get_IsActive(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Store_IProductLicense<D>::ExpirationDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductLicense)->get_ExpirationDate(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_IProductLicenseWithFulfillment<D>::IsConsumable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductLicenseWithFulfillment)->get_IsConsumable(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IProductListing<D>::ProductId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductListing)->get_ProductId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IProductListing<D>::FormattedPrice() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductListing)->get_FormattedPrice(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IProductListing<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductListing)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IProductListing2<D>::FormattedBasePrice() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductListing2)->get_FormattedBasePrice(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Store_IProductListing2<D>::SaleEndDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductListing2)->get_SaleEndDate(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_IProductListing2<D>::IsOnSale() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductListing2)->get_IsOnSale(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IProductListing2<D>::CurrencyCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductListing2)->get_CurrencyCode(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Store::ProductType consume_Windows_ApplicationModel_Store_IProductListingWithConsumables<D>::ProductType() const
{
    Windows::ApplicationModel::Store::ProductType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductListingWithConsumables)->get_ProductType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IProductListingWithMetadata<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductListingWithMetadata)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IIterable<hstring> consume_Windows_ApplicationModel_Store_IProductListingWithMetadata<D>::Keywords() const
{
    Windows::Foundation::Collections::IIterable<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductListingWithMetadata)->get_Keywords(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Store::ProductType consume_Windows_ApplicationModel_Store_IProductListingWithMetadata<D>::ProductType() const
{
    Windows::ApplicationModel::Store::ProductType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductListingWithMetadata)->get_ProductType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IProductListingWithMetadata<D>::Tag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductListingWithMetadata)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_Store_IProductListingWithMetadata<D>::ImageUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductListingWithMetadata)->get_ImageUri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayProperties<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayProperties<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties)->put_Name(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayProperties<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayProperties<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties)->put_Description(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayProperties<D>::Image() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties)->get_Image(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayProperties<D>::Image(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties)->put_Image(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayPropertiesFactory<D>::CreateProductPurchaseDisplayProperties(param::hstring const& name) const
{
    Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties displayProperties{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory)->CreateProductPurchaseDisplayProperties(get_abi(name), put_abi(displayProperties)));
    return displayProperties;
}

template <typename D> Windows::ApplicationModel::Store::ProductPurchaseStatus consume_Windows_ApplicationModel_Store_IPurchaseResults<D>::Status() const
{
    Windows::ApplicationModel::Store::ProductPurchaseStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IPurchaseResults)->get_Status(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_Store_IPurchaseResults<D>::TransactionId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IPurchaseResults)->get_TransactionId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IPurchaseResults<D>::ReceiptXml() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IPurchaseResults)->get_ReceiptXml(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IPurchaseResults<D>::OfferId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IPurchaseResults)->get_OfferId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IUnfulfilledConsumable<D>::ProductId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IUnfulfilledConsumable)->get_ProductId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_Store_IUnfulfilledConsumable<D>::TransactionId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IUnfulfilledConsumable)->get_TransactionId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_IUnfulfilledConsumable<D>::OfferId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::IUnfulfilledConsumable)->get_OfferId(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::ApplicationModel::Store::LicenseChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::ApplicationModel::Store::LicenseChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::ApplicationModel::Store::LicenseChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke() noexcept final
        {
            try
            {
                (*this)();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::ICurrentApp> : produce_base<D, Windows::ApplicationModel::Store::ICurrentApp>
{
    HRESULT __stdcall get_LicenseInformation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LicenseInformation());
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

    HRESULT __stdcall get_AppId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAppPurchaseAsync(bool includeReceipt, ::IUnknown** requestAppPurchaseOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestAppPurchaseOperation = detach_abi(this->shim().RequestAppPurchaseAsync(includeReceipt));
            return S_OK;
        }
        catch (...)
        {
            *requestAppPurchaseOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestProductPurchaseAsync(HSTRING productId, bool includeReceipt, ::IUnknown** requestProductPurchaseOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestProductPurchaseOperation = detach_abi(this->shim().RequestProductPurchaseAsync(*reinterpret_cast<hstring const*>(&productId), includeReceipt));
            return S_OK;
        }
        catch (...)
        {
            *requestProductPurchaseOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadListingInformationAsync(::IUnknown** loadListingOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loadListingOperation = detach_abi(this->shim().LoadListingInformationAsync());
            return S_OK;
        }
        catch (...)
        {
            *loadListingOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAppReceiptAsync(::IUnknown** appReceiptOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *appReceiptOperation = detach_abi(this->shim().GetAppReceiptAsync());
            return S_OK;
        }
        catch (...)
        {
            *appReceiptOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetProductReceiptAsync(HSTRING productId, ::IUnknown** getProductReceiptOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *getProductReceiptOperation = detach_abi(this->shim().GetProductReceiptAsync(*reinterpret_cast<hstring const*>(&productId)));
            return S_OK;
        }
        catch (...)
        {
            *getProductReceiptOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::ICurrentApp2Statics> : produce_base<D, Windows::ApplicationModel::Store::ICurrentApp2Statics>
{
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::ICurrentAppSimulator> : produce_base<D, Windows::ApplicationModel::Store::ICurrentAppSimulator>
{
    HRESULT __stdcall get_LicenseInformation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LicenseInformation());
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

    HRESULT __stdcall get_AppId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAppPurchaseAsync(bool includeReceipt, ::IUnknown** requestAppPurchaseOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestAppPurchaseOperation = detach_abi(this->shim().RequestAppPurchaseAsync(includeReceipt));
            return S_OK;
        }
        catch (...)
        {
            *requestAppPurchaseOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestProductPurchaseAsync(HSTRING productId, bool includeReceipt, ::IUnknown** requestProductPurchaseOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestProductPurchaseOperation = detach_abi(this->shim().RequestProductPurchaseAsync(*reinterpret_cast<hstring const*>(&productId), includeReceipt));
            return S_OK;
        }
        catch (...)
        {
            *requestProductPurchaseOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadListingInformationAsync(::IUnknown** loadListingOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loadListingOperation = detach_abi(this->shim().LoadListingInformationAsync());
            return S_OK;
        }
        catch (...)
        {
            *loadListingOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAppReceiptAsync(::IUnknown** appReceiptOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *appReceiptOperation = detach_abi(this->shim().GetAppReceiptAsync());
            return S_OK;
        }
        catch (...)
        {
            *appReceiptOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetProductReceiptAsync(HSTRING productId, ::IUnknown** getProductReceiptOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *getProductReceiptOperation = detach_abi(this->shim().GetProductReceiptAsync(*reinterpret_cast<hstring const*>(&productId)));
            return S_OK;
        }
        catch (...)
        {
            *getProductReceiptOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReloadSimulatorAsync(::IUnknown* simulatorSettingsFile, ::IUnknown** reloadSimulatorOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *reloadSimulatorOperation = detach_abi(this->shim().ReloadSimulatorAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&simulatorSettingsFile)));
            return S_OK;
        }
        catch (...)
        {
            *reloadSimulatorOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering> : produce_base<D, Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering>
{
    HRESULT __stdcall LoadListingInformationByProductIdsAsync(::IUnknown* productIds, ::IUnknown** loadListingOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loadListingOperation = detach_abi(this->shim().LoadListingInformationByProductIdsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&productIds)));
            return S_OK;
        }
        catch (...)
        {
            *loadListingOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadListingInformationByKeywordsAsync(::IUnknown* keywords, ::IUnknown** loadListingOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loadListingOperation = detach_abi(this->shim().LoadListingInformationByKeywordsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&keywords)));
            return S_OK;
        }
        catch (...)
        {
            *loadListingOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId> : produce_base<D, Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId>
{
    HRESULT __stdcall GetAppPurchaseCampaignIdAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAppPurchaseCampaignIdAsync());
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
struct produce<D, Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables> : produce_base<D, Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables>
{
    HRESULT __stdcall ReportConsumableFulfillmentAsync(HSTRING productId, abi_t<GUID> transactionId, ::IUnknown** reportConsumableFulfillmentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *reportConsumableFulfillmentOperation = detach_abi(this->shim().ReportConsumableFulfillmentAsync(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<GUID const*>(&transactionId)));
            return S_OK;
        }
        catch (...)
        {
            *reportConsumableFulfillmentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestProductPurchaseWithResultsAsync(HSTRING productId, ::IUnknown** requestProductPurchaseWithResultsOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestProductPurchaseWithResultsOperation = detach_abi(this->shim().RequestProductPurchaseAsync(*reinterpret_cast<hstring const*>(&productId)));
            return S_OK;
        }
        catch (...)
        {
            *requestProductPurchaseWithResultsOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestProductPurchaseWithDisplayPropertiesAsync(HSTRING productId, HSTRING offerId, ::IUnknown* displayProperties, ::IUnknown** requestProductPurchaseWithDisplayPropertiesOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestProductPurchaseWithDisplayPropertiesOperation = detach_abi(this->shim().RequestProductPurchaseAsync(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&offerId), *reinterpret_cast<Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties const*>(&displayProperties)));
            return S_OK;
        }
        catch (...)
        {
            *requestProductPurchaseWithDisplayPropertiesOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUnfulfilledConsumablesAsync(::IUnknown** getUnfulfilledConsumablesOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *getUnfulfilledConsumablesOperation = detach_abi(this->shim().GetUnfulfilledConsumablesAsync());
            return S_OK;
        }
        catch (...)
        {
            *getUnfulfilledConsumablesOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering> : produce_base<D, Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering>
{
    HRESULT __stdcall LoadListingInformationByProductIdsAsync(::IUnknown* productIds, ::IUnknown** loadListingOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loadListingOperation = detach_abi(this->shim().LoadListingInformationByProductIdsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&productIds)));
            return S_OK;
        }
        catch (...)
        {
            *loadListingOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadListingInformationByKeywordsAsync(::IUnknown* keywords, ::IUnknown** loadListingOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loadListingOperation = detach_abi(this->shim().LoadListingInformationByKeywordsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&keywords)));
            return S_OK;
        }
        catch (...)
        {
            *loadListingOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportProductFulfillment(HSTRING productId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportProductFulfillment(*reinterpret_cast<hstring const*>(&productId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::ICurrentAppWithCampaignId> : produce_base<D, Windows::ApplicationModel::Store::ICurrentAppWithCampaignId>
{
    HRESULT __stdcall GetAppPurchaseCampaignIdAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAppPurchaseCampaignIdAsync());
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
struct produce<D, Windows::ApplicationModel::Store::ICurrentAppWithConsumables> : produce_base<D, Windows::ApplicationModel::Store::ICurrentAppWithConsumables>
{
    HRESULT __stdcall ReportConsumableFulfillmentAsync(HSTRING productId, abi_t<GUID> transactionId, ::IUnknown** reportConsumableFulfillmentOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *reportConsumableFulfillmentOperation = detach_abi(this->shim().ReportConsumableFulfillmentAsync(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<GUID const*>(&transactionId)));
            return S_OK;
        }
        catch (...)
        {
            *reportConsumableFulfillmentOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestProductPurchaseWithResultsAsync(HSTRING productId, ::IUnknown** requestProductPurchaseWithResultsOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestProductPurchaseWithResultsOperation = detach_abi(this->shim().RequestProductPurchaseAsync(*reinterpret_cast<hstring const*>(&productId)));
            return S_OK;
        }
        catch (...)
        {
            *requestProductPurchaseWithResultsOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestProductPurchaseWithDisplayPropertiesAsync(HSTRING productId, HSTRING offerId, ::IUnknown* displayProperties, ::IUnknown** requestProductPurchaseWithDisplayPropertiesOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestProductPurchaseWithDisplayPropertiesOperation = detach_abi(this->shim().RequestProductPurchaseAsync(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&offerId), *reinterpret_cast<Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties const*>(&displayProperties)));
            return S_OK;
        }
        catch (...)
        {
            *requestProductPurchaseWithDisplayPropertiesOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUnfulfilledConsumablesAsync(::IUnknown** getUnfulfilledConsumablesOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *getUnfulfilledConsumablesOperation = detach_abi(this->shim().GetUnfulfilledConsumablesAsync());
            return S_OK;
        }
        catch (...)
        {
            *getUnfulfilledConsumablesOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::ILicenseInformation> : produce_base<D, Windows::ApplicationModel::Store::ILicenseInformation>
{
    HRESULT __stdcall get_ProductLicenses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProductLicenses());
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

    HRESULT __stdcall add_LicenseChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().LicenseChanged(*reinterpret_cast<Windows::ApplicationModel::Store::LicenseChangedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LicenseChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LicenseChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::IListingInformation> : produce_base<D, Windows::ApplicationModel::Store::IListingInformation>
{
    HRESULT __stdcall get_CurrentMarket(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentMarket());
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

    HRESULT __stdcall get_ProductListings(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProductListings());
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

    HRESULT __stdcall get_AgeRating(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AgeRating());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::IListingInformation2> : produce_base<D, Windows::ApplicationModel::Store::IListingInformation2>
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::IProductLicense> : produce_base<D, Windows::ApplicationModel::Store::IProductLicense>
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::IProductLicenseWithFulfillment> : produce_base<D, Windows::ApplicationModel::Store::IProductLicenseWithFulfillment>
{
    HRESULT __stdcall get_IsConsumable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsConsumable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::IProductListing> : produce_base<D, Windows::ApplicationModel::Store::IProductListing>
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::IProductListing2> : produce_base<D, Windows::ApplicationModel::Store::IProductListing2>
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::IProductListingWithConsumables> : produce_base<D, Windows::ApplicationModel::Store::IProductListingWithConsumables>
{
    HRESULT __stdcall get_ProductType(abi_t<Windows::ApplicationModel::Store::ProductType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProductType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::IProductListingWithMetadata> : produce_base<D, Windows::ApplicationModel::Store::IProductListingWithMetadata>
{
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

    HRESULT __stdcall get_ProductType(abi_t<Windows::ApplicationModel::Store::ProductType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProductType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImageUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImageUri());
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
struct produce<D, Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties> : produce_base<D, Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties>
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

    HRESULT __stdcall put_Description(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Image(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Image());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Image(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Image(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory> : produce_base<D, Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory>
{
    HRESULT __stdcall CreateProductPurchaseDisplayProperties(HSTRING name, ::IUnknown** displayProperties) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *displayProperties = detach_abi(this->shim().CreateProductPurchaseDisplayProperties(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *displayProperties = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::IPurchaseResults> : produce_base<D, Windows::ApplicationModel::Store::IPurchaseResults>
{
    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Store::ProductPurchaseStatus>* value) noexcept override
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

    HRESULT __stdcall get_TransactionId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransactionId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReceiptXml(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReceiptXml());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OfferId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OfferId());
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
struct produce<D, Windows::ApplicationModel::Store::IUnfulfilledConsumable> : produce_base<D, Windows::ApplicationModel::Store::IUnfulfilledConsumable>
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

    HRESULT __stdcall get_TransactionId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransactionId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OfferId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OfferId());
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

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store {

inline Windows::ApplicationModel::Store::LicenseInformation CurrentApp::LicenseInformation()
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentApp>().LicenseInformation();
}

inline Windows::Foundation::Uri CurrentApp::LinkUri()
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentApp>().LinkUri();
}

inline GUID CurrentApp::AppId()
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentApp>().AppId();
}

inline Windows::Foundation::IAsyncOperation<hstring> CurrentApp::RequestAppPurchaseAsync(bool includeReceipt)
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentApp>().RequestAppPurchaseAsync(includeReceipt);
}

inline Windows::Foundation::IAsyncOperation<hstring> CurrentApp::RequestProductPurchaseAsync(param::hstring const& productId, bool includeReceipt)
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentApp>().RequestProductPurchaseAsync(productId, includeReceipt);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> CurrentApp::LoadListingInformationAsync()
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentApp>().LoadListingInformationAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> CurrentApp::GetAppReceiptAsync()
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentApp>().GetAppReceiptAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> CurrentApp::GetProductReceiptAsync(param::hstring const& productId)
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentApp>().GetProductReceiptAsync(productId);
}

inline Windows::Foundation::IAsyncOperation<hstring> CurrentApp::GetCustomerPurchaseIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId)
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentApp2Statics>().GetCustomerPurchaseIdAsync(serviceTicket, publisherUserId);
}

inline Windows::Foundation::IAsyncOperation<hstring> CurrentApp::GetCustomerCollectionsIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId)
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentApp2Statics>().GetCustomerCollectionsIdAsync(serviceTicket, publisherUserId);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> CurrentApp::LoadListingInformationByProductIdsAsync(param::async_iterable<hstring> const& productIds)
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering>().LoadListingInformationByProductIdsAsync(productIds);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> CurrentApp::LoadListingInformationByKeywordsAsync(param::async_iterable<hstring> const& keywords)
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering>().LoadListingInformationByKeywordsAsync(keywords);
}

inline void CurrentApp::ReportProductFulfillment(param::hstring const& productId)
{
    get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering>().ReportProductFulfillment(productId);
}

inline Windows::Foundation::IAsyncOperation<hstring> CurrentApp::GetAppPurchaseCampaignIdAsync()
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentAppWithCampaignId>().GetAppPurchaseCampaignIdAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::FulfillmentResult> CurrentApp::ReportConsumableFulfillmentAsync(param::hstring const& productId, GUID const& transactionId)
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentAppWithConsumables>().ReportConsumableFulfillmentAsync(productId, transactionId);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> CurrentApp::RequestProductPurchaseAsync(param::hstring const& productId)
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentAppWithConsumables>().RequestProductPurchaseAsync(productId);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> CurrentApp::RequestProductPurchaseAsync(param::hstring const& productId, param::hstring const& offerId, Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties const& displayProperties)
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentAppWithConsumables>().RequestProductPurchaseAsync(productId, offerId, displayProperties);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::UnfulfilledConsumable>> CurrentApp::GetUnfulfilledConsumablesAsync()
{
    return get_activation_factory<CurrentApp, Windows::ApplicationModel::Store::ICurrentAppWithConsumables>().GetUnfulfilledConsumablesAsync();
}

inline Windows::ApplicationModel::Store::LicenseInformation CurrentAppSimulator::LicenseInformation()
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulator>().LicenseInformation();
}

inline Windows::Foundation::Uri CurrentAppSimulator::LinkUri()
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulator>().LinkUri();
}

inline GUID CurrentAppSimulator::AppId()
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulator>().AppId();
}

inline Windows::Foundation::IAsyncOperation<hstring> CurrentAppSimulator::RequestAppPurchaseAsync(bool includeReceipt)
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulator>().RequestAppPurchaseAsync(includeReceipt);
}

inline Windows::Foundation::IAsyncOperation<hstring> CurrentAppSimulator::RequestProductPurchaseAsync(param::hstring const& productId, bool includeReceipt)
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulator>().RequestProductPurchaseAsync(productId, includeReceipt);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> CurrentAppSimulator::LoadListingInformationAsync()
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulator>().LoadListingInformationAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> CurrentAppSimulator::GetAppReceiptAsync()
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulator>().GetAppReceiptAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> CurrentAppSimulator::GetProductReceiptAsync(param::hstring const& productId)
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulator>().GetProductReceiptAsync(productId);
}

inline Windows::Foundation::IAsyncAction CurrentAppSimulator::ReloadSimulatorAsync(Windows::Storage::StorageFile const& simulatorSettingsFile)
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulator>().ReloadSimulatorAsync(simulatorSettingsFile);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> CurrentAppSimulator::LoadListingInformationByProductIdsAsync(param::async_iterable<hstring> const& productIds)
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering>().LoadListingInformationByProductIdsAsync(productIds);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> CurrentAppSimulator::LoadListingInformationByKeywordsAsync(param::async_iterable<hstring> const& keywords)
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering>().LoadListingInformationByKeywordsAsync(keywords);
}

inline Windows::Foundation::IAsyncOperation<hstring> CurrentAppSimulator::GetAppPurchaseCampaignIdAsync()
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId>().GetAppPurchaseCampaignIdAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::FulfillmentResult> CurrentAppSimulator::ReportConsumableFulfillmentAsync(param::hstring const& productId, GUID const& transactionId)
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables>().ReportConsumableFulfillmentAsync(productId, transactionId);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> CurrentAppSimulator::RequestProductPurchaseAsync(param::hstring const& productId)
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables>().RequestProductPurchaseAsync(productId);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> CurrentAppSimulator::RequestProductPurchaseAsync(param::hstring const& productId, param::hstring const& offerId, Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties const& displayProperties)
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables>().RequestProductPurchaseAsync(productId, offerId, displayProperties);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::UnfulfilledConsumable>> CurrentAppSimulator::GetUnfulfilledConsumablesAsync()
{
    return get_activation_factory<CurrentAppSimulator, Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables>().GetUnfulfilledConsumablesAsync();
}

inline ProductPurchaseDisplayProperties::ProductPurchaseDisplayProperties() :
    ProductPurchaseDisplayProperties(activate_instance<ProductPurchaseDisplayProperties>())
{}

inline ProductPurchaseDisplayProperties::ProductPurchaseDisplayProperties(param::hstring const& name) :
    ProductPurchaseDisplayProperties(get_activation_factory<ProductPurchaseDisplayProperties, Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory>().CreateProductPurchaseDisplayProperties(name))
{}

template <typename L> LicenseChangedEventHandler::LicenseChangedEventHandler(L handler) :
    LicenseChangedEventHandler(impl::make_delegate<LicenseChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> LicenseChangedEventHandler::LicenseChangedEventHandler(F* handler) :
    LicenseChangedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> LicenseChangedEventHandler::LicenseChangedEventHandler(O* object, M method) :
    LicenseChangedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void LicenseChangedEventHandler::operator()() const
{
    check_hresult((*(abi_t<LicenseChangedEventHandler>**)this)->Invoke());
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Store::ICurrentApp> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ICurrentApp> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::ICurrentApp2Statics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ICurrentApp2Statics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::ICurrentAppSimulator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ICurrentAppSimulator> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::ICurrentAppWithCampaignId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ICurrentAppWithCampaignId> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::ICurrentAppWithConsumables> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ICurrentAppWithConsumables> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::ILicenseInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ILicenseInformation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::IListingInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::IListingInformation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::IListingInformation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::IListingInformation2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::IProductLicense> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::IProductLicense> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::IProductLicenseWithFulfillment> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::IProductLicenseWithFulfillment> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::IProductListing> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::IProductListing> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::IProductListing2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::IProductListing2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::IProductListingWithConsumables> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::IProductListingWithConsumables> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::IProductListingWithMetadata> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::IProductListingWithMetadata> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::IPurchaseResults> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::IPurchaseResults> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::IUnfulfilledConsumable> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::IUnfulfilledConsumable> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::CurrentApp> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::CurrentApp> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::CurrentAppSimulator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::CurrentAppSimulator> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::LicenseInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::LicenseInformation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::ListingInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ListingInformation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::ProductLicense> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ProductLicense> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::ProductListing> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ProductListing> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::PurchaseResults> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::PurchaseResults> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::UnfulfilledConsumable> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::UnfulfilledConsumable> {};

}

WINRT_WARNING_POP
