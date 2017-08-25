// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;

}

WINRT_EXPORT namespace winrt::Windows::Networking {

struct HostName;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

enum class CreationCollisionOption;
enum class NameCollisionOption;
struct IStorageFile;
struct IStorageFolder;
struct IStorageItem;
struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;
struct IInputStream;
struct IOutputStream;
struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::Security::EnterpriseData {

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
    Undetermined [[deprecated("Undetermined might be unavailable after Windows 10. Instead, use Unknown.")]] = 0,
    Unknown = 0,
    Unprotected = 1,
    Revoked = 2,
    Protected = 3,
    ProtectedByOtherUser [[deprecated("ProtectedByOtherUser might be unavailable after Windows 10. Instead, use ProtectedToOtherIdentity.")]] = 4,
    ProtectedToOtherEnterprise [[deprecated("ProtectedToOtherEnterprise might be unavailable after Windows 10. Instead, use ProtectedToOtherIdentity.")]] = 5,
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

struct IBufferProtectUnprotectResult;
struct IDataProtectionInfo;
struct IDataProtectionManagerStatics;
struct IFileProtectionInfo;
struct IFileProtectionManagerStatics;
struct IFileProtectionManagerStatics2;
struct IFileProtectionManagerStatics3;
struct IFileRevocationManagerStatics;
struct IFileUnprotectOptions;
struct IFileUnprotectOptionsFactory;
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
struct IProtectionPolicyManagerStatics4;
struct IThreadNetworkContext;
struct BufferProtectUnprotectResult;
struct DataProtectionInfo;
struct DataProtectionManager;
struct FileProtectionInfo;
struct FileProtectionManager;
struct FileRevocationManager;
struct FileUnprotectOptions;
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

namespace winrt::impl {

template <> struct category<Windows::Security::EnterpriseData::IBufferProtectUnprotectResult>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IDataProtectionInfo>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IDataProtectionManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IFileProtectionInfo>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IFileProtectionManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IFileProtectionManagerStatics3>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IFileRevocationManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IFileUnprotectOptions>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectedContainerExportResult>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectedContainerImportResult>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectedFileCreateResult>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyManager>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyManager2>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::IThreadNetworkContext>{ using type = interface_category; };
template <> struct category<Windows::Security::EnterpriseData::BufferProtectUnprotectResult>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::DataProtectionInfo>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::DataProtectionManager>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::FileProtectionInfo>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::FileProtectionManager>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::FileRevocationManager>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::FileUnprotectOptions>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::ProtectedContainerExportResult>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::ProtectedContainerImportResult>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::ProtectedFileCreateResult>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::ProtectionPolicyManager>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::ThreadNetworkContext>{ using type = class_category; };
template <> struct category<Windows::Security::EnterpriseData::DataProtectionStatus>{ using type = enum_category; };
template <> struct category<Windows::Security::EnterpriseData::EnforcementLevel>{ using type = enum_category; };
template <> struct category<Windows::Security::EnterpriseData::FileProtectionStatus>{ using type = enum_category; };
template <> struct category<Windows::Security::EnterpriseData::ProtectedImportExportStatus>{ using type = enum_category; };
template <> struct category<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction>{ using type = enum_category; };
template <> struct category<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ using type = enum_category; };
template <> struct category<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior>{ using type = enum_category; };
template <> struct name<Windows::Security::EnterpriseData::IBufferProtectUnprotectResult>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IBufferProtectUnprotectResult" }; };
template <> struct name<Windows::Security::EnterpriseData::IDataProtectionInfo>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IDataProtectionInfo" }; };
template <> struct name<Windows::Security::EnterpriseData::IDataProtectionManagerStatics>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IDataProtectionManagerStatics" }; };
template <> struct name<Windows::Security::EnterpriseData::IFileProtectionInfo>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileProtectionInfo" }; };
template <> struct name<Windows::Security::EnterpriseData::IFileProtectionManagerStatics>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics" }; };
template <> struct name<Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics2" }; };
template <> struct name<Windows::Security::EnterpriseData::IFileProtectionManagerStatics3>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics3" }; };
template <> struct name<Windows::Security::EnterpriseData::IFileRevocationManagerStatics>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileRevocationManagerStatics" }; };
template <> struct name<Windows::Security::EnterpriseData::IFileUnprotectOptions>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileUnprotectOptions" }; };
template <> struct name<Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileUnprotectOptionsFactory" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectedAccessResumedEventArgs" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectedAccessSuspendingEventArgs" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectedContainerExportResult>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectedContainerExportResult" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectedContainerImportResult>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectedContainerImportResult" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectedContentRevokedEventArgs" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectedFileCreateResult>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectedFileCreateResult" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyAuditInfo" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyAuditInfoFactory" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyManager>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyManager" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyManager2>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyManager2" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics2" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics3" }; };
template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics4" }; };
template <> struct name<Windows::Security::EnterpriseData::IThreadNetworkContext>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.IThreadNetworkContext" }; };
template <> struct name<Windows::Security::EnterpriseData::BufferProtectUnprotectResult>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.BufferProtectUnprotectResult" }; };
template <> struct name<Windows::Security::EnterpriseData::DataProtectionInfo>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.DataProtectionInfo" }; };
template <> struct name<Windows::Security::EnterpriseData::DataProtectionManager>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.DataProtectionManager" }; };
template <> struct name<Windows::Security::EnterpriseData::FileProtectionInfo>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.FileProtectionInfo" }; };
template <> struct name<Windows::Security::EnterpriseData::FileProtectionManager>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.FileProtectionManager" }; };
template <> struct name<Windows::Security::EnterpriseData::FileRevocationManager>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.FileRevocationManager" }; };
template <> struct name<Windows::Security::EnterpriseData::FileUnprotectOptions>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.FileUnprotectOptions" }; };
template <> struct name<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedAccessResumedEventArgs" }; };
template <> struct name<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedAccessSuspendingEventArgs" }; };
template <> struct name<Windows::Security::EnterpriseData::ProtectedContainerExportResult>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedContainerExportResult" }; };
template <> struct name<Windows::Security::EnterpriseData::ProtectedContainerImportResult>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedContainerImportResult" }; };
template <> struct name<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedContentRevokedEventArgs" }; };
template <> struct name<Windows::Security::EnterpriseData::ProtectedFileCreateResult>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedFileCreateResult" }; };
template <> struct name<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectionPolicyAuditInfo" }; };
template <> struct name<Windows::Security::EnterpriseData::ProtectionPolicyManager>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectionPolicyManager" }; };
template <> struct name<Windows::Security::EnterpriseData::ThreadNetworkContext>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ThreadNetworkContext" }; };
template <> struct name<Windows::Security::EnterpriseData::DataProtectionStatus>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.DataProtectionStatus" }; };
template <> struct name<Windows::Security::EnterpriseData::EnforcementLevel>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.EnforcementLevel" }; };
template <> struct name<Windows::Security::EnterpriseData::FileProtectionStatus>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.FileProtectionStatus" }; };
template <> struct name<Windows::Security::EnterpriseData::ProtectedImportExportStatus>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedImportExportStatus" }; };
template <> struct name<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectionPolicyAuditAction" }; };
template <> struct name<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectionPolicyEvaluationResult" }; };
template <> struct name<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectionPolicyRequestAccessBehavior" }; };
template <> struct guid<Windows::Security::EnterpriseData::IBufferProtectUnprotectResult>{ static constexpr GUID value{ 0x47995EDC,0x6CEC,0x4E3A,{ 0xB2,0x51,0x9E,0x74,0x85,0xD7,0x9E,0x7A } }; };
template <> struct guid<Windows::Security::EnterpriseData::IDataProtectionInfo>{ static constexpr GUID value{ 0x8420B0C1,0x5E31,0x4405,{ 0x95,0x40,0x3F,0x94,0x3A,0xF0,0xCB,0x26 } }; };
template <> struct guid<Windows::Security::EnterpriseData::IDataProtectionManagerStatics>{ static constexpr GUID value{ 0xB6149B74,0x9144,0x4EE4,{ 0x8A,0x8A,0x30,0xB5,0xF3,0x61,0x43,0x0E } }; };
template <> struct guid<Windows::Security::EnterpriseData::IFileProtectionInfo>{ static constexpr GUID value{ 0x4EE96486,0x147E,0x4DD0,{ 0x8F,0xAF,0x52,0x53,0xED,0x91,0xAD,0x0C } }; };
template <> struct guid<Windows::Security::EnterpriseData::IFileProtectionManagerStatics>{ static constexpr GUID value{ 0x5846FC9B,0xE613,0x426B,{ 0xBB,0x38,0x88,0xCB,0xA1,0xDC,0x9A,0xDB } }; };
template <> struct guid<Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>{ static constexpr GUID value{ 0x83D2A745,0x0483,0x41AB,{ 0xB2,0xD5,0xBC,0x7F,0x23,0xD7,0x4E,0xBB } }; };
template <> struct guid<Windows::Security::EnterpriseData::IFileProtectionManagerStatics3>{ static constexpr GUID value{ 0x6918849A,0x624F,0x46D6,{ 0xB2,0x41,0xE9,0xCD,0x5F,0xDF,0x3E,0x3F } }; };
template <> struct guid<Windows::Security::EnterpriseData::IFileRevocationManagerStatics>{ static constexpr GUID value{ 0x256BBC3D,0x1C5D,0x4260,{ 0x8C,0x75,0x91,0x44,0xCF,0xB7,0x8B,0xA9 } }; };
template <> struct guid<Windows::Security::EnterpriseData::IFileUnprotectOptions>{ static constexpr GUID value{ 0x7D1312F1,0x3B0D,0x4DD8,{ 0xA1,0xF8,0x1E,0xC5,0x38,0x22,0xE2,0xF3 } }; };
template <> struct guid<Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory>{ static constexpr GUID value{ 0x51AEB39C,0xDA8C,0x4C3F,{ 0x9B,0xFB,0xCB,0x73,0xA7,0xCC,0xE0,0xDD } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs>{ static constexpr GUID value{ 0xAC4DCA59,0x5D80,0x4E95,{ 0x8C,0x5F,0x85,0x39,0x45,0x0E,0xEB,0xE0 } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs>{ static constexpr GUID value{ 0x75A193E0,0xA344,0x429F,{ 0xB9,0x75,0x04,0xFC,0x1F,0x88,0xC1,0x85 } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectedContainerExportResult>{ static constexpr GUID value{ 0x3948EF95,0xF7FB,0x4B42,{ 0xAF,0xB0,0xDF,0x70,0xB4,0x15,0x43,0xC1 } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectedContainerImportResult>{ static constexpr GUID value{ 0xCDB780D1,0xE7BB,0x4D1A,{ 0x93,0x39,0x34,0xDC,0x41,0x14,0x9F,0x9B } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs>{ static constexpr GUID value{ 0x63686821,0x58B9,0x47EE,{ 0x93,0xD9,0xF0,0xF7,0x41,0xCF,0x43,0xF0 } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectedFileCreateResult>{ static constexpr GUID value{ 0x28E3ED6A,0xE9E7,0x4A03,{ 0x9F,0x53,0xBD,0xB1,0x61,0x72,0x69,0x9B } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo>{ static constexpr GUID value{ 0x425AB7E4,0xFEB7,0x44FC,{ 0xB3,0xBB,0xC3,0xC4,0xD7,0xEC,0xBE,0xBB } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>{ static constexpr GUID value{ 0x7ED4180B,0x92E8,0x42D5,{ 0x83,0xD4,0x25,0x44,0x0B,0x42,0x35,0x49 } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectionPolicyManager>{ static constexpr GUID value{ 0xD5703E18,0xA08D,0x47E6,{ 0xA2,0x40,0x99,0x34,0xD7,0x16,0x5E,0xB5 } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectionPolicyManager2>{ static constexpr GUID value{ 0xABF7527A,0x8435,0x417F,{ 0x99,0xB6,0x51,0xBE,0xAF,0x36,0x58,0x88 } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>{ static constexpr GUID value{ 0xC0BFFC66,0x8C3D,0x4D56,{ 0x88,0x04,0xC6,0x8F,0x0A,0xD3,0x2E,0xC5 } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>{ static constexpr GUID value{ 0xB68F9A8C,0x39E0,0x4649,{ 0xB2,0xE4,0x07,0x0A,0xB8,0xA5,0x79,0xB3 } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>{ static constexpr GUID value{ 0x48FF9E8C,0x6A6F,0x4D9F,{ 0xBC,0xED,0x18,0xAB,0x53,0x7A,0xA0,0x15 } }; };
template <> struct guid<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>{ static constexpr GUID value{ 0x20B794DB,0xCCBD,0x490F,{ 0x8C,0x83,0x49,0xCC,0xB7,0x7A,0xEA,0x6C } }; };
template <> struct guid<Windows::Security::EnterpriseData::IThreadNetworkContext>{ static constexpr GUID value{ 0xFA4EA8E9,0xEF13,0x405A,{ 0xB1,0x2C,0xD7,0x34,0x8C,0x6F,0x41,0xFC } }; };
template <> struct default_interface<Windows::Security::EnterpriseData::BufferProtectUnprotectResult>{ using type = Windows::Security::EnterpriseData::IBufferProtectUnprotectResult; };
template <> struct default_interface<Windows::Security::EnterpriseData::DataProtectionInfo>{ using type = Windows::Security::EnterpriseData::IDataProtectionInfo; };
template <> struct default_interface<Windows::Security::EnterpriseData::FileProtectionInfo>{ using type = Windows::Security::EnterpriseData::IFileProtectionInfo; };
template <> struct default_interface<Windows::Security::EnterpriseData::FileUnprotectOptions>{ using type = Windows::Security::EnterpriseData::IFileUnprotectOptions; };
template <> struct default_interface<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs>{ using type = Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs; };
template <> struct default_interface<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs>{ using type = Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs; };
template <> struct default_interface<Windows::Security::EnterpriseData::ProtectedContainerExportResult>{ using type = Windows::Security::EnterpriseData::IProtectedContainerExportResult; };
template <> struct default_interface<Windows::Security::EnterpriseData::ProtectedContainerImportResult>{ using type = Windows::Security::EnterpriseData::IProtectedContainerImportResult; };
template <> struct default_interface<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs>{ using type = Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs; };
template <> struct default_interface<Windows::Security::EnterpriseData::ProtectedFileCreateResult>{ using type = Windows::Security::EnterpriseData::IProtectedFileCreateResult; };
template <> struct default_interface<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo>{ using type = Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo; };
template <> struct default_interface<Windows::Security::EnterpriseData::ProtectionPolicyManager>{ using type = Windows::Security::EnterpriseData::IProtectionPolicyManager; };
template <> struct default_interface<Windows::Security::EnterpriseData::ThreadNetworkContext>{ using type = Windows::Security::EnterpriseData::IThreadNetworkContext; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IBufferProtectUnprotectResult
{
    Windows::Storage::Streams::IBuffer Buffer() const;
    Windows::Security::EnterpriseData::DataProtectionInfo ProtectionInfo() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IBufferProtectUnprotectResult> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IBufferProtectUnprotectResult<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IDataProtectionInfo
{
    Windows::Security::EnterpriseData::DataProtectionStatus Status() const;
    hstring Identity() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IDataProtectionInfo> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IDataProtectionInfo<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> ProtectAsync(Windows::Storage::Streams::IBuffer const& data, param::hstring const& identity) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> UnprotectAsync(Windows::Storage::Streams::IBuffer const& data) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> ProtectStreamAsync(Windows::Storage::Streams::IInputStream const& unprotectedStream, param::hstring const& identity, Windows::Storage::Streams::IOutputStream const& protectedStream) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> UnprotectStreamAsync(Windows::Storage::Streams::IInputStream const& protectedStream, Windows::Storage::Streams::IOutputStream const& unprotectedStream) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> GetProtectionInfoAsync(Windows::Storage::Streams::IBuffer const& protectedData) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> GetStreamProtectionInfoAsync(Windows::Storage::Streams::IInputStream const& protectedStream) const;
};
template <> struct consume<Windows::Security::EnterpriseData::IDataProtectionManagerStatics> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IFileProtectionInfo
{
    Windows::Security::EnterpriseData::FileProtectionStatus Status() const;
    bool IsRoamable() const;
    hstring Identity() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IFileProtectionInfo> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileProtectionInfo<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> ProtectAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity) const;
    Windows::Foundation::IAsyncOperation<bool> CopyProtectionAsync(Windows::Storage::IStorageItem const& source, Windows::Storage::IStorageItem const& target) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> GetProtectionInfoAsync(Windows::Storage::IStorageItem const& source) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedFileCreateResult> CreateProtectedAndOpenAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& desiredName, param::hstring const& identity, Windows::Storage::CreationCollisionOption const& collisionOption) const;
};
template <> struct consume<Windows::Security::EnterpriseData::IFileProtectionManagerStatics> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics2
{
    Windows::Foundation::IAsyncOperation<bool> IsContainerAsync(Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target, Windows::Storage::NameCollisionOption const& collisionOption) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile, param::async_iterable<hstring> const& sharedWithIdentities) const;
};
template <> struct consume<Windows::Security::EnterpriseData::IFileProtectionManagerStatics2> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics2<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics3
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> UnprotectAsync(Windows::Storage::IStorageItem const& target) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> UnprotectAsync(Windows::Storage::IStorageItem const& target, Windows::Security::EnterpriseData::FileUnprotectOptions const& options) const;
};
template <> struct consume<Windows::Security::EnterpriseData::IFileProtectionManagerStatics3> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics3<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IFileRevocationManagerStatics
{
    [[deprecated("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")]] Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionStatus> ProtectAsync(Windows::Storage::IStorageItem const& storageItem, param::hstring const& enterpriseIdentity) const;
    [[deprecated("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")]] Windows::Foundation::IAsyncOperation<bool> CopyProtectionAsync(Windows::Storage::IStorageItem const& sourceStorageItem, Windows::Storage::IStorageItem const& targetStorageItem) const;
    [[deprecated("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")]] void Revoke(param::hstring const& enterpriseIdentity) const;
    [[deprecated("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")]] Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionStatus> GetStatusAsync(Windows::Storage::IStorageItem const& storageItem) const;
};
template <> struct consume<Windows::Security::EnterpriseData::IFileRevocationManagerStatics> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileRevocationManagerStatics<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IFileUnprotectOptions
{
    void Audit(bool value) const;
    bool Audit() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IFileUnprotectOptions> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileUnprotectOptions<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IFileUnprotectOptionsFactory
{
    Windows::Security::EnterpriseData::FileUnprotectOptions Create(bool audit) const;
};
template <> struct consume<Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileUnprotectOptionsFactory<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectedAccessResumedEventArgs
{
    Windows::Foundation::Collections::IVectorView<hstring> Identities() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectedAccessResumedEventArgs<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectedAccessSuspendingEventArgs
{
    Windows::Foundation::Collections::IVectorView<hstring> Identities() const;
    Windows::Foundation::DateTime Deadline() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectedAccessSuspendingEventArgs<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectedContainerExportResult
{
    Windows::Security::EnterpriseData::ProtectedImportExportStatus Status() const;
    Windows::Storage::StorageFile File() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectedContainerExportResult> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectedContainerExportResult<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectedContainerImportResult
{
    Windows::Security::EnterpriseData::ProtectedImportExportStatus Status() const;
    Windows::Storage::StorageFile File() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectedContainerImportResult> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectedContainerImportResult<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectedContentRevokedEventArgs
{
    Windows::Foundation::Collections::IVectorView<hstring> Identities() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectedContentRevokedEventArgs<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectedFileCreateResult
{
    Windows::Storage::StorageFile File() const;
    Windows::Storage::Streams::IRandomAccessStream Stream() const;
    Windows::Security::EnterpriseData::FileProtectionInfo ProtectionInfo() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectedFileCreateResult> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectedFileCreateResult<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo
{
    void Action(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& value) const;
    Windows::Security::EnterpriseData::ProtectionPolicyAuditAction Action() const;
    void DataDescription(param::hstring const& value) const;
    hstring DataDescription() const;
    void SourceDescription(param::hstring const& value) const;
    hstring SourceDescription() const;
    void TargetDescription(param::hstring const& value) const;
    hstring TargetDescription() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfoFactory
{
    Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo Create(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription, param::hstring const& sourceDescription, param::hstring const& targetDescription) const;
    Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo CreateWithActionAndDataDescription(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription) const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfoFactory<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectionPolicyManager
{
    void Identity(param::hstring const& value) const;
    hstring Identity() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyManager> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyManager<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectionPolicyManager2
{
    void ShowEnterpriseIndicator(bool value) const;
    bool ShowEnterpriseIndicator() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyManager2> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyManager2<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics
{
    bool IsIdentityManaged(param::hstring const& identity) const;
    bool TryApplyProcessUIPolicy(param::hstring const& identity) const;
    void ClearProcessUIPolicy() const;
    Windows::Security::EnterpriseData::ThreadNetworkContext CreateCurrentThreadNetworkContext(param::hstring const& identity) const;
    Windows::Foundation::IAsyncOperation<hstring> GetPrimaryManagedIdentityForNetworkEndpointAsync(Windows::Networking::HostName const& endpointHost) const;
    void RevokeContent(param::hstring const& identity) const;
    Windows::Security::EnterpriseData::ProtectionPolicyManager GetForCurrentView() const;
    event_token ProtectedAccessSuspending(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler) const;
    using ProtectedAccessSuspending_revoker = event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>;
    ProtectedAccessSuspending_revoker ProtectedAccessSuspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler) const;
    void ProtectedAccessSuspending(event_token const& token) const;
    event_token ProtectedAccessResumed(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler) const;
    using ProtectedAccessResumed_revoker = event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>;
    ProtectedAccessResumed_revoker ProtectedAccessResumed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler) const;
    void ProtectedAccessResumed(event_token const& token) const;
    event_token ProtectedContentRevoked(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler) const;
    using ProtectedContentRevoked_revoker = event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>;
    ProtectedContentRevoked_revoker ProtectedContentRevoked(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler) const;
    void ProtectedContentRevoked(event_token const& token) const;
    Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult CheckAccess(param::hstring const& sourceIdentity, param::hstring const& targetIdentity) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity) const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2
{
    bool HasContentBeenRevokedSince(param::hstring const& identity, Windows::Foundation::DateTime const& since) const;
    Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult CheckAccessForApp(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName) const;
    Windows::Security::EnterpriseData::EnforcementLevel GetEnforcementLevel(param::hstring const& identity) const;
    bool IsUserDecryptionAllowed(param::hstring const& identity) const;
    bool IsProtectionUnderLockRequired(param::hstring const& identity) const;
    event_token PolicyChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using PolicyChanged_revoker = event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>;
    PolicyChanged_revoker PolicyChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void PolicyChanged(event_token const& token) const;
    bool IsProtectionEnabled() const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp) const;
    void LogAuditEvent(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4
{
    bool IsRoamableProtectionEnabled(param::hstring const& identity) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const;
    Windows::Foundation::IAsyncOperation<bool> IsFileProtectionRequiredAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity) const;
    Windows::Foundation::IAsyncOperation<bool> IsFileProtectionRequiredForNewFileAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& identity, param::hstring const& desiredName) const;
    hstring PrimaryManagedIdentity() const;
    hstring GetPrimaryManagedIdentityForIdentity(param::hstring const& identity) const;
};
template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>; };

template <typename D>
struct consume_Windows_Security_EnterpriseData_IThreadNetworkContext
{
};
template <> struct consume<Windows::Security::EnterpriseData::IThreadNetworkContext> { template <typename D> using type = consume_Windows_Security_EnterpriseData_IThreadNetworkContext<D>; };

template <> struct abi<Windows::Security::EnterpriseData::IBufferProtectUnprotectResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Buffer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ProtectionInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IDataProtectionInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Security::EnterpriseData::DataProtectionStatus>* value) = 0;
    virtual HRESULT __stdcall get_Identity(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IDataProtectionManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ProtectAsync(::IUnknown* data, HSTRING identity, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall UnprotectAsync(::IUnknown* data, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ProtectStreamAsync(::IUnknown* unprotectedStream, HSTRING identity, ::IUnknown* protectedStream, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall UnprotectStreamAsync(::IUnknown* protectedStream, ::IUnknown* unprotectedStream, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetProtectionInfoAsync(::IUnknown* protectedData, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetStreamProtectionInfoAsync(::IUnknown* protectedStream, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IFileProtectionInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Security::EnterpriseData::FileProtectionStatus>* value) = 0;
    virtual HRESULT __stdcall get_IsRoamable(bool* value) = 0;
    virtual HRESULT __stdcall get_Identity(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IFileProtectionManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ProtectAsync(::IUnknown* target, HSTRING identity, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CopyProtectionAsync(::IUnknown* source, ::IUnknown* target, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetProtectionInfoAsync(::IUnknown* source, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SaveFileAsContainerAsync(::IUnknown* protectedFile, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall LoadFileFromContainerAsync(::IUnknown* containerFile, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall LoadFileFromContainerWithTargetAsync(::IUnknown* containerFile, ::IUnknown* target, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateProtectedAndOpenAsync(::IUnknown* parentFolder, HSTRING desiredName, HSTRING identity, abi_t<Windows::Storage::CreationCollisionOption> collisionOption, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsContainerAsync(::IUnknown* file, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall LoadFileFromContainerWithTargetAndNameCollisionOptionAsync(::IUnknown* containerFile, ::IUnknown* target, abi_t<Windows::Storage::NameCollisionOption> collisionOption, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SaveFileAsContainerWithSharingAsync(::IUnknown* protectedFile, ::IUnknown* sharedWithIdentities, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IFileProtectionManagerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall UnprotectAsync(::IUnknown* target, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall UnprotectWithOptionsAsync(::IUnknown* target, ::IUnknown* options, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IFileRevocationManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ProtectAsync(::IUnknown* storageItem, HSTRING enterpriseIdentity, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CopyProtectionAsync(::IUnknown* sourceStorageItem, ::IUnknown* targetStorageItem, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall Revoke(HSTRING enterpriseIdentity) = 0;
    virtual HRESULT __stdcall GetStatusAsync(::IUnknown* storageItem, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IFileUnprotectOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Audit(bool value) = 0;
    virtual HRESULT __stdcall get_Audit(bool* value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(bool audit, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Identities(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Identities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Deadline(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectedContainerExportResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Security::EnterpriseData::ProtectedImportExportStatus>* value) = 0;
    virtual HRESULT __stdcall get_File(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectedContainerImportResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Security::EnterpriseData::ProtectedImportExportStatus>* value) = 0;
    virtual HRESULT __stdcall get_File(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Identities(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectedFileCreateResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_File(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Stream(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ProtectionInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Action(abi_t<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction> value) = 0;
    virtual HRESULT __stdcall get_Action(abi_t<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction>* value) = 0;
    virtual HRESULT __stdcall put_DataDescription(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DataDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_SourceDescription(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SourceDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetDescription(HSTRING value) = 0;
    virtual HRESULT __stdcall get_TargetDescription(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction> action, HSTRING dataDescription, HSTRING sourceDescription, HSTRING targetDescription, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithActionAndDataDescription(abi_t<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction> action, HSTRING dataDescription, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Identity(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Identity(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyManager2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ShowEnterpriseIndicator(bool value) = 0;
    virtual HRESULT __stdcall get_ShowEnterpriseIndicator(bool* value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsIdentityManaged(HSTRING identity, bool* result) = 0;
    virtual HRESULT __stdcall TryApplyProcessUIPolicy(HSTRING identity, bool* result) = 0;
    virtual HRESULT __stdcall ClearProcessUIPolicy() = 0;
    virtual HRESULT __stdcall CreateCurrentThreadNetworkContext(HSTRING identity, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetPrimaryManagedIdentityForNetworkEndpointAsync(::IUnknown* endpointHost, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RevokeContent(HSTRING identity) = 0;
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_ProtectedAccessSuspending(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ProtectedAccessSuspending(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ProtectedAccessResumed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ProtectedAccessResumed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ProtectedContentRevoked(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ProtectedContentRevoked(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall CheckAccess(HSTRING sourceIdentity, HSTRING targetIdentity, abi_t<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>* result) = 0;
    virtual HRESULT __stdcall RequestAccessAsync(HSTRING sourceIdentity, HSTRING targetIdentity, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall HasContentBeenRevokedSince(HSTRING identity, abi_t<Windows::Foundation::DateTime> since, bool* result) = 0;
    virtual HRESULT __stdcall CheckAccessForApp(HSTRING sourceIdentity, HSTRING appPackageFamilyName, abi_t<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>* result) = 0;
    virtual HRESULT __stdcall RequestAccessForAppAsync(HSTRING sourceIdentity, HSTRING appPackageFamilyName, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetEnforcementLevel(HSTRING identity, abi_t<Windows::Security::EnterpriseData::EnforcementLevel>* value) = 0;
    virtual HRESULT __stdcall IsUserDecryptionAllowed(HSTRING identity, bool* value) = 0;
    virtual HRESULT __stdcall IsProtectionUnderLockRequired(HSTRING identity, bool* value) = 0;
    virtual HRESULT __stdcall add_PolicyChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PolicyChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_IsProtectionEnabled(bool* value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestAccessWithAuditingInfoAsync(HSTRING sourceIdentity, HSTRING targetIdentity, ::IUnknown* auditInfo, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAccessWithMessageAsync(HSTRING sourceIdentity, HSTRING targetIdentity, ::IUnknown* auditInfo, HSTRING messageFromApp, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAccessForAppWithAuditingInfoAsync(HSTRING sourceIdentity, HSTRING appPackageFamilyName, ::IUnknown* auditInfo, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAccessForAppWithMessageAsync(HSTRING sourceIdentity, HSTRING appPackageFamilyName, ::IUnknown* auditInfo, HSTRING messageFromApp, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall LogAuditEvent(HSTRING sourceIdentity, HSTRING targetIdentity, ::IUnknown* auditInfo) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsRoamableProtectionEnabled(HSTRING identity, bool* value) = 0;
    virtual HRESULT __stdcall RequestAccessWithBehaviorAsync(HSTRING sourceIdentity, HSTRING targetIdentity, ::IUnknown* auditInfo, HSTRING messageFromApp, abi_t<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior> behavior, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAccessForAppWithBehaviorAsync(HSTRING sourceIdentity, HSTRING appPackageFamilyName, ::IUnknown* auditInfo, HSTRING messageFromApp, abi_t<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior> behavior, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAccessToFilesForAppAsync(::IUnknown* sourceItemList, HSTRING appPackageFamilyName, ::IUnknown* auditInfo, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAccessToFilesForAppWithMessageAndBehaviorAsync(::IUnknown* sourceItemList, HSTRING appPackageFamilyName, ::IUnknown* auditInfo, HSTRING messageFromApp, abi_t<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior> behavior, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAccessToFilesForProcessAsync(::IUnknown* sourceItemList, uint32_t processId, ::IUnknown* auditInfo, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAccessToFilesForProcessWithMessageAndBehaviorAsync(::IUnknown* sourceItemList, uint32_t processId, ::IUnknown* auditInfo, HSTRING messageFromApp, abi_t<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior> behavior, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall IsFileProtectionRequiredAsync(::IUnknown* target, HSTRING identity, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall IsFileProtectionRequiredForNewFileAsync(::IUnknown* parentFolder, HSTRING identity, HSTRING desiredName, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_PrimaryManagedIdentity(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetPrimaryManagedIdentityForIdentity(HSTRING identity, HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::EnterpriseData::IThreadNetworkContext>{ struct type : ::IInspectable
{
};};

}
