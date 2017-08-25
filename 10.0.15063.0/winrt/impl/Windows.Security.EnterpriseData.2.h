// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Security.EnterpriseData.1.h"

WINRT_EXPORT namespace winrt::Windows::Security::EnterpriseData {

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
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> ProtectAsync(Windows::Storage::Streams::IBuffer const& data, param::hstring const& identity);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> UnprotectAsync(Windows::Storage::Streams::IBuffer const& data);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> ProtectStreamAsync(Windows::Storage::Streams::IInputStream const& unprotectedStream, param::hstring const& identity, Windows::Storage::Streams::IOutputStream const& protectedStream);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> UnprotectStreamAsync(Windows::Storage::Streams::IInputStream const& protectedStream, Windows::Storage::Streams::IOutputStream const& unprotectedStream);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> GetProtectionInfoAsync(Windows::Storage::Streams::IBuffer const& protectedData);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> GetStreamProtectionInfoAsync(Windows::Storage::Streams::IInputStream const& protectedStream);
};

struct WINRT_EBO FileProtectionInfo :
    Windows::Security::EnterpriseData::IFileProtectionInfo
{
    FileProtectionInfo(std::nullptr_t) noexcept {}
};

struct FileProtectionManager
{
    FileProtectionManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> ProtectAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity);
    static Windows::Foundation::IAsyncOperation<bool> CopyProtectionAsync(Windows::Storage::IStorageItem const& source, Windows::Storage::IStorageItem const& target);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> GetProtectionInfoAsync(Windows::Storage::IStorageItem const& source);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedFileCreateResult> CreateProtectedAndOpenAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& desiredName, param::hstring const& identity, Windows::Storage::CreationCollisionOption const& collisionOption);
    static Windows::Foundation::IAsyncOperation<bool> IsContainerAsync(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target, Windows::Storage::NameCollisionOption const& collisionOption);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile, param::async_iterable<hstring> const& sharedWithIdentities);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> UnprotectAsync(Windows::Storage::IStorageItem const& target);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> UnprotectAsync(Windows::Storage::IStorageItem const& target, Windows::Security::EnterpriseData::FileUnprotectOptions const& options);
};

struct [[deprecated("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")]] FileRevocationManager
{
    FileRevocationManager() = delete;
    [[deprecated("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")]] static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionStatus> ProtectAsync(Windows::Storage::IStorageItem const& storageItem, param::hstring const& enterpriseIdentity);
    [[deprecated("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")]] static Windows::Foundation::IAsyncOperation<bool> CopyProtectionAsync(Windows::Storage::IStorageItem const& sourceStorageItem, Windows::Storage::IStorageItem const& targetStorageItem);
    [[deprecated("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")]] static void Revoke(param::hstring const& enterpriseIdentity);
    [[deprecated("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")]] static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionStatus> GetStatusAsync(Windows::Storage::IStorageItem const& storageItem);
};

struct WINRT_EBO FileUnprotectOptions :
    Windows::Security::EnterpriseData::IFileUnprotectOptions
{
    FileUnprotectOptions(std::nullptr_t) noexcept {}
    FileUnprotectOptions(bool audit);
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
    ProtectionPolicyAuditInfo(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription, param::hstring const& sourceDescription, param::hstring const& targetDescription);
    ProtectionPolicyAuditInfo(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription);
};

struct WINRT_EBO ProtectionPolicyManager :
    Windows::Security::EnterpriseData::IProtectionPolicyManager,
    impl::require<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManager2>
{
    ProtectionPolicyManager(std::nullptr_t) noexcept {}
    static bool IsIdentityManaged(param::hstring const& identity);
    static bool TryApplyProcessUIPolicy(param::hstring const& identity);
    static void ClearProcessUIPolicy();
    static Windows::Security::EnterpriseData::ThreadNetworkContext CreateCurrentThreadNetworkContext(param::hstring const& identity);
    static Windows::Foundation::IAsyncOperation<hstring> GetPrimaryManagedIdentityForNetworkEndpointAsync(Windows::Networking::HostName const& endpointHost);
    static void RevokeContent(param::hstring const& identity);
    static Windows::Security::EnterpriseData::ProtectionPolicyManager GetForCurrentView();
    static event_token ProtectedAccessSuspending(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler);
    using ProtectedAccessSuspending_revoker = factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>;
    static ProtectedAccessSuspending_revoker ProtectedAccessSuspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler);
    static void ProtectedAccessSuspending(event_token const& token);
    static event_token ProtectedAccessResumed(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler);
    using ProtectedAccessResumed_revoker = factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>;
    static ProtectedAccessResumed_revoker ProtectedAccessResumed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler);
    static void ProtectedAccessResumed(event_token const& token);
    static event_token ProtectedContentRevoked(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler);
    using ProtectedContentRevoked_revoker = factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>;
    static ProtectedContentRevoked_revoker ProtectedContentRevoked(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler);
    static void ProtectedContentRevoked(event_token const& token);
    static Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult CheckAccess(param::hstring const& sourceIdentity, param::hstring const& targetIdentity);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity);
    static bool HasContentBeenRevokedSince(param::hstring const& identity, Windows::Foundation::DateTime const& since);
    static Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult CheckAccessForApp(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName);
    static Windows::Security::EnterpriseData::EnforcementLevel GetEnforcementLevel(param::hstring const& identity);
    static bool IsUserDecryptionAllowed(param::hstring const& identity);
    static bool IsProtectionUnderLockRequired(param::hstring const& identity);
    static event_token PolicyChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using PolicyChanged_revoker = factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>;
    static PolicyChanged_revoker PolicyChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void PolicyChanged(event_token const& token);
    static bool IsProtectionEnabled();
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp);
    static void LogAuditEvent(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
    static bool IsRoamableProtectionEnabled(param::hstring const& identity);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
    static Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
    static Windows::Foundation::IAsyncOperation<bool> IsFileProtectionRequiredAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity);
    static Windows::Foundation::IAsyncOperation<bool> IsFileProtectionRequiredForNewFileAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& identity, param::hstring const& desiredName);
    static hstring PrimaryManagedIdentity();
    static hstring GetPrimaryManagedIdentityForIdentity(param::hstring const& identity);
};

struct WINRT_EBO ThreadNetworkContext :
    Windows::Security::EnterpriseData::IThreadNetworkContext,
    impl::require<ThreadNetworkContext, Windows::Foundation::IClosable>
{
    ThreadNetworkContext(std::nullptr_t) noexcept {}
};

}
