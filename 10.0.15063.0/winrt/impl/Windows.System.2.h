// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Search.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.RemoteSystems.1.h"
#include "winrt/impl/Windows.UI.Popups.1.h"
#include "winrt/impl/Windows.UI.ViewManagement.1.h"
#include "winrt/impl/Windows.System.1.h"

WINRT_EXPORT namespace winrt::Windows::System {

struct WINRT_EBO AppDiagnosticInfo :
    Windows::System::IAppDiagnosticInfo
{
    AppDiagnosticInfo(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>> RequestInfoAsync();
};

struct WINRT_EBO AppMemoryReport :
    Windows::System::IAppMemoryReport
{
    AppMemoryReport(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppMemoryUsageLimitChangingEventArgs :
    Windows::System::IAppMemoryUsageLimitChangingEventArgs
{
    AppMemoryUsageLimitChangingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FolderLauncherOptions :
    Windows::System::IFolderLauncherOptions,
    impl::require<FolderLauncherOptions, Windows::System::ILauncherViewOptions>
{
    FolderLauncherOptions(std::nullptr_t) noexcept {}
    FolderLauncherOptions();
};

struct KnownUserProperties
{
    KnownUserProperties() = delete;
    static hstring DisplayName();
    static hstring FirstName();
    static hstring LastName();
    static hstring ProviderName();
    static hstring AccountName();
    static hstring GuestHost();
    static hstring PrincipalName();
    static hstring DomainName();
    static hstring SessionInitiationProtocolUri();
};

struct WINRT_EBO LaunchUriResult :
    Windows::System::ILaunchUriResult
{
    LaunchUriResult(std::nullptr_t) noexcept {}
};

struct Launcher
{
    Launcher() = delete;
    static Windows::Foundation::IAsyncOperation<bool> LaunchFileAsync(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncOperation<bool> LaunchFileAsync(Windows::Storage::IStorageFile const& file, Windows::System::LauncherOptions const& options);
    static Windows::Foundation::IAsyncOperation<bool> LaunchUriAsync(Windows::Foundation::Uri const& uri);
    static Windows::Foundation::IAsyncOperation<bool> LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options);
    static Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options);
    static Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData);
    static Windows::Foundation::IAsyncOperation<bool> LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData);
    static Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType);
    static Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType, param::hstring const& packageFamilyName);
    static Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> QueryFileSupportAsync(Windows::Storage::StorageFile const& file);
    static Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> QueryFileSupportAsync(Windows::Storage::StorageFile const& file, param::hstring const& packageFamilyName);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> FindUriSchemeHandlersAsync(param::hstring const& scheme);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> FindUriSchemeHandlersAsync(param::hstring const& scheme, Windows::System::LaunchQuerySupportType const& launchQuerySupportType);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> FindFileHandlersAsync(param::hstring const& extension);
    static Windows::Foundation::IAsyncOperation<bool> LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder);
    static Windows::Foundation::IAsyncOperation<bool> LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder, Windows::System::FolderLauncherOptions const& options);
    static Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri);
    static Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri, param::hstring const& packageFamilyName);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> FindAppUriHandlersAsync(Windows::Foundation::Uri const& uri);
    static Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri);
    static Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options);
    static Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData);
    static Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options);
    static Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData);
};

struct WINRT_EBO LauncherOptions :
    Windows::System::ILauncherOptions,
    impl::require<LauncherOptions, Windows::System::ILauncherOptions2, Windows::System::ILauncherOptions3, Windows::System::ILauncherOptions4, Windows::System::ILauncherViewOptions>
{
    LauncherOptions(std::nullptr_t) noexcept {}
    LauncherOptions();
};

struct WINRT_EBO LauncherUIOptions :
    Windows::System::ILauncherUIOptions
{
    LauncherUIOptions(std::nullptr_t) noexcept {}
};

struct MemoryManager
{
    MemoryManager() = delete;
    static uint64_t AppMemoryUsage();
    static uint64_t AppMemoryUsageLimit();
    static Windows::System::AppMemoryUsageLevel AppMemoryUsageLevel();
    static event_token AppMemoryUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using AppMemoryUsageIncreased_revoker = factory_event_revoker<Windows::System::IMemoryManagerStatics>;
    static AppMemoryUsageIncreased_revoker AppMemoryUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void AppMemoryUsageIncreased(event_token const& token);
    static event_token AppMemoryUsageDecreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using AppMemoryUsageDecreased_revoker = factory_event_revoker<Windows::System::IMemoryManagerStatics>;
    static AppMemoryUsageDecreased_revoker AppMemoryUsageDecreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void AppMemoryUsageDecreased(event_token const& token);
    static event_token AppMemoryUsageLimitChanging(Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler);
    using AppMemoryUsageLimitChanging_revoker = factory_event_revoker<Windows::System::IMemoryManagerStatics>;
    static AppMemoryUsageLimitChanging_revoker AppMemoryUsageLimitChanging(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler);
    static void AppMemoryUsageLimitChanging(event_token const& token);
    static Windows::System::AppMemoryReport GetAppMemoryReport();
    static Windows::System::ProcessMemoryReport GetProcessMemoryReport();
    static bool TrySetAppMemoryUsageLimit(uint64_t value);
};

struct ProcessLauncher
{
    ProcessLauncher() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args);
    static Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args, Windows::System::ProcessLauncherOptions const& options);
};

struct WINRT_EBO ProcessLauncherOptions :
    Windows::System::IProcessLauncherOptions
{
    ProcessLauncherOptions(std::nullptr_t) noexcept {}
    ProcessLauncherOptions();
};

struct WINRT_EBO ProcessLauncherResult :
    Windows::System::IProcessLauncherResult
{
    ProcessLauncherResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProcessMemoryReport :
    Windows::System::IProcessMemoryReport
{
    ProcessMemoryReport(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProtocolForResultsOperation :
    Windows::System::IProtocolForResultsOperation
{
    ProtocolForResultsOperation(std::nullptr_t) noexcept {}
};

struct RemoteLauncher
{
    RemoteLauncher() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri);
    static Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options);
    static Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData);
};

struct WINRT_EBO RemoteLauncherOptions :
    Windows::System::IRemoteLauncherOptions
{
    RemoteLauncherOptions(std::nullptr_t) noexcept {}
    RemoteLauncherOptions();
};

struct ShutdownManager
{
    ShutdownManager() = delete;
    static void BeginShutdown(Windows::System::ShutdownKind const& shutdownKind, Windows::Foundation::TimeSpan const& timeout);
    static void CancelShutdown();
    static bool IsPowerStateSupported(Windows::System::PowerState const& powerState);
    static void EnterPowerState(Windows::System::PowerState const& powerState);
    static void EnterPowerState(Windows::System::PowerState const& powerState, Windows::Foundation::TimeSpan const& wakeUpAfter);
};

struct TimeZoneSettings
{
    TimeZoneSettings() = delete;
    static hstring CurrentTimeZoneDisplayName();
    static Windows::Foundation::Collections::IVectorView<hstring> SupportedTimeZoneDisplayNames();
    static bool CanChangeTimeZone();
    static void ChangeTimeZoneByDisplayName(param::hstring const& timeZoneDisplayName);
};

struct WINRT_EBO User :
    Windows::System::IUser
{
    User(std::nullptr_t) noexcept {}
    static Windows::System::UserWatcher CreateWatcher();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> FindAllAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> FindAllAsync(Windows::System::UserType const& type);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> FindAllAsync(Windows::System::UserType const& type, Windows::System::UserAuthenticationStatus const& status);
    static Windows::System::User GetFromId(param::hstring const& nonRoamableId);
};

struct WINRT_EBO UserAuthenticationStatusChangeDeferral :
    Windows::System::IUserAuthenticationStatusChangeDeferral
{
    UserAuthenticationStatusChangeDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserAuthenticationStatusChangingEventArgs :
    Windows::System::IUserAuthenticationStatusChangingEventArgs
{
    UserAuthenticationStatusChangingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserChangedEventArgs :
    Windows::System::IUserChangedEventArgs
{
    UserChangedEventArgs(std::nullptr_t) noexcept {}
};

struct UserDeviceAssociation
{
    UserDeviceAssociation() = delete;
    static Windows::System::User FindUserFromDeviceId(param::hstring const& deviceId);
    static event_token UserDeviceAssociationChanged(Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler);
    using UserDeviceAssociationChanged_revoker = factory_event_revoker<Windows::System::IUserDeviceAssociationStatics>;
    static UserDeviceAssociationChanged_revoker UserDeviceAssociationChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler);
    static void UserDeviceAssociationChanged(event_token const& token);
};

struct WINRT_EBO UserDeviceAssociationChangedEventArgs :
    Windows::System::IUserDeviceAssociationChangedEventArgs
{
    UserDeviceAssociationChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserPicker :
    Windows::System::IUserPicker
{
    UserPicker(std::nullptr_t) noexcept {}
    UserPicker();
    static bool IsSupported();
};

struct WINRT_EBO UserWatcher :
    Windows::System::IUserWatcher
{
    UserWatcher(std::nullptr_t) noexcept {}
};

}
