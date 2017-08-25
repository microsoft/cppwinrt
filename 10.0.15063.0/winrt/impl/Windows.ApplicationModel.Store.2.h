// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.ApplicationModel.Store.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store {

struct LicenseChangedEventHandler : Windows::Foundation::IUnknown
{
    LicenseChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> LicenseChangedEventHandler(L lambda);
    template <typename F> LicenseChangedEventHandler(F* function);
    template <typename O, typename M> LicenseChangedEventHandler(O* object, M method);
    void operator()() const;
};

struct CurrentApp
{
    CurrentApp() = delete;
    static Windows::ApplicationModel::Store::LicenseInformation LicenseInformation();
    static Windows::Foundation::Uri LinkUri();
    static GUID AppId();
    static Windows::Foundation::IAsyncOperation<hstring> RequestAppPurchaseAsync(bool includeReceipt);
    [[deprecated("RequestProductPurchaseAsync(productId, includeReceipt) may be altered or unavailable for releases after Windows 8.1. Instead, use RequestProductPurchaseAsync(productId).")]] static Windows::Foundation::IAsyncOperation<hstring> RequestProductPurchaseAsync(param::hstring const& productId, bool includeReceipt);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationAsync();
    static Windows::Foundation::IAsyncOperation<hstring> GetAppReceiptAsync();
    static Windows::Foundation::IAsyncOperation<hstring> GetProductReceiptAsync(param::hstring const& productId);
    static Windows::Foundation::IAsyncOperation<hstring> GetCustomerPurchaseIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId);
    static Windows::Foundation::IAsyncOperation<hstring> GetCustomerCollectionsIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationByProductIdsAsync(param::async_iterable<hstring> const& productIds);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationByKeywordsAsync(param::async_iterable<hstring> const& keywords);
    static void ReportProductFulfillment(param::hstring const& productId);
    static Windows::Foundation::IAsyncOperation<hstring> GetAppPurchaseCampaignIdAsync();
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::FulfillmentResult> ReportConsumableFulfillmentAsync(param::hstring const& productId, GUID const& transactionId);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> RequestProductPurchaseAsync(param::hstring const& productId);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> RequestProductPurchaseAsync(param::hstring const& productId, param::hstring const& offerId, Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties const& displayProperties);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::UnfulfilledConsumable>> GetUnfulfilledConsumablesAsync();
};

struct CurrentAppSimulator
{
    CurrentAppSimulator() = delete;
    static Windows::ApplicationModel::Store::LicenseInformation LicenseInformation();
    static Windows::Foundation::Uri LinkUri();
    static GUID AppId();
    static Windows::Foundation::IAsyncOperation<hstring> RequestAppPurchaseAsync(bool includeReceipt);
    [[deprecated("RequestProductPurchaseAsync(productId, includeReceipt) may be altered or unavailable for releases after Windows 8.1. Instead, use RequestProductPurchaseAsync(productId).")]] static Windows::Foundation::IAsyncOperation<hstring> RequestProductPurchaseAsync(param::hstring const& productId, bool includeReceipt);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationAsync();
    static Windows::Foundation::IAsyncOperation<hstring> GetAppReceiptAsync();
    static Windows::Foundation::IAsyncOperation<hstring> GetProductReceiptAsync(param::hstring const& productId);
    static Windows::Foundation::IAsyncAction ReloadSimulatorAsync(Windows::Storage::StorageFile const& simulatorSettingsFile);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationByProductIdsAsync(param::async_iterable<hstring> const& productIds);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationByKeywordsAsync(param::async_iterable<hstring> const& keywords);
    static Windows::Foundation::IAsyncOperation<hstring> GetAppPurchaseCampaignIdAsync();
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::FulfillmentResult> ReportConsumableFulfillmentAsync(param::hstring const& productId, GUID const& transactionId);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> RequestProductPurchaseAsync(param::hstring const& productId);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> RequestProductPurchaseAsync(param::hstring const& productId, param::hstring const& offerId, Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties const& displayProperties);
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
    ProductPurchaseDisplayProperties(param::hstring const& name);
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
