// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Security.Authentication.Web.Core.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.ApplicationModel.Store.Preview.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::Preview {

struct StoreConfiguration
{
    StoreConfiguration() = delete;
    static void SetSystemConfiguration(param::hstring const& catalogHardwareManufacturerId, param::hstring const& catalogStoreContentModifierId, Windows::Foundation::DateTime const& systemConfigurationExpiration, param::hstring const& catalogHardwareDescriptor);
    static void SetMobileOperatorConfiguration(param::hstring const& mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes);
    static void SetStoreWebAccountId(param::hstring const& webAccountId);
    static bool IsStoreWebAccountId(param::hstring const& webAccountId);
    static Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo HardwareManufacturerInfo();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StoreSystemFeature>> FilterUnsupportedSystemFeaturesAsync(param::async_iterable<Windows::ApplicationModel::Store::Preview::StoreSystemFeature> const& systemFeatures);
    static Windows::Foundation::IReference<uint32_t> PurchasePromptingPolicy();
    static void PurchasePromptingPolicy(optional<uint32_t> const& value);
    static bool HasStoreWebAccount();
    static bool HasStoreWebAccountForUser(Windows::System::User const& user);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> GetStoreLogDataAsync(Windows::ApplicationModel::Store::Preview::StoreLogOptions const& options);
    static void SetStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId);
    static bool IsStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId);
    static Windows::Foundation::IReference<uint32_t> GetPurchasePromptingPolicyForUser(Windows::System::User const& user);
    static void SetPurchasePromptingPolicyForUser(Windows::System::User const& user, optional<uint32_t> const& value);
    static hstring GetStoreWebAccountId();
    static hstring GetStoreWebAccountIdForUser(Windows::System::User const& user);
    static void SetEnterpriseStoreWebAccountId(param::hstring const& webAccountId);
    static void SetEnterpriseStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId);
    static hstring GetEnterpriseStoreWebAccountId();
    static hstring GetEnterpriseStoreWebAccountIdForUser(Windows::System::User const& user);
    static bool ShouldRestrictToEnterpriseStoreOnly();
    static bool ShouldRestrictToEnterpriseStoreOnlyForUser(Windows::System::User const& user);
};

struct WINRT_EBO StoreHardwareManufacturerInfo :
    Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo
{
    StoreHardwareManufacturerInfo(std::nullptr_t) noexcept {}
};

struct StorePreview
{
    StorePreview() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults> RequestProductPurchaseByProductIdAndSkuIdAsync(param::hstring const& productId, param::hstring const& skuId);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>> LoadAddOnProductInfosAsync();
};

struct WINRT_EBO StorePreviewProductInfo :
    Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo
{
    StorePreviewProductInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorePreviewPurchaseResults :
    Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults
{
    StorePreviewPurchaseResults(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorePreviewSkuInfo :
    Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo
{
    StorePreviewSkuInfo(std::nullptr_t) noexcept {}
};

struct WebAuthenticationCoreManagerHelper
{
    WebAuthenticationCoreManagerHelper() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> RequestTokenWithUIElementHostingAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::UI::Xaml::UIElement const& uiElement);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> RequestTokenWithUIElementHostingAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::Xaml::UIElement const& uiElement);
};

}
