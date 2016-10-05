// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Store {

struct ICurrentApp;
struct ICurrentApp2Statics;
struct ICurrentAppSimulator;
struct ICurrentAppSimulatorStaticsWithFiltering;
struct ICurrentAppSimulatorWithCampaignId;
struct ICurrentAppSimulatorWithConsumables;
struct ICurrentAppStaticsWithFiltering;
struct ICurrentAppWithCampaignId;
struct ICurrentAppWithConsumables;
struct ILicenseInformation;
struct IListingInformation;
struct IListingInformation2;
struct IProductLicense;
struct IProductLicenseWithFulfillment;
struct IProductListing;
struct IProductListing2;
struct IProductListingWithConsumables;
struct IProductListingWithMetadata;
struct IProductPurchaseDisplayProperties;
struct IProductPurchaseDisplayPropertiesFactory;
struct IPurchaseResults;
struct IUnfulfilledConsumable;
struct LicenseChangedEventHandler;
struct LicenseInformation;
struct ListingInformation;
struct ProductLicense;
struct ProductListing;
struct ProductPurchaseDisplayProperties;
struct PurchaseResults;
struct UnfulfilledConsumable;

}

namespace Windows::ApplicationModel::Store {

struct LicenseChangedEventHandler;
struct ICurrentApp;
struct ICurrentApp2Statics;
struct ICurrentAppSimulator;
struct ICurrentAppSimulatorStaticsWithFiltering;
struct ICurrentAppSimulatorWithCampaignId;
struct ICurrentAppSimulatorWithConsumables;
struct ICurrentAppStaticsWithFiltering;
struct ICurrentAppWithCampaignId;
struct ICurrentAppWithConsumables;
struct ILicenseInformation;
struct IListingInformation;
struct IListingInformation2;
struct IProductLicense;
struct IProductLicenseWithFulfillment;
struct IProductListing;
struct IProductListing2;
struct IProductListingWithConsumables;
struct IProductListingWithMetadata;
struct IProductPurchaseDisplayProperties;
struct IProductPurchaseDisplayPropertiesFactory;
struct IPurchaseResults;
struct IUnfulfilledConsumable;
struct CurrentApp;
struct CurrentAppSimulator;
struct LicenseInformation;
struct ListingInformation;
struct ProductLicense;
struct ProductListing;
struct ProductPurchaseDisplayProperties;
struct PurchaseResults;
struct UnfulfilledConsumable;

}

namespace Windows::ApplicationModel::Store {

enum class FulfillmentResult
{
    Succeeded = 0,
    NothingToFulfill = 1,
    PurchasePending = 2,
    PurchaseReverted = 3,
    ServerError = 4,
};

enum class ProductPurchaseStatus
{
    Succeeded = 0,
    AlreadyPurchased = 1,
    NotFulfilled = 2,
    NotPurchased = 3,
};

enum class ProductType
{
    Unknown = 0,
    Durable = 1,
    Consumable = 2,
};

}

}
