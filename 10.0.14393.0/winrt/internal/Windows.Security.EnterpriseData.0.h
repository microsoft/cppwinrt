// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::EnterpriseData {

struct IBufferProtectUnprotectResult;
struct IDataProtectionInfo;
struct IDataProtectionManagerStatics;
struct IFileProtectionInfo;
struct IFileProtectionManagerStatics;
struct IFileProtectionManagerStatics2;
struct IFileRevocationManagerStatics;
struct IProtectedAccessResumedEventArgs;
struct IProtectedAccessSuspendingEventArgs;
struct IProtectedContainerExportResult;
struct IProtectedContainerImportResult;
struct IProtectedContentRevokedEventArgs;
struct IProtectedFileCreateResult;
struct IProtectionPolicyAuditInfo;
struct IProtectionPolicyAuditInfoFactory;
struct IProtectionPolicyManager;
struct IProtectionPolicyManager2;
struct IProtectionPolicyManagerStatics;
struct IProtectionPolicyManagerStatics2;
struct IProtectionPolicyManagerStatics3;
struct IThreadNetworkContext;
struct BufferProtectUnprotectResult;
struct DataProtectionInfo;
struct FileProtectionInfo;
struct ProtectedAccessResumedEventArgs;
struct ProtectedAccessSuspendingEventArgs;
struct ProtectedContainerExportResult;
struct ProtectedContainerImportResult;
struct ProtectedContentRevokedEventArgs;
struct ProtectedFileCreateResult;
struct ProtectionPolicyAuditInfo;
struct ProtectionPolicyManager;
struct ThreadNetworkContext;

}

namespace Windows::Security::EnterpriseData {

struct IBufferProtectUnprotectResult;
struct IDataProtectionInfo;
struct IDataProtectionManagerStatics;
struct IFileProtectionInfo;
struct IFileProtectionManagerStatics;
struct IFileProtectionManagerStatics2;
struct IFileRevocationManagerStatics;
struct IProtectedAccessResumedEventArgs;
struct IProtectedAccessSuspendingEventArgs;
struct IProtectedContainerExportResult;
struct IProtectedContainerImportResult;
struct IProtectedContentRevokedEventArgs;
struct IProtectedFileCreateResult;
struct IProtectionPolicyAuditInfo;
struct IProtectionPolicyAuditInfoFactory;
struct IProtectionPolicyManager;
struct IProtectionPolicyManager2;
struct IProtectionPolicyManagerStatics;
struct IProtectionPolicyManagerStatics2;
struct IProtectionPolicyManagerStatics3;
struct IThreadNetworkContext;
struct BufferProtectUnprotectResult;
struct DataProtectionInfo;
struct DataProtectionManager;
struct FileProtectionInfo;
struct FileProtectionManager;
struct FileRevocationManager;
struct ProtectedAccessResumedEventArgs;
struct ProtectedAccessSuspendingEventArgs;
struct ProtectedContainerExportResult;
struct ProtectedContainerImportResult;
struct ProtectedContentRevokedEventArgs;
struct ProtectedFileCreateResult;
struct ProtectionPolicyAuditInfo;
struct ProtectionPolicyManager;
struct ThreadNetworkContext;

}

namespace Windows::Security::EnterpriseData {

enum class DataProtectionStatus
{
    ProtectedToOtherIdentity = 0,
    Protected = 1,
    Revoked = 2,
    Unprotected = 3,
    LicenseExpired = 4,
    AccessSuspended = 5,
};

enum class EnforcementLevel
{
    NoProtection = 0,
    Silent = 1,
    Override = 2,
    Block = 3,
};

enum class FileProtectionStatus
{
    Undetermined = 0,
    Unknown = 0,
    Unprotected = 1,
    Revoked = 2,
    Protected = 3,
    ProtectedByOtherUser = 4,
    ProtectedToOtherEnterprise = 5,
    NotProtectable = 6,
    ProtectedToOtherIdentity = 7,
    LicenseExpired = 8,
    AccessSuspended = 9,
    FileInUse = 10,
};

enum class ProtectedImportExportStatus
{
    Ok = 0,
    Undetermined = 1,
    Unprotected = 2,
    Revoked = 3,
    NotRoamable = 4,
    ProtectedToOtherIdentity = 5,
    LicenseExpired = 6,
    AccessSuspended = 7,
};

enum class ProtectionPolicyAuditAction
{
    Decrypt = 0,
    CopyToLocation = 1,
    SendToRecipient = 2,
    Other = 3,
};

enum class ProtectionPolicyEvaluationResult
{
    Allowed = 0,
    Blocked = 1,
    ConsentRequired = 2,
};

enum class ProtectionPolicyRequestAccessBehavior
{
    Decrypt = 0,
    TreatOverridePolicyAsBlock = 1,
};

}

}
