// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Security.EnterpriseData.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Security::EnterpriseData {

struct WINRT_EBO BufferProtectUnprotectResult :
    Windows::Security::EnterpriseData::IBufferProtectUnprotectResult
{
    BufferProtectUnprotectResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DataProtectionInfo :
    Windows::Security::EnterpriseData::IDataProtectionInfo
{
    DataProtectionInfo(std::nullptr_t) noexcept {}
};

struct DataProtectionManager
{
    DataProtectionManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> ProtectAsync(const Windows::Storage::Streams::IBuffer & data, hstring_ref identity);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> UnprotectAsync(const Windows::Storage::Streams::IBuffer & data);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> ProtectStreamAsync(const Windows::Storage::Streams::IInputStream & unprotectedStream, hstring_ref identity, const Windows::Storage::Streams::IOutputStream & protectedStream);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> UnprotectStreamAsync(const Windows::Storage::Streams::IInputStream & protectedStream, const Windows::Storage::Streams::IOutputStream & unprotectedStream);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> GetProtectionInfoAsync(const Windows::Storage::Streams::IBuffer & protectedData);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> GetStreamProtectionInfoAsync(const Windows::Storage::Streams::IInputStream & protectedStream);
};

struct WINRT_EBO FileProtectionInfo :
    Windows::Security::EnterpriseData::IFileProtectionInfo
{
    FileProtectionInfo(std::nullptr_t) noexcept {}
};

struct FileProtectionManager
{
    FileProtectionManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> ProtectAsync(const Windows::Storage::IStorageItem & target, hstring_ref identity);
    static Windows::Foundation::IAsyncOperation<bool> CopyProtectionAsync(const Windows::Storage::IStorageItem & source, const Windows::Storage::IStorageItem & target);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> GetProtectionInfoAsync(const Windows::Storage::IStorageItem & source);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> SaveFileAsContainerAsync(const Windows::Storage::IStorageFile & protectedFile);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> LoadFileFromContainerAsync(const Windows::Storage::IStorageFile & containerFile);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> LoadFileFromContainerAsync(const Windows::Storage::IStorageFile & containerFile, const Windows::Storage::IStorageItem & target);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedFileCreateResult> CreateProtectedAndOpenAsync(const Windows::Storage::IStorageFolder & parentFolder, hstring_ref desiredName, hstring_ref identity, Windows::Storage::CreationCollisionOption collisionOption);
    static Windows::Foundation::IAsyncOperation<bool> IsContainerAsync(const Windows::Storage::IStorageFile & file);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> LoadFileFromContainerAsync(const Windows::Storage::IStorageFile & containerFile, const Windows::Storage::IStorageItem & target, Windows::Storage::NameCollisionOption collisionOption);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> SaveFileAsContainerAsync(const Windows::Storage::IStorageFile & protectedFile, const Windows::Foundation::Collections::IIterable<hstring> & sharedWithIdentities);
};

struct FileRevocationManager
{
    FileRevocationManager() = delete;
    static Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus> ProtectAsync(const Windows::Storage::IStorageItem & storageItem, hstring_ref enterpriseIdentity);
    static Windows::Foundation::IAsyncOperation<bool> CopyProtectionAsync(const Windows::Storage::IStorageItem & sourceStorageItem, const Windows::Storage::IStorageItem & targetStorageItem);
    static void Revoke(hstring_ref enterpriseIdentity);
    static Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus> GetStatusAsync(const Windows::Storage::IStorageItem & storageItem);
};

struct WINRT_EBO ProtectedAccessResumedEventArgs :
    Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs
{
    ProtectedAccessResumedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProtectedAccessSuspendingEventArgs :
    Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs
{
    ProtectedAccessSuspendingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProtectedContainerExportResult :
    Windows::Security::EnterpriseData::IProtectedContainerExportResult
{
    ProtectedContainerExportResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProtectedContainerImportResult :
    Windows::Security::EnterpriseData::IProtectedContainerImportResult
{
    ProtectedContainerImportResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProtectedContentRevokedEventArgs :
    Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs
{
    ProtectedContentRevokedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProtectedFileCreateResult :
    Windows::Security::EnterpriseData::IProtectedFileCreateResult
{
    ProtectedFileCreateResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProtectionPolicyAuditInfo :
    Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo
{
    ProtectionPolicyAuditInfo(std::nullptr_t) noexcept {}
    ProtectionPolicyAuditInfo(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction action, hstring_ref dataDescription, hstring_ref sourceDescription, hstring_ref targetDescription);
    ProtectionPolicyAuditInfo(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction action, hstring_ref dataDescription);
};

struct WINRT_EBO ProtectionPolicyManager :
    Windows::Security::EnterpriseData::IProtectionPolicyManager,
    impl::require<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManager2>
{
    ProtectionPolicyManager(std::nullptr_t) noexcept {}
    static bool IsIdentityManaged(hstring_ref identity);
    static bool TryApplyProcessUIPolicy(hstring_ref identity);
    static void ClearProcessUIPolicy();
    static Windows::Security::EnterpriseData::ThreadNetworkContext CreateCurrentThreadNetworkContext(hstring_ref identity);
    static Windows::Foundation::IAsyncOperation<hstring> GetPrimaryManagedIdentityForNetworkEndpointAsync(const Windows::Networking::HostName & endpointHost);
    static void RevokeContent(hstring_ref identity);
    static Windows::Security::EnterpriseData::ProtectionPolicyManager GetForCurrentView();
    static event_token ProtectedAccessSuspending(const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> & handler);
    using ProtectedAccessSuspending_revoker = factory_event_revoker<IProtectionPolicyManagerStatics>;
    static ProtectedAccessSuspending_revoker ProtectedAccessSuspending(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> & handler);
    static void ProtectedAccessSuspending(event_token token);
    static event_token ProtectedAccessResumed(const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> & handler);
    using ProtectedAccessResumed_revoker = factory_event_revoker<IProtectionPolicyManagerStatics>;
    static ProtectedAccessResumed_revoker ProtectedAccessResumed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> & handler);
    static void ProtectedAccessResumed(event_token token);
    static event_token ProtectedContentRevoked(const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> & handler);
    using ProtectedContentRevoked_revoker = factory_event_revoker<IProtectionPolicyManagerStatics>;
    static ProtectedContentRevoked_revoker ProtectedContentRevoked(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> & handler);
    static void ProtectedContentRevoked(event_token token);
    static Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult CheckAccess(hstring_ref sourceIdentity, hstring_ref targetIdentity);
    static Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(hstring_ref sourceIdentity, hstring_ref targetIdentity);
    static bool HasContentBeenRevokedSince(hstring_ref identity, const Windows::Foundation::DateTime & since);
    static Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult CheckAccessForApp(hstring_ref sourceIdentity, hstring_ref appPackageFamilyName);
    static Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(hstring_ref sourceIdentity, hstring_ref appPackageFamilyName);
    static Windows::Security::EnterpriseData::EnforcementLevel GetEnforcementLevel(hstring_ref identity);
    static bool IsUserDecryptionAllowed(hstring_ref identity);
    static bool IsProtectionUnderLockRequired(hstring_ref identity);
    static event_token PolicyChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    using PolicyChanged_revoker = factory_event_revoker<IProtectionPolicyManagerStatics2>;
    static PolicyChanged_revoker PolicyChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler);
    static void PolicyChanged(event_token token);
    static bool IsProtectionEnabled();
    static Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(hstring_ref sourceIdentity, hstring_ref targetIdentity, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo);
    static Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(hstring_ref sourceIdentity, hstring_ref targetIdentity, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo, hstring_ref messageFromApp);
    static Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(hstring_ref sourceIdentity, hstring_ref appPackageFamilyName, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo);
    static Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(hstring_ref sourceIdentity, hstring_ref appPackageFamilyName, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo, hstring_ref messageFromApp);
    static void LogAuditEvent(hstring_ref sourceIdentity, hstring_ref targetIdentity, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo);
};

struct WINRT_EBO ThreadNetworkContext :
    Windows::Security::EnterpriseData::IThreadNetworkContext,
    impl::require<ThreadNetworkContext, Windows::Foundation::IClosable>
{
    ThreadNetworkContext(std::nullptr_t) noexcept {}
};

}

}
