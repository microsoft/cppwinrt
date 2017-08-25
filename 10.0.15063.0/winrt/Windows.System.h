// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Search.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.RemoteSystems.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.UI.ViewManagement.2.h"
#include "winrt/impl/Windows.System.2.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::AppInfo consume_Windows_System_IAppDiagnosticInfo<D>::AppInfo() const
{
    Windows::ApplicationModel::AppInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IAppDiagnosticInfo)->get_AppInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>> consume_Windows_System_IAppDiagnosticInfoStatics<D>::RequestInfoAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IAppDiagnosticInfoStatics)->RequestInfoAsync(put_abi(operation)));
    return operation;
}

template <typename D> uint64_t consume_Windows_System_IAppMemoryReport<D>::PrivateCommitUsage() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::IAppMemoryReport)->get_PrivateCommitUsage(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_IAppMemoryReport<D>::PeakPrivateCommitUsage() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::IAppMemoryReport)->get_PeakPrivateCommitUsage(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_IAppMemoryReport<D>::TotalCommitUsage() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::IAppMemoryReport)->get_TotalCommitUsage(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_IAppMemoryReport<D>::TotalCommitLimit() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::IAppMemoryReport)->get_TotalCommitLimit(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_IAppMemoryUsageLimitChangingEventArgs<D>::OldLimit() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::IAppMemoryUsageLimitChangingEventArgs)->get_OldLimit(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_IAppMemoryUsageLimitChangingEventArgs<D>::NewLimit() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::IAppMemoryUsageLimitChangingEventArgs)->get_NewLimit(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Storage::IStorageItem> consume_Windows_System_IFolderLauncherOptions<D>::ItemsToSelect() const
{
    Windows::Foundation::Collections::IVector<Windows::Storage::IStorageItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IFolderLauncherOptions)->get_ItemsToSelect(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_IKnownUserPropertiesStatics<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_IKnownUserPropertiesStatics<D>::FirstName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_FirstName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_IKnownUserPropertiesStatics<D>::LastName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_LastName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_IKnownUserPropertiesStatics<D>::ProviderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_ProviderName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_IKnownUserPropertiesStatics<D>::AccountName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_AccountName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_IKnownUserPropertiesStatics<D>::GuestHost() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_GuestHost(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_IKnownUserPropertiesStatics<D>::PrincipalName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_PrincipalName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_IKnownUserPropertiesStatics<D>::DomainName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_DomainName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_IKnownUserPropertiesStatics<D>::SessionInitiationProtocolUri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_SessionInitiationProtocolUri(put_abi(value)));
    return value;
}

template <typename D> Windows::System::LaunchUriStatus consume_Windows_System_ILaunchUriResult<D>::Status() const
{
    Windows::System::LaunchUriStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::ILaunchUriResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_System_ILaunchUriResult<D>::Result() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILaunchUriResult)->get_Result(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_System_ILauncherOptions<D>::TreatAsUntrusted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions)->get_TreatAsUntrusted(&value));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherOptions<D>::TreatAsUntrusted(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions)->put_TreatAsUntrusted(value));
}

template <typename D> bool consume_Windows_System_ILauncherOptions<D>::DisplayApplicationPicker() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions)->get_DisplayApplicationPicker(&value));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherOptions<D>::DisplayApplicationPicker(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions)->put_DisplayApplicationPicker(value));
}

template <typename D> Windows::System::LauncherUIOptions consume_Windows_System_ILauncherOptions<D>::UI() const
{
    Windows::System::LauncherUIOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions)->get_UI(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_ILauncherOptions<D>::PreferredApplicationPackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions)->get_PreferredApplicationPackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherOptions<D>::PreferredApplicationPackageFamilyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions)->put_PreferredApplicationPackageFamilyName(get_abi(value)));
}

template <typename D> hstring consume_Windows_System_ILauncherOptions<D>::PreferredApplicationDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions)->get_PreferredApplicationDisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherOptions<D>::PreferredApplicationDisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions)->put_PreferredApplicationDisplayName(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_System_ILauncherOptions<D>::FallbackUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions)->get_FallbackUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherOptions<D>::FallbackUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions)->put_FallbackUri(get_abi(value)));
}

template <typename D> hstring consume_Windows_System_ILauncherOptions<D>::ContentType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions)->get_ContentType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherOptions<D>::ContentType(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions)->put_ContentType(get_abi(value)));
}

template <typename D> hstring consume_Windows_System_ILauncherOptions2<D>::TargetApplicationPackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions2)->get_TargetApplicationPackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherOptions2<D>::TargetApplicationPackageFamilyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions2)->put_TargetApplicationPackageFamilyName(get_abi(value)));
}

template <typename D> Windows::Storage::Search::StorageFileQueryResult consume_Windows_System_ILauncherOptions2<D>::NeighboringFilesQuery() const
{
    Windows::Storage::Search::StorageFileQueryResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions2)->get_NeighboringFilesQuery(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherOptions2<D>::NeighboringFilesQuery(Windows::Storage::Search::StorageFileQueryResult const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions2)->put_NeighboringFilesQuery(get_abi(value)));
}

template <typename D> bool consume_Windows_System_ILauncherOptions3<D>::IgnoreAppUriHandlers() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions3)->get_IgnoreAppUriHandlers(&value));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherOptions3<D>::IgnoreAppUriHandlers(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions3)->put_IgnoreAppUriHandlers(value));
}

template <typename D> bool consume_Windows_System_ILauncherOptions4<D>::LimitPickerToCurrentAppAndAppUriHandlers() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions4)->get_LimitPickerToCurrentAppAndAppUriHandlers(&value));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherOptions4<D>::LimitPickerToCurrentAppAndAppUriHandlers(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherOptions4)->put_LimitPickerToCurrentAppAndAppUriHandlers(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_ILauncherStatics<D>::LaunchFileAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics)->LaunchFileAsync(get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_ILauncherStatics<D>::LaunchFileAsync(Windows::Storage::IStorageFile const& file, Windows::System::LauncherOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics)->LaunchFileWithOptionsAsync(get_abi(file), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_ILauncherStatics<D>::LaunchUriAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics)->LaunchUriAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_ILauncherStatics<D>::LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics)->LaunchUriWithOptionsAsync(get_abi(uri), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> consume_Windows_System_ILauncherStatics2<D>::LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics2)->LaunchUriForResultsAsync(get_abi(uri), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> consume_Windows_System_ILauncherStatics2<D>::LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics2)->LaunchUriForResultsWithDataAsync(get_abi(uri), get_abi(options), get_abi(inputData), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_ILauncherStatics2<D>::LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics2)->LaunchUriWithDataAsync(get_abi(uri), get_abi(options), get_abi(inputData), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> consume_Windows_System_ILauncherStatics2<D>::QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics2)->QueryUriSupportAsync(get_abi(uri), get_abi(launchQuerySupportType), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> consume_Windows_System_ILauncherStatics2<D>::QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType, param::hstring const& packageFamilyName) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics2)->QueryUriSupportWithPackageFamilyNameAsync(get_abi(uri), get_abi(launchQuerySupportType), get_abi(packageFamilyName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> consume_Windows_System_ILauncherStatics2<D>::QueryFileSupportAsync(Windows::Storage::StorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics2)->QueryFileSupportAsync(get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> consume_Windows_System_ILauncherStatics2<D>::QueryFileSupportAsync(Windows::Storage::StorageFile const& file, param::hstring const& packageFamilyName) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics2)->QueryFileSupportWithPackageFamilyNameAsync(get_abi(file), get_abi(packageFamilyName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> consume_Windows_System_ILauncherStatics2<D>::FindUriSchemeHandlersAsync(param::hstring const& scheme) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics2)->FindUriSchemeHandlersAsync(get_abi(scheme), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> consume_Windows_System_ILauncherStatics2<D>::FindUriSchemeHandlersAsync(param::hstring const& scheme, Windows::System::LaunchQuerySupportType const& launchQuerySupportType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics2)->FindUriSchemeHandlersWithLaunchUriTypeAsync(get_abi(scheme), get_abi(launchQuerySupportType), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> consume_Windows_System_ILauncherStatics2<D>::FindFileHandlersAsync(param::hstring const& extension) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics2)->FindFileHandlersAsync(get_abi(extension), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_ILauncherStatics3<D>::LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics3)->LaunchFolderAsync(get_abi(folder), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_ILauncherStatics3<D>::LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder, Windows::System::FolderLauncherOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics3)->LaunchFolderWithOptionsAsync(get_abi(folder), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> consume_Windows_System_ILauncherStatics4<D>::QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics4)->QueryAppUriSupportAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> consume_Windows_System_ILauncherStatics4<D>::QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri, param::hstring const& packageFamilyName) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics4)->QueryAppUriSupportWithPackageFamilyNameAsync(get_abi(uri), get_abi(packageFamilyName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> consume_Windows_System_ILauncherStatics4<D>::FindAppUriHandlersAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics4)->FindAppUriHandlersAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> consume_Windows_System_ILauncherStatics4<D>::LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics4)->LaunchUriForUserAsync(get_abi(user), get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> consume_Windows_System_ILauncherStatics4<D>::LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics4)->LaunchUriWithOptionsForUserAsync(get_abi(user), get_abi(uri), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> consume_Windows_System_ILauncherStatics4<D>::LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics4)->LaunchUriWithDataForUserAsync(get_abi(user), get_abi(uri), get_abi(options), get_abi(inputData), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> consume_Windows_System_ILauncherStatics4<D>::LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics4)->LaunchUriForResultsForUserAsync(get_abi(user), get_abi(uri), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> consume_Windows_System_ILauncherStatics4<D>::LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherStatics4)->LaunchUriForResultsWithDataForUserAsync(get_abi(user), get_abi(uri), get_abi(options), get_abi(inputData), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Point> consume_Windows_System_ILauncherUIOptions<D>::InvocationPoint() const
{
    Windows::Foundation::IReference<Windows::Foundation::Point> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherUIOptions)->get_InvocationPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherUIOptions<D>::InvocationPoint(optional<Windows::Foundation::Point> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherUIOptions)->put_InvocationPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Rect> consume_Windows_System_ILauncherUIOptions<D>::SelectionRect() const
{
    Windows::Foundation::IReference<Windows::Foundation::Rect> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ILauncherUIOptions)->get_SelectionRect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherUIOptions<D>::SelectionRect(optional<Windows::Foundation::Rect> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherUIOptions)->put_SelectionRect(get_abi(value)));
}

template <typename D> Windows::UI::Popups::Placement consume_Windows_System_ILauncherUIOptions<D>::PreferredPlacement() const
{
    Windows::UI::Popups::Placement value{};
    check_hresult(WINRT_SHIM(Windows::System::ILauncherUIOptions)->get_PreferredPlacement(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherUIOptions<D>::PreferredPlacement(Windows::UI::Popups::Placement const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherUIOptions)->put_PreferredPlacement(get_abi(value)));
}

template <typename D> Windows::UI::ViewManagement::ViewSizePreference consume_Windows_System_ILauncherViewOptions<D>::DesiredRemainingView() const
{
    Windows::UI::ViewManagement::ViewSizePreference value{};
    check_hresult(WINRT_SHIM(Windows::System::ILauncherViewOptions)->get_DesiredRemainingView(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_ILauncherViewOptions<D>::DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::ILauncherViewOptions)->put_DesiredRemainingView(get_abi(value)));
}

template <typename D> uint64_t consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsage() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::IMemoryManagerStatics)->get_AppMemoryUsage(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageLimit() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::IMemoryManagerStatics)->get_AppMemoryUsageLimit(&value));
    return value;
}

template <typename D> Windows::System::AppMemoryUsageLevel consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageLevel() const
{
    Windows::System::AppMemoryUsageLevel value{};
    check_hresult(WINRT_SHIM(Windows::System::IMemoryManagerStatics)->get_AppMemoryUsageLevel(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::IMemoryManagerStatics)->add_AppMemoryUsageIncreased(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::IMemoryManagerStatics> consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::IMemoryManagerStatics>(this, &abi_t<Windows::System::IMemoryManagerStatics>::remove_AppMemoryUsageIncreased, AppMemoryUsageIncreased(handler));
}

template <typename D> void consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageIncreased(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::IMemoryManagerStatics)->remove_AppMemoryUsageIncreased(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageDecreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::IMemoryManagerStatics)->add_AppMemoryUsageDecreased(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::IMemoryManagerStatics> consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageDecreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::IMemoryManagerStatics>(this, &abi_t<Windows::System::IMemoryManagerStatics>::remove_AppMemoryUsageDecreased, AppMemoryUsageDecreased(handler));
}

template <typename D> void consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageDecreased(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::IMemoryManagerStatics)->remove_AppMemoryUsageDecreased(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageLimitChanging(Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::IMemoryManagerStatics)->add_AppMemoryUsageLimitChanging(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::IMemoryManagerStatics> consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageLimitChanging(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::IMemoryManagerStatics>(this, &abi_t<Windows::System::IMemoryManagerStatics>::remove_AppMemoryUsageLimitChanging, AppMemoryUsageLimitChanging(handler));
}

template <typename D> void consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageLimitChanging(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::IMemoryManagerStatics)->remove_AppMemoryUsageLimitChanging(get_abi(token)));
}

template <typename D> Windows::System::AppMemoryReport consume_Windows_System_IMemoryManagerStatics2<D>::GetAppMemoryReport() const
{
    Windows::System::AppMemoryReport memoryReport{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IMemoryManagerStatics2)->GetAppMemoryReport(put_abi(memoryReport)));
    return memoryReport;
}

template <typename D> Windows::System::ProcessMemoryReport consume_Windows_System_IMemoryManagerStatics2<D>::GetProcessMemoryReport() const
{
    Windows::System::ProcessMemoryReport memoryReport{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IMemoryManagerStatics2)->GetProcessMemoryReport(put_abi(memoryReport)));
    return memoryReport;
}

template <typename D> bool consume_Windows_System_IMemoryManagerStatics3<D>::TrySetAppMemoryUsageLimit(uint64_t value) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::System::IMemoryManagerStatics3)->TrySetAppMemoryUsageLimit(value, &result));
    return result;
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_System_IProcessLauncherOptions<D>::StandardInput() const
{
    Windows::Storage::Streams::IInputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IProcessLauncherOptions)->get_StandardInput(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_IProcessLauncherOptions<D>::StandardInput(Windows::Storage::Streams::IInputStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::IProcessLauncherOptions)->put_StandardInput(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_System_IProcessLauncherOptions<D>::StandardOutput() const
{
    Windows::Storage::Streams::IOutputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IProcessLauncherOptions)->get_StandardOutput(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_IProcessLauncherOptions<D>::StandardOutput(Windows::Storage::Streams::IOutputStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::IProcessLauncherOptions)->put_StandardOutput(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_System_IProcessLauncherOptions<D>::StandardError() const
{
    Windows::Storage::Streams::IOutputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IProcessLauncherOptions)->get_StandardError(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_IProcessLauncherOptions<D>::StandardError(Windows::Storage::Streams::IOutputStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::IProcessLauncherOptions)->put_StandardError(get_abi(value)));
}

template <typename D> hstring consume_Windows_System_IProcessLauncherOptions<D>::WorkingDirectory() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::IProcessLauncherOptions)->get_WorkingDirectory(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_IProcessLauncherOptions<D>::WorkingDirectory(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::IProcessLauncherOptions)->put_WorkingDirectory(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_System_IProcessLauncherResult<D>::ExitCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::IProcessLauncherResult)->get_ExitCode(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> consume_Windows_System_IProcessLauncherStatics<D>::RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> asyncOperationResult{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IProcessLauncherStatics)->RunToCompletionAsync(get_abi(fileName), get_abi(args), put_abi(asyncOperationResult)));
    return asyncOperationResult;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> consume_Windows_System_IProcessLauncherStatics<D>::RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args, Windows::System::ProcessLauncherOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> asyncOperationResult{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IProcessLauncherStatics)->RunToCompletionAsyncWithOptions(get_abi(fileName), get_abi(args), get_abi(options), put_abi(asyncOperationResult)));
    return asyncOperationResult;
}

template <typename D> uint64_t consume_Windows_System_IProcessMemoryReport<D>::PrivateWorkingSetUsage() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::IProcessMemoryReport)->get_PrivateWorkingSetUsage(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_IProcessMemoryReport<D>::TotalWorkingSetUsage() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::IProcessMemoryReport)->get_TotalWorkingSetUsage(&value));
    return value;
}

template <typename D> void consume_Windows_System_IProtocolForResultsOperation<D>::ReportCompleted(Windows::Foundation::Collections::ValueSet const& data) const
{
    check_hresult(WINRT_SHIM(Windows::System::IProtocolForResultsOperation)->ReportCompleted(get_abi(data)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_System_IRemoteLauncherOptions<D>::FallbackUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IRemoteLauncherOptions)->get_FallbackUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_IRemoteLauncherOptions<D>::FallbackUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::IRemoteLauncherOptions)->put_FallbackUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_System_IRemoteLauncherOptions<D>::PreferredAppIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IRemoteLauncherOptions)->get_PreferredAppIds(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> consume_Windows_System_IRemoteLauncherStatics<D>::LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IRemoteLauncherStatics)->LaunchUriAsync(get_abi(remoteSystemConnectionRequest), get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> consume_Windows_System_IRemoteLauncherStatics<D>::LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IRemoteLauncherStatics)->LaunchUriWithOptionsAsync(get_abi(remoteSystemConnectionRequest), get_abi(uri), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> consume_Windows_System_IRemoteLauncherStatics<D>::LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IRemoteLauncherStatics)->LaunchUriWithDataAsync(get_abi(remoteSystemConnectionRequest), get_abi(uri), get_abi(options), get_abi(inputData), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_System_IShutdownManagerStatics<D>::BeginShutdown(Windows::System::ShutdownKind const& shutdownKind, Windows::Foundation::TimeSpan const& timeout) const
{
    check_hresult(WINRT_SHIM(Windows::System::IShutdownManagerStatics)->BeginShutdown(get_abi(shutdownKind), get_abi(timeout)));
}

template <typename D> void consume_Windows_System_IShutdownManagerStatics<D>::CancelShutdown() const
{
    check_hresult(WINRT_SHIM(Windows::System::IShutdownManagerStatics)->CancelShutdown());
}

template <typename D> bool consume_Windows_System_IShutdownManagerStatics2<D>::IsPowerStateSupported(Windows::System::PowerState const& powerState) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::IShutdownManagerStatics2)->IsPowerStateSupported(get_abi(powerState), &value));
    return value;
}

template <typename D> void consume_Windows_System_IShutdownManagerStatics2<D>::EnterPowerState(Windows::System::PowerState const& powerState) const
{
    check_hresult(WINRT_SHIM(Windows::System::IShutdownManagerStatics2)->EnterPowerState(get_abi(powerState)));
}

template <typename D> void consume_Windows_System_IShutdownManagerStatics2<D>::EnterPowerState(Windows::System::PowerState const& powerState, Windows::Foundation::TimeSpan const& wakeUpAfter) const
{
    check_hresult(WINRT_SHIM(Windows::System::IShutdownManagerStatics2)->EnterPowerStateWithTimeSpan(get_abi(powerState), get_abi(wakeUpAfter)));
}

template <typename D> hstring consume_Windows_System_ITimeZoneSettingsStatics<D>::CurrentTimeZoneDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::ITimeZoneSettingsStatics)->get_CurrentTimeZoneDisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_System_ITimeZoneSettingsStatics<D>::SupportedTimeZoneDisplayNames() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::ITimeZoneSettingsStatics)->get_SupportedTimeZoneDisplayNames(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_System_ITimeZoneSettingsStatics<D>::CanChangeTimeZone() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::ITimeZoneSettingsStatics)->get_CanChangeTimeZone(&value));
    return value;
}

template <typename D> void consume_Windows_System_ITimeZoneSettingsStatics<D>::ChangeTimeZoneByDisplayName(param::hstring const& timeZoneDisplayName) const
{
    check_hresult(WINRT_SHIM(Windows::System::ITimeZoneSettingsStatics)->ChangeTimeZoneByDisplayName(get_abi(timeZoneDisplayName)));
}

template <typename D> hstring consume_Windows_System_IUser<D>::NonRoamableId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::IUser)->get_NonRoamableId(put_abi(value)));
    return value;
}

template <typename D> Windows::System::UserAuthenticationStatus consume_Windows_System_IUser<D>::AuthenticationStatus() const
{
    Windows::System::UserAuthenticationStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::IUser)->get_AuthenticationStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::System::UserType consume_Windows_System_IUser<D>::Type() const
{
    Windows::System::UserType value{};
    check_hresult(WINRT_SHIM(Windows::System::IUser)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable> consume_Windows_System_IUser<D>::GetPropertyAsync(param::hstring const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUser)->GetPropertyAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet> consume_Windows_System_IUser<D>::GetPropertiesAsync(param::async_vector_view<hstring> const& values) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUser)->GetPropertiesAsync(get_abi(values), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> consume_Windows_System_IUser<D>::GetPictureAsync(Windows::System::UserPictureSize const& desiredSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUser)->GetPictureAsync(get_abi(desiredSize), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_System_IUserAuthenticationStatusChangeDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::System::IUserAuthenticationStatusChangeDeferral)->Complete());
}

template <typename D> Windows::System::UserAuthenticationStatusChangeDeferral consume_Windows_System_IUserAuthenticationStatusChangingEventArgs<D>::GetDeferral() const
{
    Windows::System::UserAuthenticationStatusChangeDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUserAuthenticationStatusChangingEventArgs)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> Windows::System::User consume_Windows_System_IUserAuthenticationStatusChangingEventArgs<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUserAuthenticationStatusChangingEventArgs)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::System::UserAuthenticationStatus consume_Windows_System_IUserAuthenticationStatusChangingEventArgs<D>::NewStatus() const
{
    Windows::System::UserAuthenticationStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::IUserAuthenticationStatusChangingEventArgs)->get_NewStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::System::UserAuthenticationStatus consume_Windows_System_IUserAuthenticationStatusChangingEventArgs<D>::CurrentStatus() const
{
    Windows::System::UserAuthenticationStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::IUserAuthenticationStatusChangingEventArgs)->get_CurrentStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_System_IUserChangedEventArgs<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUserChangedEventArgs)->get_User(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_IUserDeviceAssociationChangedEventArgs<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::IUserDeviceAssociationChangedEventArgs)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_System_IUserDeviceAssociationChangedEventArgs<D>::NewUser() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUserDeviceAssociationChangedEventArgs)->get_NewUser(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_System_IUserDeviceAssociationChangedEventArgs<D>::OldUser() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUserDeviceAssociationChangedEventArgs)->get_OldUser(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_System_IUserDeviceAssociationStatics<D>::FindUserFromDeviceId(param::hstring const& deviceId) const
{
    Windows::System::User user{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUserDeviceAssociationStatics)->FindUserFromDeviceId(get_abi(deviceId), put_abi(user)));
    return user;
}

template <typename D> event_token consume_Windows_System_IUserDeviceAssociationStatics<D>::UserDeviceAssociationChanged(Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::IUserDeviceAssociationStatics)->add_UserDeviceAssociationChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::IUserDeviceAssociationStatics> consume_Windows_System_IUserDeviceAssociationStatics<D>::UserDeviceAssociationChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::IUserDeviceAssociationStatics>(this, &abi_t<Windows::System::IUserDeviceAssociationStatics>::remove_UserDeviceAssociationChanged, UserDeviceAssociationChanged(handler));
}

template <typename D> void consume_Windows_System_IUserDeviceAssociationStatics<D>::UserDeviceAssociationChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::IUserDeviceAssociationStatics)->remove_UserDeviceAssociationChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_System_IUserPicker<D>::AllowGuestAccounts() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::IUserPicker)->get_AllowGuestAccounts(&value));
    return value;
}

template <typename D> void consume_Windows_System_IUserPicker<D>::AllowGuestAccounts(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::System::IUserPicker)->put_AllowGuestAccounts(value));
}

template <typename D> Windows::System::User consume_Windows_System_IUserPicker<D>::SuggestedSelectedUser() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUserPicker)->get_SuggestedSelectedUser(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_IUserPicker<D>::SuggestedSelectedUser(Windows::System::User const& value) const
{
    check_hresult(WINRT_SHIM(Windows::System::IUserPicker)->put_SuggestedSelectedUser(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::User> consume_Windows_System_IUserPicker<D>::PickSingleUserAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::System::User> pickSingleUserOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUserPicker)->PickSingleUserAsync(put_abi(pickSingleUserOperation)));
    return pickSingleUserOperation;
}

template <typename D> bool consume_Windows_System_IUserPickerStatics<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::IUserPickerStatics)->IsSupported(&value));
    return value;
}

template <typename D> Windows::System::UserWatcher consume_Windows_System_IUserStatics<D>::CreateWatcher() const
{
    Windows::System::UserWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUserStatics)->CreateWatcher(put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> consume_Windows_System_IUserStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUserStatics)->FindAllAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> consume_Windows_System_IUserStatics<D>::FindAllAsync(Windows::System::UserType const& type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUserStatics)->FindAllAsyncByType(get_abi(type), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> consume_Windows_System_IUserStatics<D>::FindAllAsync(Windows::System::UserType const& type, Windows::System::UserAuthenticationStatus const& status) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUserStatics)->FindAllAsyncByTypeAndStatus(get_abi(type), get_abi(status), put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::User consume_Windows_System_IUserStatics<D>::GetFromId(param::hstring const& nonRoamableId) const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::IUserStatics)->GetFromId(get_abi(nonRoamableId), put_abi(value)));
    return value;
}

template <typename D> Windows::System::UserWatcherStatus consume_Windows_System_IUserWatcher<D>::Status() const
{
    Windows::System::UserWatcherStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_IUserWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->Start());
}

template <typename D> void consume_Windows_System_IUserWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->Stop());
}

template <typename D> event_token consume_Windows_System_IUserWatcher<D>::Added(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->add_Added(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::IUserWatcher> consume_Windows_System_IUserWatcher<D>::Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::IUserWatcher>(this, &abi_t<Windows::System::IUserWatcher>::remove_Added, Added(handler));
}

template <typename D> void consume_Windows_System_IUserWatcher<D>::Added(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->remove_Added(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_IUserWatcher<D>::Removed(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->add_Removed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::IUserWatcher> consume_Windows_System_IUserWatcher<D>::Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::IUserWatcher>(this, &abi_t<Windows::System::IUserWatcher>::remove_Removed, Removed(handler));
}

template <typename D> void consume_Windows_System_IUserWatcher<D>::Removed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->remove_Removed(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_IUserWatcher<D>::Updated(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->add_Updated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::IUserWatcher> consume_Windows_System_IUserWatcher<D>::Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::IUserWatcher>(this, &abi_t<Windows::System::IUserWatcher>::remove_Updated, Updated(handler));
}

template <typename D> void consume_Windows_System_IUserWatcher<D>::Updated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->remove_Updated(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanged(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->add_AuthenticationStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::IUserWatcher> consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::IUserWatcher>(this, &abi_t<Windows::System::IUserWatcher>::remove_AuthenticationStatusChanged, AuthenticationStatusChanged(handler));
}

template <typename D> void consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->remove_AuthenticationStatusChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanging(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->add_AuthenticationStatusChanging(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::IUserWatcher> consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::IUserWatcher>(this, &abi_t<Windows::System::IUserWatcher>::remove_AuthenticationStatusChanging, AuthenticationStatusChanging(handler));
}

template <typename D> void consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanging(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->remove_AuthenticationStatusChanging(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_IUserWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::IUserWatcher> consume_Windows_System_IUserWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::IUserWatcher>(this, &abi_t<Windows::System::IUserWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_System_IUserWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_IUserWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::IUserWatcher> consume_Windows_System_IUserWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::IUserWatcher>(this, &abi_t<Windows::System::IUserWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_System_IUserWatcher<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::IUserWatcher)->remove_Stopped(get_abi(token)));
}

template <typename D>
struct produce<D, Windows::System::IAppDiagnosticInfo> : produce_base<D, Windows::System::IAppDiagnosticInfo>
{
    HRESULT __stdcall get_AppInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppInfo());
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
struct produce<D, Windows::System::IAppDiagnosticInfoStatics> : produce_base<D, Windows::System::IAppDiagnosticInfoStatics>
{
    HRESULT __stdcall RequestInfoAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestInfoAsync());
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
struct produce<D, Windows::System::IAppMemoryReport> : produce_base<D, Windows::System::IAppMemoryReport>
{
    HRESULT __stdcall get_PrivateCommitUsage(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrivateCommitUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeakPrivateCommitUsage(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PeakPrivateCommitUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalCommitUsage(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TotalCommitUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalCommitLimit(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TotalCommitLimit());
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
    HRESULT __stdcall get_OldLimit(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OldLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewLimit(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewLimit());
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
    HRESULT __stdcall get_ItemsToSelect(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemsToSelect());
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
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProviderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccountName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccountName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GuestHost(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GuestHost());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrincipalName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrincipalName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DomainName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DomainName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionInitiationProtocolUri(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionInitiationProtocolUri());
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
    HRESULT __stdcall get_Status(abi_t<Windows::System::LaunchUriStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Result(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Result());
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
    HRESULT __stdcall get_TreatAsUntrusted(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TreatAsUntrusted());
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
            typename D::abi_guard guard(this->shim());
            this->shim().TreatAsUntrusted(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayApplicationPicker(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayApplicationPicker());
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
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayApplicationPicker(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UI(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UI());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredApplicationPackageFamilyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreferredApplicationPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredApplicationPackageFamilyName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredApplicationPackageFamilyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredApplicationDisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreferredApplicationDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredApplicationDisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredApplicationDisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FallbackUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FallbackUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FallbackUri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FallbackUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentType(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentType(*reinterpret_cast<hstring const*>(&value));
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
    HRESULT __stdcall get_TargetApplicationPackageFamilyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetApplicationPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetApplicationPackageFamilyName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetApplicationPackageFamilyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NeighboringFilesQuery(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NeighboringFilesQuery());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NeighboringFilesQuery(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NeighboringFilesQuery(*reinterpret_cast<Windows::Storage::Search::StorageFileQueryResult const*>(&value));
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
    HRESULT __stdcall get_IgnoreAppUriHandlers(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IgnoreAppUriHandlers());
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
            typename D::abi_guard guard(this->shim());
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
struct produce<D, Windows::System::ILauncherOptions4> : produce_base<D, Windows::System::ILauncherOptions4>
{
    HRESULT __stdcall get_LimitPickerToCurrentAppAndAppUriHandlers(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LimitPickerToCurrentAppAndAppUriHandlers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LimitPickerToCurrentAppAndAppUriHandlers(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LimitPickerToCurrentAppAndAppUriHandlers(value);
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
    HRESULT __stdcall LaunchFileAsync(::IUnknown* file, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchFileWithOptionsAsync(::IUnknown* file, ::IUnknown* options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchUriAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchUriAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchUriWithOptionsAsync(::IUnknown* uri, ::IUnknown* options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchUriAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options)));
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
    HRESULT __stdcall LaunchUriForResultsAsync(::IUnknown* uri, ::IUnknown* options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchUriForResultsAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchUriForResultsWithDataAsync(::IUnknown* uri, ::IUnknown* options, ::IUnknown* inputData, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchUriForResultsAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&inputData)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchUriWithDataAsync(::IUnknown* uri, ::IUnknown* options, ::IUnknown* inputData, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchUriAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&inputData)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall QueryUriSupportAsync(::IUnknown* uri, abi_t<Windows::System::LaunchQuerySupportType> launchQuerySupportType, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().QueryUriSupportAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LaunchQuerySupportType const*>(&launchQuerySupportType)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall QueryUriSupportWithPackageFamilyNameAsync(::IUnknown* uri, abi_t<Windows::System::LaunchQuerySupportType> launchQuerySupportType, HSTRING packageFamilyName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().QueryUriSupportAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LaunchQuerySupportType const*>(&launchQuerySupportType), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall QueryFileSupportAsync(::IUnknown* file, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().QueryFileSupportAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall QueryFileSupportWithPackageFamilyNameAsync(::IUnknown* file, HSTRING packageFamilyName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().QueryFileSupportAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&file), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindUriSchemeHandlersAsync(HSTRING scheme, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindUriSchemeHandlersAsync(*reinterpret_cast<hstring const*>(&scheme)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindUriSchemeHandlersWithLaunchUriTypeAsync(HSTRING scheme, abi_t<Windows::System::LaunchQuerySupportType> launchQuerySupportType, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindUriSchemeHandlersAsync(*reinterpret_cast<hstring const*>(&scheme), *reinterpret_cast<Windows::System::LaunchQuerySupportType const*>(&launchQuerySupportType)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindFileHandlersAsync(HSTRING extension, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindFileHandlersAsync(*reinterpret_cast<hstring const*>(&extension)));
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
    HRESULT __stdcall LaunchFolderAsync(::IUnknown* folder, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchFolderAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&folder)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchFolderWithOptionsAsync(::IUnknown* folder, ::IUnknown* options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchFolderAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&folder), *reinterpret_cast<Windows::System::FolderLauncherOptions const*>(&options)));
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
    HRESULT __stdcall QueryAppUriSupportAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().QueryAppUriSupportAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall QueryAppUriSupportWithPackageFamilyNameAsync(::IUnknown* uri, HSTRING packageFamilyName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().QueryAppUriSupportAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAppUriHandlersAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAppUriHandlersAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchUriForUserAsync(::IUnknown* user, ::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchUriForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchUriWithOptionsForUserAsync(::IUnknown* user, ::IUnknown* uri, ::IUnknown* options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchUriForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchUriWithDataForUserAsync(::IUnknown* user, ::IUnknown* uri, ::IUnknown* options, ::IUnknown* inputData, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchUriForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&inputData)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchUriForResultsForUserAsync(::IUnknown* user, ::IUnknown* uri, ::IUnknown* options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchUriForResultsForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchUriForResultsWithDataForUserAsync(::IUnknown* user, ::IUnknown* uri, ::IUnknown* options, ::IUnknown* inputData, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchUriForResultsForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&inputData)));
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
    HRESULT __stdcall get_InvocationPoint(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InvocationPoint());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InvocationPoint(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InvocationPoint(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Point> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionRect(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectionRect());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectionRect(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectionRect(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Rect> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredPlacement(abi_t<Windows::UI::Popups::Placement>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreferredPlacement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredPlacement(abi_t<Windows::UI::Popups::Placement> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredPlacement(*reinterpret_cast<Windows::UI::Popups::Placement const*>(&value));
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
    HRESULT __stdcall get_DesiredRemainingView(abi_t<Windows::UI::ViewManagement::ViewSizePreference>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredRemainingView());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredRemainingView(abi_t<Windows::UI::ViewManagement::ViewSizePreference> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredRemainingView(*reinterpret_cast<Windows::UI::ViewManagement::ViewSizePreference const*>(&value));
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
    HRESULT __stdcall get_AppMemoryUsage(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppMemoryUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppMemoryUsageLimit(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppMemoryUsageLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppMemoryUsageLevel(abi_t<Windows::System::AppMemoryUsageLevel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppMemoryUsageLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AppMemoryUsageIncreased(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AppMemoryUsageIncreased(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AppMemoryUsageIncreased(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppMemoryUsageIncreased(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AppMemoryUsageDecreased(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AppMemoryUsageDecreased(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AppMemoryUsageDecreased(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppMemoryUsageDecreased(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AppMemoryUsageLimitChanging(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AppMemoryUsageLimitChanging(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AppMemoryUsageLimitChanging(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppMemoryUsageLimitChanging(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall GetAppMemoryReport(::IUnknown** memoryReport) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *memoryReport = detach_abi(this->shim().GetAppMemoryReport());
            return S_OK;
        }
        catch (...)
        {
            *memoryReport = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetProcessMemoryReport(::IUnknown** memoryReport) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *memoryReport = detach_abi(this->shim().GetProcessMemoryReport());
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
    HRESULT __stdcall TrySetAppMemoryUsageLimit(uint64_t value, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TrySetAppMemoryUsageLimit(value));
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
    HRESULT __stdcall get_StandardInput(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StandardInput());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StandardInput(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StandardInput(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StandardOutput(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StandardOutput());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StandardOutput(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StandardOutput(*reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StandardError(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StandardError());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StandardError(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StandardError(*reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WorkingDirectory(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WorkingDirectory());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WorkingDirectory(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WorkingDirectory(*reinterpret_cast<hstring const*>(&value));
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
    HRESULT __stdcall get_ExitCode(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitCode());
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
    HRESULT __stdcall RunToCompletionAsync(HSTRING fileName, HSTRING args, ::IUnknown** asyncOperationResult) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOperationResult = detach_abi(this->shim().RunToCompletionAsync(*reinterpret_cast<hstring const*>(&fileName), *reinterpret_cast<hstring const*>(&args)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperationResult = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RunToCompletionAsyncWithOptions(HSTRING fileName, HSTRING args, ::IUnknown* options, ::IUnknown** asyncOperationResult) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOperationResult = detach_abi(this->shim().RunToCompletionAsync(*reinterpret_cast<hstring const*>(&fileName), *reinterpret_cast<hstring const*>(&args), *reinterpret_cast<Windows::System::ProcessLauncherOptions const*>(&options)));
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
    HRESULT __stdcall get_PrivateWorkingSetUsage(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrivateWorkingSetUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalWorkingSetUsage(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TotalWorkingSetUsage());
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
    HRESULT __stdcall ReportCompleted(::IUnknown* data) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted(*reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&data));
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
    HRESULT __stdcall get_FallbackUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FallbackUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FallbackUri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FallbackUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredAppIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreferredAppIds());
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
    HRESULT __stdcall LaunchUriAsync(::IUnknown* remoteSystemConnectionRequest, ::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchUriAsync(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemConnectionRequest const*>(&remoteSystemConnectionRequest), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchUriWithOptionsAsync(::IUnknown* remoteSystemConnectionRequest, ::IUnknown* uri, ::IUnknown* options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchUriAsync(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemConnectionRequest const*>(&remoteSystemConnectionRequest), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::RemoteLauncherOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchUriWithDataAsync(::IUnknown* remoteSystemConnectionRequest, ::IUnknown* uri, ::IUnknown* options, ::IUnknown* inputData, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchUriAsync(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemConnectionRequest const*>(&remoteSystemConnectionRequest), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::RemoteLauncherOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&inputData)));
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
    HRESULT __stdcall BeginShutdown(abi_t<Windows::System::ShutdownKind> shutdownKind, abi_t<Windows::Foundation::TimeSpan> timeout) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginShutdown(*reinterpret_cast<Windows::System::ShutdownKind const*>(&shutdownKind), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeout));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CancelShutdown() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
struct produce<D, Windows::System::IShutdownManagerStatics2> : produce_base<D, Windows::System::IShutdownManagerStatics2>
{
    HRESULT __stdcall IsPowerStateSupported(abi_t<Windows::System::PowerState> powerState, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPowerStateSupported(*reinterpret_cast<Windows::System::PowerState const*>(&powerState)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnterPowerState(abi_t<Windows::System::PowerState> powerState) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnterPowerState(*reinterpret_cast<Windows::System::PowerState const*>(&powerState));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnterPowerStateWithTimeSpan(abi_t<Windows::System::PowerState> powerState, abi_t<Windows::Foundation::TimeSpan> wakeUpAfter) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnterPowerState(*reinterpret_cast<Windows::System::PowerState const*>(&powerState), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&wakeUpAfter));
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
    HRESULT __stdcall get_CurrentTimeZoneDisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentTimeZoneDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedTimeZoneDisplayNames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedTimeZoneDisplayNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanChangeTimeZone(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanChangeTimeZone());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ChangeTimeZoneByDisplayName(HSTRING timeZoneDisplayName) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChangeTimeZoneByDisplayName(*reinterpret_cast<hstring const*>(&timeZoneDisplayName));
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
    HRESULT __stdcall get_NonRoamableId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NonRoamableId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationStatus(abi_t<Windows::System::UserAuthenticationStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AuthenticationStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(abi_t<Windows::System::UserType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPropertyAsync(HSTRING value, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPropertyAsync(*reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPropertiesAsync(::IUnknown* values, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPropertiesAsync(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&values)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPictureAsync(abi_t<Windows::System::UserPictureSize> desiredSize, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPictureAsync(*reinterpret_cast<Windows::System::UserPictureSize const*>(&desiredSize)));
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
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall GetDeferral(::IUnknown** deferral) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deferral = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewStatus(abi_t<Windows::System::UserAuthenticationStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentStatus(abi_t<Windows::System::UserAuthenticationStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentStatus());
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
    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
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
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewUser(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewUser());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OldUser(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OldUser());
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
    HRESULT __stdcall FindUserFromDeviceId(HSTRING deviceId, ::IUnknown** user) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *user = detach_abi(this->shim().FindUserFromDeviceId(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *user = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UserDeviceAssociationChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UserDeviceAssociationChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UserDeviceAssociationChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserDeviceAssociationChanged(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall get_AllowGuestAccounts(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowGuestAccounts());
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
            typename D::abi_guard guard(this->shim());
            this->shim().AllowGuestAccounts(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedSelectedUser(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuggestedSelectedUser());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuggestedSelectedUser(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuggestedSelectedUser(*reinterpret_cast<Windows::System::User const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickSingleUserAsync(::IUnknown** pickSingleUserOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pickSingleUserOperation = detach_abi(this->shim().PickSingleUserAsync());
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
    HRESULT __stdcall IsSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSupported());
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
    HRESULT __stdcall CreateWatcher(::IUnknown** watcher) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *watcher = detach_abi(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsyncByType(abi_t<Windows::System::UserType> type, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAllAsync(*reinterpret_cast<Windows::System::UserType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsyncByTypeAndStatus(abi_t<Windows::System::UserType> type, abi_t<Windows::System::UserAuthenticationStatus> status, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAllAsync(*reinterpret_cast<Windows::System::UserType const*>(&type), *reinterpret_cast<Windows::System::UserAuthenticationStatus const*>(&status)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFromId(HSTRING nonRoamableId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetFromId(*reinterpret_cast<hstring const*>(&nonRoamableId)));
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
    HRESULT __stdcall get_Status(abi_t<Windows::System::UserWatcherStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Added(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Added(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Added(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Removed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Updated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Updated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Updated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AuthenticationStatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AuthenticationStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AuthenticationStatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AuthenticationStatusChanging(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AuthenticationStatusChanging(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AuthenticationStatusChanging(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationStatusChanging(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System {

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>> AppDiagnosticInfo::RequestInfoAsync()
{
    return get_activation_factory<AppDiagnosticInfo, Windows::System::IAppDiagnosticInfoStatics>().RequestInfoAsync();
}

inline FolderLauncherOptions::FolderLauncherOptions() :
    FolderLauncherOptions(activate_instance<FolderLauncherOptions>())
{}

inline hstring KnownUserProperties::DisplayName()
{
    return get_activation_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>().DisplayName();
}

inline hstring KnownUserProperties::FirstName()
{
    return get_activation_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>().FirstName();
}

inline hstring KnownUserProperties::LastName()
{
    return get_activation_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>().LastName();
}

inline hstring KnownUserProperties::ProviderName()
{
    return get_activation_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>().ProviderName();
}

inline hstring KnownUserProperties::AccountName()
{
    return get_activation_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>().AccountName();
}

inline hstring KnownUserProperties::GuestHost()
{
    return get_activation_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>().GuestHost();
}

inline hstring KnownUserProperties::PrincipalName()
{
    return get_activation_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>().PrincipalName();
}

inline hstring KnownUserProperties::DomainName()
{
    return get_activation_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>().DomainName();
}

inline hstring KnownUserProperties::SessionInitiationProtocolUri()
{
    return get_activation_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>().SessionInitiationProtocolUri();
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchFileAsync(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics>().LaunchFileAsync(file);
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchFileAsync(Windows::Storage::IStorageFile const& file, Windows::System::LauncherOptions const& options)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics>().LaunchFileAsync(file, options);
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchUriAsync(Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics>().LaunchUriAsync(uri);
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics>().LaunchUriAsync(uri, options);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> Launcher::LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics2>().LaunchUriForResultsAsync(uri, options);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> Launcher::LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics2>().LaunchUriForResultsAsync(uri, options, inputData);
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics2>().LaunchUriAsync(uri, options, inputData);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> Launcher::QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics2>().QueryUriSupportAsync(uri, launchQuerySupportType);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> Launcher::QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType, param::hstring const& packageFamilyName)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics2>().QueryUriSupportAsync(uri, launchQuerySupportType, packageFamilyName);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> Launcher::QueryFileSupportAsync(Windows::Storage::StorageFile const& file)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics2>().QueryFileSupportAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> Launcher::QueryFileSupportAsync(Windows::Storage::StorageFile const& file, param::hstring const& packageFamilyName)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics2>().QueryFileSupportAsync(file, packageFamilyName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> Launcher::FindUriSchemeHandlersAsync(param::hstring const& scheme)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics2>().FindUriSchemeHandlersAsync(scheme);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> Launcher::FindUriSchemeHandlersAsync(param::hstring const& scheme, Windows::System::LaunchQuerySupportType const& launchQuerySupportType)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics2>().FindUriSchemeHandlersAsync(scheme, launchQuerySupportType);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> Launcher::FindFileHandlersAsync(param::hstring const& extension)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics2>().FindFileHandlersAsync(extension);
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics3>().LaunchFolderAsync(folder);
}

inline Windows::Foundation::IAsyncOperation<bool> Launcher::LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder, Windows::System::FolderLauncherOptions const& options)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics3>().LaunchFolderAsync(folder, options);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> Launcher::QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics4>().QueryAppUriSupportAsync(uri);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> Launcher::QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri, param::hstring const& packageFamilyName)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics4>().QueryAppUriSupportAsync(uri, packageFamilyName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> Launcher::FindAppUriHandlersAsync(Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics4>().FindAppUriHandlersAsync(uri);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> Launcher::LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics4>().LaunchUriForUserAsync(user, uri);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> Launcher::LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics4>().LaunchUriForUserAsync(user, uri, options);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> Launcher::LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics4>().LaunchUriForUserAsync(user, uri, options, inputData);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> Launcher::LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics4>().LaunchUriForResultsForUserAsync(user, uri, options);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> Launcher::LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData)
{
    return get_activation_factory<Launcher, Windows::System::ILauncherStatics4>().LaunchUriForResultsForUserAsync(user, uri, options, inputData);
}

inline LauncherOptions::LauncherOptions() :
    LauncherOptions(activate_instance<LauncherOptions>())
{}

inline uint64_t MemoryManager::AppMemoryUsage()
{
    return get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>().AppMemoryUsage();
}

inline uint64_t MemoryManager::AppMemoryUsageLimit()
{
    return get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>().AppMemoryUsageLimit();
}

inline Windows::System::AppMemoryUsageLevel MemoryManager::AppMemoryUsageLevel()
{
    return get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>().AppMemoryUsageLevel();
}

inline event_token MemoryManager::AppMemoryUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>().AppMemoryUsageIncreased(handler);
}

inline factory_event_revoker<Windows::System::IMemoryManagerStatics> MemoryManager::AppMemoryUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>();
    return { factory, &abi_t<Windows::System::IMemoryManagerStatics>::remove_AppMemoryUsageIncreased, factory.AppMemoryUsageIncreased(handler) };
}

inline void MemoryManager::AppMemoryUsageIncreased(event_token const& token)
{
    get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>().AppMemoryUsageIncreased(token);
}

inline event_token MemoryManager::AppMemoryUsageDecreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>().AppMemoryUsageDecreased(handler);
}

inline factory_event_revoker<Windows::System::IMemoryManagerStatics> MemoryManager::AppMemoryUsageDecreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>();
    return { factory, &abi_t<Windows::System::IMemoryManagerStatics>::remove_AppMemoryUsageDecreased, factory.AppMemoryUsageDecreased(handler) };
}

inline void MemoryManager::AppMemoryUsageDecreased(event_token const& token)
{
    get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>().AppMemoryUsageDecreased(token);
}

inline event_token MemoryManager::AppMemoryUsageLimitChanging(Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler)
{
    return get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>().AppMemoryUsageLimitChanging(handler);
}

inline factory_event_revoker<Windows::System::IMemoryManagerStatics> MemoryManager::AppMemoryUsageLimitChanging(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler)
{
    auto factory = get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>();
    return { factory, &abi_t<Windows::System::IMemoryManagerStatics>::remove_AppMemoryUsageLimitChanging, factory.AppMemoryUsageLimitChanging(handler) };
}

inline void MemoryManager::AppMemoryUsageLimitChanging(event_token const& token)
{
    get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>().AppMemoryUsageLimitChanging(token);
}

inline Windows::System::AppMemoryReport MemoryManager::GetAppMemoryReport()
{
    return get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics2>().GetAppMemoryReport();
}

inline Windows::System::ProcessMemoryReport MemoryManager::GetProcessMemoryReport()
{
    return get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics2>().GetProcessMemoryReport();
}

inline bool MemoryManager::TrySetAppMemoryUsageLimit(uint64_t value)
{
    return get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics3>().TrySetAppMemoryUsageLimit(value);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> ProcessLauncher::RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args)
{
    return get_activation_factory<ProcessLauncher, Windows::System::IProcessLauncherStatics>().RunToCompletionAsync(fileName, args);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> ProcessLauncher::RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args, Windows::System::ProcessLauncherOptions const& options)
{
    return get_activation_factory<ProcessLauncher, Windows::System::IProcessLauncherStatics>().RunToCompletionAsync(fileName, args, options);
}

inline ProcessLauncherOptions::ProcessLauncherOptions() :
    ProcessLauncherOptions(activate_instance<ProcessLauncherOptions>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> RemoteLauncher::LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<RemoteLauncher, Windows::System::IRemoteLauncherStatics>().LaunchUriAsync(remoteSystemConnectionRequest, uri);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> RemoteLauncher::LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options)
{
    return get_activation_factory<RemoteLauncher, Windows::System::IRemoteLauncherStatics>().LaunchUriAsync(remoteSystemConnectionRequest, uri, options);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> RemoteLauncher::LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData)
{
    return get_activation_factory<RemoteLauncher, Windows::System::IRemoteLauncherStatics>().LaunchUriAsync(remoteSystemConnectionRequest, uri, options, inputData);
}

inline RemoteLauncherOptions::RemoteLauncherOptions() :
    RemoteLauncherOptions(activate_instance<RemoteLauncherOptions>())
{}

inline void ShutdownManager::BeginShutdown(Windows::System::ShutdownKind const& shutdownKind, Windows::Foundation::TimeSpan const& timeout)
{
    get_activation_factory<ShutdownManager, Windows::System::IShutdownManagerStatics>().BeginShutdown(shutdownKind, timeout);
}

inline void ShutdownManager::CancelShutdown()
{
    get_activation_factory<ShutdownManager, Windows::System::IShutdownManagerStatics>().CancelShutdown();
}

inline bool ShutdownManager::IsPowerStateSupported(Windows::System::PowerState const& powerState)
{
    return get_activation_factory<ShutdownManager, Windows::System::IShutdownManagerStatics2>().IsPowerStateSupported(powerState);
}

inline void ShutdownManager::EnterPowerState(Windows::System::PowerState const& powerState)
{
    get_activation_factory<ShutdownManager, Windows::System::IShutdownManagerStatics2>().EnterPowerState(powerState);
}

inline void ShutdownManager::EnterPowerState(Windows::System::PowerState const& powerState, Windows::Foundation::TimeSpan const& wakeUpAfter)
{
    get_activation_factory<ShutdownManager, Windows::System::IShutdownManagerStatics2>().EnterPowerState(powerState, wakeUpAfter);
}

inline hstring TimeZoneSettings::CurrentTimeZoneDisplayName()
{
    return get_activation_factory<TimeZoneSettings, Windows::System::ITimeZoneSettingsStatics>().CurrentTimeZoneDisplayName();
}

inline Windows::Foundation::Collections::IVectorView<hstring> TimeZoneSettings::SupportedTimeZoneDisplayNames()
{
    return get_activation_factory<TimeZoneSettings, Windows::System::ITimeZoneSettingsStatics>().SupportedTimeZoneDisplayNames();
}

inline bool TimeZoneSettings::CanChangeTimeZone()
{
    return get_activation_factory<TimeZoneSettings, Windows::System::ITimeZoneSettingsStatics>().CanChangeTimeZone();
}

inline void TimeZoneSettings::ChangeTimeZoneByDisplayName(param::hstring const& timeZoneDisplayName)
{
    get_activation_factory<TimeZoneSettings, Windows::System::ITimeZoneSettingsStatics>().ChangeTimeZoneByDisplayName(timeZoneDisplayName);
}

inline Windows::System::UserWatcher User::CreateWatcher()
{
    return get_activation_factory<User, Windows::System::IUserStatics>().CreateWatcher();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> User::FindAllAsync()
{
    return get_activation_factory<User, Windows::System::IUserStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> User::FindAllAsync(Windows::System::UserType const& type)
{
    return get_activation_factory<User, Windows::System::IUserStatics>().FindAllAsync(type);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> User::FindAllAsync(Windows::System::UserType const& type, Windows::System::UserAuthenticationStatus const& status)
{
    return get_activation_factory<User, Windows::System::IUserStatics>().FindAllAsync(type, status);
}

inline Windows::System::User User::GetFromId(param::hstring const& nonRoamableId)
{
    return get_activation_factory<User, Windows::System::IUserStatics>().GetFromId(nonRoamableId);
}

inline Windows::System::User UserDeviceAssociation::FindUserFromDeviceId(param::hstring const& deviceId)
{
    return get_activation_factory<UserDeviceAssociation, Windows::System::IUserDeviceAssociationStatics>().FindUserFromDeviceId(deviceId);
}

inline event_token UserDeviceAssociation::UserDeviceAssociationChanged(Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler)
{
    return get_activation_factory<UserDeviceAssociation, Windows::System::IUserDeviceAssociationStatics>().UserDeviceAssociationChanged(handler);
}

inline factory_event_revoker<Windows::System::IUserDeviceAssociationStatics> UserDeviceAssociation::UserDeviceAssociationChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler)
{
    auto factory = get_activation_factory<UserDeviceAssociation, Windows::System::IUserDeviceAssociationStatics>();
    return { factory, &abi_t<Windows::System::IUserDeviceAssociationStatics>::remove_UserDeviceAssociationChanged, factory.UserDeviceAssociationChanged(handler) };
}

inline void UserDeviceAssociation::UserDeviceAssociationChanged(event_token const& token)
{
    get_activation_factory<UserDeviceAssociation, Windows::System::IUserDeviceAssociationStatics>().UserDeviceAssociationChanged(token);
}

inline UserPicker::UserPicker() :
    UserPicker(activate_instance<UserPicker>())
{}

inline bool UserPicker::IsSupported()
{
    return get_activation_factory<UserPicker, Windows::System::IUserPickerStatics>().IsSupported();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::IAppDiagnosticInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IAppDiagnosticInfo> {};

template<> struct hash<winrt::Windows::System::IAppDiagnosticInfoStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IAppDiagnosticInfoStatics> {};

template<> struct hash<winrt::Windows::System::IAppMemoryReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IAppMemoryReport> {};

template<> struct hash<winrt::Windows::System::IAppMemoryUsageLimitChangingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IAppMemoryUsageLimitChangingEventArgs> {};

template<> struct hash<winrt::Windows::System::IFolderLauncherOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IFolderLauncherOptions> {};

template<> struct hash<winrt::Windows::System::IKnownUserPropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IKnownUserPropertiesStatics> {};

template<> struct hash<winrt::Windows::System::ILaunchUriResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ILaunchUriResult> {};

template<> struct hash<winrt::Windows::System::ILauncherOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ILauncherOptions> {};

template<> struct hash<winrt::Windows::System::ILauncherOptions2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ILauncherOptions2> {};

template<> struct hash<winrt::Windows::System::ILauncherOptions3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ILauncherOptions3> {};

template<> struct hash<winrt::Windows::System::ILauncherOptions4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ILauncherOptions4> {};

template<> struct hash<winrt::Windows::System::ILauncherStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ILauncherStatics> {};

template<> struct hash<winrt::Windows::System::ILauncherStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ILauncherStatics2> {};

template<> struct hash<winrt::Windows::System::ILauncherStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ILauncherStatics3> {};

template<> struct hash<winrt::Windows::System::ILauncherStatics4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ILauncherStatics4> {};

template<> struct hash<winrt::Windows::System::ILauncherUIOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ILauncherUIOptions> {};

template<> struct hash<winrt::Windows::System::ILauncherViewOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ILauncherViewOptions> {};

template<> struct hash<winrt::Windows::System::IMemoryManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IMemoryManagerStatics> {};

template<> struct hash<winrt::Windows::System::IMemoryManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IMemoryManagerStatics2> {};

template<> struct hash<winrt::Windows::System::IMemoryManagerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IMemoryManagerStatics3> {};

template<> struct hash<winrt::Windows::System::IProcessLauncherOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IProcessLauncherOptions> {};

template<> struct hash<winrt::Windows::System::IProcessLauncherResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IProcessLauncherResult> {};

template<> struct hash<winrt::Windows::System::IProcessLauncherStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IProcessLauncherStatics> {};

template<> struct hash<winrt::Windows::System::IProcessMemoryReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IProcessMemoryReport> {};

template<> struct hash<winrt::Windows::System::IProtocolForResultsOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IProtocolForResultsOperation> {};

template<> struct hash<winrt::Windows::System::IRemoteLauncherOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IRemoteLauncherOptions> {};

template<> struct hash<winrt::Windows::System::IRemoteLauncherStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IRemoteLauncherStatics> {};

template<> struct hash<winrt::Windows::System::IShutdownManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IShutdownManagerStatics> {};

template<> struct hash<winrt::Windows::System::IShutdownManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IShutdownManagerStatics2> {};

template<> struct hash<winrt::Windows::System::ITimeZoneSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ITimeZoneSettingsStatics> {};

template<> struct hash<winrt::Windows::System::IUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IUser> {};

template<> struct hash<winrt::Windows::System::IUserAuthenticationStatusChangeDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IUserAuthenticationStatusChangeDeferral> {};

template<> struct hash<winrt::Windows::System::IUserAuthenticationStatusChangingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IUserAuthenticationStatusChangingEventArgs> {};

template<> struct hash<winrt::Windows::System::IUserChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IUserChangedEventArgs> {};

template<> struct hash<winrt::Windows::System::IUserDeviceAssociationChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IUserDeviceAssociationChangedEventArgs> {};

template<> struct hash<winrt::Windows::System::IUserDeviceAssociationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IUserDeviceAssociationStatics> {};

template<> struct hash<winrt::Windows::System::IUserPicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IUserPicker> {};

template<> struct hash<winrt::Windows::System::IUserPickerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IUserPickerStatics> {};

template<> struct hash<winrt::Windows::System::IUserStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IUserStatics> {};

template<> struct hash<winrt::Windows::System::IUserWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::IUserWatcher> {};

template<> struct hash<winrt::Windows::System::AppDiagnosticInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::AppDiagnosticInfo> {};

template<> struct hash<winrt::Windows::System::AppMemoryReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::AppMemoryReport> {};

template<> struct hash<winrt::Windows::System::AppMemoryUsageLimitChangingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::AppMemoryUsageLimitChangingEventArgs> {};

template<> struct hash<winrt::Windows::System::FolderLauncherOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::FolderLauncherOptions> {};

template<> struct hash<winrt::Windows::System::KnownUserProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::KnownUserProperties> {};

template<> struct hash<winrt::Windows::System::LaunchUriResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::LaunchUriResult> {};

template<> struct hash<winrt::Windows::System::Launcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Launcher> {};

template<> struct hash<winrt::Windows::System::LauncherOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::LauncherOptions> {};

template<> struct hash<winrt::Windows::System::LauncherUIOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::LauncherUIOptions> {};

template<> struct hash<winrt::Windows::System::MemoryManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::MemoryManager> {};

template<> struct hash<winrt::Windows::System::ProcessLauncher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ProcessLauncher> {};

template<> struct hash<winrt::Windows::System::ProcessLauncherOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ProcessLauncherOptions> {};

template<> struct hash<winrt::Windows::System::ProcessLauncherResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ProcessLauncherResult> {};

template<> struct hash<winrt::Windows::System::ProcessMemoryReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ProcessMemoryReport> {};

template<> struct hash<winrt::Windows::System::ProtocolForResultsOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ProtocolForResultsOperation> {};

template<> struct hash<winrt::Windows::System::RemoteLauncher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteLauncher> {};

template<> struct hash<winrt::Windows::System::RemoteLauncherOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteLauncherOptions> {};

template<> struct hash<winrt::Windows::System::ShutdownManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::ShutdownManager> {};

template<> struct hash<winrt::Windows::System::TimeZoneSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::TimeZoneSettings> {};

template<> struct hash<winrt::Windows::System::User> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::User> {};

template<> struct hash<winrt::Windows::System::UserAuthenticationStatusChangeDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserAuthenticationStatusChangeDeferral> {};

template<> struct hash<winrt::Windows::System::UserAuthenticationStatusChangingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserAuthenticationStatusChangingEventArgs> {};

template<> struct hash<winrt::Windows::System::UserChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserChangedEventArgs> {};

template<> struct hash<winrt::Windows::System::UserDeviceAssociation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserDeviceAssociation> {};

template<> struct hash<winrt::Windows::System::UserDeviceAssociationChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserDeviceAssociationChangedEventArgs> {};

template<> struct hash<winrt::Windows::System::UserPicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserPicker> {};

template<> struct hash<winrt::Windows::System::UserWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserWatcher> {};

}

WINRT_WARNING_POP
