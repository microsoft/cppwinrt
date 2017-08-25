// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel {

enum class PackageContentGroupState;
struct Package;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Management::Deployment {

enum class DeploymentOptions : unsigned
{
    None = 0x0,
    ForceApplicationShutdown = 0x1,
    DevelopmentMode = 0x2,
    InstallAllResources = 0x20,
    ForceTargetApplicationShutdown = 0x40,
    RequiredContentGroupOnly = 0x100,
};

DEFINE_ENUM_FLAG_OPERATORS(DeploymentOptions)

enum class DeploymentProgressState
{
    Queued = 0,
    Processing = 1,
};

enum class PackageInstallState
{
    NotInstalled = 0,
    Staged = 1,
    Installed = 2,
    Paused = 6,
};

enum class PackageState
{
    Normal = 0,
    LicenseInvalid = 1,
    Modified = 2,
    Tampered = 3,
};

enum class PackageStatus : unsigned
{
    OK = 0x0,
    LicenseIssue = 0x1,
    Modified = 0x2,
    Tampered = 0x4,
    Disabled = 0x8,
};

DEFINE_ENUM_FLAG_OPERATORS(PackageStatus)

enum class PackageTypes : unsigned
{
    None = 0x0,
    Main = 0x1,
    Framework = 0x2,
    Resource = 0x4,
    Bundle = 0x8,
    Xap = 0x10,
    Optional = 0x20,
};

DEFINE_ENUM_FLAG_OPERATORS(PackageTypes)

enum class RemovalOptions : unsigned
{
    None = 0x0,
    PreserveApplicationData = 0x1000,
};

DEFINE_ENUM_FLAG_OPERATORS(RemovalOptions)

struct IDeploymentResult;
struct IDeploymentResult2;
struct IPackageManager;
struct IPackageManager2;
struct IPackageManager3;
struct IPackageManager4;
struct IPackageManager5;
struct IPackageManagerDebugSettings;
struct IPackageUserInformation;
struct IPackageVolume;
struct IPackageVolume2;
struct DeploymentResult;
struct PackageManager;
struct PackageManagerDebugSettings;
struct PackageUserInformation;
struct PackageVolume;
struct DeploymentProgress;

}

namespace winrt::impl {

template <> struct category<Windows::Management::Deployment::IDeploymentResult>{ using type = interface_category; };
template <> struct category<Windows::Management::Deployment::IDeploymentResult2>{ using type = interface_category; };
template <> struct category<Windows::Management::Deployment::IPackageManager>{ using type = interface_category; };
template <> struct category<Windows::Management::Deployment::IPackageManager2>{ using type = interface_category; };
template <> struct category<Windows::Management::Deployment::IPackageManager3>{ using type = interface_category; };
template <> struct category<Windows::Management::Deployment::IPackageManager4>{ using type = interface_category; };
template <> struct category<Windows::Management::Deployment::IPackageManager5>{ using type = interface_category; };
template <> struct category<Windows::Management::Deployment::IPackageManagerDebugSettings>{ using type = interface_category; };
template <> struct category<Windows::Management::Deployment::IPackageUserInformation>{ using type = interface_category; };
template <> struct category<Windows::Management::Deployment::IPackageVolume>{ using type = interface_category; };
template <> struct category<Windows::Management::Deployment::IPackageVolume2>{ using type = interface_category; };
template <> struct category<Windows::Management::Deployment::DeploymentResult>{ using type = class_category; };
template <> struct category<Windows::Management::Deployment::PackageManager>{ using type = class_category; };
template <> struct category<Windows::Management::Deployment::PackageManagerDebugSettings>{ using type = class_category; };
template <> struct category<Windows::Management::Deployment::PackageUserInformation>{ using type = class_category; };
template <> struct category<Windows::Management::Deployment::PackageVolume>{ using type = class_category; };
template <> struct category<Windows::Management::Deployment::DeploymentOptions>{ using type = enum_category; };
template <> struct category<Windows::Management::Deployment::DeploymentProgressState>{ using type = enum_category; };
template <> struct category<Windows::Management::Deployment::PackageInstallState>{ using type = enum_category; };
template <> struct category<Windows::Management::Deployment::PackageState>{ using type = enum_category; };
template <> struct category<Windows::Management::Deployment::PackageStatus>{ using type = enum_category; };
template <> struct category<Windows::Management::Deployment::PackageTypes>{ using type = enum_category; };
template <> struct category<Windows::Management::Deployment::RemovalOptions>{ using type = enum_category; };
template <> struct category<Windows::Management::Deployment::DeploymentProgress>{ using type = struct_category<Windows::Management::Deployment::DeploymentProgressState,uint32_t>; };
template <> struct name<Windows::Management::Deployment::IDeploymentResult>{ static constexpr auto & value{ L"Windows.Management.Deployment.IDeploymentResult" }; };
template <> struct name<Windows::Management::Deployment::IDeploymentResult2>{ static constexpr auto & value{ L"Windows.Management.Deployment.IDeploymentResult2" }; };
template <> struct name<Windows::Management::Deployment::IPackageManager>{ static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager" }; };
template <> struct name<Windows::Management::Deployment::IPackageManager2>{ static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager2" }; };
template <> struct name<Windows::Management::Deployment::IPackageManager3>{ static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager3" }; };
template <> struct name<Windows::Management::Deployment::IPackageManager4>{ static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager4" }; };
template <> struct name<Windows::Management::Deployment::IPackageManager5>{ static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager5" }; };
template <> struct name<Windows::Management::Deployment::IPackageManagerDebugSettings>{ static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManagerDebugSettings" }; };
template <> struct name<Windows::Management::Deployment::IPackageUserInformation>{ static constexpr auto & value{ L"Windows.Management.Deployment.IPackageUserInformation" }; };
template <> struct name<Windows::Management::Deployment::IPackageVolume>{ static constexpr auto & value{ L"Windows.Management.Deployment.IPackageVolume" }; };
template <> struct name<Windows::Management::Deployment::IPackageVolume2>{ static constexpr auto & value{ L"Windows.Management.Deployment.IPackageVolume2" }; };
template <> struct name<Windows::Management::Deployment::DeploymentResult>{ static constexpr auto & value{ L"Windows.Management.Deployment.DeploymentResult" }; };
template <> struct name<Windows::Management::Deployment::PackageManager>{ static constexpr auto & value{ L"Windows.Management.Deployment.PackageManager" }; };
template <> struct name<Windows::Management::Deployment::PackageManagerDebugSettings>{ static constexpr auto & value{ L"Windows.Management.Deployment.PackageManagerDebugSettings" }; };
template <> struct name<Windows::Management::Deployment::PackageUserInformation>{ static constexpr auto & value{ L"Windows.Management.Deployment.PackageUserInformation" }; };
template <> struct name<Windows::Management::Deployment::PackageVolume>{ static constexpr auto & value{ L"Windows.Management.Deployment.PackageVolume" }; };
template <> struct name<Windows::Management::Deployment::DeploymentOptions>{ static constexpr auto & value{ L"Windows.Management.Deployment.DeploymentOptions" }; };
template <> struct name<Windows::Management::Deployment::DeploymentProgressState>{ static constexpr auto & value{ L"Windows.Management.Deployment.DeploymentProgressState" }; };
template <> struct name<Windows::Management::Deployment::PackageInstallState>{ static constexpr auto & value{ L"Windows.Management.Deployment.PackageInstallState" }; };
template <> struct name<Windows::Management::Deployment::PackageState>{ static constexpr auto & value{ L"Windows.Management.Deployment.PackageState" }; };
template <> struct name<Windows::Management::Deployment::PackageStatus>{ static constexpr auto & value{ L"Windows.Management.Deployment.PackageStatus" }; };
template <> struct name<Windows::Management::Deployment::PackageTypes>{ static constexpr auto & value{ L"Windows.Management.Deployment.PackageTypes" }; };
template <> struct name<Windows::Management::Deployment::RemovalOptions>{ static constexpr auto & value{ L"Windows.Management.Deployment.RemovalOptions" }; };
template <> struct name<Windows::Management::Deployment::DeploymentProgress>{ static constexpr auto & value{ L"Windows.Management.Deployment.DeploymentProgress" }; };
template <> struct guid<Windows::Management::Deployment::IDeploymentResult>{ static constexpr GUID value{ 0x2563B9AE,0xB77D,0x4C1F,{ 0x8A,0x7B,0x20,0xE6,0xAD,0x51,0x5E,0xF3 } }; };
template <> struct guid<Windows::Management::Deployment::IDeploymentResult2>{ static constexpr GUID value{ 0xFC0E715C,0x5A01,0x4BD7,{ 0xBC,0xF1,0x38,0x1C,0x8C,0x82,0xE0,0x4A } }; };
template <> struct guid<Windows::Management::Deployment::IPackageManager>{ static constexpr GUID value{ 0x9A7D4B65,0x5E8F,0x4FC7,{ 0xA2,0xE5,0x7F,0x69,0x25,0xCB,0x8B,0x53 } }; };
template <> struct guid<Windows::Management::Deployment::IPackageManager2>{ static constexpr GUID value{ 0xF7AAD08D,0x0840,0x46F2,{ 0xB5,0xD8,0xCA,0xD4,0x76,0x93,0xA0,0x95 } }; };
template <> struct guid<Windows::Management::Deployment::IPackageManager3>{ static constexpr GUID value{ 0xDAAD9948,0x36F1,0x41A7,{ 0x91,0x88,0xBC,0x26,0x3E,0x0D,0xCB,0x72 } }; };
template <> struct guid<Windows::Management::Deployment::IPackageManager4>{ static constexpr GUID value{ 0x3C719963,0xBAB6,0x46BF,{ 0x8F,0xF7,0xDA,0x47,0x19,0x23,0x0A,0xE6 } }; };
template <> struct guid<Windows::Management::Deployment::IPackageManager5>{ static constexpr GUID value{ 0x711F3117,0x1AFD,0x4313,{ 0x97,0x8C,0x9B,0xB6,0xE1,0xB8,0x64,0xA7 } }; };
template <> struct guid<Windows::Management::Deployment::IPackageManagerDebugSettings>{ static constexpr GUID value{ 0x1A611683,0xA988,0x4FCF,{ 0x8F,0x0F,0xCE,0x17,0x58,0x98,0xE8,0xEB } }; };
template <> struct guid<Windows::Management::Deployment::IPackageUserInformation>{ static constexpr GUID value{ 0xF6383423,0xFA09,0x4CBC,{ 0x90,0x55,0x15,0xCA,0x27,0x5E,0x2E,0x7E } }; };
template <> struct guid<Windows::Management::Deployment::IPackageVolume>{ static constexpr GUID value{ 0xCF2672C3,0x1A40,0x4450,{ 0x97,0x39,0x2A,0xCE,0x2E,0x89,0x88,0x53 } }; };
template <> struct guid<Windows::Management::Deployment::IPackageVolume2>{ static constexpr GUID value{ 0x46ABCF2E,0x9DD4,0x47A2,{ 0xAB,0x8C,0xC6,0x40,0x83,0x49,0xBC,0xD8 } }; };
template <> struct default_interface<Windows::Management::Deployment::DeploymentResult>{ using type = Windows::Management::Deployment::IDeploymentResult; };
template <> struct default_interface<Windows::Management::Deployment::PackageManager>{ using type = Windows::Management::Deployment::IPackageManager; };
template <> struct default_interface<Windows::Management::Deployment::PackageManagerDebugSettings>{ using type = Windows::Management::Deployment::IPackageManagerDebugSettings; };
template <> struct default_interface<Windows::Management::Deployment::PackageUserInformation>{ using type = Windows::Management::Deployment::IPackageUserInformation; };
template <> struct default_interface<Windows::Management::Deployment::PackageVolume>{ using type = Windows::Management::Deployment::IPackageVolume; };

template <typename D>
struct consume_Windows_Management_Deployment_IDeploymentResult
{
    hstring ErrorText() const;
    GUID ActivityId() const;
    HRESULT ExtendedErrorCode() const;
};
template <> struct consume<Windows::Management::Deployment::IDeploymentResult> { template <typename D> using type = consume_Windows_Management_Deployment_IDeploymentResult<D>; };

template <typename D>
struct consume_Windows_Management_Deployment_IDeploymentResult2
{
    bool IsRegistered() const;
};
template <> struct consume<Windows::Management::Deployment::IDeploymentResult2> { template <typename D> using type = consume_Windows_Management_Deployment_IDeploymentResult2<D>; };

template <typename D>
struct consume_Windows_Management_Deployment_IPackageManager
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> UpdatePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> RemovePackageAsync(param::hstring const& packageFullName) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> RegisterPackageAsync(Windows::Foundation::Uri const& manifestUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackages() const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackagesForUser(param::hstring const& userSecurityId) const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher) const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher) const;
    Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageUserInformation> FindUsers(param::hstring const& packageFullName) const;
    void SetPackageState(param::hstring const& packageFullName, Windows::Management::Deployment::PackageState const& packageState) const;
    Windows::ApplicationModel::Package FindPackage(param::hstring const& packageFullName) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> CleanupPackageForUserAsync(param::hstring const& packageName, param::hstring const& userSecurityId) const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackages(param::hstring const& packageFamilyName) const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageFamilyName) const;
    Windows::ApplicationModel::Package FindPackageForUser(param::hstring const& userSecurityId, param::hstring const& packageFullName) const;
};
template <> struct consume<Windows::Management::Deployment::IPackageManager> { template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager<D>; };

template <typename D>
struct consume_Windows_Management_Deployment_IPackageManager2
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> RemovePackageAsync(param::hstring const& packageFullName, Windows::Management::Deployment::RemovalOptions const& removalOptions) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> RegisterPackageByFullNameAsync(param::hstring const& mainPackageFullName, param::async_iterable<hstring> const& dependencyPackageFullNames, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes) const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes) const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackagesWithPackageTypes(param::hstring const& packageName, param::hstring const& packagePublisher, Windows::Management::Deployment::PackageTypes const& packageTypes) const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher, Windows::Management::Deployment::PackageTypes const& packageTypes) const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackagesWithPackageTypes(param::hstring const& packageFamilyName, Windows::Management::Deployment::PackageTypes const& packageTypes) const;
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, param::hstring const& packageFamilyName, Windows::Management::Deployment::PackageTypes const& packageTypes) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> StageUserDataAsync(param::hstring const& packageFullName) const;
};
template <> struct consume<Windows::Management::Deployment::IPackageManager2> { template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager2<D>; };

template <typename D>
struct consume_Windows_Management_Deployment_IPackageManager3
{
    Windows::Foundation::IAsyncOperation<Windows::Management::Deployment::PackageVolume> AddPackageVolumeAsync(param::hstring const& packageStorePath) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
    void ClearPackageStatus(param::hstring const& packageFullName, Windows::Management::Deployment::PackageStatus const& status) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> RegisterPackageAsync(Windows::Foundation::Uri const& manifestUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& appDataVolume) const;
    Windows::Management::Deployment::PackageVolume FindPackageVolume(param::hstring const& volumeName) const;
    Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageVolume> FindPackageVolumes() const;
    Windows::Management::Deployment::PackageVolume GetDefaultPackageVolume() const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> MovePackageToVolumeAsync(param::hstring const& packageFullName, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> RemovePackageVolumeAsync(Windows::Management::Deployment::PackageVolume const& volume) const;
    void SetDefaultPackageVolume(Windows::Management::Deployment::PackageVolume const& volume) const;
    void SetPackageStatus(param::hstring const& packageFullName, Windows::Management::Deployment::PackageStatus const& status) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> SetPackageVolumeOfflineAsync(Windows::Management::Deployment::PackageVolume const& packageVolume) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> SetPackageVolumeOnlineAsync(Windows::Management::Deployment::PackageVolume const& packageVolume) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> StageUserDataAsync(param::hstring const& packageFullName, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const;
};
template <> struct consume<Windows::Management::Deployment::IPackageManager3> { template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager3<D>; };

template <typename D>
struct consume_Windows_Management_Deployment_IPackageManager4
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Management::Deployment::PackageVolume>> GetPackageVolumesAsync() const;
};
template <> struct consume<Windows::Management::Deployment::IPackageManager4> { template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager4<D>; };

template <typename D>
struct consume_Windows_Management_Deployment_IPackageManager5
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& externalPackageUris) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& externalPackageUris) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> RegisterPackageByFamilyNameAsync(param::hstring const& mainPackageFamilyName, param::async_iterable<hstring> const& dependencyPackageFamilyNames, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& appDataVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames) const;
    Windows::Management::Deployment::PackageManagerDebugSettings DebugSettings() const;
};
template <> struct consume<Windows::Management::Deployment::IPackageManager5> { template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager5<D>; };

template <typename D>
struct consume_Windows_Management_Deployment_IPackageManagerDebugSettings
{
    Windows::Foundation::IAsyncAction SetContentGroupStateAsync(Windows::ApplicationModel::Package const& package, param::hstring const& contentGroupName, Windows::ApplicationModel::PackageContentGroupState const& state) const;
    Windows::Foundation::IAsyncAction SetContentGroupStateAsync(Windows::ApplicationModel::Package const& package, param::hstring const& contentGroupName, Windows::ApplicationModel::PackageContentGroupState const& state, double completionPercentage) const;
};
template <> struct consume<Windows::Management::Deployment::IPackageManagerDebugSettings> { template <typename D> using type = consume_Windows_Management_Deployment_IPackageManagerDebugSettings<D>; };

template <typename D>
struct consume_Windows_Management_Deployment_IPackageUserInformation
{
    hstring UserSecurityId() const;
    Windows::Management::Deployment::PackageInstallState InstallState() const;
};
template <> struct consume<Windows::Management::Deployment::IPackageUserInformation> { template <typename D> using type = consume_Windows_Management_Deployment_IPackageUserInformation<D>; };

template <typename D>
struct consume_Windows_Management_Deployment_IPackageVolume
{
    bool IsOffline() const;
    bool IsSystemVolume() const;
    hstring MountPoint() const;
    hstring Name() const;
    hstring PackageStorePath() const;
    bool SupportsHardLinks() const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackages() const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackages(param::hstring const& packageFamilyName) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageName, param::hstring const& packagePublisher) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageFamilyName) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackage(param::hstring const& packageFullName) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackagesForUser(param::hstring const& userSecurityId) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageFamilyName) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageName, param::hstring const& packagePublisher) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageFamilyName) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> FindPackageForUser(param::hstring const& userSecurityId, param::hstring const& packageFullName) const;
};
template <> struct consume<Windows::Management::Deployment::IPackageVolume> { template <typename D> using type = consume_Windows_Management_Deployment_IPackageVolume<D>; };

template <typename D>
struct consume_Windows_Management_Deployment_IPackageVolume2
{
    bool IsFullTrustPackageSupported() const;
    bool IsAppxInstallSupported() const;
    Windows::Foundation::IAsyncOperation<uint64_t> GetAvailableSpaceAsync() const;
};
template <> struct consume<Windows::Management::Deployment::IPackageVolume2> { template <typename D> using type = consume_Windows_Management_Deployment_IPackageVolume2<D>; };

template <> struct abi<Windows::Management::Deployment::IDeploymentResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ErrorText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ActivityId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_ExtendedErrorCode(abi_t<HRESULT>* value) = 0;
};};

template <> struct abi<Windows::Management::Deployment::IDeploymentResult2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsRegistered(bool* value) = 0;
};};

template <> struct abi<Windows::Management::Deployment::IPackageManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddPackageAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall UpdatePackageAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall RemovePackageAsync(HSTRING packageFullName, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall StagePackageAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall RegisterPackageAsync(::IUnknown* manifestUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall FindPackages(::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByUserSecurityId(HSTRING userSecurityId, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByNamePublisher(HSTRING packageName, HSTRING packagePublisher, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByUserSecurityIdNamePublisher(HSTRING userSecurityId, HSTRING packageName, HSTRING packagePublisher, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindUsers(HSTRING packageFullName, ::IUnknown** users) = 0;
    virtual HRESULT __stdcall SetPackageState(HSTRING packageFullName, abi_t<Windows::Management::Deployment::PackageState> packageState) = 0;
    virtual HRESULT __stdcall FindPackageByPackageFullName(HSTRING packageFullName, ::IUnknown** packageInformation) = 0;
    virtual HRESULT __stdcall CleanupPackageForUserAsync(HSTRING packageName, HSTRING userSecurityId, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall FindPackagesByPackageFamilyName(HSTRING packageFamilyName, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByUserSecurityIdPackageFamilyName(HSTRING userSecurityId, HSTRING packageFamilyName, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackageByUserSecurityIdPackageFullName(HSTRING userSecurityId, HSTRING packageFullName, ::IUnknown** packageInformation) = 0;
};};

template <> struct abi<Windows::Management::Deployment::IPackageManager2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RemovePackageWithOptionsAsync(HSTRING packageFullName, abi_t<Windows::Management::Deployment::RemovalOptions> removalOptions, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall StagePackageWithOptionsAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall RegisterPackageByFullNameAsync(HSTRING mainPackageFullName, ::IUnknown* dependencyPackageFullNames, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall FindPackagesWithPackageTypes(abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByUserSecurityIdWithPackageTypes(HSTRING userSecurityId, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByNamePublisherWithPackageTypes(HSTRING packageName, HSTRING packagePublisher, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(HSTRING userSecurityId, HSTRING packageName, HSTRING packagePublisher, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByPackageFamilyNameWithPackageTypes(HSTRING packageFamilyName, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(HSTRING userSecurityId, HSTRING packageFamilyName, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall StageUserDataAsync(HSTRING packageFullName, ::IUnknown** deploymentOperation) = 0;
};};

template <> struct abi<Windows::Management::Deployment::IPackageManager3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddPackageVolumeAsync(HSTRING packageStorePath, ::IUnknown** packageVolume) = 0;
    virtual HRESULT __stdcall AddPackageToVolumeAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* targetVolume, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall ClearPackageStatus(HSTRING packageFullName, abi_t<Windows::Management::Deployment::PackageStatus> status) = 0;
    virtual HRESULT __stdcall RegisterPackageWithAppDataVolumeAsync(::IUnknown* manifestUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* appDataVolume, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall FindPackageVolumeByName(HSTRING volumeName, ::IUnknown** volume) = 0;
    virtual HRESULT __stdcall FindPackageVolumes(::IUnknown** volumeCollection) = 0;
    virtual HRESULT __stdcall GetDefaultPackageVolume(::IUnknown** volume) = 0;
    virtual HRESULT __stdcall MovePackageToVolumeAsync(HSTRING packageFullName, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* targetVolume, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall RemovePackageVolumeAsync(::IUnknown* volume, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall SetDefaultPackageVolume(::IUnknown* volume) = 0;
    virtual HRESULT __stdcall SetPackageStatus(HSTRING packageFullName, abi_t<Windows::Management::Deployment::PackageStatus> status) = 0;
    virtual HRESULT __stdcall SetPackageVolumeOfflineAsync(::IUnknown* packageVolume, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall SetPackageVolumeOnlineAsync(::IUnknown* packageVolume, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall StagePackageToVolumeAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* targetVolume, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall StageUserDataWithOptionsAsync(HSTRING packageFullName, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown** deploymentOperation) = 0;
};};

template <> struct abi<Windows::Management::Deployment::IPackageManager4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetPackageVolumesAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Management::Deployment::IPackageManager5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddPackageToVolumeAndOptionalPackagesAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* targetVolume, ::IUnknown* optionalPackageFamilyNames, ::IUnknown* externalPackageUris, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall StagePackageToVolumeAndOptionalPackagesAsync(::IUnknown* packageUri, ::IUnknown* dependencyPackageUris, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* targetVolume, ::IUnknown* optionalPackageFamilyNames, ::IUnknown* externalPackageUris, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall RegisterPackageByFamilyNameAndOptionalPackagesAsync(HSTRING mainPackageFamilyName, ::IUnknown* dependencyPackageFamilyNames, abi_t<Windows::Management::Deployment::DeploymentOptions> deploymentOptions, ::IUnknown* appDataVolume, ::IUnknown* optionalPackageFamilyNames, ::IUnknown** deploymentOperation) = 0;
    virtual HRESULT __stdcall get_DebugSettings(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Management::Deployment::IPackageManagerDebugSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetContentGroupStateAsync(::IUnknown* package, HSTRING contentGroupName, abi_t<Windows::ApplicationModel::PackageContentGroupState> state, ::IUnknown** action) = 0;
    virtual HRESULT __stdcall SetContentGroupStateWithPercentageAsync(::IUnknown* package, HSTRING contentGroupName, abi_t<Windows::ApplicationModel::PackageContentGroupState> state, double completionPercentage, ::IUnknown** action) = 0;
};};

template <> struct abi<Windows::Management::Deployment::IPackageUserInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UserSecurityId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_InstallState(abi_t<Windows::Management::Deployment::PackageInstallState>* value) = 0;
};};

template <> struct abi<Windows::Management::Deployment::IPackageVolume>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsOffline(bool* value) = 0;
    virtual HRESULT __stdcall get_IsSystemVolume(bool* value) = 0;
    virtual HRESULT __stdcall get_MountPoint(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PackageStorePath(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SupportsHardLinks(bool* value) = 0;
    virtual HRESULT __stdcall FindPackages(::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByNamePublisher(HSTRING packageName, HSTRING packagePublisher, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByPackageFamilyName(HSTRING packageFamilyName, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesWithPackageTypes(abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByNamePublisherWithPackagesTypes(abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, HSTRING packageName, HSTRING packagePublisher, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByPackageFamilyNameWithPackageTypes(abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, HSTRING packageFamilyName, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackageByPackageFullName(HSTRING packageFullName, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByUserSecurityId(HSTRING userSecurityId, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByUserSecurityIdNamePublisher(HSTRING userSecurityId, HSTRING packageName, HSTRING packagePublisher, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByUserSecurityIdPackageFamilyName(HSTRING userSecurityId, HSTRING packageFamilyName, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByUserSecurityIdWithPackageTypes(HSTRING userSecurityId, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(HSTRING userSecurityId, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, HSTRING packageName, HSTRING packagePublisher, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(HSTRING userSecurityId, abi_t<Windows::Management::Deployment::PackageTypes> packageTypes, HSTRING packageFamilyName, ::IUnknown** packageCollection) = 0;
    virtual HRESULT __stdcall FindPackageByUserSecurityIdPackageFullName(HSTRING userSecurityId, HSTRING packageFullName, ::IUnknown** packageCollection) = 0;
};};

template <> struct abi<Windows::Management::Deployment::IPackageVolume2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsFullTrustPackageSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsAppxInstallSupported(bool* value) = 0;
    virtual HRESULT __stdcall GetAvailableSpaceAsync(::IUnknown** operation) = 0;
};};

}
