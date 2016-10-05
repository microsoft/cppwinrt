// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Activation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
#define WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
template <> struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c")) __declspec(novtable) IReference<Windows::Foundation::DateTime> : impl_IReference<Windows::Foundation::DateTime> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_85575a41_06cb_58d0_b98a_7c8f06e6e9d7
#define WINRT_GENERIC_85575a41_06cb_58d0_b98a_7c8f06e6e9d7
template <> struct __declspec(uuid("85575a41-06cb-58d0-b98a-7c8f06e6e9d7")) __declspec(novtable) IVectorView<Windows::Storage::IStorageItem> : impl_IVectorView<Windows::Storage::IStorageItem> {};
#endif

#ifndef WINRT_GENERIC_bb8b8418_65d1_544b_b083_6d172f568c73
#define WINRT_GENERIC_bb8b8418_65d1_544b_b083_6d172f568c73
template <> struct __declspec(uuid("bb8b8418-65d1-544b-b083-6d172f568c73")) __declspec(novtable) IIterable<Windows::Storage::IStorageItem> : impl_IIterable<Windows::Storage::IStorageItem> {};
#endif

#ifndef WINRT_GENERIC_80646519_5e2a_595d_a8cd_2a24b4067f1b
#define WINRT_GENERIC_80646519_5e2a_595d_a8cd_2a24b4067f1b
template <> struct __declspec(uuid("80646519-5e2a-595d-a8cd-2a24b4067f1b")) __declspec(novtable) IVectorView<Windows::Storage::StorageFile> : impl_IVectorView<Windows::Storage::StorageFile> {};
#endif

#ifndef WINRT_GENERIC_9ac00304_83ea_5688_87b6_ae38aab65d0b
#define WINRT_GENERIC_9ac00304_83ea_5688_87b6_ae38aab65d0b
template <> struct __declspec(uuid("9ac00304-83ea-5688-87b6-ae38aab65d0b")) __declspec(novtable) IIterable<Windows::Storage::StorageFile> : impl_IIterable<Windows::Storage::StorageFile> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_7725b2a5_287d_5ed2_a789_2a6a2673c7fe
#define WINRT_GENERIC_7725b2a5_287d_5ed2_a789_2a6a2673c7fe
template <> struct __declspec(uuid("7725b2a5-287d-5ed2-a789-2a6a2673c7fe")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::IInspectable> : impl_TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2b23baa9_1d54_5440_bd32_86ed70f15c9e
#define WINRT_GENERIC_2b23baa9_1d54_5440_bd32_86ed70f15c9e
template <> struct __declspec(uuid("2b23baa9-1d54-5440-bd32-86ed70f15c9e")) __declspec(novtable) IVectorView<Windows::UI::Notifications::ShownTileNotification> : impl_IVectorView<Windows::UI::Notifications::ShownTileNotification> {};
#endif

#ifndef WINRT_GENERIC_05b487c2_3830_5d3c_98da_25fa11542dbd
#define WINRT_GENERIC_05b487c2_3830_5d3c_98da_25fa11542dbd
template <> struct __declspec(uuid("05b487c2-3830-5d3c-98da-25fa11542dbd")) __declspec(novtable) IIterator<Windows::Storage::IStorageItem> : impl_IIterator<Windows::Storage::IStorageItem> {};
#endif

#ifndef WINRT_GENERIC_43e29f53_0298_55aa_a6c8_4edd323d9598
#define WINRT_GENERIC_43e29f53_0298_55aa_a6c8_4edd323d9598
template <> struct __declspec(uuid("43e29f53-0298-55aa-a6c8-4edd323d9598")) __declspec(novtable) IIterator<Windows::Storage::StorageFile> : impl_IIterator<Windows::Storage::StorageFile> {};
#endif

#ifndef WINRT_GENERIC_04d8d70b_7c15_5f60_9894_b21366b427c2
#define WINRT_GENERIC_04d8d70b_7c15_5f60_9894_b21366b427c2
template <> struct __declspec(uuid("04d8d70b-7c15-5f60-9894-b21366b427c2")) __declspec(novtable) IIterator<Windows::UI::Notifications::ShownTileNotification> : impl_IIterator<Windows::UI::Notifications::ShownTileNotification> {};
#endif

#ifndef WINRT_GENERIC_1863baee_44f1_5e51_bcdf_a3cdab826a15
#define WINRT_GENERIC_1863baee_44f1_5e51_bcdf_a3cdab826a15
template <> struct __declspec(uuid("1863baee-44f1-5e51-bcdf-a3cdab826a15")) __declspec(novtable) IIterable<Windows::UI::Notifications::ShownTileNotification> : impl_IIterable<Windows::UI::Notifications::ShownTileNotification> {};
#endif


}

namespace Windows::ApplicationModel::Activation {

template <typename D>
struct WINRT_EBO impl_IActivatedEventArgs
{
    Windows::ApplicationModel::Activation::ActivationKind Kind() const;
    Windows::ApplicationModel::Activation::ApplicationExecutionState PreviousExecutionState() const;
    Windows::ApplicationModel::Activation::SplashScreen SplashScreen() const;
};

template <typename D>
struct WINRT_EBO impl_IActivatedEventArgsWithUser
{
    Windows::System::User User() const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewActivatedEventArgs
{
    int32_t CurrentlyShownApplicationViewId() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentsProviderActivatedEventArgs
{
    hstring Verb() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentsProviderAddAppointmentActivatedEventArgs
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation AddAppointmentOperation() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentsProviderRemoveAppointmentActivatedEventArgs
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation RemoveAppointmentOperation() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentsProviderReplaceAppointmentActivatedEventArgs
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation ReplaceAppointmentOperation() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> InstanceStartDate() const;
    hstring LocalId() const;
    hstring RoamingId() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentsProviderShowTimeFrameActivatedEventArgs
{
    Windows::Foundation::DateTime TimeToShow() const;
    Windows::Foundation::TimeSpan Duration() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundActivatedEventArgs
{
    Windows::ApplicationModel::Background::IBackgroundTaskInstance TaskInstance() const;
};

template <typename D>
struct WINRT_EBO impl_ICachedFileUpdaterActivatedEventArgs
{
    Windows::Storage::Provider::CachedFileUpdaterUI CachedFileUpdaterUI() const;
};

template <typename D>
struct WINRT_EBO impl_ICameraSettingsActivatedEventArgs
{
    Windows::IInspectable VideoDeviceController() const;
    Windows::IInspectable VideoDeviceExtension() const;
};

template <typename D>
struct WINRT_EBO impl_IContactActivatedEventArgs
{
    hstring Verb() const;
};

template <typename D>
struct WINRT_EBO impl_IContactCallActivatedEventArgs
{
    hstring ServiceId() const;
    hstring ServiceUserId() const;
    Windows::ApplicationModel::Contacts::Contact Contact() const;
};

template <typename D>
struct WINRT_EBO impl_IContactMapActivatedEventArgs
{
    Windows::ApplicationModel::Contacts::ContactAddress Address() const;
    Windows::ApplicationModel::Contacts::Contact Contact() const;
};

template <typename D>
struct WINRT_EBO impl_IContactMessageActivatedEventArgs
{
    hstring ServiceId() const;
    hstring ServiceUserId() const;
    Windows::ApplicationModel::Contacts::Contact Contact() const;
};

template <typename D>
struct WINRT_EBO impl_IContactPickerActivatedEventArgs
{
    Windows::ApplicationModel::Contacts::Provider::ContactPickerUI ContactPickerUI() const;
};

template <typename D>
struct WINRT_EBO impl_IContactPostActivatedEventArgs
{
    hstring ServiceId() const;
    hstring ServiceUserId() const;
    Windows::ApplicationModel::Contacts::Contact Contact() const;
};

template <typename D>
struct WINRT_EBO impl_IContactVideoCallActivatedEventArgs
{
    hstring ServiceId() const;
    hstring ServiceUserId() const;
    Windows::ApplicationModel::Contacts::Contact Contact() const;
};

template <typename D>
struct WINRT_EBO impl_IContactsProviderActivatedEventArgs
{
    hstring Verb() const;
};

template <typename D>
struct WINRT_EBO impl_IContinuationActivatedEventArgs
{
    Windows::Foundation::Collections::ValueSet ContinuationData() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceActivatedEventArgs
{
    hstring DeviceInformationId() const;
    hstring Verb() const;
};

template <typename D>
struct WINRT_EBO impl_IDevicePairingActivatedEventArgs
{
    Windows::Devices::Enumeration::DeviceInformation DeviceInformation() const;
};

template <typename D>
struct WINRT_EBO impl_IDialReceiverActivatedEventArgs
{
    hstring AppName() const;
};

template <typename D>
struct WINRT_EBO impl_IFileActivatedEventArgs
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem> Files() const;
    hstring Verb() const;
};

template <typename D>
struct WINRT_EBO impl_IFileActivatedEventArgsWithCallerPackageFamilyName
{
    hstring CallerPackageFamilyName() const;
};

template <typename D>
struct WINRT_EBO impl_IFileActivatedEventArgsWithNeighboringFiles
{
    Windows::Storage::Search::StorageFileQueryResult NeighboringFilesQuery() const;
};

template <typename D>
struct WINRT_EBO impl_IFileOpenPickerActivatedEventArgs
{
    Windows::Storage::Pickers::Provider::FileOpenPickerUI FileOpenPickerUI() const;
};

template <typename D>
struct WINRT_EBO impl_IFileOpenPickerActivatedEventArgs2
{
    hstring CallerPackageFamilyName() const;
};

template <typename D>
struct WINRT_EBO impl_IFileOpenPickerContinuationEventArgs
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile> Files() const;
};

template <typename D>
struct WINRT_EBO impl_IFileSavePickerActivatedEventArgs
{
    Windows::Storage::Pickers::Provider::FileSavePickerUI FileSavePickerUI() const;
};

template <typename D>
struct WINRT_EBO impl_IFileSavePickerActivatedEventArgs2
{
    hstring CallerPackageFamilyName() const;
    hstring EnterpriseId() const;
};

template <typename D>
struct WINRT_EBO impl_IFileSavePickerContinuationEventArgs
{
    Windows::Storage::StorageFile File() const;
};

template <typename D>
struct WINRT_EBO impl_IFolderPickerContinuationEventArgs
{
    Windows::Storage::StorageFolder Folder() const;
};

template <typename D>
struct WINRT_EBO impl_ILaunchActivatedEventArgs
{
    hstring Arguments() const;
    hstring TileId() const;
};

template <typename D>
struct WINRT_EBO impl_ILaunchActivatedEventArgs2
{
    Windows::ApplicationModel::Activation::TileActivatedInfo TileActivatedInfo() const;
};

template <typename D>
struct WINRT_EBO impl_ILockScreenActivatedEventArgs
{
    Windows::IInspectable Info() const;
};

template <typename D>
struct WINRT_EBO impl_ILockScreenCallActivatedEventArgs
{
    Windows::ApplicationModel::Calls::LockScreenCallUI CallUI() const;
};

template <typename D>
struct WINRT_EBO impl_IPickerReturnedActivatedEventArgs
{
    hstring PickerOperationId() const;
};

template <typename D>
struct WINRT_EBO impl_IPrelaunchActivatedEventArgs
{
    bool PrelaunchActivated() const;
};

template <typename D>
struct WINRT_EBO impl_IPrint3DWorkflowActivatedEventArgs
{
    Windows::Devices::Printers::Extensions::Print3DWorkflow Workflow() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTaskSettingsActivatedEventArgs
{
    Windows::Devices::Printers::Extensions::PrintTaskConfiguration Configuration() const;
};

template <typename D>
struct WINRT_EBO impl_IProtocolActivatedEventArgs
{
    Windows::Foundation::Uri Uri() const;
};

template <typename D>
struct WINRT_EBO impl_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
{
    hstring CallerPackageFamilyName() const;
    Windows::Foundation::Collections::ValueSet Data() const;
};

template <typename D>
struct WINRT_EBO impl_IProtocolForResultsActivatedEventArgs
{
    Windows::System::ProtocolForResultsOperation ProtocolForResultsOperation() const;
};

template <typename D>
struct WINRT_EBO impl_IRestrictedLaunchActivatedEventArgs
{
    Windows::IInspectable SharedContext() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchActivatedEventArgs
{
    hstring QueryText() const;
    hstring Language() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchActivatedEventArgsWithLinguisticDetails
{
    Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails LinguisticDetails() const;
};

template <typename D>
struct WINRT_EBO impl_IShareTargetActivatedEventArgs
{
    Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation ShareOperation() const;
};

template <typename D>
struct WINRT_EBO impl_ISplashScreen
{
    Windows::Foundation::Rect ImageLocation() const;
    event_token Dismissed(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::IInspectable> & handler) const;
    using Dismissed_revoker = event_revoker<ISplashScreen>;
    Dismissed_revoker Dismissed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::IInspectable> & handler) const;
    void Dismissed(event_token cookie) const;
};

template <typename D>
struct WINRT_EBO impl_ITileActivatedInfo
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ShownTileNotification> RecentlyShownNotifications() const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotificationActivatedEventArgs
{
    hstring Argument() const;
    Windows::Foundation::Collections::ValueSet UserInput() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataAccountProviderActivatedEventArgs
{
    Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation Operation() const;
};

template <typename D>
struct WINRT_EBO impl_IViewSwitcherProvider
{
    Windows::UI::ViewManagement::ActivationViewSwitcher ViewSwitcher() const;
};

template <typename D>
struct WINRT_EBO impl_IVoiceCommandActivatedEventArgs
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResult Result() const;
};

template <typename D>
struct WINRT_EBO impl_IWalletActionActivatedEventArgs
{
    hstring ItemId() const;
    Windows::ApplicationModel::Wallet::WalletActionKind ActionKind() const;
    hstring ActionId() const;
};

template <typename D>
struct WINRT_EBO impl_IWebAccountProviderActivatedEventArgs
{
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation Operation() const;
};

template <typename D>
struct WINRT_EBO impl_IWebAuthenticationBrokerContinuationEventArgs
{
    Windows::Security::Authentication::Web::WebAuthenticationResult WebAuthenticationResult() const;
};

struct IActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IActivatedEventArgs>
{
    IActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IActivatedEventArgs>(m_ptr); }
};

struct IActivatedEventArgsWithUser :
    Windows::IInspectable,
    impl::consume<IActivatedEventArgsWithUser>,
    impl::require<IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IActivatedEventArgsWithUser(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IActivatedEventArgsWithUser>(m_ptr); }
};

struct IApplicationViewActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IApplicationViewActivatedEventArgs>,
    impl::require<IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IApplicationViewActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewActivatedEventArgs>(m_ptr); }
};

struct IAppointmentsProviderActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IAppointmentsProviderActivatedEventArgs>,
    impl::require<IAppointmentsProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IAppointmentsProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentsProviderActivatedEventArgs>(m_ptr); }
};

struct IAppointmentsProviderAddAppointmentActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IAppointmentsProviderAddAppointmentActivatedEventArgs>,
    impl::require<IAppointmentsProviderAddAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
{
    IAppointmentsProviderAddAppointmentActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentsProviderAddAppointmentActivatedEventArgs>(m_ptr); }
};

struct IAppointmentsProviderRemoveAppointmentActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IAppointmentsProviderRemoveAppointmentActivatedEventArgs>,
    impl::require<IAppointmentsProviderRemoveAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
{
    IAppointmentsProviderRemoveAppointmentActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentsProviderRemoveAppointmentActivatedEventArgs>(m_ptr); }
};

struct IAppointmentsProviderReplaceAppointmentActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IAppointmentsProviderReplaceAppointmentActivatedEventArgs>,
    impl::require<IAppointmentsProviderReplaceAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
{
    IAppointmentsProviderReplaceAppointmentActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentsProviderReplaceAppointmentActivatedEventArgs>(m_ptr); }
};

struct IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>,
    impl::require<IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
{
    IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>(m_ptr); }
};

struct IAppointmentsProviderShowTimeFrameActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IAppointmentsProviderShowTimeFrameActivatedEventArgs>,
    impl::require<IAppointmentsProviderShowTimeFrameActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
{
    IAppointmentsProviderShowTimeFrameActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentsProviderShowTimeFrameActivatedEventArgs>(m_ptr); }
};

struct IBackgroundActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IBackgroundActivatedEventArgs>
{
    IBackgroundActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundActivatedEventArgs>(m_ptr); }
};

struct ICachedFileUpdaterActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<ICachedFileUpdaterActivatedEventArgs>,
    impl::require<ICachedFileUpdaterActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    ICachedFileUpdaterActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICachedFileUpdaterActivatedEventArgs>(m_ptr); }
};

struct ICameraSettingsActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<ICameraSettingsActivatedEventArgs>,
    impl::require<ICameraSettingsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    ICameraSettingsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICameraSettingsActivatedEventArgs>(m_ptr); }
};

struct IContactActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IContactActivatedEventArgs>,
    impl::require<IContactActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IContactActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactActivatedEventArgs>(m_ptr); }
};

struct IContactCallActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IContactCallActivatedEventArgs>,
    impl::require<IContactCallActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
{
    IContactCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactCallActivatedEventArgs>(m_ptr); }
};

struct IContactMapActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IContactMapActivatedEventArgs>,
    impl::require<IContactMapActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
{
    IContactMapActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactMapActivatedEventArgs>(m_ptr); }
};

struct IContactMessageActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IContactMessageActivatedEventArgs>,
    impl::require<IContactMessageActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
{
    IContactMessageActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactMessageActivatedEventArgs>(m_ptr); }
};

struct IContactPickerActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IContactPickerActivatedEventArgs>,
    impl::require<IContactPickerActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IContactPickerActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactPickerActivatedEventArgs>(m_ptr); }
};

struct IContactPostActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IContactPostActivatedEventArgs>,
    impl::require<IContactPostActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
{
    IContactPostActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactPostActivatedEventArgs>(m_ptr); }
};

struct IContactVideoCallActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IContactVideoCallActivatedEventArgs>,
    impl::require<IContactVideoCallActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
{
    IContactVideoCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactVideoCallActivatedEventArgs>(m_ptr); }
};

struct IContactsProviderActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IContactsProviderActivatedEventArgs>,
    impl::require<IContactsProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IContactsProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactsProviderActivatedEventArgs>(m_ptr); }
};

struct IContinuationActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IContinuationActivatedEventArgs>,
    impl::require<IContinuationActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IContinuationActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContinuationActivatedEventArgs>(m_ptr); }
};

struct IDeviceActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IDeviceActivatedEventArgs>,
    impl::require<IDeviceActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IDeviceActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceActivatedEventArgs>(m_ptr); }
};

struct IDevicePairingActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IDevicePairingActivatedEventArgs>,
    impl::require<IDevicePairingActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IDevicePairingActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDevicePairingActivatedEventArgs>(m_ptr); }
};

struct IDialReceiverActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IDialReceiverActivatedEventArgs>,
    impl::require<IDialReceiverActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
{
    IDialReceiverActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDialReceiverActivatedEventArgs>(m_ptr); }
};

struct IFileActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IFileActivatedEventArgs>,
    impl::require<IFileActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IFileActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileActivatedEventArgs>(m_ptr); }
};

struct IFileActivatedEventArgsWithCallerPackageFamilyName :
    Windows::IInspectable,
    impl::consume<IFileActivatedEventArgsWithCallerPackageFamilyName>,
    impl::require<IFileActivatedEventArgsWithCallerPackageFamilyName, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IFileActivatedEventArgsWithCallerPackageFamilyName(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileActivatedEventArgsWithCallerPackageFamilyName>(m_ptr); }
};

struct IFileActivatedEventArgsWithNeighboringFiles :
    Windows::IInspectable,
    impl::consume<IFileActivatedEventArgsWithNeighboringFiles>,
    impl::require<IFileActivatedEventArgsWithNeighboringFiles, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IFileActivatedEventArgs>
{
    IFileActivatedEventArgsWithNeighboringFiles(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileActivatedEventArgsWithNeighboringFiles>(m_ptr); }
};

struct IFileOpenPickerActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IFileOpenPickerActivatedEventArgs>,
    impl::require<IFileOpenPickerActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IFileOpenPickerActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileOpenPickerActivatedEventArgs>(m_ptr); }
};

struct IFileOpenPickerActivatedEventArgs2 :
    Windows::IInspectable,
    impl::consume<IFileOpenPickerActivatedEventArgs2>
{
    IFileOpenPickerActivatedEventArgs2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileOpenPickerActivatedEventArgs2>(m_ptr); }
};

struct IFileOpenPickerContinuationEventArgs :
    Windows::IInspectable,
    impl::consume<IFileOpenPickerContinuationEventArgs>,
    impl::require<IFileOpenPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
{
    IFileOpenPickerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileOpenPickerContinuationEventArgs>(m_ptr); }
};

struct IFileSavePickerActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IFileSavePickerActivatedEventArgs>,
    impl::require<IFileSavePickerActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IFileSavePickerActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileSavePickerActivatedEventArgs>(m_ptr); }
};

struct IFileSavePickerActivatedEventArgs2 :
    Windows::IInspectable,
    impl::consume<IFileSavePickerActivatedEventArgs2>
{
    IFileSavePickerActivatedEventArgs2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileSavePickerActivatedEventArgs2>(m_ptr); }
};

struct IFileSavePickerContinuationEventArgs :
    Windows::IInspectable,
    impl::consume<IFileSavePickerContinuationEventArgs>,
    impl::require<IFileSavePickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
{
    IFileSavePickerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileSavePickerContinuationEventArgs>(m_ptr); }
};

struct IFolderPickerContinuationEventArgs :
    Windows::IInspectable,
    impl::consume<IFolderPickerContinuationEventArgs>,
    impl::require<IFolderPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
{
    IFolderPickerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFolderPickerContinuationEventArgs>(m_ptr); }
};

struct ILaunchActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<ILaunchActivatedEventArgs>,
    impl::require<ILaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    ILaunchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILaunchActivatedEventArgs>(m_ptr); }
};

struct ILaunchActivatedEventArgs2 :
    Windows::IInspectable,
    impl::consume<ILaunchActivatedEventArgs2>,
    impl::require<ILaunchActivatedEventArgs2, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
{
    ILaunchActivatedEventArgs2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILaunchActivatedEventArgs2>(m_ptr); }
};

struct ILockScreenActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<ILockScreenActivatedEventArgs>,
    impl::require<ILockScreenActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    ILockScreenActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILockScreenActivatedEventArgs>(m_ptr); }
};

struct ILockScreenCallActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<ILockScreenCallActivatedEventArgs>,
    impl::require<ILockScreenCallActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
{
    ILockScreenCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILockScreenCallActivatedEventArgs>(m_ptr); }
};

struct IPickerReturnedActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IPickerReturnedActivatedEventArgs>,
    impl::require<IPickerReturnedActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IPickerReturnedActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPickerReturnedActivatedEventArgs>(m_ptr); }
};

struct IPrelaunchActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IPrelaunchActivatedEventArgs>,
    impl::require<IPrelaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IPrelaunchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrelaunchActivatedEventArgs>(m_ptr); }
};

struct IPrint3DWorkflowActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IPrint3DWorkflowActivatedEventArgs>,
    impl::require<IPrint3DWorkflowActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IPrint3DWorkflowActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrint3DWorkflowActivatedEventArgs>(m_ptr); }
};

struct IPrintTaskSettingsActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IPrintTaskSettingsActivatedEventArgs>,
    impl::require<IPrintTaskSettingsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IPrintTaskSettingsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTaskSettingsActivatedEventArgs>(m_ptr); }
};

struct IProtocolActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IProtocolActivatedEventArgs>,
    impl::require<IProtocolActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IProtocolActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProtocolActivatedEventArgs>(m_ptr); }
};

struct IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData :
    Windows::IInspectable,
    impl::consume<IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>,
    impl::require<IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>(m_ptr); }
};

struct IProtocolForResultsActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IProtocolForResultsActivatedEventArgs>,
    impl::require<IProtocolForResultsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IProtocolForResultsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProtocolForResultsActivatedEventArgs>(m_ptr); }
};

struct IRestrictedLaunchActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IRestrictedLaunchActivatedEventArgs>,
    impl::require<IRestrictedLaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IRestrictedLaunchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRestrictedLaunchActivatedEventArgs>(m_ptr); }
};

struct ISearchActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<ISearchActivatedEventArgs>,
    impl::require<ISearchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    ISearchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchActivatedEventArgs>(m_ptr); }
};

struct ISearchActivatedEventArgsWithLinguisticDetails :
    Windows::IInspectable,
    impl::consume<ISearchActivatedEventArgsWithLinguisticDetails>
{
    ISearchActivatedEventArgsWithLinguisticDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchActivatedEventArgsWithLinguisticDetails>(m_ptr); }
};

struct IShareTargetActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IShareTargetActivatedEventArgs>,
    impl::require<IShareTargetActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IShareTargetActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IShareTargetActivatedEventArgs>(m_ptr); }
};

struct ISplashScreen :
    Windows::IInspectable,
    impl::consume<ISplashScreen>
{
    ISplashScreen(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISplashScreen>(m_ptr); }
};

struct ITileActivatedInfo :
    Windows::IInspectable,
    impl::consume<ITileActivatedInfo>
{
    ITileActivatedInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITileActivatedInfo>(m_ptr); }
};

struct IToastNotificationActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IToastNotificationActivatedEventArgs>,
    impl::require<IToastNotificationActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IToastNotificationActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotificationActivatedEventArgs>(m_ptr); }
};

struct IUserDataAccountProviderActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IUserDataAccountProviderActivatedEventArgs>,
    impl::require<IUserDataAccountProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IUserDataAccountProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUserDataAccountProviderActivatedEventArgs>(m_ptr); }
};

struct IViewSwitcherProvider :
    Windows::IInspectable,
    impl::consume<IViewSwitcherProvider>,
    impl::require<IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IViewSwitcherProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IViewSwitcherProvider>(m_ptr); }
};

struct IVoiceCommandActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IVoiceCommandActivatedEventArgs>,
    impl::require<IVoiceCommandActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IVoiceCommandActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVoiceCommandActivatedEventArgs>(m_ptr); }
};

struct IWalletActionActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IWalletActionActivatedEventArgs>,
    impl::require<IWalletActionActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IWalletActionActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWalletActionActivatedEventArgs>(m_ptr); }
};

struct IWebAccountProviderActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IWebAccountProviderActivatedEventArgs>,
    impl::require<IWebAccountProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IWebAccountProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebAccountProviderActivatedEventArgs>(m_ptr); }
};

struct IWebAuthenticationBrokerContinuationEventArgs :
    Windows::IInspectable,
    impl::consume<IWebAuthenticationBrokerContinuationEventArgs>,
    impl::require<IWebAuthenticationBrokerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
{
    IWebAuthenticationBrokerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebAuthenticationBrokerContinuationEventArgs>(m_ptr); }
};

}

}
