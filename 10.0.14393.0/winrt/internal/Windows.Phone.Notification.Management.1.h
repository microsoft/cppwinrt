// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Phone.Notification.Management.0.h"
#include "Windows.ApplicationModel.Appointments.0.h"
#include "Windows.ApplicationModel.Email.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Phone::Notification::Management {

struct __declspec(uuid("0d04a12c-883d-4aa7-bca7-fa4bb8bffee6")) __declspec(novtable) IAccessoryManager : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RegisterAccessoryApp(hstring * triggerId) = 0;
    virtual HRESULT __stdcall abi_GetNextTriggerDetails(Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails ** pDetails) = 0;
    virtual HRESULT __stdcall abi_ProcessTriggerDetails(Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails * pDetails) = 0;
    virtual HRESULT __stdcall get_PhoneLineDetails(Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::PhoneLineDetails> ** ppvalue) = 0;
    virtual HRESULT __stdcall abi_GetPhoneLineDetails(GUID phoneLine, Windows::Phone::Notification::Management::IPhoneLineDetails ** ppdetails) = 0;
    virtual HRESULT __stdcall abi_AcceptPhoneCall(uint32_t phoneCallId) = 0;
    virtual HRESULT __stdcall abi_AcceptPhoneCallOnEndpoint(uint32_t phoneCallId, winrt::Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint) = 0;
    virtual HRESULT __stdcall abi_AcceptPhoneCallWithVideo(uint32_t phoneCallId) = 0;
    virtual HRESULT __stdcall abi_AcceptPhoneCallWithVideoOnAudioEndpoint(uint32_t phoneCallId, winrt::Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint) = 0;
    virtual HRESULT __stdcall abi_RejectPhoneCall(uint32_t phoneCallId) = 0;
    virtual HRESULT __stdcall abi_RejectPhoneCallWithText(uint32_t phoneCallId, uint32_t textResponseID) = 0;
    virtual HRESULT __stdcall abi_MakePhoneCall(GUID phoneLine, hstring phoneNumber) = 0;
    virtual HRESULT __stdcall abi_MakePhoneCallOnAudioEndpoint(GUID phoneLine, hstring phoneNumber, winrt::Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint) = 0;
    virtual HRESULT __stdcall abi_MakePhoneCallWithVideo(GUID phoneLine, hstring phoneNumber) = 0;
    virtual HRESULT __stdcall abi_MakePhoneCallWithVideoOnAudioEndpoint(GUID phoneLine, hstring phoneNumber, winrt::Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint) = 0;
    virtual HRESULT __stdcall abi_SwapPhoneCalls(uint32_t phoneCallIdToHold, uint32_t phoneCallIdOnHold) = 0;
    virtual HRESULT __stdcall abi_HoldPhoneCall(uint32_t phoneCallId, bool holdCall) = 0;
    virtual HRESULT __stdcall abi_EndPhoneCall(uint32_t phoneCallId) = 0;
    virtual HRESULT __stdcall put_PhoneMute(bool value) = 0;
    virtual HRESULT __stdcall get_PhoneMute(bool * value) = 0;
    virtual HRESULT __stdcall put_PhoneCallAudioEndpoint(winrt::Windows::Phone::Notification::Management::PhoneCallAudioEndpoint value) = 0;
    virtual HRESULT __stdcall get_PhoneCallAudioEndpoint(winrt::Windows::Phone::Notification::Management::PhoneCallAudioEndpoint * value) = 0;
    virtual HRESULT __stdcall abi_SnoozeAlarm(GUID alarmId) = 0;
    virtual HRESULT __stdcall abi_SnoozeAlarmForSpecifiedTime(GUID alarmId, Windows::Foundation::TimeSpan timeSpan) = 0;
    virtual HRESULT __stdcall abi_DismissAlarm(GUID alarmId) = 0;
    virtual HRESULT __stdcall abi_SnoozeReminder(GUID reminderId) = 0;
    virtual HRESULT __stdcall abi_SnoozeReminderForSpecifiedTime(GUID reminderId, Windows::Foundation::TimeSpan timeSpan) = 0;
    virtual HRESULT __stdcall abi_DismissReminder(GUID reminderId) = 0;
    virtual HRESULT __stdcall abi_GetMediaMetadata(Windows::Phone::Notification::Management::IMediaMetadata ** ppMetadata) = 0;
    virtual HRESULT __stdcall get_MediaPlaybackCapabilities(winrt::Windows::Phone::Notification::Management::PlaybackCapability * value) = 0;
    virtual HRESULT __stdcall get_MediaPlaybackStatus(winrt::Windows::Phone::Notification::Management::PlaybackStatus * value) = 0;
    virtual HRESULT __stdcall abi_PerformMediaPlaybackCommand(winrt::Windows::Phone::Notification::Management::PlaybackCommand command) = 0;
    virtual HRESULT __stdcall get_DoNotDisturbEnabled(bool * value) = 0;
    virtual HRESULT __stdcall get_DrivingModeEnabled(bool * value) = 0;
    virtual HRESULT __stdcall get_BatterySaverState(bool * value) = 0;
    virtual HRESULT __stdcall abi_GetApps(Windows::Foundation::Collections::IMapView<hstring, Windows::Phone::Notification::Management::AppNotificationInfo> ** returnValue) = 0;
    virtual HRESULT __stdcall abi_EnableNotificationsForApplication(hstring appId) = 0;
    virtual HRESULT __stdcall abi_DisableNotificationsForApplication(hstring appId) = 0;
    virtual HRESULT __stdcall abi_IsNotificationEnabledForApplication(hstring appId, bool * enabled) = 0;
    virtual HRESULT __stdcall abi_GetEnabledAccessoryNotificationTypes(int32_t * enabledAccessoryNotificationTypes) = 0;
    virtual HRESULT __stdcall abi_EnableAccessoryNotificationTypes(int32_t accessoryNotificationTypes) = 0;
    virtual HRESULT __stdcall abi_DisableAllAccessoryNotificationTypes() = 0;
    virtual HRESULT __stdcall abi_GetUserConsent(bool * enabled) = 0;
    virtual HRESULT __stdcall abi_GetAppIcon(hstring appId, Windows::Storage::Streams::IRandomAccessStreamReference ** returnValue) = 0;
};

struct __declspec(uuid("bacad44d-d393-46c6-b80c-15fdf44d5386")) __declspec(novtable) IAccessoryManager2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RingDevice() = 0;
    virtual HRESULT __stdcall get_SpeedDialList(Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::SpeedDialEntry> ** ppvalue) = 0;
    virtual HRESULT __stdcall abi_ClearToast(hstring instanceId) = 0;
    virtual HRESULT __stdcall get_IsPhonePinLocked(bool * pinLocked) = 0;
    virtual HRESULT __stdcall abi_IncreaseVolume(int32_t step) = 0;
    virtual HRESULT __stdcall abi_DecreaseVolume(int32_t step) = 0;
    virtual HRESULT __stdcall abi_SetMute(bool mute) = 0;
    virtual HRESULT __stdcall abi_SetRingerVibrate(bool ringer, bool vibrate) = 0;
    virtual HRESULT __stdcall get_VolumeInfo(Windows::Phone::Notification::Management::IVolumeInfo ** ppVolume) = 0;
    virtual HRESULT __stdcall abi_GetAllEmailAccounts(Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailAccountInfo> ** emailAccounts) = 0;
    virtual HRESULT __stdcall abi_GetFolders(hstring emailAccount, Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailFolderInfo> ** folders) = 0;
    virtual HRESULT __stdcall abi_EnableEmailNotificationEmailAccount(hstring emailAccount) = 0;
    virtual HRESULT __stdcall abi_DisableEmailNotificationEmailAccount(hstring emailAccount) = 0;
    virtual HRESULT __stdcall abi_EnableEmailNotificationFolderFilter(hstring emailAccount, Windows::Foundation::Collections::IVectorView<hstring> * folders) = 0;
    virtual HRESULT __stdcall abi_UpdateEmailReadStatus(Windows::Phone::Notification::Management::IBinaryId * messageEntryId, bool isRead) = 0;
};

struct __declspec(uuid("81f75137-edc7-47e0-b2f7-7e577c833f7d")) __declspec(novtable) IAccessoryManager3 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SnoozeAlarmByInstanceId(hstring instanceId) = 0;
    virtual HRESULT __stdcall abi_DismissAlarmByInstanceId(hstring instanceId) = 0;
    virtual HRESULT __stdcall abi_SnoozeReminderByInstanceId(hstring instanceId) = 0;
    virtual HRESULT __stdcall abi_DismissReminderByInstanceId(hstring instanceId) = 0;
};

struct __declspec(uuid("6968a7d4-e3ca-49cb-8c87-2c11cdff9646")) __declspec(novtable) IAccessoryNotificationTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TimeCreated(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_AppDisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_AppId(hstring * value) = 0;
    virtual HRESULT __stdcall get_AccessoryNotificationType(winrt::Windows::Phone::Notification::Management::AccessoryNotificationType * value) = 0;
    virtual HRESULT __stdcall get_StartedProcessing(bool * value) = 0;
    virtual HRESULT __stdcall put_StartedProcessing(bool value) = 0;
};

struct __declspec(uuid("38f5fa30-c738-4da2-908c-775d83c36abb")) __declspec(novtable) IAlarmNotificationTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AlarmId(GUID * value) = 0;
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_ReminderState(winrt::Windows::Phone::Notification::Management::ReminderState * value) = 0;
};

struct __declspec(uuid("cf16e06a-7155-40fe-a9c2-7bd2127ef853")) __declspec(novtable) IAlarmNotificationTriggerDetails2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InstanceId(hstring * value) = 0;
};

struct __declspec(uuid("2157bea5-e286-45d3-9bea-f790fc216e0e")) __declspec(novtable) IAppNotificationInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
};

struct __declspec(uuid("4f0da531-5595-44b4-9181-ce4efa3fc168")) __declspec(novtable) IBinaryId : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Length(uint32_t * value) = 0;
};

struct __declspec(uuid("4b8a3bfc-279d-42ab-9c68-3e87977bf216")) __declspec(novtable) ICalendarChangedNotificationTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EventType(winrt::Windows::Phone::Notification::Management::CalendarChangedEvent * value) = 0;
    virtual HRESULT __stdcall get_ItemId(hstring * value) = 0;
};

struct __declspec(uuid("dc0f01d5-1489-46bb-b73b-7f90067ecf27")) __declspec(novtable) ICortanaTileNotificationTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TileId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Content(hstring * value) = 0;
    virtual HRESULT __stdcall get_LargeContent1(hstring * value) = 0;
    virtual HRESULT __stdcall get_LargeContent2(hstring * value) = 0;
    virtual HRESULT __stdcall get_EmphasizedText(hstring * value) = 0;
    virtual HRESULT __stdcall get_NonWrappedSmallContent1(hstring * value) = 0;
    virtual HRESULT __stdcall get_NonWrappedSmallContent2(hstring * value) = 0;
    virtual HRESULT __stdcall get_NonWrappedSmallContent3(hstring * value) = 0;
    virtual HRESULT __stdcall get_NonWrappedSmallContent4(hstring * value) = 0;
    virtual HRESULT __stdcall get_Source(hstring * value) = 0;
};

struct __declspec(uuid("dfbc02ab-bda0-4568-927e-b2ede35818a1")) __declspec(novtable) IEmailAccountInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsNotificationEnabled(bool * value) = 0;
};

struct __declspec(uuid("c207150e-e237-46d6-90e6-4f529eeac1e2")) __declspec(novtable) IEmailFolderInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsNotificationEnabled(bool * value) = 0;
};

struct __declspec(uuid("f3b82612-46cf-4e70-8e0d-7b2e04ab492b")) __declspec(novtable) IEmailNotificationTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AccountName(hstring * value) = 0;
    virtual HRESULT __stdcall get_ParentFolderName(hstring * value) = 0;
    virtual HRESULT __stdcall get_SenderName(hstring * value) = 0;
    virtual HRESULT __stdcall get_SenderAddress(hstring * value) = 0;
    virtual HRESULT __stdcall get_EmailMessage(Windows::ApplicationModel::Email::IEmailMessage ** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime * value) = 0;
};

struct __declspec(uuid("168067e3-c56f-4ec7-bed1-f734e08de5b2")) __declspec(novtable) IEmailNotificationTriggerDetails2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MessageEntryId(Windows::Phone::Notification::Management::IBinaryId ** value) = 0;
};

struct __declspec(uuid("f5b7a087-06f3-4e3e-8c42-325e67010413")) __declspec(novtable) IEmailReadNotificationTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AccountName(hstring * value) = 0;
    virtual HRESULT __stdcall get_ParentFolderName(hstring * value) = 0;
    virtual HRESULT __stdcall get_MessageEntryId(Windows::Phone::Notification::Management::IBinaryId ** value) = 0;
    virtual HRESULT __stdcall get_IsRead(bool * value) = 0;
};

struct __declspec(uuid("fab4648b-ae45-4548-91ca-4ab0548e33b5")) __declspec(novtable) IMediaControlsTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PlaybackStatus(winrt::Windows::Phone::Notification::Management::PlaybackStatus * value) = 0;
    virtual HRESULT __stdcall get_MediaMetadata(Windows::Phone::Notification::Management::IMediaMetadata ** value) = 0;
};

struct __declspec(uuid("9b50ddf7-bb6c-4330-b3cd-0704a54cdb80")) __declspec(novtable) IMediaMetadata : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall get_Subtitle(hstring * value) = 0;
    virtual HRESULT __stdcall get_Artist(hstring * value) = 0;
    virtual HRESULT __stdcall get_Album(hstring * value) = 0;
    virtual HRESULT __stdcall get_Track(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference ** value) = 0;
};

struct __declspec(uuid("0c1b6f53-f071-483e-bf33-ebd44b724447")) __declspec(novtable) IPhoneCallDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PhoneLine(GUID * value) = 0;
    virtual HRESULT __stdcall get_CallId(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_CallTransport(winrt::Windows::Phone::Notification::Management::PhoneCallTransport * value) = 0;
    virtual HRESULT __stdcall get_CallMediaType(winrt::Windows::Phone::Notification::Management::PhoneMediaType * value) = 0;
    virtual HRESULT __stdcall get_CallDirection(winrt::Windows::Phone::Notification::Management::PhoneCallDirection * value) = 0;
    virtual HRESULT __stdcall get_State(winrt::Windows::Phone::Notification::Management::PhoneCallState * value) = 0;
    virtual HRESULT __stdcall get_ConferenceCallId(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_StartTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_EndTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_PhoneNumber(hstring * value) = 0;
    virtual HRESULT __stdcall get_ContactName(hstring * value) = 0;
    virtual HRESULT __stdcall get_PresetTextResponses(Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::TextResponse> ** value) = 0;
};

struct __declspec(uuid("47eb32dc-33ed-49b9-995c-a296bac82b77")) __declspec(novtable) IPhoneLineDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_LineId(GUID * value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_LineNumber(hstring * value) = 0;
    virtual HRESULT __stdcall get_DefaultOutgoingLine(bool * value) = 0;
    virtual HRESULT __stdcall get_VoicemailCount(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_RegistrationState(winrt::Windows::Phone::Notification::Management::PhoneLineRegistrationState * value) = 0;
};

struct __declspec(uuid("b30cd77d-0147-498c-8241-bf0cabc60a25")) __declspec(novtable) IPhoneLineDetails2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MissedCallCount(uint32_t * value) = 0;
};

struct __declspec(uuid("ccc2fdf7-09c3-4118-91bc-ca6323a8d383")) __declspec(novtable) IPhoneNotificationTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PhoneNotificationType(winrt::Windows::Phone::Notification::Management::PhoneNotificationType * value) = 0;
    virtual HRESULT __stdcall get_CallDetails(Windows::Phone::Notification::Management::IPhoneCallDetails ** value) = 0;
    virtual HRESULT __stdcall get_PhoneLineChangedId(GUID * value) = 0;
};

struct __declspec(uuid("5bddaa5d-9f61-4bf0-9feb-10502bc0b0c2")) __declspec(novtable) IReminderNotificationTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ReminderId(GUID * value) = 0;
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall get_Description(hstring * value) = 0;
    virtual HRESULT __stdcall get_Details(hstring * value) = 0;
    virtual HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_Appointment(Windows::ApplicationModel::Appointments::IAppointment ** value) = 0;
    virtual HRESULT __stdcall get_ReminderState(winrt::Windows::Phone::Notification::Management::ReminderState * value) = 0;
};

struct __declspec(uuid("e715f9c0-504d-4c0f-a6b3-bcb9722c6cdd")) __declspec(novtable) IReminderNotificationTriggerDetails2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InstanceId(hstring * value) = 0;
};

struct __declspec(uuid("9240b6db-872c-46dc-b62a-be4541b166f8")) __declspec(novtable) ISpeedDialEntry : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PhoneNumber(hstring * value) = 0;
    virtual HRESULT __stdcall get_NumberType(hstring * value) = 0;
    virtual HRESULT __stdcall get_ContactName(hstring * value) = 0;
};

struct __declspec(uuid("e9cb74c3-2457-4cdb-8110-72f5e8e883e8")) __declspec(novtable) ITextResponse : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Content(hstring * value) = 0;
};

struct __declspec(uuid("c9314895-4e6d-4e9d-afec-9e921b875ae8")) __declspec(novtable) IToastNotificationTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Text1(hstring * value) = 0;
    virtual HRESULT __stdcall get_Text2(hstring * value) = 0;
    virtual HRESULT __stdcall get_Text3(hstring * value) = 0;
    virtual HRESULT __stdcall get_Text4(hstring * value) = 0;
    virtual HRESULT __stdcall get_SuppressPopup(bool * value) = 0;
};

struct __declspec(uuid("3e0479dd-cac4-4f60-afa3-b925d9d83c93")) __declspec(novtable) IToastNotificationTriggerDetails2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InstanceId(hstring * value) = 0;
};

struct __declspec(uuid("944dd118-7704-4481-b92e-d3ed3ece6322")) __declspec(novtable) IVolumeInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SystemVolume(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_CallVolume(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_MediaVolume(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_IsMuted(bool * value) = 0;
    virtual HRESULT __stdcall get_IsVibrateEnabled(winrt::Windows::Phone::Notification::Management::VibrateState * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Phone::Notification::Management::AlarmNotificationTriggerDetails> { using default_interface = Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails; };
template <> struct traits<Windows::Phone::Notification::Management::AppNotificationInfo> { using default_interface = Windows::Phone::Notification::Management::IAppNotificationInfo; };
template <> struct traits<Windows::Phone::Notification::Management::BinaryId> { using default_interface = Windows::Phone::Notification::Management::IBinaryId; };
template <> struct traits<Windows::Phone::Notification::Management::CalendarChangedNotificationTriggerDetails> { using default_interface = Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails; };
template <> struct traits<Windows::Phone::Notification::Management::CortanaTileNotificationTriggerDetails> { using default_interface = Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails; };
template <> struct traits<Windows::Phone::Notification::Management::EmailAccountInfo> { using default_interface = Windows::Phone::Notification::Management::IEmailAccountInfo; };
template <> struct traits<Windows::Phone::Notification::Management::EmailFolderInfo> { using default_interface = Windows::Phone::Notification::Management::IEmailFolderInfo; };
template <> struct traits<Windows::Phone::Notification::Management::EmailNotificationTriggerDetails> { using default_interface = Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails; };
template <> struct traits<Windows::Phone::Notification::Management::EmailReadNotificationTriggerDetails> { using default_interface = Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails; };
template <> struct traits<Windows::Phone::Notification::Management::MediaControlsTriggerDetails> { using default_interface = Windows::Phone::Notification::Management::IMediaControlsTriggerDetails; };
template <> struct traits<Windows::Phone::Notification::Management::MediaMetadata> { using default_interface = Windows::Phone::Notification::Management::IMediaMetadata; };
template <> struct traits<Windows::Phone::Notification::Management::PhoneCallDetails> { using default_interface = Windows::Phone::Notification::Management::IPhoneCallDetails; };
template <> struct traits<Windows::Phone::Notification::Management::PhoneLineDetails> { using default_interface = Windows::Phone::Notification::Management::IPhoneLineDetails; };
template <> struct traits<Windows::Phone::Notification::Management::PhoneNotificationTriggerDetails> { using default_interface = Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails; };
template <> struct traits<Windows::Phone::Notification::Management::ReminderNotificationTriggerDetails> { using default_interface = Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails; };
template <> struct traits<Windows::Phone::Notification::Management::SpeedDialEntry> { using default_interface = Windows::Phone::Notification::Management::ISpeedDialEntry; };
template <> struct traits<Windows::Phone::Notification::Management::TextResponse> { using default_interface = Windows::Phone::Notification::Management::ITextResponse; };
template <> struct traits<Windows::Phone::Notification::Management::ToastNotificationTriggerDetails> { using default_interface = Windows::Phone::Notification::Management::IToastNotificationTriggerDetails; };
template <> struct traits<Windows::Phone::Notification::Management::VolumeInfo> { using default_interface = Windows::Phone::Notification::Management::IVolumeInfo; };

}

namespace Windows::Phone::Notification::Management {

template <typename T> struct impl_IAccessoryManager;
template <typename T> struct impl_IAccessoryManager2;
template <typename T> struct impl_IAccessoryManager3;
template <typename T> struct impl_IAccessoryNotificationTriggerDetails;
template <typename T> struct impl_IAlarmNotificationTriggerDetails;
template <typename T> struct impl_IAlarmNotificationTriggerDetails2;
template <typename T> struct impl_IAppNotificationInfo;
template <typename T> struct impl_IBinaryId;
template <typename T> struct impl_ICalendarChangedNotificationTriggerDetails;
template <typename T> struct impl_ICortanaTileNotificationTriggerDetails;
template <typename T> struct impl_IEmailAccountInfo;
template <typename T> struct impl_IEmailFolderInfo;
template <typename T> struct impl_IEmailNotificationTriggerDetails;
template <typename T> struct impl_IEmailNotificationTriggerDetails2;
template <typename T> struct impl_IEmailReadNotificationTriggerDetails;
template <typename T> struct impl_IMediaControlsTriggerDetails;
template <typename T> struct impl_IMediaMetadata;
template <typename T> struct impl_IPhoneCallDetails;
template <typename T> struct impl_IPhoneLineDetails;
template <typename T> struct impl_IPhoneLineDetails2;
template <typename T> struct impl_IPhoneNotificationTriggerDetails;
template <typename T> struct impl_IReminderNotificationTriggerDetails;
template <typename T> struct impl_IReminderNotificationTriggerDetails2;
template <typename T> struct impl_ISpeedDialEntry;
template <typename T> struct impl_ITextResponse;
template <typename T> struct impl_IToastNotificationTriggerDetails;
template <typename T> struct impl_IToastNotificationTriggerDetails2;
template <typename T> struct impl_IVolumeInfo;

}

namespace impl {

template <> struct traits<Windows::Phone::Notification::Management::IAccessoryManager>
{
    using abi = ABI::Windows::Phone::Notification::Management::IAccessoryManager;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IAccessoryManager<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IAccessoryManager2>
{
    using abi = ABI::Windows::Phone::Notification::Management::IAccessoryManager2;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IAccessoryManager2<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IAccessoryManager3>
{
    using abi = ABI::Windows::Phone::Notification::Management::IAccessoryManager3;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IAccessoryManager3<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IAccessoryNotificationTriggerDetails<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IAlarmNotificationTriggerDetails<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails2>
{
    using abi = ABI::Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails2;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IAlarmNotificationTriggerDetails2<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IAppNotificationInfo>
{
    using abi = ABI::Windows::Phone::Notification::Management::IAppNotificationInfo;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IAppNotificationInfo<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IBinaryId>
{
    using abi = ABI::Windows::Phone::Notification::Management::IBinaryId;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IBinaryId<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_ICalendarChangedNotificationTriggerDetails<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_ICortanaTileNotificationTriggerDetails<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IEmailAccountInfo>
{
    using abi = ABI::Windows::Phone::Notification::Management::IEmailAccountInfo;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IEmailAccountInfo<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IEmailFolderInfo>
{
    using abi = ABI::Windows::Phone::Notification::Management::IEmailFolderInfo;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IEmailFolderInfo<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IEmailNotificationTriggerDetails<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails2>
{
    using abi = ABI::Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails2;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IEmailNotificationTriggerDetails2<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IEmailReadNotificationTriggerDetails<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IMediaControlsTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::IMediaControlsTriggerDetails;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IMediaControlsTriggerDetails<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IMediaMetadata>
{
    using abi = ABI::Windows::Phone::Notification::Management::IMediaMetadata;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IMediaMetadata<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IPhoneCallDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::IPhoneCallDetails;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IPhoneCallDetails<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IPhoneLineDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::IPhoneLineDetails;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IPhoneLineDetails<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IPhoneLineDetails2>
{
    using abi = ABI::Windows::Phone::Notification::Management::IPhoneLineDetails2;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IPhoneLineDetails2<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IPhoneNotificationTriggerDetails<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IReminderNotificationTriggerDetails<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails2>
{
    using abi = ABI::Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails2;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IReminderNotificationTriggerDetails2<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::ISpeedDialEntry>
{
    using abi = ABI::Windows::Phone::Notification::Management::ISpeedDialEntry;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_ISpeedDialEntry<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::ITextResponse>
{
    using abi = ABI::Windows::Phone::Notification::Management::ITextResponse;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_ITextResponse<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IToastNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::IToastNotificationTriggerDetails;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IToastNotificationTriggerDetails<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IToastNotificationTriggerDetails2>
{
    using abi = ABI::Windows::Phone::Notification::Management::IToastNotificationTriggerDetails2;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IToastNotificationTriggerDetails2<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::IVolumeInfo>
{
    using abi = ABI::Windows::Phone::Notification::Management::IVolumeInfo;
    template <typename D> using consume = Windows::Phone::Notification::Management::impl_IVolumeInfo<D>;
};

template <> struct traits<Windows::Phone::Notification::Management::AccessoryManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.AccessoryManager"; }
};

template <> struct traits<Windows::Phone::Notification::Management::AlarmNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::AlarmNotificationTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.AlarmNotificationTriggerDetails"; }
};

template <> struct traits<Windows::Phone::Notification::Management::AppNotificationInfo>
{
    using abi = ABI::Windows::Phone::Notification::Management::AppNotificationInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.AppNotificationInfo"; }
};

template <> struct traits<Windows::Phone::Notification::Management::BinaryId>
{
    using abi = ABI::Windows::Phone::Notification::Management::BinaryId;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.BinaryId"; }
};

template <> struct traits<Windows::Phone::Notification::Management::CalendarChangedNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::CalendarChangedNotificationTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.CalendarChangedNotificationTriggerDetails"; }
};

template <> struct traits<Windows::Phone::Notification::Management::CortanaTileNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::CortanaTileNotificationTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.CortanaTileNotificationTriggerDetails"; }
};

template <> struct traits<Windows::Phone::Notification::Management::EmailAccountInfo>
{
    using abi = ABI::Windows::Phone::Notification::Management::EmailAccountInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.EmailAccountInfo"; }
};

template <> struct traits<Windows::Phone::Notification::Management::EmailFolderInfo>
{
    using abi = ABI::Windows::Phone::Notification::Management::EmailFolderInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.EmailFolderInfo"; }
};

template <> struct traits<Windows::Phone::Notification::Management::EmailNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::EmailNotificationTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.EmailNotificationTriggerDetails"; }
};

template <> struct traits<Windows::Phone::Notification::Management::EmailReadNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::EmailReadNotificationTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.EmailReadNotificationTriggerDetails"; }
};

template <> struct traits<Windows::Phone::Notification::Management::MediaControlsTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::MediaControlsTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.MediaControlsTriggerDetails"; }
};

template <> struct traits<Windows::Phone::Notification::Management::MediaMetadata>
{
    using abi = ABI::Windows::Phone::Notification::Management::MediaMetadata;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.MediaMetadata"; }
};

template <> struct traits<Windows::Phone::Notification::Management::PhoneCallDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::PhoneCallDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.PhoneCallDetails"; }
};

template <> struct traits<Windows::Phone::Notification::Management::PhoneLineDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::PhoneLineDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.PhoneLineDetails"; }
};

template <> struct traits<Windows::Phone::Notification::Management::PhoneNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::PhoneNotificationTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.PhoneNotificationTriggerDetails"; }
};

template <> struct traits<Windows::Phone::Notification::Management::ReminderNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::ReminderNotificationTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.ReminderNotificationTriggerDetails"; }
};

template <> struct traits<Windows::Phone::Notification::Management::SpeedDialEntry>
{
    using abi = ABI::Windows::Phone::Notification::Management::SpeedDialEntry;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.SpeedDialEntry"; }
};

template <> struct traits<Windows::Phone::Notification::Management::TextResponse>
{
    using abi = ABI::Windows::Phone::Notification::Management::TextResponse;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.TextResponse"; }
};

template <> struct traits<Windows::Phone::Notification::Management::ToastNotificationTriggerDetails>
{
    using abi = ABI::Windows::Phone::Notification::Management::ToastNotificationTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.ToastNotificationTriggerDetails"; }
};

template <> struct traits<Windows::Phone::Notification::Management::VolumeInfo>
{
    using abi = ABI::Windows::Phone::Notification::Management::VolumeInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.Notification.Management.VolumeInfo"; }
};

}

}
