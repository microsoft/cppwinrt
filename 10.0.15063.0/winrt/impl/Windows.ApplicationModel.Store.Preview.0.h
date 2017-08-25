// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Core {

struct WebTokenRequest;
struct WebTokenRequestResult;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct WebAccount;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct UIElement;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::Preview {

enum class StoreLogOptions : unsigned
{
    None = 0x0,
    TryElevate = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(StoreLogOptions)

enum class StorePreviewProductPurchaseStatus
{
    Succeeded = 0,
    AlreadyPurchased = 1,
    NotFulfilled = 2,
    NotPurchased = 3,
};

enum class StoreSystemFeature
{
    ArchitectureX86 = 0,
    ArchitectureX64 = 1,
    ArchitectureArm = 2,
    DirectX9 = 3,
    DirectX10 = 4,
    DirectX11 = 5,
    D3D12HardwareFL11 = 6,
    D3D12HardwareFL12 = 7,
    Memory300MB = 8,
    Memory750MB = 9,
    Memory1GB = 10,
    Memory2GB = 11,
    CameraFront = 12,
    CameraRear = 13,
    Gyroscope = 14,
    Hover = 15,
    Magnetometer = 16,
    Nfc = 17,
    Resolution720P = 18,
    ResolutionWvga = 19,
    ResolutionWvgaOr720P = 20,
    ResolutionWxga = 21,
    ResolutionWvgaOrWxga = 22,
    ResolutionWxgaOr720P = 23,
    Memory4GB = 24,
    Memory6GB = 25,
    Memory8GB = 26,
    Memory12GB = 27,
    Memory16GB = 28,
    Memory20GB = 29,
    VideoMemory2GB = 30,
    VideoMemory4GB = 31,
    VideoMemory6GB = 32,
    VideoMemory1GB = 33,
};

struct IStoreConfigurationStatics;
struct IStoreConfigurationStatics2;
struct IStoreConfigurationStatics3;
struct IStoreConfigurationStatics4;
struct IStoreHardwareManufacturerInfo;
struct IStorePreview;
struct IStorePreviewProductInfo;
struct IStorePreviewPurchaseResults;
struct IStorePreviewSkuInfo;
struct IWebAuthenticationCoreManagerHelper;
struct StoreConfiguration;
struct StoreHardwareManufacturerInfo;
struct StorePreview;
struct StorePreviewProductInfo;
struct StorePreviewPurchaseResults;
struct StorePreviewSkuInfo;
struct WebAuthenticationCoreManagerHelper;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::IStorePreview>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::StoreConfiguration>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::StorePreview>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::WebAuthenticationCoreManagerHelper>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::StoreLogOptions>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::StoreSystemFeature>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics2" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics3" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics4" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStoreHardwareManufacturerInfo" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::IStorePreview>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStorePreview" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStorePreviewProductInfo" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStorePreviewPurchaseResults" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStorePreviewSkuInfo" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IWebAuthenticationCoreManagerHelper" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::StoreConfiguration>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StoreConfiguration" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StoreHardwareManufacturerInfo" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::StorePreview>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StorePreview" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StorePreviewPurchaseResults" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StorePreviewSkuInfo" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::WebAuthenticationCoreManagerHelper>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.WebAuthenticationCoreManagerHelper" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::StoreLogOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StoreLogOptions" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StorePreviewProductPurchaseStatus" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::StoreSystemFeature>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StoreSystemFeature" }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>{ static constexpr GUID value{ 0x728F7FC0,0x8628,0x42EC,{ 0x84,0xA2,0x07,0x78,0x0E,0xB4,0x4D,0x8B } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>{ static constexpr GUID value{ 0x657C4595,0xC8B7,0x4FE9,{ 0x9F,0x4C,0x4D,0x71,0x02,0x7D,0x34,0x7E } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>{ static constexpr GUID value{ 0x6D45F57C,0xF144,0x4CB5,{ 0x9D,0x3F,0x4E,0xB0,0x5E,0x30,0xB6,0xD3 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>{ static constexpr GUID value{ 0x20FF56D2,0x4EE3,0x4CF0,{ 0x9B,0x12,0x55,0x2C,0x03,0x31,0x0F,0x75 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo>{ static constexpr GUID value{ 0xF292DC08,0xC654,0x43AC,{ 0xA2,0x1F,0x34,0x80,0x1C,0x9D,0x33,0x88 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::IStorePreview>{ static constexpr GUID value{ 0x8A157241,0x840E,0x49A9,{ 0xBC,0x01,0x5D,0x5B,0x01,0xFB,0xC8,0xE9 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo>{ static constexpr GUID value{ 0x1937DBB3,0x6C01,0x4C9D,{ 0x85,0xCD,0x5B,0xAB,0xAA,0xC2,0xB3,0x51 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults>{ static constexpr GUID value{ 0xB0DAAED1,0xD6C5,0x4E53,{ 0xA0,0x43,0xFB,0xA0,0xD8,0xE6,0x12,0x31 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo>{ static constexpr GUID value{ 0x81FD76E2,0x0B26,0x48D9,{ 0x98,0xCE,0x27,0x46,0x1C,0x66,0x9D,0x6C } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper>{ static constexpr GUID value{ 0x06A50525,0xE715,0x4123,{ 0x92,0x76,0x9D,0x6F,0x86,0x5B,0xA5,0x5F } }; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo>{ using type = Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>{ using type = Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults>{ using type = Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo>{ using type = Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics
{
    void SetSystemConfiguration(param::hstring const& catalogHardwareManufacturerId, param::hstring const& catalogStoreContentModifierId, Windows::Foundation::DateTime const& systemConfigurationExpiration, param::hstring const& catalogHardwareDescriptor) const;
    void SetMobileOperatorConfiguration(param::hstring const& mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes) const;
    void SetStoreWebAccountId(param::hstring const& webAccountId) const;
    bool IsStoreWebAccountId(param::hstring const& webAccountId) const;
    Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo HardwareManufacturerInfo() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StoreSystemFeature>> FilterUnsupportedSystemFeaturesAsync(param::async_iterable<Windows::ApplicationModel::Store::Preview::StoreSystemFeature> const& systemFeatures) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics2
{
    Windows::Foundation::IReference<uint32_t> PurchasePromptingPolicy() const;
    void PurchasePromptingPolicy(optional<uint32_t> const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3
{
    bool HasStoreWebAccount() const;
    bool HasStoreWebAccountForUser(Windows::System::User const& user) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> GetStoreLogDataAsync(Windows::ApplicationModel::Store::Preview::StoreLogOptions const& options) const;
    void SetStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId) const;
    bool IsStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId) const;
    Windows::Foundation::IReference<uint32_t> GetPurchasePromptingPolicyForUser(Windows::System::User const& user) const;
    void SetPurchasePromptingPolicyForUser(Windows::System::User const& user, optional<uint32_t> const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4
{
    hstring GetStoreWebAccountId() const;
    hstring GetStoreWebAccountIdForUser(Windows::System::User const& user) const;
    void SetEnterpriseStoreWebAccountId(param::hstring const& webAccountId) const;
    void SetEnterpriseStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId) const;
    hstring GetEnterpriseStoreWebAccountId() const;
    hstring GetEnterpriseStoreWebAccountIdForUser(Windows::System::User const& user) const;
    bool ShouldRestrictToEnterpriseStoreOnly() const;
    bool ShouldRestrictToEnterpriseStoreOnlyForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_IStoreHardwareManufacturerInfo
{
    hstring HardwareManufacturerId() const;
    hstring StoreContentModifierId() const;
    hstring ModelName() const;
    hstring ManufacturerName() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStoreHardwareManufacturerInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_IStorePreview
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults> RequestProductPurchaseByProductIdAndSkuIdAsync(param::hstring const& productId, param::hstring const& skuId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>> LoadAddOnProductInfosAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::IStorePreview> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStorePreview<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_IStorePreviewProductInfo
{
    hstring ProductId() const;
    hstring ProductType() const;
    hstring Title() const;
    hstring Description() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo> SkuInfoList() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStorePreviewProductInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_IStorePreviewPurchaseResults
{
    Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus ProductPurchaseStatus() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStorePreviewPurchaseResults<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo
{
    hstring ProductId() const;
    hstring SkuId() const;
    hstring SkuType() const;
    hstring Title() const;
    hstring Description() const;
    hstring CustomDeveloperData() const;
    hstring CurrencyCode() const;
    hstring FormattedListPrice() const;
    hstring ExtendedData() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_IWebAuthenticationCoreManagerHelper
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> RequestTokenWithUIElementHostingAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::UI::Xaml::UIElement const& uiElement) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> RequestTokenWithUIElementHostingAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::Xaml::UIElement const& uiElement) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IWebAuthenticationCoreManagerHelper<D>; };

template <> struct abi<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetSystemConfiguration(HSTRING catalogHardwareManufacturerId, HSTRING catalogStoreContentModifierId, abi_t<Windows::Foundation::DateTime> systemConfigurationExpiration, HSTRING catalogHardwareDescriptor) = 0;
    virtual HRESULT __stdcall SetMobileOperatorConfiguration(HSTRING mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes) = 0;
    virtual HRESULT __stdcall SetStoreWebAccountId(HSTRING webAccountId) = 0;
    virtual HRESULT __stdcall IsStoreWebAccountId(HSTRING webAccountId, bool* value) = 0;
    virtual HRESULT __stdcall get_HardwareManufacturerInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall FilterUnsupportedSystemFeaturesAsync(::IUnknown* systemFeatures, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PurchasePromptingPolicy(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PurchasePromptingPolicy(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall HasStoreWebAccount(bool* value) = 0;
    virtual HRESULT __stdcall HasStoreWebAccountForUser(::IUnknown* user, bool* value) = 0;
    virtual HRESULT __stdcall GetStoreLogDataAsync(abi_t<Windows::ApplicationModel::Store::Preview::StoreLogOptions> options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SetStoreWebAccountIdForUser(::IUnknown* user, HSTRING webAccountId) = 0;
    virtual HRESULT __stdcall IsStoreWebAccountIdForUser(::IUnknown* user, HSTRING webAccountId, bool* value) = 0;
    virtual HRESULT __stdcall GetPurchasePromptingPolicyForUser(::IUnknown* user, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetPurchasePromptingPolicyForUser(::IUnknown* user, ::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetStoreWebAccountId(HSTRING* result) = 0;
    virtual HRESULT __stdcall GetStoreWebAccountIdForUser(::IUnknown* user, HSTRING* result) = 0;
    virtual HRESULT __stdcall SetEnterpriseStoreWebAccountId(HSTRING webAccountId) = 0;
    virtual HRESULT __stdcall SetEnterpriseStoreWebAccountIdForUser(::IUnknown* user, HSTRING webAccountId) = 0;
    virtual HRESULT __stdcall GetEnterpriseStoreWebAccountId(HSTRING* result) = 0;
    virtual HRESULT __stdcall GetEnterpriseStoreWebAccountIdForUser(::IUnknown* user, HSTRING* result) = 0;
    virtual HRESULT __stdcall ShouldRestrictToEnterpriseStoreOnly(bool* result) = 0;
    virtual HRESULT __stdcall ShouldRestrictToEnterpriseStoreOnlyForUser(::IUnknown* user, bool* result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HardwareManufacturerId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_StoreContentModifierId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ModelName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ManufacturerName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::IStorePreview>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestProductPurchaseByProductIdAndSkuIdAsync(HSTRING productId, HSTRING skuId, ::IUnknown** requestPurchaseBySkuIdOperation) = 0;
    virtual HRESULT __stdcall LoadAddOnProductInfosAsync(::IUnknown** loadAddOnProductInfosOperation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProductId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ProductType(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SkuInfoList(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProductPurchaseStatus(abi_t<Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProductId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SkuId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SkuType(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CustomDeveloperData(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CurrencyCode(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FormattedListPrice(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ExtendedData(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestTokenWithUIElementHostingAsync(::IUnknown* request, ::IUnknown* uiElement, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall RequestTokenWithUIElementHostingAndWebAccountAsync(::IUnknown* request, ::IUnknown* webAccount, ::IUnknown* uiElement, ::IUnknown** asyncInfo) = 0;
};};

}
