// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider {

struct AddAppointmentOperation;
struct RemoveAppointmentOperation;
struct ReplaceAppointmentOperation;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background {

struct IBackgroundTaskInstance;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls {

struct LockScreenCallUI;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts {

struct Contact;
struct ContactAddress;
struct ContactPanel;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::Provider {

struct ContactPickerUI;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::ShareTarget {

struct ShareOperation;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search {

struct SearchPaneQueryLinguisticDetails;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts::Provider {

struct IUserDataAccountProviderOperation;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Wallet {

enum class WalletActionKind;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

struct DeviceInformation;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Printers::Extensions {

struct Print3DWorkflow;
struct PrintTaskConfiguration;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::Media::SpeechRecognition {

struct SpeechRecognitionResult;

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web {

struct WebAuthenticationResult;

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Provider {

struct IWebAccountProviderOperation;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageItem;
struct StorageFile;
struct StorageFolder;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Pickers::Provider {

struct FileOpenPickerUI;
struct FileSavePickerUI;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Provider {

struct CachedFileUpdaterUI;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Search {

struct StorageFileQueryResult;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct ProtocolForResultsOperation;
struct User;

}

WINRT_EXPORT namespace winrt::Windows::UI::Notifications {

struct ShownTileNotification;

}

WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement {

struct ActivationViewSwitcher;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation {

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
    LockScreenComponent = 1016,
    ContactPanel = 1017,
};

enum class ApplicationExecutionState
{
    NotRunning = 0,
    Running = 1,
    Suspended = 2,
    Terminated = 3,
    ClosedByUser = 4,
};

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
struct IContactPanelActivatedEventArgs;
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
struct ContactPanelActivatedEventArgs;
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
struct LockScreenComponentActivatedEventArgs;
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

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Activation::IActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IContactActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IFileActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::ISearchActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::ISplashScreen>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::ITileActivatedInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IViewSwitcherProvider>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::CameraSettingsActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::ContactCallActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::ContactMapActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::ContactMessageActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::ContactPanelActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::ContactPickerActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::ContactPostActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::ContactVideoCallActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::DeviceActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::DevicePairingActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::DialReceiverActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::FileActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::FileSavePickerContinuationEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::FolderPickerContinuationEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::LaunchActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::LockScreenActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::LockScreenCallActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::PickerReturnedActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::Print3DWorkflowActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::PrintTaskSettingsActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::ProtocolActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::SearchActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::SplashScreen>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::TileActivatedInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::ToastNotificationActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::VoiceCommandActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::WalletActionActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Activation::ActivationKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Activation::ApplicationExecutionState>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::Activation::IActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser" }; };
template <> struct name<Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IAppointmentsProviderAddAppointmentActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IAppointmentsProviderRemoveAppointmentActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IAppointmentsProviderReplaceAppointmentActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IAppointmentsProviderShowTimeFrameActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IBackgroundActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ICachedFileUpdaterActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ICameraSettingsActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IContactActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IContactActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IContactCallActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IContactMapActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IContactMessageActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IContactPanelActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IContactPickerActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IContactPostActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IContactVideoCallActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IContactsProviderActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IDeviceActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IDevicePairingActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IDialReceiverActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IFileActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IFileActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithCallerPackageFamilyName" }; };
template <> struct name<Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithNeighboringFiles" }; };
template <> struct name<Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs2" }; };
template <> struct name<Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IFileOpenPickerContinuationEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs2" }; };
template <> struct name<Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IFileSavePickerContinuationEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IFolderPickerContinuationEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs2" }; };
template <> struct name<Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ILockScreenActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ILockScreenCallActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IPickerReturnedActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IPrelaunchActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IPrint3DWorkflowActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IPrintTaskSettingsActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData" }; };
template <> struct name<Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IProtocolForResultsActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IRestrictedLaunchActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ISearchActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ISearchActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ISearchActivatedEventArgsWithLinguisticDetails" }; };
template <> struct name<Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IShareTargetActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ISplashScreen>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ISplashScreen" }; };
template <> struct name<Windows::ApplicationModel::Activation::ITileActivatedInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ITileActivatedInfo" }; };
template <> struct name<Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IToastNotificationActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IUserDataAccountProviderActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IViewSwitcherProvider>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IViewSwitcherProvider" }; };
template <> struct name<Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IVoiceCommandActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IWalletActionActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IWebAccountProviderActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.IWebAuthenticationBrokerContinuationEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.AppointmentsProviderAddAppointmentActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.AppointmentsProviderRemoveAppointmentActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.AppointmentsProviderReplaceAppointmentActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.AppointmentsProviderShowAppointmentDetailsActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.AppointmentsProviderShowTimeFrameActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.BackgroundActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.CachedFileUpdaterActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::CameraSettingsActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.CameraSettingsActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ContactCallActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ContactCallActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ContactMapActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ContactMapActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ContactMessageActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ContactMessageActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ContactPanelActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ContactPanelActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ContactPickerActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ContactPickerActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ContactPostActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ContactPostActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ContactVideoCallActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ContactVideoCallActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::DeviceActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.DeviceActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::DevicePairingActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.DevicePairingActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::DialReceiverActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.DialReceiverActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::FileActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.FileActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.FileOpenPickerActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.FileOpenPickerContinuationEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.FileSavePickerActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::FileSavePickerContinuationEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.FileSavePickerContinuationEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::FolderPickerContinuationEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.FolderPickerContinuationEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::LaunchActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.LaunchActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::LockScreenActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.LockScreenActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::LockScreenCallActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.LockScreenCallActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.LockScreenComponentActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::PickerReturnedActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.PickerReturnedActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::Print3DWorkflowActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.Print3DWorkflowActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::PrintTaskSettingsActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.PrintTaskSettingsActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ProtocolActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ProtocolActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ProtocolForResultsActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.RestrictedLaunchActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::SearchActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.SearchActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ShareTargetActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::SplashScreen>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.SplashScreen" }; };
template <> struct name<Windows::ApplicationModel::Activation::TileActivatedInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.TileActivatedInfo" }; };
template <> struct name<Windows::ApplicationModel::Activation::ToastNotificationActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ToastNotificationActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.UserDataAccountProviderActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::VoiceCommandActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.VoiceCommandActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::WalletActionActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.WalletActionActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.WebAccountProviderActivatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.WebAuthenticationBrokerContinuationEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Activation::ActivationKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ActivationKind" }; };
template <> struct name<Windows::ApplicationModel::Activation::ApplicationExecutionState>{ static constexpr auto & value{ L"Windows.ApplicationModel.Activation.ApplicationExecutionState" }; };
template <> struct guid<Windows::ApplicationModel::Activation::IActivatedEventArgs>{ static constexpr GUID value{ 0xCF651713,0xCD08,0x4FD8,{ 0xB6,0x97,0xA2,0x81,0xB6,0x54,0x4E,0x2E } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>{ static constexpr GUID value{ 0x1CF09B9E,0x9962,0x4936,{ 0x80,0xFF,0xAF,0xC8,0xE8,0xAE,0x5C,0x8C } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>{ static constexpr GUID value{ 0x930CEF4B,0xB829,0x40FC,{ 0x88,0xF4,0x85,0x13,0xE8,0xA6,0x47,0x38 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>{ static constexpr GUID value{ 0x3364C405,0x933C,0x4E7D,{ 0xA0,0x34,0x50,0x0F,0xB8,0xDC,0xD9,0xF3 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>{ static constexpr GUID value{ 0xA2861367,0xCEE5,0x4E4D,{ 0x9E,0xD7,0x41,0xC3,0x4E,0xC1,0x8B,0x02 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>{ static constexpr GUID value{ 0x751F3AB8,0x0B8E,0x451C,{ 0x9F,0x15,0x96,0x6E,0x69,0x9B,0xAC,0x25 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>{ static constexpr GUID value{ 0x1551B7D4,0xA981,0x4067,{ 0x8A,0x62,0x05,0x24,0xE4,0xAD,0xE1,0x21 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>{ static constexpr GUID value{ 0x3958F065,0x9841,0x4CA5,{ 0x99,0x9B,0x88,0x51,0x98,0xB9,0xEF,0x2A } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>{ static constexpr GUID value{ 0x9BAEABA6,0x0E0B,0x49AA,{ 0xBA,0xBC,0x12,0xB1,0xDC,0x77,0x49,0x86 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs>{ static constexpr GUID value{ 0xAB14BEE0,0xE760,0x440E,{ 0xA9,0x1C,0x44,0x79,0x6D,0xE3,0xA9,0x2D } }; };
template <> struct guid<Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>{ static constexpr GUID value{ 0xD06EB1C7,0x3805,0x4ECB,{ 0xB7,0x57,0x6C,0xF1,0x5E,0x26,0xFE,0xF3 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs>{ static constexpr GUID value{ 0xFB67A508,0x2DAD,0x490A,{ 0x91,0x70,0xDC,0xA0,0x36,0xEB,0x11,0x4B } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IContactActivatedEventArgs>{ static constexpr GUID value{ 0xD627A1C4,0xC025,0x4C41,{ 0x9D,0xEF,0xF1,0xEA,0xFA,0xD0,0x75,0xE7 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs>{ static constexpr GUID value{ 0xC2DF14C7,0x30EB,0x41C6,{ 0xB3,0xBC,0x5B,0x16,0x94,0xF9,0xDA,0xB3 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs>{ static constexpr GUID value{ 0xB32BF870,0xEEE7,0x4AD2,{ 0xAA,0xF1,0xA8,0x7E,0xFF,0xCF,0x00,0xA4 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs>{ static constexpr GUID value{ 0xDE598DB2,0x0E03,0x43B0,{ 0xBF,0x56,0xBC,0xC4,0x0B,0x31,0x62,0xDF } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs>{ static constexpr GUID value{ 0x52BB63E4,0xD3D4,0x4B63,{ 0x80,0x51,0x4A,0xF2,0x08,0x2C,0xAB,0x80 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs>{ static constexpr GUID value{ 0xCE57AAE7,0x6449,0x45A7,{ 0x97,0x1F,0xD1,0x13,0xBE,0x7A,0x89,0x36 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs>{ static constexpr GUID value{ 0xB35A3C67,0xF1E7,0x4655,{ 0xAD,0x6E,0x48,0x57,0x58,0x8F,0x55,0x2F } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs>{ static constexpr GUID value{ 0x61079DB8,0xE3E7,0x4B4F,{ 0x85,0x8D,0x5C,0x63,0xA9,0x6E,0xF6,0x84 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs>{ static constexpr GUID value{ 0x4580DCA8,0x5750,0x4916,{ 0xAA,0x52,0xC0,0x82,0x95,0x21,0xEB,0x94 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>{ static constexpr GUID value{ 0xE58106B5,0x155F,0x4A94,{ 0xA7,0x42,0xC7,0xE0,0x8F,0x4E,0x18,0x8C } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs>{ static constexpr GUID value{ 0xCD50B9A9,0xCE10,0x44D2,{ 0x82,0x34,0xC3,0x55,0xA0,0x73,0xEF,0x33 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>{ static constexpr GUID value{ 0xEBA0D1E4,0xECC6,0x4148,{ 0x94,0xED,0xF4,0xB3,0x7E,0xC0,0x5B,0x3E } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>{ static constexpr GUID value{ 0xFB777ED7,0x85EE,0x456E,{ 0xA4,0x4D,0x85,0xD7,0x30,0xE7,0x0A,0xED } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IFileActivatedEventArgs>{ static constexpr GUID value{ 0xBB2AFC33,0x93B1,0x42ED,{ 0x8B,0x26,0x23,0x6D,0xD9,0xC7,0x84,0x96 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>{ static constexpr GUID value{ 0x2D60F06B,0xD25F,0x4D25,{ 0x86,0x53,0xE1,0xC5,0xE1,0x10,0x83,0x09 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>{ static constexpr GUID value{ 0x433BA1A4,0xE1E2,0x48FD,{ 0xB7,0xFC,0xB5,0xD6,0xEE,0xE6,0x50,0x33 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>{ static constexpr GUID value{ 0x72827082,0x5525,0x4BF2,{ 0xBC,0x09,0x1F,0x50,0x95,0xD4,0x96,0x4D } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>{ static constexpr GUID value{ 0x5E731F66,0x8D1F,0x45FB,{ 0xAF,0x1D,0x73,0x20,0x5C,0x8F,0xC7,0xA1 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>{ static constexpr GUID value{ 0xF0FA3F3A,0xD4E8,0x4AD3,{ 0x9C,0x34,0x23,0x08,0xF3,0x2F,0xCE,0xC9 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>{ static constexpr GUID value{ 0x81C19CF1,0x74E6,0x4387,{ 0x82,0xEB,0xBB,0x8F,0xD6,0x4B,0x43,0x46 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>{ static constexpr GUID value{ 0x6B73FE13,0x2CF2,0x4D48,{ 0x8C,0xBC,0xAF,0x67,0xD2,0x3F,0x1C,0xE7 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>{ static constexpr GUID value{ 0x2C846FE1,0x3BAD,0x4F33,{ 0x8C,0x8B,0xE4,0x6F,0xAE,0x82,0x4B,0x4B } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>{ static constexpr GUID value{ 0x51882366,0x9F4B,0x498F,{ 0xBE,0xB0,0x42,0x68,0x4F,0x6E,0x1C,0x29 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>{ static constexpr GUID value{ 0xFBC93E26,0xA14A,0x4B4F,{ 0x82,0xB0,0x33,0xBE,0xD9,0x20,0xAF,0x52 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>{ static constexpr GUID value{ 0x0FD37EBC,0x9DC9,0x46B5,{ 0x9A,0xCE,0xBD,0x95,0xD4,0x56,0x53,0x45 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs>{ static constexpr GUID value{ 0x3CA77966,0x6108,0x4A41,{ 0x82,0x20,0xEE,0x7D,0x13,0x3C,0x85,0x32 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs>{ static constexpr GUID value{ 0x06F37FBE,0xB5F2,0x448B,{ 0xB1,0x3E,0xE3,0x28,0xAC,0x1C,0x51,0x6A } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>{ static constexpr GUID value{ 0x360DEFB9,0xA9D3,0x4984,{ 0xA4,0xED,0x9E,0xC7,0x34,0x60,0x49,0x21 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>{ static constexpr GUID value{ 0x0C44717B,0x19F7,0x48D6,{ 0xB0,0x46,0xCF,0x22,0x82,0x6E,0xAA,0x74 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs>{ static constexpr GUID value{ 0x3F57E78B,0xF2AC,0x4619,{ 0x83,0x02,0xEF,0x85,0x5E,0x1C,0x9B,0x90 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs>{ static constexpr GUID value{ 0xEE30A0C9,0xCE56,0x4865,{ 0xBA,0x8E,0x89,0x54,0xAC,0x27,0x11,0x07 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>{ static constexpr GUID value{ 0x6095F4DD,0xB7C0,0x46AB,{ 0x81,0xFE,0xD9,0x0F,0x36,0xD0,0x0D,0x24 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>{ static constexpr GUID value{ 0xD84A0C12,0x5C8F,0x438C,{ 0x83,0xCB,0xC2,0x8F,0xCC,0x0B,0x2F,0xDB } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>{ static constexpr GUID value{ 0xE75132C2,0x7AE7,0x4517,{ 0x80,0xAC,0xDB,0xE8,0xD7,0xCC,0x5B,0x9C } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>{ static constexpr GUID value{ 0xE0B7AC81,0xBFC3,0x4344,{ 0xA5,0xDA,0x19,0xFD,0x5A,0x27,0xBA,0xAE } }; };
template <> struct guid<Windows::ApplicationModel::Activation::ISearchActivatedEventArgs>{ static constexpr GUID value{ 0x8CB36951,0x58C8,0x43E3,{ 0x94,0xBC,0x41,0xD3,0x3F,0x8B,0x63,0x0E } }; };
template <> struct guid<Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>{ static constexpr GUID value{ 0xC09F33DA,0x08AB,0x4931,{ 0x9B,0x7C,0x45,0x10,0x25,0xF2,0x1F,0x81 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs>{ static constexpr GUID value{ 0x4BDAF9C8,0xCDB2,0x4ACB,{ 0xBF,0xC3,0x66,0x48,0x56,0x33,0x78,0xEC } }; };
template <> struct guid<Windows::ApplicationModel::Activation::ISplashScreen>{ static constexpr GUID value{ 0xCA4D975C,0xD4D6,0x43F0,{ 0x97,0xC0,0x08,0x33,0xC6,0x39,0x1C,0x24 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::ITileActivatedInfo>{ static constexpr GUID value{ 0x80E4A3B1,0x3980,0x4F17,{ 0xB7,0x38,0x89,0x19,0x4E,0x0B,0x8F,0x65 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>{ static constexpr GUID value{ 0x92A86F82,0x5290,0x431D,{ 0xBE,0x85,0xC4,0xAA,0xEE,0xB8,0x68,0x5F } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>{ static constexpr GUID value{ 0x1BC9F723,0x8EF1,0x4A51,{ 0xA6,0x3A,0xFE,0x71,0x1E,0xEA,0xB6,0x07 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IViewSwitcherProvider>{ static constexpr GUID value{ 0x33F288A6,0x5C2C,0x4D27,{ 0xBA,0xC7,0x75,0x36,0x08,0x8F,0x12,0x19 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>{ static constexpr GUID value{ 0xAB92DCFD,0x8D43,0x4DE6,{ 0x97,0x75,0x20,0x70,0x4B,0x58,0x1B,0x00 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs>{ static constexpr GUID value{ 0xFCFC027B,0x1A1A,0x4D22,{ 0x92,0x3F,0xAE,0x6F,0x45,0xFA,0x52,0xD9 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>{ static constexpr GUID value{ 0x72B71774,0x98EA,0x4CCF,{ 0x97,0x52,0x46,0xD9,0x05,0x10,0x04,0xF1 } }; };
template <> struct guid<Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>{ static constexpr GUID value{ 0x75DDA3D4,0x7714,0x453D,{ 0xB7,0xFF,0xB9,0x5E,0x3A,0x17,0x09,0xDA } }; };
template <> struct default_interface<Windows::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::CameraSettingsActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::ContactCallActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::ContactMapActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::ContactMessageActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::ContactPanelActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::ContactPickerActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::ContactPostActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::ContactVideoCallActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::DeviceActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::DevicePairingActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::DialReceiverActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::FileActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IFileActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs>{ using type = Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::FileSavePickerContinuationEventArgs>{ using type = Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::FolderPickerContinuationEventArgs>{ using type = Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::LaunchActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::LockScreenActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::LockScreenCallActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::PickerReturnedActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::Print3DWorkflowActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::PrintTaskSettingsActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::ProtocolActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::SearchActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::ISearchActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::SplashScreen>{ using type = Windows::ApplicationModel::Activation::ISplashScreen; };
template <> struct default_interface<Windows::ApplicationModel::Activation::TileActivatedInfo>{ using type = Windows::ApplicationModel::Activation::ITileActivatedInfo; };
template <> struct default_interface<Windows::ApplicationModel::Activation::ToastNotificationActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::VoiceCommandActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::WalletActionActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs>{ using type = Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs>{ using type = Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IActivatedEventArgs
{
    Windows::ApplicationModel::Activation::ActivationKind Kind() const;
    Windows::ApplicationModel::Activation::ApplicationExecutionState PreviousExecutionState() const;
    Windows::ApplicationModel::Activation::SplashScreen SplashScreen() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IActivatedEventArgsWithUser
{
    Windows::System::User User() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IActivatedEventArgsWithUser<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IApplicationViewActivatedEventArgs
{
    int32_t CurrentlyShownApplicationViewId() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IApplicationViewActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IAppointmentsProviderActivatedEventArgs
{
    hstring Verb() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IAppointmentsProviderActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IAppointmentsProviderAddAppointmentActivatedEventArgs
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation AddAppointmentOperation() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IAppointmentsProviderAddAppointmentActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IAppointmentsProviderRemoveAppointmentActivatedEventArgs
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation RemoveAppointmentOperation() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IAppointmentsProviderRemoveAppointmentActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IAppointmentsProviderReplaceAppointmentActivatedEventArgs
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation ReplaceAppointmentOperation() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IAppointmentsProviderReplaceAppointmentActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> InstanceStartDate() const;
    hstring LocalId() const;
    hstring RoamingId() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowTimeFrameActivatedEventArgs
{
    Windows::Foundation::DateTime TimeToShow() const;
    Windows::Foundation::TimeSpan Duration() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowTimeFrameActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IBackgroundActivatedEventArgs
{
    Windows::ApplicationModel::Background::IBackgroundTaskInstance TaskInstance() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IBackgroundActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_ICachedFileUpdaterActivatedEventArgs
{
    Windows::Storage::Provider::CachedFileUpdaterUI CachedFileUpdaterUI() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_ICachedFileUpdaterActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_ICameraSettingsActivatedEventArgs
{
    Windows::Foundation::IInspectable VideoDeviceController() const;
    Windows::Foundation::IInspectable VideoDeviceExtension() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_ICameraSettingsActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IContactActivatedEventArgs
{
    hstring Verb() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IContactActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs
{
    hstring ServiceId() const;
    hstring ServiceUserId() const;
    Windows::ApplicationModel::Contacts::Contact Contact() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IContactMapActivatedEventArgs
{
    Windows::ApplicationModel::Contacts::ContactAddress Address() const;
    Windows::ApplicationModel::Contacts::Contact Contact() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactMapActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs
{
    hstring ServiceId() const;
    hstring ServiceUserId() const;
    Windows::ApplicationModel::Contacts::Contact Contact() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IContactPanelActivatedEventArgs
{
    Windows::ApplicationModel::Contacts::ContactPanel ContactPanel() const;
    Windows::ApplicationModel::Contacts::Contact Contact() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactPanelActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IContactPickerActivatedEventArgs
{
    Windows::ApplicationModel::Contacts::Provider::ContactPickerUI ContactPickerUI() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactPickerActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs
{
    hstring ServiceId() const;
    hstring ServiceUserId() const;
    Windows::ApplicationModel::Contacts::Contact Contact() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs
{
    hstring ServiceId() const;
    hstring ServiceUserId() const;
    Windows::ApplicationModel::Contacts::Contact Contact() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IContactsProviderActivatedEventArgs
{
    hstring Verb() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContactsProviderActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IContinuationActivatedEventArgs
{
    Windows::Foundation::Collections::ValueSet ContinuationData() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IContinuationActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IDeviceActivatedEventArgs
{
    hstring DeviceInformationId() const;
    hstring Verb() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IDeviceActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IDevicePairingActivatedEventArgs
{
    Windows::Devices::Enumeration::DeviceInformation DeviceInformation() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IDevicePairingActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IDialReceiverActivatedEventArgs
{
    hstring AppName() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IDialReceiverActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgs
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem> Files() const;
    hstring Verb() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IFileActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithCallerPackageFamilyName
{
    hstring CallerPackageFamilyName() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithCallerPackageFamilyName<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithNeighboringFiles
{
    Windows::Storage::Search::StorageFileQueryResult NeighboringFilesQuery() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithNeighboringFiles<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs
{
    Windows::Storage::Pickers::Provider::FileOpenPickerUI FileOpenPickerUI() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs2
{
    hstring CallerPackageFamilyName() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IFileOpenPickerContinuationEventArgs
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile> Files() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileOpenPickerContinuationEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs
{
    Windows::Storage::Pickers::Provider::FileSavePickerUI FileSavePickerUI() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs2
{
    hstring CallerPackageFamilyName() const;
    hstring EnterpriseId() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IFileSavePickerContinuationEventArgs
{
    Windows::Storage::StorageFile File() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFileSavePickerContinuationEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IFolderPickerContinuationEventArgs
{
    Windows::Storage::StorageFolder Folder() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IFolderPickerContinuationEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs
{
    hstring Arguments() const;
    hstring TileId() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs2
{
    Windows::ApplicationModel::Activation::TileActivatedInfo TileActivatedInfo() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_ILockScreenActivatedEventArgs
{
    Windows::Foundation::IInspectable Info() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_ILockScreenActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_ILockScreenCallActivatedEventArgs
{
    Windows::ApplicationModel::Calls::LockScreenCallUI CallUI() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_ILockScreenCallActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IPickerReturnedActivatedEventArgs
{
    hstring PickerOperationId() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IPickerReturnedActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs
{
    bool PrelaunchActivated() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IPrint3DWorkflowActivatedEventArgs
{
    Windows::Devices::Printers::Extensions::Print3DWorkflow Workflow() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IPrint3DWorkflowActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IPrintTaskSettingsActivatedEventArgs
{
    Windows::Devices::Printers::Extensions::PrintTaskConfiguration Configuration() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IPrintTaskSettingsActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgs
{
    Windows::Foundation::Uri Uri() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
{
    hstring CallerPackageFamilyName() const;
    Windows::Foundation::Collections::ValueSet Data() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IProtocolForResultsActivatedEventArgs
{
    Windows::System::ProtocolForResultsOperation ProtocolForResultsOperation() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IProtocolForResultsActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IRestrictedLaunchActivatedEventArgs
{
    Windows::Foundation::IInspectable SharedContext() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IRestrictedLaunchActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgs
{
    hstring QueryText() const;
    hstring Language() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::ISearchActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgsWithLinguisticDetails
{
    Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails LinguisticDetails() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgsWithLinguisticDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IShareTargetActivatedEventArgs
{
    Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation ShareOperation() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IShareTargetActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_ISplashScreen
{
    Windows::Foundation::Rect ImageLocation() const;
    event_token Dismissed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::Foundation::IInspectable> const& handler) const;
    using Dismissed_revoker = event_revoker<Windows::ApplicationModel::Activation::ISplashScreen>;
    Dismissed_revoker Dismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::Foundation::IInspectable> const& handler) const;
    void Dismissed(event_token const& cookie) const;
};
template <> struct consume<Windows::ApplicationModel::Activation::ISplashScreen> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_ISplashScreen<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_ITileActivatedInfo
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ShownTileNotification> RecentlyShownNotifications() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::ITileActivatedInfo> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_ITileActivatedInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IToastNotificationActivatedEventArgs
{
    hstring Argument() const;
    Windows::Foundation::Collections::ValueSet UserInput() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IToastNotificationActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IUserDataAccountProviderActivatedEventArgs
{
    Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation Operation() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IUserDataAccountProviderActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IViewSwitcherProvider
{
    Windows::UI::ViewManagement::ActivationViewSwitcher ViewSwitcher() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IViewSwitcherProvider> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IViewSwitcherProvider<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IVoiceCommandActivatedEventArgs
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResult Result() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IVoiceCommandActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs
{
    hstring ItemId() const;
    Windows::ApplicationModel::Wallet::WalletActionKind ActionKind() const;
    hstring ActionId() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IWebAccountProviderActivatedEventArgs
{
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation Operation() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IWebAccountProviderActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Activation_IWebAuthenticationBrokerContinuationEventArgs
{
    Windows::Security::Authentication::Web::WebAuthenticationResult WebAuthenticationResult() const;
};
template <> struct consume<Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Activation_IWebAuthenticationBrokerContinuationEventArgs<D>; };

template <> struct abi<Windows::ApplicationModel::Activation::IActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Activation::ActivationKind>* value) = 0;
    virtual HRESULT __stdcall get_PreviousExecutionState(abi_t<Windows::ApplicationModel::Activation::ApplicationExecutionState>* value) = 0;
    virtual HRESULT __stdcall get_SplashScreen(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentlyShownApplicationViewId(int32_t* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Verb(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AddAppointmentOperation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoveAppointmentOperation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ReplaceAppointmentOperation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InstanceStartDate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LocalId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RoamingId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TimeToShow(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TaskInstance(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CachedFileUpdaterUI(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VideoDeviceController(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceExtension(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IContactActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Verb(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServiceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ServiceUserId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Address(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServiceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ServiceUserId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContactPanel(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContactPickerUI(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServiceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ServiceUserId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServiceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ServiceUserId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Verb(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContinuationData(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceInformationId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Verb(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceInformation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IFileActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Files(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Verb(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NeighboringFilesQuery(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FileOpenPickerUI(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Files(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FileSavePickerUI(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EnterpriseId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_File(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Folder(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Arguments(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TileId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TileActivatedInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Info(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CallUI(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PickerOperationId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PrelaunchActivated(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Workflow(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Configuration(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProtocolForResultsOperation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SharedContext(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::ISearchActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_QueryText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LinguisticDetails(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ShareOperation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::ISplashScreen>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ImageLocation(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall add_Dismissed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_Dismissed(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::ITileActivatedInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RecentlyShownNotifications(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Argument(HSTRING* argument) = 0;
    virtual HRESULT __stdcall get_UserInput(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Operation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IViewSwitcherProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ViewSwitcher(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Result(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ItemId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ActionKind(abi_t<Windows::ApplicationModel::Wallet::WalletActionKind>* value) = 0;
    virtual HRESULT __stdcall get_ActionId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Operation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WebAuthenticationResult(::IUnknown** result) = 0;
};};

}
