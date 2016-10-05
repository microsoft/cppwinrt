// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Popups.3.h"
#include "internal/Windows.Storage.Search.3.h"
#include "internal/Windows.UI.ViewManagement.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.System.RemoteSystems.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.System.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::System::IAppMemoryReport> : produce_base<D, Windows::System::IAppMemoryReport>
{
    HRESULT __stdcall get_PrivateCommitUsage(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PrivateCommitUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeakPrivateCommitUsage(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PeakPrivateCommitUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalCommitUsage(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TotalCommitUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalCommitLimit(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TotalCommitLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IAppMemoryUsageLimitChangingEventArgs> : produce_base<D, Windows::System::IAppMemoryUsageLimitChangingEventArgs>
{
    HRESULT __stdcall get_OldLimit(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewLimit(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IFolderLauncherOptions> : produce_base<D, Windows::System::IFolderLauncherOptions>
{
    HRESULT __stdcall get_ItemsToSelect(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Storage::IStorageItem>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemsToSelect());
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
struct produce<D, Windows::System::IKnownUserPropertiesStatics> : produce_base<D, Windows::System::IKnownUserPropertiesStatics>
{
    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProviderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccountName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccountName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GuestHost(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GuestHost());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrincipalName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PrincipalName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DomainName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionInitiationProtocolUri(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionInitiationProtocolUri());
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
struct produce<D, Windows::System::ILaunchUriResult> : produce_base<D, Windows::System::ILaunchUriResult>
{
    HRESULT __stdcall get_Status(Windows::System::LaunchUriStatus * value) noexcept override
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

    HRESULT __stdcall get_Result(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Result());
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
struct produce<D, Windows::System::ILauncherOptions> : produce_base<D, Windows::System::ILauncherOptions>
{
    HRESULT __stdcall get_TreatAsUntrusted(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TreatAsUntrusted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TreatAsUntrusted(bool value) noexcept override
    {
        try
        {
            this->shim().TreatAsUntrusted(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayApplicationPicker(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayApplicationPicker());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayApplicationPicker(bool value) noexcept override
    {
        try
        {
            this->shim().DisplayApplicationPicker(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UI(abi_arg_out<Windows::System::ILauncherUIOptions> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UI());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredApplicationPackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreferredApplicationPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredApplicationPackageFamilyName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().PreferredApplicationPackageFamilyName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredApplicationDisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreferredApplicationDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredApplicationDisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().PreferredApplicationDisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FallbackUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FallbackUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FallbackUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().FallbackUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentType(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ContentType(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::ILauncherOptions2> : produce_base<D, Windows::System::ILauncherOptions2>
{
    HRESULT __stdcall get_TargetApplicationPackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetApplicationPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetApplicationPackageFamilyName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetApplicationPackageFamilyName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NeighboringFilesQuery(abi_arg_out<Windows::Storage::Search::IStorageFileQueryResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NeighboringFilesQuery());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NeighboringFilesQuery(abi_arg_in<Windows::Storage::Search::IStorageFileQueryResult> value) noexcept override
    {
        try
        {
            this->shim().NeighboringFilesQuery(*reinterpret_cast<const Windows::Storage::Search::StorageFileQueryResult *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::ILauncherOptions3> : produce_base<D, Windows::System::ILauncherOptions3>
{
    HRESULT __stdcall get_IgnoreAppUriHandlers(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IgnoreAppUriHandlers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IgnoreAppUriHandlers(bool value) noexcept override
    {
        try
        {
            this->shim().IgnoreAppUriHandlers(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::ILauncherStatics> : produce_base<D, Windows::System::ILauncherStatics>
{
    HRESULT __stdcall abi_LaunchFileAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchFileAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchFileWithOptionsAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<Windows::System::ILauncherOptions> options, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchFileAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const Windows::System::LauncherOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchUriAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchUriAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchUriWithOptionsAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::System::ILauncherOptions> options, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchUriAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::System::LauncherOptions *>(&options)));
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
struct produce<D, Windows::System::ILauncherStatics2> : produce_base<D, Windows::System::ILauncherStatics2>
{
    HRESULT __stdcall abi_LaunchUriForResultsAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::System::ILauncherOptions> options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchUriForResultsAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::System::LauncherOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchUriForResultsWithDataAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::System::ILauncherOptions> options, abi_arg_in<Windows::Foundation::Collections::IPropertySet> inputData, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchUriForResultsAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::System::LauncherOptions *>(&options), *reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&inputData)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchUriWithDataAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::System::ILauncherOptions> options, abi_arg_in<Windows::Foundation::Collections::IPropertySet> inputData, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchUriAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::System::LauncherOptions *>(&options), *reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&inputData)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_QueryUriSupportAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, Windows::System::LaunchQuerySupportType launchQuerySupportType, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().QueryUriSupportAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), launchQuerySupportType));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_QueryUriSupportWithPackageFamilyNameAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, Windows::System::LaunchQuerySupportType launchQuerySupportType, abi_arg_in<hstring> packageFamilyName, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().QueryUriSupportAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), launchQuerySupportType, *reinterpret_cast<const hstring *>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_QueryFileSupportAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().QueryFileSupportAsync(*reinterpret_cast<const Windows::Storage::StorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_QueryFileSupportWithPackageFamilyNameAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<hstring> packageFamilyName, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().QueryFileSupportAsync(*reinterpret_cast<const Windows::Storage::StorageFile *>(&file), *reinterpret_cast<const hstring *>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindUriSchemeHandlersAsync(abi_arg_in<hstring> scheme, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindUriSchemeHandlersAsync(*reinterpret_cast<const hstring *>(&scheme)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindUriSchemeHandlersWithLaunchUriTypeAsync(abi_arg_in<hstring> scheme, Windows::System::LaunchQuerySupportType launchQuerySupportType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindUriSchemeHandlersAsync(*reinterpret_cast<const hstring *>(&scheme), launchQuerySupportType));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindFileHandlersAsync(abi_arg_in<hstring> extension, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindFileHandlersAsync(*reinterpret_cast<const hstring *>(&extension)));
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
struct produce<D, Windows::System::ILauncherStatics3> : produce_base<D, Windows::System::ILauncherStatics3>
{
    HRESULT __stdcall abi_LaunchFolderAsync(abi_arg_in<Windows::Storage::IStorageFolder> folder, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchFolderAsync(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&folder)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchFolderWithOptionsAsync(abi_arg_in<Windows::Storage::IStorageFolder> folder, abi_arg_in<Windows::System::IFolderLauncherOptions> options, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchFolderAsync(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&folder), *reinterpret_cast<const Windows::System::FolderLauncherOptions *>(&options)));
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
struct produce<D, Windows::System::ILauncherStatics4> : produce_base<D, Windows::System::ILauncherStatics4>
{
    HRESULT __stdcall abi_QueryAppUriSupportAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().QueryAppUriSupportAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_QueryAppUriSupportWithPackageFamilyNameAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<hstring> packageFamilyName, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().QueryAppUriSupportAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const hstring *>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAppUriHandlersAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindAppUriHandlersAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchUriForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchUriForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchUriWithOptionsForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::System::ILauncherOptions> options, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchUriForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::System::LauncherOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchUriWithDataForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::System::ILauncherOptions> options, abi_arg_in<Windows::Foundation::Collections::IPropertySet> inputData, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchUriForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::System::LauncherOptions *>(&options), *reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&inputData)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchUriForResultsForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::System::ILauncherOptions> options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchUriForResultsForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::System::LauncherOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchUriForResultsWithDataForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::System::ILauncherOptions> options, abi_arg_in<Windows::Foundation::Collections::IPropertySet> inputData, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchUriForResultsForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::System::LauncherOptions *>(&options), *reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&inputData)));
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
struct produce<D, Windows::System::ILauncherUIOptions> : produce_base<D, Windows::System::ILauncherUIOptions>
{
    HRESULT __stdcall get_InvocationPoint(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InvocationPoint());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InvocationPoint(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            this->shim().InvocationPoint(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::Point> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionRect(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Rect>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectionRect());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectionRect(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::Rect>> value) noexcept override
    {
        try
        {
            this->shim().SelectionRect(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::Rect> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredPlacement(Windows::UI::Popups::Placement * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreferredPlacement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredPlacement(Windows::UI::Popups::Placement value) noexcept override
    {
        try
        {
            this->shim().PreferredPlacement(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::ILauncherViewOptions> : produce_base<D, Windows::System::ILauncherViewOptions>
{
    HRESULT __stdcall get_DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredRemainingView());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference value) noexcept override
    {
        try
        {
            this->shim().DesiredRemainingView(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IMemoryManagerStatics> : produce_base<D, Windows::System::IMemoryManagerStatics>
{
    HRESULT __stdcall get_AppMemoryUsage(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppMemoryUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppMemoryUsageLimit(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppMemoryUsageLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppMemoryUsageLevel(Windows::System::AppMemoryUsageLevel * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppMemoryUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AppMemoryUsageIncreased(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AppMemoryUsageIncreased(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AppMemoryUsageIncreased(event_token token) noexcept override
    {
        try
        {
            this->shim().AppMemoryUsageIncreased(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AppMemoryUsageDecreased(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AppMemoryUsageDecreased(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AppMemoryUsageDecreased(event_token token) noexcept override
    {
        try
        {
            this->shim().AppMemoryUsageDecreased(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AppMemoryUsageLimitChanging(abi_arg_in<Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AppMemoryUsageLimitChanging(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AppMemoryUsageLimitChanging(event_token token) noexcept override
    {
        try
        {
            this->shim().AppMemoryUsageLimitChanging(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IMemoryManagerStatics2> : produce_base<D, Windows::System::IMemoryManagerStatics2>
{
    HRESULT __stdcall abi_GetAppMemoryReport(abi_arg_out<Windows::System::IAppMemoryReport> memoryReport) noexcept override
    {
        try
        {
            *memoryReport = detach(this->shim().GetAppMemoryReport());
            return S_OK;
        }
        catch (...)
        {
            *memoryReport = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetProcessMemoryReport(abi_arg_out<Windows::System::IProcessMemoryReport> memoryReport) noexcept override
    {
        try
        {
            *memoryReport = detach(this->shim().GetProcessMemoryReport());
            return S_OK;
        }
        catch (...)
        {
            *memoryReport = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IMemoryManagerStatics3> : produce_base<D, Windows::System::IMemoryManagerStatics3>
{
    HRESULT __stdcall abi_TrySetAppMemoryUsageLimit(uint64_t value, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TrySetAppMemoryUsageLimit(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IProcessLauncherOptions> : produce_base<D, Windows::System::IProcessLauncherOptions>
{
    HRESULT __stdcall get_StandardInput(abi_arg_out<Windows::Storage::Streams::IInputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StandardInput());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StandardInput(abi_arg_in<Windows::Storage::Streams::IInputStream> value) noexcept override
    {
        try
        {
            this->shim().StandardInput(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StandardOutput(abi_arg_out<Windows::Storage::Streams::IOutputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StandardOutput());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StandardOutput(abi_arg_in<Windows::Storage::Streams::IOutputStream> value) noexcept override
    {
        try
        {
            this->shim().StandardOutput(*reinterpret_cast<const Windows::Storage::Streams::IOutputStream *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StandardError(abi_arg_out<Windows::Storage::Streams::IOutputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StandardError());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StandardError(abi_arg_in<Windows::Storage::Streams::IOutputStream> value) noexcept override
    {
        try
        {
            this->shim().StandardError(*reinterpret_cast<const Windows::Storage::Streams::IOutputStream *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WorkingDirectory(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WorkingDirectory());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WorkingDirectory(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().WorkingDirectory(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IProcessLauncherResult> : produce_base<D, Windows::System::IProcessLauncherResult>
{
    HRESULT __stdcall get_ExitCode(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IProcessLauncherStatics> : produce_base<D, Windows::System::IProcessLauncherStatics>
{
    HRESULT __stdcall abi_RunToCompletionAsync(abi_arg_in<hstring> fileName, abi_arg_in<hstring> args, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult>> asyncOperationResult) noexcept override
    {
        try
        {
            *asyncOperationResult = detach(this->shim().RunToCompletionAsync(*reinterpret_cast<const hstring *>(&fileName), *reinterpret_cast<const hstring *>(&args)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperationResult = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RunToCompletionAsyncWithOptions(abi_arg_in<hstring> fileName, abi_arg_in<hstring> args, abi_arg_in<Windows::System::IProcessLauncherOptions> options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult>> asyncOperationResult) noexcept override
    {
        try
        {
            *asyncOperationResult = detach(this->shim().RunToCompletionAsync(*reinterpret_cast<const hstring *>(&fileName), *reinterpret_cast<const hstring *>(&args), *reinterpret_cast<const Windows::System::ProcessLauncherOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperationResult = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IProcessMemoryReport> : produce_base<D, Windows::System::IProcessMemoryReport>
{
    HRESULT __stdcall get_PrivateWorkingSetUsage(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PrivateWorkingSetUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalWorkingSetUsage(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TotalWorkingSetUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IProtocolForResultsOperation> : produce_base<D, Windows::System::IProtocolForResultsOperation>
{
    HRESULT __stdcall abi_ReportCompleted(abi_arg_in<Windows::Foundation::Collections::IPropertySet> data) noexcept override
    {
        try
        {
            this->shim().ReportCompleted(*reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&data));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IRemoteLauncherOptions> : produce_base<D, Windows::System::IRemoteLauncherOptions>
{
    HRESULT __stdcall get_FallbackUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FallbackUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FallbackUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().FallbackUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredAppIds(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreferredAppIds());
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
struct produce<D, Windows::System::IRemoteLauncherStatics> : produce_base<D, Windows::System::IRemoteLauncherStatics>
{
    HRESULT __stdcall abi_LaunchUriAsync(abi_arg_in<Windows::System::RemoteSystems::IRemoteSystemConnectionRequest> remoteSystemConnectionRequest, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchUriAsync(*reinterpret_cast<const Windows::System::RemoteSystems::RemoteSystemConnectionRequest *>(&remoteSystemConnectionRequest), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchUriWithOptionsAsync(abi_arg_in<Windows::System::RemoteSystems::IRemoteSystemConnectionRequest> remoteSystemConnectionRequest, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::System::IRemoteLauncherOptions> options, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchUriAsync(*reinterpret_cast<const Windows::System::RemoteSystems::RemoteSystemConnectionRequest *>(&remoteSystemConnectionRequest), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::System::RemoteLauncherOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchUriWithDataAsync(abi_arg_in<Windows::System::RemoteSystems::IRemoteSystemConnectionRequest> remoteSystemConnectionRequest, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::System::IRemoteLauncherOptions> options, abi_arg_in<Windows::Foundation::Collections::IPropertySet> inputData, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchUriAsync(*reinterpret_cast<const Windows::System::RemoteSystems::RemoteSystemConnectionRequest *>(&remoteSystemConnectionRequest), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::System::RemoteLauncherOptions *>(&options), *reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&inputData)));
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
struct produce<D, Windows::System::IShutdownManagerStatics> : produce_base<D, Windows::System::IShutdownManagerStatics>
{
    HRESULT __stdcall abi_BeginShutdown(Windows::System::ShutdownKind shutdownKind, abi_arg_in<Windows::Foundation::TimeSpan> timeout) noexcept override
    {
        try
        {
            this->shim().BeginShutdown(shutdownKind, *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&timeout));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CancelShutdown() noexcept override
    {
        try
        {
            this->shim().CancelShutdown();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::ITimeZoneSettingsStatics> : produce_base<D, Windows::System::ITimeZoneSettingsStatics>
{
    HRESULT __stdcall get_CurrentTimeZoneDisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentTimeZoneDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedTimeZoneDisplayNames(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedTimeZoneDisplayNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanChangeTimeZone(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanChangeTimeZone());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ChangeTimeZoneByDisplayName(abi_arg_in<hstring> timeZoneDisplayName) noexcept override
    {
        try
        {
            this->shim().ChangeTimeZoneByDisplayName(*reinterpret_cast<const hstring *>(&timeZoneDisplayName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IUser> : produce_base<D, Windows::System::IUser>
{
    HRESULT __stdcall get_NonRoamableId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NonRoamableId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationStatus(Windows::System::UserAuthenticationStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthenticationStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::System::UserType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPropertyAsync(abi_arg_in<hstring> value, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::IInspectable>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPropertyAsync(*reinterpret_cast<const hstring *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPropertiesAsync(abi_arg_in<Windows::Foundation::Collections::IVectorView<hstring>> values, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPropertiesAsync(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<hstring> *>(&values)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPictureAsync(Windows::System::UserPictureSize desiredSize, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPictureAsync(desiredSize));
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
struct produce<D, Windows::System::IUserAuthenticationStatusChangeDeferral> : produce_base<D, Windows::System::IUserAuthenticationStatusChangeDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IUserAuthenticationStatusChangingEventArgs> : produce_base<D, Windows::System::IUserAuthenticationStatusChangingEventArgs>
{
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::System::IUserAuthenticationStatusChangeDeferral> deferral) noexcept override
    {
        try
        {
            *deferral = detach(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_NewStatus(Windows::System::UserAuthenticationStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentStatus(Windows::System::UserAuthenticationStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IUserChangedEventArgs> : produce_base<D, Windows::System::IUserChangedEventArgs>
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
};

template <typename D>
struct produce<D, Windows::System::IUserDeviceAssociationChangedEventArgs> : produce_base<D, Windows::System::IUserDeviceAssociationChangedEventArgs>
{
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewUser(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewUser());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OldUser(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldUser());
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
struct produce<D, Windows::System::IUserDeviceAssociationStatics> : produce_base<D, Windows::System::IUserDeviceAssociationStatics>
{
    HRESULT __stdcall abi_FindUserFromDeviceId(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::System::IUser> user) noexcept override
    {
        try
        {
            *user = detach(this->shim().FindUserFromDeviceId(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *user = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UserDeviceAssociationChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().UserDeviceAssociationChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UserDeviceAssociationChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().UserDeviceAssociationChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IUserPicker> : produce_base<D, Windows::System::IUserPicker>
{
    HRESULT __stdcall get_AllowGuestAccounts(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowGuestAccounts());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowGuestAccounts(bool value) noexcept override
    {
        try
        {
            this->shim().AllowGuestAccounts(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedSelectedUser(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SuggestedSelectedUser());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuggestedSelectedUser(abi_arg_in<Windows::System::IUser> value) noexcept override
    {
        try
        {
            this->shim().SuggestedSelectedUser(*reinterpret_cast<const Windows::System::User *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickSingleUserAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::System::User>> pickSingleUserOperation) noexcept override
    {
        try
        {
            *pickSingleUserOperation = detach(this->shim().PickSingleUserAsync());
            return S_OK;
        }
        catch (...)
        {
            *pickSingleUserOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IUserPickerStatics> : produce_base<D, Windows::System::IUserPickerStatics>
{
    HRESULT __stdcall abi_IsSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::IUserStatics> : produce_base<D, Windows::System::IUserStatics>
{
    HRESULT __stdcall abi_CreateWatcher(abi_arg_out<Windows::System::IUserWatcher> watcher) noexcept override
    {
        try
        {
            *watcher = detach(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllAsyncByType(Windows::System::UserType type, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindAllAsync(type));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllAsyncByTypeAndStatus(Windows::System::UserType type, Windows::System::UserAuthenticationStatus status, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindAllAsync(type, status));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFromId(abi_arg_in<hstring> nonRoamableId, abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetFromId(*reinterpret_cast<const hstring *>(&nonRoamableId)));
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
struct produce<D, Windows::System::IUserWatcher> : produce_base<D, Windows::System::IUserWatcher>
{
    HRESULT __stdcall get_Status(Windows::System::UserWatcherStatus * value) noexcept override
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

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Added(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Added(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Added(event_token token) noexcept override
    {
        try
        {
            this->shim().Added(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Removed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(event_token token) noexcept override
    {
        try
        {
            this->shim().Removed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Updated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Updated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(event_token token) noexcept override
    {
        try
        {
            this->shim().Updated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AuthenticationStatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AuthenticationStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AuthenticationStatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().AuthenticationStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AuthenticationStatusChanging(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AuthenticationStatusChanging(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AuthenticationStatusChanging(event_token token) noexcept override
    {
        try
        {
            this->shim().AuthenticationStatusChanging(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().EnumerationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().EnumerationCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Stopped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token token) noexcept override
    {
        try
        {
            this->shim().Stopped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::System {

template <typename D> uint64_t impl_IAppMemoryReport<D>::PrivateCommitUsage() const
{
    uint64_t value {};
    check_hresult(static_cast<const IAppMemoryReport &>(static_cast<const D &>(*this))->get_PrivateCommitUsage(&value));
    return value;
}

template <typename D> uint64_t impl_IAppMemoryReport<D>::PeakPrivateCommitUsage() const
{
    uint64_t value {};
    check_hresult(static_cast<const IAppMemoryReport &>(static_cast<const D &>(*this))->get_PeakPrivateCommitUsage(&value));
    return value;
}

template <typename D> uint64_t impl_IAppMemoryReport<D>::TotalCommitUsage() const
{
    uint64_t value {};
    check_hresult(static_cast<const IAppMemoryReport &>(static_cast<const D &>(*this))->get_TotalCommitUsage(&value));
    return value;
}

template <typename D> uint64_t impl_IAppMemoryReport<D>::TotalCommitLimit() const
{
    uint64_t value {};
    check_hresult(static_cast<const IAppMemoryReport &>(static_cast<const D &>(*this))->get_TotalCommitLimit(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryReport<D>::PrivateWorkingSetUsage() const
{
    uint64_t value {};
    check_hresult(static_cast<const IProcessMemoryReport &>(static_cast<const D &>(*this))->get_PrivateWorkingSetUsage(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryReport<D>::TotalWorkingSetUsage() const
{
    uint64_t value {};
    check_hresult(static_cast<const IProcessMemoryReport &>(static_cast<const D &>(*this))->get_TotalWorkingSetUsage(&value));
    return value;
}

template <typename D> uint64_t impl_IAppMemoryUsageLimitChangingEventArgs<D>::OldLimit() const
{
    uint64_t value {};
    check_hresult(static_cast<const IAppMemoryUsageLimitChangingEventArgs &>(static_cast<const D &>(*this))->get_OldLimit(&value));
    return value;
}

template <typename D> uint64_t impl_IAppMemoryUsageLimitChangingEventArgs<D>::NewLimit() const
{
    uint64_t value {};
    check_hresult(static_cast<const IAppMemoryUsageLimitChangingEventArgs &>(static_cast<const D &>(*this))->get_NewLimit(&value));
    return value;
}

template <typename D> uint64_t impl_IMemoryManagerStatics<D>::AppMemoryUsage() const
{
    uint64_t value {};
    check_hresult(static_cast<const IMemoryManagerStatics &>(static_cast<const D &>(*this))->get_AppMemoryUsage(&value));
    return value;
}

template <typename D> uint64_t impl_IMemoryManagerStatics<D>::AppMemoryUsageLimit() const
{
    uint64_t value {};
    check_hresult(static_cast<const IMemoryManagerStatics &>(static_cast<const D &>(*this))->get_AppMemoryUsageLimit(&value));
    return value;
}

template <typename D> Windows::System::AppMemoryUsageLevel impl_IMemoryManagerStatics<D>::AppMemoryUsageLevel() const
{
    Windows::System::AppMemoryUsageLevel value {};
    check_hresult(static_cast<const IMemoryManagerStatics &>(static_cast<const D &>(*this))->get_AppMemoryUsageLevel(&value));
    return value;
}

template <typename D> event_token impl_IMemoryManagerStatics<D>::AppMemoryUsageIncreased(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMemoryManagerStatics &>(static_cast<const D &>(*this))->add_AppMemoryUsageIncreased(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMemoryManagerStatics> impl_IMemoryManagerStatics<D>::AppMemoryUsageIncreased(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMemoryManagerStatics>(this, &ABI::Windows::System::IMemoryManagerStatics::remove_AppMemoryUsageIncreased, AppMemoryUsageIncreased(handler));
}

template <typename D> void impl_IMemoryManagerStatics<D>::AppMemoryUsageIncreased(event_token token) const
{
    check_hresult(static_cast<const IMemoryManagerStatics &>(static_cast<const D &>(*this))->remove_AppMemoryUsageIncreased(token));
}

template <typename D> event_token impl_IMemoryManagerStatics<D>::AppMemoryUsageDecreased(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMemoryManagerStatics &>(static_cast<const D &>(*this))->add_AppMemoryUsageDecreased(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMemoryManagerStatics> impl_IMemoryManagerStatics<D>::AppMemoryUsageDecreased(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMemoryManagerStatics>(this, &ABI::Windows::System::IMemoryManagerStatics::remove_AppMemoryUsageDecreased, AppMemoryUsageDecreased(handler));
}

template <typename D> void impl_IMemoryManagerStatics<D>::AppMemoryUsageDecreased(event_token token) const
{
    check_hresult(static_cast<const IMemoryManagerStatics &>(static_cast<const D &>(*this))->remove_AppMemoryUsageDecreased(token));
}

template <typename D> event_token impl_IMemoryManagerStatics<D>::AppMemoryUsageLimitChanging(const Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMemoryManagerStatics &>(static_cast<const D &>(*this))->add_AppMemoryUsageLimitChanging(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMemoryManagerStatics> impl_IMemoryManagerStatics<D>::AppMemoryUsageLimitChanging(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMemoryManagerStatics>(this, &ABI::Windows::System::IMemoryManagerStatics::remove_AppMemoryUsageLimitChanging, AppMemoryUsageLimitChanging(handler));
}

template <typename D> void impl_IMemoryManagerStatics<D>::AppMemoryUsageLimitChanging(event_token token) const
{
    check_hresult(static_cast<const IMemoryManagerStatics &>(static_cast<const D &>(*this))->remove_AppMemoryUsageLimitChanging(token));
}

template <typename D> Windows::System::AppMemoryReport impl_IMemoryManagerStatics2<D>::GetAppMemoryReport() const
{
    Windows::System::AppMemoryReport memoryReport { nullptr };
    check_hresult(static_cast<const IMemoryManagerStatics2 &>(static_cast<const D &>(*this))->abi_GetAppMemoryReport(put(memoryReport)));
    return memoryReport;
}

template <typename D> Windows::System::ProcessMemoryReport impl_IMemoryManagerStatics2<D>::GetProcessMemoryReport() const
{
    Windows::System::ProcessMemoryReport memoryReport { nullptr };
    check_hresult(static_cast<const IMemoryManagerStatics2 &>(static_cast<const D &>(*this))->abi_GetProcessMemoryReport(put(memoryReport)));
    return memoryReport;
}

template <typename D> bool impl_IMemoryManagerStatics3<D>::TrySetAppMemoryUsageLimit(uint64_t value) const
{
    bool result {};
    check_hresult(static_cast<const IMemoryManagerStatics3 &>(static_cast<const D &>(*this))->abi_TrySetAppMemoryUsageLimit(value, &result));
    return result;
}

template <typename D> void impl_IProtocolForResultsOperation<D>::ReportCompleted(const Windows::Foundation::Collections::ValueSet & data) const
{
    check_hresult(static_cast<const IProtocolForResultsOperation &>(static_cast<const D &>(*this))->abi_ReportCompleted(get(data)));
}

template <typename D> hstring impl_IUser<D>::NonRoamableId() const
{
    hstring value;
    check_hresult(static_cast<const IUser &>(static_cast<const D &>(*this))->get_NonRoamableId(put(value)));
    return value;
}

template <typename D> Windows::System::UserAuthenticationStatus impl_IUser<D>::AuthenticationStatus() const
{
    Windows::System::UserAuthenticationStatus value {};
    check_hresult(static_cast<const IUser &>(static_cast<const D &>(*this))->get_AuthenticationStatus(&value));
    return value;
}

template <typename D> Windows::System::UserType impl_IUser<D>::Type() const
{
    Windows::System::UserType value {};
    check_hresult(static_cast<const IUser &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::IInspectable> impl_IUser<D>::GetPropertyAsync(hstring_ref value) const
{
    Windows::Foundation::IAsyncOperation<Windows::IInspectable> operation;
    check_hresult(static_cast<const IUser &>(static_cast<const D &>(*this))->abi_GetPropertyAsync(get(value), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet> impl_IUser<D>::GetPropertiesAsync(const Windows::Foundation::Collections::IVectorView<hstring> & values) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet> operation;
    check_hresult(static_cast<const IUser &>(static_cast<const D &>(*this))->abi_GetPropertiesAsync(get(values), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> impl_IUser<D>::GetPictureAsync(Windows::System::UserPictureSize desiredSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> operation;
    check_hresult(static_cast<const IUser &>(static_cast<const D &>(*this))->abi_GetPictureAsync(desiredSize, put(operation)));
    return operation;
}

template <typename D> Windows::System::UserWatcher impl_IUserStatics<D>::CreateWatcher() const
{
    Windows::System::UserWatcher watcher { nullptr };
    check_hresult(static_cast<const IUserStatics &>(static_cast<const D &>(*this))->abi_CreateWatcher(put(watcher)));
    return watcher;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> impl_IUserStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> operation;
    check_hresult(static_cast<const IUserStatics &>(static_cast<const D &>(*this))->abi_FindAllAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> impl_IUserStatics<D>::FindAllAsync(Windows::System::UserType type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> operation;
    check_hresult(static_cast<const IUserStatics &>(static_cast<const D &>(*this))->abi_FindAllAsyncByType(type, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> impl_IUserStatics<D>::FindAllAsync(Windows::System::UserType type, Windows::System::UserAuthenticationStatus status) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> operation;
    check_hresult(static_cast<const IUserStatics &>(static_cast<const D &>(*this))->abi_FindAllAsyncByTypeAndStatus(type, status, put(operation)));
    return operation;
}

template <typename D> Windows::System::User impl_IUserStatics<D>::GetFromId(hstring_ref nonRoamableId) const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IUserStatics &>(static_cast<const D &>(*this))->abi_GetFromId(get(nonRoamableId), put(value)));
    return value;
}

template <typename D> Windows::System::UserWatcherStatus impl_IUserWatcher<D>::Status() const
{
    Windows::System::UserWatcherStatus value {};
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> void impl_IUserWatcher<D>::Start() const
{
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IUserWatcher<D>::Stop() const
{
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> event_token impl_IUserWatcher<D>::Added(const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->add_Added(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserWatcher> impl_IUserWatcher<D>::Added(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUserWatcher>(this, &ABI::Windows::System::IUserWatcher::remove_Added, Added(handler));
}

template <typename D> void impl_IUserWatcher<D>::Added(event_token token) const
{
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->remove_Added(token));
}

template <typename D> event_token impl_IUserWatcher<D>::Removed(const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->add_Removed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserWatcher> impl_IUserWatcher<D>::Removed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUserWatcher>(this, &ABI::Windows::System::IUserWatcher::remove_Removed, Removed(handler));
}

template <typename D> void impl_IUserWatcher<D>::Removed(event_token token) const
{
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->remove_Removed(token));
}

template <typename D> event_token impl_IUserWatcher<D>::Updated(const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->add_Updated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserWatcher> impl_IUserWatcher<D>::Updated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUserWatcher>(this, &ABI::Windows::System::IUserWatcher::remove_Updated, Updated(handler));
}

template <typename D> void impl_IUserWatcher<D>::Updated(event_token token) const
{
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->remove_Updated(token));
}

template <typename D> event_token impl_IUserWatcher<D>::AuthenticationStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->add_AuthenticationStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserWatcher> impl_IUserWatcher<D>::AuthenticationStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUserWatcher>(this, &ABI::Windows::System::IUserWatcher::remove_AuthenticationStatusChanged, AuthenticationStatusChanged(handler));
}

template <typename D> void impl_IUserWatcher<D>::AuthenticationStatusChanged(event_token token) const
{
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->remove_AuthenticationStatusChanged(token));
}

template <typename D> event_token impl_IUserWatcher<D>::AuthenticationStatusChanging(const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->add_AuthenticationStatusChanging(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserWatcher> impl_IUserWatcher<D>::AuthenticationStatusChanging(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUserWatcher>(this, &ABI::Windows::System::IUserWatcher::remove_AuthenticationStatusChanging, AuthenticationStatusChanging(handler));
}

template <typename D> void impl_IUserWatcher<D>::AuthenticationStatusChanging(event_token token) const
{
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->remove_AuthenticationStatusChanging(token));
}

template <typename D> event_token impl_IUserWatcher<D>::EnumerationCompleted(const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->add_EnumerationCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserWatcher> impl_IUserWatcher<D>::EnumerationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IUserWatcher>(this, &ABI::Windows::System::IUserWatcher::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void impl_IUserWatcher<D>::EnumerationCompleted(event_token token) const
{
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->remove_EnumerationCompleted(token));
}

template <typename D> event_token impl_IUserWatcher<D>::Stopped(const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->add_Stopped(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserWatcher> impl_IUserWatcher<D>::Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IUserWatcher>(this, &ABI::Windows::System::IUserWatcher::remove_Stopped, Stopped(handler));
}

template <typename D> void impl_IUserWatcher<D>::Stopped(event_token token) const
{
    check_hresult(static_cast<const IUserWatcher &>(static_cast<const D &>(*this))->remove_Stopped(token));
}

template <typename D> Windows::System::User impl_IUserChangedEventArgs<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IUserChangedEventArgs &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> void impl_IUserAuthenticationStatusChangeDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IUserAuthenticationStatusChangeDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> Windows::System::UserAuthenticationStatusChangeDeferral impl_IUserAuthenticationStatusChangingEventArgs<D>::GetDeferral() const
{
    Windows::System::UserAuthenticationStatusChangeDeferral deferral { nullptr };
    check_hresult(static_cast<const IUserAuthenticationStatusChangingEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> Windows::System::User impl_IUserAuthenticationStatusChangingEventArgs<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IUserAuthenticationStatusChangingEventArgs &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> Windows::System::UserAuthenticationStatus impl_IUserAuthenticationStatusChangingEventArgs<D>::NewStatus() const
{
    Windows::System::UserAuthenticationStatus value {};
    check_hresult(static_cast<const IUserAuthenticationStatusChangingEventArgs &>(static_cast<const D &>(*this))->get_NewStatus(&value));
    return value;
}

template <typename D> Windows::System::UserAuthenticationStatus impl_IUserAuthenticationStatusChangingEventArgs<D>::CurrentStatus() const
{
    Windows::System::UserAuthenticationStatus value {};
    check_hresult(static_cast<const IUserAuthenticationStatusChangingEventArgs &>(static_cast<const D &>(*this))->get_CurrentStatus(&value));
    return value;
}

template <typename D> hstring impl_IKnownUserPropertiesStatics<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownUserPropertiesStatics &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownUserPropertiesStatics<D>::FirstName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownUserPropertiesStatics &>(static_cast<const D &>(*this))->get_FirstName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownUserPropertiesStatics<D>::LastName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownUserPropertiesStatics &>(static_cast<const D &>(*this))->get_LastName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownUserPropertiesStatics<D>::ProviderName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownUserPropertiesStatics &>(static_cast<const D &>(*this))->get_ProviderName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownUserPropertiesStatics<D>::AccountName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownUserPropertiesStatics &>(static_cast<const D &>(*this))->get_AccountName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownUserPropertiesStatics<D>::GuestHost() const
{
    hstring value;
    check_hresult(static_cast<const IKnownUserPropertiesStatics &>(static_cast<const D &>(*this))->get_GuestHost(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownUserPropertiesStatics<D>::PrincipalName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownUserPropertiesStatics &>(static_cast<const D &>(*this))->get_PrincipalName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownUserPropertiesStatics<D>::DomainName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownUserPropertiesStatics &>(static_cast<const D &>(*this))->get_DomainName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownUserPropertiesStatics<D>::SessionInitiationProtocolUri() const
{
    hstring value;
    check_hresult(static_cast<const IKnownUserPropertiesStatics &>(static_cast<const D &>(*this))->get_SessionInitiationProtocolUri(put(value)));
    return value;
}

template <typename D> bool impl_IUserPickerStatics<D>::IsSupported() const
{
    bool value {};
    check_hresult(static_cast<const IUserPickerStatics &>(static_cast<const D &>(*this))->abi_IsSupported(&value));
    return value;
}

template <typename D> bool impl_IUserPicker<D>::AllowGuestAccounts() const
{
    bool value {};
    check_hresult(static_cast<const IUserPicker &>(static_cast<const D &>(*this))->get_AllowGuestAccounts(&value));
    return value;
}

template <typename D> void impl_IUserPicker<D>::AllowGuestAccounts(bool value) const
{
    check_hresult(static_cast<const IUserPicker &>(static_cast<const D &>(*this))->put_AllowGuestAccounts(value));
}

template <typename D> Windows::System::User impl_IUserPicker<D>::SuggestedSelectedUser() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IUserPicker &>(static_cast<const D &>(*this))->get_SuggestedSelectedUser(put(value)));
    return value;
}

template <typename D> void impl_IUserPicker<D>::SuggestedSelectedUser(const Windows::System::User & value) const
{
    check_hresult(static_cast<const IUserPicker &>(static_cast<const D &>(*this))->put_SuggestedSelectedUser(get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::User> impl_IUserPicker<D>::PickSingleUserAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::System::User> pickSingleUserOperation;
    check_hresult(static_cast<const IUserPicker &>(static_cast<const D &>(*this))->abi_PickSingleUserAsync(put(pickSingleUserOperation)));
    return pickSingleUserOperation;
}

template <typename D> hstring impl_IUserDeviceAssociationChangedEventArgs<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IUserDeviceAssociationChangedEventArgs &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> Windows::System::User impl_IUserDeviceAssociationChangedEventArgs<D>::NewUser() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IUserDeviceAssociationChangedEventArgs &>(static_cast<const D &>(*this))->get_NewUser(put(value)));
    return value;
}

template <typename D> Windows::System::User impl_IUserDeviceAssociationChangedEventArgs<D>::OldUser() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IUserDeviceAssociationChangedEventArgs &>(static_cast<const D &>(*this))->get_OldUser(put(value)));
    return value;
}

template <typename D> Windows::System::User impl_IUserDeviceAssociationStatics<D>::FindUserFromDeviceId(hstring_ref deviceId) const
{
    Windows::System::User user { nullptr };
    check_hresult(static_cast<const IUserDeviceAssociationStatics &>(static_cast<const D &>(*this))->abi_FindUserFromDeviceId(get(deviceId), put(user)));
    return user;
}

template <typename D> event_token impl_IUserDeviceAssociationStatics<D>::UserDeviceAssociationChanged(const Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IUserDeviceAssociationStatics &>(static_cast<const D &>(*this))->add_UserDeviceAssociationChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserDeviceAssociationStatics> impl_IUserDeviceAssociationStatics<D>::UserDeviceAssociationChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUserDeviceAssociationStatics>(this, &ABI::Windows::System::IUserDeviceAssociationStatics::remove_UserDeviceAssociationChanged, UserDeviceAssociationChanged(handler));
}

template <typename D> void impl_IUserDeviceAssociationStatics<D>::UserDeviceAssociationChanged(event_token token) const
{
    check_hresult(static_cast<const IUserDeviceAssociationStatics &>(static_cast<const D &>(*this))->remove_UserDeviceAssociationChanged(token));
}

template <typename D> Windows::System::LaunchUriStatus impl_ILaunchUriResult<D>::Status() const
{
    Windows::System::LaunchUriStatus value {};
    check_hresult(static_cast<const ILaunchUriResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_ILaunchUriResult<D>::Result() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(static_cast<const ILaunchUriResult &>(static_cast<const D &>(*this))->get_Result(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Point> impl_ILauncherUIOptions<D>::InvocationPoint() const
{
    Windows::Foundation::IReference<Windows::Foundation::Point> value;
    check_hresult(static_cast<const ILauncherUIOptions &>(static_cast<const D &>(*this))->get_InvocationPoint(put(value)));
    return value;
}

template <typename D> void impl_ILauncherUIOptions<D>::InvocationPoint(const Windows::Foundation::IReference<Windows::Foundation::Point> & value) const
{
    check_hresult(static_cast<const ILauncherUIOptions &>(static_cast<const D &>(*this))->put_InvocationPoint(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Rect> impl_ILauncherUIOptions<D>::SelectionRect() const
{
    Windows::Foundation::IReference<Windows::Foundation::Rect> value;
    check_hresult(static_cast<const ILauncherUIOptions &>(static_cast<const D &>(*this))->get_SelectionRect(put(value)));
    return value;
}

template <typename D> void impl_ILauncherUIOptions<D>::SelectionRect(const Windows::Foundation::IReference<Windows::Foundation::Rect> & value) const
{
    check_hresult(static_cast<const ILauncherUIOptions &>(static_cast<const D &>(*this))->put_SelectionRect(get(value)));
}

template <typename D> Windows::UI::Popups::Placement impl_ILauncherUIOptions<D>::PreferredPlacement() const
{
    Windows::UI::Popups::Placement value {};
    check_hresult(static_cast<const ILauncherUIOptions &>(static_cast<const D &>(*this))->get_PreferredPlacement(&value));
    return value;
}

template <typename D> void impl_ILauncherUIOptions<D>::PreferredPlacement(Windows::UI::Popups::Placement value) const
{
    check_hresult(static_cast<const ILauncherUIOptions &>(static_cast<const D &>(*this))->put_PreferredPlacement(value));
}

template <typename D> bool impl_ILauncherOptions<D>::TreatAsUntrusted() const
{
    bool value {};
    check_hresult(static_cast<const ILauncherOptions &>(static_cast<const D &>(*this))->get_TreatAsUntrusted(&value));
    return value;
}

template <typename D> void impl_ILauncherOptions<D>::TreatAsUntrusted(bool value) const
{
    check_hresult(static_cast<const ILauncherOptions &>(static_cast<const D &>(*this))->put_TreatAsUntrusted(value));
}

template <typename D> bool impl_ILauncherOptions<D>::DisplayApplicationPicker() const
{
    bool value {};
    check_hresult(static_cast<const ILauncherOptions &>(static_cast<const D &>(*this))->get_DisplayApplicationPicker(&value));
    return value;
}

template <typename D> void impl_ILauncherOptions<D>::DisplayApplicationPicker(bool value) const
{
    check_hresult(static_cast<const ILauncherOptions &>(static_cast<const D &>(*this))->put_DisplayApplicationPicker(value));
}

template <typename D> Windows::System::LauncherUIOptions impl_ILauncherOptions<D>::UI() const
{
    Windows::System::LauncherUIOptions value { nullptr };
    check_hresult(static_cast<const ILauncherOptions &>(static_cast<const D &>(*this))->get_UI(put(value)));
    return value;
}

template <typename D> hstring impl_ILauncherOptions<D>::PreferredApplicationPackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const ILauncherOptions &>(static_cast<const D &>(*this))->get_PreferredApplicationPackageFamilyName(put(value)));
    return value;
}

template <typename D> void impl_ILauncherOptions<D>::PreferredApplicationPackageFamilyName(hstring_ref value) const
{
    check_hresult(static_cast<const ILauncherOptions &>(static_cast<const D &>(*this))->put_PreferredApplicationPackageFamilyName(get(value)));
}

template <typename D> hstring impl_ILauncherOptions<D>::PreferredApplicationDisplayName() const
{
    hstring value;
    check_hresult(static_cast<const ILauncherOptions &>(static_cast<const D &>(*this))->get_PreferredApplicationDisplayName(put(value)));
    return value;
}

template <typename D> void impl_ILauncherOptions<D>::PreferredApplicationDisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const ILauncherOptions &>(static_cast<const D &>(*this))->put_PreferredApplicationDisplayName(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ILauncherOptions<D>::FallbackUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ILauncherOptions &>(static_cast<const D &>(*this))->get_FallbackUri(put(value)));
    return value;
}

template <typename D> void impl_ILauncherOptions<D>::FallbackUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ILauncherOptions &>(static_cast<const D &>(*this))->put_FallbackUri(get(value)));
}

template <typename D> hstring impl_ILauncherOptions<D>::ContentType() const
{
    hstring value;
    check_hresult(static_cast<const ILauncherOptions &>(static_cast<const D &>(*this))->get_ContentType(put(value)));
    return value;
}

template <typename D> void impl_ILauncherOptions<D>::ContentType(hstring_ref value) const
{
    check_hresult(static_cast<const ILauncherOptions &>(static_cast<const D &>(*this))->put_ContentType(get(value)));
}

template <typename D> hstring impl_ILauncherOptions2<D>::TargetApplicationPackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const ILauncherOptions2 &>(static_cast<const D &>(*this))->get_TargetApplicationPackageFamilyName(put(value)));
    return value;
}

template <typename D> void impl_ILauncherOptions2<D>::TargetApplicationPackageFamilyName(hstring_ref value) const
{
    check_hresult(static_cast<const ILauncherOptions2 &>(static_cast<const D &>(*this))->put_TargetApplicationPackageFamilyName(get(value)));
}

template <typename D> Windows::Storage::Search::StorageFileQueryResult impl_ILauncherOptions2<D>::NeighboringFilesQuery() const
{
    Windows::Storage::Search::StorageFileQueryResult value { nullptr };
    check_hresult(static_cast<const ILauncherOptions2 &>(static_cast<const D &>(*this))->get_NeighboringFilesQuery(put(value)));
    return value;
}

template <typename D> void impl_ILauncherOptions2<D>::NeighboringFilesQuery(const Windows::Storage::Search::StorageFileQueryResult & value) const
{
    check_hresult(static_cast<const ILauncherOptions2 &>(static_cast<const D &>(*this))->put_NeighboringFilesQuery(get(value)));
}

template <typename D> bool impl_ILauncherOptions3<D>::IgnoreAppUriHandlers() const
{
    bool value {};
    check_hresult(static_cast<const ILauncherOptions3 &>(static_cast<const D &>(*this))->get_IgnoreAppUriHandlers(&value));
    return value;
}

template <typename D> void impl_ILauncherOptions3<D>::IgnoreAppUriHandlers(bool value) const
{
    check_hresult(static_cast<const ILauncherOptions3 &>(static_cast<const D &>(*this))->put_IgnoreAppUriHandlers(value));
}

template <typename D> Windows::UI::ViewManagement::ViewSizePreference impl_ILauncherViewOptions<D>::DesiredRemainingView() const
{
    Windows::UI::ViewManagement::ViewSizePreference value {};
    check_hresult(static_cast<const ILauncherViewOptions &>(static_cast<const D &>(*this))->get_DesiredRemainingView(&value));
    return value;
}

template <typename D> void impl_ILauncherViewOptions<D>::DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference value) const
{
    check_hresult(static_cast<const ILauncherViewOptions &>(static_cast<const D &>(*this))->put_DesiredRemainingView(value));
}

template <typename D> Windows::Foundation::Uri impl_IRemoteLauncherOptions<D>::FallbackUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IRemoteLauncherOptions &>(static_cast<const D &>(*this))->get_FallbackUri(put(value)));
    return value;
}

template <typename D> void impl_IRemoteLauncherOptions<D>::FallbackUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IRemoteLauncherOptions &>(static_cast<const D &>(*this))->put_FallbackUri(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IRemoteLauncherOptions<D>::PreferredAppIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IRemoteLauncherOptions &>(static_cast<const D &>(*this))->get_PreferredAppIds(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Storage::IStorageItem> impl_IFolderLauncherOptions<D>::ItemsToSelect() const
{
    Windows::Foundation::Collections::IVector<Windows::Storage::IStorageItem> value;
    check_hresult(static_cast<const IFolderLauncherOptions &>(static_cast<const D &>(*this))->get_ItemsToSelect(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ILauncherStatics<D>::LaunchFileAsync(const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ILauncherStatics &>(static_cast<const D &>(*this))->abi_LaunchFileAsync(get(file), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ILauncherStatics<D>::LaunchFileAsync(const Windows::Storage::IStorageFile & file, const Windows::System::LauncherOptions & options) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ILauncherStatics &>(static_cast<const D &>(*this))->abi_LaunchFileWithOptionsAsync(get(file), get(options), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ILauncherStatics<D>::LaunchUriAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ILauncherStatics &>(static_cast<const D &>(*this))->abi_LaunchUriAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ILauncherStatics<D>::LaunchUriAsync(const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ILauncherStatics &>(static_cast<const D &>(*this))->abi_LaunchUriWithOptionsAsync(get(uri), get(options), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> impl_ILauncherStatics2<D>::LaunchUriForResultsAsync(const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> operation;
    check_hresult(static_cast<const ILauncherStatics2 &>(static_cast<const D &>(*this))->abi_LaunchUriForResultsAsync(get(uri), get(options), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> impl_ILauncherStatics2<D>::LaunchUriForResultsAsync(const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options, const Windows::Foundation::Collections::ValueSet & inputData) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> operation;
    check_hresult(static_cast<const ILauncherStatics2 &>(static_cast<const D &>(*this))->abi_LaunchUriForResultsWithDataAsync(get(uri), get(options), get(inputData), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ILauncherStatics2<D>::LaunchUriAsync(const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options, const Windows::Foundation::Collections::ValueSet & inputData) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ILauncherStatics2 &>(static_cast<const D &>(*this))->abi_LaunchUriWithDataAsync(get(uri), get(options), get(inputData), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> impl_ILauncherStatics2<D>::QueryUriSupportAsync(const Windows::Foundation::Uri & uri, Windows::System::LaunchQuerySupportType launchQuerySupportType) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> operation;
    check_hresult(static_cast<const ILauncherStatics2 &>(static_cast<const D &>(*this))->abi_QueryUriSupportAsync(get(uri), launchQuerySupportType, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> impl_ILauncherStatics2<D>::QueryUriSupportAsync(const Windows::Foundation::Uri & uri, Windows::System::LaunchQuerySupportType launchQuerySupportType, hstring_ref packageFamilyName) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> operation;
    check_hresult(static_cast<const ILauncherStatics2 &>(static_cast<const D &>(*this))->abi_QueryUriSupportWithPackageFamilyNameAsync(get(uri), launchQuerySupportType, get(packageFamilyName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> impl_ILauncherStatics2<D>::QueryFileSupportAsync(const Windows::Storage::StorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> operation;
    check_hresult(static_cast<const ILauncherStatics2 &>(static_cast<const D &>(*this))->abi_QueryFileSupportAsync(get(file), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> impl_ILauncherStatics2<D>::QueryFileSupportAsync(const Windows::Storage::StorageFile & file, hstring_ref packageFamilyName) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> operation;
    check_hresult(static_cast<const ILauncherStatics2 &>(static_cast<const D &>(*this))->abi_QueryFileSupportWithPackageFamilyNameAsync(get(file), get(packageFamilyName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> impl_ILauncherStatics2<D>::FindUriSchemeHandlersAsync(hstring_ref scheme) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> operation;
    check_hresult(static_cast<const ILauncherStatics2 &>(static_cast<const D &>(*this))->abi_FindUriSchemeHandlersAsync(get(scheme), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> impl_ILauncherStatics2<D>::FindUriSchemeHandlersAsync(hstring_ref scheme, Windows::System::LaunchQuerySupportType launchQuerySupportType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> operation;
    check_hresult(static_cast<const ILauncherStatics2 &>(static_cast<const D &>(*this))->abi_FindUriSchemeHandlersWithLaunchUriTypeAsync(get(scheme), launchQuerySupportType, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> impl_ILauncherStatics2<D>::FindFileHandlersAsync(hstring_ref extension) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> operation;
    check_hresult(static_cast<const ILauncherStatics2 &>(static_cast<const D &>(*this))->abi_FindFileHandlersAsync(get(extension), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ILauncherStatics3<D>::LaunchFolderAsync(const Windows::Storage::IStorageFolder & folder) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ILauncherStatics3 &>(static_cast<const D &>(*this))->abi_LaunchFolderAsync(get(folder), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ILauncherStatics3<D>::LaunchFolderAsync(const Windows::Storage::IStorageFolder & folder, const Windows::System::FolderLauncherOptions & options) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ILauncherStatics3 &>(static_cast<const D &>(*this))->abi_LaunchFolderWithOptionsAsync(get(folder), get(options), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> impl_ILauncherStatics4<D>::QueryAppUriSupportAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> operation;
    check_hresult(static_cast<const ILauncherStatics4 &>(static_cast<const D &>(*this))->abi_QueryAppUriSupportAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> impl_ILauncherStatics4<D>::QueryAppUriSupportAsync(const Windows::Foundation::Uri & uri, hstring_ref packageFamilyName) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> operation;
    check_hresult(static_cast<const ILauncherStatics4 &>(static_cast<const D &>(*this))->abi_QueryAppUriSupportWithPackageFamilyNameAsync(get(uri), get(packageFamilyName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> impl_ILauncherStatics4<D>::FindAppUriHandlersAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> operation;
    check_hresult(static_cast<const ILauncherStatics4 &>(static_cast<const D &>(*this))->abi_FindAppUriHandlersAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus> impl_ILauncherStatics4<D>::LaunchUriForUserAsync(const Windows::System::User & user, const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus> operation;
    check_hresult(static_cast<const ILauncherStatics4 &>(static_cast<const D &>(*this))->abi_LaunchUriForUserAsync(get(user), get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus> impl_ILauncherStatics4<D>::LaunchUriForUserAsync(const Windows::System::User & user, const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus> operation;
    check_hresult(static_cast<const ILauncherStatics4 &>(static_cast<const D &>(*this))->abi_LaunchUriWithOptionsForUserAsync(get(user), get(uri), get(options), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus> impl_ILauncherStatics4<D>::LaunchUriForUserAsync(const Windows::System::User & user, const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options, const Windows::Foundation::Collections::ValueSet & inputData) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus> operation;
    check_hresult(static_cast<const ILauncherStatics4 &>(static_cast<const D &>(*this))->abi_LaunchUriWithDataForUserAsync(get(user), get(uri), get(options), get(inputData), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> impl_ILauncherStatics4<D>::LaunchUriForResultsForUserAsync(const Windows::System::User & user, const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> operation;
    check_hresult(static_cast<const ILauncherStatics4 &>(static_cast<const D &>(*this))->abi_LaunchUriForResultsForUserAsync(get(user), get(uri), get(options), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> impl_ILauncherStatics4<D>::LaunchUriForResultsForUserAsync(const Windows::System::User & user, const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options, const Windows::Foundation::Collections::ValueSet & inputData) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> operation;
    check_hresult(static_cast<const ILauncherStatics4 &>(static_cast<const D &>(*this))->abi_LaunchUriForResultsWithDataForUserAsync(get(user), get(uri), get(options), get(inputData), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus> impl_IRemoteLauncherStatics<D>::LaunchUriAsync(const Windows::System::RemoteSystems::RemoteSystemConnectionRequest & remoteSystemConnectionRequest, const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus> operation;
    check_hresult(static_cast<const IRemoteLauncherStatics &>(static_cast<const D &>(*this))->abi_LaunchUriAsync(get(remoteSystemConnectionRequest), get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus> impl_IRemoteLauncherStatics<D>::LaunchUriAsync(const Windows::System::RemoteSystems::RemoteSystemConnectionRequest & remoteSystemConnectionRequest, const Windows::Foundation::Uri & uri, const Windows::System::RemoteLauncherOptions & options) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus> operation;
    check_hresult(static_cast<const IRemoteLauncherStatics &>(static_cast<const D &>(*this))->abi_LaunchUriWithOptionsAsync(get(remoteSystemConnectionRequest), get(uri), get(options), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus> impl_IRemoteLauncherStatics<D>::LaunchUriAsync(const Windows::System::RemoteSystems::RemoteSystemConnectionRequest & remoteSystemConnectionRequest, const Windows::Foundation::Uri & uri, const Windows::System::RemoteLauncherOptions & options, const Windows::Foundation::Collections::ValueSet & inputData) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus> operation;
    check_hresult(static_cast<const IRemoteLauncherStatics &>(static_cast<const D &>(*this))->abi_LaunchUriWithDataAsync(get(remoteSystemConnectionRequest), get(uri), get(options), get(inputData), put(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::IInputStream impl_IProcessLauncherOptions<D>::StandardInput() const
{
    Windows::Storage::Streams::IInputStream value;
    check_hresult(static_cast<const IProcessLauncherOptions &>(static_cast<const D &>(*this))->get_StandardInput(put(value)));
    return value;
}

template <typename D> void impl_IProcessLauncherOptions<D>::StandardInput(const Windows::Storage::Streams::IInputStream & value) const
{
    check_hresult(static_cast<const IProcessLauncherOptions &>(static_cast<const D &>(*this))->put_StandardInput(get(value)));
}

template <typename D> Windows::Storage::Streams::IOutputStream impl_IProcessLauncherOptions<D>::StandardOutput() const
{
    Windows::Storage::Streams::IOutputStream value;
    check_hresult(static_cast<const IProcessLauncherOptions &>(static_cast<const D &>(*this))->get_StandardOutput(put(value)));
    return value;
}

template <typename D> void impl_IProcessLauncherOptions<D>::StandardOutput(const Windows::Storage::Streams::IOutputStream & value) const
{
    check_hresult(static_cast<const IProcessLauncherOptions &>(static_cast<const D &>(*this))->put_StandardOutput(get(value)));
}

template <typename D> Windows::Storage::Streams::IOutputStream impl_IProcessLauncherOptions<D>::StandardError() const
{
    Windows::Storage::Streams::IOutputStream value;
    check_hresult(static_cast<const IProcessLauncherOptions &>(static_cast<const D &>(*this))->get_StandardError(put(value)));
    return value;
}

template <typename D> void impl_IProcessLauncherOptions<D>::StandardError(const Windows::Storage::Streams::IOutputStream & value) const
{
    check_hresult(static_cast<const IProcessLauncherOptions &>(static_cast<const D &>(*this))->put_StandardError(get(value)));
}

template <typename D> hstring impl_IProcessLauncherOptions<D>::WorkingDirectory() const
{
    hstring value;
    check_hresult(static_cast<const IProcessLauncherOptions &>(static_cast<const D &>(*this))->get_WorkingDirectory(put(value)));
    return value;
}

template <typename D> void impl_IProcessLauncherOptions<D>::WorkingDirectory(hstring_ref value) const
{
    check_hresult(static_cast<const IProcessLauncherOptions &>(static_cast<const D &>(*this))->put_WorkingDirectory(get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> impl_IProcessLauncherStatics<D>::RunToCompletionAsync(hstring_ref fileName, hstring_ref args) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> asyncOperationResult;
    check_hresult(static_cast<const IProcessLauncherStatics &>(static_cast<const D &>(*this))->abi_RunToCompletionAsync(get(fileName), get(args), put(asyncOperationResult)));
    return asyncOperationResult;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> impl_IProcessLauncherStatics<D>::RunToCompletionAsync(hstring_ref fileName, hstring_ref args, const Windows::System::ProcessLauncherOptions & options) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> asyncOperationResult;
    check_hresult(static_cast<const IProcessLauncherStatics &>(static_cast<const D &>(*this))->abi_RunToCompletionAsyncWithOptions(get(fileName), get(args), get(options), put(asyncOperationResult)));
    return asyncOperationResult;
}

template <typename D> uint32_t impl_IProcessLauncherResult<D>::ExitCode() const
{
    uint32_t value {};
    check_hresult(static_cast<const IProcessLauncherResult &>(static_cast<const D &>(*this))->get_ExitCode(&value));
    return value;
}

template <typename D> void impl_IShutdownManagerStatics<D>::BeginShutdown(Windows::System::ShutdownKind shutdownKind, const Windows::Foundation::TimeSpan & timeout) const
{
    check_hresult(static_cast<const IShutdownManagerStatics &>(static_cast<const D &>(*this))->abi_BeginShutdown(shutdownKind, get(timeout)));
}

template <typename D> void impl_IShutdownManagerStatics<D>::CancelShutdown() const
{
    check_hresult(static_cast<const IShutdownManagerStatics &>(static_cast<const D &>(*this))->abi_CancelShutdown());
}

template <typename D> hstring impl_ITimeZoneSettingsStatics<D>::CurrentTimeZoneDisplayName() const
{
    hstring value;
    check_hresult(static_cast<const ITimeZoneSettingsStatics &>(static_cast<const D &>(*this))->get_CurrentTimeZoneDisplayName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_ITimeZoneSettingsStatics<D>::SupportedTimeZoneDisplayNames() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const ITimeZoneSettingsStatics &>(static_cast<const D &>(*this))->get_SupportedTimeZoneDisplayNames(put(value)));
    return value;
}

template <typename D> bool impl_ITimeZoneSettingsStatics<D>::CanChangeTimeZone() const
{
    bool value {};
    check_hresult(static_cast<const ITimeZoneSettingsStatics &>(static_cast<const D &>(*this))->get_CanChangeTimeZone(&value));
    return value;
}

template <typename D> void impl_ITimeZoneSettingsStatics<D>::ChangeTimeZoneByDisplayName(hstring_ref timeZoneDisplayName) const
{
    check_hresult(static_cast<const ITimeZoneSettingsStatics &>(static_cast<const D &>(*this))->abi_ChangeTimeZoneByDisplayName(get(timeZoneDisplayName)));
}

inline FolderLauncherOptions::FolderLauncherOptions() :
    FolderLauncherOptions(activate_instance<FolderLauncherOptions>())
{}

inline hstring KnownUserProperties::DisplayName()
{
    return get_activation_factory<KnownUserProperties, IKnownUserPropertiesStatics>().DisplayName();
}

inline hstring KnownUserProperties::FirstName()
{
    return get_activation_factory<KnownUserProperties, IKnownUserPropertiesStatics>().FirstName();
}

inline hstring KnownUserProperties::LastName()
{
    return get_activation_factory<KnownUserProperties, IKnownUserPropertiesStatics>().LastName();
}

inline hstring KnownUserProperties::ProviderName()
{
    return get_activation_factory<KnownUserProperties, IKnownUserPropertiesStatics>().ProviderName();
}

inline hstring KnownUserProperties::AccountName()
{
    return get_activation_factory<KnownUserProperties, IKnownUserPropertiesStatics>().AccountName();
}

inline hstring KnownUserProperties::GuestHost()
{
    return get_activation_factory<KnownUserProperties, IKnownUserPropertiesStatics>().GuestHost();
}

inline hstring KnownUserProperties::PrincipalName()
{
    return get_activation_factory<KnownUserProperties, IKnownUserPropertiesStatics>().PrincipalName();
}

inline hstring KnownUserProperties::DomainName()
{
    return get_activation_factory<KnownUserProperties, IKnownUserPropertiesStatics>().DomainName();
}

inline hstring KnownUserProperties::SessionInitiationProtocolUri()
{
    return get_activation_factory<KnownUserProperties, IKnownUserPropertiesStatics>().SessionInitiationProtocolUri();
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchFileAsync(const Windows::Storage::IStorageFile & file)
{
    return get_activation_factory<Launcher, ILauncherStatics>().LaunchFileAsync(file);
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchFileAsync(const Windows::Storage::IStorageFile & file, const Windows::System::LauncherOptions & options)
{
    return get_activation_factory<Launcher, ILauncherStatics>().LaunchFileAsync(file, options);
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchUriAsync(const Windows::Foundation::Uri & uri)
{
    return get_activation_factory<Launcher, ILauncherStatics>().LaunchUriAsync(uri);
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchUriAsync(const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options)
{
    return get_activation_factory<Launcher, ILauncherStatics>().LaunchUriAsync(uri, options);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> Launcher::LaunchUriForResultsAsync(const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options)
{
    return get_activation_factory<Launcher, ILauncherStatics2>().LaunchUriForResultsAsync(uri, options);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> Launcher::LaunchUriForResultsAsync(const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options, const Windows::Foundation::Collections::ValueSet & inputData)
{
    return get_activation_factory<Launcher, ILauncherStatics2>().LaunchUriForResultsAsync(uri, options, inputData);
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchUriAsync(const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options, const Windows::Foundation::Collections::ValueSet & inputData)
{
    return get_activation_factory<Launcher, ILauncherStatics2>().LaunchUriAsync(uri, options, inputData);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> Launcher::QueryUriSupportAsync(const Windows::Foundation::Uri & uri, Windows::System::LaunchQuerySupportType launchQuerySupportType)
{
    return get_activation_factory<Launcher, ILauncherStatics2>().QueryUriSupportAsync(uri, launchQuerySupportType);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> Launcher::QueryUriSupportAsync(const Windows::Foundation::Uri & uri, Windows::System::LaunchQuerySupportType launchQuerySupportType, hstring_ref packageFamilyName)
{
    return get_activation_factory<Launcher, ILauncherStatics2>().QueryUriSupportAsync(uri, launchQuerySupportType, packageFamilyName);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> Launcher::QueryFileSupportAsync(const Windows::Storage::StorageFile & file)
{
    return get_activation_factory<Launcher, ILauncherStatics2>().QueryFileSupportAsync(file);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> Launcher::QueryFileSupportAsync(const Windows::Storage::StorageFile & file, hstring_ref packageFamilyName)
{
    return get_activation_factory<Launcher, ILauncherStatics2>().QueryFileSupportAsync(file, packageFamilyName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> Launcher::FindUriSchemeHandlersAsync(hstring_ref scheme)
{
    return get_activation_factory<Launcher, ILauncherStatics2>().FindUriSchemeHandlersAsync(scheme);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> Launcher::FindUriSchemeHandlersAsync(hstring_ref scheme, Windows::System::LaunchQuerySupportType launchQuerySupportType)
{
    return get_activation_factory<Launcher, ILauncherStatics2>().FindUriSchemeHandlersAsync(scheme, launchQuerySupportType);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> Launcher::FindFileHandlersAsync(hstring_ref extension)
{
    return get_activation_factory<Launcher, ILauncherStatics2>().FindFileHandlersAsync(extension);
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchFolderAsync(const Windows::Storage::IStorageFolder & folder)
{
    return get_activation_factory<Launcher, ILauncherStatics3>().LaunchFolderAsync(folder);
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchFolderAsync(const Windows::Storage::IStorageFolder & folder, const Windows::System::FolderLauncherOptions & options)
{
    return get_activation_factory<Launcher, ILauncherStatics3>().LaunchFolderAsync(folder, options);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> Launcher::QueryAppUriSupportAsync(const Windows::Foundation::Uri & uri)
{
    return get_activation_factory<Launcher, ILauncherStatics4>().QueryAppUriSupportAsync(uri);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> Launcher::QueryAppUriSupportAsync(const Windows::Foundation::Uri & uri, hstring_ref packageFamilyName)
{
    return get_activation_factory<Launcher, ILauncherStatics4>().QueryAppUriSupportAsync(uri, packageFamilyName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> Launcher::FindAppUriHandlersAsync(const Windows::Foundation::Uri & uri)
{
    return get_activation_factory<Launcher, ILauncherStatics4>().FindAppUriHandlersAsync(uri);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus> Launcher::LaunchUriForUserAsync(const Windows::System::User & user, const Windows::Foundation::Uri & uri)
{
    return get_activation_factory<Launcher, ILauncherStatics4>().LaunchUriForUserAsync(user, uri);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus> Launcher::LaunchUriForUserAsync(const Windows::System::User & user, const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options)
{
    return get_activation_factory<Launcher, ILauncherStatics4>().LaunchUriForUserAsync(user, uri, options);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus> Launcher::LaunchUriForUserAsync(const Windows::System::User & user, const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options, const Windows::Foundation::Collections::ValueSet & inputData)
{
    return get_activation_factory<Launcher, ILauncherStatics4>().LaunchUriForUserAsync(user, uri, options, inputData);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> Launcher::LaunchUriForResultsForUserAsync(const Windows::System::User & user, const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options)
{
    return get_activation_factory<Launcher, ILauncherStatics4>().LaunchUriForResultsForUserAsync(user, uri, options);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> Launcher::LaunchUriForResultsForUserAsync(const Windows::System::User & user, const Windows::Foundation::Uri & uri, const Windows::System::LauncherOptions & options, const Windows::Foundation::Collections::ValueSet & inputData)
{
    return get_activation_factory<Launcher, ILauncherStatics4>().LaunchUriForResultsForUserAsync(user, uri, options, inputData);
}

inline LauncherOptions::LauncherOptions() :
    LauncherOptions(activate_instance<LauncherOptions>())
{}

inline uint64_t MemoryManager::AppMemoryUsage()
{
    return get_activation_factory<MemoryManager, IMemoryManagerStatics>().AppMemoryUsage();
}

inline uint64_t MemoryManager::AppMemoryUsageLimit()
{
    return get_activation_factory<MemoryManager, IMemoryManagerStatics>().AppMemoryUsageLimit();
}

inline Windows::System::AppMemoryUsageLevel MemoryManager::AppMemoryUsageLevel()
{
    return get_activation_factory<MemoryManager, IMemoryManagerStatics>().AppMemoryUsageLevel();
}

inline event_token MemoryManager::AppMemoryUsageIncreased(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MemoryManager, IMemoryManagerStatics>().AppMemoryUsageIncreased(handler);
}

inline factory_event_revoker<IMemoryManagerStatics> MemoryManager::AppMemoryUsageIncreased(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MemoryManager, IMemoryManagerStatics>();
    return { factory, &ABI::Windows::System::IMemoryManagerStatics::remove_AppMemoryUsageIncreased, factory.AppMemoryUsageIncreased(handler) };
}

inline void MemoryManager::AppMemoryUsageIncreased(event_token token)
{
    get_activation_factory<MemoryManager, IMemoryManagerStatics>().AppMemoryUsageIncreased(token);
}

inline event_token MemoryManager::AppMemoryUsageDecreased(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MemoryManager, IMemoryManagerStatics>().AppMemoryUsageDecreased(handler);
}

inline factory_event_revoker<IMemoryManagerStatics> MemoryManager::AppMemoryUsageDecreased(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MemoryManager, IMemoryManagerStatics>();
    return { factory, &ABI::Windows::System::IMemoryManagerStatics::remove_AppMemoryUsageDecreased, factory.AppMemoryUsageDecreased(handler) };
}

inline void MemoryManager::AppMemoryUsageDecreased(event_token token)
{
    get_activation_factory<MemoryManager, IMemoryManagerStatics>().AppMemoryUsageDecreased(token);
}

inline event_token MemoryManager::AppMemoryUsageLimitChanging(const Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> & handler)
{
    return get_activation_factory<MemoryManager, IMemoryManagerStatics>().AppMemoryUsageLimitChanging(handler);
}

inline factory_event_revoker<IMemoryManagerStatics> MemoryManager::AppMemoryUsageLimitChanging(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> & handler)
{
    auto factory = get_activation_factory<MemoryManager, IMemoryManagerStatics>();
    return { factory, &ABI::Windows::System::IMemoryManagerStatics::remove_AppMemoryUsageLimitChanging, factory.AppMemoryUsageLimitChanging(handler) };
}

inline void MemoryManager::AppMemoryUsageLimitChanging(event_token token)
{
    get_activation_factory<MemoryManager, IMemoryManagerStatics>().AppMemoryUsageLimitChanging(token);
}

inline Windows::System::AppMemoryReport MemoryManager::GetAppMemoryReport()
{
    return get_activation_factory<MemoryManager, IMemoryManagerStatics2>().GetAppMemoryReport();
}

inline Windows::System::ProcessMemoryReport MemoryManager::GetProcessMemoryReport()
{
    return get_activation_factory<MemoryManager, IMemoryManagerStatics2>().GetProcessMemoryReport();
}

inline bool MemoryManager::TrySetAppMemoryUsageLimit(uint64_t value)
{
    return get_activation_factory<MemoryManager, IMemoryManagerStatics3>().TrySetAppMemoryUsageLimit(value);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> ProcessLauncher::RunToCompletionAsync(hstring_ref fileName, hstring_ref args)
{
    return get_activation_factory<ProcessLauncher, IProcessLauncherStatics>().RunToCompletionAsync(fileName, args);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> ProcessLauncher::RunToCompletionAsync(hstring_ref fileName, hstring_ref args, const Windows::System::ProcessLauncherOptions & options)
{
    return get_activation_factory<ProcessLauncher, IProcessLauncherStatics>().RunToCompletionAsync(fileName, args, options);
}

inline ProcessLauncherOptions::ProcessLauncherOptions() :
    ProcessLauncherOptions(activate_instance<ProcessLauncherOptions>())
{}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus> RemoteLauncher::LaunchUriAsync(const Windows::System::RemoteSystems::RemoteSystemConnectionRequest & remoteSystemConnectionRequest, const Windows::Foundation::Uri & uri)
{
    return get_activation_factory<RemoteLauncher, IRemoteLauncherStatics>().LaunchUriAsync(remoteSystemConnectionRequest, uri);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus> RemoteLauncher::LaunchUriAsync(const Windows::System::RemoteSystems::RemoteSystemConnectionRequest & remoteSystemConnectionRequest, const Windows::Foundation::Uri & uri, const Windows::System::RemoteLauncherOptions & options)
{
    return get_activation_factory<RemoteLauncher, IRemoteLauncherStatics>().LaunchUriAsync(remoteSystemConnectionRequest, uri, options);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus> RemoteLauncher::LaunchUriAsync(const Windows::System::RemoteSystems::RemoteSystemConnectionRequest & remoteSystemConnectionRequest, const Windows::Foundation::Uri & uri, const Windows::System::RemoteLauncherOptions & options, const Windows::Foundation::Collections::ValueSet & inputData)
{
    return get_activation_factory<RemoteLauncher, IRemoteLauncherStatics>().LaunchUriAsync(remoteSystemConnectionRequest, uri, options, inputData);
}

inline RemoteLauncherOptions::RemoteLauncherOptions() :
    RemoteLauncherOptions(activate_instance<RemoteLauncherOptions>())
{}

inline void ShutdownManager::BeginShutdown(Windows::System::ShutdownKind shutdownKind, const Windows::Foundation::TimeSpan & timeout)
{
    get_activation_factory<ShutdownManager, IShutdownManagerStatics>().BeginShutdown(shutdownKind, timeout);
}

inline void ShutdownManager::CancelShutdown()
{
    get_activation_factory<ShutdownManager, IShutdownManagerStatics>().CancelShutdown();
}

inline hstring TimeZoneSettings::CurrentTimeZoneDisplayName()
{
    return get_activation_factory<TimeZoneSettings, ITimeZoneSettingsStatics>().CurrentTimeZoneDisplayName();
}

inline Windows::Foundation::Collections::IVectorView<hstring> TimeZoneSettings::SupportedTimeZoneDisplayNames()
{
    return get_activation_factory<TimeZoneSettings, ITimeZoneSettingsStatics>().SupportedTimeZoneDisplayNames();
}

inline bool TimeZoneSettings::CanChangeTimeZone()
{
    return get_activation_factory<TimeZoneSettings, ITimeZoneSettingsStatics>().CanChangeTimeZone();
}

inline void TimeZoneSettings::ChangeTimeZoneByDisplayName(hstring_ref timeZoneDisplayName)
{
    get_activation_factory<TimeZoneSettings, ITimeZoneSettingsStatics>().ChangeTimeZoneByDisplayName(timeZoneDisplayName);
}

inline Windows::System::UserWatcher User::CreateWatcher()
{
    return get_activation_factory<User, IUserStatics>().CreateWatcher();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> User::FindAllAsync()
{
    return get_activation_factory<User, IUserStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> User::FindAllAsync(Windows::System::UserType type)
{
    return get_activation_factory<User, IUserStatics>().FindAllAsync(type);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> User::FindAllAsync(Windows::System::UserType type, Windows::System::UserAuthenticationStatus status)
{
    return get_activation_factory<User, IUserStatics>().FindAllAsync(type, status);
}

inline Windows::System::User User::GetFromId(hstring_ref nonRoamableId)
{
    return get_activation_factory<User, IUserStatics>().GetFromId(nonRoamableId);
}

inline Windows::System::User UserDeviceAssociation::FindUserFromDeviceId(hstring_ref deviceId)
{
    return get_activation_factory<UserDeviceAssociation, IUserDeviceAssociationStatics>().FindUserFromDeviceId(deviceId);
}

inline event_token UserDeviceAssociation::UserDeviceAssociationChanged(const Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> & handler)
{
    return get_activation_factory<UserDeviceAssociation, IUserDeviceAssociationStatics>().UserDeviceAssociationChanged(handler);
}

inline factory_event_revoker<IUserDeviceAssociationStatics> UserDeviceAssociation::UserDeviceAssociationChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> & handler)
{
    auto factory = get_activation_factory<UserDeviceAssociation, IUserDeviceAssociationStatics>();
    return { factory, &ABI::Windows::System::IUserDeviceAssociationStatics::remove_UserDeviceAssociationChanged, factory.UserDeviceAssociationChanged(handler) };
}

inline void UserDeviceAssociation::UserDeviceAssociationChanged(event_token token)
{
    get_activation_factory<UserDeviceAssociation, IUserDeviceAssociationStatics>().UserDeviceAssociationChanged(token);
}

inline UserPicker::UserPicker() :
    UserPicker(activate_instance<UserPicker>())
{}

inline bool UserPicker::IsSupported()
{
    return get_activation_factory<UserPicker, IUserPickerStatics>().IsSupported();
}

}

}
