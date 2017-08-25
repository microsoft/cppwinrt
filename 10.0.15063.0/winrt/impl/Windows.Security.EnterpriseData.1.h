// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Security.EnterpriseData.0.h"

WINRT_EXPORT namespace winrt::Windows::Security::EnterpriseData {

struct WINRT_EBO IBufferProtectUnprotectResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBufferProtectUnprotectResult>
{
    IBufferProtectUnprotectResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataProtectionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataProtectionInfo>
{
    IDataProtectionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataProtectionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataProtectionManagerStatics>
{
    IDataProtectionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileProtectionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileProtectionInfo>
{
    IFileProtectionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileProtectionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileProtectionManagerStatics>
{
    IFileProtectionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileProtectionManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileProtectionManagerStatics2>
{
    IFileProtectionManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileProtectionManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileProtectionManagerStatics3>
{
    IFileProtectionManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")]] IFileRevocationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileRevocationManagerStatics>
{
    IFileRevocationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileUnprotectOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileUnprotectOptions>
{
    IFileUnprotectOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileUnprotectOptionsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileUnprotectOptionsFactory>
{
    IFileUnprotectOptionsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectedAccessResumedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectedAccessResumedEventArgs>
{
    IProtectedAccessResumedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectedAccessSuspendingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectedAccessSuspendingEventArgs>
{
    IProtectedAccessSuspendingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectedContainerExportResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectedContainerExportResult>
{
    IProtectedContainerExportResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectedContainerImportResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectedContainerImportResult>
{
    IProtectedContainerImportResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectedContentRevokedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectedContentRevokedEventArgs>
{
    IProtectedContentRevokedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectedFileCreateResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectedFileCreateResult>
{
    IProtectedFileCreateResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectionPolicyAuditInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyAuditInfo>
{
    IProtectionPolicyAuditInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectionPolicyAuditInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyAuditInfoFactory>
{
    IProtectionPolicyAuditInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectionPolicyManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyManager>
{
    IProtectionPolicyManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectionPolicyManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyManager2>
{
    IProtectionPolicyManager2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectionPolicyManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyManagerStatics>
{
    IProtectionPolicyManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectionPolicyManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyManagerStatics2>
{
    IProtectionPolicyManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectionPolicyManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyManagerStatics3>
{
    IProtectionPolicyManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectionPolicyManagerStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionPolicyManagerStatics4>
{
    IProtectionPolicyManagerStatics4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IThreadNetworkContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThreadNetworkContext>
{
    IThreadNetworkContext(std::nullptr_t = nullptr) noexcept {}
};

}
