// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.ApplicationModel.2.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_IAppDisplayInfo<D>::DisplayName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IAppDisplayInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IAppDisplayInfo<D>::Description() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IAppDisplayInfo)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference consume_Windows_ApplicationModel_IAppDisplayInfo<D>::GetLogo(Windows::Foundation::Size const& size) const
{
    Windows::Storage::Streams::RandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IAppDisplayInfo)->GetLogo(get_abi(size), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IAppInfo<D>::Id() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IAppInfo)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IAppInfo<D>::AppUserModelId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IAppInfo)->get_AppUserModelId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::AppDisplayInfo consume_Windows_ApplicationModel_IAppInfo<D>::DisplayInfo() const noexcept
{
    Windows::ApplicationModel::AppDisplayInfo value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IAppInfo)->get_DisplayInfo(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IAppInfo<D>::PackageFamilyName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IAppInfo)->get_PackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_ICameraApplicationManagerStatics<D>::ShowInstalledApplicationsUI() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ICameraApplicationManagerStatics)->ShowInstalledApplicationsUI());
}

template <typename D> bool consume_Windows_ApplicationModel_IDesignModeStatics<D>::DesignModeEnabled() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IDesignModeStatics)->get_DesignModeEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IDesignModeStatics2<D>::DesignMode2Enabled() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IDesignModeStatics2)->get_DesignMode2Enabled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_IEnteredBackgroundEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IEnteredBackgroundEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForCurrentAppAsync() const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IFullTrustProcessLauncherStatics)->LaunchFullTrustProcessForCurrentAppAsync(put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForCurrentAppAsync(param::hstring const& parameterGroupId) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IFullTrustProcessLauncherStatics)->LaunchFullTrustProcessForCurrentAppWithParametersAsync(get_abi(parameterGroupId), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForAppAsync(param::hstring const& fullTrustPackageRelativeAppId) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IFullTrustProcessLauncherStatics)->LaunchFullTrustProcessForAppAsync(get_abi(fullTrustPackageRelativeAppId), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForAppAsync(param::hstring const& fullTrustPackageRelativeAppId, param::hstring const& parameterGroupId) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IFullTrustProcessLauncherStatics)->LaunchFullTrustProcessForAppWithParametersAsync(get_abi(fullTrustPackageRelativeAppId), get_abi(parameterGroupId), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_ILeavingBackgroundEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ILeavingBackgroundEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageId consume_Windows_ApplicationModel_IPackage<D>::Id() const noexcept
{
    Windows::ApplicationModel::PackageId value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_ApplicationModel_IPackage<D>::InstalledLocation() const noexcept
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage)->get_InstalledLocation(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackage<D>::IsFramework() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage)->get_IsFramework(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package> consume_Windows_ApplicationModel_IPackage<D>::Dependencies() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage)->get_Dependencies(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackage2<D>::DisplayName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackage2<D>::PublisherDisplayName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_PublisherDisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackage2<D>::Description() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_IPackage2<D>::Logo() const noexcept
{
    Windows::Foundation::Uri value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_Logo(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackage2<D>::IsResourcePackage() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_IsResourcePackage(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackage2<D>::IsBundle() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_IsBundle(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackage2<D>::IsDevelopmentMode() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_IsDevelopmentMode(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageStatus consume_Windows_ApplicationModel_IPackage3<D>::Status() const noexcept
{
    Windows::ApplicationModel::PackageStatus value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage3)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_IPackage3<D>::InstalledDate() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage3)->get_InstalledDate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>> consume_Windows_ApplicationModel_IPackage3<D>::GetAppListEntriesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage3)->GetAppListEntriesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::PackageSignatureKind consume_Windows_ApplicationModel_IPackage4<D>::SignatureKind() const noexcept
{
    Windows::ApplicationModel::PackageSignatureKind value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage4)->get_SignatureKind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackage4<D>::IsOptional() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackage4)->get_IsOptional(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_IPackage4<D>::VerifyContentIntegrityAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage4)->VerifyContentIntegrityAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> consume_Windows_ApplicationModel_IPackage5<D>::GetContentGroupsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage5)->GetContentGroupsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageContentGroup> consume_Windows_ApplicationModel_IPackage5<D>::GetContentGroupAsync(param::hstring const& name) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageContentGroup> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage5)->GetContentGroupAsync(get_abi(name), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> consume_Windows_ApplicationModel_IPackage5<D>::StageContentGroupsAsync(param::async_iterable<hstring> const& names) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage5)->StageContentGroupsAsync(get_abi(names), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> consume_Windows_ApplicationModel_IPackage5<D>::StageContentGroupsAsync(param::async_iterable<hstring> const& names, bool moveToHeadOfQueue) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage5)->StageContentGroupsWithPriorityAsync(get_abi(names), moveToHeadOfQueue, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_IPackage5<D>::SetInUseAsync(bool inUse) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage5)->SetInUseAsync(inUse, put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStaging(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog)->add_PackageStaging(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::IPackageCatalog> consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStaging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::IPackageCatalog>(this, &abi_t<Windows::ApplicationModel::IPackageCatalog>::remove_PackageStaging, PackageStaging(handler));
}

template <typename D> void consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStaging(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog)->remove_PackageStaging(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageInstalling(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog)->add_PackageInstalling(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::IPackageCatalog> consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageInstalling(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::IPackageCatalog>(this, &abi_t<Windows::ApplicationModel::IPackageCatalog>::remove_PackageInstalling, PackageInstalling(handler));
}

template <typename D> void consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageInstalling(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog)->remove_PackageInstalling(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUpdating(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog)->add_PackageUpdating(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::IPackageCatalog> consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUpdating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::IPackageCatalog>(this, &abi_t<Windows::ApplicationModel::IPackageCatalog>::remove_PackageUpdating, PackageUpdating(handler));
}

template <typename D> void consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUpdating(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog)->remove_PackageUpdating(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUninstalling(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog)->add_PackageUninstalling(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::IPackageCatalog> consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUninstalling(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::IPackageCatalog>(this, &abi_t<Windows::ApplicationModel::IPackageCatalog>::remove_PackageUninstalling, PackageUninstalling(handler));
}

template <typename D> void consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUninstalling(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog)->remove_PackageUninstalling(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog)->add_PackageStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::IPackageCatalog> consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::IPackageCatalog>(this, &abi_t<Windows::ApplicationModel::IPackageCatalog>::remove_PackageStatusChanged, PackageStatusChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog)->remove_PackageStatusChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_IPackageCatalog2<D>::PackageContentGroupStaging(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageContentGroupStagingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog2)->add_PackageContentGroupStaging(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::IPackageCatalog2> consume_Windows_ApplicationModel_IPackageCatalog2<D>::PackageContentGroupStaging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageContentGroupStagingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::IPackageCatalog2>(this, &abi_t<Windows::ApplicationModel::IPackageCatalog2>::remove_PackageContentGroupStaging, PackageContentGroupStaging(handler));
}

template <typename D> void consume_Windows_ApplicationModel_IPackageCatalog2<D>::PackageContentGroupStaging(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog2)->remove_PackageContentGroupStaging(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult> consume_Windows_ApplicationModel_IPackageCatalog2<D>::AddOptionalPackageAsync(param::hstring const& optionalPackageFamilyName) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog2)->AddOptionalPackageAsync(get_abi(optionalPackageFamilyName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult> consume_Windows_ApplicationModel_IPackageCatalog3<D>::RemoveOptionalPackagesAsync(param::async_iterable<hstring> const& optionalPackageFamilyNames) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalog3)->RemoveOptionalPackagesAsync(get_abi(optionalPackageFamilyNames), put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageCatalogAddOptionalPackageResult<D>::Package() const noexcept
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult)->get_Package(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_IPackageCatalogAddOptionalPackageResult<D>::ExtendedError() const noexcept
{
    HRESULT value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package> consume_Windows_ApplicationModel_IPackageCatalogRemoveOptionalPackagesResult<D>::PackagesRemoved() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult)->get_PackagesRemoved(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_IPackageCatalogRemoveOptionalPackagesResult<D>::ExtendedError() const noexcept
{
    HRESULT value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageCatalog consume_Windows_ApplicationModel_IPackageCatalogStatics<D>::OpenForCurrentPackage() const
{
    Windows::ApplicationModel::PackageCatalog value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalogStatics)->OpenForCurrentPackage(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageCatalog consume_Windows_ApplicationModel_IPackageCatalogStatics<D>::OpenForCurrentUser() const
{
    Windows::ApplicationModel::PackageCatalog value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalogStatics)->OpenForCurrentUser(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageContentGroup<D>::Package() const noexcept
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroup)->get_Package(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageContentGroup<D>::Name() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroup)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageContentGroupState consume_Windows_ApplicationModel_IPackageContentGroup<D>::State() const noexcept
{
    Windows::ApplicationModel::PackageContentGroupState value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroup)->get_State(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageContentGroup<D>::IsRequired() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroup)->get_IsRequired(&value));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::ActivityId() const noexcept
{
    GUID value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::Package() const noexcept
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::Progress() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::IsComplete() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::ErrorCode() const noexcept
{
    HRESULT value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::ContentGroupName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_ContentGroupName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::IsContentGroupRequired() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_IsContentGroupRequired(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageContentGroupStatics<D>::RequiredGroupName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStatics)->get_RequiredGroupName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageId<D>::Name() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageVersion consume_Windows_ApplicationModel_IPackageId<D>::Version() const noexcept
{
    Windows::ApplicationModel::PackageVersion value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_Version(put_abi(value)));
    return value;
}

template <typename D> Windows::System::ProcessorArchitecture consume_Windows_ApplicationModel_IPackageId<D>::Architecture() const noexcept
{
    Windows::System::ProcessorArchitecture value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_Architecture(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageId<D>::ResourceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_ResourceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageId<D>::Publisher() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_Publisher(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageId<D>::PublisherId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_PublisherId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageId<D>::FullName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_FullName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageId<D>::FamilyName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_FamilyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageIdWithMetadata<D>::ProductId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageIdWithMetadata)->get_ProductId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageIdWithMetadata<D>::Author() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageIdWithMetadata)->get_Author(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::ActivityId() const noexcept
{
    GUID value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::Package() const noexcept
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::Progress() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::IsComplete() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::ErrorCode() const noexcept
{
    HRESULT value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::ActivityId() const noexcept
{
    GUID value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::Package() const noexcept
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::Progress() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::IsComplete() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::ErrorCode() const noexcept
{
    HRESULT value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageStatics<D>::Current() const noexcept
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::VerifyIsOK() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->VerifyIsOK(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::NotAvailable() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_NotAvailable(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::PackageOffline() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_PackageOffline(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::DataOffline() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_DataOffline(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::Disabled() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_Disabled(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::NeedsRemediation() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_NeedsRemediation(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::LicenseIssue() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_LicenseIssue(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::Modified() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_Modified(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::Tampered() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_Tampered(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::DependencyIssue() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_DependencyIssue(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::Servicing() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_Servicing(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::DeploymentInProgress() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_DeploymentInProgress(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus2<D>::IsPartiallyStaged() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus2)->get_IsPartiallyStaged(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageStatusChangedEventArgs<D>::Package() const noexcept
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageStatusChangedEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::ActivityId() const noexcept
{
    GUID value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::Package() const noexcept
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::Progress() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::IsComplete() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::ErrorCode() const noexcept
{
    HRESULT value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::ActivityId() const noexcept
{
    GUID value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::SourcePackage() const noexcept
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_SourcePackage(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::TargetPackage() const noexcept
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_TargetPackage(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::Progress() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::IsComplete() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::ErrorCode() const noexcept
{
    HRESULT value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_IPackageWithMetadata<D>::InstallDate() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IPackageWithMetadata)->get_InstallDate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageWithMetadata<D>::GetThumbnailToken() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageWithMetadata)->GetThumbnailToken(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_IPackageWithMetadata<D>::Launch(param::hstring const& parameters) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageWithMetadata)->Launch(get_abi(parameters)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTaskState> consume_Windows_ApplicationModel_IStartupTask<D>::RequestEnableAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTaskState> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IStartupTask)->RequestEnableAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_ApplicationModel_IStartupTask<D>::Disable() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IStartupTask)->Disable());
}

template <typename D> Windows::ApplicationModel::StartupTaskState consume_Windows_ApplicationModel_IStartupTask<D>::State() const noexcept
{
    Windows::ApplicationModel::StartupTaskState value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IStartupTask)->get_State(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IStartupTask<D>::TaskId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::IStartupTask)->get_TaskId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> consume_Windows_ApplicationModel_IStartupTaskStatics<D>::GetForCurrentPackageAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IStartupTaskStatics)->GetForCurrentPackageAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask> consume_Windows_ApplicationModel_IStartupTaskStatics<D>::GetAsync(param::hstring const& taskId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IStartupTaskStatics)->GetAsync(get_abi(taskId), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_ApplicationModel_ISuspendingDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ISuspendingDeferral)->Complete());
}

template <typename D> Windows::ApplicationModel::SuspendingOperation consume_Windows_ApplicationModel_ISuspendingEventArgs<D>::SuspendingOperation() const noexcept
{
    Windows::ApplicationModel::SuspendingOperation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::ISuspendingEventArgs)->get_SuspendingOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SuspendingDeferral consume_Windows_ApplicationModel_ISuspendingOperation<D>::GetDeferral() const
{
    Windows::ApplicationModel::SuspendingDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ISuspendingOperation)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_ISuspendingOperation<D>::Deadline() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::ISuspendingOperation)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::IAppDisplayInfo> : produce_base<D, Windows::ApplicationModel::IAppDisplayInfo>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DisplayName());
        return S_OK;
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Description());
        return S_OK;
    }

    HRESULT __stdcall GetLogo(Windows::Foundation::Size size, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLogo(*reinterpret_cast<Windows::Foundation::Size const*>(&size)));
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
struct produce<D, Windows::ApplicationModel::IAppInfo> : produce_base<D, Windows::ApplicationModel::IAppInfo>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Id());
        return S_OK;
    }

    HRESULT __stdcall get_AppUserModelId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AppUserModelId());
        return S_OK;
    }

    HRESULT __stdcall get_DisplayInfo(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DisplayInfo());
        return S_OK;
    }

    HRESULT __stdcall get_PackageFamilyName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PackageFamilyName());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::ICameraApplicationManagerStatics> : produce_base<D, Windows::ApplicationModel::ICameraApplicationManagerStatics>
{
    HRESULT __stdcall ShowInstalledApplicationsUI() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowInstalledApplicationsUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IDesignModeStatics> : produce_base<D, Windows::ApplicationModel::IDesignModeStatics>
{
    HRESULT __stdcall get_DesignModeEnabled(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DesignModeEnabled());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IDesignModeStatics2> : produce_base<D, Windows::ApplicationModel::IDesignModeStatics2>
{
    HRESULT __stdcall get_DesignMode2Enabled(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DesignMode2Enabled());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IEnteredBackgroundEventArgs> : produce_base<D, Windows::ApplicationModel::IEnteredBackgroundEventArgs>
{
    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::IFullTrustProcessLauncherStatics> : produce_base<D, Windows::ApplicationModel::IFullTrustProcessLauncherStatics>
{
    HRESULT __stdcall LaunchFullTrustProcessForCurrentAppAsync(::IUnknown** asyncAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().LaunchFullTrustProcessForCurrentAppAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchFullTrustProcessForCurrentAppWithParametersAsync(HSTRING parameterGroupId, ::IUnknown** asyncAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().LaunchFullTrustProcessForCurrentAppAsync(*reinterpret_cast<hstring const*>(&parameterGroupId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchFullTrustProcessForAppAsync(HSTRING fullTrustPackageRelativeAppId, ::IUnknown** asyncAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().LaunchFullTrustProcessForAppAsync(*reinterpret_cast<hstring const*>(&fullTrustPackageRelativeAppId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchFullTrustProcessForAppWithParametersAsync(HSTRING fullTrustPackageRelativeAppId, HSTRING parameterGroupId, ::IUnknown** asyncAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().LaunchFullTrustProcessForAppAsync(*reinterpret_cast<hstring const*>(&fullTrustPackageRelativeAppId), *reinterpret_cast<hstring const*>(&parameterGroupId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::ILeavingBackgroundEventArgs> : produce_base<D, Windows::ApplicationModel::ILeavingBackgroundEventArgs>
{
    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::IPackage> : produce_base<D, Windows::ApplicationModel::IPackage>
{
    HRESULT __stdcall get_Id(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Id());
        return S_OK;
    }

    HRESULT __stdcall get_InstalledLocation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().InstalledLocation());
        return S_OK;
    }

    HRESULT __stdcall get_IsFramework(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsFramework());
        return S_OK;
    }

    HRESULT __stdcall get_Dependencies(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Dependencies());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackage2> : produce_base<D, Windows::ApplicationModel::IPackage2>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DisplayName());
        return S_OK;
    }

    HRESULT __stdcall get_PublisherDisplayName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PublisherDisplayName());
        return S_OK;
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Description());
        return S_OK;
    }

    HRESULT __stdcall get_Logo(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Logo());
        return S_OK;
    }

    HRESULT __stdcall get_IsResourcePackage(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsResourcePackage());
        return S_OK;
    }

    HRESULT __stdcall get_IsBundle(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsBundle());
        return S_OK;
    }

    HRESULT __stdcall get_IsDevelopmentMode(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsDevelopmentMode());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackage3> : produce_base<D, Windows::ApplicationModel::IPackage3>
{
    HRESULT __stdcall get_Status(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Status());
        return S_OK;
    }

    HRESULT __stdcall get_InstalledDate(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().InstalledDate());
        return S_OK;
    }

    HRESULT __stdcall GetAppListEntriesAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAppListEntriesAsync());
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
struct produce<D, Windows::ApplicationModel::IPackage4> : produce_base<D, Windows::ApplicationModel::IPackage4>
{
    HRESULT __stdcall get_SignatureKind(Windows::ApplicationModel::PackageSignatureKind* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SignatureKind());
        return S_OK;
    }

    HRESULT __stdcall get_IsOptional(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsOptional());
        return S_OK;
    }

    HRESULT __stdcall VerifyContentIntegrityAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().VerifyContentIntegrityAsync());
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
struct produce<D, Windows::ApplicationModel::IPackage5> : produce_base<D, Windows::ApplicationModel::IPackage5>
{
    HRESULT __stdcall GetContentGroupsAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetContentGroupsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContentGroupAsync(HSTRING name, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetContentGroupAsync(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StageContentGroupsAsync(::IUnknown* names, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StageContentGroupsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&names)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StageContentGroupsWithPriorityAsync(::IUnknown* names, bool moveToHeadOfQueue, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StageContentGroupsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&names), moveToHeadOfQueue));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetInUseAsync(bool inUse, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetInUseAsync(inUse));
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
struct produce<D, Windows::ApplicationModel::IPackageCatalog> : produce_base<D, Windows::ApplicationModel::IPackageCatalog>
{
    HRESULT __stdcall add_PackageStaging(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PackageStaging(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageStaging(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageStaging(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageInstalling(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PackageInstalling(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageInstalling(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageInstalling(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageUpdating(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PackageUpdating(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageUpdating(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageUpdating(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageUninstalling(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PackageUninstalling(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageUninstalling(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageUninstalling(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageStatusChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PackageStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageStatusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageCatalog2> : produce_base<D, Windows::ApplicationModel::IPackageCatalog2>
{
    HRESULT __stdcall add_PackageContentGroupStaging(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PackageContentGroupStaging(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageContentGroupStagingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageContentGroupStaging(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageContentGroupStaging(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddOptionalPackageAsync(HSTRING optionalPackageFamilyName, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AddOptionalPackageAsync(*reinterpret_cast<hstring const*>(&optionalPackageFamilyName)));
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
struct produce<D, Windows::ApplicationModel::IPackageCatalog3> : produce_base<D, Windows::ApplicationModel::IPackageCatalog3>
{
    HRESULT __stdcall RemoveOptionalPackagesAsync(::IUnknown* optionalPackageFamilyNames, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RemoveOptionalPackagesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames)));
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
struct produce<D, Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult> : produce_base<D, Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult>
{
    HRESULT __stdcall get_Package(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Package());
        return S_OK;
    }

    HRESULT __stdcall get_ExtendedError(HRESULT* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ExtendedError());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult> : produce_base<D, Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult>
{
    HRESULT __stdcall get_PackagesRemoved(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PackagesRemoved());
        return S_OK;
    }

    HRESULT __stdcall get_ExtendedError(HRESULT* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ExtendedError());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageCatalogStatics> : produce_base<D, Windows::ApplicationModel::IPackageCatalogStatics>
{
    HRESULT __stdcall OpenForCurrentPackage(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenForCurrentPackage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenForCurrentUser(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenForCurrentUser());
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
struct produce<D, Windows::ApplicationModel::IPackageContentGroup> : produce_base<D, Windows::ApplicationModel::IPackageContentGroup>
{
    HRESULT __stdcall get_Package(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Package());
        return S_OK;
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Name());
        return S_OK;
    }

    HRESULT __stdcall get_State(Windows::ApplicationModel::PackageContentGroupState* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().State());
        return S_OK;
    }

    HRESULT __stdcall get_IsRequired(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsRequired());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageContentGroupStagingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageContentGroupStagingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ActivityId());
        return S_OK;
    }

    HRESULT __stdcall get_Package(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Package());
        return S_OK;
    }

    HRESULT __stdcall get_Progress(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Progress());
        return S_OK;
    }

    HRESULT __stdcall get_IsComplete(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsComplete());
        return S_OK;
    }

    HRESULT __stdcall get_ErrorCode(HRESULT* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ErrorCode());
        return S_OK;
    }

    HRESULT __stdcall get_ContentGroupName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ContentGroupName());
        return S_OK;
    }

    HRESULT __stdcall get_IsContentGroupRequired(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsContentGroupRequired());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageContentGroupStatics> : produce_base<D, Windows::ApplicationModel::IPackageContentGroupStatics>
{
    HRESULT __stdcall get_RequiredGroupName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RequiredGroupName());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageId> : produce_base<D, Windows::ApplicationModel::IPackageId>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Name());
        return S_OK;
    }

    HRESULT __stdcall get_Version(struct_of<8>* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Version());
        return S_OK;
    }

    HRESULT __stdcall get_Architecture(Windows::System::ProcessorArchitecture* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Architecture());
        return S_OK;
    }

    HRESULT __stdcall get_ResourceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ResourceId());
        return S_OK;
    }

    HRESULT __stdcall get_Publisher(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Publisher());
        return S_OK;
    }

    HRESULT __stdcall get_PublisherId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PublisherId());
        return S_OK;
    }

    HRESULT __stdcall get_FullName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FullName());
        return S_OK;
    }

    HRESULT __stdcall get_FamilyName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FamilyName());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageIdWithMetadata> : produce_base<D, Windows::ApplicationModel::IPackageIdWithMetadata>
{
    HRESULT __stdcall get_ProductId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ProductId());
        return S_OK;
    }

    HRESULT __stdcall get_Author(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Author());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageInstallingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageInstallingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ActivityId());
        return S_OK;
    }

    HRESULT __stdcall get_Package(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Package());
        return S_OK;
    }

    HRESULT __stdcall get_Progress(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Progress());
        return S_OK;
    }

    HRESULT __stdcall get_IsComplete(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsComplete());
        return S_OK;
    }

    HRESULT __stdcall get_ErrorCode(HRESULT* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ErrorCode());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStagingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageStagingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ActivityId());
        return S_OK;
    }

    HRESULT __stdcall get_Package(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Package());
        return S_OK;
    }

    HRESULT __stdcall get_Progress(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Progress());
        return S_OK;
    }

    HRESULT __stdcall get_IsComplete(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsComplete());
        return S_OK;
    }

    HRESULT __stdcall get_ErrorCode(HRESULT* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ErrorCode());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStatics> : produce_base<D, Windows::ApplicationModel::IPackageStatics>
{
    HRESULT __stdcall get_Current(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Current());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStatus> : produce_base<D, Windows::ApplicationModel::IPackageStatus>
{
    HRESULT __stdcall VerifyIsOK(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerifyIsOK());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NotAvailable(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NotAvailable());
        return S_OK;
    }

    HRESULT __stdcall get_PackageOffline(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PackageOffline());
        return S_OK;
    }

    HRESULT __stdcall get_DataOffline(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DataOffline());
        return S_OK;
    }

    HRESULT __stdcall get_Disabled(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Disabled());
        return S_OK;
    }

    HRESULT __stdcall get_NeedsRemediation(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NeedsRemediation());
        return S_OK;
    }

    HRESULT __stdcall get_LicenseIssue(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LicenseIssue());
        return S_OK;
    }

    HRESULT __stdcall get_Modified(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Modified());
        return S_OK;
    }

    HRESULT __stdcall get_Tampered(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Tampered());
        return S_OK;
    }

    HRESULT __stdcall get_DependencyIssue(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DependencyIssue());
        return S_OK;
    }

    HRESULT __stdcall get_Servicing(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Servicing());
        return S_OK;
    }

    HRESULT __stdcall get_DeploymentInProgress(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeploymentInProgress());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStatus2> : produce_base<D, Windows::ApplicationModel::IPackageStatus2>
{
    HRESULT __stdcall get_IsPartiallyStaged(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsPartiallyStaged());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStatusChangedEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageStatusChangedEventArgs>
{
    HRESULT __stdcall get_Package(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Package());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageUninstallingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageUninstallingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ActivityId());
        return S_OK;
    }

    HRESULT __stdcall get_Package(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Package());
        return S_OK;
    }

    HRESULT __stdcall get_Progress(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Progress());
        return S_OK;
    }

    HRESULT __stdcall get_IsComplete(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsComplete());
        return S_OK;
    }

    HRESULT __stdcall get_ErrorCode(HRESULT* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ErrorCode());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageUpdatingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageUpdatingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ActivityId());
        return S_OK;
    }

    HRESULT __stdcall get_SourcePackage(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SourcePackage());
        return S_OK;
    }

    HRESULT __stdcall get_TargetPackage(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TargetPackage());
        return S_OK;
    }

    HRESULT __stdcall get_Progress(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Progress());
        return S_OK;
    }

    HRESULT __stdcall get_IsComplete(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsComplete());
        return S_OK;
    }

    HRESULT __stdcall get_ErrorCode(HRESULT* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ErrorCode());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageWithMetadata> : produce_base<D, Windows::ApplicationModel::IPackageWithMetadata>
{
    HRESULT __stdcall get_InstallDate(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().InstallDate());
        return S_OK;
    }

    HRESULT __stdcall GetThumbnailToken(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetThumbnailToken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Launch(HSTRING parameters) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Launch(*reinterpret_cast<hstring const*>(&parameters));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IStartupTask> : produce_base<D, Windows::ApplicationModel::IStartupTask>
{
    HRESULT __stdcall RequestEnableAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestEnableAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Disable() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disable();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::ApplicationModel::StartupTaskState* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().State());
        return S_OK;
    }

    HRESULT __stdcall get_TaskId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TaskId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IStartupTaskStatics> : produce_base<D, Windows::ApplicationModel::IStartupTaskStatics>
{
    HRESULT __stdcall GetForCurrentPackageAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetForCurrentPackageAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAsync(HSTRING taskId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAsync(*reinterpret_cast<hstring const*>(&taskId)));
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
struct produce<D, Windows::ApplicationModel::ISuspendingDeferral> : produce_base<D, Windows::ApplicationModel::ISuspendingDeferral>
{
    HRESULT __stdcall Complete() noexcept final
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
struct produce<D, Windows::ApplicationModel::ISuspendingEventArgs> : produce_base<D, Windows::ApplicationModel::ISuspendingEventArgs>
{
    HRESULT __stdcall get_SuspendingOperation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SuspendingOperation());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::ISuspendingOperation> : produce_base<D, Windows::ApplicationModel::ISuspendingOperation>
{
    HRESULT __stdcall GetDeferral(::IUnknown** deferral) noexcept final
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

    HRESULT __stdcall get_Deadline(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Deadline());
        return S_OK;
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel {

inline void CameraApplicationManager::ShowInstalledApplicationsUI()
{
    get_activation_factory<CameraApplicationManager, Windows::ApplicationModel::ICameraApplicationManagerStatics>().ShowInstalledApplicationsUI();
}

inline bool DesignMode::DesignModeEnabled()
{
    return get_activation_factory<DesignMode, Windows::ApplicationModel::IDesignModeStatics>().DesignModeEnabled();
}

inline bool DesignMode::DesignMode2Enabled()
{
    return get_activation_factory<DesignMode, Windows::ApplicationModel::IDesignModeStatics2>().DesignMode2Enabled();
}

inline Windows::Foundation::IAsyncAction FullTrustProcessLauncher::LaunchFullTrustProcessForCurrentAppAsync()
{
    return get_activation_factory<FullTrustProcessLauncher, Windows::ApplicationModel::IFullTrustProcessLauncherStatics>().LaunchFullTrustProcessForCurrentAppAsync();
}

inline Windows::Foundation::IAsyncAction FullTrustProcessLauncher::LaunchFullTrustProcessForCurrentAppAsync(param::hstring const& parameterGroupId)
{
    return get_activation_factory<FullTrustProcessLauncher, Windows::ApplicationModel::IFullTrustProcessLauncherStatics>().LaunchFullTrustProcessForCurrentAppAsync(parameterGroupId);
}

inline Windows::Foundation::IAsyncAction FullTrustProcessLauncher::LaunchFullTrustProcessForAppAsync(param::hstring const& fullTrustPackageRelativeAppId)
{
    return get_activation_factory<FullTrustProcessLauncher, Windows::ApplicationModel::IFullTrustProcessLauncherStatics>().LaunchFullTrustProcessForAppAsync(fullTrustPackageRelativeAppId);
}

inline Windows::Foundation::IAsyncAction FullTrustProcessLauncher::LaunchFullTrustProcessForAppAsync(param::hstring const& fullTrustPackageRelativeAppId, param::hstring const& parameterGroupId)
{
    return get_activation_factory<FullTrustProcessLauncher, Windows::ApplicationModel::IFullTrustProcessLauncherStatics>().LaunchFullTrustProcessForAppAsync(fullTrustPackageRelativeAppId, parameterGroupId);
}

inline Windows::ApplicationModel::Package Package::Current()
{
    return get_activation_factory<Package, Windows::ApplicationModel::IPackageStatics>().Current();
}

inline Windows::ApplicationModel::PackageCatalog PackageCatalog::OpenForCurrentPackage()
{
    return get_activation_factory<PackageCatalog, Windows::ApplicationModel::IPackageCatalogStatics>().OpenForCurrentPackage();
}

inline Windows::ApplicationModel::PackageCatalog PackageCatalog::OpenForCurrentUser()
{
    return get_activation_factory<PackageCatalog, Windows::ApplicationModel::IPackageCatalogStatics>().OpenForCurrentUser();
}

inline hstring PackageContentGroup::RequiredGroupName()
{
    return get_activation_factory<PackageContentGroup, Windows::ApplicationModel::IPackageContentGroupStatics>().RequiredGroupName();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> StartupTask::GetForCurrentPackageAsync()
{
    return get_activation_factory<StartupTask, Windows::ApplicationModel::IStartupTaskStatics>().GetForCurrentPackageAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask> StartupTask::GetAsync(param::hstring const& taskId)
{
    return get_activation_factory<StartupTask, Windows::ApplicationModel::IStartupTaskStatics>().GetAsync(taskId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::IAppDisplayInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IAppDisplayInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::IAppInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IAppInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::ICameraApplicationManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::ICameraApplicationManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::IDesignModeStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IDesignModeStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::IDesignModeStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IDesignModeStatics2> {};

template<> struct hash<winrt::Windows::ApplicationModel::IEnteredBackgroundEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IEnteredBackgroundEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::IFullTrustProcessLauncherStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IFullTrustProcessLauncherStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::ILeavingBackgroundEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::ILeavingBackgroundEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackage> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackage2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackage2> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackage3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackage3> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackage4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackage4> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackage5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackage5> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalog> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageCatalog> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalog2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageCatalog2> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalog3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageCatalog3> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalogStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageCatalogStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageContentGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageContentGroup> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageContentGroupStagingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageContentGroupStagingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageContentGroupStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageContentGroupStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageId> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageIdWithMetadata> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageIdWithMetadata> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageInstallingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageInstallingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageStagingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageStagingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageStatus> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageStatus> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageStatus2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageStatus2> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageStatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageStatusChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageUninstallingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageUninstallingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageUpdatingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageUpdatingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::IPackageWithMetadata> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageWithMetadata> {};

template<> struct hash<winrt::Windows::ApplicationModel::IStartupTask> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IStartupTask> {};

template<> struct hash<winrt::Windows::ApplicationModel::IStartupTaskStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IStartupTaskStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::ISuspendingDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::ISuspendingDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::ISuspendingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::ISuspendingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::ISuspendingOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::ISuspendingOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppDisplayInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppDisplayInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::AppInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::AppInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::CameraApplicationManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::CameraApplicationManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::DesignMode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DesignMode> {};

template<> struct hash<winrt::Windows::ApplicationModel::EnteredBackgroundEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::EnteredBackgroundEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::FullTrustProcessLauncher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::FullTrustProcessLauncher> {};

template<> struct hash<winrt::Windows::ApplicationModel::LeavingBackgroundEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::LeavingBackgroundEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Package> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Package> {};

template<> struct hash<winrt::Windows::ApplicationModel::PackageCatalog> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::PackageCatalog> {};

template<> struct hash<winrt::Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::PackageContentGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::PackageContentGroup> {};

template<> struct hash<winrt::Windows::ApplicationModel::PackageContentGroupStagingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::PackageContentGroupStagingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::PackageId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::PackageId> {};

template<> struct hash<winrt::Windows::ApplicationModel::PackageInstallingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::PackageInstallingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::PackageStagingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::PackageStagingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::PackageStatus> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::PackageStatus> {};

template<> struct hash<winrt::Windows::ApplicationModel::PackageStatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::PackageStatusChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::PackageUninstallingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::PackageUninstallingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::PackageUpdatingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::PackageUpdatingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::StartupTask> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::StartupTask> {};

template<> struct hash<winrt::Windows::ApplicationModel::SuspendingDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::SuspendingDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::SuspendingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::SuspendingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::SuspendingOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::SuspendingOperation> {};

}

WINRT_WARNING_POP
