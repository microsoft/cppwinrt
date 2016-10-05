// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Activation {

struct IActivatedEventArgs;
struct IActivatedEventArgsWithUser;
struct IApplicationViewActivatedEventArgs;
struct IAppointmentsProviderActivatedEventArgs;
struct IAppointmentsProviderAddAppointmentActivatedEventArgs;
struct IAppointmentsProviderRemoveAppointmentActivatedEventArgs;
struct IAppointmentsProviderReplaceAppointmentActivatedEventArgs;
struct IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs;
struct IAppointmentsProviderShowTimeFrameActivatedEventArgs;
struct IBackgroundActivatedEventArgs;
struct ICachedFileUpdaterActivatedEventArgs;
struct ICameraSettingsActivatedEventArgs;
struct IContactActivatedEventArgs;
struct IContactCallActivatedEventArgs;
struct IContactMapActivatedEventArgs;
struct IContactMessageActivatedEventArgs;
struct IContactPickerActivatedEventArgs;
struct IContactPostActivatedEventArgs;
struct IContactVideoCallActivatedEventArgs;
struct IContactsProviderActivatedEventArgs;
struct IContinuationActivatedEventArgs;
struct IDeviceActivatedEventArgs;
struct IDevicePairingActivatedEventArgs;
struct IDialReceiverActivatedEventArgs;
struct IFileActivatedEventArgs;
struct IFileActivatedEventArgsWithCallerPackageFamilyName;
struct IFileActivatedEventArgsWithNeighboringFiles;
struct IFileOpenPickerActivatedEventArgs;
struct IFileOpenPickerActivatedEventArgs2;
struct IFileOpenPickerContinuationEventArgs;
struct IFileSavePickerActivatedEventArgs;
struct IFileSavePickerActivatedEventArgs2;
struct IFileSavePickerContinuationEventArgs;
struct IFolderPickerContinuationEventArgs;
struct ILaunchActivatedEventArgs;
struct ILaunchActivatedEventArgs2;
struct ILockScreenActivatedEventArgs;
struct ILockScreenCallActivatedEventArgs;
struct IPickerReturnedActivatedEventArgs;
struct IPrelaunchActivatedEventArgs;
struct IPrint3DWorkflowActivatedEventArgs;
struct IPrintTaskSettingsActivatedEventArgs;
struct IProtocolActivatedEventArgs;
struct IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData;
struct IProtocolForResultsActivatedEventArgs;
struct IRestrictedLaunchActivatedEventArgs;
struct ISearchActivatedEventArgs;
struct ISearchActivatedEventArgsWithLinguisticDetails;
struct IShareTargetActivatedEventArgs;
struct ISplashScreen;
struct ITileActivatedInfo;
struct IToastNotificationActivatedEventArgs;
struct IUserDataAccountProviderActivatedEventArgs;
struct IViewSwitcherProvider;
struct IVoiceCommandActivatedEventArgs;
struct IWalletActionActivatedEventArgs;
struct IWebAccountProviderActivatedEventArgs;
struct IWebAuthenticationBrokerContinuationEventArgs;
struct AppointmentsProviderAddAppointmentActivatedEventArgs;
struct AppointmentsProviderRemoveAppointmentActivatedEventArgs;
struct AppointmentsProviderReplaceAppointmentActivatedEventArgs;
struct AppointmentsProviderShowAppointmentDetailsActivatedEventArgs;
struct AppointmentsProviderShowTimeFrameActivatedEventArgs;
struct BackgroundActivatedEventArgs;
struct CachedFileUpdaterActivatedEventArgs;
struct CameraSettingsActivatedEventArgs;
struct ContactCallActivatedEventArgs;
struct ContactMapActivatedEventArgs;
struct ContactMessageActivatedEventArgs;
struct ContactPickerActivatedEventArgs;
struct ContactPostActivatedEventArgs;
struct ContactVideoCallActivatedEventArgs;
struct DeviceActivatedEventArgs;
struct DevicePairingActivatedEventArgs;
struct DialReceiverActivatedEventArgs;
struct FileActivatedEventArgs;
struct FileOpenPickerActivatedEventArgs;
struct FileOpenPickerContinuationEventArgs;
struct FileSavePickerActivatedEventArgs;
struct FileSavePickerContinuationEventArgs;
struct FolderPickerContinuationEventArgs;
struct LaunchActivatedEventArgs;
struct LockScreenActivatedEventArgs;
struct LockScreenCallActivatedEventArgs;
struct PickerReturnedActivatedEventArgs;
struct Print3DWorkflowActivatedEventArgs;
struct PrintTaskSettingsActivatedEventArgs;
struct ProtocolActivatedEventArgs;
struct ProtocolForResultsActivatedEventArgs;
struct RestrictedLaunchActivatedEventArgs;
struct SearchActivatedEventArgs;
struct ShareTargetActivatedEventArgs;
struct SplashScreen;
struct TileActivatedInfo;
struct ToastNotificationActivatedEventArgs;
struct UserDataAccountProviderActivatedEventArgs;
struct VoiceCommandActivatedEventArgs;
struct WalletActionActivatedEventArgs;
struct WebAccountProviderActivatedEventArgs;
struct WebAuthenticationBrokerContinuationEventArgs;

}

namespace Windows::ApplicationModel::Activation {

struct IActivatedEventArgs;
struct IActivatedEventArgsWithUser;
struct IApplicationViewActivatedEventArgs;
struct IAppointmentsProviderActivatedEventArgs;
struct IAppointmentsProviderAddAppointmentActivatedEventArgs;
struct IAppointmentsProviderRemoveAppointmentActivatedEventArgs;
struct IAppointmentsProviderReplaceAppointmentActivatedEventArgs;
struct IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs;
struct IAppointmentsProviderShowTimeFrameActivatedEventArgs;
struct IBackgroundActivatedEventArgs;
struct ICachedFileUpdaterActivatedEventArgs;
struct ICameraSettingsActivatedEventArgs;
struct IContactActivatedEventArgs;
struct IContactCallActivatedEventArgs;
struct IContactMapActivatedEventArgs;
struct IContactMessageActivatedEventArgs;
struct IContactPickerActivatedEventArgs;
struct IContactPostActivatedEventArgs;
struct IContactVideoCallActivatedEventArgs;
struct IContactsProviderActivatedEventArgs;
struct IContinuationActivatedEventArgs;
struct IDeviceActivatedEventArgs;
struct IDevicePairingActivatedEventArgs;
struct IDialReceiverActivatedEventArgs;
struct IFileActivatedEventArgs;
struct IFileActivatedEventArgsWithCallerPackageFamilyName;
struct IFileActivatedEventArgsWithNeighboringFiles;
struct IFileOpenPickerActivatedEventArgs;
struct IFileOpenPickerActivatedEventArgs2;
struct IFileOpenPickerContinuationEventArgs;
struct IFileSavePickerActivatedEventArgs;
struct IFileSavePickerActivatedEventArgs2;
struct IFileSavePickerContinuationEventArgs;
struct IFolderPickerContinuationEventArgs;
struct ILaunchActivatedEventArgs;
struct ILaunchActivatedEventArgs2;
struct ILockScreenActivatedEventArgs;
struct ILockScreenCallActivatedEventArgs;
struct IPickerReturnedActivatedEventArgs;
struct IPrelaunchActivatedEventArgs;
struct IPrint3DWorkflowActivatedEventArgs;
struct IPrintTaskSettingsActivatedEventArgs;
struct IProtocolActivatedEventArgs;
struct IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData;
struct IProtocolForResultsActivatedEventArgs;
struct IRestrictedLaunchActivatedEventArgs;
struct ISearchActivatedEventArgs;
struct ISearchActivatedEventArgsWithLinguisticDetails;
struct IShareTargetActivatedEventArgs;
struct ISplashScreen;
struct ITileActivatedInfo;
struct IToastNotificationActivatedEventArgs;
struct IUserDataAccountProviderActivatedEventArgs;
struct IViewSwitcherProvider;
struct IVoiceCommandActivatedEventArgs;
struct IWalletActionActivatedEventArgs;
struct IWebAccountProviderActivatedEventArgs;
struct IWebAuthenticationBrokerContinuationEventArgs;
struct AppointmentsProviderAddAppointmentActivatedEventArgs;
struct AppointmentsProviderRemoveAppointmentActivatedEventArgs;
struct AppointmentsProviderReplaceAppointmentActivatedEventArgs;
struct AppointmentsProviderShowAppointmentDetailsActivatedEventArgs;
struct AppointmentsProviderShowTimeFrameActivatedEventArgs;
struct BackgroundActivatedEventArgs;
struct CachedFileUpdaterActivatedEventArgs;
struct CameraSettingsActivatedEventArgs;
struct ContactCallActivatedEventArgs;
struct ContactMapActivatedEventArgs;
struct ContactMessageActivatedEventArgs;
struct ContactPickerActivatedEventArgs;
struct ContactPostActivatedEventArgs;
struct ContactVideoCallActivatedEventArgs;
struct DeviceActivatedEventArgs;
struct DevicePairingActivatedEventArgs;
struct DialReceiverActivatedEventArgs;
struct FileActivatedEventArgs;
struct FileOpenPickerActivatedEventArgs;
struct FileOpenPickerContinuationEventArgs;
struct FileSavePickerActivatedEventArgs;
struct FileSavePickerContinuationEventArgs;
struct FolderPickerContinuationEventArgs;
struct LaunchActivatedEventArgs;
struct LockScreenActivatedEventArgs;
struct LockScreenCallActivatedEventArgs;
struct PickerReturnedActivatedEventArgs;
struct Print3DWorkflowActivatedEventArgs;
struct PrintTaskSettingsActivatedEventArgs;
struct ProtocolActivatedEventArgs;
struct ProtocolForResultsActivatedEventArgs;
struct RestrictedLaunchActivatedEventArgs;
struct SearchActivatedEventArgs;
struct ShareTargetActivatedEventArgs;
struct SplashScreen;
struct TileActivatedInfo;
struct ToastNotificationActivatedEventArgs;
struct UserDataAccountProviderActivatedEventArgs;
struct VoiceCommandActivatedEventArgs;
struct WalletActionActivatedEventArgs;
struct WebAccountProviderActivatedEventArgs;
struct WebAuthenticationBrokerContinuationEventArgs;

}

namespace Windows::ApplicationModel::Activation {

enum class ActivationKind
{
    Launch = 0,
    Search = 1,
    ShareTarget = 2,
    File = 3,
    Protocol = 4,
    FileOpenPicker = 5,
    FileSavePicker = 6,
    CachedFileUpdater = 7,
    ContactPicker = 8,
    Device = 9,
    PrintTaskSettings = 10,
    CameraSettings = 11,
    RestrictedLaunch = 12,
    AppointmentsProvider = 13,
    Contact = 14,
    LockScreenCall = 15,
    VoiceCommand = 16,
    LockScreen = 17,
    PickerReturned = 1000,
    WalletAction = 1001,
    PickFileContinuation = 1002,
    PickSaveFileContinuation = 1003,
    PickFolderContinuation = 1004,
    WebAuthenticationBrokerContinuation = 1005,
    WebAccountProvider = 1006,
    ComponentUI = 1007,
    ProtocolForResults = 1009,
    ToastNotification = 1010,
    Print3DWorkflow = 1011,
    DialReceiver = 1012,
    DevicePairing = 1013,
    UserDataAccountsProvider = 1014,
    FilePickerExperience = 1015,
};

enum class ApplicationExecutionState
{
    NotRunning = 0,
    Running = 1,
    Suspended = 2,
    Terminated = 3,
    ClosedByUser = 4,
};

}

}
