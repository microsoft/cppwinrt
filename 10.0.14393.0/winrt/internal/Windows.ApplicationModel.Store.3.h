// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Store.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Store {

template <typename H> struct impl_LicenseChangedEventHandler : implements<impl_LicenseChangedEventHandler<H>, abi<LicenseChangedEventHandler>>, H
{
    impl_LicenseChangedEventHandler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke() noexcept override
    {
        try
        {
            (*this)();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Store {

struct CurrentApp
{
    CurrentApp() = delete;
    static Windows::ApplicationModel::Store::LicenseInformation LicenseInformation();
    static Windows::Foundation::Uri LinkUri();
    static GUID AppId();
    static Windows::Foundation::IAsyncOperation<hstring> RequestAppPurchaseAsync(bool includeReceipt);
    static Windows::Foundation::IAsyncOperation<hstring> RequestProductPurchaseAsync(hstring_ref productId, bool includeReceipt);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationAsync();
    static Windows::Foundation::IAsyncOperation<hstring> GetAppReceiptAsync();
    static Windows::Foundation::IAsyncOperation<hstring> GetProductReceiptAsync(hstring_ref productId);
    static Windows::Foundation::IAsyncOperation<hstring> GetCustomerPurchaseIdAsync(hstring_ref serviceTicket, hstring_ref publisherUserId);
    static Windows::Foundation::IAsyncOperation<hstring> GetCustomerCollectionsIdAsync(hstring_ref serviceTicket, hstring_ref publisherUserId);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationByProductIdsAsync(const Windows::Foundation::Collections::IIterable<hstring> & productIds);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationByKeywordsAsync(const Windows::Foundation::Collections::IIterable<hstring> & keywords);
    static void ReportProductFulfillment(hstring_ref productId);
    static Windows::Foundation::IAsyncOperation<hstring> GetAppPurchaseCampaignIdAsync();
    static Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::FulfillmentResult> ReportConsumableFulfillmentAsync(hstring_ref productId, GUID transactionId);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> RequestProductPurchaseAsync(hstring_ref productId);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> RequestProductPurchaseAsync(hstring_ref productId, hstring_ref offerId, const Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties & displayProperties);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::UnfulfilledConsumable>> GetUnfulfilledConsumablesAsync();
};

struct CurrentAppSimulator
{
    CurrentAppSimulator() = delete;
    static Windows::ApplicationModel::Store::LicenseInformation LicenseInformation();
    static Windows::Foundation::Uri LinkUri();
    static GUID AppId();
    static Windows::Foundation::IAsyncOperation<hstring> RequestAppPurchaseAsync(bool includeReceipt);
    static Windows::Foundation::IAsyncOperation<hstring> RequestProductPurchaseAsync(hstring_ref productId, bool includeReceipt);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationAsync();
    static Windows::Foundation::IAsyncOperation<hstring> GetAppReceiptAsync();
    static Windows::Foundation::IAsyncOperation<hstring> GetProductReceiptAsync(hstring_ref productId);
    static Windows::Foundation::IAsyncAction ReloadSimulatorAsync(const Windows::Storage::StorageFile & simulatorSettingsFile);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationByProductIdsAsync(const Windows::Foundation::Collections::IIterable<hstring> & productIds);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationByKeywordsAsync(const Windows::Foundation::Collections::IIterable<hstring> & keywords);
    static Windows::Foundation::IAsyncOperation<hstring> GetAppPurchaseCampaignIdAsync();
    static Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::FulfillmentResult> ReportConsumableFulfillmentAsync(hstring_ref productId, GUID transactionId);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> RequestProductPurchaseAsync(hstring_ref productId);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> RequestProductPurchaseAsync(hstring_ref productId, hstring_ref offerId, const Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties & displayProperties);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::UnfulfilledConsumable>> GetUnfulfilledConsumablesAsync();
};

struct WINRT_EBO LicenseInformation :
    Windows::ApplicationModel::Store::ILicenseInformation
{
    LicenseInformation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ListingInformation :
    Windows::ApplicationModel::Store::IListingInformation,
    impl::require<ListingInformation, Windows::ApplicationModel::Store::IListingInformation2>
{
    ListingInformation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProductLicense :
    Windows::ApplicationModel::Store::IProductLicense,
    impl::require<ProductLicense, Windows::ApplicationModel::Store::IProductLicenseWithFulfillment>
{
    ProductLicense(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProductListing :
    Windows::ApplicationModel::Store::IProductListing,
    impl::require<ProductListing, Windows::ApplicationModel::Store::IProductListing2, Windows::ApplicationModel::Store::IProductListingWithMetadata>
{
    ProductListing(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProductPurchaseDisplayProperties :
    Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties
{
    ProductPurchaseDisplayProperties(std::nullptr_t) noexcept {}
    ProductPurchaseDisplayProperties();
    ProductPurchaseDisplayProperties(hstring_ref name);
};

struct WINRT_EBO PurchaseResults :
    Windows::ApplicationModel::Store::IPurchaseResults
{
    PurchaseResults(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UnfulfilledConsumable :
    Windows::ApplicationModel::Store::IUnfulfilledConsumable
{
    UnfulfilledConsumable(std::nullptr_t) noexcept {}
};

}

}
