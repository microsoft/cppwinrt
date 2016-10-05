// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_69ad6aa7_0c49_5f27_a5eb_ef4d59467b6d
#define WINRT_GENERIC_69ad6aa7_0c49_5f27_a5eb_ef4d59467b6d
template <> struct __declspec(uuid("69ad6aa7-0c49-5f27-a5eb-ef4d59467b6d")) __declspec(novtable) IIterable<Windows::ApplicationModel::Package> : impl_IIterable<Windows::ApplicationModel::Package> {};
#endif

#ifndef WINRT_GENERIC_0263c4d4_195c_5dc5_a7ca_6806ceca420b
#define WINRT_GENERIC_0263c4d4_195c_5dc5_a7ca_6806ceca420b
template <> struct __declspec(uuid("0263c4d4-195c-5dc5-a7ca-6806ceca420b")) __declspec(novtable) IVectorView<Windows::ApplicationModel::Package> : impl_IVectorView<Windows::ApplicationModel::Package> {};
#endif

#ifndef WINRT_GENERIC_920c8b92_d5ef_5899_8776_2ad97aca6e1d
#define WINRT_GENERIC_920c8b92_d5ef_5899_8776_2ad97aca6e1d
template <> struct __declspec(uuid("920c8b92-d5ef-5899-8776-2ad97aca6e1d")) __declspec(novtable) IVectorView<Windows::ApplicationModel::Core::AppListEntry> : impl_IVectorView<Windows::ApplicationModel::Core::AppListEntry> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_1726f52d_2b8c_524a_98c6_f2cf0893c0f2
#define WINRT_GENERIC_1726f52d_2b8c_524a_98c6_f2cf0893c0f2
template <> struct __declspec(uuid("1726f52d-2b8c-524a-98c6-f2cf0893c0f2")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> {};
#endif

#ifndef WINRT_GENERIC_a8a900c6_da0b_5bcc_a71a_be0b9265d87a
#define WINRT_GENERIC_a8a900c6_da0b_5bcc_a71a_be0b9265d87a
template <> struct __declspec(uuid("a8a900c6-da0b-5bcc-a71a-be0b9265d87a")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> {};
#endif

#ifndef WINRT_GENERIC_c23e15f6_c618_522a_82ab_4fab36665ce5
#define WINRT_GENERIC_c23e15f6_c618_522a_82ab_4fab36665ce5
template <> struct __declspec(uuid("c23e15f6-c618-522a-82ab-4fab36665ce5")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> {};
#endif

#ifndef WINRT_GENERIC_bd636cf1_541f_53ea_8efc_e1604a395b1a
#define WINRT_GENERIC_bd636cf1_541f_53ea_8efc_e1604a395b1a
template <> struct __declspec(uuid("bd636cf1-541f-53ea-8efc-e1604a395b1a")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> {};
#endif

#ifndef WINRT_GENERIC_b32d7d63_cd0e_5c2e_a251_fb8d290824e4
#define WINRT_GENERIC_b32d7d63_cd0e_5c2e_a251_fb8d290824e4
template <> struct __declspec(uuid("b32d7d63-cd0e-5c2e-a251-fb8d290824e4")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_5239a934_80e2_518f_b819_1f316f379a3f
#define WINRT_GENERIC_5239a934_80e2_518f_b819_1f316f379a3f
template <> struct __declspec(uuid("5239a934-80e2-518f-b819-1f316f379a3f")) __declspec(novtable) IAsyncOperation<winrt::Windows::ApplicationModel::StartupTaskState> : impl_IAsyncOperation<winrt::Windows::ApplicationModel::StartupTaskState> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_ea3b1b7a_5071_5986_88fc_912dbbf845fb
#define WINRT_GENERIC_ea3b1b7a_5071_5986_88fc_912dbbf845fb
template <> struct __declspec(uuid("ea3b1b7a-5071-5986-88fc-912dbbf845fb")) __declspec(novtable) IVectorView<Windows::ApplicationModel::StartupTask> : impl_IVectorView<Windows::ApplicationModel::StartupTask> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cbec7a4e_a046_5330_873d_0fce228792fa
#define WINRT_GENERIC_cbec7a4e_a046_5330_873d_0fce228792fa
template <> struct __declspec(uuid("cbec7a4e-a046-5330-873d-0fce228792fa")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::StartupTask> : impl_IAsyncOperation<Windows::ApplicationModel::StartupTask> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_0217f069_025c_5ee6_a87f_e782e3b623ae
#define WINRT_GENERIC_0217f069_025c_5ee6_a87f_e782e3b623ae
template <> struct __declspec(uuid("0217f069-025c-5ee6-a87f-e782e3b623ae")) __declspec(novtable) IIterator<Windows::ApplicationModel::Package> : impl_IIterator<Windows::ApplicationModel::Package> {};
#endif

#ifndef WINRT_GENERIC_b93e2028_50bc_599e_b3d9_427b61d26c01
#define WINRT_GENERIC_b93e2028_50bc_599e_b3d9_427b61d26c01
template <> struct __declspec(uuid("b93e2028-50bc-599e-b3d9-427b61d26c01")) __declspec(novtable) IIterator<Windows::ApplicationModel::Core::AppListEntry> : impl_IIterator<Windows::ApplicationModel::Core::AppListEntry> {};
#endif

#ifndef WINRT_GENERIC_86f4d4ef_d8fd_5fb5_807c_72da8fc9e544
#define WINRT_GENERIC_86f4d4ef_d8fd_5fb5_807c_72da8fc9e544
template <> struct __declspec(uuid("86f4d4ef-d8fd-5fb5-807c-72da8fc9e544")) __declspec(novtable) IIterable<Windows::ApplicationModel::Core::AppListEntry> : impl_IIterable<Windows::ApplicationModel::Core::AppListEntry> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_70a0bf67_19e8_5a86_a32e_3c9863825a04
#define WINRT_GENERIC_70a0bf67_19e8_5a86_a32e_3c9863825a04
template <> struct __declspec(uuid("70a0bf67-19e8-5a86-a32e-3c9863825a04")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::StartupTaskState> : impl_AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::StartupTaskState> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_14653598_9065_508e_b37b_44eb28d51cb7
#define WINRT_GENERIC_14653598_9065_508e_b37b_44eb28d51cb7
template <> struct __declspec(uuid("14653598-9065-508e-b37b-44eb28d51cb7")) __declspec(novtable) IIterator<Windows::ApplicationModel::StartupTask> : impl_IIterator<Windows::ApplicationModel::StartupTask> {};
#endif

#ifndef WINRT_GENERIC_61885ead_bf9e_5e9f_af04_6296b336930b
#define WINRT_GENERIC_61885ead_bf9e_5e9f_af04_6296b336930b
template <> struct __declspec(uuid("61885ead-bf9e-5e9f-af04-6296b336930b")) __declspec(novtable) IIterable<Windows::ApplicationModel::StartupTask> : impl_IIterable<Windows::ApplicationModel::StartupTask> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_741f7697_2452_5c80_83c6_3b6f822b904c
#define WINRT_GENERIC_741f7697_2452_5c80_83c6_3b6f822b904c
template <> struct __declspec(uuid("741f7697-2452-5c80-83c6-3b6f822b904c")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::StartupTask> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::StartupTask> {};
#endif

#ifndef WINRT_GENERIC_d3bcf8a0_3538_5dae_98d7_1f2ab88c3f01
#define WINRT_GENERIC_d3bcf8a0_3538_5dae_98d7_1f2ab88c3f01
template <> struct __declspec(uuid("d3bcf8a0-3538-5dae-98d7-1f2ab88c3f01")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>> {};
#endif

#ifndef WINRT_GENERIC_16543165_5b65_5683_8a02_c385659158bd
#define WINRT_GENERIC_16543165_5b65_5683_8a02_c385659158bd
template <> struct __declspec(uuid("16543165-5b65-5683-8a02-c385659158bd")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> {};
#endif

#ifndef WINRT_GENERIC_51c74372_9452_57ce_9270_762009fbfe4d
#define WINRT_GENERIC_51c74372_9452_57ce_9270_762009fbfe4d
template <> struct __declspec(uuid("51c74372-9452-57ce-9270-762009fbfe4d")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>> {};
#endif

#ifndef WINRT_GENERIC_15d40795_41f9_50d7_a39e_5390981af651
#define WINRT_GENERIC_15d40795_41f9_50d7_a39e_5390981af651
template <> struct __declspec(uuid("15d40795-41f9-50d7-a39e-5390981af651")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> {};
#endif


}

namespace Windows::ApplicationModel {

template <typename D>
struct WINRT_EBO impl_IAppDisplayInfo
{
    hstring DisplayName() const;
    hstring Description() const;
    Windows::Storage::Streams::RandomAccessStreamReference GetLogo(const Windows::Foundation::Size & size) const;
};

template <typename D>
struct WINRT_EBO impl_IAppInfo
{
    hstring Id() const;
    hstring AppUserModelId() const;
    Windows::ApplicationModel::AppDisplayInfo DisplayInfo() const;
    hstring PackageFamilyName() const;
};

template <typename D>
struct WINRT_EBO impl_ICameraApplicationManagerStatics
{
    void ShowInstalledApplicationsUI() const;
};

template <typename D>
struct WINRT_EBO impl_IDesignModeStatics
{
    bool DesignModeEnabled() const;
};

template <typename D>
struct WINRT_EBO impl_IEnteredBackgroundEventArgs
{
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IFullTrustProcessLauncherStatics
{
    Windows::Foundation::IAsyncAction LaunchFullTrustProcessForCurrentAppAsync() const;
    Windows::Foundation::IAsyncAction LaunchFullTrustProcessForCurrentAppAsync(hstring_ref parameterGroupId) const;
    Windows::Foundation::IAsyncAction LaunchFullTrustProcessForAppAsync(hstring_ref fullTrustPackageRelativeAppId) const;
    Windows::Foundation::IAsyncAction LaunchFullTrustProcessForAppAsync(hstring_ref fullTrustPackageRelativeAppId, hstring_ref parameterGroupId) const;
};

template <typename D>
struct WINRT_EBO impl_ILeavingBackgroundEventArgs
{
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IPackage
{
    Windows::ApplicationModel::PackageId Id() const;
    Windows::Storage::StorageFolder InstalledLocation() const;
    bool IsFramework() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package> Dependencies() const;
};

template <typename D>
struct WINRT_EBO impl_IPackage2
{
    hstring DisplayName() const;
    hstring PublisherDisplayName() const;
    hstring Description() const;
    Windows::Foundation::Uri Logo() const;
    bool IsResourcePackage() const;
    bool IsBundle() const;
    bool IsDevelopmentMode() const;
};

template <typename D>
struct WINRT_EBO impl_IPackage3
{
    Windows::ApplicationModel::PackageStatus Status() const;
    Windows::Foundation::DateTime InstalledDate() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>> GetAppListEntriesAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IPackage4
{
    Windows::ApplicationModel::PackageSignatureKind SignatureKind() const;
    bool IsOptional() const;
    Windows::Foundation::IAsyncOperation<bool> VerifyContentIntegrityAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IPackageCatalog
{
    event_token PackageStaging(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> & handler) const;
    using PackageStaging_revoker = event_revoker<IPackageCatalog>;
    PackageStaging_revoker PackageStaging(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> & handler) const;
    void PackageStaging(event_token token) const;
    event_token PackageInstalling(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> & handler) const;
    using PackageInstalling_revoker = event_revoker<IPackageCatalog>;
    PackageInstalling_revoker PackageInstalling(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> & handler) const;
    void PackageInstalling(event_token token) const;
    event_token PackageUpdating(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> & handler) const;
    using PackageUpdating_revoker = event_revoker<IPackageCatalog>;
    PackageUpdating_revoker PackageUpdating(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> & handler) const;
    void PackageUpdating(event_token token) const;
    event_token PackageUninstalling(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> & handler) const;
    using PackageUninstalling_revoker = event_revoker<IPackageCatalog>;
    PackageUninstalling_revoker PackageUninstalling(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> & handler) const;
    void PackageUninstalling(event_token token) const;
    event_token PackageStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> & handler) const;
    using PackageStatusChanged_revoker = event_revoker<IPackageCatalog>;
    PackageStatusChanged_revoker PackageStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> & handler) const;
    void PackageStatusChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IPackageCatalogStatics
{
    Windows::ApplicationModel::PackageCatalog OpenForCurrentPackage() const;
    Windows::ApplicationModel::PackageCatalog OpenForCurrentUser() const;
};

template <typename D>
struct WINRT_EBO impl_IPackageId
{
    hstring Name() const;
    Windows::ApplicationModel::PackageVersion Version() const;
    Windows::System::ProcessorArchitecture Architecture() const;
    hstring ResourceId() const;
    hstring Publisher() const;
    hstring PublisherId() const;
    hstring FullName() const;
    hstring FamilyName() const;
};

template <typename D>
struct WINRT_EBO impl_IPackageIdWithMetadata
{
    hstring ProductId() const;
    hstring Author() const;
};

template <typename D>
struct WINRT_EBO impl_IPackageInstallingEventArgs
{
    GUID ActivityId() const;
    Windows::ApplicationModel::Package Package() const;
    double Progress() const;
    bool IsComplete() const;
    HRESULT ErrorCode() const;
};

template <typename D>
struct WINRT_EBO impl_IPackageStagingEventArgs
{
    GUID ActivityId() const;
    Windows::ApplicationModel::Package Package() const;
    double Progress() const;
    bool IsComplete() const;
    HRESULT ErrorCode() const;
};

template <typename D>
struct WINRT_EBO impl_IPackageStatics
{
    Windows::ApplicationModel::Package Current() const;
};

template <typename D>
struct WINRT_EBO impl_IPackageStatus
{
    bool VerifyIsOK() const;
    bool NotAvailable() const;
    bool PackageOffline() const;
    bool DataOffline() const;
    bool Disabled() const;
    bool NeedsRemediation() const;
    bool LicenseIssue() const;
    bool Modified() const;
    bool Tampered() const;
    bool DependencyIssue() const;
    bool Servicing() const;
    bool DeploymentInProgress() const;
};

template <typename D>
struct WINRT_EBO impl_IPackageStatusChangedEventArgs
{
    Windows::ApplicationModel::Package Package() const;
};

template <typename D>
struct WINRT_EBO impl_IPackageUninstallingEventArgs
{
    GUID ActivityId() const;
    Windows::ApplicationModel::Package Package() const;
    double Progress() const;
    bool IsComplete() const;
    HRESULT ErrorCode() const;
};

template <typename D>
struct WINRT_EBO impl_IPackageUpdatingEventArgs
{
    GUID ActivityId() const;
    Windows::ApplicationModel::Package SourcePackage() const;
    Windows::ApplicationModel::Package TargetPackage() const;
    double Progress() const;
    bool IsComplete() const;
    HRESULT ErrorCode() const;
};

template <typename D>
struct WINRT_EBO impl_IPackageWithMetadata
{
    Windows::Foundation::DateTime InstallDate() const;
    hstring GetThumbnailToken() const;
    void Launch(hstring_ref parameters) const;
};

template <typename D>
struct WINRT_EBO impl_IStartupTask
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::StartupTaskState> RequestEnableAsync() const;
    void Disable() const;
    Windows::ApplicationModel::StartupTaskState State() const;
    hstring TaskId() const;
};

template <typename D>
struct WINRT_EBO impl_IStartupTaskStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> GetForCurrentPackageAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask> GetAsync(hstring_ref taskId) const;
};

template <typename D>
struct WINRT_EBO impl_ISuspendingDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_ISuspendingEventArgs
{
    Windows::ApplicationModel::SuspendingOperation SuspendingOperation() const;
};

template <typename D>
struct WINRT_EBO impl_ISuspendingOperation
{
    Windows::ApplicationModel::SuspendingDeferral GetDeferral() const;
    Windows::Foundation::DateTime Deadline() const;
};

struct IAppDisplayInfo :
    Windows::IInspectable,
    impl::consume<IAppDisplayInfo>
{
    IAppDisplayInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppDisplayInfo>(m_ptr); }
};

struct IAppInfo :
    Windows::IInspectable,
    impl::consume<IAppInfo>
{
    IAppInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppInfo>(m_ptr); }
};

struct ICameraApplicationManagerStatics :
    Windows::IInspectable,
    impl::consume<ICameraApplicationManagerStatics>
{
    ICameraApplicationManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICameraApplicationManagerStatics>(m_ptr); }
};

struct IDesignModeStatics :
    Windows::IInspectable,
    impl::consume<IDesignModeStatics>
{
    IDesignModeStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDesignModeStatics>(m_ptr); }
};

struct IEnteredBackgroundEventArgs :
    Windows::IInspectable,
    impl::consume<IEnteredBackgroundEventArgs>
{
    IEnteredBackgroundEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEnteredBackgroundEventArgs>(m_ptr); }
};

struct IFullTrustProcessLauncherStatics :
    Windows::IInspectable,
    impl::consume<IFullTrustProcessLauncherStatics>
{
    IFullTrustProcessLauncherStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFullTrustProcessLauncherStatics>(m_ptr); }
};

struct ILeavingBackgroundEventArgs :
    Windows::IInspectable,
    impl::consume<ILeavingBackgroundEventArgs>
{
    ILeavingBackgroundEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILeavingBackgroundEventArgs>(m_ptr); }
};

struct IPackage :
    Windows::IInspectable,
    impl::consume<IPackage>
{
    IPackage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackage>(m_ptr); }
};

struct IPackage2 :
    Windows::IInspectable,
    impl::consume<IPackage2>
{
    IPackage2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackage2>(m_ptr); }
};

struct IPackage3 :
    Windows::IInspectable,
    impl::consume<IPackage3>
{
    IPackage3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackage3>(m_ptr); }
};

struct IPackage4 :
    Windows::IInspectable,
    impl::consume<IPackage4>
{
    IPackage4(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackage4>(m_ptr); }
};

struct IPackageCatalog :
    Windows::IInspectable,
    impl::consume<IPackageCatalog>
{
    IPackageCatalog(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackageCatalog>(m_ptr); }
};

struct IPackageCatalogStatics :
    Windows::IInspectable,
    impl::consume<IPackageCatalogStatics>
{
    IPackageCatalogStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackageCatalogStatics>(m_ptr); }
};

struct IPackageId :
    Windows::IInspectable,
    impl::consume<IPackageId>
{
    IPackageId(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackageId>(m_ptr); }
};

struct IPackageIdWithMetadata :
    Windows::IInspectable,
    impl::consume<IPackageIdWithMetadata>
{
    IPackageIdWithMetadata(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackageIdWithMetadata>(m_ptr); }
};

struct IPackageInstallingEventArgs :
    Windows::IInspectable,
    impl::consume<IPackageInstallingEventArgs>
{
    IPackageInstallingEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackageInstallingEventArgs>(m_ptr); }
};

struct IPackageStagingEventArgs :
    Windows::IInspectable,
    impl::consume<IPackageStagingEventArgs>
{
    IPackageStagingEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackageStagingEventArgs>(m_ptr); }
};

struct IPackageStatics :
    Windows::IInspectable,
    impl::consume<IPackageStatics>
{
    IPackageStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackageStatics>(m_ptr); }
};

struct IPackageStatus :
    Windows::IInspectable,
    impl::consume<IPackageStatus>
{
    IPackageStatus(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackageStatus>(m_ptr); }
};

struct IPackageStatusChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IPackageStatusChangedEventArgs>
{
    IPackageStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackageStatusChangedEventArgs>(m_ptr); }
};

struct IPackageUninstallingEventArgs :
    Windows::IInspectable,
    impl::consume<IPackageUninstallingEventArgs>
{
    IPackageUninstallingEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackageUninstallingEventArgs>(m_ptr); }
};

struct IPackageUpdatingEventArgs :
    Windows::IInspectable,
    impl::consume<IPackageUpdatingEventArgs>
{
    IPackageUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackageUpdatingEventArgs>(m_ptr); }
};

struct IPackageWithMetadata :
    Windows::IInspectable,
    impl::consume<IPackageWithMetadata>
{
    IPackageWithMetadata(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPackageWithMetadata>(m_ptr); }
};

struct IStartupTask :
    Windows::IInspectable,
    impl::consume<IStartupTask>
{
    IStartupTask(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStartupTask>(m_ptr); }
};

struct IStartupTaskStatics :
    Windows::IInspectable,
    impl::consume<IStartupTaskStatics>
{
    IStartupTaskStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStartupTaskStatics>(m_ptr); }
};

struct ISuspendingDeferral :
    Windows::IInspectable,
    impl::consume<ISuspendingDeferral>
{
    ISuspendingDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISuspendingDeferral>(m_ptr); }
};

struct ISuspendingEventArgs :
    Windows::IInspectable,
    impl::consume<ISuspendingEventArgs>
{
    ISuspendingEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISuspendingEventArgs>(m_ptr); }
};

struct ISuspendingOperation :
    Windows::IInspectable,
    impl::consume<ISuspendingOperation>
{
    ISuspendingOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISuspendingOperation>(m_ptr); }
};

}

}
