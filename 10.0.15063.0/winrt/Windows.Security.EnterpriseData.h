// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Security.EnterpriseData.2.h"

namespace winrt::impl {

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_EnterpriseData_IBufferProtectUnprotectResult<D>::Buffer() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IBufferProtectUnprotectResult)->get_Buffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::EnterpriseData::DataProtectionInfo consume_Windows_Security_EnterpriseData_IBufferProtectUnprotectResult<D>::ProtectionInfo() const
{
    Windows::Security::EnterpriseData::DataProtectionInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IBufferProtectUnprotectResult)->get_ProtectionInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::EnterpriseData::DataProtectionStatus consume_Windows_Security_EnterpriseData_IDataProtectionInfo<D>::Status() const
{
    Windows::Security::EnterpriseData::DataProtectionStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IDataProtectionInfo)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_EnterpriseData_IDataProtectionInfo<D>::Identity() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IDataProtectionInfo)->get_Identity(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>::ProtectAsync(Windows::Storage::Streams::IBuffer const& data, param::hstring const& identity) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IDataProtectionManagerStatics)->ProtectAsync(get_abi(data), get_abi(identity), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>::UnprotectAsync(Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IDataProtectionManagerStatics)->UnprotectAsync(get_abi(data), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>::ProtectStreamAsync(Windows::Storage::Streams::IInputStream const& unprotectedStream, param::hstring const& identity, Windows::Storage::Streams::IOutputStream const& protectedStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IDataProtectionManagerStatics)->ProtectStreamAsync(get_abi(unprotectedStream), get_abi(identity), get_abi(protectedStream), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>::UnprotectStreamAsync(Windows::Storage::Streams::IInputStream const& protectedStream, Windows::Storage::Streams::IOutputStream const& unprotectedStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IDataProtectionManagerStatics)->UnprotectStreamAsync(get_abi(protectedStream), get_abi(unprotectedStream), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>::GetProtectionInfoAsync(Windows::Storage::Streams::IBuffer const& protectedData) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IDataProtectionManagerStatics)->GetProtectionInfoAsync(get_abi(protectedData), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>::GetStreamProtectionInfoAsync(Windows::Storage::Streams::IInputStream const& protectedStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IDataProtectionManagerStatics)->GetStreamProtectionInfoAsync(get_abi(protectedStream), put_abi(result)));
    return result;
}

template <typename D> Windows::Security::EnterpriseData::FileProtectionStatus consume_Windows_Security_EnterpriseData_IFileProtectionInfo<D>::Status() const
{
    Windows::Security::EnterpriseData::FileProtectionStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionInfo)->get_Status(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Security_EnterpriseData_IFileProtectionInfo<D>::IsRoamable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionInfo)->get_IsRoamable(&value));
    return value;
}

template <typename D> hstring consume_Windows_Security_EnterpriseData_IFileProtectionInfo<D>::Identity() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionInfo)->get_Identity(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::ProtectAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->ProtectAsync(get_abi(target), get_abi(identity), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::CopyProtectionAsync(Windows::Storage::IStorageItem const& source, Windows::Storage::IStorageItem const& target) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->CopyProtectionAsync(get_abi(source), get_abi(target), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::GetProtectionInfoAsync(Windows::Storage::IStorageItem const& source) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->GetProtectionInfoAsync(get_abi(source), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->SaveFileAsContainerAsync(get_abi(protectedFile), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->LoadFileFromContainerAsync(get_abi(containerFile), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->LoadFileFromContainerWithTargetAsync(get_abi(containerFile), get_abi(target), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedFileCreateResult> consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::CreateProtectedAndOpenAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& desiredName, param::hstring const& identity, Windows::Storage::CreationCollisionOption const& collisionOption) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedFileCreateResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->CreateProtectedAndOpenAsync(get_abi(parentFolder), get_abi(desiredName), get_abi(identity), get_abi(collisionOption), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics2<D>::IsContainerAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionManagerStatics2)->IsContainerAsync(get_abi(file), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics2<D>::LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target, Windows::Storage::NameCollisionOption const& collisionOption) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionManagerStatics2)->LoadFileFromContainerWithTargetAndNameCollisionOptionAsync(get_abi(containerFile), get_abi(target), get_abi(collisionOption), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics2<D>::SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile, param::async_iterable<hstring> const& sharedWithIdentities) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionManagerStatics2)->SaveFileAsContainerWithSharingAsync(get_abi(protectedFile), get_abi(sharedWithIdentities), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics3<D>::UnprotectAsync(Windows::Storage::IStorageItem const& target) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionManagerStatics3)->UnprotectAsync(get_abi(target), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics3<D>::UnprotectAsync(Windows::Storage::IStorageItem const& target, Windows::Security::EnterpriseData::FileUnprotectOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileProtectionManagerStatics3)->UnprotectWithOptionsAsync(get_abi(target), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionStatus> consume_Windows_Security_EnterpriseData_IFileRevocationManagerStatics<D>::ProtectAsync(Windows::Storage::IStorageItem const& storageItem, param::hstring const& enterpriseIdentity) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileRevocationManagerStatics)->ProtectAsync(get_abi(storageItem), get_abi(enterpriseIdentity), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Security_EnterpriseData_IFileRevocationManagerStatics<D>::CopyProtectionAsync(Windows::Storage::IStorageItem const& sourceStorageItem, Windows::Storage::IStorageItem const& targetStorageItem) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileRevocationManagerStatics)->CopyProtectionAsync(get_abi(sourceStorageItem), get_abi(targetStorageItem), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Security_EnterpriseData_IFileRevocationManagerStatics<D>::Revoke(param::hstring const& enterpriseIdentity) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileRevocationManagerStatics)->Revoke(get_abi(enterpriseIdentity)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionStatus> consume_Windows_Security_EnterpriseData_IFileRevocationManagerStatics<D>::GetStatusAsync(Windows::Storage::IStorageItem const& storageItem) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileRevocationManagerStatics)->GetStatusAsync(get_abi(storageItem), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Security_EnterpriseData_IFileUnprotectOptions<D>::Audit(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileUnprotectOptions)->put_Audit(value));
}

template <typename D> bool consume_Windows_Security_EnterpriseData_IFileUnprotectOptions<D>::Audit() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileUnprotectOptions)->get_Audit(&value));
    return value;
}

template <typename D> Windows::Security::EnterpriseData::FileUnprotectOptions consume_Windows_Security_EnterpriseData_IFileUnprotectOptionsFactory<D>::Create(bool audit) const
{
    Windows::Security::EnterpriseData::FileUnprotectOptions result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory)->Create(audit, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_EnterpriseData_IProtectedAccessResumedEventArgs<D>::Identities() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs)->get_Identities(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_EnterpriseData_IProtectedAccessSuspendingEventArgs<D>::Identities() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs)->get_Identities(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Security_EnterpriseData_IProtectedAccessSuspendingEventArgs<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Security_EnterpriseData_IProtectedAccessSuspendingEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::Security::EnterpriseData::ProtectedImportExportStatus consume_Windows_Security_EnterpriseData_IProtectedContainerExportResult<D>::Status() const
{
    Windows::Security::EnterpriseData::ProtectedImportExportStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectedContainerExportResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Security_EnterpriseData_IProtectedContainerExportResult<D>::File() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectedContainerExportResult)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::EnterpriseData::ProtectedImportExportStatus consume_Windows_Security_EnterpriseData_IProtectedContainerImportResult<D>::Status() const
{
    Windows::Security::EnterpriseData::ProtectedImportExportStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectedContainerImportResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Security_EnterpriseData_IProtectedContainerImportResult<D>::File() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectedContainerImportResult)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_EnterpriseData_IProtectedContentRevokedEventArgs<D>::Identities() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs)->get_Identities(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Security_EnterpriseData_IProtectedFileCreateResult<D>::File() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectedFileCreateResult)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_Security_EnterpriseData_IProtectedFileCreateResult<D>::Stream() const
{
    Windows::Storage::Streams::IRandomAccessStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectedFileCreateResult)->get_Stream(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::EnterpriseData::FileProtectionInfo consume_Windows_Security_EnterpriseData_IProtectedFileCreateResult<D>::ProtectionInfo() const
{
    Windows::Security::EnterpriseData::FileProtectionInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectedFileCreateResult)->get_ProtectionInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::Action(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->put_Action(get_abi(value)));
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyAuditAction consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::Action() const
{
    Windows::Security::EnterpriseData::ProtectionPolicyAuditAction value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->get_Action(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::DataDescription(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->put_DataDescription(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::DataDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->get_DataDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::SourceDescription(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->put_SourceDescription(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::SourceDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->get_SourceDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::TargetDescription(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->put_TargetDescription(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::TargetDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->get_TargetDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfoFactory<D>::Create(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription, param::hstring const& sourceDescription, param::hstring const& targetDescription) const
{
    Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory)->Create(get_abi(action), get_abi(dataDescription), get_abi(sourceDescription), get_abi(targetDescription), put_abi(result)));
    return result;
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfoFactory<D>::CreateWithActionAndDataDescription(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription) const
{
    Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory)->CreateWithActionAndDataDescription(get_abi(action), get_abi(dataDescription), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Security_EnterpriseData_IProtectionPolicyManager<D>::Identity(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManager)->put_Identity(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_EnterpriseData_IProtectionPolicyManager<D>::Identity() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManager)->get_Identity(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_EnterpriseData_IProtectionPolicyManager2<D>::ShowEnterpriseIndicator(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManager2)->put_ShowEnterpriseIndicator(value));
}

template <typename D> bool consume_Windows_Security_EnterpriseData_IProtectionPolicyManager2<D>::ShowEnterpriseIndicator() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManager2)->get_ShowEnterpriseIndicator(&value));
    return value;
}

template <typename D> bool consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::IsIdentityManaged(param::hstring const& identity) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->IsIdentityManaged(get_abi(identity), &result));
    return result;
}

template <typename D> bool consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::TryApplyProcessUIPolicy(param::hstring const& identity) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->TryApplyProcessUIPolicy(get_abi(identity), &result));
    return result;
}

template <typename D> void consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ClearProcessUIPolicy() const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->ClearProcessUIPolicy());
}

template <typename D> Windows::Security::EnterpriseData::ThreadNetworkContext consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::CreateCurrentThreadNetworkContext(param::hstring const& identity) const
{
    Windows::Security::EnterpriseData::ThreadNetworkContext result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->CreateCurrentThreadNetworkContext(get_abi(identity), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::GetPrimaryManagedIdentityForNetworkEndpointAsync(Windows::Networking::HostName const& endpointHost) const
{
    Windows::Foundation::IAsyncOperation<hstring> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->GetPrimaryManagedIdentityForNetworkEndpointAsync(get_abi(endpointHost), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::RevokeContent(param::hstring const& identity) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->RevokeContent(get_abi(identity)));
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyManager consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::GetForCurrentView() const
{
    Windows::Security::EnterpriseData::ProtectionPolicyManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->GetForCurrentView(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessSuspending(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->add_ProtectedAccessSuspending(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessSuspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>(this, &abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedAccessSuspending, ProtectedAccessSuspending(handler));
}

template <typename D> void consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessSuspending(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->remove_ProtectedAccessSuspending(get_abi(token)));
}

template <typename D> event_token consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessResumed(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->add_ProtectedAccessResumed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessResumed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>(this, &abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedAccessResumed, ProtectedAccessResumed(handler));
}

template <typename D> void consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessResumed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->remove_ProtectedAccessResumed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedContentRevoked(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->add_ProtectedContentRevoked(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedContentRevoked(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>(this, &abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedContentRevoked, ProtectedContentRevoked(handler));
}

template <typename D> void consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedContentRevoked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->remove_ProtectedContentRevoked(get_abi(token)));
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::CheckAccess(param::hstring const& sourceIdentity, param::hstring const& targetIdentity) const
{
    Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult result{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->CheckAccess(get_abi(sourceIdentity), get_abi(targetIdentity), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->RequestAccessAsync(get_abi(sourceIdentity), get_abi(targetIdentity), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::HasContentBeenRevokedSince(param::hstring const& identity, Windows::Foundation::DateTime const& since) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->HasContentBeenRevokedSince(get_abi(identity), get_abi(since), &result));
    return result;
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::CheckAccessForApp(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName) const
{
    Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult result{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->CheckAccessForApp(get_abi(sourceIdentity), get_abi(appPackageFamilyName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->RequestAccessForAppAsync(get_abi(sourceIdentity), get_abi(appPackageFamilyName), put_abi(result)));
    return result;
}

template <typename D> Windows::Security::EnterpriseData::EnforcementLevel consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::GetEnforcementLevel(param::hstring const& identity) const
{
    Windows::Security::EnterpriseData::EnforcementLevel value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->GetEnforcementLevel(get_abi(identity), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::IsUserDecryptionAllowed(param::hstring const& identity) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->IsUserDecryptionAllowed(get_abi(identity), &value));
    return value;
}

template <typename D> bool consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::IsProtectionUnderLockRequired(param::hstring const& identity) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->IsProtectionUnderLockRequired(get_abi(identity), &value));
    return value;
}

template <typename D> event_token consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::PolicyChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->add_PolicyChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::PolicyChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>(this, &abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>::remove_PolicyChanged, PolicyChanged(handler));
}

template <typename D> void consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::PolicyChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->remove_PolicyChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::IsProtectionEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->get_IsProtectionEnabled(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3<D>::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3)->RequestAccessWithAuditingInfoAsync(get_abi(sourceIdentity), get_abi(targetIdentity), get_abi(auditInfo), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3<D>::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3)->RequestAccessWithMessageAsync(get_abi(sourceIdentity), get_abi(targetIdentity), get_abi(auditInfo), get_abi(messageFromApp), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3<D>::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3)->RequestAccessForAppWithAuditingInfoAsync(get_abi(sourceIdentity), get_abi(appPackageFamilyName), get_abi(auditInfo), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3<D>::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3)->RequestAccessForAppWithMessageAsync(get_abi(sourceIdentity), get_abi(appPackageFamilyName), get_abi(auditInfo), get_abi(messageFromApp), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3<D>::LogAuditEvent(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const
{
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3)->LogAuditEvent(get_abi(sourceIdentity), get_abi(targetIdentity), get_abi(auditInfo)));
}

template <typename D> bool consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::IsRoamableProtectionEnabled(param::hstring const& identity) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->IsRoamableProtectionEnabled(get_abi(identity), &value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->RequestAccessWithBehaviorAsync(get_abi(sourceIdentity), get_abi(targetIdentity), get_abi(auditInfo), get_abi(messageFromApp), get_abi(behavior), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->RequestAccessForAppWithBehaviorAsync(get_abi(sourceIdentity), get_abi(appPackageFamilyName), get_abi(auditInfo), get_abi(messageFromApp), get_abi(behavior), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->RequestAccessToFilesForAppAsync(get_abi(sourceItemList), get_abi(appPackageFamilyName), get_abi(auditInfo), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->RequestAccessToFilesForAppWithMessageAndBehaviorAsync(get_abi(sourceItemList), get_abi(appPackageFamilyName), get_abi(auditInfo), get_abi(messageFromApp), get_abi(behavior), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->RequestAccessToFilesForProcessAsync(get_abi(sourceItemList), processId, get_abi(auditInfo), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->RequestAccessToFilesForProcessWithMessageAndBehaviorAsync(get_abi(sourceItemList), processId, get_abi(auditInfo), get_abi(messageFromApp), get_abi(behavior), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::IsFileProtectionRequiredAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->IsFileProtectionRequiredAsync(get_abi(target), get_abi(identity), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::IsFileProtectionRequiredForNewFileAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& identity, param::hstring const& desiredName) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->IsFileProtectionRequiredForNewFileAsync(get_abi(parentFolder), get_abi(identity), get_abi(desiredName), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::PrimaryManagedIdentity() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->get_PrimaryManagedIdentity(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::GetPrimaryManagedIdentityForIdentity(param::hstring const& identity) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->GetPrimaryManagedIdentityForIdentity(get_abi(identity), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IBufferProtectUnprotectResult> : produce_base<D, Windows::Security::EnterpriseData::IBufferProtectUnprotectResult>
{
    HRESULT __stdcall get_Buffer(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Buffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtectionInfo());
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
struct produce<D, Windows::Security::EnterpriseData::IDataProtectionInfo> : produce_base<D, Windows::Security::EnterpriseData::IDataProtectionInfo>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Security::EnterpriseData::DataProtectionStatus>* value) noexcept override
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

    HRESULT __stdcall get_Identity(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Identity());
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
struct produce<D, Windows::Security::EnterpriseData::IDataProtectionManagerStatics> : produce_base<D, Windows::Security::EnterpriseData::IDataProtectionManagerStatics>
{
    HRESULT __stdcall ProtectAsync(::IUnknown* data, HSTRING identity, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ProtectAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<hstring const*>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnprotectAsync(::IUnknown* data, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UnprotectAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ProtectStreamAsync(::IUnknown* unprotectedStream, HSTRING identity, ::IUnknown* protectedStream, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ProtectStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&unprotectedStream), *reinterpret_cast<hstring const*>(&identity), *reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&protectedStream)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnprotectStreamAsync(::IUnknown* protectedStream, ::IUnknown* unprotectedStream, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UnprotectStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&protectedStream), *reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&unprotectedStream)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetProtectionInfoAsync(::IUnknown* protectedData, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetProtectionInfoAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&protectedData)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStreamProtectionInfoAsync(::IUnknown* protectedStream, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetStreamProtectionInfoAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&protectedStream)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IFileProtectionInfo> : produce_base<D, Windows::Security::EnterpriseData::IFileProtectionInfo>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Security::EnterpriseData::FileProtectionStatus>* value) noexcept override
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

    HRESULT __stdcall get_IsRoamable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRoamable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Identity(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Identity());
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
struct produce<D, Windows::Security::EnterpriseData::IFileProtectionManagerStatics> : produce_base<D, Windows::Security::EnterpriseData::IFileProtectionManagerStatics>
{
    HRESULT __stdcall ProtectAsync(::IUnknown* target, HSTRING identity, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ProtectAsync(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&target), *reinterpret_cast<hstring const*>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopyProtectionAsync(::IUnknown* source, ::IUnknown* target, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CopyProtectionAsync(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&source), *reinterpret_cast<Windows::Storage::IStorageItem const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetProtectionInfoAsync(::IUnknown* source, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetProtectionInfoAsync(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&source)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveFileAsContainerAsync(::IUnknown* protectedFile, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SaveFileAsContainerAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&protectedFile)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadFileFromContainerAsync(::IUnknown* containerFile, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().LoadFileFromContainerAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&containerFile)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadFileFromContainerWithTargetAsync(::IUnknown* containerFile, ::IUnknown* target, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().LoadFileFromContainerAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&containerFile), *reinterpret_cast<Windows::Storage::IStorageItem const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateProtectedAndOpenAsync(::IUnknown* parentFolder, HSTRING desiredName, HSTRING identity, abi_t<Windows::Storage::CreationCollisionOption> collisionOption, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateProtectedAndOpenAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&parentFolder), *reinterpret_cast<hstring const*>(&desiredName), *reinterpret_cast<hstring const*>(&identity), *reinterpret_cast<Windows::Storage::CreationCollisionOption const*>(&collisionOption)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IFileProtectionManagerStatics2> : produce_base<D, Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>
{
    HRESULT __stdcall IsContainerAsync(::IUnknown* file, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsContainerAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadFileFromContainerWithTargetAndNameCollisionOptionAsync(::IUnknown* containerFile, ::IUnknown* target, abi_t<Windows::Storage::NameCollisionOption> collisionOption, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().LoadFileFromContainerAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&containerFile), *reinterpret_cast<Windows::Storage::IStorageItem const*>(&target), *reinterpret_cast<Windows::Storage::NameCollisionOption const*>(&collisionOption)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveFileAsContainerWithSharingAsync(::IUnknown* protectedFile, ::IUnknown* sharedWithIdentities, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SaveFileAsContainerAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&protectedFile), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&sharedWithIdentities)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IFileProtectionManagerStatics3> : produce_base<D, Windows::Security::EnterpriseData::IFileProtectionManagerStatics3>
{
    HRESULT __stdcall UnprotectAsync(::IUnknown* target, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UnprotectAsync(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnprotectWithOptionsAsync(::IUnknown* target, ::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UnprotectAsync(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&target), *reinterpret_cast<Windows::Security::EnterpriseData::FileUnprotectOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IFileRevocationManagerStatics> : produce_base<D, Windows::Security::EnterpriseData::IFileRevocationManagerStatics>
{
    HRESULT __stdcall ProtectAsync(::IUnknown* storageItem, HSTRING enterpriseIdentity, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ProtectAsync(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&storageItem), *reinterpret_cast<hstring const*>(&enterpriseIdentity)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopyProtectionAsync(::IUnknown* sourceStorageItem, ::IUnknown* targetStorageItem, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CopyProtectionAsync(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&sourceStorageItem), *reinterpret_cast<Windows::Storage::IStorageItem const*>(&targetStorageItem)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Revoke(HSTRING enterpriseIdentity) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Revoke(*reinterpret_cast<hstring const*>(&enterpriseIdentity));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStatusAsync(::IUnknown* storageItem, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetStatusAsync(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&storageItem)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IFileUnprotectOptions> : produce_base<D, Windows::Security::EnterpriseData::IFileUnprotectOptions>
{
    HRESULT __stdcall put_Audit(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Audit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Audit(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Audit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory> : produce_base<D, Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory>
{
    HRESULT __stdcall Create(bool audit, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(audit));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs> : produce_base<D, Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs>
{
    HRESULT __stdcall get_Identities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Identities());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs> : produce_base<D, Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs>
{
    HRESULT __stdcall get_Identities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Identities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall GetDeferral(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IProtectedContainerExportResult> : produce_base<D, Windows::Security::EnterpriseData::IProtectedContainerExportResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Security::EnterpriseData::ProtectedImportExportStatus>* value) noexcept override
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

    HRESULT __stdcall get_File(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().File());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectedContainerImportResult> : produce_base<D, Windows::Security::EnterpriseData::IProtectedContainerImportResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Security::EnterpriseData::ProtectedImportExportStatus>* value) noexcept override
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

    HRESULT __stdcall get_File(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().File());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs> : produce_base<D, Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs>
{
    HRESULT __stdcall get_Identities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Identities());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectedFileCreateResult> : produce_base<D, Windows::Security::EnterpriseData::IProtectedFileCreateResult>
{
    HRESULT __stdcall get_File(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().File());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Stream(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Stream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtectionInfo());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo>
{
    HRESULT __stdcall put_Action(abi_t<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Action(*reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Action(abi_t<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Action());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataDescription(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataDescription(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceDescription(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceDescription(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetDescription(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetDescription(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetDescription());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>
{
    HRESULT __stdcall Create(abi_t<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction> action, HSTRING dataDescription, HSTRING sourceDescription, HSTRING targetDescription, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const*>(&action), *reinterpret_cast<hstring const*>(&dataDescription), *reinterpret_cast<hstring const*>(&sourceDescription), *reinterpret_cast<hstring const*>(&targetDescription)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithActionAndDataDescription(abi_t<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction> action, HSTRING dataDescription, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithActionAndDataDescription(*reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const*>(&action), *reinterpret_cast<hstring const*>(&dataDescription)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyManager> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyManager>
{
    HRESULT __stdcall put_Identity(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Identity(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Identity(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Identity());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyManager2> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyManager2>
{
    HRESULT __stdcall put_ShowEnterpriseIndicator(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowEnterpriseIndicator(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowEnterpriseIndicator(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShowEnterpriseIndicator());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>
{
    HRESULT __stdcall IsIdentityManaged(HSTRING identity, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsIdentityManaged(*reinterpret_cast<hstring const*>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryApplyProcessUIPolicy(HSTRING identity, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryApplyProcessUIPolicy(*reinterpret_cast<hstring const*>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearProcessUIPolicy() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearProcessUIPolicy();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCurrentThreadNetworkContext(HSTRING identity, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateCurrentThreadNetworkContext(*reinterpret_cast<hstring const*>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPrimaryManagedIdentityForNetworkEndpointAsync(::IUnknown* endpointHost, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetPrimaryManagedIdentityForNetworkEndpointAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&endpointHost)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RevokeContent(HSTRING identity) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RevokeContent(*reinterpret_cast<hstring const*>(&identity));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetForCurrentView(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ProtectedAccessSuspending(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ProtectedAccessSuspending(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ProtectedAccessSuspending(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectedAccessSuspending(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ProtectedAccessResumed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ProtectedAccessResumed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ProtectedAccessResumed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectedAccessResumed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ProtectedContentRevoked(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ProtectedContentRevoked(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ProtectedContentRevoked(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectedContentRevoked(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CheckAccess(HSTRING sourceIdentity, HSTRING targetIdentity, abi_t<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CheckAccess(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&targetIdentity)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessAsync(HSTRING sourceIdentity, HSTRING targetIdentity, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&targetIdentity)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>
{
    HRESULT __stdcall HasContentBeenRevokedSince(HSTRING identity, abi_t<Windows::Foundation::DateTime> since, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().HasContentBeenRevokedSince(*reinterpret_cast<hstring const*>(&identity), *reinterpret_cast<Windows::Foundation::DateTime const*>(&since)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CheckAccessForApp(HSTRING sourceIdentity, HSTRING appPackageFamilyName, abi_t<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CheckAccessForApp(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&appPackageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessForAppAsync(HSTRING sourceIdentity, HSTRING appPackageFamilyName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessForAppAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&appPackageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetEnforcementLevel(HSTRING identity, abi_t<Windows::Security::EnterpriseData::EnforcementLevel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetEnforcementLevel(*reinterpret_cast<hstring const*>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsUserDecryptionAllowed(HSTRING identity, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsUserDecryptionAllowed(*reinterpret_cast<hstring const*>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsProtectionUnderLockRequired(HSTRING identity, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsProtectionUnderLockRequired(*reinterpret_cast<hstring const*>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PolicyChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PolicyChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PolicyChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PolicyChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsProtectionEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsProtectionEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>
{
    HRESULT __stdcall RequestAccessWithAuditingInfoAsync(HSTRING sourceIdentity, HSTRING targetIdentity, ::IUnknown* auditInfo, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&targetIdentity), *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessWithMessageAsync(HSTRING sourceIdentity, HSTRING targetIdentity, ::IUnknown* auditInfo, HSTRING messageFromApp, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&targetIdentity), *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo), *reinterpret_cast<hstring const*>(&messageFromApp)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessForAppWithAuditingInfoAsync(HSTRING sourceIdentity, HSTRING appPackageFamilyName, ::IUnknown* auditInfo, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessForAppAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&appPackageFamilyName), *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessForAppWithMessageAsync(HSTRING sourceIdentity, HSTRING appPackageFamilyName, ::IUnknown* auditInfo, HSTRING messageFromApp, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessForAppAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&appPackageFamilyName), *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo), *reinterpret_cast<hstring const*>(&messageFromApp)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LogAuditEvent(HSTRING sourceIdentity, HSTRING targetIdentity, ::IUnknown* auditInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogAuditEvent(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&targetIdentity), *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>
{
    HRESULT __stdcall IsRoamableProtectionEnabled(HSTRING identity, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRoamableProtectionEnabled(*reinterpret_cast<hstring const*>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessWithBehaviorAsync(HSTRING sourceIdentity, HSTRING targetIdentity, ::IUnknown* auditInfo, HSTRING messageFromApp, abi_t<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior> behavior, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&targetIdentity), *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo), *reinterpret_cast<hstring const*>(&messageFromApp), *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const*>(&behavior)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessForAppWithBehaviorAsync(HSTRING sourceIdentity, HSTRING appPackageFamilyName, ::IUnknown* auditInfo, HSTRING messageFromApp, abi_t<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior> behavior, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessForAppAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&appPackageFamilyName), *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo), *reinterpret_cast<hstring const*>(&messageFromApp), *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const*>(&behavior)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessToFilesForAppAsync(::IUnknown* sourceItemList, HSTRING appPackageFamilyName, ::IUnknown* auditInfo, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessToFilesForAppAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem> const*>(&sourceItemList), *reinterpret_cast<hstring const*>(&appPackageFamilyName), *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessToFilesForAppWithMessageAndBehaviorAsync(::IUnknown* sourceItemList, HSTRING appPackageFamilyName, ::IUnknown* auditInfo, HSTRING messageFromApp, abi_t<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior> behavior, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessToFilesForAppAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem> const*>(&sourceItemList), *reinterpret_cast<hstring const*>(&appPackageFamilyName), *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo), *reinterpret_cast<hstring const*>(&messageFromApp), *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const*>(&behavior)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessToFilesForProcessAsync(::IUnknown* sourceItemList, uint32_t processId, ::IUnknown* auditInfo, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessToFilesForProcessAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem> const*>(&sourceItemList), processId, *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessToFilesForProcessWithMessageAndBehaviorAsync(::IUnknown* sourceItemList, uint32_t processId, ::IUnknown* auditInfo, HSTRING messageFromApp, abi_t<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior> behavior, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessToFilesForProcessAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem> const*>(&sourceItemList), processId, *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo), *reinterpret_cast<hstring const*>(&messageFromApp), *reinterpret_cast<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const*>(&behavior)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsFileProtectionRequiredAsync(::IUnknown* target, HSTRING identity, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsFileProtectionRequiredAsync(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&target), *reinterpret_cast<hstring const*>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsFileProtectionRequiredForNewFileAsync(::IUnknown* parentFolder, HSTRING identity, HSTRING desiredName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsFileProtectionRequiredForNewFileAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&parentFolder), *reinterpret_cast<hstring const*>(&identity), *reinterpret_cast<hstring const*>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrimaryManagedIdentity(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrimaryManagedIdentity());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPrimaryManagedIdentityForIdentity(HSTRING identity, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetPrimaryManagedIdentityForIdentity(*reinterpret_cast<hstring const*>(&identity)));
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
struct produce<D, Windows::Security::EnterpriseData::IThreadNetworkContext> : produce_base<D, Windows::Security::EnterpriseData::IThreadNetworkContext>
{};

}

WINRT_EXPORT namespace winrt::Windows::Security::EnterpriseData {

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> DataProtectionManager::ProtectAsync(Windows::Storage::Streams::IBuffer const& data, param::hstring const& identity)
{
    return get_activation_factory<DataProtectionManager, Windows::Security::EnterpriseData::IDataProtectionManagerStatics>().ProtectAsync(data, identity);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> DataProtectionManager::UnprotectAsync(Windows::Storage::Streams::IBuffer const& data)
{
    return get_activation_factory<DataProtectionManager, Windows::Security::EnterpriseData::IDataProtectionManagerStatics>().UnprotectAsync(data);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> DataProtectionManager::ProtectStreamAsync(Windows::Storage::Streams::IInputStream const& unprotectedStream, param::hstring const& identity, Windows::Storage::Streams::IOutputStream const& protectedStream)
{
    return get_activation_factory<DataProtectionManager, Windows::Security::EnterpriseData::IDataProtectionManagerStatics>().ProtectStreamAsync(unprotectedStream, identity, protectedStream);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> DataProtectionManager::UnprotectStreamAsync(Windows::Storage::Streams::IInputStream const& protectedStream, Windows::Storage::Streams::IOutputStream const& unprotectedStream)
{
    return get_activation_factory<DataProtectionManager, Windows::Security::EnterpriseData::IDataProtectionManagerStatics>().UnprotectStreamAsync(protectedStream, unprotectedStream);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> DataProtectionManager::GetProtectionInfoAsync(Windows::Storage::Streams::IBuffer const& protectedData)
{
    return get_activation_factory<DataProtectionManager, Windows::Security::EnterpriseData::IDataProtectionManagerStatics>().GetProtectionInfoAsync(protectedData);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> DataProtectionManager::GetStreamProtectionInfoAsync(Windows::Storage::Streams::IInputStream const& protectedStream)
{
    return get_activation_factory<DataProtectionManager, Windows::Security::EnterpriseData::IDataProtectionManagerStatics>().GetStreamProtectionInfoAsync(protectedStream);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> FileProtectionManager::ProtectAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity)
{
    return get_activation_factory<FileProtectionManager, Windows::Security::EnterpriseData::IFileProtectionManagerStatics>().ProtectAsync(target, identity);
}

inline Windows::Foundation::IAsyncOperation<bool> FileProtectionManager::CopyProtectionAsync(Windows::Storage::IStorageItem const& source, Windows::Storage::IStorageItem const& target)
{
    return get_activation_factory<FileProtectionManager, Windows::Security::EnterpriseData::IFileProtectionManagerStatics>().CopyProtectionAsync(source, target);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> FileProtectionManager::GetProtectionInfoAsync(Windows::Storage::IStorageItem const& source)
{
    return get_activation_factory<FileProtectionManager, Windows::Security::EnterpriseData::IFileProtectionManagerStatics>().GetProtectionInfoAsync(source);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> FileProtectionManager::SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile)
{
    return get_activation_factory<FileProtectionManager, Windows::Security::EnterpriseData::IFileProtectionManagerStatics>().SaveFileAsContainerAsync(protectedFile);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> FileProtectionManager::LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile)
{
    return get_activation_factory<FileProtectionManager, Windows::Security::EnterpriseData::IFileProtectionManagerStatics>().LoadFileFromContainerAsync(containerFile);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> FileProtectionManager::LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target)
{
    return get_activation_factory<FileProtectionManager, Windows::Security::EnterpriseData::IFileProtectionManagerStatics>().LoadFileFromContainerAsync(containerFile, target);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedFileCreateResult> FileProtectionManager::CreateProtectedAndOpenAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& desiredName, param::hstring const& identity, Windows::Storage::CreationCollisionOption const& collisionOption)
{
    return get_activation_factory<FileProtectionManager, Windows::Security::EnterpriseData::IFileProtectionManagerStatics>().CreateProtectedAndOpenAsync(parentFolder, desiredName, identity, collisionOption);
}

inline Windows::Foundation::IAsyncOperation<bool> FileProtectionManager::IsContainerAsync(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<FileProtectionManager, Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>().IsContainerAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> FileProtectionManager::LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target, Windows::Storage::NameCollisionOption const& collisionOption)
{
    return get_activation_factory<FileProtectionManager, Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>().LoadFileFromContainerAsync(containerFile, target, collisionOption);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> FileProtectionManager::SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile, param::async_iterable<hstring> const& sharedWithIdentities)
{
    return get_activation_factory<FileProtectionManager, Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>().SaveFileAsContainerAsync(protectedFile, sharedWithIdentities);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> FileProtectionManager::UnprotectAsync(Windows::Storage::IStorageItem const& target)
{
    return get_activation_factory<FileProtectionManager, Windows::Security::EnterpriseData::IFileProtectionManagerStatics3>().UnprotectAsync(target);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> FileProtectionManager::UnprotectAsync(Windows::Storage::IStorageItem const& target, Windows::Security::EnterpriseData::FileUnprotectOptions const& options)
{
    return get_activation_factory<FileProtectionManager, Windows::Security::EnterpriseData::IFileProtectionManagerStatics3>().UnprotectAsync(target, options);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionStatus> FileRevocationManager::ProtectAsync(Windows::Storage::IStorageItem const& storageItem, param::hstring const& enterpriseIdentity)
{
    return get_activation_factory<FileRevocationManager, Windows::Security::EnterpriseData::IFileRevocationManagerStatics>().ProtectAsync(storageItem, enterpriseIdentity);
}

inline Windows::Foundation::IAsyncOperation<bool> FileRevocationManager::CopyProtectionAsync(Windows::Storage::IStorageItem const& sourceStorageItem, Windows::Storage::IStorageItem const& targetStorageItem)
{
    return get_activation_factory<FileRevocationManager, Windows::Security::EnterpriseData::IFileRevocationManagerStatics>().CopyProtectionAsync(sourceStorageItem, targetStorageItem);
}

inline void FileRevocationManager::Revoke(param::hstring const& enterpriseIdentity)
{
    get_activation_factory<FileRevocationManager, Windows::Security::EnterpriseData::IFileRevocationManagerStatics>().Revoke(enterpriseIdentity);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionStatus> FileRevocationManager::GetStatusAsync(Windows::Storage::IStorageItem const& storageItem)
{
    return get_activation_factory<FileRevocationManager, Windows::Security::EnterpriseData::IFileRevocationManagerStatics>().GetStatusAsync(storageItem);
}

inline FileUnprotectOptions::FileUnprotectOptions(bool audit) :
    FileUnprotectOptions(get_activation_factory<FileUnprotectOptions, Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory>().Create(audit))
{}

inline ProtectionPolicyAuditInfo::ProtectionPolicyAuditInfo(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription, param::hstring const& sourceDescription, param::hstring const& targetDescription) :
    ProtectionPolicyAuditInfo(get_activation_factory<ProtectionPolicyAuditInfo, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>().Create(action, dataDescription, sourceDescription, targetDescription))
{}

inline ProtectionPolicyAuditInfo::ProtectionPolicyAuditInfo(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription) :
    ProtectionPolicyAuditInfo(get_activation_factory<ProtectionPolicyAuditInfo, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>().CreateWithActionAndDataDescription(action, dataDescription))
{}

inline bool ProtectionPolicyManager::IsIdentityManaged(param::hstring const& identity)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().IsIdentityManaged(identity);
}

inline bool ProtectionPolicyManager::TryApplyProcessUIPolicy(param::hstring const& identity)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().TryApplyProcessUIPolicy(identity);
}

inline void ProtectionPolicyManager::ClearProcessUIPolicy()
{
    get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().ClearProcessUIPolicy();
}

inline Windows::Security::EnterpriseData::ThreadNetworkContext ProtectionPolicyManager::CreateCurrentThreadNetworkContext(param::hstring const& identity)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().CreateCurrentThreadNetworkContext(identity);
}

inline Windows::Foundation::IAsyncOperation<hstring> ProtectionPolicyManager::GetPrimaryManagedIdentityForNetworkEndpointAsync(Windows::Networking::HostName const& endpointHost)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().GetPrimaryManagedIdentityForNetworkEndpointAsync(endpointHost);
}

inline void ProtectionPolicyManager::RevokeContent(param::hstring const& identity)
{
    get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().RevokeContent(identity);
}

inline Windows::Security::EnterpriseData::ProtectionPolicyManager ProtectionPolicyManager::GetForCurrentView()
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().GetForCurrentView();
}

inline event_token ProtectionPolicyManager::ProtectedAccessSuspending(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().ProtectedAccessSuspending(handler);
}

inline factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics> ProtectionPolicyManager::ProtectedAccessSuspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler)
{
    auto factory = get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>();
    return { factory, &abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedAccessSuspending, factory.ProtectedAccessSuspending(handler) };
}

inline void ProtectionPolicyManager::ProtectedAccessSuspending(event_token const& token)
{
    get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().ProtectedAccessSuspending(token);
}

inline event_token ProtectionPolicyManager::ProtectedAccessResumed(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().ProtectedAccessResumed(handler);
}

inline factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics> ProtectionPolicyManager::ProtectedAccessResumed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler)
{
    auto factory = get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>();
    return { factory, &abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedAccessResumed, factory.ProtectedAccessResumed(handler) };
}

inline void ProtectionPolicyManager::ProtectedAccessResumed(event_token const& token)
{
    get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().ProtectedAccessResumed(token);
}

inline event_token ProtectionPolicyManager::ProtectedContentRevoked(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().ProtectedContentRevoked(handler);
}

inline factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics> ProtectionPolicyManager::ProtectedContentRevoked(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler)
{
    auto factory = get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>();
    return { factory, &abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedContentRevoked, factory.ProtectedContentRevoked(handler) };
}

inline void ProtectionPolicyManager::ProtectedContentRevoked(event_token const& token)
{
    get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().ProtectedContentRevoked(token);
}

inline Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult ProtectionPolicyManager::CheckAccess(param::hstring const& sourceIdentity, param::hstring const& targetIdentity)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().CheckAccess(sourceIdentity, targetIdentity);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>().RequestAccessAsync(sourceIdentity, targetIdentity);
}

inline bool ProtectionPolicyManager::HasContentBeenRevokedSince(param::hstring const& identity, Windows::Foundation::DateTime const& since)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>().HasContentBeenRevokedSince(identity, since);
}

inline Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult ProtectionPolicyManager::CheckAccessForApp(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>().CheckAccessForApp(sourceIdentity, appPackageFamilyName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>().RequestAccessForAppAsync(sourceIdentity, appPackageFamilyName);
}

inline Windows::Security::EnterpriseData::EnforcementLevel ProtectionPolicyManager::GetEnforcementLevel(param::hstring const& identity)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>().GetEnforcementLevel(identity);
}

inline bool ProtectionPolicyManager::IsUserDecryptionAllowed(param::hstring const& identity)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>().IsUserDecryptionAllowed(identity);
}

inline bool ProtectionPolicyManager::IsProtectionUnderLockRequired(param::hstring const& identity)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>().IsProtectionUnderLockRequired(identity);
}

inline event_token ProtectionPolicyManager::PolicyChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>().PolicyChanged(handler);
}

inline factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2> ProtectionPolicyManager::PolicyChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>();
    return { factory, &abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>::remove_PolicyChanged, factory.PolicyChanged(handler) };
}

inline void ProtectionPolicyManager::PolicyChanged(event_token const& token)
{
    get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>().PolicyChanged(token);
}

inline bool ProtectionPolicyManager::IsProtectionEnabled()
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>().IsProtectionEnabled();
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>().RequestAccessAsync(sourceIdentity, targetIdentity, auditInfo);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>().RequestAccessAsync(sourceIdentity, targetIdentity, auditInfo, messageFromApp);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>().RequestAccessForAppAsync(sourceIdentity, appPackageFamilyName, auditInfo);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>().RequestAccessForAppAsync(sourceIdentity, appPackageFamilyName, auditInfo, messageFromApp);
}

inline void ProtectionPolicyManager::LogAuditEvent(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo)
{
    get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>().LogAuditEvent(sourceIdentity, targetIdentity, auditInfo);
}

inline bool ProtectionPolicyManager::IsRoamableProtectionEnabled(param::hstring const& identity)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>().IsRoamableProtectionEnabled(identity);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>().RequestAccessAsync(sourceIdentity, targetIdentity, auditInfo, messageFromApp, behavior);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>().RequestAccessForAppAsync(sourceIdentity, appPackageFamilyName, auditInfo, messageFromApp, behavior);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>().RequestAccessToFilesForAppAsync(sourceItemList, appPackageFamilyName, auditInfo);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>().RequestAccessToFilesForAppAsync(sourceItemList, appPackageFamilyName, auditInfo, messageFromApp, behavior);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>().RequestAccessToFilesForProcessAsync(sourceItemList, processId, auditInfo);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>().RequestAccessToFilesForProcessAsync(sourceItemList, processId, auditInfo, messageFromApp, behavior);
}

inline Windows::Foundation::IAsyncOperation<bool> ProtectionPolicyManager::IsFileProtectionRequiredAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>().IsFileProtectionRequiredAsync(target, identity);
}

inline Windows::Foundation::IAsyncOperation<bool> ProtectionPolicyManager::IsFileProtectionRequiredForNewFileAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& identity, param::hstring const& desiredName)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>().IsFileProtectionRequiredForNewFileAsync(parentFolder, identity, desiredName);
}

inline hstring ProtectionPolicyManager::PrimaryManagedIdentity()
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>().PrimaryManagedIdentity();
}

inline hstring ProtectionPolicyManager::GetPrimaryManagedIdentityForIdentity(param::hstring const& identity)
{
    return get_activation_factory<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>().GetPrimaryManagedIdentityForIdentity(identity);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IDataProtectionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IDataProtectionInfo> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IDataProtectionManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IDataProtectionManagerStatics> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileProtectionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IFileProtectionInfo> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics2> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics3> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileRevocationManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IFileRevocationManagerStatics> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileUnprotectOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IFileUnprotectOptions> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectedContainerExportResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectedContainerExportResult> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectedContainerImportResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectedContainerImportResult> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectedFileCreateResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectedFileCreateResult> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager2> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::IThreadNetworkContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::IThreadNetworkContext> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::BufferProtectUnprotectResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::BufferProtectUnprotectResult> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::DataProtectionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::DataProtectionInfo> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::DataProtectionManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::DataProtectionManager> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::FileProtectionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::FileProtectionInfo> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::FileProtectionManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::FileProtectionManager> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::FileRevocationManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::FileRevocationManager> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::FileUnprotectOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::FileUnprotectOptions> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectedContainerExportResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::ProtectedContainerExportResult> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectedContainerImportResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::ProtectedContainerImportResult> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectedFileCreateResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::ProtectedFileCreateResult> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectionPolicyManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::ProtectionPolicyManager> {};

template<> struct hash<winrt::Windows::Security::EnterpriseData::ThreadNetworkContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::EnterpriseData::ThreadNetworkContext> {};

}

WINRT_WARNING_POP
