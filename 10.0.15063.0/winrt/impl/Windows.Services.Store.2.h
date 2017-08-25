// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Web.Http.1.h"
#include "winrt/impl/Windows.Services.Store.1.h"

WINRT_EXPORT namespace winrt::Windows::Services::Store {

struct StorePackageUpdateStatus
{
    hstring PackageFamilyName;
    uint64_t PackageDownloadSizeInBytes;
    uint64_t PackageBytesDownloaded;
    double PackageDownloadProgress;
    double TotalDownloadProgress;
    Windows::Services::Store::StorePackageUpdateState PackageUpdateState;
};

struct WINRT_EBO StoreAcquireLicenseResult :
    Windows::Services::Store::IStoreAcquireLicenseResult
{
    StoreAcquireLicenseResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StoreAppLicense :
    Windows::Services::Store::IStoreAppLicense
{
    StoreAppLicense(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StoreAvailability :
    Windows::Services::Store::IStoreAvailability
{
    StoreAvailability(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StoreCollectionData :
    Windows::Services::Store::IStoreCollectionData
{
    StoreCollectionData(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StoreConsumableResult :
    Windows::Services::Store::IStoreConsumableResult
{
    StoreConsumableResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StoreContext :
    Windows::Services::Store::IStoreContext,
    impl::require<StoreContext, Windows::Services::Store::IStoreContext2>
{
    StoreContext(std::nullptr_t) noexcept {}
    static Windows::Services::Store::StoreContext GetDefault();
    static Windows::Services::Store::StoreContext GetForUser(Windows::System::User const& user);
};

struct WINRT_EBO StoreImage :
    Windows::Services::Store::IStoreImage
{
    StoreImage(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StoreLicense :
    Windows::Services::Store::IStoreLicense
{
    StoreLicense(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorePackageLicense :
    Windows::Services::Store::IStorePackageLicense
{
    StorePackageLicense(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorePackageUpdate :
    Windows::Services::Store::IStorePackageUpdate
{
    StorePackageUpdate(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorePackageUpdateResult :
    Windows::Services::Store::IStorePackageUpdateResult
{
    StorePackageUpdateResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorePrice :
    Windows::Services::Store::IStorePrice
{
    StorePrice(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StoreProduct :
    Windows::Services::Store::IStoreProduct
{
    StoreProduct(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StoreProductPagedQueryResult :
    Windows::Services::Store::IStoreProductPagedQueryResult
{
    StoreProductPagedQueryResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StoreProductQueryResult :
    Windows::Services::Store::IStoreProductQueryResult
{
    StoreProductQueryResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StoreProductResult :
    Windows::Services::Store::IStoreProductResult
{
    StoreProductResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorePurchaseProperties :
    Windows::Services::Store::IStorePurchaseProperties
{
    StorePurchaseProperties(std::nullptr_t) noexcept {}
    StorePurchaseProperties();
    StorePurchaseProperties(param::hstring const& name);
};

struct WINRT_EBO StorePurchaseResult :
    Windows::Services::Store::IStorePurchaseResult
{
    StorePurchaseResult(std::nullptr_t) noexcept {}
};

struct StoreRequestHelper
{
    StoreRequestHelper() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreSendRequestResult> SendRequestAsync(Windows::Services::Store::StoreContext const& context, uint32_t requestKind, param::hstring const& parametersAsJson);
};

struct WINRT_EBO StoreSendRequestResult :
    Windows::Services::Store::IStoreSendRequestResult,
    impl::require<StoreSendRequestResult, Windows::Services::Store::IStoreSendRequestResult2>
{
    StoreSendRequestResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StoreSku :
    Windows::Services::Store::IStoreSku
{
    StoreSku(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StoreSubscriptionInfo :
    Windows::Services::Store::IStoreSubscriptionInfo
{
    StoreSubscriptionInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StoreVideo :
    Windows::Services::Store::IStoreVideo
{
    StoreVideo(std::nullptr_t) noexcept {}
};

}
