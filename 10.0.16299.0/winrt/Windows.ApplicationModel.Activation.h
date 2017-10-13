// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.AppointmentsProvider.2.h"
#include "winrt/impl/Windows.ApplicationModel.Background.2.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.2.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.2.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.ShareTarget.2.h"
#include "winrt/impl/Windows.ApplicationModel.Search.2.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.Provider.2.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.2.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Devices.Printers.Extensions.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Provider.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Pickers.Provider.2.h"
#include "winrt/impl/Windows.Storage.Provider.2.h"
#include "winrt/impl/Windows.Storage.Search.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Notifications.2.h"
#include "winrt/impl/Windows.UI.ViewManagement.2.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::Activation::ActivationKind consume_Windows_ApplicationModel_Activation_IActivatedEventArgs<D>::Kind() const noexcept
{
    Windows::ApplicationModel::Activation::ActivationKind value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IActivatedEventArgs)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Activation::ApplicationExecutionState consume_Windows_ApplicationModel_Activation_IActivatedEventArgs<D>::PreviousExecutionState() const noexcept
{
    Windows::ApplicationModel::Activation::ApplicationExecutionState value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IActivatedEventArgs)->get_PreviousExecutionState(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Activation::SplashScreen consume_Windows_ApplicationModel_Activation_IActivatedEventArgs<D>::SplashScreen() const noexcept
{
    Windows::ApplicationModel::Activation::SplashScreen value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IActivatedEventArgs)->get_SplashScreen(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_ApplicationModel_Activation_IActivatedEventArgsWithUser<D>::User() const noexcept
{
    Windows::System::User value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Activation_IApplicationViewActivatedEventArgs<D>::CurrentlyShownApplicationViewId() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs)->get_CurrentlyShownApplicationViewId(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IAppointmentsProviderActivatedEventArgs<D>::Verb() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs)->get_Verb(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation consume_Windows_ApplicationModel_Activation_IAppointmentsProviderAddAppointmentActivatedEventArgs<D>::AddAppointmentOperation() const noexcept
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs)->get_AddAppointmentOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation consume_Windows_ApplicationModel_Activation_IAppointmentsProviderRemoveAppointmentActivatedEventArgs<D>::RemoveAppointmentOperation() const noexcept
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs)->get_RemoveAppointmentOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation consume_Windows_ApplicationModel_Activation_IAppointmentsProviderReplaceAppointmentActivatedEventArgs<D>::ReplaceAppointmentOperation() const noexcept
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs)->get_ReplaceAppointmentOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>::InstanceStartDate() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs)->get_InstanceStartDate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>::LocalId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs)->get_LocalId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>::RoamingId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs)->get_RoamingId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowTimeFrameActivatedEventArgs<D>::TimeToShow() const noexcept
{
    Windows::Foundation::DateTime value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs)->get_TimeToShow(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowTimeFrameActivatedEventArgs<D>::Duration() const noexcept
{
    Windows::Foundation::TimeSpan value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::IBackgroundTaskInstance consume_Windows_ApplicationModel_Activation_IBackgroundActivatedEventArgs<D>::TaskInstance() const noexcept
{
    Windows::ApplicationModel::Background::IBackgroundTaskInstance value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs)->get_TaskInstance(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Provider::CachedFileUpdaterUI consume_Windows_ApplicationModel_Activation_ICachedFileUpdaterActivatedEventArgs<D>::CachedFileUpdaterUI() const noexcept
{
    Windows::Storage::Provider::CachedFileUpdaterUI value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs)->get_CachedFileUpdaterUI(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_ApplicationModel_Activation_ICameraSettingsActivatedEventArgs<D>::VideoDeviceController() const noexcept
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs)->get_VideoDeviceController(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_ApplicationModel_Activation_ICameraSettingsActivatedEventArgs<D>::VideoDeviceExtension() const noexcept
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs)->get_VideoDeviceExtension(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Activation::CommandLineActivationOperation consume_Windows_ApplicationModel_Activation_ICommandLineActivatedEventArgs<D>::Operation() const noexcept
{
    Windows::ApplicationModel::Activation::CommandLineActivationOperation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs)->get_Operation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::Arguments() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::CurrentDirectoryPath() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->get_CurrentDirectoryPath(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::ExitCode(int32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->put_ExitCode(value));
}

template <typename D> int32_t consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::ExitCode() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->get_ExitCode(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactActivatedEventArgs<D>::Verb() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactActivatedEventArgs)->get_Verb(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs<D>::ServiceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs)->get_ServiceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs<D>::ServiceUserId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs)->get_ServiceUserId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs<D>::Contact() const noexcept
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactAddress consume_Windows_ApplicationModel_Activation_IContactMapActivatedEventArgs<D>::Address() const noexcept
{
    Windows::ApplicationModel::Contacts::ContactAddress value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs)->get_Address(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Activation_IContactMapActivatedEventArgs<D>::Contact() const noexcept
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs<D>::ServiceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs)->get_ServiceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs<D>::ServiceUserId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs)->get_ServiceUserId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs<D>::Contact() const noexcept
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactPanel consume_Windows_ApplicationModel_Activation_IContactPanelActivatedEventArgs<D>::ContactPanel() const noexcept
{
    Windows::ApplicationModel::Contacts::ContactPanel value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs)->get_ContactPanel(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Activation_IContactPanelActivatedEventArgs<D>::Contact() const noexcept
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Provider::ContactPickerUI consume_Windows_ApplicationModel_Activation_IContactPickerActivatedEventArgs<D>::ContactPickerUI() const noexcept
{
    Windows::ApplicationModel::Contacts::Provider::ContactPickerUI value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs)->get_ContactPickerUI(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs<D>::ServiceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs)->get_ServiceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs<D>::ServiceUserId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs)->get_ServiceUserId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs<D>::Contact() const noexcept
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs<D>::ServiceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs)->get_ServiceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs<D>::ServiceUserId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs)->get_ServiceUserId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs<D>::Contact() const noexcept
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactsProviderActivatedEventArgs<D>::Verb() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs)->get_Verb(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_ApplicationModel_Activation_IContinuationActivatedEventArgs<D>::ContinuationData() const noexcept
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs)->get_ContinuationData(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IDeviceActivatedEventArgs<D>::DeviceInformationId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs)->get_DeviceInformationId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IDeviceActivatedEventArgs<D>::Verb() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs)->get_Verb(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_ApplicationModel_Activation_IDevicePairingActivatedEventArgs<D>::DeviceInformation() const noexcept
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs)->get_DeviceInformation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IDialReceiverActivatedEventArgs<D>::AppName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs)->get_AppName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem> consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgs<D>::Files() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileActivatedEventArgs)->get_Files(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgs<D>::Verb() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileActivatedEventArgs)->get_Verb(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithCallerPackageFamilyName<D>::CallerPackageFamilyName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName)->get_CallerPackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageFileQueryResult consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithNeighboringFiles<D>::NeighboringFilesQuery() const noexcept
{
    Windows::Storage::Search::StorageFileQueryResult value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles)->get_NeighboringFilesQuery(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Pickers::Provider::FileOpenPickerUI consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs<D>::FileOpenPickerUI() const noexcept
{
    Windows::Storage::Pickers::Provider::FileOpenPickerUI value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs)->get_FileOpenPickerUI(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs2<D>::CallerPackageFamilyName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2)->get_CallerPackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile> consume_Windows_ApplicationModel_Activation_IFileOpenPickerContinuationEventArgs<D>::Files() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs)->get_Files(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Pickers::Provider::FileSavePickerUI consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs<D>::FileSavePickerUI() const noexcept
{
    Windows::Storage::Pickers::Provider::FileSavePickerUI value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs)->get_FileSavePickerUI(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs2<D>::CallerPackageFamilyName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2)->get_CallerPackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs2<D>::EnterpriseId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2)->get_EnterpriseId(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile consume_Windows_ApplicationModel_Activation_IFileSavePickerContinuationEventArgs<D>::File() const noexcept
{
    Windows::Storage::StorageFile value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_ApplicationModel_Activation_IFolderPickerContinuationEventArgs<D>::Folder() const noexcept
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs)->get_Folder(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs<D>::Arguments() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs<D>::TileId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs)->get_TileId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Activation::TileActivatedInfo consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs2<D>::TileActivatedInfo() const noexcept
{
    Windows::ApplicationModel::Activation::TileActivatedInfo value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2)->get_TileActivatedInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_ApplicationModel_Activation_ILockScreenActivatedEventArgs<D>::Info() const noexcept
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs)->get_Info(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Calls::LockScreenCallUI consume_Windows_ApplicationModel_Activation_ILockScreenCallActivatedEventArgs<D>::CallUI() const noexcept
{
    Windows::ApplicationModel::Calls::LockScreenCallUI value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs)->get_CallUI(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IPickerReturnedActivatedEventArgs<D>::PickerOperationId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs)->get_PickerOperationId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs<D>::PrelaunchActivated() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs)->get_PrelaunchActivated(&value));
    return value;
}

template <typename D> Windows::Devices::Printers::Extensions::Print3DWorkflow consume_Windows_ApplicationModel_Activation_IPrint3DWorkflowActivatedEventArgs<D>::Workflow() const noexcept
{
    Windows::Devices::Printers::Extensions::Print3DWorkflow value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs)->get_Workflow(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Printers::Extensions::PrintTaskConfiguration consume_Windows_ApplicationModel_Activation_IPrintTaskSettingsActivatedEventArgs<D>::Configuration() const noexcept
{
    Windows::Devices::Printers::Extensions::PrintTaskConfiguration value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs)->get_Configuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgs<D>::Uri() const noexcept
{
    Windows::Foundation::Uri value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData<D>::CallerPackageFamilyName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData)->get_CallerPackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData<D>::Data() const noexcept
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::System::ProtocolForResultsOperation consume_Windows_ApplicationModel_Activation_IProtocolForResultsActivatedEventArgs<D>::ProtocolForResultsOperation() const noexcept
{
    Windows::System::ProtocolForResultsOperation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs)->get_ProtocolForResultsOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_ApplicationModel_Activation_IRestrictedLaunchActivatedEventArgs<D>::SharedContext() const noexcept
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs)->get_SharedContext(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgs<D>::QueryText() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ISearchActivatedEventArgs)->get_QueryText(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgs<D>::Language() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ISearchActivatedEventArgs)->get_Language(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgsWithLinguisticDetails<D>::LinguisticDetails() const noexcept
{
    Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails)->get_LinguisticDetails(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation consume_Windows_ApplicationModel_Activation_IShareTargetActivatedEventArgs<D>::ShareOperation() const noexcept
{
    Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs)->get_ShareOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_ApplicationModel_Activation_ISplashScreen<D>::ImageLocation() const noexcept
{
    Windows::Foundation::Rect value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ISplashScreen)->get_ImageLocation(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Activation_ISplashScreen<D>::Dismissed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ISplashScreen)->add_Dismissed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::Activation::ISplashScreen> consume_Windows_ApplicationModel_Activation_ISplashScreen<D>::Dismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Activation::ISplashScreen>(this, &abi_t<Windows::ApplicationModel::Activation::ISplashScreen>::remove_Dismissed, Dismissed(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Activation_ISplashScreen<D>::Dismissed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ISplashScreen)->remove_Dismissed(get_abi(cookie)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IStartupTaskActivatedEventArgs<D>::TaskId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs)->get_TaskId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ShownTileNotification> consume_Windows_ApplicationModel_Activation_ITileActivatedInfo<D>::RecentlyShownNotifications() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ShownTileNotification> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::ITileActivatedInfo)->get_RecentlyShownNotifications(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IToastNotificationActivatedEventArgs<D>::Argument() const noexcept
{
    hstring argument{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs)->get_Argument(put_abi(argument)));
    return argument;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_ApplicationModel_Activation_IToastNotificationActivatedEventArgs<D>::UserInput() const noexcept
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs)->get_UserInput(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation consume_Windows_ApplicationModel_Activation_IUserDataAccountProviderActivatedEventArgs<D>::Operation() const noexcept
{
    Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs)->get_Operation(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ViewManagement::ActivationViewSwitcher consume_Windows_ApplicationModel_Activation_IViewSwitcherProvider<D>::ViewSwitcher() const noexcept
{
    Windows::UI::ViewManagement::ActivationViewSwitcher value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IViewSwitcherProvider)->get_ViewSwitcher(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionResult consume_Windows_ApplicationModel_Activation_IVoiceCommandActivatedEventArgs<D>::Result() const noexcept
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResult value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs)->get_Result(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs<D>::ItemId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs)->get_ItemId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Wallet::WalletActionKind consume_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs<D>::ActionKind() const noexcept
{
    Windows::ApplicationModel::Wallet::WalletActionKind value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs)->get_ActionKind(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs<D>::ActionId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs)->get_ActionId(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation consume_Windows_ApplicationModel_Activation_IWebAccountProviderActivatedEventArgs<D>::Operation() const noexcept
{
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs)->get_Operation(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::WebAuthenticationResult consume_Windows_ApplicationModel_Activation_IWebAuthenticationBrokerContinuationEventArgs<D>::WebAuthenticationResult() const noexcept
{
    Windows::Security::Authentication::Web::WebAuthenticationResult result{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs)->get_WebAuthenticationResult(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    HRESULT __stdcall get_Kind(Windows::ApplicationModel::Activation::ActivationKind* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Kind());
        return S_OK;
    }

    HRESULT __stdcall get_PreviousExecutionState(Windows::ApplicationModel::Activation::ApplicationExecutionState* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PreviousExecutionState());
        return S_OK;
    }

    HRESULT __stdcall get_SplashScreen(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SplashScreen());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser> : produce_base<D, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    HRESULT __stdcall get_User(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().User());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>
{
    HRESULT __stdcall get_CurrentlyShownApplicationViewId(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CurrentlyShownApplicationViewId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
{
    HRESULT __stdcall get_Verb(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Verb());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>
{
    HRESULT __stdcall get_AddAppointmentOperation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AddAppointmentOperation());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>
{
    HRESULT __stdcall get_RemoveAppointmentOperation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RemoveAppointmentOperation());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>
{
    HRESULT __stdcall get_ReplaceAppointmentOperation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReplaceAppointmentOperation());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>
{
    HRESULT __stdcall get_InstanceStartDate(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().InstanceStartDate());
        return S_OK;
    }

    HRESULT __stdcall get_LocalId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LocalId());
        return S_OK;
    }

    HRESULT __stdcall get_RoamingId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RoamingId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>
{
    HRESULT __stdcall get_TimeToShow(Windows::Foundation::DateTime* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TimeToShow());
        return S_OK;
    }

    HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Duration());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs>
{
    HRESULT __stdcall get_TaskInstance(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TaskInstance());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>
{
    HRESULT __stdcall get_CachedFileUpdaterUI(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CachedFileUpdaterUI());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs>
{
    HRESULT __stdcall get_VideoDeviceController(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().VideoDeviceController());
        return S_OK;
    }

    HRESULT __stdcall get_VideoDeviceExtension(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().VideoDeviceExtension());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs>
{
    HRESULT __stdcall get_Operation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Operation());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ICommandLineActivationOperation> : produce_base<D, Windows::ApplicationModel::Activation::ICommandLineActivationOperation>
{
    HRESULT __stdcall get_Arguments(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Arguments());
        return S_OK;
    }

    HRESULT __stdcall get_CurrentDirectoryPath(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CurrentDirectoryPath());
        return S_OK;
    }

    HRESULT __stdcall put_ExitCode(int32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ExitCode(value);
        return S_OK;
    }

    HRESULT __stdcall get_ExitCode(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ExitCode());
        return S_OK;
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
{
    HRESULT __stdcall get_Verb(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Verb());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs>
{
    HRESULT __stdcall get_ServiceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServiceId());
        return S_OK;
    }

    HRESULT __stdcall get_ServiceUserId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServiceUserId());
        return S_OK;
    }

    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Contact());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs>
{
    HRESULT __stdcall get_Address(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Address());
        return S_OK;
    }

    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Contact());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs>
{
    HRESULT __stdcall get_ServiceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServiceId());
        return S_OK;
    }

    HRESULT __stdcall get_ServiceUserId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServiceUserId());
        return S_OK;
    }

    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Contact());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs>
{
    HRESULT __stdcall get_ContactPanel(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ContactPanel());
        return S_OK;
    }

    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Contact());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs>
{
    HRESULT __stdcall get_ContactPickerUI(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ContactPickerUI());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs>
{
    HRESULT __stdcall get_ServiceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServiceId());
        return S_OK;
    }

    HRESULT __stdcall get_ServiceUserId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServiceUserId());
        return S_OK;
    }

    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Contact());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs>
{
    HRESULT __stdcall get_ServiceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServiceId());
        return S_OK;
    }

    HRESULT __stdcall get_ServiceUserId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServiceUserId());
        return S_OK;
    }

    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Contact());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs>
{
    HRESULT __stdcall get_Verb(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Verb());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
{
    HRESULT __stdcall get_ContinuationData(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ContinuationData());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs>
{
    HRESULT __stdcall get_DeviceInformationId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceInformationId());
        return S_OK;
    }

    HRESULT __stdcall get_Verb(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Verb());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>
{
    HRESULT __stdcall get_DeviceInformation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceInformation());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>
{
    HRESULT __stdcall get_AppName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AppName());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgs>
{
    HRESULT __stdcall get_Files(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Files());
        return S_OK;
    }

    HRESULT __stdcall get_Verb(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Verb());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName> : produce_base<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>
{
    HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CallerPackageFamilyName());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles> : produce_base<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>
{
    HRESULT __stdcall get_NeighboringFilesQuery(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NeighboringFilesQuery());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>
{
    HRESULT __stdcall get_FileOpenPickerUI(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FileOpenPickerUI());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2> : produce_base<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>
{
    HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CallerPackageFamilyName());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>
{
    HRESULT __stdcall get_Files(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Files());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>
{
    HRESULT __stdcall get_FileSavePickerUI(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FileSavePickerUI());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2> : produce_base<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>
{
    HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CallerPackageFamilyName());
        return S_OK;
    }

    HRESULT __stdcall get_EnterpriseId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().EnterpriseId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>
{
    HRESULT __stdcall get_File(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().File());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>
{
    HRESULT __stdcall get_Folder(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Folder());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
{
    HRESULT __stdcall get_Arguments(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Arguments());
        return S_OK;
    }

    HRESULT __stdcall get_TileId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TileId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2> : produce_base<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>
{
    HRESULT __stdcall get_TileActivatedInfo(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TileActivatedInfo());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs>
{
    HRESULT __stdcall get_Info(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Info());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs>
{
    HRESULT __stdcall get_CallUI(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CallUI());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>
{
    HRESULT __stdcall get_PickerOperationId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PickerOperationId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>
{
    HRESULT __stdcall get_PrelaunchActivated(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PrelaunchActivated());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs>
{
    HRESULT __stdcall get_Workflow(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Workflow());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs>
{
    HRESULT __stdcall get_Configuration(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Configuration());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>
{
    HRESULT __stdcall get_Uri(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Uri());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData> : produce_base<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>
{
    HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CallerPackageFamilyName());
        return S_OK;
    }

    HRESULT __stdcall get_Data(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Data());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>
{
    HRESULT __stdcall get_ProtocolForResultsOperation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ProtocolForResultsOperation());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>
{
    HRESULT __stdcall get_SharedContext(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SharedContext());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgs>
{
    HRESULT __stdcall get_QueryText(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().QueryText());
        return S_OK;
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Language());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails> : produce_base<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>
{
    HRESULT __stdcall get_LinguisticDetails(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LinguisticDetails());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs>
{
    HRESULT __stdcall get_ShareOperation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ShareOperation());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ISplashScreen> : produce_base<D, Windows::ApplicationModel::Activation::ISplashScreen>
{
    HRESULT __stdcall get_ImageLocation(Windows::Foundation::Rect* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ImageLocation());
        return S_OK;
    }

    HRESULT __stdcall add_Dismissed(::IUnknown* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().Dismissed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Dismissed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Dismissed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>
{
    HRESULT __stdcall get_TaskId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TaskId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ITileActivatedInfo> : produce_base<D, Windows::ApplicationModel::Activation::ITileActivatedInfo>
{
    HRESULT __stdcall get_RecentlyShownNotifications(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RecentlyShownNotifications());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>
{
    HRESULT __stdcall get_Argument(HSTRING* argument) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *argument = detach_abi(this->shim().Argument());
        return S_OK;
    }

    HRESULT __stdcall get_UserInput(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().UserInput());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>
{
    HRESULT __stdcall get_Operation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Operation());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IViewSwitcherProvider> : produce_base<D, Windows::ApplicationModel::Activation::IViewSwitcherProvider>
{
    HRESULT __stdcall get_ViewSwitcher(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ViewSwitcher());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>
{
    HRESULT __stdcall get_Result(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Result());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs>
{
    HRESULT __stdcall get_ItemId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ItemId());
        return S_OK;
    }

    HRESULT __stdcall get_ActionKind(Windows::ApplicationModel::Wallet::WalletActionKind* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ActionKind());
        return S_OK;
    }

    HRESULT __stdcall get_ActionId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ActionId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>
{
    HRESULT __stdcall get_Operation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Operation());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>
{
    HRESULT __stdcall get_WebAuthenticationResult(::IUnknown** result) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *result = detach_abi(this->shim().WebAuthenticationResult());
        return S_OK;
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ICommandLineActivationOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ICommandLineActivationOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IContactActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ISplashScreen> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ISplashScreen> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ITileActivatedInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ITileActivatedInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IViewSwitcherProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IViewSwitcherProvider> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::CameraSettingsActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::CameraSettingsActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::CommandLineActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::CommandLineActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::CommandLineActivationOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::CommandLineActivationOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactCallActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ContactCallActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactMapActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ContactMapActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactMessageActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ContactMessageActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactPanelActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ContactPanelActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactPickerActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ContactPickerActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactPostActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ContactPostActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactVideoCallActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ContactVideoCallActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::DeviceActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::DeviceActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::DevicePairingActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::DevicePairingActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::DialReceiverActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::DialReceiverActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::FileActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileSavePickerContinuationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::FileSavePickerContinuationEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::FolderPickerContinuationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::FolderPickerContinuationEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::LaunchActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::LaunchActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::LockScreenActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::LockScreenActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::LockScreenCallActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::LockScreenCallActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::PickerReturnedActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::PickerReturnedActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::Print3DWorkflowActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::Print3DWorkflowActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::PrintTaskSettingsActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::PrintTaskSettingsActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ProtocolActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ProtocolActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::SearchActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::SearchActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::SplashScreen> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::SplashScreen> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::StartupTaskActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::StartupTaskActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::TileActivatedInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::TileActivatedInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::ToastNotificationActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::ToastNotificationActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::VoiceCommandActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::VoiceCommandActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::WalletActionActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::WalletActionActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs> {};

}

WINRT_WARNING_POP
