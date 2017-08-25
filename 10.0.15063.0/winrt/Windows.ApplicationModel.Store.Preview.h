// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Security.Authentication.Web.Core.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.ApplicationModel.Store.Preview.2.h"
#include "winrt/Windows.ApplicationModel.Store.h"

namespace winrt::impl {

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics<D>::SetSystemConfiguration(param::hstring const& catalogHardwareManufacturerId, param::hstring const& catalogStoreContentModifierId, Windows::Foundation::DateTime const& systemConfigurationExpiration, param::hstring const& catalogHardwareDescriptor) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics)->SetSystemConfiguration(get_abi(catalogHardwareManufacturerId), get_abi(catalogStoreContentModifierId), get_abi(systemConfigurationExpiration), get_abi(catalogHardwareDescriptor)));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics<D>::SetMobileOperatorConfiguration(param::hstring const& mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics)->SetMobileOperatorConfiguration(get_abi(mobileOperatorId), appDownloadLimitInMegabytes, updateDownloadLimitInMegabytes));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics<D>::SetStoreWebAccountId(param::hstring const& webAccountId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics)->SetStoreWebAccountId(get_abi(webAccountId)));
}

template <typename D> bool consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics<D>::IsStoreWebAccountId(param::hstring const& webAccountId) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics)->IsStoreWebAccountId(get_abi(webAccountId), &value));
    return value;
}

template <typename D> Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics<D>::HardwareManufacturerInfo() const
{
    Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics)->get_HardwareManufacturerInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StoreSystemFeature>> consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics<D>::FilterUnsupportedSystemFeaturesAsync(param::async_iterable<Windows::ApplicationModel::Store::Preview::StoreSystemFeature> const& systemFeatures) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StoreSystemFeature>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics)->FilterUnsupportedSystemFeaturesAsync(get_abi(systemFeatures), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics2<D>::PurchasePromptingPolicy() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2)->get_PurchasePromptingPolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics2<D>::PurchasePromptingPolicy(optional<uint32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2)->put_PurchasePromptingPolicy(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3<D>::HasStoreWebAccount() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3)->HasStoreWebAccount(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3<D>::HasStoreWebAccountForUser(Windows::System::User const& user) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3)->HasStoreWebAccountForUser(get_abi(user), &value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3<D>::GetStoreLogDataAsync(Windows::ApplicationModel::Store::Preview::StoreLogOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3)->GetStoreLogDataAsync(get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3<D>::SetStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3)->SetStoreWebAccountIdForUser(get_abi(user), get_abi(webAccountId)));
}

template <typename D> bool consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3<D>::IsStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3)->IsStoreWebAccountIdForUser(get_abi(user), get_abi(webAccountId), &value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3<D>::GetPurchasePromptingPolicyForUser(Windows::System::User const& user) const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3)->GetPurchasePromptingPolicyForUser(get_abi(user), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3<D>::SetPurchasePromptingPolicyForUser(Windows::System::User const& user, optional<uint32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3)->SetPurchasePromptingPolicyForUser(get_abi(user), get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4<D>::GetStoreWebAccountId() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4)->GetStoreWebAccountId(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4<D>::GetStoreWebAccountIdForUser(Windows::System::User const& user) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4)->GetStoreWebAccountIdForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4<D>::SetEnterpriseStoreWebAccountId(param::hstring const& webAccountId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4)->SetEnterpriseStoreWebAccountId(get_abi(webAccountId)));
}

template <typename D> void consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4<D>::SetEnterpriseStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4)->SetEnterpriseStoreWebAccountIdForUser(get_abi(user), get_abi(webAccountId)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4<D>::GetEnterpriseStoreWebAccountId() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4)->GetEnterpriseStoreWebAccountId(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4<D>::GetEnterpriseStoreWebAccountIdForUser(Windows::System::User const& user) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4)->GetEnterpriseStoreWebAccountIdForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4<D>::ShouldRestrictToEnterpriseStoreOnly() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4)->ShouldRestrictToEnterpriseStoreOnly(&result));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4<D>::ShouldRestrictToEnterpriseStoreOnlyForUser(Windows::System::User const& user) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4)->ShouldRestrictToEnterpriseStoreOnlyForUser(get_abi(user), &result));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStoreHardwareManufacturerInfo<D>::HardwareManufacturerId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo)->get_HardwareManufacturerId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStoreHardwareManufacturerInfo<D>::StoreContentModifierId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo)->get_StoreContentModifierId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStoreHardwareManufacturerInfo<D>::ModelName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo)->get_ModelName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStoreHardwareManufacturerInfo<D>::ManufacturerName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo)->get_ManufacturerName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults> consume_Windows_ApplicationModel_Store_Preview_IStorePreview<D>::RequestProductPurchaseByProductIdAndSkuIdAsync(param::hstring const& productId, param::hstring const& skuId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults> requestPurchaseBySkuIdOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreview)->RequestProductPurchaseByProductIdAndSkuIdAsync(get_abi(productId), get_abi(skuId), put_abi(requestPurchaseBySkuIdOperation)));
    return requestPurchaseBySkuIdOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>> consume_Windows_ApplicationModel_Store_Preview_IStorePreview<D>::LoadAddOnProductInfosAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>> loadAddOnProductInfosOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreview)->LoadAddOnProductInfosAsync(put_abi(loadAddOnProductInfosOperation)));
    return loadAddOnProductInfosOperation;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStorePreviewProductInfo<D>::ProductId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo)->get_ProductId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStorePreviewProductInfo<D>::ProductType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo)->get_ProductType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStorePreviewProductInfo<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo)->get_Title(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStorePreviewProductInfo<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo> consume_Windows_ApplicationModel_Store_Preview_IStorePreviewProductInfo<D>::SkuInfoList() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo)->get_SkuInfoList(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus consume_Windows_ApplicationModel_Store_Preview_IStorePreviewPurchaseResults<D>::ProductPurchaseStatus() const
{
    Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults)->get_ProductPurchaseStatus(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo<D>::ProductId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo)->get_ProductId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo<D>::SkuId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo)->get_SkuId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo<D>::SkuType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo)->get_SkuType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo)->get_Title(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo)->get_Description(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo<D>::CustomDeveloperData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo)->get_CustomDeveloperData(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo<D>::CurrencyCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo)->get_CurrencyCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo<D>::FormattedListPrice() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo)->get_FormattedListPrice(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo<D>::ExtendedData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo)->get_ExtendedData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> consume_Windows_ApplicationModel_Store_Preview_IWebAuthenticationCoreManagerHelper<D>::RequestTokenWithUIElementHostingAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::UI::Xaml::UIElement const& uiElement) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper)->RequestTokenWithUIElementHostingAsync(get_abi(request), get_abi(uiElement), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> consume_Windows_ApplicationModel_Store_Preview_IWebAuthenticationCoreManagerHelper<D>::RequestTokenWithUIElementHostingAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::Xaml::UIElement const& uiElement) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper)->RequestTokenWithUIElementHostingAndWebAccountAsync(get_abi(request), get_abi(webAccount), get_abi(uiElement), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>
{
    HRESULT __stdcall SetSystemConfiguration(HSTRING catalogHardwareManufacturerId, HSTRING catalogStoreContentModifierId, abi_t<Windows::Foundation::DateTime> systemConfigurationExpiration, HSTRING catalogHardwareDescriptor) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSystemConfiguration(*reinterpret_cast<hstring const*>(&catalogHardwareManufacturerId), *reinterpret_cast<hstring const*>(&catalogStoreContentModifierId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&systemConfigurationExpiration), *reinterpret_cast<hstring const*>(&catalogHardwareDescriptor));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetMobileOperatorConfiguration(HSTRING mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetMobileOperatorConfiguration(*reinterpret_cast<hstring const*>(&mobileOperatorId), appDownloadLimitInMegabytes, updateDownloadLimitInMegabytes);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStoreWebAccountId(HSTRING webAccountId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStoreWebAccountId(*reinterpret_cast<hstring const*>(&webAccountId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsStoreWebAccountId(HSTRING webAccountId, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStoreWebAccountId(*reinterpret_cast<hstring const*>(&webAccountId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareManufacturerInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HardwareManufacturerInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FilterUnsupportedSystemFeaturesAsync(::IUnknown* systemFeatures, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FilterUnsupportedSystemFeaturesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::StoreSystemFeature> const*>(&systemFeatures)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>
{
    HRESULT __stdcall get_PurchasePromptingPolicy(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PurchasePromptingPolicy());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PurchasePromptingPolicy(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PurchasePromptingPolicy(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>
{
    HRESULT __stdcall HasStoreWebAccount(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasStoreWebAccount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HasStoreWebAccountForUser(::IUnknown* user, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasStoreWebAccountForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStoreLogDataAsync(abi_t<Windows::ApplicationModel::Store::Preview::StoreLogOptions> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetStoreLogDataAsync(*reinterpret_cast<Windows::ApplicationModel::Store::Preview::StoreLogOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStoreWebAccountIdForUser(::IUnknown* user, HSTRING webAccountId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStoreWebAccountIdForUser(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&webAccountId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsStoreWebAccountIdForUser(::IUnknown* user, HSTRING webAccountId, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStoreWebAccountIdForUser(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&webAccountId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPurchasePromptingPolicyForUser(::IUnknown* user, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetPurchasePromptingPolicyForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPurchasePromptingPolicyForUser(::IUnknown* user, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPurchasePromptingPolicyForUser(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>
{
    HRESULT __stdcall GetStoreWebAccountId(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetStoreWebAccountId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStoreWebAccountIdForUser(::IUnknown* user, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetStoreWebAccountIdForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetEnterpriseStoreWebAccountId(HSTRING webAccountId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEnterpriseStoreWebAccountId(*reinterpret_cast<hstring const*>(&webAccountId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetEnterpriseStoreWebAccountIdForUser(::IUnknown* user, HSTRING webAccountId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEnterpriseStoreWebAccountIdForUser(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&webAccountId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetEnterpriseStoreWebAccountId(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetEnterpriseStoreWebAccountId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetEnterpriseStoreWebAccountIdForUser(::IUnknown* user, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetEnterpriseStoreWebAccountIdForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShouldRestrictToEnterpriseStoreOnly(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShouldRestrictToEnterpriseStoreOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShouldRestrictToEnterpriseStoreOnlyForUser(::IUnknown* user, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShouldRestrictToEnterpriseStoreOnlyForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo>
{
    HRESULT __stdcall get_HardwareManufacturerId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HardwareManufacturerId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StoreContentModifierId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StoreContentModifierId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModelName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ModelName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManufacturerName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ManufacturerName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStorePreview> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStorePreview>
{
    HRESULT __stdcall RequestProductPurchaseByProductIdAndSkuIdAsync(HSTRING productId, HSTRING skuId, ::IUnknown** requestPurchaseBySkuIdOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestPurchaseBySkuIdOperation = detach_abi(this->shim().RequestProductPurchaseByProductIdAndSkuIdAsync(*reinterpret_cast<hstring const*>(&productId), *reinterpret_cast<hstring const*>(&skuId)));
            return S_OK;
        }
        catch (...)
        {
            *requestPurchaseBySkuIdOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAddOnProductInfosAsync(::IUnknown** loadAddOnProductInfosOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loadAddOnProductInfosOperation = detach_abi(this->shim().LoadAddOnProductInfosAsync());
            return S_OK;
        }
        catch (...)
        {
            *loadAddOnProductInfosOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo>
{
    HRESULT __stdcall get_ProductId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProductId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProductType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProductType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SkuInfoList(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SkuInfoList());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults>
{
    HRESULT __stdcall get_ProductPurchaseStatus(abi_t<Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProductPurchaseStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo>
{
    HRESULT __stdcall get_ProductId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProductId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SkuId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SkuId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SkuType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SkuType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomDeveloperData(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomDeveloperData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrencyCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrencyCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FormattedListPrice(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FormattedListPrice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedData(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper> : produce_base<D, Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper>
{
    HRESULT __stdcall RequestTokenWithUIElementHostingAsync(::IUnknown* request, ::IUnknown* uiElement, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().RequestTokenWithUIElementHostingAsync(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenRequest const*>(&request), *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&uiElement)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestTokenWithUIElementHostingAndWebAccountAsync(::IUnknown* request, ::IUnknown* webAccount, ::IUnknown* uiElement, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().RequestTokenWithUIElementHostingAsync(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenRequest const*>(&request), *reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&uiElement)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::Preview {

inline void StoreConfiguration::SetSystemConfiguration(param::hstring const& catalogHardwareManufacturerId, param::hstring const& catalogStoreContentModifierId, Windows::Foundation::DateTime const& systemConfigurationExpiration, param::hstring const& catalogHardwareDescriptor)
{
    get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>().SetSystemConfiguration(catalogHardwareManufacturerId, catalogStoreContentModifierId, systemConfigurationExpiration, catalogHardwareDescriptor);
}

inline void StoreConfiguration::SetMobileOperatorConfiguration(param::hstring const& mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes)
{
    get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>().SetMobileOperatorConfiguration(mobileOperatorId, appDownloadLimitInMegabytes, updateDownloadLimitInMegabytes);
}

inline void StoreConfiguration::SetStoreWebAccountId(param::hstring const& webAccountId)
{
    get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>().SetStoreWebAccountId(webAccountId);
}

inline bool StoreConfiguration::IsStoreWebAccountId(param::hstring const& webAccountId)
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>().IsStoreWebAccountId(webAccountId);
}

inline Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo StoreConfiguration::HardwareManufacturerInfo()
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>().HardwareManufacturerInfo();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StoreSystemFeature>> StoreConfiguration::FilterUnsupportedSystemFeaturesAsync(param::async_iterable<Windows::ApplicationModel::Store::Preview::StoreSystemFeature> const& systemFeatures)
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>().FilterUnsupportedSystemFeaturesAsync(systemFeatures);
}

inline Windows::Foundation::IReference<uint32_t> StoreConfiguration::PurchasePromptingPolicy()
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>().PurchasePromptingPolicy();
}

inline void StoreConfiguration::PurchasePromptingPolicy(optional<uint32_t> const& value)
{
    get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>().PurchasePromptingPolicy(value);
}

inline bool StoreConfiguration::HasStoreWebAccount()
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>().HasStoreWebAccount();
}

inline bool StoreConfiguration::HasStoreWebAccountForUser(Windows::System::User const& user)
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>().HasStoreWebAccountForUser(user);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> StoreConfiguration::GetStoreLogDataAsync(Windows::ApplicationModel::Store::Preview::StoreLogOptions const& options)
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>().GetStoreLogDataAsync(options);
}

inline void StoreConfiguration::SetStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId)
{
    get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>().SetStoreWebAccountIdForUser(user, webAccountId);
}

inline bool StoreConfiguration::IsStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId)
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>().IsStoreWebAccountIdForUser(user, webAccountId);
}

inline Windows::Foundation::IReference<uint32_t> StoreConfiguration::GetPurchasePromptingPolicyForUser(Windows::System::User const& user)
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>().GetPurchasePromptingPolicyForUser(user);
}

inline void StoreConfiguration::SetPurchasePromptingPolicyForUser(Windows::System::User const& user, optional<uint32_t> const& value)
{
    get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>().SetPurchasePromptingPolicyForUser(user, value);
}

inline hstring StoreConfiguration::GetStoreWebAccountId()
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>().GetStoreWebAccountId();
}

inline hstring StoreConfiguration::GetStoreWebAccountIdForUser(Windows::System::User const& user)
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>().GetStoreWebAccountIdForUser(user);
}

inline void StoreConfiguration::SetEnterpriseStoreWebAccountId(param::hstring const& webAccountId)
{
    get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>().SetEnterpriseStoreWebAccountId(webAccountId);
}

inline void StoreConfiguration::SetEnterpriseStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId)
{
    get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>().SetEnterpriseStoreWebAccountIdForUser(user, webAccountId);
}

inline hstring StoreConfiguration::GetEnterpriseStoreWebAccountId()
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>().GetEnterpriseStoreWebAccountId();
}

inline hstring StoreConfiguration::GetEnterpriseStoreWebAccountIdForUser(Windows::System::User const& user)
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>().GetEnterpriseStoreWebAccountIdForUser(user);
}

inline bool StoreConfiguration::ShouldRestrictToEnterpriseStoreOnly()
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>().ShouldRestrictToEnterpriseStoreOnly();
}

inline bool StoreConfiguration::ShouldRestrictToEnterpriseStoreOnlyForUser(Windows::System::User const& user)
{
    return get_activation_factory<StoreConfiguration, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>().ShouldRestrictToEnterpriseStoreOnlyForUser(user);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults> StorePreview::RequestProductPurchaseByProductIdAndSkuIdAsync(param::hstring const& productId, param::hstring const& skuId)
{
    return get_activation_factory<StorePreview, Windows::ApplicationModel::Store::Preview::IStorePreview>().RequestProductPurchaseByProductIdAndSkuIdAsync(productId, skuId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>> StorePreview::LoadAddOnProductInfosAsync()
{
    return get_activation_factory<StorePreview, Windows::ApplicationModel::Store::Preview::IStorePreview>().LoadAddOnProductInfosAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManagerHelper::RequestTokenWithUIElementHostingAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::UI::Xaml::UIElement const& uiElement)
{
    return get_activation_factory<WebAuthenticationCoreManagerHelper, Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper>().RequestTokenWithUIElementHostingAsync(request, uiElement);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManagerHelper::RequestTokenWithUIElementHostingAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::Xaml::UIElement const& uiElement)
{
    return get_activation_factory<WebAuthenticationCoreManagerHelper, Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper>().RequestTokenWithUIElementHostingAsync(request, webAccount, uiElement);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::IStorePreview> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::IStorePreview> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::StoreConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::StoreConfiguration> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::StorePreview> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::StorePreview> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Store::Preview::WebAuthenticationCoreManagerHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Store::Preview::WebAuthenticationCoreManagerHelper> {};

}

WINRT_WARNING_POP
