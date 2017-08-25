// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.ApplicationModel.2.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_IAppDisplayInfo<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IAppDisplayInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IAppDisplayInfo<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IAppDisplayInfo)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference consume_Windows_ApplicationModel_IAppDisplayInfo<D>::GetLogo(Windows::Foundation::Size const& size) const
{
    Windows::Storage::Streams::RandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IAppDisplayInfo)->GetLogo(get_abi(size), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IAppInfo<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IAppInfo)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IAppInfo<D>::AppUserModelId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IAppInfo)->get_AppUserModelId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::AppDisplayInfo consume_Windows_ApplicationModel_IAppInfo<D>::DisplayInfo() const
{
    Windows::ApplicationModel::AppDisplayInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IAppInfo)->get_DisplayInfo(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IAppInfo<D>::PackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IAppInfo)->get_PackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_ICameraApplicationManagerStatics<D>::ShowInstalledApplicationsUI() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ICameraApplicationManagerStatics)->ShowInstalledApplicationsUI());
}

template <typename D> bool consume_Windows_ApplicationModel_IDesignModeStatics<D>::DesignModeEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IDesignModeStatics)->get_DesignModeEnabled(&value));
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

template <typename D> Windows::ApplicationModel::PackageId consume_Windows_ApplicationModel_IPackage<D>::Id() const
{
    Windows::ApplicationModel::PackageId value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_ApplicationModel_IPackage<D>::InstalledLocation() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage)->get_InstalledLocation(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackage<D>::IsFramework() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage)->get_IsFramework(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package> consume_Windows_ApplicationModel_IPackage<D>::Dependencies() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage)->get_Dependencies(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackage2<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackage2<D>::PublisherDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_PublisherDisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackage2<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_IPackage2<D>::Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_Logo(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackage2<D>::IsResourcePackage() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_IsResourcePackage(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackage2<D>::IsBundle() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_IsBundle(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackage2<D>::IsDevelopmentMode() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage2)->get_IsDevelopmentMode(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageStatus consume_Windows_ApplicationModel_IPackage3<D>::Status() const
{
    Windows::ApplicationModel::PackageStatus value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage3)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_IPackage3<D>::InstalledDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage3)->get_InstalledDate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>> consume_Windows_ApplicationModel_IPackage3<D>::GetAppListEntriesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage3)->GetAppListEntriesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::PackageSignatureKind consume_Windows_ApplicationModel_IPackage4<D>::SignatureKind() const
{
    Windows::ApplicationModel::PackageSignatureKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage4)->get_SignatureKind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackage4<D>::IsOptional() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackage4)->get_IsOptional(&value));
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

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageCatalogAddOptionalPackageResult<D>::Package() const
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult)->get_Package(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_IPackageCatalogAddOptionalPackageResult<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult)->get_ExtendedError(put_abi(value)));
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

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageContentGroup<D>::Package() const
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroup)->get_Package(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageContentGroup<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroup)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageContentGroupState consume_Windows_ApplicationModel_IPackageContentGroup<D>::State() const
{
    Windows::ApplicationModel::PackageContentGroupState value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroup)->get_State(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageContentGroup<D>::IsRequired() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroup)->get_IsRequired(&value));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::ActivityId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::Progress() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::IsComplete() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::ErrorCode() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::ContentGroupName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_ContentGroupName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::IsContentGroupRequired() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_IsContentGroupRequired(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageContentGroupStatics<D>::RequiredGroupName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageContentGroupStatics)->get_RequiredGroupName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageId<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageVersion consume_Windows_ApplicationModel_IPackageId<D>::Version() const
{
    Windows::ApplicationModel::PackageVersion value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_Version(put_abi(value)));
    return value;
}

template <typename D> Windows::System::ProcessorArchitecture consume_Windows_ApplicationModel_IPackageId<D>::Architecture() const
{
    Windows::System::ProcessorArchitecture value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_Architecture(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageId<D>::ResourceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_ResourceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageId<D>::Publisher() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_Publisher(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageId<D>::PublisherId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_PublisherId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageId<D>::FullName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_FullName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageId<D>::FamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageId)->get_FamilyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageIdWithMetadata<D>::ProductId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageIdWithMetadata)->get_ProductId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IPackageIdWithMetadata<D>::Author() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageIdWithMetadata)->get_Author(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::ActivityId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::Progress() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::IsComplete() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::ErrorCode() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::ActivityId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::Progress() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::IsComplete() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::ErrorCode() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageStatics<D>::Current() const
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::VerifyIsOK() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->VerifyIsOK(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::NotAvailable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_NotAvailable(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::PackageOffline() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_PackageOffline(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::DataOffline() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_DataOffline(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::Disabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_Disabled(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::NeedsRemediation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_NeedsRemediation(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::LicenseIssue() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_LicenseIssue(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::Modified() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_Modified(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::Tampered() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_Tampered(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::DependencyIssue() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_DependencyIssue(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::Servicing() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_Servicing(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus<D>::DeploymentInProgress() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus)->get_DeploymentInProgress(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageStatus2<D>::IsPartiallyStaged() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatus2)->get_IsPartiallyStaged(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageStatusChangedEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageStatusChangedEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::ActivityId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_Package(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::Progress() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::IsComplete() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::ErrorCode() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::ActivityId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::SourcePackage() const
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_SourcePackage(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::TargetPackage() const
{
    Windows::ApplicationModel::Package value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_TargetPackage(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::Progress() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::IsComplete() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::ErrorCode() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_IPackageWithMetadata<D>::InstallDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IPackageWithMetadata)->get_InstallDate(put_abi(value)));
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

template <typename D> Windows::ApplicationModel::StartupTaskState consume_Windows_ApplicationModel_IStartupTask<D>::State() const
{
    Windows::ApplicationModel::StartupTaskState value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IStartupTask)->get_State(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_IStartupTask<D>::TaskId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::IStartupTask)->get_TaskId(put_abi(value)));
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

template <typename D> Windows::ApplicationModel::SuspendingOperation consume_Windows_ApplicationModel_ISuspendingEventArgs<D>::SuspendingOperation() const
{
    Windows::ApplicationModel::SuspendingOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ISuspendingEventArgs)->get_SuspendingOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SuspendingDeferral consume_Windows_ApplicationModel_ISuspendingOperation<D>::GetDeferral() const
{
    Windows::ApplicationModel::SuspendingDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ISuspendingOperation)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_ISuspendingOperation<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ISuspendingOperation)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::IAppDisplayInfo> : produce_base<D, Windows::ApplicationModel::IAppDisplayInfo>
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

    HRESULT __stdcall GetLogo(abi_t<Windows::Foundation::Size> size, ::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppUserModelId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppUserModelId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageFamilyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PackageFamilyName());
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
struct produce<D, Windows::ApplicationModel::ICameraApplicationManagerStatics> : produce_base<D, Windows::ApplicationModel::ICameraApplicationManagerStatics>
{
    HRESULT __stdcall ShowInstalledApplicationsUI() noexcept override
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
    HRESULT __stdcall get_DesignModeEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesignModeEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IEnteredBackgroundEventArgs> : produce_base<D, Windows::ApplicationModel::IEnteredBackgroundEventArgs>
{
    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
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
    HRESULT __stdcall LaunchFullTrustProcessForCurrentAppAsync(::IUnknown** asyncAction) noexcept override
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

    HRESULT __stdcall LaunchFullTrustProcessForCurrentAppWithParametersAsync(HSTRING parameterGroupId, ::IUnknown** asyncAction) noexcept override
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

    HRESULT __stdcall LaunchFullTrustProcessForAppAsync(HSTRING fullTrustPackageRelativeAppId, ::IUnknown** asyncAction) noexcept override
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

    HRESULT __stdcall LaunchFullTrustProcessForAppWithParametersAsync(HSTRING fullTrustPackageRelativeAppId, HSTRING parameterGroupId, ::IUnknown** asyncAction) noexcept override
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
    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_Id(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstalledLocation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstalledLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFramework(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsFramework());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dependencies(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Dependencies());
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
struct produce<D, Windows::ApplicationModel::IPackage2> : produce_base<D, Windows::ApplicationModel::IPackage2>
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

    HRESULT __stdcall get_PublisherDisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PublisherDisplayName());
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

    HRESULT __stdcall get_Logo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsResourcePackage(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsResourcePackage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBundle(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBundle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDevelopmentMode(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDevelopmentMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackage3> : produce_base<D, Windows::ApplicationModel::IPackage3>
{
    HRESULT __stdcall get_Status(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstalledDate(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstalledDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAppListEntriesAsync(::IUnknown** operation) noexcept override
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
    HRESULT __stdcall get_SignatureKind(abi_t<Windows::ApplicationModel::PackageSignatureKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignatureKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOptional(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOptional());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall VerifyContentIntegrityAsync(::IUnknown** operation) noexcept override
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
    HRESULT __stdcall GetContentGroupsAsync(::IUnknown** operation) noexcept override
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

    HRESULT __stdcall GetContentGroupAsync(HSTRING name, ::IUnknown** operation) noexcept override
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

    HRESULT __stdcall StageContentGroupsAsync(::IUnknown* names, ::IUnknown** operation) noexcept override
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

    HRESULT __stdcall StageContentGroupsWithPriorityAsync(::IUnknown* names, bool moveToHeadOfQueue, ::IUnknown** operation) noexcept override
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

    HRESULT __stdcall SetInUseAsync(bool inUse, ::IUnknown** operation) noexcept override
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
    HRESULT __stdcall add_PackageStaging(::IUnknown* handler, abi_t<event_token>* token) noexcept override
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

    HRESULT __stdcall remove_PackageStaging(abi_t<event_token> token) noexcept override
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

    HRESULT __stdcall add_PackageInstalling(::IUnknown* handler, abi_t<event_token>* token) noexcept override
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

    HRESULT __stdcall remove_PackageInstalling(abi_t<event_token> token) noexcept override
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

    HRESULT __stdcall add_PackageUpdating(::IUnknown* handler, abi_t<event_token>* token) noexcept override
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

    HRESULT __stdcall remove_PackageUpdating(abi_t<event_token> token) noexcept override
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

    HRESULT __stdcall add_PackageUninstalling(::IUnknown* handler, abi_t<event_token>* token) noexcept override
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

    HRESULT __stdcall remove_PackageUninstalling(abi_t<event_token> token) noexcept override
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

    HRESULT __stdcall add_PackageStatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
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

    HRESULT __stdcall remove_PackageStatusChanged(abi_t<event_token> token) noexcept override
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
    HRESULT __stdcall add_PackageContentGroupStaging(::IUnknown* handler, abi_t<event_token>* token) noexcept override
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

    HRESULT __stdcall remove_PackageContentGroupStaging(abi_t<event_token> token) noexcept override
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

    HRESULT __stdcall AddOptionalPackageAsync(HSTRING optionalPackageFamilyName, ::IUnknown** operation) noexcept override
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
struct produce<D, Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult> : produce_base<D, Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult>
{
    HRESULT __stdcall get_Package(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageCatalogStatics> : produce_base<D, Windows::ApplicationModel::IPackageCatalogStatics>
{
    HRESULT __stdcall OpenForCurrentPackage(::IUnknown** value) noexcept override
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

    HRESULT __stdcall OpenForCurrentUser(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_Package(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(abi_t<Windows::ApplicationModel::PackageContentGroupState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRequired(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRequired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageContentGroupStagingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageContentGroupStagingEventArgs>
{
    HRESULT __stdcall get_ActivityId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentGroupName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentGroupName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsContentGroupRequired(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsContentGroupRequired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageContentGroupStatics> : produce_base<D, Windows::ApplicationModel::IPackageContentGroupStatics>
{
    HRESULT __stdcall get_RequiredGroupName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequiredGroupName());
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
struct produce<D, Windows::ApplicationModel::IPackageId> : produce_base<D, Windows::ApplicationModel::IPackageId>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Version(abi_t<Windows::ApplicationModel::PackageVersion>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Architecture(abi_t<Windows::System::ProcessorArchitecture>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Architecture());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Publisher(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Publisher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PublisherId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PublisherId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FullName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FamilyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FamilyName());
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
struct produce<D, Windows::ApplicationModel::IPackageIdWithMetadata> : produce_base<D, Windows::ApplicationModel::IPackageIdWithMetadata>
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

    HRESULT __stdcall get_Author(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Author());
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
struct produce<D, Windows::ApplicationModel::IPackageInstallingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageInstallingEventArgs>
{
    HRESULT __stdcall get_ActivityId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStagingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageStagingEventArgs>
{
    HRESULT __stdcall get_ActivityId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStatics> : produce_base<D, Windows::ApplicationModel::IPackageStatics>
{
    HRESULT __stdcall get_Current(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Current());
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
struct produce<D, Windows::ApplicationModel::IPackageStatus> : produce_base<D, Windows::ApplicationModel::IPackageStatus>
{
    HRESULT __stdcall VerifyIsOK(bool* value) noexcept override
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

    HRESULT __stdcall get_NotAvailable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NotAvailable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageOffline(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PackageOffline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataOffline(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataOffline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Disabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Disabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NeedsRemediation(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NeedsRemediation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LicenseIssue(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LicenseIssue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Modified(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Modified());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tampered(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tampered());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DependencyIssue(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DependencyIssue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Servicing(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Servicing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeploymentInProgress(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeploymentInProgress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStatus2> : produce_base<D, Windows::ApplicationModel::IPackageStatus2>
{
    HRESULT __stdcall get_IsPartiallyStaged(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPartiallyStaged());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStatusChangedEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageStatusChangedEventArgs>
{
    HRESULT __stdcall get_Package(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
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
struct produce<D, Windows::ApplicationModel::IPackageUninstallingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageUninstallingEventArgs>
{
    HRESULT __stdcall get_ActivityId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageUpdatingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageUpdatingEventArgs>
{
    HRESULT __stdcall get_ActivityId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourcePackage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourcePackage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetPackage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetPackage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageWithMetadata> : produce_base<D, Windows::ApplicationModel::IPackageWithMetadata>
{
    HRESULT __stdcall get_InstallDate(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstallDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetThumbnailToken(HSTRING* value) noexcept override
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

    HRESULT __stdcall Launch(HSTRING parameters) noexcept override
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
    HRESULT __stdcall RequestEnableAsync(::IUnknown** operation) noexcept override
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

    HRESULT __stdcall Disable() noexcept override
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

    HRESULT __stdcall get_State(abi_t<Windows::ApplicationModel::StartupTaskState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TaskId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TaskId());
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
struct produce<D, Windows::ApplicationModel::IStartupTaskStatics> : produce_base<D, Windows::ApplicationModel::IStartupTaskStatics>
{
    HRESULT __stdcall GetForCurrentPackageAsync(::IUnknown** operation) noexcept override
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

    HRESULT __stdcall GetAsync(HSTRING taskId, ::IUnknown** operation) noexcept override
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
struct produce<D, Windows::ApplicationModel::ISuspendingEventArgs> : produce_base<D, Windows::ApplicationModel::ISuspendingEventArgs>
{
    HRESULT __stdcall get_SuspendingOperation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuspendingOperation());
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
struct produce<D, Windows::ApplicationModel::ISuspendingOperation> : produce_base<D, Windows::ApplicationModel::ISuspendingOperation>
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

    HRESULT __stdcall get_Deadline(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
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

template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult> {};

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
