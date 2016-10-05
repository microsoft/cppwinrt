// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.ApplicationModel.3.h"
#include "internal/Windows.Services.Store.3.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Services::Store::IStoreAcquireLicenseResult> : produce_base<D, Windows::Services::Store::IStoreAcquireLicenseResult>
{
    HRESULT __stdcall get_StorePackageLicense(abi_arg_out<Windows::Services::Store::IStorePackageLicense> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StorePackageLicense());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStoreAppLicense> : produce_base<D, Windows::Services::Store::IStoreAppLicense>
{
    HRESULT __stdcall get_SkuStoreId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SkuStoreId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsActive(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTrial(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTrial());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationDate(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpirationDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedJsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AddOnLicenses(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreLicense>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AddOnLicenses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrialTimeRemaining(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrialTimeRemaining());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTrialOwnedByThisUser(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTrialOwnedByThisUser());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrialUniqueId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrialUniqueId());
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
struct produce<D, Windows::Services::Store::IStoreAvailability> : produce_base<D, Windows::Services::Store::IStoreAvailability>
{
    HRESULT __stdcall get_StoreId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StoreId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndDate(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Price(abi_arg_out<Windows::Services::Store::IStorePrice> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Price());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedJsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestPurchaseAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestPurchaseAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestPurchaseWithPurchasePropertiesAsync(abi_arg_in<Windows::Services::Store::IStorePurchaseProperties> storePurchaseProperties, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestPurchaseAsync(*reinterpret_cast<const Windows::Services::Store::StorePurchaseProperties *>(&storePurchaseProperties)));
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
struct produce<D, Windows::Services::Store::IStoreCollectionData> : produce_base<D, Windows::Services::Store::IStoreCollectionData>
{
    HRESULT __stdcall get_IsTrial(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTrial());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CampaignId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CampaignId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeveloperOfferId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeveloperOfferId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AcquiredDate(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AcquiredDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartDate(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndDate(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrialTimeRemaining(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrialTimeRemaining());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedJsonData());
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
struct produce<D, Windows::Services::Store::IStoreConsumableResult> : produce_base<D, Windows::Services::Store::IStoreConsumableResult>
{
    HRESULT __stdcall get_Status(Windows::Services::Store::StoreConsumableStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrackingId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrackingId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BalanceRemaining(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BalanceRemaining());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStoreContext> : produce_base<D, Windows::Services::Store::IStoreContext>
{
    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OfflineLicensesChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::Store::StoreContext, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().OfflineLicensesChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::Store::StoreContext, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OfflineLicensesChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().OfflineLicensesChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCustomerPurchaseIdAsync(abi_arg_in<hstring> serviceTicket, abi_arg_in<hstring> publisherUserId, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetCustomerPurchaseIdAsync(*reinterpret_cast<const hstring *>(&serviceTicket), *reinterpret_cast<const hstring *>(&publisherUserId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCustomerCollectionsIdAsync(abi_arg_in<hstring> serviceTicket, abi_arg_in<hstring> publisherUserId, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetCustomerCollectionsIdAsync(*reinterpret_cast<const hstring *>(&serviceTicket), *reinterpret_cast<const hstring *>(&publisherUserId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAppLicenseAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAppLicense>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetAppLicenseAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStoreProductForCurrentAppAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetStoreProductForCurrentAppAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStoreProductsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> productKinds, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> storeIds, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetStoreProductsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&productKinds), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&storeIds)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAssociatedStoreProductsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> productKinds, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetAssociatedStoreProductsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&productKinds)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAssociatedStoreProductsWithPagingAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> productKinds, uint32_t maxItemsToRetrievePerPage, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetAssociatedStoreProductsWithPagingAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&productKinds), maxItemsToRetrievePerPage));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUserCollectionAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> productKinds, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetUserCollectionAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&productKinds)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUserCollectionWithPagingAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> productKinds, uint32_t maxItemsToRetrievePerPage, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetUserCollectionWithPagingAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&productKinds), maxItemsToRetrievePerPage));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportConsumableFulfillmentAsync(abi_arg_in<hstring> productStoreId, uint32_t quantity, GUID trackingId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ReportConsumableFulfillmentAsync(*reinterpret_cast<const hstring *>(&productStoreId), quantity, trackingId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConsumableBalanceRemainingAsync(abi_arg_in<hstring> productStoreId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetConsumableBalanceRemainingAsync(*reinterpret_cast<const hstring *>(&productStoreId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcquireStoreLicenseForOptionalPackageAsync(abi_arg_in<Windows::ApplicationModel::IPackage> optionalPackage, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAcquireLicenseResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().AcquireStoreLicenseForOptionalPackageAsync(*reinterpret_cast<const Windows::ApplicationModel::Package *>(&optionalPackage)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestPurchaseAsync(abi_arg_in<hstring> storeId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestPurchaseAsync(*reinterpret_cast<const hstring *>(&storeId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestPurchaseWithPurchasePropertiesAsync(abi_arg_in<hstring> storeId, abi_arg_in<Windows::Services::Store::IStorePurchaseProperties> storePurchaseProperties, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestPurchaseAsync(*reinterpret_cast<const hstring *>(&storeId), *reinterpret_cast<const Windows::Services::Store::StorePurchaseProperties *>(&storePurchaseProperties)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAppAndOptionalStorePackageUpdatesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdate>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetAppAndOptionalStorePackageUpdatesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestDownloadStorePackageUpdatesAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Services::Store::StorePackageUpdate>> storePackageUpdates, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestDownloadStorePackageUpdatesAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Services::Store::StorePackageUpdate> *>(&storePackageUpdates)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestDownloadAndInstallStorePackageUpdatesAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Services::Store::StorePackageUpdate>> storePackageUpdates, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestDownloadAndInstallStorePackageUpdatesAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Services::Store::StorePackageUpdate> *>(&storePackageUpdates)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestDownloadAndInstallStorePackagesAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> storeIds, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestDownloadAndInstallStorePackagesAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&storeIds)));
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
struct produce<D, Windows::Services::Store::IStoreContextStatics> : produce_base<D, Windows::Services::Store::IStoreContextStatics>
{
    HRESULT __stdcall abi_GetDefault(abi_arg_out<Windows::Services::Store::IStoreContext> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_out<Windows::Services::Store::IStoreContext> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
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
struct produce<D, Windows::Services::Store::IStoreImage> : produce_base<D, Windows::Services::Store::IStoreImage>
{
    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImagePurposeTag(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ImagePurposeTag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Caption(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Caption());
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
struct produce<D, Windows::Services::Store::IStoreLicense> : produce_base<D, Windows::Services::Store::IStoreLicense>
{
    HRESULT __stdcall get_SkuStoreId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SkuStoreId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsActive(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationDate(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpirationDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedJsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InAppOfferToken(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InAppOfferToken());
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
struct produce<D, Windows::Services::Store::IStorePackageLicense> : produce_base<D, Windows::Services::Store::IStorePackageLicense>
{
    HRESULT __stdcall add_LicenseLost(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::Store::StorePackageLicense, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().LicenseLost(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::Store::StorePackageLicense, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LicenseLost(event_token token) noexcept override
    {
        try
        {
            this->shim().LicenseLost(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsValid(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsValid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReleaseLicense() noexcept override
    {
        try
        {
            this->shim().ReleaseLicense();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStorePackageUpdate> : produce_base<D, Windows::Services::Store::IStorePackageUpdate>
{
    HRESULT __stdcall get_Package(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mandatory(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mandatory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStorePackageUpdateResult> : produce_base<D, Windows::Services::Store::IStorePackageUpdateResult>
{
    HRESULT __stdcall get_OverallState(Windows::Services::Store::StorePackageUpdateState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OverallState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StorePackageUpdateStatuses(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdateStatus>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StorePackageUpdateStatuses());
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
struct produce<D, Windows::Services::Store::IStorePrice> : produce_base<D, Windows::Services::Store::IStorePrice>
{
    HRESULT __stdcall get_FormattedBasePrice(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FormattedBasePrice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FormattedPrice(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FormattedPrice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOnSale(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsOnSale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SaleEndDate(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SaleEndDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrencyCode(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrencyCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FormattedRecurrencePrice(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FormattedRecurrencePrice());
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
struct produce<D, Windows::Services::Store::IStoreProduct> : produce_base<D, Windows::Services::Store::IStoreProduct>
{
    HRESULT __stdcall get_StoreId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StoreId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProductKind(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProductKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasDigitalDownload(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasDigitalDownload());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Keywords(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Keywords());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Images(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Images());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Videos(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Videos());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Skus(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreSku>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Skus());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInUserCollection(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInUserCollection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Price(abi_arg_out<Windows::Services::Store::IStorePrice> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Price());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedJsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinkUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LinkUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsAnySkuInstalledAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetIsAnySkuInstalledAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestPurchaseAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestPurchaseAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestPurchaseWithPurchasePropertiesAsync(abi_arg_in<Windows::Services::Store::IStorePurchaseProperties> storePurchaseProperties, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestPurchaseAsync(*reinterpret_cast<const Windows::Services::Store::StorePurchaseProperties *>(&storePurchaseProperties)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InAppOfferToken(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InAppOfferToken());
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
struct produce<D, Windows::Services::Store::IStoreProductPagedQueryResult> : produce_base<D, Windows::Services::Store::IStoreProductPagedQueryResult>
{
    HRESULT __stdcall get_Products(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Products());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasMoreResults(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasMoreResults());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNextAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetNextAsync());
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
struct produce<D, Windows::Services::Store::IStoreProductQueryResult> : produce_base<D, Windows::Services::Store::IStoreProductQueryResult>
{
    HRESULT __stdcall get_Products(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Products());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStoreProductResult> : produce_base<D, Windows::Services::Store::IStoreProductResult>
{
    HRESULT __stdcall get_Product(abi_arg_out<Windows::Services::Store::IStoreProduct> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Product());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStorePurchaseProperties> : produce_base<D, Windows::Services::Store::IStorePurchaseProperties>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Name(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedJsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExtendedJsonData(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ExtendedJsonData(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStorePurchasePropertiesFactory> : produce_base<D, Windows::Services::Store::IStorePurchasePropertiesFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> name, abi_arg_out<Windows::Services::Store::IStorePurchaseProperties> storePurchaseProperties) noexcept override
    {
        try
        {
            *storePurchaseProperties = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *storePurchaseProperties = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStorePurchaseResult> : produce_base<D, Windows::Services::Store::IStorePurchaseResult>
{
    HRESULT __stdcall get_Status(Windows::Services::Store::StorePurchaseStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStoreRequestHelperStatics> : produce_base<D, Windows::Services::Store::IStoreRequestHelperStatics>
{
    HRESULT __stdcall abi_SendRequestAsync(abi_arg_in<Windows::Services::Store::IStoreContext> context, uint32_t requestKind, abi_arg_in<hstring> parametersAsJson, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreSendRequestResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SendRequestAsync(*reinterpret_cast<const Windows::Services::Store::StoreContext *>(&context), requestKind, *reinterpret_cast<const hstring *>(&parametersAsJson)));
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
struct produce<D, Windows::Services::Store::IStoreSendRequestResult> : produce_base<D, Windows::Services::Store::IStoreSendRequestResult>
{
    HRESULT __stdcall get_Response(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Response());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStoreSku> : produce_base<D, Windows::Services::Store::IStoreSku>
{
    HRESULT __stdcall get_StoreId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StoreId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTrial(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTrial());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomDeveloperData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CustomDeveloperData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Images(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Images());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Videos(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Videos());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Availabilities(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreAvailability>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Availabilities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Price(abi_arg_out<Windows::Services::Store::IStorePrice> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Price());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedJsonData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedJsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInUserCollection(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInUserCollection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BundledSkus(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BundledSkus());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CollectionData(abi_arg_out<Windows::Services::Store::IStoreCollectionData> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CollectionData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsInstalledAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetIsInstalledAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestPurchaseAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestPurchaseAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestPurchaseWithPurchasePropertiesAsync(abi_arg_in<Windows::Services::Store::IStorePurchaseProperties> storePurchaseProperties, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestPurchaseAsync(*reinterpret_cast<const Windows::Services::Store::StorePurchaseProperties *>(&storePurchaseProperties)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSubscription(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSubscription());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubscriptionInfo(abi_arg_out<Windows::Services::Store::IStoreSubscriptionInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SubscriptionInfo());
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
struct produce<D, Windows::Services::Store::IStoreSubscriptionInfo> : produce_base<D, Windows::Services::Store::IStoreSubscriptionInfo>
{
    HRESULT __stdcall get_BillingPeriod(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BillingPeriod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BillingPeriodUnit(Windows::Services::Store::StoreDurationUnit * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BillingPeriodUnit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasTrialPeriod(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasTrialPeriod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrialPeriod(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrialPeriod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrialPeriodUnit(Windows::Services::Store::StoreDurationUnit * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrialPeriodUnit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Store::IStoreVideo> : produce_base<D, Windows::Services::Store::IStoreVideo>
{
    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoPurposeTag(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoPurposeTag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Caption(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Caption());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviewImage(abi_arg_out<Windows::Services::Store::IStoreImage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreviewImage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Services::Store {

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct> impl_IStoreProductPagedQueryResult<D>::Products() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct> value;
    check_hresult(static_cast<const IStoreProductPagedQueryResult &>(static_cast<const D &>(*this))->get_Products(put(value)));
    return value;
}

template <typename D> bool impl_IStoreProductPagedQueryResult<D>::HasMoreResults() const
{
    bool value {};
    check_hresult(static_cast<const IStoreProductPagedQueryResult &>(static_cast<const D &>(*this))->get_HasMoreResults(&value));
    return value;
}

template <typename D> HRESULT impl_IStoreProductPagedQueryResult<D>::ExtendedError() const
{
    HRESULT value {};
    check_hresult(static_cast<const IStoreProductPagedQueryResult &>(static_cast<const D &>(*this))->get_ExtendedError(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> impl_IStoreProductPagedQueryResult<D>::GetNextAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> operation;
    check_hresult(static_cast<const IStoreProductPagedQueryResult &>(static_cast<const D &>(*this))->abi_GetNextAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct> impl_IStoreProductQueryResult<D>::Products() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct> value;
    check_hresult(static_cast<const IStoreProductQueryResult &>(static_cast<const D &>(*this))->get_Products(put(value)));
    return value;
}

template <typename D> HRESULT impl_IStoreProductQueryResult<D>::ExtendedError() const
{
    HRESULT value {};
    check_hresult(static_cast<const IStoreProductQueryResult &>(static_cast<const D &>(*this))->get_ExtendedError(&value));
    return value;
}

template <typename D> Windows::Services::Store::StoreProduct impl_IStoreProductResult<D>::Product() const
{
    Windows::Services::Store::StoreProduct value { nullptr };
    check_hresult(static_cast<const IStoreProductResult &>(static_cast<const D &>(*this))->get_Product(put(value)));
    return value;
}

template <typename D> HRESULT impl_IStoreProductResult<D>::ExtendedError() const
{
    HRESULT value {};
    check_hresult(static_cast<const IStoreProductResult &>(static_cast<const D &>(*this))->get_ExtendedError(&value));
    return value;
}

template <typename D> hstring impl_IStorePurchaseProperties<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IStorePurchaseProperties &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> void impl_IStorePurchaseProperties<D>::Name(hstring_ref value) const
{
    check_hresult(static_cast<const IStorePurchaseProperties &>(static_cast<const D &>(*this))->put_Name(get(value)));
}

template <typename D> hstring impl_IStorePurchaseProperties<D>::ExtendedJsonData() const
{
    hstring value;
    check_hresult(static_cast<const IStorePurchaseProperties &>(static_cast<const D &>(*this))->get_ExtendedJsonData(put(value)));
    return value;
}

template <typename D> void impl_IStorePurchaseProperties<D>::ExtendedJsonData(hstring_ref value) const
{
    check_hresult(static_cast<const IStorePurchaseProperties &>(static_cast<const D &>(*this))->put_ExtendedJsonData(get(value)));
}

template <typename D> Windows::Services::Store::StorePurchaseProperties impl_IStorePurchasePropertiesFactory<D>::Create(hstring_ref name) const
{
    Windows::Services::Store::StorePurchaseProperties storePurchaseProperties { nullptr };
    check_hresult(static_cast<const IStorePurchasePropertiesFactory &>(static_cast<const D &>(*this))->abi_Create(get(name), put(storePurchaseProperties)));
    return storePurchaseProperties;
}

template <typename D> bool impl_IStoreCollectionData<D>::IsTrial() const
{
    bool value {};
    check_hresult(static_cast<const IStoreCollectionData &>(static_cast<const D &>(*this))->get_IsTrial(&value));
    return value;
}

template <typename D> hstring impl_IStoreCollectionData<D>::CampaignId() const
{
    hstring value;
    check_hresult(static_cast<const IStoreCollectionData &>(static_cast<const D &>(*this))->get_CampaignId(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreCollectionData<D>::DeveloperOfferId() const
{
    hstring value;
    check_hresult(static_cast<const IStoreCollectionData &>(static_cast<const D &>(*this))->get_DeveloperOfferId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IStoreCollectionData<D>::AcquiredDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IStoreCollectionData &>(static_cast<const D &>(*this))->get_AcquiredDate(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IStoreCollectionData<D>::StartDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IStoreCollectionData &>(static_cast<const D &>(*this))->get_StartDate(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IStoreCollectionData<D>::EndDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IStoreCollectionData &>(static_cast<const D &>(*this))->get_EndDate(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IStoreCollectionData<D>::TrialTimeRemaining() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IStoreCollectionData &>(static_cast<const D &>(*this))->get_TrialTimeRemaining(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreCollectionData<D>::ExtendedJsonData() const
{
    hstring value;
    check_hresult(static_cast<const IStoreCollectionData &>(static_cast<const D &>(*this))->get_ExtendedJsonData(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreLicense<D>::SkuStoreId() const
{
    hstring value;
    check_hresult(static_cast<const IStoreLicense &>(static_cast<const D &>(*this))->get_SkuStoreId(put(value)));
    return value;
}

template <typename D> bool impl_IStoreLicense<D>::IsActive() const
{
    bool value {};
    check_hresult(static_cast<const IStoreLicense &>(static_cast<const D &>(*this))->get_IsActive(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IStoreLicense<D>::ExpirationDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IStoreLicense &>(static_cast<const D &>(*this))->get_ExpirationDate(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreLicense<D>::ExtendedJsonData() const
{
    hstring value;
    check_hresult(static_cast<const IStoreLicense &>(static_cast<const D &>(*this))->get_ExtendedJsonData(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreLicense<D>::InAppOfferToken() const
{
    hstring value;
    check_hresult(static_cast<const IStoreLicense &>(static_cast<const D &>(*this))->get_InAppOfferToken(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreAppLicense<D>::SkuStoreId() const
{
    hstring value;
    check_hresult(static_cast<const IStoreAppLicense &>(static_cast<const D &>(*this))->get_SkuStoreId(put(value)));
    return value;
}

template <typename D> bool impl_IStoreAppLicense<D>::IsActive() const
{
    bool value {};
    check_hresult(static_cast<const IStoreAppLicense &>(static_cast<const D &>(*this))->get_IsActive(&value));
    return value;
}

template <typename D> bool impl_IStoreAppLicense<D>::IsTrial() const
{
    bool value {};
    check_hresult(static_cast<const IStoreAppLicense &>(static_cast<const D &>(*this))->get_IsTrial(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IStoreAppLicense<D>::ExpirationDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IStoreAppLicense &>(static_cast<const D &>(*this))->get_ExpirationDate(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreAppLicense<D>::ExtendedJsonData() const
{
    hstring value;
    check_hresult(static_cast<const IStoreAppLicense &>(static_cast<const D &>(*this))->get_ExtendedJsonData(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreLicense> impl_IStoreAppLicense<D>::AddOnLicenses() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreLicense> value;
    check_hresult(static_cast<const IStoreAppLicense &>(static_cast<const D &>(*this))->get_AddOnLicenses(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IStoreAppLicense<D>::TrialTimeRemaining() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IStoreAppLicense &>(static_cast<const D &>(*this))->get_TrialTimeRemaining(put(value)));
    return value;
}

template <typename D> bool impl_IStoreAppLicense<D>::IsTrialOwnedByThisUser() const
{
    bool value {};
    check_hresult(static_cast<const IStoreAppLicense &>(static_cast<const D &>(*this))->get_IsTrialOwnedByThisUser(&value));
    return value;
}

template <typename D> hstring impl_IStoreAppLicense<D>::TrialUniqueId() const
{
    hstring value;
    check_hresult(static_cast<const IStoreAppLicense &>(static_cast<const D &>(*this))->get_TrialUniqueId(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreSendRequestResult<D>::Response() const
{
    hstring value;
    check_hresult(static_cast<const IStoreSendRequestResult &>(static_cast<const D &>(*this))->get_Response(put(value)));
    return value;
}

template <typename D> HRESULT impl_IStoreSendRequestResult<D>::ExtendedError() const
{
    HRESULT value {};
    check_hresult(static_cast<const IStoreSendRequestResult &>(static_cast<const D &>(*this))->get_ExtendedError(&value));
    return value;
}

template <typename D> hstring impl_IStoreProduct<D>::StoreId() const
{
    hstring value;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_StoreId(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreProduct<D>::Language() const
{
    hstring value;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_Language(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreProduct<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreProduct<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreProduct<D>::ProductKind() const
{
    hstring value;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_ProductKind(put(value)));
    return value;
}

template <typename D> bool impl_IStoreProduct<D>::HasDigitalDownload() const
{
    bool value {};
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_HasDigitalDownload(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IStoreProduct<D>::Keywords() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_Keywords(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage> impl_IStoreProduct<D>::Images() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage> value;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_Images(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo> impl_IStoreProduct<D>::Videos() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo> value;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_Videos(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreSku> impl_IStoreProduct<D>::Skus() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreSku> value;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_Skus(put(value)));
    return value;
}

template <typename D> bool impl_IStoreProduct<D>::IsInUserCollection() const
{
    bool value {};
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_IsInUserCollection(&value));
    return value;
}

template <typename D> Windows::Services::Store::StorePrice impl_IStoreProduct<D>::Price() const
{
    Windows::Services::Store::StorePrice value { nullptr };
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_Price(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreProduct<D>::ExtendedJsonData() const
{
    hstring value;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_ExtendedJsonData(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IStoreProduct<D>::LinkUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_LinkUri(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IStoreProduct<D>::GetIsAnySkuInstalledAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->abi_GetIsAnySkuInstalledAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> impl_IStoreProduct<D>::RequestPurchaseAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->abi_RequestPurchaseAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> impl_IStoreProduct<D>::RequestPurchaseAsync(const Windows::Services::Store::StorePurchaseProperties & storePurchaseProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->abi_RequestPurchaseWithPurchasePropertiesAsync(get(storePurchaseProperties), put(operation)));
    return operation;
}

template <typename D> hstring impl_IStoreProduct<D>::InAppOfferToken() const
{
    hstring value;
    check_hresult(static_cast<const IStoreProduct &>(static_cast<const D &>(*this))->get_InAppOfferToken(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IStoreImage<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IStoreImage &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreImage<D>::ImagePurposeTag() const
{
    hstring value;
    check_hresult(static_cast<const IStoreImage &>(static_cast<const D &>(*this))->get_ImagePurposeTag(put(value)));
    return value;
}

template <typename D> uint32_t impl_IStoreImage<D>::Width() const
{
    uint32_t value {};
    check_hresult(static_cast<const IStoreImage &>(static_cast<const D &>(*this))->get_Width(&value));
    return value;
}

template <typename D> uint32_t impl_IStoreImage<D>::Height() const
{
    uint32_t value {};
    check_hresult(static_cast<const IStoreImage &>(static_cast<const D &>(*this))->get_Height(&value));
    return value;
}

template <typename D> hstring impl_IStoreImage<D>::Caption() const
{
    hstring value;
    check_hresult(static_cast<const IStoreImage &>(static_cast<const D &>(*this))->get_Caption(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IStoreVideo<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IStoreVideo &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreVideo<D>::VideoPurposeTag() const
{
    hstring value;
    check_hresult(static_cast<const IStoreVideo &>(static_cast<const D &>(*this))->get_VideoPurposeTag(put(value)));
    return value;
}

template <typename D> uint32_t impl_IStoreVideo<D>::Width() const
{
    uint32_t value {};
    check_hresult(static_cast<const IStoreVideo &>(static_cast<const D &>(*this))->get_Width(&value));
    return value;
}

template <typename D> uint32_t impl_IStoreVideo<D>::Height() const
{
    uint32_t value {};
    check_hresult(static_cast<const IStoreVideo &>(static_cast<const D &>(*this))->get_Height(&value));
    return value;
}

template <typename D> hstring impl_IStoreVideo<D>::Caption() const
{
    hstring value;
    check_hresult(static_cast<const IStoreVideo &>(static_cast<const D &>(*this))->get_Caption(put(value)));
    return value;
}

template <typename D> Windows::Services::Store::StoreImage impl_IStoreVideo<D>::PreviewImage() const
{
    Windows::Services::Store::StoreImage value { nullptr };
    check_hresult(static_cast<const IStoreVideo &>(static_cast<const D &>(*this))->get_PreviewImage(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreSku<D>::StoreId() const
{
    hstring value;
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_StoreId(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreSku<D>::Language() const
{
    hstring value;
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_Language(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreSku<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreSku<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> bool impl_IStoreSku<D>::IsTrial() const
{
    bool value {};
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_IsTrial(&value));
    return value;
}

template <typename D> hstring impl_IStoreSku<D>::CustomDeveloperData() const
{
    hstring value;
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_CustomDeveloperData(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage> impl_IStoreSku<D>::Images() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage> value;
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_Images(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo> impl_IStoreSku<D>::Videos() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo> value;
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_Videos(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreAvailability> impl_IStoreSku<D>::Availabilities() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreAvailability> value;
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_Availabilities(put(value)));
    return value;
}

template <typename D> Windows::Services::Store::StorePrice impl_IStoreSku<D>::Price() const
{
    Windows::Services::Store::StorePrice value { nullptr };
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_Price(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreSku<D>::ExtendedJsonData() const
{
    hstring value;
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_ExtendedJsonData(put(value)));
    return value;
}

template <typename D> bool impl_IStoreSku<D>::IsInUserCollection() const
{
    bool value {};
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_IsInUserCollection(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IStoreSku<D>::BundledSkus() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_BundledSkus(put(value)));
    return value;
}

template <typename D> Windows::Services::Store::StoreCollectionData impl_IStoreSku<D>::CollectionData() const
{
    Windows::Services::Store::StoreCollectionData value { nullptr };
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_CollectionData(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IStoreSku<D>::GetIsInstalledAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->abi_GetIsInstalledAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> impl_IStoreSku<D>::RequestPurchaseAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation;
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->abi_RequestPurchaseAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> impl_IStoreSku<D>::RequestPurchaseAsync(const Windows::Services::Store::StorePurchaseProperties & storePurchaseProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation;
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->abi_RequestPurchaseWithPurchasePropertiesAsync(get(storePurchaseProperties), put(operation)));
    return operation;
}

template <typename D> bool impl_IStoreSku<D>::IsSubscription() const
{
    bool value {};
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_IsSubscription(&value));
    return value;
}

template <typename D> Windows::Services::Store::StoreSubscriptionInfo impl_IStoreSku<D>::SubscriptionInfo() const
{
    Windows::Services::Store::StoreSubscriptionInfo value { nullptr };
    check_hresult(static_cast<const IStoreSku &>(static_cast<const D &>(*this))->get_SubscriptionInfo(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreAvailability<D>::StoreId() const
{
    hstring value;
    check_hresult(static_cast<const IStoreAvailability &>(static_cast<const D &>(*this))->get_StoreId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IStoreAvailability<D>::EndDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IStoreAvailability &>(static_cast<const D &>(*this))->get_EndDate(put(value)));
    return value;
}

template <typename D> Windows::Services::Store::StorePrice impl_IStoreAvailability<D>::Price() const
{
    Windows::Services::Store::StorePrice value { nullptr };
    check_hresult(static_cast<const IStoreAvailability &>(static_cast<const D &>(*this))->get_Price(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreAvailability<D>::ExtendedJsonData() const
{
    hstring value;
    check_hresult(static_cast<const IStoreAvailability &>(static_cast<const D &>(*this))->get_ExtendedJsonData(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> impl_IStoreAvailability<D>::RequestPurchaseAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation;
    check_hresult(static_cast<const IStoreAvailability &>(static_cast<const D &>(*this))->abi_RequestPurchaseAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> impl_IStoreAvailability<D>::RequestPurchaseAsync(const Windows::Services::Store::StorePurchaseProperties & storePurchaseProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation;
    check_hresult(static_cast<const IStoreAvailability &>(static_cast<const D &>(*this))->abi_RequestPurchaseWithPurchasePropertiesAsync(get(storePurchaseProperties), put(operation)));
    return operation;
}

template <typename D> hstring impl_IStorePrice<D>::FormattedBasePrice() const
{
    hstring value;
    check_hresult(static_cast<const IStorePrice &>(static_cast<const D &>(*this))->get_FormattedBasePrice(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePrice<D>::FormattedPrice() const
{
    hstring value;
    check_hresult(static_cast<const IStorePrice &>(static_cast<const D &>(*this))->get_FormattedPrice(put(value)));
    return value;
}

template <typename D> bool impl_IStorePrice<D>::IsOnSale() const
{
    bool value {};
    check_hresult(static_cast<const IStorePrice &>(static_cast<const D &>(*this))->get_IsOnSale(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IStorePrice<D>::SaleEndDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IStorePrice &>(static_cast<const D &>(*this))->get_SaleEndDate(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePrice<D>::CurrencyCode() const
{
    hstring value;
    check_hresult(static_cast<const IStorePrice &>(static_cast<const D &>(*this))->get_CurrencyCode(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePrice<D>::FormattedRecurrencePrice() const
{
    hstring value;
    check_hresult(static_cast<const IStorePrice &>(static_cast<const D &>(*this))->get_FormattedRecurrencePrice(put(value)));
    return value;
}

template <typename D> uint32_t impl_IStoreSubscriptionInfo<D>::BillingPeriod() const
{
    uint32_t value {};
    check_hresult(static_cast<const IStoreSubscriptionInfo &>(static_cast<const D &>(*this))->get_BillingPeriod(&value));
    return value;
}

template <typename D> Windows::Services::Store::StoreDurationUnit impl_IStoreSubscriptionInfo<D>::BillingPeriodUnit() const
{
    Windows::Services::Store::StoreDurationUnit value {};
    check_hresult(static_cast<const IStoreSubscriptionInfo &>(static_cast<const D &>(*this))->get_BillingPeriodUnit(&value));
    return value;
}

template <typename D> bool impl_IStoreSubscriptionInfo<D>::HasTrialPeriod() const
{
    bool value {};
    check_hresult(static_cast<const IStoreSubscriptionInfo &>(static_cast<const D &>(*this))->get_HasTrialPeriod(&value));
    return value;
}

template <typename D> uint32_t impl_IStoreSubscriptionInfo<D>::TrialPeriod() const
{
    uint32_t value {};
    check_hresult(static_cast<const IStoreSubscriptionInfo &>(static_cast<const D &>(*this))->get_TrialPeriod(&value));
    return value;
}

template <typename D> Windows::Services::Store::StoreDurationUnit impl_IStoreSubscriptionInfo<D>::TrialPeriodUnit() const
{
    Windows::Services::Store::StoreDurationUnit value {};
    check_hresult(static_cast<const IStoreSubscriptionInfo &>(static_cast<const D &>(*this))->get_TrialPeriodUnit(&value));
    return value;
}

template <typename D> Windows::Services::Store::StoreConsumableStatus impl_IStoreConsumableResult<D>::Status() const
{
    Windows::Services::Store::StoreConsumableStatus value {};
    check_hresult(static_cast<const IStoreConsumableResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> GUID impl_IStoreConsumableResult<D>::TrackingId() const
{
    GUID value {};
    check_hresult(static_cast<const IStoreConsumableResult &>(static_cast<const D &>(*this))->get_TrackingId(&value));
    return value;
}

template <typename D> uint32_t impl_IStoreConsumableResult<D>::BalanceRemaining() const
{
    uint32_t value {};
    check_hresult(static_cast<const IStoreConsumableResult &>(static_cast<const D &>(*this))->get_BalanceRemaining(&value));
    return value;
}

template <typename D> HRESULT impl_IStoreConsumableResult<D>::ExtendedError() const
{
    HRESULT value {};
    check_hresult(static_cast<const IStoreConsumableResult &>(static_cast<const D &>(*this))->get_ExtendedError(&value));
    return value;
}

template <typename D> Windows::Services::Store::StorePurchaseStatus impl_IStorePurchaseResult<D>::Status() const
{
    Windows::Services::Store::StorePurchaseStatus value {};
    check_hresult(static_cast<const IStorePurchaseResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> HRESULT impl_IStorePurchaseResult<D>::ExtendedError() const
{
    HRESULT value {};
    check_hresult(static_cast<const IStorePurchaseResult &>(static_cast<const D &>(*this))->get_ExtendedError(&value));
    return value;
}

template <typename D> Windows::Services::Store::StoreContext impl_IStoreContextStatics<D>::GetDefault() const
{
    Windows::Services::Store::StoreContext value { nullptr };
    check_hresult(static_cast<const IStoreContextStatics &>(static_cast<const D &>(*this))->abi_GetDefault(put(value)));
    return value;
}

template <typename D> Windows::Services::Store::StoreContext impl_IStoreContextStatics<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::Services::Store::StoreContext value { nullptr };
    check_hresult(static_cast<const IStoreContextStatics &>(static_cast<const D &>(*this))->abi_GetForUser(get(user), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreSendRequestResult> impl_IStoreRequestHelperStatics<D>::SendRequestAsync(const Windows::Services::Store::StoreContext & context, uint32_t requestKind, hstring_ref parametersAsJson) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreSendRequestResult> operation;
    check_hresult(static_cast<const IStoreRequestHelperStatics &>(static_cast<const D &>(*this))->abi_SendRequestAsync(get(context), requestKind, get(parametersAsJson), put(operation)));
    return operation;
}

template <typename D> Windows::System::User impl_IStoreContext<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> event_token impl_IStoreContext<D>::OfflineLicensesChanged(const Windows::Foundation::TypedEventHandler<Windows::Services::Store::StoreContext, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->add_OfflineLicensesChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IStoreContext> impl_IStoreContext<D>::OfflineLicensesChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Store::StoreContext, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IStoreContext>(this, &ABI::Windows::Services::Store::IStoreContext::remove_OfflineLicensesChanged, OfflineLicensesChanged(handler));
}

template <typename D> void impl_IStoreContext<D>::OfflineLicensesChanged(event_token token) const
{
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->remove_OfflineLicensesChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IStoreContext<D>::GetCustomerPurchaseIdAsync(hstring_ref serviceTicket, hstring_ref publisherUserId) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_GetCustomerPurchaseIdAsync(get(serviceTicket), get(publisherUserId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IStoreContext<D>::GetCustomerCollectionsIdAsync(hstring_ref serviceTicket, hstring_ref publisherUserId) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_GetCustomerCollectionsIdAsync(get(serviceTicket), get(publisherUserId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAppLicense> impl_IStoreContext<D>::GetAppLicenseAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAppLicense> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_GetAppLicenseAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductResult> impl_IStoreContext<D>::GetStoreProductForCurrentAppAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductResult> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_GetStoreProductForCurrentAppAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> impl_IStoreContext<D>::GetStoreProductsAsync(const Windows::Foundation::Collections::IIterable<hstring> & productKinds, const Windows::Foundation::Collections::IIterable<hstring> & storeIds) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_GetStoreProductsAsync(get(productKinds), get(storeIds), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> impl_IStoreContext<D>::GetAssociatedStoreProductsAsync(const Windows::Foundation::Collections::IIterable<hstring> & productKinds) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_GetAssociatedStoreProductsAsync(get(productKinds), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> impl_IStoreContext<D>::GetAssociatedStoreProductsWithPagingAsync(const Windows::Foundation::Collections::IIterable<hstring> & productKinds, uint32_t maxItemsToRetrievePerPage) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_GetAssociatedStoreProductsWithPagingAsync(get(productKinds), maxItemsToRetrievePerPage, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> impl_IStoreContext<D>::GetUserCollectionAsync(const Windows::Foundation::Collections::IIterable<hstring> & productKinds) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_GetUserCollectionAsync(get(productKinds), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> impl_IStoreContext<D>::GetUserCollectionWithPagingAsync(const Windows::Foundation::Collections::IIterable<hstring> & productKinds, uint32_t maxItemsToRetrievePerPage) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_GetUserCollectionWithPagingAsync(get(productKinds), maxItemsToRetrievePerPage, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult> impl_IStoreContext<D>::ReportConsumableFulfillmentAsync(hstring_ref productStoreId, uint32_t quantity, GUID trackingId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_ReportConsumableFulfillmentAsync(get(productStoreId), quantity, trackingId, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult> impl_IStoreContext<D>::GetConsumableBalanceRemainingAsync(hstring_ref productStoreId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_GetConsumableBalanceRemainingAsync(get(productStoreId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAcquireLicenseResult> impl_IStoreContext<D>::AcquireStoreLicenseForOptionalPackageAsync(const Windows::ApplicationModel::Package & optionalPackage) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAcquireLicenseResult> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_AcquireStoreLicenseForOptionalPackageAsync(get(optionalPackage), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> impl_IStoreContext<D>::RequestPurchaseAsync(hstring_ref storeId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_RequestPurchaseAsync(get(storeId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> impl_IStoreContext<D>::RequestPurchaseAsync(hstring_ref storeId, const Windows::Services::Store::StorePurchaseProperties & storePurchaseProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_RequestPurchaseWithPurchasePropertiesAsync(get(storeId), get(storePurchaseProperties), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdate>> impl_IStoreContext<D>::GetAppAndOptionalStorePackageUpdatesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdate>> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_GetAppAndOptionalStorePackageUpdatesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> impl_IStoreContext<D>::RequestDownloadStorePackageUpdatesAsync(const Windows::Foundation::Collections::IIterable<Windows::Services::Store::StorePackageUpdate> & storePackageUpdates) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_RequestDownloadStorePackageUpdatesAsync(get(storePackageUpdates), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> impl_IStoreContext<D>::RequestDownloadAndInstallStorePackageUpdatesAsync(const Windows::Foundation::Collections::IIterable<Windows::Services::Store::StorePackageUpdate> & storePackageUpdates) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_RequestDownloadAndInstallStorePackageUpdatesAsync(get(storePackageUpdates), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> impl_IStoreContext<D>::RequestDownloadAndInstallStorePackagesAsync(const Windows::Foundation::Collections::IIterable<hstring> & storeIds) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> operation;
    check_hresult(static_cast<const IStoreContext &>(static_cast<const D &>(*this))->abi_RequestDownloadAndInstallStorePackagesAsync(get(storeIds), put(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Package impl_IStorePackageUpdate<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(static_cast<const IStorePackageUpdate &>(static_cast<const D &>(*this))->get_Package(put(value)));
    return value;
}

template <typename D> bool impl_IStorePackageUpdate<D>::Mandatory() const
{
    bool value {};
    check_hresult(static_cast<const IStorePackageUpdate &>(static_cast<const D &>(*this))->get_Mandatory(&value));
    return value;
}

template <typename D> Windows::Services::Store::StorePackageUpdateState impl_IStorePackageUpdateResult<D>::OverallState() const
{
    Windows::Services::Store::StorePackageUpdateState value {};
    check_hresult(static_cast<const IStorePackageUpdateResult &>(static_cast<const D &>(*this))->get_OverallState(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdateStatus> impl_IStorePackageUpdateResult<D>::StorePackageUpdateStatuses() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdateStatus> value;
    check_hresult(static_cast<const IStorePackageUpdateResult &>(static_cast<const D &>(*this))->get_StorePackageUpdateStatuses(put(value)));
    return value;
}

template <typename D> Windows::Services::Store::StorePackageLicense impl_IStoreAcquireLicenseResult<D>::StorePackageLicense() const
{
    Windows::Services::Store::StorePackageLicense value { nullptr };
    check_hresult(static_cast<const IStoreAcquireLicenseResult &>(static_cast<const D &>(*this))->get_StorePackageLicense(put(value)));
    return value;
}

template <typename D> HRESULT impl_IStoreAcquireLicenseResult<D>::ExtendedError() const
{
    HRESULT value {};
    check_hresult(static_cast<const IStoreAcquireLicenseResult &>(static_cast<const D &>(*this))->get_ExtendedError(&value));
    return value;
}

template <typename D> event_token impl_IStorePackageLicense<D>::LicenseLost(const Windows::Foundation::TypedEventHandler<Windows::Services::Store::StorePackageLicense, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IStorePackageLicense &>(static_cast<const D &>(*this))->add_LicenseLost(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IStorePackageLicense> impl_IStorePackageLicense<D>::LicenseLost(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Store::StorePackageLicense, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IStorePackageLicense>(this, &ABI::Windows::Services::Store::IStorePackageLicense::remove_LicenseLost, LicenseLost(handler));
}

template <typename D> void impl_IStorePackageLicense<D>::LicenseLost(event_token token) const
{
    check_hresult(static_cast<const IStorePackageLicense &>(static_cast<const D &>(*this))->remove_LicenseLost(token));
}

template <typename D> Windows::ApplicationModel::Package impl_IStorePackageLicense<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(static_cast<const IStorePackageLicense &>(static_cast<const D &>(*this))->get_Package(put(value)));
    return value;
}

template <typename D> bool impl_IStorePackageLicense<D>::IsValid() const
{
    bool value {};
    check_hresult(static_cast<const IStorePackageLicense &>(static_cast<const D &>(*this))->get_IsValid(&value));
    return value;
}

template <typename D> void impl_IStorePackageLicense<D>::ReleaseLicense() const
{
    check_hresult(static_cast<const IStorePackageLicense &>(static_cast<const D &>(*this))->abi_ReleaseLicense());
}

inline Windows::Services::Store::StoreContext StoreContext::GetDefault()
{
    return get_activation_factory<StoreContext, IStoreContextStatics>().GetDefault();
}

inline Windows::Services::Store::StoreContext StoreContext::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<StoreContext, IStoreContextStatics>().GetForUser(user);
}

inline StorePurchaseProperties::StorePurchaseProperties() :
    StorePurchaseProperties(activate_instance<StorePurchaseProperties>())
{}

inline StorePurchaseProperties::StorePurchaseProperties(hstring_ref name) :
    StorePurchaseProperties(get_activation_factory<StorePurchaseProperties, IStorePurchasePropertiesFactory>().Create(name))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreSendRequestResult> StoreRequestHelper::SendRequestAsync(const Windows::Services::Store::StoreContext & context, uint32_t requestKind, hstring_ref parametersAsJson)
{
    return get_activation_factory<StoreRequestHelper, IStoreRequestHelperStatics>().SendRequestAsync(context, requestKind, parametersAsJson);
}

}

}
