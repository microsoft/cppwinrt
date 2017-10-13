// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel {

struct AppInfo;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;
struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;
struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;
struct IStorageFolder;
struct IStorageItem;
struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Search {

struct StorageFileQueryResult;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IInputStream;
struct IOutputStream;
struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics {

struct ProcessDiagnosticInfo;

}

WINRT_EXPORT namespace winrt::Windows::System::RemoteSystems {

struct RemoteSystemConnectionRequest;

}

WINRT_EXPORT namespace winrt::Windows::UI::Popups {

enum class Placement;

}

WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement {

enum class ViewSizePreference;

}

WINRT_EXPORT namespace winrt::Windows::System {

enum class AppDiagnosticInfoWatcherStatus : int32_t
{
    Created = 0,
    Started = 1,
    EnumerationCompleted = 2,
    Stopping = 3,
    Stopped = 4,
    Aborted = 5,
};

enum class AppMemoryUsageLevel : int32_t
{
    Low = 0,
    Medium = 1,
    High = 2,
    OverLimit = 3,
};

enum class AppResourceGroupEnergyQuotaState : int32_t
{
    Unknown = 0,
    Over = 1,
    Under = 2,
};

enum class AppResourceGroupExecutionState : int32_t
{
    Unknown = 0,
    Running = 1,
    Suspending = 2,
    Suspended = 3,
    NotRunning = 4,
};

enum class AppResourceGroupInfoWatcherStatus : int32_t
{
    Created = 0,
    Started = 1,
    EnumerationCompleted = 2,
    Stopping = 3,
    Stopped = 4,
    Aborted = 5,
};

enum class DiagnosticAccessStatus : int32_t
{
    Unspecified = 0,
    Denied = 1,
    Limited = 2,
    Allowed = 3,
};

enum class DispatcherQueuePriority : int32_t
{
    Low = -10,
    Normal = 0,
    High = 10,
};

enum class LaunchFileStatus : int32_t
{
    Success = 0,
    AppUnavailable = 1,
    DeniedByPolicy = 2,
    FileTypeNotSupported = 3,
    Unknown = 4,
};

enum class LaunchQuerySupportStatus : int32_t
{
    Available = 0,
    AppNotInstalled = 1,
    AppUnavailable = 2,
    NotSupported = 3,
    Unknown = 4,
};

enum class LaunchQuerySupportType : int32_t
{
    Uri = 0,
    UriForResults = 1,
};

enum class LaunchUriStatus : int32_t
{
    Success = 0,
    AppUnavailable = 1,
    ProtocolUnavailable = 2,
    Unknown = 3,
};

enum class PowerState : int32_t
{
    ConnectedStandby = 0,
    SleepS3 = 1,
};

enum class ProcessorArchitecture : int32_t
{
    X86 = 0,
    Arm = 5,
    X64 = 9,
    Neutral = 11,
    Unknown = 65535,
};

enum class RemoteLaunchUriStatus : int32_t
{
    Unknown = 0,
    Success = 1,
    AppUnavailable = 2,
    ProtocolUnavailable = 3,
    RemoteSystemUnavailable = 4,
    ValueSetTooLarge = 5,
    DeniedByLocalSystem = 6,
    DeniedByRemoteSystem = 7,
};

enum class ShutdownKind : int32_t
{
    Shutdown = 0,
    Restart = 1,
};

enum class UserAuthenticationStatus : int32_t
{
    Unauthenticated = 0,
    LocallyAuthenticated = 1,
    RemotelyAuthenticated = 2,
};

enum class UserPictureSize : int32_t
{
    Size64x64 = 0,
    Size208x208 = 1,
    Size424x424 = 2,
    Size1080x1080 = 3,
};

enum class UserType : int32_t
{
    LocalUser = 0,
    RemoteUser = 1,
    LocalGuest = 2,
    RemoteGuest = 3,
};

enum class UserWatcherStatus : int32_t
{
    Created = 0,
    Started = 1,
    EnumerationCompleted = 2,
    Stopping = 3,
    Stopped = 4,
    Aborted = 5,
};

enum class VirtualKey : int32_t
{
    None = 0,
    LeftButton = 1,
    RightButton = 2,
    Cancel = 3,
    MiddleButton = 4,
    XButton1 = 5,
    XButton2 = 6,
    Back = 8,
    Tab = 9,
    Clear = 12,
    Enter = 13,
    Shift = 16,
    Control = 17,
    Menu = 18,
    Pause = 19,
    CapitalLock = 20,
    Kana = 21,
    Hangul = 21,
    Junja = 23,
    Final = 24,
    Hanja = 25,
    Kanji = 25,
    Escape = 27,
    Convert = 28,
    NonConvert = 29,
    Accept = 30,
    ModeChange = 31,
    Space = 32,
    PageUp = 33,
    PageDown = 34,
    End = 35,
    Home = 36,
    Left = 37,
    Up = 38,
    Right = 39,
    Down = 40,
    Select = 41,
    Print = 42,
    Execute = 43,
    Snapshot = 44,
    Insert = 45,
    Delete = 46,
    Help = 47,
    Number0 = 48,
    Number1 = 49,
    Number2 = 50,
    Number3 = 51,
    Number4 = 52,
    Number5 = 53,
    Number6 = 54,
    Number7 = 55,
    Number8 = 56,
    Number9 = 57,
    A = 65,
    B = 66,
    C = 67,
    D = 68,
    E = 69,
    F = 70,
    G = 71,
    H = 72,
    I = 73,
    J = 74,
    K = 75,
    L = 76,
    M = 77,
    N = 78,
    O = 79,
    P = 80,
    Q = 81,
    R = 82,
    S = 83,
    T = 84,
    U = 85,
    V = 86,
    W = 87,
    X = 88,
    Y = 89,
    Z = 90,
    LeftWindows = 91,
    RightWindows = 92,
    Application = 93,
    Sleep = 95,
    NumberPad0 = 96,
    NumberPad1 = 97,
    NumberPad2 = 98,
    NumberPad3 = 99,
    NumberPad4 = 100,
    NumberPad5 = 101,
    NumberPad6 = 102,
    NumberPad7 = 103,
    NumberPad8 = 104,
    NumberPad9 = 105,
    Multiply = 106,
    Add = 107,
    Separator = 108,
    Subtract = 109,
    Decimal = 110,
    Divide = 111,
    F1 = 112,
    F2 = 113,
    F3 = 114,
    F4 = 115,
    F5 = 116,
    F6 = 117,
    F7 = 118,
    F8 = 119,
    F9 = 120,
    F10 = 121,
    F11 = 122,
    F12 = 123,
    F13 = 124,
    F14 = 125,
    F15 = 126,
    F16 = 127,
    F17 = 128,
    F18 = 129,
    F19 = 130,
    F20 = 131,
    F21 = 132,
    F22 = 133,
    F23 = 134,
    F24 = 135,
    NavigationView = 136,
    NavigationMenu = 137,
    NavigationUp = 138,
    NavigationDown = 139,
    NavigationLeft = 140,
    NavigationRight = 141,
    NavigationAccept = 142,
    NavigationCancel = 143,
    NumberKeyLock = 144,
    Scroll = 145,
    LeftShift = 160,
    RightShift = 161,
    LeftControl = 162,
    RightControl = 163,
    LeftMenu = 164,
    RightMenu = 165,
    GoBack = 166,
    GoForward = 167,
    Refresh = 168,
    Stop = 169,
    Search = 170,
    Favorites = 171,
    GoHome = 172,
    GamepadA = 195,
    GamepadB = 196,
    GamepadX = 197,
    GamepadY = 198,
    GamepadRightShoulder = 199,
    GamepadLeftShoulder = 200,
    GamepadLeftTrigger = 201,
    GamepadRightTrigger = 202,
    GamepadDPadUp = 203,
    GamepadDPadDown = 204,
    GamepadDPadLeft = 205,
    GamepadDPadRight = 206,
    GamepadMenu = 207,
    GamepadView = 208,
    GamepadLeftThumbstickButton = 209,
    GamepadRightThumbstickButton = 210,
    GamepadLeftThumbstickUp = 211,
    GamepadLeftThumbstickDown = 212,
    GamepadLeftThumbstickRight = 213,
    GamepadLeftThumbstickLeft = 214,
    GamepadRightThumbstickUp = 215,
    GamepadRightThumbstickDown = 216,
    GamepadRightThumbstickRight = 217,
    GamepadRightThumbstickLeft = 218,
};

enum class VirtualKeyModifiers : uint32_t
{
    None = 0x0,
    Control = 0x1,
    Menu = 0x2,
    Shift = 0x4,
    Windows = 0x8,
};

struct IAppDiagnosticInfo;
struct IAppDiagnosticInfo2;
struct IAppDiagnosticInfoStatics;
struct IAppDiagnosticInfoStatics2;
struct IAppDiagnosticInfoWatcher;
struct IAppDiagnosticInfoWatcherEventArgs;
struct IAppMemoryReport;
struct IAppMemoryReport2;
struct IAppMemoryUsageLimitChangingEventArgs;
struct IAppResourceGroupBackgroundTaskReport;
struct IAppResourceGroupInfo;
struct IAppResourceGroupInfoWatcher;
struct IAppResourceGroupInfoWatcherEventArgs;
struct IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs;
struct IAppResourceGroupMemoryReport;
struct IAppResourceGroupStateReport;
struct IDateTimeSettingsStatics;
struct IDispatcherQueue;
struct IDispatcherQueueController;
struct IDispatcherQueueControllerStatics;
struct IDispatcherQueueShutdownStartingEventArgs;
struct IDispatcherQueueStatics;
struct IDispatcherQueueTimer;
struct IFolderLauncherOptions;
struct IKnownUserPropertiesStatics;
struct ILaunchUriResult;
struct ILauncherOptions;
struct ILauncherOptions2;
struct ILauncherOptions3;
struct ILauncherOptions4;
struct ILauncherStatics;
struct ILauncherStatics2;
struct ILauncherStatics3;
struct ILauncherStatics4;
struct ILauncherUIOptions;
struct ILauncherViewOptions;
struct IMemoryManagerStatics;
struct IMemoryManagerStatics2;
struct IMemoryManagerStatics3;
struct IMemoryManagerStatics4;
struct IProcessLauncherOptions;
struct IProcessLauncherResult;
struct IProcessLauncherStatics;
struct IProcessMemoryReport;
struct IProtocolForResultsOperation;
struct IRemoteLauncherOptions;
struct IRemoteLauncherStatics;
struct IShutdownManagerStatics;
struct IShutdownManagerStatics2;
struct ITimeZoneSettingsStatics;
struct IUser;
struct IUserAuthenticationStatusChangeDeferral;
struct IUserAuthenticationStatusChangingEventArgs;
struct IUserChangedEventArgs;
struct IUserDeviceAssociationChangedEventArgs;
struct IUserDeviceAssociationStatics;
struct IUserPicker;
struct IUserPickerStatics;
struct IUserStatics;
struct IUserWatcher;
struct AppDiagnosticInfo;
struct AppDiagnosticInfoWatcher;
struct AppDiagnosticInfoWatcherEventArgs;
struct AppMemoryReport;
struct AppMemoryUsageLimitChangingEventArgs;
struct AppResourceGroupBackgroundTaskReport;
struct AppResourceGroupInfo;
struct AppResourceGroupInfoWatcher;
struct AppResourceGroupInfoWatcherEventArgs;
struct AppResourceGroupInfoWatcherExecutionStateChangedEventArgs;
struct AppResourceGroupMemoryReport;
struct AppResourceGroupStateReport;
struct DateTimeSettings;
struct DispatcherQueue;
struct DispatcherQueueController;
struct DispatcherQueueShutdownStartingEventArgs;
struct DispatcherQueueTimer;
struct FolderLauncherOptions;
struct KnownUserProperties;
struct LaunchUriResult;
struct Launcher;
struct LauncherOptions;
struct LauncherUIOptions;
struct MemoryManager;
struct ProcessLauncher;
struct ProcessLauncherOptions;
struct ProcessLauncherResult;
struct ProcessMemoryReport;
struct ProtocolForResultsOperation;
struct RemoteLauncher;
struct RemoteLauncherOptions;
struct ShutdownManager;
struct TimeZoneSettings;
struct User;
struct UserAuthenticationStatusChangeDeferral;
struct UserAuthenticationStatusChangingEventArgs;
struct UserChangedEventArgs;
struct UserDeviceAssociation;
struct UserDeviceAssociationChangedEventArgs;
struct UserPicker;
struct UserWatcher;
struct DispatcherQueueHandler;

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::System::VirtualKeyModifiers> : std::true_type {};
template <> struct category<Windows::System::IAppDiagnosticInfo>{ using type = interface_category; };
template <> struct category<Windows::System::IAppDiagnosticInfo2>{ using type = interface_category; };
template <> struct category<Windows::System::IAppDiagnosticInfoStatics>{ using type = interface_category; };
template <> struct category<Windows::System::IAppDiagnosticInfoStatics2>{ using type = interface_category; };
template <> struct category<Windows::System::IAppDiagnosticInfoWatcher>{ using type = interface_category; };
template <> struct category<Windows::System::IAppDiagnosticInfoWatcherEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::IAppMemoryReport>{ using type = interface_category; };
template <> struct category<Windows::System::IAppMemoryReport2>{ using type = interface_category; };
template <> struct category<Windows::System::IAppMemoryUsageLimitChangingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::IAppResourceGroupBackgroundTaskReport>{ using type = interface_category; };
template <> struct category<Windows::System::IAppResourceGroupInfo>{ using type = interface_category; };
template <> struct category<Windows::System::IAppResourceGroupInfoWatcher>{ using type = interface_category; };
template <> struct category<Windows::System::IAppResourceGroupInfoWatcherEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::IAppResourceGroupMemoryReport>{ using type = interface_category; };
template <> struct category<Windows::System::IAppResourceGroupStateReport>{ using type = interface_category; };
template <> struct category<Windows::System::IDateTimeSettingsStatics>{ using type = interface_category; };
template <> struct category<Windows::System::IDispatcherQueue>{ using type = interface_category; };
template <> struct category<Windows::System::IDispatcherQueueController>{ using type = interface_category; };
template <> struct category<Windows::System::IDispatcherQueueControllerStatics>{ using type = interface_category; };
template <> struct category<Windows::System::IDispatcherQueueShutdownStartingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::IDispatcherQueueStatics>{ using type = interface_category; };
template <> struct category<Windows::System::IDispatcherQueueTimer>{ using type = interface_category; };
template <> struct category<Windows::System::IFolderLauncherOptions>{ using type = interface_category; };
template <> struct category<Windows::System::IKnownUserPropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::System::ILaunchUriResult>{ using type = interface_category; };
template <> struct category<Windows::System::ILauncherOptions>{ using type = interface_category; };
template <> struct category<Windows::System::ILauncherOptions2>{ using type = interface_category; };
template <> struct category<Windows::System::ILauncherOptions3>{ using type = interface_category; };
template <> struct category<Windows::System::ILauncherOptions4>{ using type = interface_category; };
template <> struct category<Windows::System::ILauncherStatics>{ using type = interface_category; };
template <> struct category<Windows::System::ILauncherStatics2>{ using type = interface_category; };
template <> struct category<Windows::System::ILauncherStatics3>{ using type = interface_category; };
template <> struct category<Windows::System::ILauncherStatics4>{ using type = interface_category; };
template <> struct category<Windows::System::ILauncherUIOptions>{ using type = interface_category; };
template <> struct category<Windows::System::ILauncherViewOptions>{ using type = interface_category; };
template <> struct category<Windows::System::IMemoryManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::System::IMemoryManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::System::IMemoryManagerStatics3>{ using type = interface_category; };
template <> struct category<Windows::System::IMemoryManagerStatics4>{ using type = interface_category; };
template <> struct category<Windows::System::IProcessLauncherOptions>{ using type = interface_category; };
template <> struct category<Windows::System::IProcessLauncherResult>{ using type = interface_category; };
template <> struct category<Windows::System::IProcessLauncherStatics>{ using type = interface_category; };
template <> struct category<Windows::System::IProcessMemoryReport>{ using type = interface_category; };
template <> struct category<Windows::System::IProtocolForResultsOperation>{ using type = interface_category; };
template <> struct category<Windows::System::IRemoteLauncherOptions>{ using type = interface_category; };
template <> struct category<Windows::System::IRemoteLauncherStatics>{ using type = interface_category; };
template <> struct category<Windows::System::IShutdownManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::System::IShutdownManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::System::ITimeZoneSettingsStatics>{ using type = interface_category; };
template <> struct category<Windows::System::IUser>{ using type = interface_category; };
template <> struct category<Windows::System::IUserAuthenticationStatusChangeDeferral>{ using type = interface_category; };
template <> struct category<Windows::System::IUserAuthenticationStatusChangingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::IUserChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::IUserDeviceAssociationChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::IUserDeviceAssociationStatics>{ using type = interface_category; };
template <> struct category<Windows::System::IUserPicker>{ using type = interface_category; };
template <> struct category<Windows::System::IUserPickerStatics>{ using type = interface_category; };
template <> struct category<Windows::System::IUserStatics>{ using type = interface_category; };
template <> struct category<Windows::System::IUserWatcher>{ using type = interface_category; };
template <> struct category<Windows::System::AppDiagnosticInfo>{ using type = class_category; };
template <> struct category<Windows::System::AppDiagnosticInfoWatcher>{ using type = class_category; };
template <> struct category<Windows::System::AppDiagnosticInfoWatcherEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::AppMemoryReport>{ using type = class_category; };
template <> struct category<Windows::System::AppMemoryUsageLimitChangingEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::AppResourceGroupBackgroundTaskReport>{ using type = class_category; };
template <> struct category<Windows::System::AppResourceGroupInfo>{ using type = class_category; };
template <> struct category<Windows::System::AppResourceGroupInfoWatcher>{ using type = class_category; };
template <> struct category<Windows::System::AppResourceGroupInfoWatcherEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::AppResourceGroupMemoryReport>{ using type = class_category; };
template <> struct category<Windows::System::AppResourceGroupStateReport>{ using type = class_category; };
template <> struct category<Windows::System::DateTimeSettings>{ using type = class_category; };
template <> struct category<Windows::System::DispatcherQueue>{ using type = class_category; };
template <> struct category<Windows::System::DispatcherQueueController>{ using type = class_category; };
template <> struct category<Windows::System::DispatcherQueueShutdownStartingEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::DispatcherQueueTimer>{ using type = class_category; };
template <> struct category<Windows::System::FolderLauncherOptions>{ using type = class_category; };
template <> struct category<Windows::System::KnownUserProperties>{ using type = class_category; };
template <> struct category<Windows::System::LaunchUriResult>{ using type = class_category; };
template <> struct category<Windows::System::Launcher>{ using type = class_category; };
template <> struct category<Windows::System::LauncherOptions>{ using type = class_category; };
template <> struct category<Windows::System::LauncherUIOptions>{ using type = class_category; };
template <> struct category<Windows::System::MemoryManager>{ using type = class_category; };
template <> struct category<Windows::System::ProcessLauncher>{ using type = class_category; };
template <> struct category<Windows::System::ProcessLauncherOptions>{ using type = class_category; };
template <> struct category<Windows::System::ProcessLauncherResult>{ using type = class_category; };
template <> struct category<Windows::System::ProcessMemoryReport>{ using type = class_category; };
template <> struct category<Windows::System::ProtocolForResultsOperation>{ using type = class_category; };
template <> struct category<Windows::System::RemoteLauncher>{ using type = class_category; };
template <> struct category<Windows::System::RemoteLauncherOptions>{ using type = class_category; };
template <> struct category<Windows::System::ShutdownManager>{ using type = class_category; };
template <> struct category<Windows::System::TimeZoneSettings>{ using type = class_category; };
template <> struct category<Windows::System::User>{ using type = class_category; };
template <> struct category<Windows::System::UserAuthenticationStatusChangeDeferral>{ using type = class_category; };
template <> struct category<Windows::System::UserAuthenticationStatusChangingEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::UserChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::UserDeviceAssociation>{ using type = class_category; };
template <> struct category<Windows::System::UserDeviceAssociationChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::UserPicker>{ using type = class_category; };
template <> struct category<Windows::System::UserWatcher>{ using type = class_category; };
template <> struct category<Windows::System::AppDiagnosticInfoWatcherStatus>{ using type = enum_category; };
template <> struct category<Windows::System::AppMemoryUsageLevel>{ using type = enum_category; };
template <> struct category<Windows::System::AppResourceGroupEnergyQuotaState>{ using type = enum_category; };
template <> struct category<Windows::System::AppResourceGroupExecutionState>{ using type = enum_category; };
template <> struct category<Windows::System::AppResourceGroupInfoWatcherStatus>{ using type = enum_category; };
template <> struct category<Windows::System::DiagnosticAccessStatus>{ using type = enum_category; };
template <> struct category<Windows::System::DispatcherQueuePriority>{ using type = enum_category; };
template <> struct category<Windows::System::LaunchFileStatus>{ using type = enum_category; };
template <> struct category<Windows::System::LaunchQuerySupportStatus>{ using type = enum_category; };
template <> struct category<Windows::System::LaunchQuerySupportType>{ using type = enum_category; };
template <> struct category<Windows::System::LaunchUriStatus>{ using type = enum_category; };
template <> struct category<Windows::System::PowerState>{ using type = enum_category; };
template <> struct category<Windows::System::ProcessorArchitecture>{ using type = enum_category; };
template <> struct category<Windows::System::RemoteLaunchUriStatus>{ using type = enum_category; };
template <> struct category<Windows::System::ShutdownKind>{ using type = enum_category; };
template <> struct category<Windows::System::UserAuthenticationStatus>{ using type = enum_category; };
template <> struct category<Windows::System::UserPictureSize>{ using type = enum_category; };
template <> struct category<Windows::System::UserType>{ using type = enum_category; };
template <> struct category<Windows::System::UserWatcherStatus>{ using type = enum_category; };
template <> struct category<Windows::System::VirtualKey>{ using type = enum_category; };
template <> struct category<Windows::System::VirtualKeyModifiers>{ using type = enum_category; };
template <> struct category<Windows::System::DispatcherQueueHandler>{ using type = delegate_category; };
template <> struct name<Windows::System::IAppDiagnosticInfo>{ static constexpr auto & value{ L"Windows.System.IAppDiagnosticInfo" }; };
template <> struct name<Windows::System::IAppDiagnosticInfo2>{ static constexpr auto & value{ L"Windows.System.IAppDiagnosticInfo2" }; };
template <> struct name<Windows::System::IAppDiagnosticInfoStatics>{ static constexpr auto & value{ L"Windows.System.IAppDiagnosticInfoStatics" }; };
template <> struct name<Windows::System::IAppDiagnosticInfoStatics2>{ static constexpr auto & value{ L"Windows.System.IAppDiagnosticInfoStatics2" }; };
template <> struct name<Windows::System::IAppDiagnosticInfoWatcher>{ static constexpr auto & value{ L"Windows.System.IAppDiagnosticInfoWatcher" }; };
template <> struct name<Windows::System::IAppDiagnosticInfoWatcherEventArgs>{ static constexpr auto & value{ L"Windows.System.IAppDiagnosticInfoWatcherEventArgs" }; };
template <> struct name<Windows::System::IAppMemoryReport>{ static constexpr auto & value{ L"Windows.System.IAppMemoryReport" }; };
template <> struct name<Windows::System::IAppMemoryReport2>{ static constexpr auto & value{ L"Windows.System.IAppMemoryReport2" }; };
template <> struct name<Windows::System::IAppMemoryUsageLimitChangingEventArgs>{ static constexpr auto & value{ L"Windows.System.IAppMemoryUsageLimitChangingEventArgs" }; };
template <> struct name<Windows::System::IAppResourceGroupBackgroundTaskReport>{ static constexpr auto & value{ L"Windows.System.IAppResourceGroupBackgroundTaskReport" }; };
template <> struct name<Windows::System::IAppResourceGroupInfo>{ static constexpr auto & value{ L"Windows.System.IAppResourceGroupInfo" }; };
template <> struct name<Windows::System::IAppResourceGroupInfoWatcher>{ static constexpr auto & value{ L"Windows.System.IAppResourceGroupInfoWatcher" }; };
template <> struct name<Windows::System::IAppResourceGroupInfoWatcherEventArgs>{ static constexpr auto & value{ L"Windows.System.IAppResourceGroupInfoWatcherEventArgs" }; };
template <> struct name<Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.System.IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs" }; };
template <> struct name<Windows::System::IAppResourceGroupMemoryReport>{ static constexpr auto & value{ L"Windows.System.IAppResourceGroupMemoryReport" }; };
template <> struct name<Windows::System::IAppResourceGroupStateReport>{ static constexpr auto & value{ L"Windows.System.IAppResourceGroupStateReport" }; };
template <> struct name<Windows::System::IDateTimeSettingsStatics>{ static constexpr auto & value{ L"Windows.System.IDateTimeSettingsStatics" }; };
template <> struct name<Windows::System::IDispatcherQueue>{ static constexpr auto & value{ L"Windows.System.IDispatcherQueue" }; };
template <> struct name<Windows::System::IDispatcherQueueController>{ static constexpr auto & value{ L"Windows.System.IDispatcherQueueController" }; };
template <> struct name<Windows::System::IDispatcherQueueControllerStatics>{ static constexpr auto & value{ L"Windows.System.IDispatcherQueueControllerStatics" }; };
template <> struct name<Windows::System::IDispatcherQueueShutdownStartingEventArgs>{ static constexpr auto & value{ L"Windows.System.IDispatcherQueueShutdownStartingEventArgs" }; };
template <> struct name<Windows::System::IDispatcherQueueStatics>{ static constexpr auto & value{ L"Windows.System.IDispatcherQueueStatics" }; };
template <> struct name<Windows::System::IDispatcherQueueTimer>{ static constexpr auto & value{ L"Windows.System.IDispatcherQueueTimer" }; };
template <> struct name<Windows::System::IFolderLauncherOptions>{ static constexpr auto & value{ L"Windows.System.IFolderLauncherOptions" }; };
template <> struct name<Windows::System::IKnownUserPropertiesStatics>{ static constexpr auto & value{ L"Windows.System.IKnownUserPropertiesStatics" }; };
template <> struct name<Windows::System::ILaunchUriResult>{ static constexpr auto & value{ L"Windows.System.ILaunchUriResult" }; };
template <> struct name<Windows::System::ILauncherOptions>{ static constexpr auto & value{ L"Windows.System.ILauncherOptions" }; };
template <> struct name<Windows::System::ILauncherOptions2>{ static constexpr auto & value{ L"Windows.System.ILauncherOptions2" }; };
template <> struct name<Windows::System::ILauncherOptions3>{ static constexpr auto & value{ L"Windows.System.ILauncherOptions3" }; };
template <> struct name<Windows::System::ILauncherOptions4>{ static constexpr auto & value{ L"Windows.System.ILauncherOptions4" }; };
template <> struct name<Windows::System::ILauncherStatics>{ static constexpr auto & value{ L"Windows.System.ILauncherStatics" }; };
template <> struct name<Windows::System::ILauncherStatics2>{ static constexpr auto & value{ L"Windows.System.ILauncherStatics2" }; };
template <> struct name<Windows::System::ILauncherStatics3>{ static constexpr auto & value{ L"Windows.System.ILauncherStatics3" }; };
template <> struct name<Windows::System::ILauncherStatics4>{ static constexpr auto & value{ L"Windows.System.ILauncherStatics4" }; };
template <> struct name<Windows::System::ILauncherUIOptions>{ static constexpr auto & value{ L"Windows.System.ILauncherUIOptions" }; };
template <> struct name<Windows::System::ILauncherViewOptions>{ static constexpr auto & value{ L"Windows.System.ILauncherViewOptions" }; };
template <> struct name<Windows::System::IMemoryManagerStatics>{ static constexpr auto & value{ L"Windows.System.IMemoryManagerStatics" }; };
template <> struct name<Windows::System::IMemoryManagerStatics2>{ static constexpr auto & value{ L"Windows.System.IMemoryManagerStatics2" }; };
template <> struct name<Windows::System::IMemoryManagerStatics3>{ static constexpr auto & value{ L"Windows.System.IMemoryManagerStatics3" }; };
template <> struct name<Windows::System::IMemoryManagerStatics4>{ static constexpr auto & value{ L"Windows.System.IMemoryManagerStatics4" }; };
template <> struct name<Windows::System::IProcessLauncherOptions>{ static constexpr auto & value{ L"Windows.System.IProcessLauncherOptions" }; };
template <> struct name<Windows::System::IProcessLauncherResult>{ static constexpr auto & value{ L"Windows.System.IProcessLauncherResult" }; };
template <> struct name<Windows::System::IProcessLauncherStatics>{ static constexpr auto & value{ L"Windows.System.IProcessLauncherStatics" }; };
template <> struct name<Windows::System::IProcessMemoryReport>{ static constexpr auto & value{ L"Windows.System.IProcessMemoryReport" }; };
template <> struct name<Windows::System::IProtocolForResultsOperation>{ static constexpr auto & value{ L"Windows.System.IProtocolForResultsOperation" }; };
template <> struct name<Windows::System::IRemoteLauncherOptions>{ static constexpr auto & value{ L"Windows.System.IRemoteLauncherOptions" }; };
template <> struct name<Windows::System::IRemoteLauncherStatics>{ static constexpr auto & value{ L"Windows.System.IRemoteLauncherStatics" }; };
template <> struct name<Windows::System::IShutdownManagerStatics>{ static constexpr auto & value{ L"Windows.System.IShutdownManagerStatics" }; };
template <> struct name<Windows::System::IShutdownManagerStatics2>{ static constexpr auto & value{ L"Windows.System.IShutdownManagerStatics2" }; };
template <> struct name<Windows::System::ITimeZoneSettingsStatics>{ static constexpr auto & value{ L"Windows.System.ITimeZoneSettingsStatics" }; };
template <> struct name<Windows::System::IUser>{ static constexpr auto & value{ L"Windows.System.IUser" }; };
template <> struct name<Windows::System::IUserAuthenticationStatusChangeDeferral>{ static constexpr auto & value{ L"Windows.System.IUserAuthenticationStatusChangeDeferral" }; };
template <> struct name<Windows::System::IUserAuthenticationStatusChangingEventArgs>{ static constexpr auto & value{ L"Windows.System.IUserAuthenticationStatusChangingEventArgs" }; };
template <> struct name<Windows::System::IUserChangedEventArgs>{ static constexpr auto & value{ L"Windows.System.IUserChangedEventArgs" }; };
template <> struct name<Windows::System::IUserDeviceAssociationChangedEventArgs>{ static constexpr auto & value{ L"Windows.System.IUserDeviceAssociationChangedEventArgs" }; };
template <> struct name<Windows::System::IUserDeviceAssociationStatics>{ static constexpr auto & value{ L"Windows.System.IUserDeviceAssociationStatics" }; };
template <> struct name<Windows::System::IUserPicker>{ static constexpr auto & value{ L"Windows.System.IUserPicker" }; };
template <> struct name<Windows::System::IUserPickerStatics>{ static constexpr auto & value{ L"Windows.System.IUserPickerStatics" }; };
template <> struct name<Windows::System::IUserStatics>{ static constexpr auto & value{ L"Windows.System.IUserStatics" }; };
template <> struct name<Windows::System::IUserWatcher>{ static constexpr auto & value{ L"Windows.System.IUserWatcher" }; };
template <> struct name<Windows::System::AppDiagnosticInfo>{ static constexpr auto & value{ L"Windows.System.AppDiagnosticInfo" }; };
template <> struct name<Windows::System::AppDiagnosticInfoWatcher>{ static constexpr auto & value{ L"Windows.System.AppDiagnosticInfoWatcher" }; };
template <> struct name<Windows::System::AppDiagnosticInfoWatcherEventArgs>{ static constexpr auto & value{ L"Windows.System.AppDiagnosticInfoWatcherEventArgs" }; };
template <> struct name<Windows::System::AppMemoryReport>{ static constexpr auto & value{ L"Windows.System.AppMemoryReport" }; };
template <> struct name<Windows::System::AppMemoryUsageLimitChangingEventArgs>{ static constexpr auto & value{ L"Windows.System.AppMemoryUsageLimitChangingEventArgs" }; };
template <> struct name<Windows::System::AppResourceGroupBackgroundTaskReport>{ static constexpr auto & value{ L"Windows.System.AppResourceGroupBackgroundTaskReport" }; };
template <> struct name<Windows::System::AppResourceGroupInfo>{ static constexpr auto & value{ L"Windows.System.AppResourceGroupInfo" }; };
template <> struct name<Windows::System::AppResourceGroupInfoWatcher>{ static constexpr auto & value{ L"Windows.System.AppResourceGroupInfoWatcher" }; };
template <> struct name<Windows::System::AppResourceGroupInfoWatcherEventArgs>{ static constexpr auto & value{ L"Windows.System.AppResourceGroupInfoWatcherEventArgs" }; };
template <> struct name<Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.System.AppResourceGroupInfoWatcherExecutionStateChangedEventArgs" }; };
template <> struct name<Windows::System::AppResourceGroupMemoryReport>{ static constexpr auto & value{ L"Windows.System.AppResourceGroupMemoryReport" }; };
template <> struct name<Windows::System::AppResourceGroupStateReport>{ static constexpr auto & value{ L"Windows.System.AppResourceGroupStateReport" }; };
template <> struct name<Windows::System::DateTimeSettings>{ static constexpr auto & value{ L"Windows.System.DateTimeSettings" }; };
template <> struct name<Windows::System::DispatcherQueue>{ static constexpr auto & value{ L"Windows.System.DispatcherQueue" }; };
template <> struct name<Windows::System::DispatcherQueueController>{ static constexpr auto & value{ L"Windows.System.DispatcherQueueController" }; };
template <> struct name<Windows::System::DispatcherQueueShutdownStartingEventArgs>{ static constexpr auto & value{ L"Windows.System.DispatcherQueueShutdownStartingEventArgs" }; };
template <> struct name<Windows::System::DispatcherQueueTimer>{ static constexpr auto & value{ L"Windows.System.DispatcherQueueTimer" }; };
template <> struct name<Windows::System::FolderLauncherOptions>{ static constexpr auto & value{ L"Windows.System.FolderLauncherOptions" }; };
template <> struct name<Windows::System::KnownUserProperties>{ static constexpr auto & value{ L"Windows.System.KnownUserProperties" }; };
template <> struct name<Windows::System::LaunchUriResult>{ static constexpr auto & value{ L"Windows.System.LaunchUriResult" }; };
template <> struct name<Windows::System::Launcher>{ static constexpr auto & value{ L"Windows.System.Launcher" }; };
template <> struct name<Windows::System::LauncherOptions>{ static constexpr auto & value{ L"Windows.System.LauncherOptions" }; };
template <> struct name<Windows::System::LauncherUIOptions>{ static constexpr auto & value{ L"Windows.System.LauncherUIOptions" }; };
template <> struct name<Windows::System::MemoryManager>{ static constexpr auto & value{ L"Windows.System.MemoryManager" }; };
template <> struct name<Windows::System::ProcessLauncher>{ static constexpr auto & value{ L"Windows.System.ProcessLauncher" }; };
template <> struct name<Windows::System::ProcessLauncherOptions>{ static constexpr auto & value{ L"Windows.System.ProcessLauncherOptions" }; };
template <> struct name<Windows::System::ProcessLauncherResult>{ static constexpr auto & value{ L"Windows.System.ProcessLauncherResult" }; };
template <> struct name<Windows::System::ProcessMemoryReport>{ static constexpr auto & value{ L"Windows.System.ProcessMemoryReport" }; };
template <> struct name<Windows::System::ProtocolForResultsOperation>{ static constexpr auto & value{ L"Windows.System.ProtocolForResultsOperation" }; };
template <> struct name<Windows::System::RemoteLauncher>{ static constexpr auto & value{ L"Windows.System.RemoteLauncher" }; };
template <> struct name<Windows::System::RemoteLauncherOptions>{ static constexpr auto & value{ L"Windows.System.RemoteLauncherOptions" }; };
template <> struct name<Windows::System::ShutdownManager>{ static constexpr auto & value{ L"Windows.System.ShutdownManager" }; };
template <> struct name<Windows::System::TimeZoneSettings>{ static constexpr auto & value{ L"Windows.System.TimeZoneSettings" }; };
template <> struct name<Windows::System::User>{ static constexpr auto & value{ L"Windows.System.User" }; };
template <> struct name<Windows::System::UserAuthenticationStatusChangeDeferral>{ static constexpr auto & value{ L"Windows.System.UserAuthenticationStatusChangeDeferral" }; };
template <> struct name<Windows::System::UserAuthenticationStatusChangingEventArgs>{ static constexpr auto & value{ L"Windows.System.UserAuthenticationStatusChangingEventArgs" }; };
template <> struct name<Windows::System::UserChangedEventArgs>{ static constexpr auto & value{ L"Windows.System.UserChangedEventArgs" }; };
template <> struct name<Windows::System::UserDeviceAssociation>{ static constexpr auto & value{ L"Windows.System.UserDeviceAssociation" }; };
template <> struct name<Windows::System::UserDeviceAssociationChangedEventArgs>{ static constexpr auto & value{ L"Windows.System.UserDeviceAssociationChangedEventArgs" }; };
template <> struct name<Windows::System::UserPicker>{ static constexpr auto & value{ L"Windows.System.UserPicker" }; };
template <> struct name<Windows::System::UserWatcher>{ static constexpr auto & value{ L"Windows.System.UserWatcher" }; };
template <> struct name<Windows::System::AppDiagnosticInfoWatcherStatus>{ static constexpr auto & value{ L"Windows.System.AppDiagnosticInfoWatcherStatus" }; };
template <> struct name<Windows::System::AppMemoryUsageLevel>{ static constexpr auto & value{ L"Windows.System.AppMemoryUsageLevel" }; };
template <> struct name<Windows::System::AppResourceGroupEnergyQuotaState>{ static constexpr auto & value{ L"Windows.System.AppResourceGroupEnergyQuotaState" }; };
template <> struct name<Windows::System::AppResourceGroupExecutionState>{ static constexpr auto & value{ L"Windows.System.AppResourceGroupExecutionState" }; };
template <> struct name<Windows::System::AppResourceGroupInfoWatcherStatus>{ static constexpr auto & value{ L"Windows.System.AppResourceGroupInfoWatcherStatus" }; };
template <> struct name<Windows::System::DiagnosticAccessStatus>{ static constexpr auto & value{ L"Windows.System.DiagnosticAccessStatus" }; };
template <> struct name<Windows::System::DispatcherQueuePriority>{ static constexpr auto & value{ L"Windows.System.DispatcherQueuePriority" }; };
template <> struct name<Windows::System::LaunchFileStatus>{ static constexpr auto & value{ L"Windows.System.LaunchFileStatus" }; };
template <> struct name<Windows::System::LaunchQuerySupportStatus>{ static constexpr auto & value{ L"Windows.System.LaunchQuerySupportStatus" }; };
template <> struct name<Windows::System::LaunchQuerySupportType>{ static constexpr auto & value{ L"Windows.System.LaunchQuerySupportType" }; };
template <> struct name<Windows::System::LaunchUriStatus>{ static constexpr auto & value{ L"Windows.System.LaunchUriStatus" }; };
template <> struct name<Windows::System::PowerState>{ static constexpr auto & value{ L"Windows.System.PowerState" }; };
template <> struct name<Windows::System::ProcessorArchitecture>{ static constexpr auto & value{ L"Windows.System.ProcessorArchitecture" }; };
template <> struct name<Windows::System::RemoteLaunchUriStatus>{ static constexpr auto & value{ L"Windows.System.RemoteLaunchUriStatus" }; };
template <> struct name<Windows::System::ShutdownKind>{ static constexpr auto & value{ L"Windows.System.ShutdownKind" }; };
template <> struct name<Windows::System::UserAuthenticationStatus>{ static constexpr auto & value{ L"Windows.System.UserAuthenticationStatus" }; };
template <> struct name<Windows::System::UserPictureSize>{ static constexpr auto & value{ L"Windows.System.UserPictureSize" }; };
template <> struct name<Windows::System::UserType>{ static constexpr auto & value{ L"Windows.System.UserType" }; };
template <> struct name<Windows::System::UserWatcherStatus>{ static constexpr auto & value{ L"Windows.System.UserWatcherStatus" }; };
template <> struct name<Windows::System::VirtualKey>{ static constexpr auto & value{ L"Windows.System.VirtualKey" }; };
template <> struct name<Windows::System::VirtualKeyModifiers>{ static constexpr auto & value{ L"Windows.System.VirtualKeyModifiers" }; };
template <> struct name<Windows::System::DispatcherQueueHandler>{ static constexpr auto & value{ L"Windows.System.DispatcherQueueHandler" }; };
template <> struct guid<Windows::System::IAppDiagnosticInfo>{ static constexpr GUID value{ 0xE348A69A,0x8889,0x4CA3,{ 0xBE,0x07,0xD5,0xFF,0xFF,0x5F,0x08,0x04 } }; };
template <> struct guid<Windows::System::IAppDiagnosticInfo2>{ static constexpr GUID value{ 0xDF46FBD7,0x191A,0x446C,{ 0x94,0x73,0x8F,0xBC,0x23,0x74,0xA3,0x54 } }; };
template <> struct guid<Windows::System::IAppDiagnosticInfoStatics>{ static constexpr GUID value{ 0xCE6925BF,0x10CA,0x40C8,{ 0xA9,0xCA,0xC5,0xC9,0x65,0x01,0x86,0x6E } }; };
template <> struct guid<Windows::System::IAppDiagnosticInfoStatics2>{ static constexpr GUID value{ 0x05B24B86,0x1000,0x4C90,{ 0xBB,0x9F,0x72,0x35,0x07,0x1C,0x50,0xFE } }; };
template <> struct guid<Windows::System::IAppDiagnosticInfoWatcher>{ static constexpr GUID value{ 0x75575070,0x01D3,0x489A,{ 0x93,0x25,0x52,0xF9,0xCC,0x6E,0xDE,0x0A } }; };
template <> struct guid<Windows::System::IAppDiagnosticInfoWatcherEventArgs>{ static constexpr GUID value{ 0x7017C716,0xE1DA,0x4C65,{ 0x99,0xDF,0x04,0x6D,0xFF,0x5B,0xE7,0x1A } }; };
template <> struct guid<Windows::System::IAppMemoryReport>{ static constexpr GUID value{ 0x6D65339B,0x4D6F,0x45BC,{ 0x9C,0x5E,0xE4,0x9B,0x3F,0xF2,0x75,0x8D } }; };
template <> struct guid<Windows::System::IAppMemoryReport2>{ static constexpr GUID value{ 0x5F7F3738,0x51B7,0x42DC,{ 0xB7,0xED,0x79,0xBA,0x46,0xD2,0x88,0x57 } }; };
template <> struct guid<Windows::System::IAppMemoryUsageLimitChangingEventArgs>{ static constexpr GUID value{ 0x79F86664,0xFECA,0x4DA5,{ 0x9E,0x40,0x2B,0xC6,0x3E,0xFD,0xC9,0x79 } }; };
template <> struct guid<Windows::System::IAppResourceGroupBackgroundTaskReport>{ static constexpr GUID value{ 0x2566E74E,0xB05D,0x40C2,{ 0x9D,0xC1,0x1A,0x4F,0x03,0x9E,0xA1,0x20 } }; };
template <> struct guid<Windows::System::IAppResourceGroupInfo>{ static constexpr GUID value{ 0xB913F77A,0xE807,0x49F4,{ 0x84,0x5E,0x7B,0x8B,0xDC,0xFE,0x8E,0xE7 } }; };
template <> struct guid<Windows::System::IAppResourceGroupInfoWatcher>{ static constexpr GUID value{ 0xD9B0A0FD,0x6E5A,0x4C72,{ 0x8B,0x17,0x09,0xFE,0xC4,0xA2,0x12,0xBD } }; };
template <> struct guid<Windows::System::IAppResourceGroupInfoWatcherEventArgs>{ static constexpr GUID value{ 0x7A787637,0x6302,0x4D2F,{ 0xBF,0x89,0x1C,0x12,0xD0,0xB2,0xA6,0xB9 } }; };
template <> struct guid<Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs>{ static constexpr GUID value{ 0x1BDBEDD7,0xFEE6,0x4FD4,{ 0x98,0xDD,0xE9,0x2A,0x2C,0xC2,0x99,0xF3 } }; };
template <> struct guid<Windows::System::IAppResourceGroupMemoryReport>{ static constexpr GUID value{ 0x2C8C06B1,0x7DB1,0x4C51,{ 0xA2,0x25,0x7F,0xAE,0x2D,0x49,0xE4,0x31 } }; };
template <> struct guid<Windows::System::IAppResourceGroupStateReport>{ static constexpr GUID value{ 0x52849F18,0x2F70,0x4236,{ 0xAB,0x40,0xD0,0x4D,0xB0,0xC7,0xB9,0x31 } }; };
template <> struct guid<Windows::System::IDateTimeSettingsStatics>{ static constexpr GUID value{ 0x5D2150D1,0x47EE,0x48AB,{ 0xA5,0x2B,0x9F,0x19,0x54,0x27,0x8D,0x82 } }; };
template <> struct guid<Windows::System::IDispatcherQueue>{ static constexpr GUID value{ 0x603E88E4,0xA338,0x4FFE,{ 0xA4,0x57,0xA5,0xCF,0xB9,0xCE,0xB8,0x99 } }; };
template <> struct guid<Windows::System::IDispatcherQueueController>{ static constexpr GUID value{ 0x22F34E66,0x50DB,0x4E36,{ 0xA9,0x8D,0x61,0xC0,0x1B,0x38,0x4D,0x20 } }; };
template <> struct guid<Windows::System::IDispatcherQueueControllerStatics>{ static constexpr GUID value{ 0x0A6C98E0,0x5198,0x49A2,{ 0xA3,0x13,0x3F,0x70,0xD1,0xF1,0x3C,0x27 } }; };
template <> struct guid<Windows::System::IDispatcherQueueShutdownStartingEventArgs>{ static constexpr GUID value{ 0xC4724C4C,0xFF97,0x40C0,{ 0xA2,0x26,0xCC,0x0A,0xAA,0x54,0x5E,0x89 } }; };
template <> struct guid<Windows::System::IDispatcherQueueStatics>{ static constexpr GUID value{ 0xA96D83D7,0x9371,0x4517,{ 0x92,0x45,0xD0,0x82,0x4A,0xC1,0x2C,0x74 } }; };
template <> struct guid<Windows::System::IDispatcherQueueTimer>{ static constexpr GUID value{ 0x5FEABB1D,0xA31C,0x4727,{ 0xB1,0xAC,0x37,0x45,0x46,0x49,0xD5,0x6A } }; };
template <> struct guid<Windows::System::IFolderLauncherOptions>{ static constexpr GUID value{ 0xBB91C27D,0x6B87,0x432A,{ 0xBD,0x04,0x77,0x6C,0x6F,0x5F,0xB2,0xAB } }; };
template <> struct guid<Windows::System::IKnownUserPropertiesStatics>{ static constexpr GUID value{ 0x7755911A,0x70C5,0x48E5,{ 0xB6,0x37,0x5B,0xA3,0x44,0x1E,0x4E,0xE4 } }; };
template <> struct guid<Windows::System::ILaunchUriResult>{ static constexpr GUID value{ 0xEC27A8DF,0xF6D5,0x45CA,{ 0x91,0x3A,0x70,0xA4,0x0C,0x5C,0x82,0x21 } }; };
template <> struct guid<Windows::System::ILauncherOptions>{ static constexpr GUID value{ 0xBAFA21D8,0xB071,0x4CD8,{ 0x85,0x3E,0x34,0x12,0x03,0xE5,0x57,0xD3 } }; };
template <> struct guid<Windows::System::ILauncherOptions2>{ static constexpr GUID value{ 0x3BA08EB4,0x6E40,0x4DCE,{ 0xA1,0xA3,0x2F,0x53,0x95,0x0A,0xFB,0x49 } }; };
template <> struct guid<Windows::System::ILauncherOptions3>{ static constexpr GUID value{ 0xF0770655,0x4B63,0x4E3A,{ 0x91,0x07,0x4E,0x68,0x78,0x41,0x92,0x3A } }; };
template <> struct guid<Windows::System::ILauncherOptions4>{ static constexpr GUID value{ 0xEF6FD10E,0xE6FB,0x4814,{ 0xA4,0x4E,0x57,0xE8,0xB9,0xD9,0xA0,0x1B } }; };
template <> struct guid<Windows::System::ILauncherStatics>{ static constexpr GUID value{ 0x277151C3,0x9E3E,0x42F6,{ 0x91,0xA4,0x5D,0xFD,0xEB,0x23,0x24,0x51 } }; };
template <> struct guid<Windows::System::ILauncherStatics2>{ static constexpr GUID value{ 0x59BA2FBB,0x24CB,0x4C02,{ 0xA4,0xC4,0x82,0x94,0x56,0x9D,0x54,0xF1 } }; };
template <> struct guid<Windows::System::ILauncherStatics3>{ static constexpr GUID value{ 0x234261A8,0x9DB3,0x4683,{ 0xAA,0x42,0xDC,0x6F,0x51,0xD3,0x38,0x47 } }; };
template <> struct guid<Windows::System::ILauncherStatics4>{ static constexpr GUID value{ 0xB9EC819F,0xB5A5,0x41C6,{ 0xB3,0xB3,0xDD,0x1B,0x31,0x78,0xBC,0xF2 } }; };
template <> struct guid<Windows::System::ILauncherUIOptions>{ static constexpr GUID value{ 0x1B25DA6E,0x8AA6,0x41E9,{ 0x82,0x51,0x41,0x65,0xF5,0x98,0x5F,0x49 } }; };
template <> struct guid<Windows::System::ILauncherViewOptions>{ static constexpr GUID value{ 0x8A9B29F1,0x7CA7,0x49DE,{ 0x9B,0xD3,0x3C,0x5B,0x71,0x84,0xF6,0x16 } }; };
template <> struct guid<Windows::System::IMemoryManagerStatics>{ static constexpr GUID value{ 0x5C6C279C,0xD7CA,0x4779,{ 0x91,0x88,0x40,0x57,0x21,0x9C,0xE6,0x4C } }; };
template <> struct guid<Windows::System::IMemoryManagerStatics2>{ static constexpr GUID value{ 0x6EEE351F,0x6D62,0x423F,{ 0x94,0x79,0xB0,0x1F,0x9C,0x9F,0x76,0x69 } }; };
template <> struct guid<Windows::System::IMemoryManagerStatics3>{ static constexpr GUID value{ 0x149B59CE,0x92AD,0x4E35,{ 0x89,0xEB,0x50,0xDF,0xB4,0xC0,0xD9,0x1C } }; };
template <> struct guid<Windows::System::IMemoryManagerStatics4>{ static constexpr GUID value{ 0xC5A94828,0xE84E,0x4886,{ 0x8A,0x0D,0x44,0xB3,0x19,0x0E,0x3B,0x72 } }; };
template <> struct guid<Windows::System::IProcessLauncherOptions>{ static constexpr GUID value{ 0x3080B9CF,0xF444,0x4A83,{ 0xBE,0xAF,0xA5,0x49,0xA0,0xF3,0x22,0x9C } }; };
template <> struct guid<Windows::System::IProcessLauncherResult>{ static constexpr GUID value{ 0x544C8934,0x86D8,0x4991,{ 0x8E,0x75,0xEC,0xE8,0xA4,0x3B,0x6B,0x6D } }; };
template <> struct guid<Windows::System::IProcessLauncherStatics>{ static constexpr GUID value{ 0x33AB66E7,0x2D0E,0x448B,{ 0xA6,0xA0,0xC1,0x3C,0x38,0x36,0xD0,0x9C } }; };
template <> struct guid<Windows::System::IProcessMemoryReport>{ static constexpr GUID value{ 0x087305A8,0x9B70,0x4782,{ 0x87,0x41,0x3A,0x98,0x2B,0x6C,0xE5,0xE4 } }; };
template <> struct guid<Windows::System::IProtocolForResultsOperation>{ static constexpr GUID value{ 0xD581293A,0x6DE9,0x4D28,{ 0x93,0x78,0xF8,0x67,0x82,0xE1,0x82,0xBB } }; };
template <> struct guid<Windows::System::IRemoteLauncherOptions>{ static constexpr GUID value{ 0x9E3A2788,0x2891,0x4CDF,{ 0xA2,0xD6,0x9D,0xFF,0x7D,0x02,0xE6,0x93 } }; };
template <> struct guid<Windows::System::IRemoteLauncherStatics>{ static constexpr GUID value{ 0xD7DB7A93,0xA30C,0x48B7,{ 0x9F,0x21,0x05,0x10,0x26,0xA4,0xE5,0x17 } }; };
template <> struct guid<Windows::System::IShutdownManagerStatics>{ static constexpr GUID value{ 0x72E247ED,0xDD5B,0x4D6C,{ 0xB1,0xD0,0xC5,0x7A,0x7B,0xBB,0x5F,0x94 } }; };
template <> struct guid<Windows::System::IShutdownManagerStatics2>{ static constexpr GUID value{ 0x0F69A02F,0x9C34,0x43C7,{ 0xA8,0xC3,0x70,0xB3,0x0A,0x7F,0x75,0x04 } }; };
template <> struct guid<Windows::System::ITimeZoneSettingsStatics>{ static constexpr GUID value{ 0x9B3B2BEA,0xA101,0x41AE,{ 0x9F,0xBD,0x02,0x87,0x28,0xBA,0xB7,0x3D } }; };
template <> struct guid<Windows::System::IUser>{ static constexpr GUID value{ 0xDF9A26C6,0xE746,0x4BCD,{ 0xB5,0xD4,0x12,0x01,0x03,0xC4,0x20,0x9B } }; };
template <> struct guid<Windows::System::IUserAuthenticationStatusChangeDeferral>{ static constexpr GUID value{ 0x88B59568,0xBB30,0x42FB,{ 0xA2,0x70,0xE9,0x90,0x2E,0x40,0xEF,0xA7 } }; };
template <> struct guid<Windows::System::IUserAuthenticationStatusChangingEventArgs>{ static constexpr GUID value{ 0x8C030F28,0xA711,0x4C1E,{ 0xAB,0x48,0x04,0x17,0x9C,0x15,0x93,0x8F } }; };
template <> struct guid<Windows::System::IUserChangedEventArgs>{ static constexpr GUID value{ 0x086459DC,0x18C6,0x48DB,{ 0xBC,0x99,0x72,0x4F,0xB9,0x20,0x3C,0xCC } }; };
template <> struct guid<Windows::System::IUserDeviceAssociationChangedEventArgs>{ static constexpr GUID value{ 0xBD1F6F6C,0xBB5D,0x4D7B,{ 0xA5,0xF0,0xC8,0xCD,0x11,0xA3,0x8D,0x42 } }; };
template <> struct guid<Windows::System::IUserDeviceAssociationStatics>{ static constexpr GUID value{ 0x7E491E14,0xF85A,0x4C07,{ 0x8D,0xA9,0x7F,0xE3,0xD0,0x54,0x23,0x43 } }; };
template <> struct guid<Windows::System::IUserPicker>{ static constexpr GUID value{ 0x7D548008,0xF1E3,0x4A6C,{ 0x8D,0xDC,0xA9,0xBB,0x0F,0x48,0x8A,0xED } }; };
template <> struct guid<Windows::System::IUserPickerStatics>{ static constexpr GUID value{ 0xDE3290DC,0x7E73,0x4DF6,{ 0xA1,0xAE,0x4D,0x7E,0xCA,0x82,0xB4,0x0D } }; };
template <> struct guid<Windows::System::IUserStatics>{ static constexpr GUID value{ 0x155EB23B,0x242A,0x45E0,{ 0xA2,0xE9,0x31,0x71,0xFC,0x6A,0x7F,0xDD } }; };
template <> struct guid<Windows::System::IUserWatcher>{ static constexpr GUID value{ 0x155EB23B,0x242A,0x45E0,{ 0xA2,0xE9,0x31,0x71,0xFC,0x6A,0x7F,0xBB } }; };
template <> struct guid<Windows::System::DispatcherQueueHandler>{ static constexpr GUID value{ 0xDFA2DC9C,0x1A2D,0x4917,{ 0x98,0xF2,0x93,0x9A,0xF1,0xD6,0xE0,0xC8 } }; };
template <> struct default_interface<Windows::System::AppDiagnosticInfo>{ using type = Windows::System::IAppDiagnosticInfo; };
template <> struct default_interface<Windows::System::AppDiagnosticInfoWatcher>{ using type = Windows::System::IAppDiagnosticInfoWatcher; };
template <> struct default_interface<Windows::System::AppDiagnosticInfoWatcherEventArgs>{ using type = Windows::System::IAppDiagnosticInfoWatcherEventArgs; };
template <> struct default_interface<Windows::System::AppMemoryReport>{ using type = Windows::System::IAppMemoryReport; };
template <> struct default_interface<Windows::System::AppMemoryUsageLimitChangingEventArgs>{ using type = Windows::System::IAppMemoryUsageLimitChangingEventArgs; };
template <> struct default_interface<Windows::System::AppResourceGroupBackgroundTaskReport>{ using type = Windows::System::IAppResourceGroupBackgroundTaskReport; };
template <> struct default_interface<Windows::System::AppResourceGroupInfo>{ using type = Windows::System::IAppResourceGroupInfo; };
template <> struct default_interface<Windows::System::AppResourceGroupInfoWatcher>{ using type = Windows::System::IAppResourceGroupInfoWatcher; };
template <> struct default_interface<Windows::System::AppResourceGroupInfoWatcherEventArgs>{ using type = Windows::System::IAppResourceGroupInfoWatcherEventArgs; };
template <> struct default_interface<Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs>{ using type = Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs; };
template <> struct default_interface<Windows::System::AppResourceGroupMemoryReport>{ using type = Windows::System::IAppResourceGroupMemoryReport; };
template <> struct default_interface<Windows::System::AppResourceGroupStateReport>{ using type = Windows::System::IAppResourceGroupStateReport; };
template <> struct default_interface<Windows::System::DispatcherQueue>{ using type = Windows::System::IDispatcherQueue; };
template <> struct default_interface<Windows::System::DispatcherQueueController>{ using type = Windows::System::IDispatcherQueueController; };
template <> struct default_interface<Windows::System::DispatcherQueueShutdownStartingEventArgs>{ using type = Windows::System::IDispatcherQueueShutdownStartingEventArgs; };
template <> struct default_interface<Windows::System::DispatcherQueueTimer>{ using type = Windows::System::IDispatcherQueueTimer; };
template <> struct default_interface<Windows::System::FolderLauncherOptions>{ using type = Windows::System::IFolderLauncherOptions; };
template <> struct default_interface<Windows::System::LaunchUriResult>{ using type = Windows::System::ILaunchUriResult; };
template <> struct default_interface<Windows::System::LauncherOptions>{ using type = Windows::System::ILauncherOptions; };
template <> struct default_interface<Windows::System::LauncherUIOptions>{ using type = Windows::System::ILauncherUIOptions; };
template <> struct default_interface<Windows::System::ProcessLauncherOptions>{ using type = Windows::System::IProcessLauncherOptions; };
template <> struct default_interface<Windows::System::ProcessLauncherResult>{ using type = Windows::System::IProcessLauncherResult; };
template <> struct default_interface<Windows::System::ProcessMemoryReport>{ using type = Windows::System::IProcessMemoryReport; };
template <> struct default_interface<Windows::System::ProtocolForResultsOperation>{ using type = Windows::System::IProtocolForResultsOperation; };
template <> struct default_interface<Windows::System::RemoteLauncherOptions>{ using type = Windows::System::IRemoteLauncherOptions; };
template <> struct default_interface<Windows::System::User>{ using type = Windows::System::IUser; };
template <> struct default_interface<Windows::System::UserAuthenticationStatusChangeDeferral>{ using type = Windows::System::IUserAuthenticationStatusChangeDeferral; };
template <> struct default_interface<Windows::System::UserAuthenticationStatusChangingEventArgs>{ using type = Windows::System::IUserAuthenticationStatusChangingEventArgs; };
template <> struct default_interface<Windows::System::UserChangedEventArgs>{ using type = Windows::System::IUserChangedEventArgs; };
template <> struct default_interface<Windows::System::UserDeviceAssociationChangedEventArgs>{ using type = Windows::System::IUserDeviceAssociationChangedEventArgs; };
template <> struct default_interface<Windows::System::UserPicker>{ using type = Windows::System::IUserPicker; };
template <> struct default_interface<Windows::System::UserWatcher>{ using type = Windows::System::IUserWatcher; };

template <typename D>
struct consume_Windows_System_IAppDiagnosticInfo
{
    Windows::ApplicationModel::AppInfo AppInfo() const noexcept;
};
template <> struct consume<Windows::System::IAppDiagnosticInfo> { template <typename D> using type = consume_Windows_System_IAppDiagnosticInfo<D>; };

template <typename D>
struct consume_Windows_System_IAppDiagnosticInfo2
{
    Windows::Foundation::Collections::IVector<Windows::System::AppResourceGroupInfo> GetResourceGroups() const;
    Windows::System::AppResourceGroupInfoWatcher CreateResourceGroupWatcher() const;
};
template <> struct consume<Windows::System::IAppDiagnosticInfo2> { template <typename D> using type = consume_Windows_System_IAppDiagnosticInfo2<D>; };

template <typename D>
struct consume_Windows_System_IAppDiagnosticInfoStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>> RequestInfoAsync() const;
};
template <> struct consume<Windows::System::IAppDiagnosticInfoStatics> { template <typename D> using type = consume_Windows_System_IAppDiagnosticInfoStatics<D>; };

template <typename D>
struct consume_Windows_System_IAppDiagnosticInfoStatics2
{
    Windows::System::AppDiagnosticInfoWatcher CreateWatcher() const;
    Windows::Foundation::IAsyncOperation<Windows::System::DiagnosticAccessStatus> RequestAccessAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>> RequestInfoForPackageAsync(param::hstring const& packageFamilyName) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>> RequestInfoForAppAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>> RequestInfoForAppAsync(param::hstring const& appUserModelId) const;
};
template <> struct consume<Windows::System::IAppDiagnosticInfoStatics2> { template <typename D> using type = consume_Windows_System_IAppDiagnosticInfoStatics2<D>; };

template <typename D>
struct consume_Windows_System_IAppDiagnosticInfoWatcher
{
    event_token Added(Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const& handler) const;
    using Added_revoker = event_revoker<Windows::System::IAppDiagnosticInfoWatcher>;
    Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const& handler) const;
    void Added(event_token const& token) const;
    event_token Removed(Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const& handler) const;
    using Removed_revoker = event_revoker<Windows::System::IAppDiagnosticInfoWatcher>;
    Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const& handler) const;
    void Removed(event_token const& token) const;
    event_token EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using EnumerationCompleted_revoker = event_revoker<Windows::System::IAppDiagnosticInfoWatcher>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void EnumerationCompleted(event_token const& token) const;
    event_token Stopped(Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using Stopped_revoker = event_revoker<Windows::System::IAppDiagnosticInfoWatcher>;
    Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void Stopped(event_token const& token) const;
    Windows::System::AppDiagnosticInfoWatcherStatus Status() const noexcept;
    void Start() const;
    void Stop() const;
};
template <> struct consume<Windows::System::IAppDiagnosticInfoWatcher> { template <typename D> using type = consume_Windows_System_IAppDiagnosticInfoWatcher<D>; };

template <typename D>
struct consume_Windows_System_IAppDiagnosticInfoWatcherEventArgs
{
    Windows::System::AppDiagnosticInfo AppDiagnosticInfo() const noexcept;
};
template <> struct consume<Windows::System::IAppDiagnosticInfoWatcherEventArgs> { template <typename D> using type = consume_Windows_System_IAppDiagnosticInfoWatcherEventArgs<D>; };

template <typename D>
struct consume_Windows_System_IAppMemoryReport
{
    uint64_t PrivateCommitUsage() const noexcept;
    uint64_t PeakPrivateCommitUsage() const noexcept;
    uint64_t TotalCommitUsage() const noexcept;
    uint64_t TotalCommitLimit() const noexcept;
};
template <> struct consume<Windows::System::IAppMemoryReport> { template <typename D> using type = consume_Windows_System_IAppMemoryReport<D>; };

template <typename D>
struct consume_Windows_System_IAppMemoryReport2
{
    uint64_t ExpectedTotalCommitLimit() const noexcept;
};
template <> struct consume<Windows::System::IAppMemoryReport2> { template <typename D> using type = consume_Windows_System_IAppMemoryReport2<D>; };

template <typename D>
struct consume_Windows_System_IAppMemoryUsageLimitChangingEventArgs
{
    uint64_t OldLimit() const noexcept;
    uint64_t NewLimit() const noexcept;
};
template <> struct consume<Windows::System::IAppMemoryUsageLimitChangingEventArgs> { template <typename D> using type = consume_Windows_System_IAppMemoryUsageLimitChangingEventArgs<D>; };

template <typename D>
struct consume_Windows_System_IAppResourceGroupBackgroundTaskReport
{
    GUID TaskId() const noexcept;
    hstring Name() const noexcept;
    hstring Trigger() const noexcept;
    hstring EntryPoint() const noexcept;
};
template <> struct consume<Windows::System::IAppResourceGroupBackgroundTaskReport> { template <typename D> using type = consume_Windows_System_IAppResourceGroupBackgroundTaskReport<D>; };

template <typename D>
struct consume_Windows_System_IAppResourceGroupInfo
{
    GUID InstanceId() const noexcept;
    bool IsShared() const noexcept;
    Windows::Foundation::Collections::IVector<Windows::System::AppResourceGroupBackgroundTaskReport> GetBackgroundTaskReports() const;
    Windows::System::AppResourceGroupMemoryReport GetMemoryReport() const;
    Windows::Foundation::Collections::IVector<Windows::System::Diagnostics::ProcessDiagnosticInfo> GetProcessDiagnosticInfos() const;
    Windows::System::AppResourceGroupStateReport GetStateReport() const;
};
template <> struct consume<Windows::System::IAppResourceGroupInfo> { template <typename D> using type = consume_Windows_System_IAppResourceGroupInfo<D>; };

template <typename D>
struct consume_Windows_System_IAppResourceGroupInfoWatcher
{
    event_token Added(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const& handler) const;
    using Added_revoker = event_revoker<Windows::System::IAppResourceGroupInfoWatcher>;
    Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const& handler) const;
    void Added(event_token const& token) const;
    event_token Removed(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const& handler) const;
    using Removed_revoker = event_revoker<Windows::System::IAppResourceGroupInfoWatcher>;
    Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const& handler) const;
    void Removed(event_token const& token) const;
    event_token EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using EnumerationCompleted_revoker = event_revoker<Windows::System::IAppResourceGroupInfoWatcher>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void EnumerationCompleted(event_token const& token) const;
    event_token Stopped(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using Stopped_revoker = event_revoker<Windows::System::IAppResourceGroupInfoWatcher>;
    Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void Stopped(event_token const& token) const;
    event_token ExecutionStateChanged(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs> const& handler) const;
    using ExecutionStateChanged_revoker = event_revoker<Windows::System::IAppResourceGroupInfoWatcher>;
    ExecutionStateChanged_revoker ExecutionStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs> const& handler) const;
    void ExecutionStateChanged(event_token const& token) const;
    Windows::System::AppResourceGroupInfoWatcherStatus Status() const noexcept;
    void Start() const;
    void Stop() const;
};
template <> struct consume<Windows::System::IAppResourceGroupInfoWatcher> { template <typename D> using type = consume_Windows_System_IAppResourceGroupInfoWatcher<D>; };

template <typename D>
struct consume_Windows_System_IAppResourceGroupInfoWatcherEventArgs
{
    Windows::Foundation::Collections::IVectorView<Windows::System::AppDiagnosticInfo> AppDiagnosticInfos() const noexcept;
    Windows::System::AppResourceGroupInfo AppResourceGroupInfo() const noexcept;
};
template <> struct consume<Windows::System::IAppResourceGroupInfoWatcherEventArgs> { template <typename D> using type = consume_Windows_System_IAppResourceGroupInfoWatcherEventArgs<D>; };

template <typename D>
struct consume_Windows_System_IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs
{
    Windows::Foundation::Collections::IVectorView<Windows::System::AppDiagnosticInfo> AppDiagnosticInfos() const noexcept;
    Windows::System::AppResourceGroupInfo AppResourceGroupInfo() const noexcept;
};
template <> struct consume<Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs> { template <typename D> using type = consume_Windows_System_IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_IAppResourceGroupMemoryReport
{
    uint64_t CommitUsageLimit() const noexcept;
    Windows::System::AppMemoryUsageLevel CommitUsageLevel() const noexcept;
    uint64_t PrivateCommitUsage() const noexcept;
    uint64_t TotalCommitUsage() const noexcept;
};
template <> struct consume<Windows::System::IAppResourceGroupMemoryReport> { template <typename D> using type = consume_Windows_System_IAppResourceGroupMemoryReport<D>; };

template <typename D>
struct consume_Windows_System_IAppResourceGroupStateReport
{
    Windows::System::AppResourceGroupExecutionState ExecutionState() const noexcept;
    Windows::System::AppResourceGroupEnergyQuotaState EnergyQuotaState() const noexcept;
};
template <> struct consume<Windows::System::IAppResourceGroupStateReport> { template <typename D> using type = consume_Windows_System_IAppResourceGroupStateReport<D>; };

template <typename D>
struct consume_Windows_System_IDateTimeSettingsStatics
{
    void SetSystemDateTime(Windows::Foundation::DateTime const& utcDateTime) const;
};
template <> struct consume<Windows::System::IDateTimeSettingsStatics> { template <typename D> using type = consume_Windows_System_IDateTimeSettingsStatics<D>; };

template <typename D>
struct consume_Windows_System_IDispatcherQueue
{
    Windows::System::DispatcherQueueTimer CreateTimer() const;
    bool TryEnqueue(Windows::System::DispatcherQueueHandler const& callback) const;
    bool TryEnqueue(Windows::System::DispatcherQueuePriority const& priority, Windows::System::DispatcherQueueHandler const& callback) const;
    event_token ShutdownStarting(Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::System::DispatcherQueueShutdownStartingEventArgs> const& handler) const;
    using ShutdownStarting_revoker = event_revoker<Windows::System::IDispatcherQueue>;
    ShutdownStarting_revoker ShutdownStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::System::DispatcherQueueShutdownStartingEventArgs> const& handler) const;
    void ShutdownStarting(event_token const& token) const;
    event_token ShutdownCompleted(Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::Foundation::IInspectable> const& handler) const;
    using ShutdownCompleted_revoker = event_revoker<Windows::System::IDispatcherQueue>;
    ShutdownCompleted_revoker ShutdownCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::Foundation::IInspectable> const& handler) const;
    void ShutdownCompleted(event_token const& token) const;
};
template <> struct consume<Windows::System::IDispatcherQueue> { template <typename D> using type = consume_Windows_System_IDispatcherQueue<D>; };

template <typename D>
struct consume_Windows_System_IDispatcherQueueController
{
    Windows::System::DispatcherQueue DispatcherQueue() const noexcept;
    Windows::Foundation::IAsyncAction ShutdownQueueAsync() const;
};
template <> struct consume<Windows::System::IDispatcherQueueController> { template <typename D> using type = consume_Windows_System_IDispatcherQueueController<D>; };

template <typename D>
struct consume_Windows_System_IDispatcherQueueControllerStatics
{
    Windows::System::DispatcherQueueController CreateOnDedicatedThread() const;
};
template <> struct consume<Windows::System::IDispatcherQueueControllerStatics> { template <typename D> using type = consume_Windows_System_IDispatcherQueueControllerStatics<D>; };

template <typename D>
struct consume_Windows_System_IDispatcherQueueShutdownStartingEventArgs
{
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::System::IDispatcherQueueShutdownStartingEventArgs> { template <typename D> using type = consume_Windows_System_IDispatcherQueueShutdownStartingEventArgs<D>; };

template <typename D>
struct consume_Windows_System_IDispatcherQueueStatics
{
    Windows::System::DispatcherQueue GetForCurrentThread() const;
};
template <> struct consume<Windows::System::IDispatcherQueueStatics> { template <typename D> using type = consume_Windows_System_IDispatcherQueueStatics<D>; };

template <typename D>
struct consume_Windows_System_IDispatcherQueueTimer
{
    Windows::Foundation::TimeSpan Interval() const noexcept;
    void Interval(Windows::Foundation::TimeSpan const& value) const noexcept;
    bool IsRunning() const noexcept;
    bool IsRepeating() const noexcept;
    void IsRepeating(bool value) const noexcept;
    void Start() const;
    void Stop() const;
    event_token Tick(Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueueTimer, Windows::Foundation::IInspectable> const& handler) const;
    using Tick_revoker = event_revoker<Windows::System::IDispatcherQueueTimer>;
    Tick_revoker Tick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueueTimer, Windows::Foundation::IInspectable> const& handler) const;
    void Tick(event_token const& token) const;
};
template <> struct consume<Windows::System::IDispatcherQueueTimer> { template <typename D> using type = consume_Windows_System_IDispatcherQueueTimer<D>; };

template <typename D>
struct consume_Windows_System_IFolderLauncherOptions
{
    Windows::Foundation::Collections::IVector<Windows::Storage::IStorageItem> ItemsToSelect() const noexcept;
};
template <> struct consume<Windows::System::IFolderLauncherOptions> { template <typename D> using type = consume_Windows_System_IFolderLauncherOptions<D>; };

template <typename D>
struct consume_Windows_System_IKnownUserPropertiesStatics
{
    hstring DisplayName() const noexcept;
    hstring FirstName() const noexcept;
    hstring LastName() const noexcept;
    hstring ProviderName() const noexcept;
    hstring AccountName() const noexcept;
    hstring GuestHost() const noexcept;
    hstring PrincipalName() const noexcept;
    hstring DomainName() const noexcept;
    hstring SessionInitiationProtocolUri() const noexcept;
};
template <> struct consume<Windows::System::IKnownUserPropertiesStatics> { template <typename D> using type = consume_Windows_System_IKnownUserPropertiesStatics<D>; };

template <typename D>
struct consume_Windows_System_ILaunchUriResult
{
    Windows::System::LaunchUriStatus Status() const noexcept;
    Windows::Foundation::Collections::ValueSet Result() const noexcept;
};
template <> struct consume<Windows::System::ILaunchUriResult> { template <typename D> using type = consume_Windows_System_ILaunchUriResult<D>; };

template <typename D>
struct consume_Windows_System_ILauncherOptions
{
    bool TreatAsUntrusted() const noexcept;
    void TreatAsUntrusted(bool value) const noexcept;
    bool DisplayApplicationPicker() const noexcept;
    void DisplayApplicationPicker(bool value) const noexcept;
    Windows::System::LauncherUIOptions UI() const noexcept;
    hstring PreferredApplicationPackageFamilyName() const noexcept;
    void PreferredApplicationPackageFamilyName(param::hstring const& value) const noexcept;
    hstring PreferredApplicationDisplayName() const noexcept;
    void PreferredApplicationDisplayName(param::hstring const& value) const noexcept;
    Windows::Foundation::Uri FallbackUri() const noexcept;
    void FallbackUri(Windows::Foundation::Uri const& value) const noexcept;
    hstring ContentType() const noexcept;
    void ContentType(param::hstring const& value) const noexcept;
};
template <> struct consume<Windows::System::ILauncherOptions> { template <typename D> using type = consume_Windows_System_ILauncherOptions<D>; };

template <typename D>
struct consume_Windows_System_ILauncherOptions2
{
    hstring TargetApplicationPackageFamilyName() const noexcept;
    void TargetApplicationPackageFamilyName(param::hstring const& value) const noexcept;
    Windows::Storage::Search::StorageFileQueryResult NeighboringFilesQuery() const noexcept;
    void NeighboringFilesQuery(Windows::Storage::Search::StorageFileQueryResult const& value) const noexcept;
};
template <> struct consume<Windows::System::ILauncherOptions2> { template <typename D> using type = consume_Windows_System_ILauncherOptions2<D>; };

template <typename D>
struct consume_Windows_System_ILauncherOptions3
{
    bool IgnoreAppUriHandlers() const noexcept;
    void IgnoreAppUriHandlers(bool value) const noexcept;
};
template <> struct consume<Windows::System::ILauncherOptions3> { template <typename D> using type = consume_Windows_System_ILauncherOptions3<D>; };

template <typename D>
struct consume_Windows_System_ILauncherOptions4
{
    bool LimitPickerToCurrentAppAndAppUriHandlers() const noexcept;
    void LimitPickerToCurrentAppAndAppUriHandlers(bool value) const noexcept;
};
template <> struct consume<Windows::System::ILauncherOptions4> { template <typename D> using type = consume_Windows_System_ILauncherOptions4<D>; };

template <typename D>
struct consume_Windows_System_ILauncherStatics
{
    Windows::Foundation::IAsyncOperation<bool> LaunchFileAsync(Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<bool> LaunchFileAsync(Windows::Storage::IStorageFile const& file, Windows::System::LauncherOptions const& options) const;
    Windows::Foundation::IAsyncOperation<bool> LaunchUriAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperation<bool> LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const;
};
template <> struct consume<Windows::System::ILauncherStatics> { template <typename D> using type = consume_Windows_System_ILauncherStatics<D>; };

template <typename D>
struct consume_Windows_System_ILauncherStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const;
    Windows::Foundation::IAsyncOperation<bool> LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const;
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType) const;
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType, param::hstring const& packageFamilyName) const;
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> QueryFileSupportAsync(Windows::Storage::StorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> QueryFileSupportAsync(Windows::Storage::StorageFile const& file, param::hstring const& packageFamilyName) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> FindUriSchemeHandlersAsync(param::hstring const& scheme) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> FindUriSchemeHandlersAsync(param::hstring const& scheme, Windows::System::LaunchQuerySupportType const& launchQuerySupportType) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> FindFileHandlersAsync(param::hstring const& extension) const;
};
template <> struct consume<Windows::System::ILauncherStatics2> { template <typename D> using type = consume_Windows_System_ILauncherStatics2<D>; };

template <typename D>
struct consume_Windows_System_ILauncherStatics3
{
    Windows::Foundation::IAsyncOperation<bool> LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder) const;
    Windows::Foundation::IAsyncOperation<bool> LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder, Windows::System::FolderLauncherOptions const& options) const;
};
template <> struct consume<Windows::System::ILauncherStatics3> { template <typename D> using type = consume_Windows_System_ILauncherStatics3<D>; };

template <typename D>
struct consume_Windows_System_ILauncherStatics4
{
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus> QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri, param::hstring const& packageFamilyName) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> FindAppUriHandlersAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus> LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const;
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const;
};
template <> struct consume<Windows::System::ILauncherStatics4> { template <typename D> using type = consume_Windows_System_ILauncherStatics4<D>; };

template <typename D>
struct consume_Windows_System_ILauncherUIOptions
{
    Windows::Foundation::IReference<Windows::Foundation::Point> InvocationPoint() const noexcept;
    void InvocationPoint(optional<Windows::Foundation::Point> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::Foundation::Rect> SelectionRect() const noexcept;
    void SelectionRect(optional<Windows::Foundation::Rect> const& value) const noexcept;
    Windows::UI::Popups::Placement PreferredPlacement() const noexcept;
    void PreferredPlacement(Windows::UI::Popups::Placement const& value) const noexcept;
};
template <> struct consume<Windows::System::ILauncherUIOptions> { template <typename D> using type = consume_Windows_System_ILauncherUIOptions<D>; };

template <typename D>
struct consume_Windows_System_ILauncherViewOptions
{
    Windows::UI::ViewManagement::ViewSizePreference DesiredRemainingView() const noexcept;
    void DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference const& value) const noexcept;
};
template <> struct consume<Windows::System::ILauncherViewOptions> { template <typename D> using type = consume_Windows_System_ILauncherViewOptions<D>; };

template <typename D>
struct consume_Windows_System_IMemoryManagerStatics
{
    uint64_t AppMemoryUsage() const noexcept;
    uint64_t AppMemoryUsageLimit() const noexcept;
    Windows::System::AppMemoryUsageLevel AppMemoryUsageLevel() const noexcept;
    event_token AppMemoryUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using AppMemoryUsageIncreased_revoker = event_revoker<Windows::System::IMemoryManagerStatics>;
    AppMemoryUsageIncreased_revoker AppMemoryUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void AppMemoryUsageIncreased(event_token const& token) const;
    event_token AppMemoryUsageDecreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using AppMemoryUsageDecreased_revoker = event_revoker<Windows::System::IMemoryManagerStatics>;
    AppMemoryUsageDecreased_revoker AppMemoryUsageDecreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void AppMemoryUsageDecreased(event_token const& token) const;
    event_token AppMemoryUsageLimitChanging(Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler) const;
    using AppMemoryUsageLimitChanging_revoker = event_revoker<Windows::System::IMemoryManagerStatics>;
    AppMemoryUsageLimitChanging_revoker AppMemoryUsageLimitChanging(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler) const;
    void AppMemoryUsageLimitChanging(event_token const& token) const;
};
template <> struct consume<Windows::System::IMemoryManagerStatics> { template <typename D> using type = consume_Windows_System_IMemoryManagerStatics<D>; };

template <typename D>
struct consume_Windows_System_IMemoryManagerStatics2
{
    Windows::System::AppMemoryReport GetAppMemoryReport() const;
    Windows::System::ProcessMemoryReport GetProcessMemoryReport() const;
};
template <> struct consume<Windows::System::IMemoryManagerStatics2> { template <typename D> using type = consume_Windows_System_IMemoryManagerStatics2<D>; };

template <typename D>
struct consume_Windows_System_IMemoryManagerStatics3
{
    bool TrySetAppMemoryUsageLimit(uint64_t value) const;
};
template <> struct consume<Windows::System::IMemoryManagerStatics3> { template <typename D> using type = consume_Windows_System_IMemoryManagerStatics3<D>; };

template <typename D>
struct consume_Windows_System_IMemoryManagerStatics4
{
    uint64_t ExpectedAppMemoryUsageLimit() const noexcept;
};
template <> struct consume<Windows::System::IMemoryManagerStatics4> { template <typename D> using type = consume_Windows_System_IMemoryManagerStatics4<D>; };

template <typename D>
struct consume_Windows_System_IProcessLauncherOptions
{
    Windows::Storage::Streams::IInputStream StandardInput() const noexcept;
    void StandardInput(Windows::Storage::Streams::IInputStream const& value) const noexcept;
    Windows::Storage::Streams::IOutputStream StandardOutput() const noexcept;
    void StandardOutput(Windows::Storage::Streams::IOutputStream const& value) const noexcept;
    Windows::Storage::Streams::IOutputStream StandardError() const noexcept;
    void StandardError(Windows::Storage::Streams::IOutputStream const& value) const noexcept;
    hstring WorkingDirectory() const noexcept;
    void WorkingDirectory(param::hstring const& value) const noexcept;
};
template <> struct consume<Windows::System::IProcessLauncherOptions> { template <typename D> using type = consume_Windows_System_IProcessLauncherOptions<D>; };

template <typename D>
struct consume_Windows_System_IProcessLauncherResult
{
    uint32_t ExitCode() const noexcept;
};
template <> struct consume<Windows::System::IProcessLauncherResult> { template <typename D> using type = consume_Windows_System_IProcessLauncherResult<D>; };

template <typename D>
struct consume_Windows_System_IProcessLauncherStatics
{
    Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args) const;
    Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args, Windows::System::ProcessLauncherOptions const& options) const;
};
template <> struct consume<Windows::System::IProcessLauncherStatics> { template <typename D> using type = consume_Windows_System_IProcessLauncherStatics<D>; };

template <typename D>
struct consume_Windows_System_IProcessMemoryReport
{
    uint64_t PrivateWorkingSetUsage() const noexcept;
    uint64_t TotalWorkingSetUsage() const noexcept;
};
template <> struct consume<Windows::System::IProcessMemoryReport> { template <typename D> using type = consume_Windows_System_IProcessMemoryReport<D>; };

template <typename D>
struct consume_Windows_System_IProtocolForResultsOperation
{
    void ReportCompleted(Windows::Foundation::Collections::ValueSet const& data) const;
};
template <> struct consume<Windows::System::IProtocolForResultsOperation> { template <typename D> using type = consume_Windows_System_IProtocolForResultsOperation<D>; };

template <typename D>
struct consume_Windows_System_IRemoteLauncherOptions
{
    Windows::Foundation::Uri FallbackUri() const noexcept;
    void FallbackUri(Windows::Foundation::Uri const& value) const noexcept;
    Windows::Foundation::Collections::IVector<hstring> PreferredAppIds() const noexcept;
};
template <> struct consume<Windows::System::IRemoteLauncherOptions> { template <typename D> using type = consume_Windows_System_IRemoteLauncherOptions<D>; };

template <typename D>
struct consume_Windows_System_IRemoteLauncherStatics
{
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus> LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const;
};
template <> struct consume<Windows::System::IRemoteLauncherStatics> { template <typename D> using type = consume_Windows_System_IRemoteLauncherStatics<D>; };

template <typename D>
struct consume_Windows_System_IShutdownManagerStatics
{
    void BeginShutdown(Windows::System::ShutdownKind const& shutdownKind, Windows::Foundation::TimeSpan const& timeout) const;
    void CancelShutdown() const;
};
template <> struct consume<Windows::System::IShutdownManagerStatics> { template <typename D> using type = consume_Windows_System_IShutdownManagerStatics<D>; };

template <typename D>
struct consume_Windows_System_IShutdownManagerStatics2
{
    bool IsPowerStateSupported(Windows::System::PowerState const& powerState) const;
    void EnterPowerState(Windows::System::PowerState const& powerState) const;
    void EnterPowerState(Windows::System::PowerState const& powerState, Windows::Foundation::TimeSpan const& wakeUpAfter) const;
};
template <> struct consume<Windows::System::IShutdownManagerStatics2> { template <typename D> using type = consume_Windows_System_IShutdownManagerStatics2<D>; };

template <typename D>
struct consume_Windows_System_ITimeZoneSettingsStatics
{
    hstring CurrentTimeZoneDisplayName() const noexcept;
    Windows::Foundation::Collections::IVectorView<hstring> SupportedTimeZoneDisplayNames() const noexcept;
    bool CanChangeTimeZone() const noexcept;
    void ChangeTimeZoneByDisplayName(param::hstring const& timeZoneDisplayName) const;
};
template <> struct consume<Windows::System::ITimeZoneSettingsStatics> { template <typename D> using type = consume_Windows_System_ITimeZoneSettingsStatics<D>; };

template <typename D>
struct consume_Windows_System_IUser
{
    hstring NonRoamableId() const noexcept;
    Windows::System::UserAuthenticationStatus AuthenticationStatus() const noexcept;
    Windows::System::UserType Type() const noexcept;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable> GetPropertyAsync(param::hstring const& value) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet> GetPropertiesAsync(param::async_vector_view<hstring> const& values) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> GetPictureAsync(Windows::System::UserPictureSize const& desiredSize) const;
};
template <> struct consume<Windows::System::IUser> { template <typename D> using type = consume_Windows_System_IUser<D>; };

template <typename D>
struct consume_Windows_System_IUserAuthenticationStatusChangeDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::System::IUserAuthenticationStatusChangeDeferral> { template <typename D> using type = consume_Windows_System_IUserAuthenticationStatusChangeDeferral<D>; };

template <typename D>
struct consume_Windows_System_IUserAuthenticationStatusChangingEventArgs
{
    Windows::System::UserAuthenticationStatusChangeDeferral GetDeferral() const;
    Windows::System::User User() const noexcept;
    Windows::System::UserAuthenticationStatus NewStatus() const noexcept;
    Windows::System::UserAuthenticationStatus CurrentStatus() const noexcept;
};
template <> struct consume<Windows::System::IUserAuthenticationStatusChangingEventArgs> { template <typename D> using type = consume_Windows_System_IUserAuthenticationStatusChangingEventArgs<D>; };

template <typename D>
struct consume_Windows_System_IUserChangedEventArgs
{
    Windows::System::User User() const noexcept;
};
template <> struct consume<Windows::System::IUserChangedEventArgs> { template <typename D> using type = consume_Windows_System_IUserChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_IUserDeviceAssociationChangedEventArgs
{
    hstring DeviceId() const noexcept;
    Windows::System::User NewUser() const noexcept;
    Windows::System::User OldUser() const noexcept;
};
template <> struct consume<Windows::System::IUserDeviceAssociationChangedEventArgs> { template <typename D> using type = consume_Windows_System_IUserDeviceAssociationChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_IUserDeviceAssociationStatics
{
    Windows::System::User FindUserFromDeviceId(param::hstring const& deviceId) const;
    event_token UserDeviceAssociationChanged(Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler) const;
    using UserDeviceAssociationChanged_revoker = event_revoker<Windows::System::IUserDeviceAssociationStatics>;
    UserDeviceAssociationChanged_revoker UserDeviceAssociationChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler) const;
    void UserDeviceAssociationChanged(event_token const& token) const;
};
template <> struct consume<Windows::System::IUserDeviceAssociationStatics> { template <typename D> using type = consume_Windows_System_IUserDeviceAssociationStatics<D>; };

template <typename D>
struct consume_Windows_System_IUserPicker
{
    bool AllowGuestAccounts() const noexcept;
    void AllowGuestAccounts(bool value) const noexcept;
    Windows::System::User SuggestedSelectedUser() const noexcept;
    void SuggestedSelectedUser(Windows::System::User const& value) const noexcept;
    Windows::Foundation::IAsyncOperation<Windows::System::User> PickSingleUserAsync() const;
};
template <> struct consume<Windows::System::IUserPicker> { template <typename D> using type = consume_Windows_System_IUserPicker<D>; };

template <typename D>
struct consume_Windows_System_IUserPickerStatics
{
    bool IsSupported() const;
};
template <> struct consume<Windows::System::IUserPickerStatics> { template <typename D> using type = consume_Windows_System_IUserPickerStatics<D>; };

template <typename D>
struct consume_Windows_System_IUserStatics
{
    Windows::System::UserWatcher CreateWatcher() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> FindAllAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> FindAllAsync(Windows::System::UserType const& type) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> FindAllAsync(Windows::System::UserType const& type, Windows::System::UserAuthenticationStatus const& status) const;
    Windows::System::User GetFromId(param::hstring const& nonRoamableId) const;
};
template <> struct consume<Windows::System::IUserStatics> { template <typename D> using type = consume_Windows_System_IUserStatics<D>; };

template <typename D>
struct consume_Windows_System_IUserWatcher
{
    Windows::System::UserWatcherStatus Status() const noexcept;
    void Start() const;
    void Stop() const;
    event_token Added(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
    using Added_revoker = event_revoker<Windows::System::IUserWatcher>;
    Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
    void Added(event_token const& token) const;
    event_token Removed(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
    using Removed_revoker = event_revoker<Windows::System::IUserWatcher>;
    Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
    void Removed(event_token const& token) const;
    event_token Updated(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
    using Updated_revoker = event_revoker<Windows::System::IUserWatcher>;
    Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
    void Updated(event_token const& token) const;
    event_token AuthenticationStatusChanged(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
    using AuthenticationStatusChanged_revoker = event_revoker<Windows::System::IUserWatcher>;
    AuthenticationStatusChanged_revoker AuthenticationStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
    void AuthenticationStatusChanged(event_token const& token) const;
    event_token AuthenticationStatusChanging(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> const& handler) const;
    using AuthenticationStatusChanging_revoker = event_revoker<Windows::System::IUserWatcher>;
    AuthenticationStatusChanging_revoker AuthenticationStatusChanging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> const& handler) const;
    void AuthenticationStatusChanging(event_token const& token) const;
    event_token EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using EnumerationCompleted_revoker = event_revoker<Windows::System::IUserWatcher>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void EnumerationCompleted(event_token const& token) const;
    event_token Stopped(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using Stopped_revoker = event_revoker<Windows::System::IUserWatcher>;
    Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void Stopped(event_token const& token) const;
};
template <> struct consume<Windows::System::IUserWatcher> { template <typename D> using type = consume_Windows_System_IUserWatcher<D>; };

template <> struct abi<Windows::System::IAppDiagnosticInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::IAppDiagnosticInfo2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetResourceGroups(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateResourceGroupWatcher(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::IAppDiagnosticInfoStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestInfoAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::IAppDiagnosticInfoStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWatcher(::IUnknown** watcher) = 0;
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestInfoForPackageAsync(HSTRING packageFamilyName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestInfoForAppAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestInfoForAppUserModelId(HSTRING appUserModelId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::IAppDiagnosticInfoWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_Added(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Added(event_token token) = 0;
    virtual HRESULT __stdcall add_Removed(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Removed(event_token token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_Stopped(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Stopped(event_token token) = 0;
    virtual HRESULT __stdcall get_Status(Windows::System::AppDiagnosticInfoWatcherStatus* value) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

template <> struct abi<Windows::System::IAppDiagnosticInfoWatcherEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppDiagnosticInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::IAppMemoryReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PrivateCommitUsage(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_PeakPrivateCommitUsage(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_TotalCommitUsage(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_TotalCommitLimit(uint64_t* value) = 0;
};};

template <> struct abi<Windows::System::IAppMemoryReport2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExpectedTotalCommitLimit(uint64_t* value) = 0;
};};

template <> struct abi<Windows::System::IAppMemoryUsageLimitChangingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OldLimit(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_NewLimit(uint64_t* value) = 0;
};};

template <> struct abi<Windows::System::IAppResourceGroupBackgroundTaskReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TaskId(GUID* value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Trigger(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EntryPoint(HSTRING* value) = 0;
};};

template <> struct abi<Windows::System::IAppResourceGroupInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InstanceId(GUID* value) = 0;
    virtual HRESULT __stdcall get_IsShared(bool* value) = 0;
    virtual HRESULT __stdcall GetBackgroundTaskReports(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetMemoryReport(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetProcessDiagnosticInfos(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetStateReport(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::IAppResourceGroupInfoWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_Added(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Added(event_token token) = 0;
    virtual HRESULT __stdcall add_Removed(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Removed(event_token token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_Stopped(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Stopped(event_token token) = 0;
    virtual HRESULT __stdcall add_ExecutionStateChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ExecutionStateChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_Status(Windows::System::AppResourceGroupInfoWatcherStatus* status) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

template <> struct abi<Windows::System::IAppResourceGroupInfoWatcherEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppDiagnosticInfos(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AppResourceGroupInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppDiagnosticInfos(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AppResourceGroupInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::IAppResourceGroupMemoryReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CommitUsageLimit(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_CommitUsageLevel(Windows::System::AppMemoryUsageLevel* value) = 0;
    virtual HRESULT __stdcall get_PrivateCommitUsage(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_TotalCommitUsage(uint64_t* value) = 0;
};};

template <> struct abi<Windows::System::IAppResourceGroupStateReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExecutionState(Windows::System::AppResourceGroupExecutionState* value) = 0;
    virtual HRESULT __stdcall get_EnergyQuotaState(Windows::System::AppResourceGroupEnergyQuotaState* value) = 0;
};};

template <> struct abi<Windows::System::IDateTimeSettingsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetSystemDateTime(Windows::Foundation::DateTime utcDateTime) = 0;
};};

template <> struct abi<Windows::System::IDispatcherQueue>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateTimer(::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryEnqueue(::IUnknown* callback, bool* result) = 0;
    virtual HRESULT __stdcall TryEnqueueWithPriority(Windows::System::DispatcherQueuePriority priority, ::IUnknown* callback, bool* result) = 0;
    virtual HRESULT __stdcall add_ShutdownStarting(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ShutdownStarting(event_token token) = 0;
    virtual HRESULT __stdcall add_ShutdownCompleted(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ShutdownCompleted(event_token token) = 0;
};};

template <> struct abi<Windows::System::IDispatcherQueueController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DispatcherQueue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ShutdownQueueAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::IDispatcherQueueControllerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateOnDedicatedThread(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::IDispatcherQueueShutdownStartingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::IDispatcherQueueStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentThread(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::IDispatcherQueueTimer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Interval(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_Interval(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_IsRunning(bool* value) = 0;
    virtual HRESULT __stdcall get_IsRepeating(bool* value) = 0;
    virtual HRESULT __stdcall put_IsRepeating(bool value) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
    virtual HRESULT __stdcall add_Tick(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Tick(event_token token) = 0;
};};

template <> struct abi<Windows::System::IFolderLauncherOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ItemsToSelect(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::IKnownUserPropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FirstName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LastName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ProviderName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AccountName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_GuestHost(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PrincipalName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DomainName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SessionInitiationProtocolUri(HSTRING* value) = 0;
};};

template <> struct abi<Windows::System::ILaunchUriResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(Windows::System::LaunchUriStatus* value) = 0;
    virtual HRESULT __stdcall get_Result(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::ILauncherOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TreatAsUntrusted(bool* value) = 0;
    virtual HRESULT __stdcall put_TreatAsUntrusted(bool value) = 0;
    virtual HRESULT __stdcall get_DisplayApplicationPicker(bool* value) = 0;
    virtual HRESULT __stdcall put_DisplayApplicationPicker(bool value) = 0;
    virtual HRESULT __stdcall get_UI(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PreferredApplicationPackageFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PreferredApplicationPackageFamilyName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_PreferredApplicationDisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PreferredApplicationDisplayName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_FallbackUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FallbackUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ContentType(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ContentType(HSTRING value) = 0;
};};

template <> struct abi<Windows::System::ILauncherOptions2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetApplicationPackageFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetApplicationPackageFamilyName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_NeighboringFilesQuery(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_NeighboringFilesQuery(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::System::ILauncherOptions3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IgnoreAppUriHandlers(bool* value) = 0;
    virtual HRESULT __stdcall put_IgnoreAppUriHandlers(bool value) = 0;
};};

template <> struct abi<Windows::System::ILauncherOptions4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LimitPickerToCurrentAppAndAppUriHandlers(bool* value) = 0;
    virtual HRESULT __stdcall put_LimitPickerToCurrentAppAndAppUriHandlers(bool value) = 0;
};};

template <> struct abi<Windows::System::ILauncherStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LaunchFileAsync(::IUnknown* file, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LaunchFileWithOptionsAsync(::IUnknown* file, ::IUnknown* options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LaunchUriAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LaunchUriWithOptionsAsync(::IUnknown* uri, ::IUnknown* options, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::ILauncherStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LaunchUriForResultsAsync(::IUnknown* uri, ::IUnknown* options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LaunchUriForResultsWithDataAsync(::IUnknown* uri, ::IUnknown* options, ::IUnknown* inputData, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LaunchUriWithDataAsync(::IUnknown* uri, ::IUnknown* options, ::IUnknown* inputData, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall QueryUriSupportAsync(::IUnknown* uri, Windows::System::LaunchQuerySupportType launchQuerySupportType, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall QueryUriSupportWithPackageFamilyNameAsync(::IUnknown* uri, Windows::System::LaunchQuerySupportType launchQuerySupportType, HSTRING packageFamilyName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall QueryFileSupportAsync(::IUnknown* file, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall QueryFileSupportWithPackageFamilyNameAsync(::IUnknown* file, HSTRING packageFamilyName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FindUriSchemeHandlersAsync(HSTRING scheme, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FindUriSchemeHandlersWithLaunchUriTypeAsync(HSTRING scheme, Windows::System::LaunchQuerySupportType launchQuerySupportType, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FindFileHandlersAsync(HSTRING extension, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::ILauncherStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LaunchFolderAsync(::IUnknown* folder, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LaunchFolderWithOptionsAsync(::IUnknown* folder, ::IUnknown* options, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::ILauncherStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall QueryAppUriSupportAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall QueryAppUriSupportWithPackageFamilyNameAsync(::IUnknown* uri, HSTRING packageFamilyName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FindAppUriHandlersAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LaunchUriForUserAsync(::IUnknown* user, ::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LaunchUriWithOptionsForUserAsync(::IUnknown* user, ::IUnknown* uri, ::IUnknown* options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LaunchUriWithDataForUserAsync(::IUnknown* user, ::IUnknown* uri, ::IUnknown* options, ::IUnknown* inputData, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LaunchUriForResultsForUserAsync(::IUnknown* user, ::IUnknown* uri, ::IUnknown* options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LaunchUriForResultsWithDataForUserAsync(::IUnknown* user, ::IUnknown* uri, ::IUnknown* options, ::IUnknown* inputData, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::ILauncherUIOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InvocationPoint(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_InvocationPoint(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SelectionRect(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SelectionRect(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PreferredPlacement(Windows::UI::Popups::Placement* value) = 0;
    virtual HRESULT __stdcall put_PreferredPlacement(Windows::UI::Popups::Placement value) = 0;
};};

template <> struct abi<Windows::System::ILauncherViewOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference* value) = 0;
    virtual HRESULT __stdcall put_DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference value) = 0;
};};

template <> struct abi<Windows::System::IMemoryManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppMemoryUsage(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_AppMemoryUsageLimit(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_AppMemoryUsageLevel(Windows::System::AppMemoryUsageLevel* value) = 0;
    virtual HRESULT __stdcall add_AppMemoryUsageIncreased(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_AppMemoryUsageIncreased(event_token token) = 0;
    virtual HRESULT __stdcall add_AppMemoryUsageDecreased(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_AppMemoryUsageDecreased(event_token token) = 0;
    virtual HRESULT __stdcall add_AppMemoryUsageLimitChanging(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_AppMemoryUsageLimitChanging(event_token token) = 0;
};};

template <> struct abi<Windows::System::IMemoryManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAppMemoryReport(::IUnknown** memoryReport) = 0;
    virtual HRESULT __stdcall GetProcessMemoryReport(::IUnknown** memoryReport) = 0;
};};

template <> struct abi<Windows::System::IMemoryManagerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TrySetAppMemoryUsageLimit(uint64_t value, bool* result) = 0;
};};

template <> struct abi<Windows::System::IMemoryManagerStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExpectedAppMemoryUsageLimit(uint64_t* value) = 0;
};};

template <> struct abi<Windows::System::IProcessLauncherOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StandardInput(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_StandardInput(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_StandardOutput(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_StandardOutput(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_StandardError(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_StandardError(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_WorkingDirectory(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_WorkingDirectory(HSTRING value) = 0;
};};

template <> struct abi<Windows::System::IProcessLauncherResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExitCode(uint32_t* value) = 0;
};};

template <> struct abi<Windows::System::IProcessLauncherStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RunToCompletionAsync(HSTRING fileName, HSTRING args, ::IUnknown** asyncOperationResult) = 0;
    virtual HRESULT __stdcall RunToCompletionAsyncWithOptions(HSTRING fileName, HSTRING args, ::IUnknown* options, ::IUnknown** asyncOperationResult) = 0;
};};

template <> struct abi<Windows::System::IProcessMemoryReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PrivateWorkingSetUsage(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_TotalWorkingSetUsage(uint64_t* value) = 0;
};};

template <> struct abi<Windows::System::IProtocolForResultsOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReportCompleted(::IUnknown* data) = 0;
};};

template <> struct abi<Windows::System::IRemoteLauncherOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FallbackUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FallbackUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PreferredAppIds(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::IRemoteLauncherStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LaunchUriAsync(::IUnknown* remoteSystemConnectionRequest, ::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LaunchUriWithOptionsAsync(::IUnknown* remoteSystemConnectionRequest, ::IUnknown* uri, ::IUnknown* options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LaunchUriWithDataAsync(::IUnknown* remoteSystemConnectionRequest, ::IUnknown* uri, ::IUnknown* options, ::IUnknown* inputData, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::IShutdownManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall BeginShutdown(Windows::System::ShutdownKind shutdownKind, Windows::Foundation::TimeSpan timeout) = 0;
    virtual HRESULT __stdcall CancelShutdown() = 0;
};};

template <> struct abi<Windows::System::IShutdownManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsPowerStateSupported(Windows::System::PowerState powerState, bool* value) = 0;
    virtual HRESULT __stdcall EnterPowerState(Windows::System::PowerState powerState) = 0;
    virtual HRESULT __stdcall EnterPowerStateWithTimeSpan(Windows::System::PowerState powerState, Windows::Foundation::TimeSpan wakeUpAfter) = 0;
};};

template <> struct abi<Windows::System::ITimeZoneSettingsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentTimeZoneDisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SupportedTimeZoneDisplayNames(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CanChangeTimeZone(bool* value) = 0;
    virtual HRESULT __stdcall ChangeTimeZoneByDisplayName(HSTRING timeZoneDisplayName) = 0;
};};

template <> struct abi<Windows::System::IUser>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NonRoamableId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AuthenticationStatus(Windows::System::UserAuthenticationStatus* value) = 0;
    virtual HRESULT __stdcall get_Type(Windows::System::UserType* value) = 0;
    virtual HRESULT __stdcall GetPropertyAsync(HSTRING value, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetPropertiesAsync(::IUnknown* values, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetPictureAsync(Windows::System::UserPictureSize desiredSize, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::IUserAuthenticationStatusChangeDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::System::IUserAuthenticationStatusChangingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeferral(::IUnknown** deferral) = 0;
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NewStatus(Windows::System::UserAuthenticationStatus* value) = 0;
    virtual HRESULT __stdcall get_CurrentStatus(Windows::System::UserAuthenticationStatus* value) = 0;
};};

template <> struct abi<Windows::System::IUserChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::IUserDeviceAssociationChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NewUser(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OldUser(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::IUserDeviceAssociationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindUserFromDeviceId(HSTRING deviceId, ::IUnknown** user) = 0;
    virtual HRESULT __stdcall add_UserDeviceAssociationChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_UserDeviceAssociationChanged(event_token token) = 0;
};};

template <> struct abi<Windows::System::IUserPicker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllowGuestAccounts(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowGuestAccounts(bool value) = 0;
    virtual HRESULT __stdcall get_SuggestedSelectedUser(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SuggestedSelectedUser(::IUnknown* value) = 0;
    virtual HRESULT __stdcall PickSingleUserAsync(::IUnknown** pickSingleUserOperation) = 0;
};};

template <> struct abi<Windows::System::IUserPickerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsSupported(bool* value) = 0;
};};

template <> struct abi<Windows::System::IUserStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWatcher(::IUnknown** watcher) = 0;
    virtual HRESULT __stdcall FindAllAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FindAllAsyncByType(Windows::System::UserType type, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FindAllAsyncByTypeAndStatus(Windows::System::UserType type, Windows::System::UserAuthenticationStatus status, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFromId(HSTRING nonRoamableId, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::IUserWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(Windows::System::UserWatcherStatus* value) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
    virtual HRESULT __stdcall add_Added(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Added(event_token token) = 0;
    virtual HRESULT __stdcall add_Removed(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Removed(event_token token) = 0;
    virtual HRESULT __stdcall add_Updated(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Updated(event_token token) = 0;
    virtual HRESULT __stdcall add_AuthenticationStatusChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_AuthenticationStatusChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_AuthenticationStatusChanging(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_AuthenticationStatusChanging(event_token token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_Stopped(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Stopped(event_token token) = 0;
};};

template <> struct abi<Windows::System::DispatcherQueueHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke() = 0;
};};

}
