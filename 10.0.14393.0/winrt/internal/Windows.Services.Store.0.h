// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Services::Store {

struct StorePackageUpdateStatus;

}

namespace Windows::Services::Store {

struct StorePackageUpdateStatus;

}

namespace ABI::Windows::Services::Store {

struct IStoreAcquireLicenseResult;
struct IStoreAppLicense;
struct IStoreAvailability;
struct IStoreCollectionData;
struct IStoreConsumableResult;
struct IStoreContext;
struct IStoreContextStatics;
struct IStoreImage;
struct IStoreLicense;
struct IStorePackageLicense;
struct IStorePackageUpdate;
struct IStorePackageUpdateResult;
struct IStorePrice;
struct IStoreProduct;
struct IStoreProductPagedQueryResult;
struct IStoreProductQueryResult;
struct IStoreProductResult;
struct IStorePurchaseProperties;
struct IStorePurchasePropertiesFactory;
struct IStorePurchaseResult;
struct IStoreRequestHelperStatics;
struct IStoreSendRequestResult;
struct IStoreSku;
struct IStoreSubscriptionInfo;
struct IStoreVideo;
struct StoreAcquireLicenseResult;
struct StoreAppLicense;
struct StoreAvailability;
struct StoreCollectionData;
struct StoreConsumableResult;
struct StoreContext;
struct StoreImage;
struct StoreLicense;
struct StorePackageLicense;
struct StorePackageUpdate;
struct StorePackageUpdateResult;
struct StorePrice;
struct StoreProduct;
struct StoreProductPagedQueryResult;
struct StoreProductQueryResult;
struct StoreProductResult;
struct StorePurchaseProperties;
struct StorePurchaseResult;
struct StoreSendRequestResult;
struct StoreSku;
struct StoreSubscriptionInfo;
struct StoreVideo;

}

namespace Windows::Services::Store {

struct IStoreAcquireLicenseResult;
struct IStoreAppLicense;
struct IStoreAvailability;
struct IStoreCollectionData;
struct IStoreConsumableResult;
struct IStoreContext;
struct IStoreContextStatics;
struct IStoreImage;
struct IStoreLicense;
struct IStorePackageLicense;
struct IStorePackageUpdate;
struct IStorePackageUpdateResult;
struct IStorePrice;
struct IStoreProduct;
struct IStoreProductPagedQueryResult;
struct IStoreProductQueryResult;
struct IStoreProductResult;
struct IStorePurchaseProperties;
struct IStorePurchasePropertiesFactory;
struct IStorePurchaseResult;
struct IStoreRequestHelperStatics;
struct IStoreSendRequestResult;
struct IStoreSku;
struct IStoreSubscriptionInfo;
struct IStoreVideo;
struct StoreAcquireLicenseResult;
struct StoreAppLicense;
struct StoreAvailability;
struct StoreCollectionData;
struct StoreConsumableResult;
struct StoreContext;
struct StoreImage;
struct StoreLicense;
struct StorePackageLicense;
struct StorePackageUpdate;
struct StorePackageUpdateResult;
struct StorePrice;
struct StoreProduct;
struct StoreProductPagedQueryResult;
struct StoreProductQueryResult;
struct StoreProductResult;
struct StorePurchaseProperties;
struct StorePurchaseResult;
struct StoreRequestHelper;
struct StoreSendRequestResult;
struct StoreSku;
struct StoreSubscriptionInfo;
struct StoreVideo;

}

namespace Windows::Services::Store {

enum class StoreConsumableStatus
{
    Succeeded = 0,
    InsufficentQuantity = 1,
    NetworkError = 2,
    ServerError = 3,
};

enum class StoreDurationUnit
{
    Minute = 0,
    Hour = 1,
    Day = 2,
    Week = 3,
    Month = 4,
    Year = 5,
};

enum class StorePackageUpdateState
{
    Pending = 0,
    Downloading = 1,
    Deploying = 2,
    Completed = 3,
    Canceled = 4,
    OtherError = 5,
    ErrorLowBattery = 6,
    ErrorWiFiRecommended = 7,
    ErrorWiFiRequired = 8,
};

enum class StorePurchaseStatus
{
    Succeeded = 0,
    AlreadyPurchased = 1,
    NotPurchased = 2,
    NetworkError = 3,
    ServerError = 4,
};

}

}
