// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.ApplicationModel.Store.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store {

struct WINRT_EBO ICurrentApp :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentApp>
{
    ICurrentApp(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrentApp2Statics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentApp2Statics>
{
    ICurrentApp2Statics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrentAppSimulator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppSimulator>
{
    ICurrentAppSimulator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrentAppSimulatorStaticsWithFiltering :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppSimulatorStaticsWithFiltering>
{
    ICurrentAppSimulatorStaticsWithFiltering(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrentAppSimulatorWithCampaignId :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppSimulatorWithCampaignId>
{
    ICurrentAppSimulatorWithCampaignId(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrentAppSimulatorWithConsumables :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppSimulatorWithConsumables>
{
    ICurrentAppSimulatorWithConsumables(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrentAppStaticsWithFiltering :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppStaticsWithFiltering>
{
    ICurrentAppStaticsWithFiltering(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrentAppWithCampaignId :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppWithCampaignId>
{
    ICurrentAppWithCampaignId(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrentAppWithConsumables :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppWithConsumables>
{
    ICurrentAppWithConsumables(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILicenseInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILicenseInformation>
{
    ILicenseInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListingInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListingInformation>
{
    IListingInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListingInformation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListingInformation2>
{
    IListingInformation2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProductLicense :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductLicense>
{
    IProductLicense(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProductLicenseWithFulfillment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductLicenseWithFulfillment>,
    impl::require<IProductLicenseWithFulfillment, Windows::ApplicationModel::Store::IProductLicense>
{
    IProductLicenseWithFulfillment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProductListing :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductListing>
{
    IProductListing(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProductListing2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductListing2>
{
    IProductListing2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProductListingWithConsumables :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductListingWithConsumables>
{
    IProductListingWithConsumables(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProductListingWithMetadata :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductListingWithMetadata>,
    impl::require<IProductListingWithMetadata, Windows::ApplicationModel::Store::IProductListing>
{
    IProductListingWithMetadata(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProductPurchaseDisplayProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductPurchaseDisplayProperties>
{
    IProductPurchaseDisplayProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProductPurchaseDisplayPropertiesFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductPurchaseDisplayPropertiesFactory>
{
    IProductPurchaseDisplayPropertiesFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPurchaseResults :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPurchaseResults>
{
    IPurchaseResults(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUnfulfilledConsumable :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUnfulfilledConsumable>
{
    IUnfulfilledConsumable(std::nullptr_t = nullptr) noexcept {}
};

}
