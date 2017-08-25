// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.Web.Http.0.h"
#include "winrt/impl/Windows.Services.Store.0.h"

WINRT_EXPORT namespace winrt::Windows::Services::Store {

struct WINRT_EBO IStoreAcquireLicenseResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreAcquireLicenseResult>
{
    IStoreAcquireLicenseResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreAppLicense :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreAppLicense>
{
    IStoreAppLicense(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreAvailability :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreAvailability>
{
    IStoreAvailability(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreCollectionData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreCollectionData>
{
    IStoreCollectionData(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreConsumableResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreConsumableResult>
{
    IStoreConsumableResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreContext>
{
    IStoreContext(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreContext2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreContext2>
{
    IStoreContext2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreContextStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreContextStatics>
{
    IStoreContextStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreImage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreImage>
{
    IStoreImage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreLicense :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreLicense>
{
    IStoreLicense(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorePackageLicense :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePackageLicense>,
    impl::require<IStorePackageLicense, Windows::Foundation::IClosable>
{
    IStorePackageLicense(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorePackageUpdate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePackageUpdate>
{
    IStorePackageUpdate(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorePackageUpdateResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePackageUpdateResult>
{
    IStorePackageUpdateResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorePrice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePrice>
{
    IStorePrice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreProduct :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreProduct>
{
    IStoreProduct(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreProductPagedQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreProductPagedQueryResult>
{
    IStoreProductPagedQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreProductQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreProductQueryResult>
{
    IStoreProductQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreProductResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreProductResult>
{
    IStoreProductResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorePurchaseProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePurchaseProperties>
{
    IStorePurchaseProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorePurchasePropertiesFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePurchasePropertiesFactory>
{
    IStorePurchasePropertiesFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorePurchaseResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePurchaseResult>
{
    IStorePurchaseResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreRequestHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreRequestHelperStatics>
{
    IStoreRequestHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreSendRequestResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreSendRequestResult>
{
    IStoreSendRequestResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreSendRequestResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreSendRequestResult2>
{
    IStoreSendRequestResult2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreSku :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreSku>
{
    IStoreSku(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreSubscriptionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreSubscriptionInfo>
{
    IStoreSubscriptionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreVideo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreVideo>
{
    IStoreVideo(std::nullptr_t = nullptr) noexcept {}
};

}
