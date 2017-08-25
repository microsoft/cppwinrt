// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel {

struct Package;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::Web::Http {

enum class HttpStatusCode;

}

WINRT_EXPORT namespace winrt::Windows::Services::Store {

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

struct IStoreAcquireLicenseResult;
struct IStoreAppLicense;
struct IStoreAvailability;
struct IStoreCollectionData;
struct IStoreConsumableResult;
struct IStoreContext;
struct IStoreContext2;
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
struct IStoreSendRequestResult2;
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
struct StorePackageUpdateStatus;

}

namespace winrt::impl {

template <> struct category<Windows::Services::Store::IStoreAcquireLicenseResult>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreAppLicense>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreAvailability>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreCollectionData>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreConsumableResult>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreContext>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreContext2>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreContextStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreImage>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreLicense>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStorePackageLicense>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStorePackageUpdate>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStorePackageUpdateResult>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStorePrice>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreProduct>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreProductPagedQueryResult>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreProductQueryResult>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreProductResult>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStorePurchaseProperties>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStorePurchasePropertiesFactory>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStorePurchaseResult>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreRequestHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreSendRequestResult>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreSendRequestResult2>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreSku>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreSubscriptionInfo>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::IStoreVideo>{ using type = interface_category; };
template <> struct category<Windows::Services::Store::StoreAcquireLicenseResult>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreAppLicense>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreAvailability>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreCollectionData>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreConsumableResult>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreContext>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreImage>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreLicense>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StorePackageLicense>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StorePackageUpdate>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StorePackageUpdateResult>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StorePrice>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreProduct>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreProductPagedQueryResult>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreProductQueryResult>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreProductResult>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StorePurchaseProperties>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StorePurchaseResult>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreRequestHelper>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreSendRequestResult>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreSku>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreSubscriptionInfo>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreVideo>{ using type = class_category; };
template <> struct category<Windows::Services::Store::StoreConsumableStatus>{ using type = enum_category; };
template <> struct category<Windows::Services::Store::StoreDurationUnit>{ using type = enum_category; };
template <> struct category<Windows::Services::Store::StorePackageUpdateState>{ using type = enum_category; };
template <> struct category<Windows::Services::Store::StorePurchaseStatus>{ using type = enum_category; };
template <> struct category<Windows::Services::Store::StorePackageUpdateStatus>{ using type = struct_category<hstring,uint64_t,uint64_t,double,double,Windows::Services::Store::StorePackageUpdateState>; };
template <> struct name<Windows::Services::Store::IStoreAcquireLicenseResult>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreAcquireLicenseResult" }; };
template <> struct name<Windows::Services::Store::IStoreAppLicense>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreAppLicense" }; };
template <> struct name<Windows::Services::Store::IStoreAvailability>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreAvailability" }; };
template <> struct name<Windows::Services::Store::IStoreCollectionData>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreCollectionData" }; };
template <> struct name<Windows::Services::Store::IStoreConsumableResult>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreConsumableResult" }; };
template <> struct name<Windows::Services::Store::IStoreContext>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreContext" }; };
template <> struct name<Windows::Services::Store::IStoreContext2>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreContext2" }; };
template <> struct name<Windows::Services::Store::IStoreContextStatics>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreContextStatics" }; };
template <> struct name<Windows::Services::Store::IStoreImage>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreImage" }; };
template <> struct name<Windows::Services::Store::IStoreLicense>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreLicense" }; };
template <> struct name<Windows::Services::Store::IStorePackageLicense>{ static constexpr auto & value{ L"Windows.Services.Store.IStorePackageLicense" }; };
template <> struct name<Windows::Services::Store::IStorePackageUpdate>{ static constexpr auto & value{ L"Windows.Services.Store.IStorePackageUpdate" }; };
template <> struct name<Windows::Services::Store::IStorePackageUpdateResult>{ static constexpr auto & value{ L"Windows.Services.Store.IStorePackageUpdateResult" }; };
template <> struct name<Windows::Services::Store::IStorePrice>{ static constexpr auto & value{ L"Windows.Services.Store.IStorePrice" }; };
template <> struct name<Windows::Services::Store::IStoreProduct>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreProduct" }; };
template <> struct name<Windows::Services::Store::IStoreProductPagedQueryResult>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreProductPagedQueryResult" }; };
template <> struct name<Windows::Services::Store::IStoreProductQueryResult>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreProductQueryResult" }; };
template <> struct name<Windows::Services::Store::IStoreProductResult>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreProductResult" }; };
template <> struct name<Windows::Services::Store::IStorePurchaseProperties>{ static constexpr auto & value{ L"Windows.Services.Store.IStorePurchaseProperties" }; };
template <> struct name<Windows::Services::Store::IStorePurchasePropertiesFactory>{ static constexpr auto & value{ L"Windows.Services.Store.IStorePurchasePropertiesFactory" }; };
template <> struct name<Windows::Services::Store::IStorePurchaseResult>{ static constexpr auto & value{ L"Windows.Services.Store.IStorePurchaseResult" }; };
template <> struct name<Windows::Services::Store::IStoreRequestHelperStatics>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreRequestHelperStatics" }; };
template <> struct name<Windows::Services::Store::IStoreSendRequestResult>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreSendRequestResult" }; };
template <> struct name<Windows::Services::Store::IStoreSendRequestResult2>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreSendRequestResult2" }; };
template <> struct name<Windows::Services::Store::IStoreSku>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreSku" }; };
template <> struct name<Windows::Services::Store::IStoreSubscriptionInfo>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreSubscriptionInfo" }; };
template <> struct name<Windows::Services::Store::IStoreVideo>{ static constexpr auto & value{ L"Windows.Services.Store.IStoreVideo" }; };
template <> struct name<Windows::Services::Store::StoreAcquireLicenseResult>{ static constexpr auto & value{ L"Windows.Services.Store.StoreAcquireLicenseResult" }; };
template <> struct name<Windows::Services::Store::StoreAppLicense>{ static constexpr auto & value{ L"Windows.Services.Store.StoreAppLicense" }; };
template <> struct name<Windows::Services::Store::StoreAvailability>{ static constexpr auto & value{ L"Windows.Services.Store.StoreAvailability" }; };
template <> struct name<Windows::Services::Store::StoreCollectionData>{ static constexpr auto & value{ L"Windows.Services.Store.StoreCollectionData" }; };
template <> struct name<Windows::Services::Store::StoreConsumableResult>{ static constexpr auto & value{ L"Windows.Services.Store.StoreConsumableResult" }; };
template <> struct name<Windows::Services::Store::StoreContext>{ static constexpr auto & value{ L"Windows.Services.Store.StoreContext" }; };
template <> struct name<Windows::Services::Store::StoreImage>{ static constexpr auto & value{ L"Windows.Services.Store.StoreImage" }; };
template <> struct name<Windows::Services::Store::StoreLicense>{ static constexpr auto & value{ L"Windows.Services.Store.StoreLicense" }; };
template <> struct name<Windows::Services::Store::StorePackageLicense>{ static constexpr auto & value{ L"Windows.Services.Store.StorePackageLicense" }; };
template <> struct name<Windows::Services::Store::StorePackageUpdate>{ static constexpr auto & value{ L"Windows.Services.Store.StorePackageUpdate" }; };
template <> struct name<Windows::Services::Store::StorePackageUpdateResult>{ static constexpr auto & value{ L"Windows.Services.Store.StorePackageUpdateResult" }; };
template <> struct name<Windows::Services::Store::StorePrice>{ static constexpr auto & value{ L"Windows.Services.Store.StorePrice" }; };
template <> struct name<Windows::Services::Store::StoreProduct>{ static constexpr auto & value{ L"Windows.Services.Store.StoreProduct" }; };
template <> struct name<Windows::Services::Store::StoreProductPagedQueryResult>{ static constexpr auto & value{ L"Windows.Services.Store.StoreProductPagedQueryResult" }; };
template <> struct name<Windows::Services::Store::StoreProductQueryResult>{ static constexpr auto & value{ L"Windows.Services.Store.StoreProductQueryResult" }; };
template <> struct name<Windows::Services::Store::StoreProductResult>{ static constexpr auto & value{ L"Windows.Services.Store.StoreProductResult" }; };
template <> struct name<Windows::Services::Store::StorePurchaseProperties>{ static constexpr auto & value{ L"Windows.Services.Store.StorePurchaseProperties" }; };
template <> struct name<Windows::Services::Store::StorePurchaseResult>{ static constexpr auto & value{ L"Windows.Services.Store.StorePurchaseResult" }; };
template <> struct name<Windows::Services::Store::StoreRequestHelper>{ static constexpr auto & value{ L"Windows.Services.Store.StoreRequestHelper" }; };
template <> struct name<Windows::Services::Store::StoreSendRequestResult>{ static constexpr auto & value{ L"Windows.Services.Store.StoreSendRequestResult" }; };
template <> struct name<Windows::Services::Store::StoreSku>{ static constexpr auto & value{ L"Windows.Services.Store.StoreSku" }; };
template <> struct name<Windows::Services::Store::StoreSubscriptionInfo>{ static constexpr auto & value{ L"Windows.Services.Store.StoreSubscriptionInfo" }; };
template <> struct name<Windows::Services::Store::StoreVideo>{ static constexpr auto & value{ L"Windows.Services.Store.StoreVideo" }; };
template <> struct name<Windows::Services::Store::StoreConsumableStatus>{ static constexpr auto & value{ L"Windows.Services.Store.StoreConsumableStatus" }; };
template <> struct name<Windows::Services::Store::StoreDurationUnit>{ static constexpr auto & value{ L"Windows.Services.Store.StoreDurationUnit" }; };
template <> struct name<Windows::Services::Store::StorePackageUpdateState>{ static constexpr auto & value{ L"Windows.Services.Store.StorePackageUpdateState" }; };
template <> struct name<Windows::Services::Store::StorePurchaseStatus>{ static constexpr auto & value{ L"Windows.Services.Store.StorePurchaseStatus" }; };
template <> struct name<Windows::Services::Store::StorePackageUpdateStatus>{ static constexpr auto & value{ L"Windows.Services.Store.StorePackageUpdateStatus" }; };
template <> struct guid<Windows::Services::Store::IStoreAcquireLicenseResult>{ static constexpr GUID value{ 0xFBD7946D,0xF040,0x4CB3,{ 0x9A,0x39,0x29,0xBC,0xEC,0xDB,0xE2,0x2D } }; };
template <> struct guid<Windows::Services::Store::IStoreAppLicense>{ static constexpr GUID value{ 0xF389F9DE,0x73C0,0x45CE,{ 0x9B,0xAB,0xB2,0xFE,0x3E,0x5E,0xAF,0xD3 } }; };
template <> struct guid<Windows::Services::Store::IStoreAvailability>{ static constexpr GUID value{ 0xFA060325,0x0FFD,0x4493,{ 0xAD,0x43,0xF1,0xF9,0x91,0x8F,0x69,0xFA } }; };
template <> struct guid<Windows::Services::Store::IStoreCollectionData>{ static constexpr GUID value{ 0x8AA4C3B3,0x5BB3,0x441A,{ 0x2A,0xB4,0x4D,0xAB,0x73,0xD5,0xCE,0x67 } }; };
template <> struct guid<Windows::Services::Store::IStoreConsumableResult>{ static constexpr GUID value{ 0xEA5DAB72,0x6A00,0x4052,{ 0xBE,0x5B,0xBF,0xDA,0xB4,0x43,0x33,0x52 } }; };
template <> struct guid<Windows::Services::Store::IStoreContext>{ static constexpr GUID value{ 0xAC98B6BE,0xF4FD,0x4912,{ 0xBA,0xBD,0x50,0x35,0xE5,0xE8,0xBC,0xAB } }; };
template <> struct guid<Windows::Services::Store::IStoreContext2>{ static constexpr GUID value{ 0x18BC54DA,0x7BD9,0x452C,{ 0x91,0x16,0x3B,0xBD,0x06,0xFF,0xC6,0x3A } }; };
template <> struct guid<Windows::Services::Store::IStoreContextStatics>{ static constexpr GUID value{ 0x9C06EE5F,0x15C0,0x4E72,{ 0x93,0x30,0xD6,0x19,0x1C,0xEB,0xD1,0x9C } }; };
template <> struct guid<Windows::Services::Store::IStoreImage>{ static constexpr GUID value{ 0x081FD248,0xADB4,0x4B64,{ 0xA9,0x93,0x78,0x47,0x89,0x92,0x6E,0xD5 } }; };
template <> struct guid<Windows::Services::Store::IStoreLicense>{ static constexpr GUID value{ 0x26DC9579,0x4C4F,0x4F30,{ 0xBC,0x89,0x64,0x9F,0x60,0xE3,0x60,0x55 } }; };
template <> struct guid<Windows::Services::Store::IStorePackageLicense>{ static constexpr GUID value{ 0x0C465714,0x14E1,0x4973,{ 0xBD,0x14,0xF7,0x77,0x24,0x27,0x1E,0x99 } }; };
template <> struct guid<Windows::Services::Store::IStorePackageUpdate>{ static constexpr GUID value{ 0x140FA150,0x3CBF,0x4A35,{ 0xB9,0x1F,0x48,0x27,0x1C,0x31,0xB0,0x72 } }; };
template <> struct guid<Windows::Services::Store::IStorePackageUpdateResult>{ static constexpr GUID value{ 0xE79142ED,0x61F9,0x4893,{ 0xB4,0xFE,0xCF,0x19,0x16,0x03,0xAF,0x7B } }; };
template <> struct guid<Windows::Services::Store::IStorePrice>{ static constexpr GUID value{ 0x55BA94C4,0x15F1,0x407C,{ 0x8F,0x06,0x00,0x63,0x80,0xF4,0xDF,0x0B } }; };
template <> struct guid<Windows::Services::Store::IStoreProduct>{ static constexpr GUID value{ 0x320E2C52,0xD760,0x450A,{ 0xA4,0x2B,0x67,0xD1,0xE9,0x01,0xAC,0x90 } }; };
template <> struct guid<Windows::Services::Store::IStoreProductPagedQueryResult>{ static constexpr GUID value{ 0xC92718C5,0x4DD5,0x4869,{ 0xA4,0x62,0xEC,0xC6,0x87,0x2E,0x43,0xC5 } }; };
template <> struct guid<Windows::Services::Store::IStoreProductQueryResult>{ static constexpr GUID value{ 0xD805E6C5,0xD456,0x4FF6,{ 0x80,0x49,0x90,0x76,0xD5,0x16,0x5F,0x73 } }; };
template <> struct guid<Windows::Services::Store::IStoreProductResult>{ static constexpr GUID value{ 0xB7674F73,0x3C87,0x4EE1,{ 0x82,0x01,0xF4,0x28,0x35,0x9B,0xD3,0xAF } }; };
template <> struct guid<Windows::Services::Store::IStorePurchaseProperties>{ static constexpr GUID value{ 0x836278F3,0xFF87,0x4364,{ 0xA5,0xB4,0xFD,0x21,0x53,0xEB,0xE4,0x3B } }; };
template <> struct guid<Windows::Services::Store::IStorePurchasePropertiesFactory>{ static constexpr GUID value{ 0xA768F59E,0xFEFD,0x489F,{ 0x9A,0x17,0x22,0xA5,0x93,0xE6,0x8B,0x9D } }; };
template <> struct guid<Windows::Services::Store::IStorePurchaseResult>{ static constexpr GUID value{ 0xADD28552,0xF96A,0x463D,{ 0xA7,0xBB,0xC2,0x0B,0x4F,0xCA,0x69,0x52 } }; };
template <> struct guid<Windows::Services::Store::IStoreRequestHelperStatics>{ static constexpr GUID value{ 0x6CE5E5F9,0xA0C9,0x4B2C,{ 0x96,0xA6,0xA1,0x71,0xC6,0x30,0x03,0x8D } }; };
template <> struct guid<Windows::Services::Store::IStoreSendRequestResult>{ static constexpr GUID value{ 0xC73ABE60,0x8272,0x4502,{ 0x8A,0x69,0x6E,0x75,0x15,0x3A,0x42,0x99 } }; };
template <> struct guid<Windows::Services::Store::IStoreSendRequestResult2>{ static constexpr GUID value{ 0x2901296F,0xC0B0,0x49D0,{ 0x8E,0x8D,0xAA,0x94,0x0A,0xF9,0xC1,0x0B } }; };
template <> struct guid<Windows::Services::Store::IStoreSku>{ static constexpr GUID value{ 0x397E6F55,0x4440,0x4F03,{ 0x86,0x3C,0x91,0xF3,0xFE,0xC8,0x3D,0x79 } }; };
template <> struct guid<Windows::Services::Store::IStoreSubscriptionInfo>{ static constexpr GUID value{ 0x4189776A,0x0559,0x43AC,{ 0xA9,0xC6,0x3A,0xB0,0x01,0x1F,0xB8,0xEB } }; };
template <> struct guid<Windows::Services::Store::IStoreVideo>{ static constexpr GUID value{ 0xF26CB184,0x6F5E,0x4DC2,{ 0x88,0x6C,0x3C,0x63,0x08,0x3C,0x2F,0x94 } }; };
template <> struct default_interface<Windows::Services::Store::StoreAcquireLicenseResult>{ using type = Windows::Services::Store::IStoreAcquireLicenseResult; };
template <> struct default_interface<Windows::Services::Store::StoreAppLicense>{ using type = Windows::Services::Store::IStoreAppLicense; };
template <> struct default_interface<Windows::Services::Store::StoreAvailability>{ using type = Windows::Services::Store::IStoreAvailability; };
template <> struct default_interface<Windows::Services::Store::StoreCollectionData>{ using type = Windows::Services::Store::IStoreCollectionData; };
template <> struct default_interface<Windows::Services::Store::StoreConsumableResult>{ using type = Windows::Services::Store::IStoreConsumableResult; };
template <> struct default_interface<Windows::Services::Store::StoreContext>{ using type = Windows::Services::Store::IStoreContext; };
template <> struct default_interface<Windows::Services::Store::StoreImage>{ using type = Windows::Services::Store::IStoreImage; };
template <> struct default_interface<Windows::Services::Store::StoreLicense>{ using type = Windows::Services::Store::IStoreLicense; };
template <> struct default_interface<Windows::Services::Store::StorePackageLicense>{ using type = Windows::Services::Store::IStorePackageLicense; };
template <> struct default_interface<Windows::Services::Store::StorePackageUpdate>{ using type = Windows::Services::Store::IStorePackageUpdate; };
template <> struct default_interface<Windows::Services::Store::StorePackageUpdateResult>{ using type = Windows::Services::Store::IStorePackageUpdateResult; };
template <> struct default_interface<Windows::Services::Store::StorePrice>{ using type = Windows::Services::Store::IStorePrice; };
template <> struct default_interface<Windows::Services::Store::StoreProduct>{ using type = Windows::Services::Store::IStoreProduct; };
template <> struct default_interface<Windows::Services::Store::StoreProductPagedQueryResult>{ using type = Windows::Services::Store::IStoreProductPagedQueryResult; };
template <> struct default_interface<Windows::Services::Store::StoreProductQueryResult>{ using type = Windows::Services::Store::IStoreProductQueryResult; };
template <> struct default_interface<Windows::Services::Store::StoreProductResult>{ using type = Windows::Services::Store::IStoreProductResult; };
template <> struct default_interface<Windows::Services::Store::StorePurchaseProperties>{ using type = Windows::Services::Store::IStorePurchaseProperties; };
template <> struct default_interface<Windows::Services::Store::StorePurchaseResult>{ using type = Windows::Services::Store::IStorePurchaseResult; };
template <> struct default_interface<Windows::Services::Store::StoreSendRequestResult>{ using type = Windows::Services::Store::IStoreSendRequestResult; };
template <> struct default_interface<Windows::Services::Store::StoreSku>{ using type = Windows::Services::Store::IStoreSku; };
template <> struct default_interface<Windows::Services::Store::StoreSubscriptionInfo>{ using type = Windows::Services::Store::IStoreSubscriptionInfo; };
template <> struct default_interface<Windows::Services::Store::StoreVideo>{ using type = Windows::Services::Store::IStoreVideo; };

template <> struct abi<Windows::Services::Store::StorePackageUpdateStatus>{ struct type
{
    HSTRING PackageFamilyName;
    uint64_t PackageDownloadSizeInBytes;
    uint64_t PackageBytesDownloaded;
    double PackageDownloadProgress;
    double TotalDownloadProgress;
    abi_t<Windows::Services::Store::StorePackageUpdateState> PackageUpdateState;
};};

template <typename D>
struct consume_Windows_Services_Store_IStoreAcquireLicenseResult
{
    Windows::Services::Store::StorePackageLicense StorePackageLicense() const;
    HRESULT ExtendedError() const;
};
template <> struct consume<Windows::Services::Store::IStoreAcquireLicenseResult> { template <typename D> using type = consume_Windows_Services_Store_IStoreAcquireLicenseResult<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreAppLicense
{
    hstring SkuStoreId() const;
    bool IsActive() const;
    bool IsTrial() const;
    Windows::Foundation::DateTime ExpirationDate() const;
    hstring ExtendedJsonData() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreLicense> AddOnLicenses() const;
    Windows::Foundation::TimeSpan TrialTimeRemaining() const;
    bool IsTrialOwnedByThisUser() const;
    hstring TrialUniqueId() const;
};
template <> struct consume<Windows::Services::Store::IStoreAppLicense> { template <typename D> using type = consume_Windows_Services_Store_IStoreAppLicense<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreAvailability
{
    hstring StoreId() const;
    Windows::Foundation::DateTime EndDate() const;
    Windows::Services::Store::StorePrice Price() const;
    hstring ExtendedJsonData() const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> RequestPurchaseAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> RequestPurchaseAsync(Windows::Services::Store::StorePurchaseProperties const& storePurchaseProperties) const;
};
template <> struct consume<Windows::Services::Store::IStoreAvailability> { template <typename D> using type = consume_Windows_Services_Store_IStoreAvailability<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreCollectionData
{
    bool IsTrial() const;
    hstring CampaignId() const;
    hstring DeveloperOfferId() const;
    Windows::Foundation::DateTime AcquiredDate() const;
    Windows::Foundation::DateTime StartDate() const;
    Windows::Foundation::DateTime EndDate() const;
    Windows::Foundation::TimeSpan TrialTimeRemaining() const;
    hstring ExtendedJsonData() const;
};
template <> struct consume<Windows::Services::Store::IStoreCollectionData> { template <typename D> using type = consume_Windows_Services_Store_IStoreCollectionData<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreConsumableResult
{
    Windows::Services::Store::StoreConsumableStatus Status() const;
    GUID TrackingId() const;
    uint32_t BalanceRemaining() const;
    HRESULT ExtendedError() const;
};
template <> struct consume<Windows::Services::Store::IStoreConsumableResult> { template <typename D> using type = consume_Windows_Services_Store_IStoreConsumableResult<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreContext
{
    Windows::System::User User() const;
    event_token OfflineLicensesChanged(Windows::Foundation::TypedEventHandler<Windows::Services::Store::StoreContext, Windows::Foundation::IInspectable> const& handler) const;
    using OfflineLicensesChanged_revoker = event_revoker<Windows::Services::Store::IStoreContext>;
    OfflineLicensesChanged_revoker OfflineLicensesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Store::StoreContext, Windows::Foundation::IInspectable> const& handler) const;
    void OfflineLicensesChanged(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<hstring> GetCustomerPurchaseIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId) const;
    Windows::Foundation::IAsyncOperation<hstring> GetCustomerCollectionsIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAppLicense> GetAppLicenseAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductResult> GetStoreProductForCurrentAppAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> GetStoreProductsAsync(param::async_iterable<hstring> const& productKinds, param::async_iterable<hstring> const& storeIds) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> GetAssociatedStoreProductsAsync(param::async_iterable<hstring> const& productKinds) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> GetAssociatedStoreProductsWithPagingAsync(param::async_iterable<hstring> const& productKinds, uint32_t maxItemsToRetrievePerPage) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> GetUserCollectionAsync(param::async_iterable<hstring> const& productKinds) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> GetUserCollectionWithPagingAsync(param::async_iterable<hstring> const& productKinds, uint32_t maxItemsToRetrievePerPage) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult> ReportConsumableFulfillmentAsync(param::hstring const& productStoreId, uint32_t quantity, GUID const& trackingId) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult> GetConsumableBalanceRemainingAsync(param::hstring const& productStoreId) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAcquireLicenseResult> AcquireStoreLicenseForOptionalPackageAsync(Windows::ApplicationModel::Package const& optionalPackage) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> RequestPurchaseAsync(param::hstring const& storeId) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> RequestPurchaseAsync(param::hstring const& storeId, Windows::Services::Store::StorePurchaseProperties const& storePurchaseProperties) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdate>> GetAppAndOptionalStorePackageUpdatesAsync() const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> RequestDownloadStorePackageUpdatesAsync(param::async_iterable<Windows::Services::Store::StorePackageUpdate> const& storePackageUpdates) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> RequestDownloadAndInstallStorePackageUpdatesAsync(param::async_iterable<Windows::Services::Store::StorePackageUpdate> const& storePackageUpdates) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> RequestDownloadAndInstallStorePackagesAsync(param::async_iterable<hstring> const& storeIds) const;
};
template <> struct consume<Windows::Services::Store::IStoreContext> { template <typename D> using type = consume_Windows_Services_Store_IStoreContext<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreContext2
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductResult> FindStoreProductForPackageAsync(param::async_iterable<hstring> const& productKinds, Windows::ApplicationModel::Package const& package) const;
};
template <> struct consume<Windows::Services::Store::IStoreContext2> { template <typename D> using type = consume_Windows_Services_Store_IStoreContext2<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreContextStatics
{
    Windows::Services::Store::StoreContext GetDefault() const;
    Windows::Services::Store::StoreContext GetForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::Services::Store::IStoreContextStatics> { template <typename D> using type = consume_Windows_Services_Store_IStoreContextStatics<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreImage
{
    Windows::Foundation::Uri Uri() const;
    hstring ImagePurposeTag() const;
    uint32_t Width() const;
    uint32_t Height() const;
    hstring Caption() const;
};
template <> struct consume<Windows::Services::Store::IStoreImage> { template <typename D> using type = consume_Windows_Services_Store_IStoreImage<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreLicense
{
    hstring SkuStoreId() const;
    bool IsActive() const;
    Windows::Foundation::DateTime ExpirationDate() const;
    hstring ExtendedJsonData() const;
    hstring InAppOfferToken() const;
};
template <> struct consume<Windows::Services::Store::IStoreLicense> { template <typename D> using type = consume_Windows_Services_Store_IStoreLicense<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStorePackageLicense
{
    event_token LicenseLost(Windows::Foundation::TypedEventHandler<Windows::Services::Store::StorePackageLicense, Windows::Foundation::IInspectable> const& handler) const;
    using LicenseLost_revoker = event_revoker<Windows::Services::Store::IStorePackageLicense>;
    LicenseLost_revoker LicenseLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Store::StorePackageLicense, Windows::Foundation::IInspectable> const& handler) const;
    void LicenseLost(event_token const& token) const;
    Windows::ApplicationModel::Package Package() const;
    bool IsValid() const;
    void ReleaseLicense() const;
};
template <> struct consume<Windows::Services::Store::IStorePackageLicense> { template <typename D> using type = consume_Windows_Services_Store_IStorePackageLicense<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStorePackageUpdate
{
    Windows::ApplicationModel::Package Package() const;
    bool Mandatory() const;
};
template <> struct consume<Windows::Services::Store::IStorePackageUpdate> { template <typename D> using type = consume_Windows_Services_Store_IStorePackageUpdate<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStorePackageUpdateResult
{
    Windows::Services::Store::StorePackageUpdateState OverallState() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdateStatus> StorePackageUpdateStatuses() const;
};
template <> struct consume<Windows::Services::Store::IStorePackageUpdateResult> { template <typename D> using type = consume_Windows_Services_Store_IStorePackageUpdateResult<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStorePrice
{
    hstring FormattedBasePrice() const;
    hstring FormattedPrice() const;
    bool IsOnSale() const;
    Windows::Foundation::DateTime SaleEndDate() const;
    hstring CurrencyCode() const;
    hstring FormattedRecurrencePrice() const;
};
template <> struct consume<Windows::Services::Store::IStorePrice> { template <typename D> using type = consume_Windows_Services_Store_IStorePrice<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreProduct
{
    hstring StoreId() const;
    hstring Language() const;
    hstring Title() const;
    hstring Description() const;
    hstring ProductKind() const;
    bool HasDigitalDownload() const;
    Windows::Foundation::Collections::IVectorView<hstring> Keywords() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage> Images() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo> Videos() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreSku> Skus() const;
    bool IsInUserCollection() const;
    Windows::Services::Store::StorePrice Price() const;
    hstring ExtendedJsonData() const;
    Windows::Foundation::Uri LinkUri() const;
    Windows::Foundation::IAsyncOperation<bool> GetIsAnySkuInstalledAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> RequestPurchaseAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> RequestPurchaseAsync(Windows::Services::Store::StorePurchaseProperties const& storePurchaseProperties) const;
    hstring InAppOfferToken() const;
};
template <> struct consume<Windows::Services::Store::IStoreProduct> { template <typename D> using type = consume_Windows_Services_Store_IStoreProduct<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreProductPagedQueryResult
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct> Products() const;
    bool HasMoreResults() const;
    HRESULT ExtendedError() const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> GetNextAsync() const;
};
template <> struct consume<Windows::Services::Store::IStoreProductPagedQueryResult> { template <typename D> using type = consume_Windows_Services_Store_IStoreProductPagedQueryResult<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreProductQueryResult
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct> Products() const;
    HRESULT ExtendedError() const;
};
template <> struct consume<Windows::Services::Store::IStoreProductQueryResult> { template <typename D> using type = consume_Windows_Services_Store_IStoreProductQueryResult<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreProductResult
{
    Windows::Services::Store::StoreProduct Product() const;
    HRESULT ExtendedError() const;
};
template <> struct consume<Windows::Services::Store::IStoreProductResult> { template <typename D> using type = consume_Windows_Services_Store_IStoreProductResult<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStorePurchaseProperties
{
    hstring Name() const;
    void Name(param::hstring const& value) const;
    hstring ExtendedJsonData() const;
    void ExtendedJsonData(param::hstring const& value) const;
};
template <> struct consume<Windows::Services::Store::IStorePurchaseProperties> { template <typename D> using type = consume_Windows_Services_Store_IStorePurchaseProperties<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStorePurchasePropertiesFactory
{
    Windows::Services::Store::StorePurchaseProperties Create(param::hstring const& name) const;
};
template <> struct consume<Windows::Services::Store::IStorePurchasePropertiesFactory> { template <typename D> using type = consume_Windows_Services_Store_IStorePurchasePropertiesFactory<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStorePurchaseResult
{
    Windows::Services::Store::StorePurchaseStatus Status() const;
    HRESULT ExtendedError() const;
};
template <> struct consume<Windows::Services::Store::IStorePurchaseResult> { template <typename D> using type = consume_Windows_Services_Store_IStorePurchaseResult<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreRequestHelperStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreSendRequestResult> SendRequestAsync(Windows::Services::Store::StoreContext const& context, uint32_t requestKind, param::hstring const& parametersAsJson) const;
};
template <> struct consume<Windows::Services::Store::IStoreRequestHelperStatics> { template <typename D> using type = consume_Windows_Services_Store_IStoreRequestHelperStatics<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreSendRequestResult
{
    hstring Response() const;
    HRESULT ExtendedError() const;
};
template <> struct consume<Windows::Services::Store::IStoreSendRequestResult> { template <typename D> using type = consume_Windows_Services_Store_IStoreSendRequestResult<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreSendRequestResult2
{
    Windows::Web::Http::HttpStatusCode HttpStatusCode() const;
};
template <> struct consume<Windows::Services::Store::IStoreSendRequestResult2> { template <typename D> using type = consume_Windows_Services_Store_IStoreSendRequestResult2<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreSku
{
    hstring StoreId() const;
    hstring Language() const;
    hstring Title() const;
    hstring Description() const;
    bool IsTrial() const;
    hstring CustomDeveloperData() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage> Images() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo> Videos() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreAvailability> Availabilities() const;
    Windows::Services::Store::StorePrice Price() const;
    hstring ExtendedJsonData() const;
    bool IsInUserCollection() const;
    Windows::Foundation::Collections::IVectorView<hstring> BundledSkus() const;
    Windows::Services::Store::StoreCollectionData CollectionData() const;
    Windows::Foundation::IAsyncOperation<bool> GetIsInstalledAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> RequestPurchaseAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> RequestPurchaseAsync(Windows::Services::Store::StorePurchaseProperties const& storePurchaseProperties) const;
    bool IsSubscription() const;
    Windows::Services::Store::StoreSubscriptionInfo SubscriptionInfo() const;
};
template <> struct consume<Windows::Services::Store::IStoreSku> { template <typename D> using type = consume_Windows_Services_Store_IStoreSku<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreSubscriptionInfo
{
    uint32_t BillingPeriod() const;
    Windows::Services::Store::StoreDurationUnit BillingPeriodUnit() const;
    bool HasTrialPeriod() const;
    uint32_t TrialPeriod() const;
    Windows::Services::Store::StoreDurationUnit TrialPeriodUnit() const;
};
template <> struct consume<Windows::Services::Store::IStoreSubscriptionInfo> { template <typename D> using type = consume_Windows_Services_Store_IStoreSubscriptionInfo<D>; };

template <typename D>
struct consume_Windows_Services_Store_IStoreVideo
{
    Windows::Foundation::Uri Uri() const;
    hstring VideoPurposeTag() const;
    uint32_t Width() const;
    uint32_t Height() const;
    hstring Caption() const;
    Windows::Services::Store::StoreImage PreviewImage() const;
};
template <> struct consume<Windows::Services::Store::IStoreVideo> { template <typename D> using type = consume_Windows_Services_Store_IStoreVideo<D>; };

template <> struct abi<Windows::Services::Store::IStoreAcquireLicenseResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StorePackageLicense(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreAppLicense>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SkuStoreId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsActive(bool* value) = 0;
    virtual HRESULT __stdcall get_IsTrial(bool* value) = 0;
    virtual HRESULT __stdcall get_ExpirationDate(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AddOnLicenses(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TrialTimeRemaining(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_IsTrialOwnedByThisUser(bool* value) = 0;
    virtual HRESULT __stdcall get_TrialUniqueId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreAvailability>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StoreId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EndDate(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_Price(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) = 0;
    virtual HRESULT __stdcall RequestPurchaseAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestPurchaseWithPurchasePropertiesAsync(::IUnknown* storePurchaseProperties, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreCollectionData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsTrial(bool* value) = 0;
    virtual HRESULT __stdcall get_CampaignId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeveloperOfferId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AcquiredDate(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_StartDate(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_EndDate(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_TrialTimeRemaining(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreConsumableResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Services::Store::StoreConsumableStatus>* value) = 0;
    virtual HRESULT __stdcall get_TrackingId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_BalanceRemaining(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreContext>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_OfflineLicensesChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_OfflineLicensesChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall GetCustomerPurchaseIdAsync(HSTRING serviceTicket, HSTRING publisherUserId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetCustomerCollectionsIdAsync(HSTRING serviceTicket, HSTRING publisherUserId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetAppLicenseAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetStoreProductForCurrentAppAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetStoreProductsAsync(::IUnknown* productKinds, ::IUnknown* storeIds, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetAssociatedStoreProductsAsync(::IUnknown* productKinds, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetAssociatedStoreProductsWithPagingAsync(::IUnknown* productKinds, uint32_t maxItemsToRetrievePerPage, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetUserCollectionAsync(::IUnknown* productKinds, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetUserCollectionWithPagingAsync(::IUnknown* productKinds, uint32_t maxItemsToRetrievePerPage, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ReportConsumableFulfillmentAsync(HSTRING productStoreId, uint32_t quantity, abi_t<GUID> trackingId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetConsumableBalanceRemainingAsync(HSTRING productStoreId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AcquireStoreLicenseForOptionalPackageAsync(::IUnknown* optionalPackage, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestPurchaseAsync(HSTRING storeId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestPurchaseWithPurchasePropertiesAsync(HSTRING storeId, ::IUnknown* storePurchaseProperties, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetAppAndOptionalStorePackageUpdatesAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestDownloadStorePackageUpdatesAsync(::IUnknown* storePackageUpdates, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestDownloadAndInstallStorePackageUpdatesAsync(::IUnknown* storePackageUpdates, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestDownloadAndInstallStorePackagesAsync(::IUnknown* storeIds, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreContext2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindStoreProductForPackageAsync(::IUnknown* productKinds, ::IUnknown* package, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreContextStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreImage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ImagePurposeTag(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Width(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Caption(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreLicense>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SkuStoreId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsActive(bool* value) = 0;
    virtual HRESULT __stdcall get_ExpirationDate(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_InAppOfferToken(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStorePackageLicense>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_LicenseLost(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_LicenseLost(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Package(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsValid(bool* value) = 0;
    virtual HRESULT __stdcall ReleaseLicense() = 0;
};};

template <> struct abi<Windows::Services::Store::IStorePackageUpdate>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Package(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Mandatory(bool* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStorePackageUpdateResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OverallState(abi_t<Windows::Services::Store::StorePackageUpdateState>* value) = 0;
    virtual HRESULT __stdcall get_StorePackageUpdateStatuses(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStorePrice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FormattedBasePrice(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FormattedPrice(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsOnSale(bool* value) = 0;
    virtual HRESULT __stdcall get_SaleEndDate(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_CurrencyCode(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FormattedRecurrencePrice(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreProduct>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StoreId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ProductKind(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HasDigitalDownload(bool* value) = 0;
    virtual HRESULT __stdcall get_Keywords(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Images(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Videos(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Skus(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsInUserCollection(bool* value) = 0;
    virtual HRESULT __stdcall get_Price(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LinkUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetIsAnySkuInstalledAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestPurchaseAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestPurchaseWithPurchasePropertiesAsync(::IUnknown* storePurchaseProperties, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_InAppOfferToken(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreProductPagedQueryResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Products(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HasMoreResults(bool* value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) = 0;
    virtual HRESULT __stdcall GetNextAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreProductQueryResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Products(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreProductResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Product(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStorePurchaseProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Name(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ExtendedJsonData(HSTRING value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStorePurchasePropertiesFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING name, ::IUnknown** storePurchaseProperties) = 0;
};};

template <> struct abi<Windows::Services::Store::IStorePurchaseResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Services::Store::StorePurchaseStatus>* value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreRequestHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SendRequestAsync(::IUnknown* context, uint32_t requestKind, HSTRING parametersAsJson, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreSendRequestResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Response(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreSendRequestResult2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HttpStatusCode(abi_t<Windows::Web::Http::HttpStatusCode>* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreSku>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StoreId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsTrial(bool* value) = 0;
    virtual HRESULT __stdcall get_CustomDeveloperData(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Images(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Videos(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Availabilities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Price(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsInUserCollection(bool* value) = 0;
    virtual HRESULT __stdcall get_BundledSkus(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CollectionData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetIsInstalledAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestPurchaseAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestPurchaseWithPurchasePropertiesAsync(::IUnknown* storePurchaseProperties, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_IsSubscription(bool* value) = 0;
    virtual HRESULT __stdcall get_SubscriptionInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreSubscriptionInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BillingPeriod(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_BillingPeriodUnit(abi_t<Windows::Services::Store::StoreDurationUnit>* value) = 0;
    virtual HRESULT __stdcall get_HasTrialPeriod(bool* value) = 0;
    virtual HRESULT __stdcall get_TrialPeriod(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_TrialPeriodUnit(abi_t<Windows::Services::Store::StoreDurationUnit>* value) = 0;
};};

template <> struct abi<Windows::Services::Store::IStoreVideo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoPurposeTag(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Width(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Caption(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PreviewImage(::IUnknown** value) = 0;
};};

}
