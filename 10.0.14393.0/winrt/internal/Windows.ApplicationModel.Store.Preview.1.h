// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.Store.Preview.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.System.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Storage.Streams.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Store::Preview {

struct __declspec(uuid("728f7fc0-8628-42ec-84a2-07780eb44d8b")) __declspec(novtable) IStoreConfigurationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetSystemConfiguration(hstring catalogHardwareManufacturerId, hstring catalogStoreContentModifierId, Windows::Foundation::DateTime systemConfigurationExpiration, hstring catalogHardwareDescriptor) = 0;
    virtual HRESULT __stdcall abi_SetMobileOperatorConfiguration(hstring mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes) = 0;
    virtual HRESULT __stdcall abi_SetStoreWebAccountId(hstring webAccountId) = 0;
    virtual HRESULT __stdcall abi_IsStoreWebAccountId(hstring webAccountId, bool * value) = 0;
    virtual HRESULT __stdcall get_HardwareManufacturerInfo(Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo ** value) = 0;
    virtual HRESULT __stdcall abi_FilterUnsupportedSystemFeaturesAsync(Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> * systemFeatures, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>> ** operation) = 0;
};

struct __declspec(uuid("657c4595-c8b7-4fe9-9f4c-4d71027d347e")) __declspec(novtable) IStoreConfigurationStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PurchasePromptingPolicy(Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall put_PurchasePromptingPolicy(Windows::Foundation::IReference<uint32_t> * value) = 0;
};

struct __declspec(uuid("6d45f57c-f144-4cb5-9d3f-4eb05e30b6d3")) __declspec(novtable) IStoreConfigurationStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_HasStoreWebAccount(bool * value) = 0;
    virtual HRESULT __stdcall abi_HasStoreWebAccountForUser(Windows::System::IUser * user, bool * value) = 0;
    virtual HRESULT __stdcall abi_GetStoreLogDataAsync(winrt::Windows::ApplicationModel::Store::Preview::StoreLogOptions options, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> ** operation) = 0;
    virtual HRESULT __stdcall abi_SetStoreWebAccountIdForUser(Windows::System::IUser * user, hstring webAccountId) = 0;
    virtual HRESULT __stdcall abi_IsStoreWebAccountIdForUser(Windows::System::IUser * user, hstring webAccountId, bool * value) = 0;
    virtual HRESULT __stdcall abi_GetPurchasePromptingPolicyForUser(Windows::System::IUser * user, Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall abi_SetPurchasePromptingPolicyForUser(Windows::System::IUser * user, Windows::Foundation::IReference<uint32_t> * value) = 0;
};

struct __declspec(uuid("f292dc08-c654-43ac-a21f-34801c9d3388")) __declspec(novtable) IStoreHardwareManufacturerInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_HardwareManufacturerId(hstring * value) = 0;
    virtual HRESULT __stdcall get_StoreContentModifierId(hstring * value) = 0;
    virtual HRESULT __stdcall get_ModelName(hstring * value) = 0;
    virtual HRESULT __stdcall get_ManufacturerName(hstring * value) = 0;
};

struct __declspec(uuid("8a157241-840e-49a9-bc01-5d5b01fbc8e9")) __declspec(novtable) IStorePreview : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RequestProductPurchaseByProductIdAndSkuIdAsync(hstring productId, hstring skuId, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults> ** requestPurchaseBySkuIdOperation) = 0;
    virtual HRESULT __stdcall abi_LoadAddOnProductInfosAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>> ** loadAddOnProductInfosOperation) = 0;
};

struct __declspec(uuid("1937dbb3-6c01-4c9d-85cd-5babaac2b351")) __declspec(novtable) IStorePreviewProductInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ProductId(hstring * value) = 0;
    virtual HRESULT __stdcall get_ProductType(hstring * value) = 0;
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall get_Description(hstring * value) = 0;
    virtual HRESULT __stdcall get_SkuInfoList(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo> ** value) = 0;
};

struct __declspec(uuid("b0daaed1-d6c5-4e53-a043-fba0d8e61231")) __declspec(novtable) IStorePreviewPurchaseResults : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ProductPurchaseStatus(winrt::Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus * value) = 0;
};

struct __declspec(uuid("81fd76e2-0b26-48d9-98ce-27461c669d6c")) __declspec(novtable) IStorePreviewSkuInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ProductId(hstring * value) = 0;
    virtual HRESULT __stdcall get_SkuId(hstring * value) = 0;
    virtual HRESULT __stdcall get_SkuType(hstring * value) = 0;
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall get_Description(hstring * value) = 0;
    virtual HRESULT __stdcall get_CustomDeveloperData(hstring * value) = 0;
    virtual HRESULT __stdcall get_CurrencyCode(hstring * value) = 0;
    virtual HRESULT __stdcall get_FormattedListPrice(hstring * value) = 0;
    virtual HRESULT __stdcall get_ExtendedData(hstring * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo> { using default_interface = Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo; };
template <> struct traits<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo> { using default_interface = Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo; };
template <> struct traits<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults> { using default_interface = Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults; };
template <> struct traits<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo> { using default_interface = Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo; };

}

namespace Windows::ApplicationModel::Store::Preview {

template <typename T> struct impl_IStoreConfigurationStatics;
template <typename T> struct impl_IStoreConfigurationStatics2;
template <typename T> struct impl_IStoreConfigurationStatics3;
template <typename T> struct impl_IStoreHardwareManufacturerInfo;
template <typename T> struct impl_IStorePreview;
template <typename T> struct impl_IStorePreviewProductInfo;
template <typename T> struct impl_IStorePreviewPurchaseResults;
template <typename T> struct impl_IStorePreviewSkuInfo;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::impl_IStoreConfigurationStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::impl_IStoreConfigurationStatics2<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::impl_IStoreConfigurationStatics3<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::impl_IStoreHardwareManufacturerInfo<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::IStorePreview>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::IStorePreview;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::impl_IStorePreview<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::impl_IStorePreviewProductInfo<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::impl_IStorePreviewPurchaseResults<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo;
    template <typename D> using consume = Windows::ApplicationModel::Store::Preview::impl_IStorePreviewSkuInfo<D>;
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::StoreConfiguration>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Store.Preview.StoreConfiguration"; }
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Store.Preview.StoreHardwareManufacturerInfo"; }
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::StorePreview>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Store.Preview.StorePreview"; }
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo"; }
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Store.Preview.StorePreviewPurchaseResults"; }
};

template <> struct traits<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo>
{
    using abi = ABI::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Store.Preview.StorePreviewSkuInfo"; }
};

}

}
