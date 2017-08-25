// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.Appointments.2.h"
#include "winrt/impl/Windows.ApplicationModel.Email.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Phone.Notification.Management.2.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::RegisterAccessoryApp() const
{
    hstring triggerId{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->RegisterAccessoryApp(put_abi(triggerId)));
    return triggerId;
}

template <typename D> Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::GetNextTriggerDetails() const
{
    Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails pDetails{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->GetNextTriggerDetails(put_abi(pDetails)));
    return pDetails;
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::ProcessTriggerDetails(Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails const& pDetails) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->ProcessTriggerDetails(get_abi(pDetails)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::PhoneLineDetails> consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::PhoneLineDetails() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::PhoneLineDetails> ppvalue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->get_PhoneLineDetails(put_abi(ppvalue)));
    return ppvalue;
}

template <typename D> Windows::Phone::Notification::Management::PhoneLineDetails consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::GetPhoneLineDetails(GUID const& phoneLine) const
{
    Windows::Phone::Notification::Management::PhoneLineDetails ppdetails{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->GetPhoneLineDetails(get_abi(phoneLine), put_abi(ppdetails)));
    return ppdetails;
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::AcceptPhoneCall(uint32_t phoneCallId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->AcceptPhoneCall(phoneCallId));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::AcceptPhoneCall(uint32_t phoneCallId, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& endPoint) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->AcceptPhoneCallOnEndpoint(phoneCallId, get_abi(endPoint)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::AcceptPhoneCallWithVideo(uint32_t phoneCallId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->AcceptPhoneCallWithVideo(phoneCallId));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::AcceptPhoneCallWithVideo(uint32_t phoneCallId, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& endPoint) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->AcceptPhoneCallWithVideoOnAudioEndpoint(phoneCallId, get_abi(endPoint)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::RejectPhoneCall(uint32_t phoneCallId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->RejectPhoneCall(phoneCallId));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::RejectPhoneCall(uint32_t phoneCallId, uint32_t textResponseID) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->RejectPhoneCallWithText(phoneCallId, textResponseID));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::MakePhoneCall(GUID const& phoneLine, param::hstring const& phoneNumber) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->MakePhoneCall(get_abi(phoneLine), get_abi(phoneNumber)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::MakePhoneCall(GUID const& phoneLine, param::hstring const& phoneNumber, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& endPoint) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->MakePhoneCallOnAudioEndpoint(get_abi(phoneLine), get_abi(phoneNumber), get_abi(endPoint)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::MakePhoneCallWithVideo(GUID const& phoneLine, param::hstring const& phoneNumber) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->MakePhoneCallWithVideo(get_abi(phoneLine), get_abi(phoneNumber)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::MakePhoneCallWithVideo(GUID const& phoneLine, param::hstring const& phoneNumber, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& endPoint) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->MakePhoneCallWithVideoOnAudioEndpoint(get_abi(phoneLine), get_abi(phoneNumber), get_abi(endPoint)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::SwapPhoneCalls(uint32_t phoneCallIdToHold, uint32_t phoneCallIdOnHold) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->SwapPhoneCalls(phoneCallIdToHold, phoneCallIdOnHold));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::HoldPhoneCall(uint32_t phoneCallId, bool holdCall) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->HoldPhoneCall(phoneCallId, holdCall));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::EndPhoneCall(uint32_t phoneCallId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->EndPhoneCall(phoneCallId));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::PhoneMute(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->put_PhoneMute(value));
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::PhoneMute() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->get_PhoneMute(&value));
    return value;
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::PhoneCallAudioEndpoint(Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->put_PhoneCallAudioEndpoint(get_abi(value)));
}

template <typename D> Windows::Phone::Notification::Management::PhoneCallAudioEndpoint consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::PhoneCallAudioEndpoint() const
{
    Windows::Phone::Notification::Management::PhoneCallAudioEndpoint value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->get_PhoneCallAudioEndpoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::SnoozeAlarm(GUID const& alarmId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->SnoozeAlarm(get_abi(alarmId)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::SnoozeAlarm(GUID const& alarmId, Windows::Foundation::TimeSpan const& timeSpan) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->SnoozeAlarmForSpecifiedTime(get_abi(alarmId), get_abi(timeSpan)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::DismissAlarm(GUID const& alarmId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->DismissAlarm(get_abi(alarmId)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::SnoozeReminder(GUID const& reminderId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->SnoozeReminder(get_abi(reminderId)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::SnoozeReminder(GUID const& reminderId, Windows::Foundation::TimeSpan const& timeSpan) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->SnoozeReminderForSpecifiedTime(get_abi(reminderId), get_abi(timeSpan)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::DismissReminder(GUID const& reminderId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->DismissReminder(get_abi(reminderId)));
}

template <typename D> Windows::Phone::Notification::Management::MediaMetadata consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::GetMediaMetadata() const
{
    Windows::Phone::Notification::Management::MediaMetadata ppMetadata{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->GetMediaMetadata(put_abi(ppMetadata)));
    return ppMetadata;
}

template <typename D> Windows::Phone::Notification::Management::PlaybackCapability consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::MediaPlaybackCapabilities() const
{
    Windows::Phone::Notification::Management::PlaybackCapability value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->get_MediaPlaybackCapabilities(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PlaybackStatus consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::MediaPlaybackStatus() const
{
    Windows::Phone::Notification::Management::PlaybackStatus value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->get_MediaPlaybackStatus(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::PerformMediaPlaybackCommand(Windows::Phone::Notification::Management::PlaybackCommand const& command) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->PerformMediaPlaybackCommand(get_abi(command)));
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::DoNotDisturbEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->get_DoNotDisturbEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::DrivingModeEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->get_DrivingModeEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::BatterySaverState() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->get_BatterySaverState(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Phone::Notification::Management::AppNotificationInfo> consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::GetApps() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Phone::Notification::Management::AppNotificationInfo> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->GetApps(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::EnableNotificationsForApplication(param::hstring const& appId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->EnableNotificationsForApplication(get_abi(appId)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::DisableNotificationsForApplication(param::hstring const& appId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->DisableNotificationsForApplication(get_abi(appId)));
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::IsNotificationEnabledForApplication(param::hstring const& appId) const
{
    bool enabled{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->IsNotificationEnabledForApplication(get_abi(appId), &enabled));
    return enabled;
}

template <typename D> int32_t consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::GetEnabledAccessoryNotificationTypes() const
{
    int32_t enabledAccessoryNotificationTypes{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->GetEnabledAccessoryNotificationTypes(&enabledAccessoryNotificationTypes));
    return enabledAccessoryNotificationTypes;
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::EnableAccessoryNotificationTypes(int32_t accessoryNotificationTypes) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->EnableAccessoryNotificationTypes(accessoryNotificationTypes));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::DisableAllAccessoryNotificationTypes() const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->DisableAllAccessoryNotificationTypes());
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::GetUserConsent() const
{
    bool enabled{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->GetUserConsent(&enabled));
    return enabled;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_Phone_Notification_Management_IAccessoryManager<D>::GetAppIcon(param::hstring const& appId) const
{
    Windows::Storage::Streams::IRandomAccessStreamReference returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager)->GetAppIcon(get_abi(appId), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::RingDevice() const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->RingDevice());
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::SpeedDialEntry> consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::SpeedDialList() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::SpeedDialEntry> ppvalue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->get_SpeedDialList(put_abi(ppvalue)));
    return ppvalue;
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::ClearToast(param::hstring const& instanceId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->ClearToast(get_abi(instanceId)));
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::IsPhonePinLocked() const
{
    bool pinLocked{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->get_IsPhonePinLocked(&pinLocked));
    return pinLocked;
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::IncreaseVolume(int32_t step) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->IncreaseVolume(step));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::DecreaseVolume(int32_t step) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->DecreaseVolume(step));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::SetMute(bool mute) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->SetMute(mute));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::SetRingerVibrate(bool ringer, bool vibrate) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->SetRingerVibrate(ringer, vibrate));
}

template <typename D> Windows::Phone::Notification::Management::VolumeInfo consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::VolumeInfo() const
{
    Windows::Phone::Notification::Management::VolumeInfo ppVolume{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->get_VolumeInfo(put_abi(ppVolume)));
    return ppVolume;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailAccountInfo> consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::GetAllEmailAccounts() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailAccountInfo> emailAccounts{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->GetAllEmailAccounts(put_abi(emailAccounts)));
    return emailAccounts;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailFolderInfo> consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::GetFolders(param::hstring const& emailAccount) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailFolderInfo> folders{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->GetFolders(get_abi(emailAccount), put_abi(folders)));
    return folders;
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::EnableEmailNotificationEmailAccount(param::hstring const& emailAccount) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->EnableEmailNotificationEmailAccount(get_abi(emailAccount)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::DisableEmailNotificationEmailAccount(param::hstring const& emailAccount) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->DisableEmailNotificationEmailAccount(get_abi(emailAccount)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::EnableEmailNotificationFolderFilter(param::hstring const& emailAccount, param::vector_view<hstring> const& folders) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->EnableEmailNotificationFolderFilter(get_abi(emailAccount), get_abi(folders)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>::UpdateEmailReadStatus(Windows::Phone::Notification::Management::BinaryId const& messageEntryId, bool isRead) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager2)->UpdateEmailReadStatus(get_abi(messageEntryId), isRead));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager3<D>::SnoozeAlarmByInstanceId(param::hstring const& instanceId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager3)->SnoozeAlarmByInstanceId(get_abi(instanceId)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager3<D>::DismissAlarmByInstanceId(param::hstring const& instanceId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager3)->DismissAlarmByInstanceId(get_abi(instanceId)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager3<D>::SnoozeReminderByInstanceId(param::hstring const& instanceId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager3)->SnoozeReminderByInstanceId(get_abi(instanceId)));
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryManager3<D>::DismissReminderByInstanceId(param::hstring const& instanceId) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryManager3)->DismissReminderByInstanceId(get_abi(instanceId)));
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Phone_Notification_Management_IAccessoryNotificationTriggerDetails<D>::TimeCreated() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails)->get_TimeCreated(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IAccessoryNotificationTriggerDetails<D>::AppDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails)->get_AppDisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IAccessoryNotificationTriggerDetails<D>::AppId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::AccessoryNotificationType consume_Windows_Phone_Notification_Management_IAccessoryNotificationTriggerDetails<D>::AccessoryNotificationType() const
{
    Windows::Phone::Notification::Management::AccessoryNotificationType value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails)->get_AccessoryNotificationType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IAccessoryNotificationTriggerDetails<D>::StartedProcessing() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails)->get_StartedProcessing(&value));
    return value;
}

template <typename D> void consume_Windows_Phone_Notification_Management_IAccessoryNotificationTriggerDetails<D>::StartedProcessing(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails)->put_StartedProcessing(value));
}

template <typename D> GUID consume_Windows_Phone_Notification_Management_IAlarmNotificationTriggerDetails<D>::AlarmId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails)->get_AlarmId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IAlarmNotificationTriggerDetails<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails)->get_Title(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Phone_Notification_Management_IAlarmNotificationTriggerDetails<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::ReminderState consume_Windows_Phone_Notification_Management_IAlarmNotificationTriggerDetails<D>::ReminderState() const
{
    Windows::Phone::Notification::Management::ReminderState value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails)->get_ReminderState(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IAlarmNotificationTriggerDetails2<D>::InstanceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails2)->get_InstanceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IAppNotificationInfo<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAppNotificationInfo)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IAppNotificationInfo<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IAppNotificationInfo)->get_Name(put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Phone_Notification_Management_IBinaryId<D>::Id() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IBinaryId)->get_Id(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Phone_Notification_Management_IBinaryId<D>::Length() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IBinaryId)->get_Length(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::CalendarChangedEvent consume_Windows_Phone_Notification_Management_ICalendarChangedNotificationTriggerDetails<D>::EventType() const
{
    Windows::Phone::Notification::Management::CalendarChangedEvent value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails)->get_EventType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ICalendarChangedNotificationTriggerDetails<D>::ItemId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails)->get_ItemId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ICortanaTileNotificationTriggerDetails<D>::TileId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails)->get_TileId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ICortanaTileNotificationTriggerDetails<D>::Content() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails)->get_Content(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ICortanaTileNotificationTriggerDetails<D>::LargeContent1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails)->get_LargeContent1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ICortanaTileNotificationTriggerDetails<D>::LargeContent2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails)->get_LargeContent2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ICortanaTileNotificationTriggerDetails<D>::EmphasizedText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails)->get_EmphasizedText(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ICortanaTileNotificationTriggerDetails<D>::NonWrappedSmallContent1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails)->get_NonWrappedSmallContent1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ICortanaTileNotificationTriggerDetails<D>::NonWrappedSmallContent2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails)->get_NonWrappedSmallContent2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ICortanaTileNotificationTriggerDetails<D>::NonWrappedSmallContent3() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails)->get_NonWrappedSmallContent3(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ICortanaTileNotificationTriggerDetails<D>::NonWrappedSmallContent4() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails)->get_NonWrappedSmallContent4(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ICortanaTileNotificationTriggerDetails<D>::Source() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails)->get_Source(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IEmailAccountInfo<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailAccountInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IEmailAccountInfo<D>::IsNotificationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailAccountInfo)->get_IsNotificationEnabled(&value));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IEmailFolderInfo<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailFolderInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IEmailFolderInfo<D>::IsNotificationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailFolderInfo)->get_IsNotificationEnabled(&value));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IEmailNotificationTriggerDetails<D>::AccountName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails)->get_AccountName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IEmailNotificationTriggerDetails<D>::ParentFolderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails)->get_ParentFolderName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IEmailNotificationTriggerDetails<D>::SenderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails)->get_SenderName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IEmailNotificationTriggerDetails<D>::SenderAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails)->get_SenderAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessage consume_Windows_Phone_Notification_Management_IEmailNotificationTriggerDetails<D>::EmailMessage() const
{
    Windows::ApplicationModel::Email::EmailMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails)->get_EmailMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Phone_Notification_Management_IEmailNotificationTriggerDetails<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::BinaryId consume_Windows_Phone_Notification_Management_IEmailNotificationTriggerDetails2<D>::MessageEntryId() const
{
    Windows::Phone::Notification::Management::BinaryId value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails2)->get_MessageEntryId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IEmailReadNotificationTriggerDetails<D>::AccountName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails)->get_AccountName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IEmailReadNotificationTriggerDetails<D>::ParentFolderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails)->get_ParentFolderName(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::BinaryId consume_Windows_Phone_Notification_Management_IEmailReadNotificationTriggerDetails<D>::MessageEntryId() const
{
    Windows::Phone::Notification::Management::BinaryId value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails)->get_MessageEntryId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IEmailReadNotificationTriggerDetails<D>::IsRead() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails)->get_IsRead(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PlaybackStatus consume_Windows_Phone_Notification_Management_IMediaControlsTriggerDetails<D>::PlaybackStatus() const
{
    Windows::Phone::Notification::Management::PlaybackStatus value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IMediaControlsTriggerDetails)->get_PlaybackStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::MediaMetadata consume_Windows_Phone_Notification_Management_IMediaControlsTriggerDetails<D>::MediaMetadata() const
{
    Windows::Phone::Notification::Management::MediaMetadata value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IMediaControlsTriggerDetails)->get_MediaMetadata(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IMediaMetadata<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IMediaMetadata)->get_Title(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IMediaMetadata<D>::Subtitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IMediaMetadata)->get_Subtitle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IMediaMetadata<D>::Artist() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IMediaMetadata)->get_Artist(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IMediaMetadata<D>::Album() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IMediaMetadata)->get_Album(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Phone_Notification_Management_IMediaMetadata<D>::Track() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IMediaMetadata)->get_Track(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Phone_Notification_Management_IMediaMetadata<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IMediaMetadata)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_Phone_Notification_Management_IMediaMetadata<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IMediaMetadata)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Phone_Notification_Management_IPhoneCallDetails<D>::PhoneLine() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneCallDetails)->get_PhoneLine(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Phone_Notification_Management_IPhoneCallDetails<D>::CallId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneCallDetails)->get_CallId(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneCallTransport consume_Windows_Phone_Notification_Management_IPhoneCallDetails<D>::CallTransport() const
{
    Windows::Phone::Notification::Management::PhoneCallTransport value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneCallDetails)->get_CallTransport(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneMediaType consume_Windows_Phone_Notification_Management_IPhoneCallDetails<D>::CallMediaType() const
{
    Windows::Phone::Notification::Management::PhoneMediaType value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneCallDetails)->get_CallMediaType(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneCallDirection consume_Windows_Phone_Notification_Management_IPhoneCallDetails<D>::CallDirection() const
{
    Windows::Phone::Notification::Management::PhoneCallDirection value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneCallDetails)->get_CallDirection(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneCallState consume_Windows_Phone_Notification_Management_IPhoneCallDetails<D>::State() const
{
    Windows::Phone::Notification::Management::PhoneCallState value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneCallDetails)->get_State(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Phone_Notification_Management_IPhoneCallDetails<D>::ConferenceCallId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneCallDetails)->get_ConferenceCallId(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Phone_Notification_Management_IPhoneCallDetails<D>::StartTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneCallDetails)->get_StartTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Phone_Notification_Management_IPhoneCallDetails<D>::EndTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneCallDetails)->get_EndTime(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IPhoneCallDetails<D>::PhoneNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneCallDetails)->get_PhoneNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IPhoneCallDetails<D>::ContactName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneCallDetails)->get_ContactName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::TextResponse> consume_Windows_Phone_Notification_Management_IPhoneCallDetails<D>::PresetTextResponses() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::TextResponse> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneCallDetails)->get_PresetTextResponses(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Phone_Notification_Management_IPhoneLineDetails<D>::LineId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneLineDetails)->get_LineId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IPhoneLineDetails<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneLineDetails)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IPhoneLineDetails<D>::LineNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneLineDetails)->get_LineNumber(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IPhoneLineDetails<D>::DefaultOutgoingLine() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneLineDetails)->get_DefaultOutgoingLine(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Phone_Notification_Management_IPhoneLineDetails<D>::VoicemailCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneLineDetails)->get_VoicemailCount(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneLineRegistrationState consume_Windows_Phone_Notification_Management_IPhoneLineDetails<D>::RegistrationState() const
{
    Windows::Phone::Notification::Management::PhoneLineRegistrationState value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneLineDetails)->get_RegistrationState(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Phone_Notification_Management_IPhoneLineDetails2<D>::MissedCallCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneLineDetails2)->get_MissedCallCount(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneNotificationType consume_Windows_Phone_Notification_Management_IPhoneNotificationTriggerDetails<D>::PhoneNotificationType() const
{
    Windows::Phone::Notification::Management::PhoneNotificationType value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails)->get_PhoneNotificationType(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneCallDetails consume_Windows_Phone_Notification_Management_IPhoneNotificationTriggerDetails<D>::CallDetails() const
{
    Windows::Phone::Notification::Management::PhoneCallDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails)->get_CallDetails(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Phone_Notification_Management_IPhoneNotificationTriggerDetails<D>::PhoneLineChangedId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails)->get_PhoneLineChangedId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Phone_Notification_Management_IReminderNotificationTriggerDetails<D>::ReminderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails)->get_ReminderId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IReminderNotificationTriggerDetails<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails)->get_Title(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IReminderNotificationTriggerDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IReminderNotificationTriggerDetails<D>::Details() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails)->get_Details(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Phone_Notification_Management_IReminderNotificationTriggerDetails<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::Appointment consume_Windows_Phone_Notification_Management_IReminderNotificationTriggerDetails<D>::Appointment() const
{
    Windows::ApplicationModel::Appointments::Appointment value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails)->get_Appointment(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::ReminderState consume_Windows_Phone_Notification_Management_IReminderNotificationTriggerDetails<D>::ReminderState() const
{
    Windows::Phone::Notification::Management::ReminderState value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails)->get_ReminderState(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IReminderNotificationTriggerDetails2<D>::InstanceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails2)->get_InstanceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ISpeedDialEntry<D>::PhoneNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ISpeedDialEntry)->get_PhoneNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ISpeedDialEntry<D>::NumberType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ISpeedDialEntry)->get_NumberType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ISpeedDialEntry<D>::ContactName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ISpeedDialEntry)->get_ContactName(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Phone_Notification_Management_ITextResponse<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ITextResponse)->get_Id(&value));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_ITextResponse<D>::Content() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::ITextResponse)->get_Content(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IToastNotificationTriggerDetails<D>::Text1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IToastNotificationTriggerDetails)->get_Text1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IToastNotificationTriggerDetails<D>::Text2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IToastNotificationTriggerDetails)->get_Text2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IToastNotificationTriggerDetails<D>::Text3() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IToastNotificationTriggerDetails)->get_Text3(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IToastNotificationTriggerDetails<D>::Text4() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IToastNotificationTriggerDetails)->get_Text4(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IToastNotificationTriggerDetails<D>::SuppressPopup() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IToastNotificationTriggerDetails)->get_SuppressPopup(&value));
    return value;
}

template <typename D> hstring consume_Windows_Phone_Notification_Management_IToastNotificationTriggerDetails2<D>::InstanceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IToastNotificationTriggerDetails2)->get_InstanceId(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Phone_Notification_Management_IVolumeInfo<D>::SystemVolume() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IVolumeInfo)->get_SystemVolume(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Phone_Notification_Management_IVolumeInfo<D>::CallVolume() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IVolumeInfo)->get_CallVolume(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Phone_Notification_Management_IVolumeInfo<D>::MediaVolume() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IVolumeInfo)->get_MediaVolume(&value));
    return value;
}

template <typename D> bool consume_Windows_Phone_Notification_Management_IVolumeInfo<D>::IsMuted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IVolumeInfo)->get_IsMuted(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::VibrateState consume_Windows_Phone_Notification_Management_IVolumeInfo<D>::IsVibrateEnabled() const
{
    Windows::Phone::Notification::Management::VibrateState value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Notification::Management::IVolumeInfo)->get_IsVibrateEnabled(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IAccessoryManager> : produce_base<D, Windows::Phone::Notification::Management::IAccessoryManager>
{
    HRESULT __stdcall RegisterAccessoryApp(HSTRING* triggerId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *triggerId = detach_abi(this->shim().RegisterAccessoryApp());
            return S_OK;
        }
        catch (...)
        {
            *triggerId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNextTriggerDetails(::IUnknown** pDetails) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pDetails = detach_abi(this->shim().GetNextTriggerDetails());
            return S_OK;
        }
        catch (...)
        {
            *pDetails = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ProcessTriggerDetails(::IUnknown* pDetails) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessTriggerDetails(*reinterpret_cast<Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails const*>(&pDetails));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneLineDetails(::IUnknown** ppvalue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppvalue = detach_abi(this->shim().PhoneLineDetails());
            return S_OK;
        }
        catch (...)
        {
            *ppvalue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPhoneLineDetails(abi_t<GUID> phoneLine, ::IUnknown** ppdetails) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppdetails = detach_abi(this->shim().GetPhoneLineDetails(*reinterpret_cast<GUID const*>(&phoneLine)));
            return S_OK;
        }
        catch (...)
        {
            *ppdetails = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AcceptPhoneCall(uint32_t phoneCallId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptPhoneCall(phoneCallId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AcceptPhoneCallOnEndpoint(uint32_t phoneCallId, abi_t<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint> endPoint) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptPhoneCall(phoneCallId, *reinterpret_cast<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const*>(&endPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AcceptPhoneCallWithVideo(uint32_t phoneCallId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptPhoneCallWithVideo(phoneCallId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AcceptPhoneCallWithVideoOnAudioEndpoint(uint32_t phoneCallId, abi_t<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint> endPoint) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptPhoneCallWithVideo(phoneCallId, *reinterpret_cast<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const*>(&endPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RejectPhoneCall(uint32_t phoneCallId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RejectPhoneCall(phoneCallId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RejectPhoneCallWithText(uint32_t phoneCallId, uint32_t textResponseID) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RejectPhoneCall(phoneCallId, textResponseID);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MakePhoneCall(abi_t<GUID> phoneLine, HSTRING phoneNumber) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MakePhoneCall(*reinterpret_cast<GUID const*>(&phoneLine), *reinterpret_cast<hstring const*>(&phoneNumber));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MakePhoneCallOnAudioEndpoint(abi_t<GUID> phoneLine, HSTRING phoneNumber, abi_t<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint> endPoint) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MakePhoneCall(*reinterpret_cast<GUID const*>(&phoneLine), *reinterpret_cast<hstring const*>(&phoneNumber), *reinterpret_cast<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const*>(&endPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MakePhoneCallWithVideo(abi_t<GUID> phoneLine, HSTRING phoneNumber) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MakePhoneCallWithVideo(*reinterpret_cast<GUID const*>(&phoneLine), *reinterpret_cast<hstring const*>(&phoneNumber));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MakePhoneCallWithVideoOnAudioEndpoint(abi_t<GUID> phoneLine, HSTRING phoneNumber, abi_t<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint> endPoint) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MakePhoneCallWithVideo(*reinterpret_cast<GUID const*>(&phoneLine), *reinterpret_cast<hstring const*>(&phoneNumber), *reinterpret_cast<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const*>(&endPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SwapPhoneCalls(uint32_t phoneCallIdToHold, uint32_t phoneCallIdOnHold) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SwapPhoneCalls(phoneCallIdToHold, phoneCallIdOnHold);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HoldPhoneCall(uint32_t phoneCallId, bool holdCall) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HoldPhoneCall(phoneCallId, holdCall);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EndPhoneCall(uint32_t phoneCallId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndPhoneCall(phoneCallId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PhoneMute(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhoneMute(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneMute(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhoneMute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PhoneCallAudioEndpoint(abi_t<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhoneCallAudioEndpoint(*reinterpret_cast<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneCallAudioEndpoint(abi_t<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhoneCallAudioEndpoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SnoozeAlarm(abi_t<GUID> alarmId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SnoozeAlarm(*reinterpret_cast<GUID const*>(&alarmId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SnoozeAlarmForSpecifiedTime(abi_t<GUID> alarmId, abi_t<Windows::Foundation::TimeSpan> timeSpan) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SnoozeAlarm(*reinterpret_cast<GUID const*>(&alarmId), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeSpan));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DismissAlarm(abi_t<GUID> alarmId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DismissAlarm(*reinterpret_cast<GUID const*>(&alarmId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SnoozeReminder(abi_t<GUID> reminderId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SnoozeReminder(*reinterpret_cast<GUID const*>(&reminderId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SnoozeReminderForSpecifiedTime(abi_t<GUID> reminderId, abi_t<Windows::Foundation::TimeSpan> timeSpan) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SnoozeReminder(*reinterpret_cast<GUID const*>(&reminderId), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeSpan));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DismissReminder(abi_t<GUID> reminderId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DismissReminder(*reinterpret_cast<GUID const*>(&reminderId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMediaMetadata(::IUnknown** ppMetadata) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppMetadata = detach_abi(this->shim().GetMediaMetadata());
            return S_OK;
        }
        catch (...)
        {
            *ppMetadata = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaPlaybackCapabilities(abi_t<Windows::Phone::Notification::Management::PlaybackCapability>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaPlaybackCapabilities());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaPlaybackStatus(abi_t<Windows::Phone::Notification::Management::PlaybackStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaPlaybackStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PerformMediaPlaybackCommand(abi_t<Windows::Phone::Notification::Management::PlaybackCommand> command) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PerformMediaPlaybackCommand(*reinterpret_cast<Windows::Phone::Notification::Management::PlaybackCommand const*>(&command));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DoNotDisturbEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DoNotDisturbEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DrivingModeEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DrivingModeEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BatterySaverState(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BatterySaverState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetApps(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetApps());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnableNotificationsForApplication(HSTRING appId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableNotificationsForApplication(*reinterpret_cast<hstring const*>(&appId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DisableNotificationsForApplication(HSTRING appId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableNotificationsForApplication(*reinterpret_cast<hstring const*>(&appId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsNotificationEnabledForApplication(HSTRING appId, bool* enabled) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *enabled = detach_abi(this->shim().IsNotificationEnabledForApplication(*reinterpret_cast<hstring const*>(&appId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetEnabledAccessoryNotificationTypes(int32_t* enabledAccessoryNotificationTypes) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *enabledAccessoryNotificationTypes = detach_abi(this->shim().GetEnabledAccessoryNotificationTypes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnableAccessoryNotificationTypes(int32_t accessoryNotificationTypes) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableAccessoryNotificationTypes(accessoryNotificationTypes);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DisableAllAccessoryNotificationTypes() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableAllAccessoryNotificationTypes();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUserConsent(bool* enabled) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *enabled = detach_abi(this->shim().GetUserConsent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAppIcon(HSTRING appId, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetAppIcon(*reinterpret_cast<hstring const*>(&appId)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IAccessoryManager2> : produce_base<D, Windows::Phone::Notification::Management::IAccessoryManager2>
{
    HRESULT __stdcall RingDevice() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RingDevice();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpeedDialList(::IUnknown** ppvalue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppvalue = detach_abi(this->shim().SpeedDialList());
            return S_OK;
        }
        catch (...)
        {
            *ppvalue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearToast(HSTRING instanceId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearToast(*reinterpret_cast<hstring const*>(&instanceId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPhonePinLocked(bool* pinLocked) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pinLocked = detach_abi(this->shim().IsPhonePinLocked());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IncreaseVolume(int32_t step) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncreaseVolume(step);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DecreaseVolume(int32_t step) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecreaseVolume(step);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetMute(bool mute) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetMute(mute);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetRingerVibrate(bool ringer, bool vibrate) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRingerVibrate(ringer, vibrate);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VolumeInfo(::IUnknown** ppVolume) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppVolume = detach_abi(this->shim().VolumeInfo());
            return S_OK;
        }
        catch (...)
        {
            *ppVolume = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAllEmailAccounts(::IUnknown** emailAccounts) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *emailAccounts = detach_abi(this->shim().GetAllEmailAccounts());
            return S_OK;
        }
        catch (...)
        {
            *emailAccounts = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFolders(HSTRING emailAccount, ::IUnknown** folders) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *folders = detach_abi(this->shim().GetFolders(*reinterpret_cast<hstring const*>(&emailAccount)));
            return S_OK;
        }
        catch (...)
        {
            *folders = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnableEmailNotificationEmailAccount(HSTRING emailAccount) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableEmailNotificationEmailAccount(*reinterpret_cast<hstring const*>(&emailAccount));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DisableEmailNotificationEmailAccount(HSTRING emailAccount) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableEmailNotificationEmailAccount(*reinterpret_cast<hstring const*>(&emailAccount));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnableEmailNotificationFolderFilter(HSTRING emailAccount, ::IUnknown* folders) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableEmailNotificationFolderFilter(*reinterpret_cast<hstring const*>(&emailAccount), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&folders));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateEmailReadStatus(::IUnknown* messageEntryId, bool isRead) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateEmailReadStatus(*reinterpret_cast<Windows::Phone::Notification::Management::BinaryId const*>(&messageEntryId), isRead);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IAccessoryManager3> : produce_base<D, Windows::Phone::Notification::Management::IAccessoryManager3>
{
    HRESULT __stdcall SnoozeAlarmByInstanceId(HSTRING instanceId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SnoozeAlarmByInstanceId(*reinterpret_cast<hstring const*>(&instanceId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DismissAlarmByInstanceId(HSTRING instanceId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DismissAlarmByInstanceId(*reinterpret_cast<hstring const*>(&instanceId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SnoozeReminderByInstanceId(HSTRING instanceId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SnoozeReminderByInstanceId(*reinterpret_cast<hstring const*>(&instanceId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DismissReminderByInstanceId(HSTRING instanceId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DismissReminderByInstanceId(*reinterpret_cast<hstring const*>(&instanceId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails> : produce_base<D, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    HRESULT __stdcall get_TimeCreated(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeCreated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppDisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessoryNotificationType(abi_t<Windows::Phone::Notification::Management::AccessoryNotificationType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccessoryNotificationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartedProcessing(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartedProcessing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartedProcessing(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartedProcessing(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails> : produce_base<D, Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails>
{
    HRESULT __stdcall get_AlarmId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlarmId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReminderState(abi_t<Windows::Phone::Notification::Management::ReminderState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReminderState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails2> : produce_base<D, Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails2>
{
    HRESULT __stdcall get_InstanceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstanceId());
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
struct produce<D, Windows::Phone::Notification::Management::IAppNotificationInfo> : produce_base<D, Windows::Phone::Notification::Management::IAppNotificationInfo>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
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
struct produce<D, Windows::Phone::Notification::Management::IBinaryId> : produce_base<D, Windows::Phone::Notification::Management::IBinaryId>
{
    HRESULT __stdcall get_Id(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails> : produce_base<D, Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails>
{
    HRESULT __stdcall get_EventType(abi_t<Windows::Phone::Notification::Management::CalendarChangedEvent>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EventType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemId());
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
struct produce<D, Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails> : produce_base<D, Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails>
{
    HRESULT __stdcall get_TileId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TileId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Content(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LargeContent1(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LargeContent1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LargeContent2(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LargeContent2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmphasizedText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmphasizedText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NonWrappedSmallContent1(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NonWrappedSmallContent1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NonWrappedSmallContent2(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NonWrappedSmallContent2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NonWrappedSmallContent3(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NonWrappedSmallContent3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NonWrappedSmallContent4(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NonWrappedSmallContent4());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
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
struct produce<D, Windows::Phone::Notification::Management::IEmailAccountInfo> : produce_base<D, Windows::Phone::Notification::Management::IEmailAccountInfo>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNotificationEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsNotificationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IEmailFolderInfo> : produce_base<D, Windows::Phone::Notification::Management::IEmailFolderInfo>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNotificationEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsNotificationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails> : produce_base<D, Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails>
{
    HRESULT __stdcall get_AccountName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccountName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentFolderName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ParentFolderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SenderName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SenderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SenderAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SenderAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails2> : produce_base<D, Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails2>
{
    HRESULT __stdcall get_MessageEntryId(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageEntryId());
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
struct produce<D, Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails> : produce_base<D, Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails>
{
    HRESULT __stdcall get_AccountName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccountName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentFolderName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ParentFolderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageEntryId(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageEntryId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRead(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRead());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IMediaControlsTriggerDetails> : produce_base<D, Windows::Phone::Notification::Management::IMediaControlsTriggerDetails>
{
    HRESULT __stdcall get_PlaybackStatus(abi_t<Windows::Phone::Notification::Management::PlaybackStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PlaybackStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaMetadata(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaMetadata());
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
struct produce<D, Windows::Phone::Notification::Management::IMediaMetadata> : produce_base<D, Windows::Phone::Notification::Management::IMediaMetadata>
{
    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subtitle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Subtitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Artist(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Artist());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Album(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Album());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Track(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Track());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thumbnail());
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
struct produce<D, Windows::Phone::Notification::Management::IPhoneCallDetails> : produce_base<D, Windows::Phone::Notification::Management::IPhoneCallDetails>
{
    HRESULT __stdcall get_PhoneLine(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhoneLine());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CallId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallTransport(abi_t<Windows::Phone::Notification::Management::PhoneCallTransport>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CallTransport());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallMediaType(abi_t<Windows::Phone::Notification::Management::PhoneMediaType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CallMediaType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallDirection(abi_t<Windows::Phone::Notification::Management::PhoneCallDirection>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CallDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(abi_t<Windows::Phone::Notification::Management::PhoneCallState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConferenceCallId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConferenceCallId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContactName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PresetTextResponses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PresetTextResponses());
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
struct produce<D, Windows::Phone::Notification::Management::IPhoneLineDetails> : produce_base<D, Windows::Phone::Notification::Management::IPhoneLineDetails>
{
    HRESULT __stdcall get_LineId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultOutgoingLine(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultOutgoingLine());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VoicemailCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VoicemailCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegistrationState(abi_t<Windows::Phone::Notification::Management::PhoneLineRegistrationState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RegistrationState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IPhoneLineDetails2> : produce_base<D, Windows::Phone::Notification::Management::IPhoneLineDetails2>
{
    HRESULT __stdcall get_MissedCallCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MissedCallCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails> : produce_base<D, Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails>
{
    HRESULT __stdcall get_PhoneNotificationType(abi_t<Windows::Phone::Notification::Management::PhoneNotificationType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhoneNotificationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallDetails(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CallDetails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneLineChangedId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhoneLineChangedId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails> : produce_base<D, Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails>
{
    HRESULT __stdcall get_ReminderId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReminderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Details(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Details());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Appointment(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Appointment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReminderState(abi_t<Windows::Phone::Notification::Management::ReminderState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReminderState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails2> : produce_base<D, Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails2>
{
    HRESULT __stdcall get_InstanceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstanceId());
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
struct produce<D, Windows::Phone::Notification::Management::ISpeedDialEntry> : produce_base<D, Windows::Phone::Notification::Management::ISpeedDialEntry>
{
    HRESULT __stdcall get_PhoneNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumberType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContactName());
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
struct produce<D, Windows::Phone::Notification::Management::ITextResponse> : produce_base<D, Windows::Phone::Notification::Management::ITextResponse>
{
    HRESULT __stdcall get_Id(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Content(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Content());
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
struct produce<D, Windows::Phone::Notification::Management::IToastNotificationTriggerDetails> : produce_base<D, Windows::Phone::Notification::Management::IToastNotificationTriggerDetails>
{
    HRESULT __stdcall get_Text1(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text2(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text3(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text4(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text4());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuppressPopup(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuppressPopup());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IToastNotificationTriggerDetails2> : produce_base<D, Windows::Phone::Notification::Management::IToastNotificationTriggerDetails2>
{
    HRESULT __stdcall get_InstanceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstanceId());
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
struct produce<D, Windows::Phone::Notification::Management::IVolumeInfo> : produce_base<D, Windows::Phone::Notification::Management::IVolumeInfo>
{
    HRESULT __stdcall get_SystemVolume(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemVolume());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallVolume(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CallVolume());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaVolume(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaVolume());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMuted(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMuted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsVibrateEnabled(abi_t<Windows::Phone::Notification::Management::VibrateState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsVibrateEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Phone::Notification::Management {

inline hstring AccessoryManager::RegisterAccessoryApp()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().RegisterAccessoryApp();
}

inline Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails AccessoryManager::GetNextTriggerDetails()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().GetNextTriggerDetails();
}

inline void AccessoryManager::ProcessTriggerDetails(Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails const& pDetails)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().ProcessTriggerDetails(pDetails);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::PhoneLineDetails> AccessoryManager::PhoneLineDetails()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().PhoneLineDetails();
}

inline Windows::Phone::Notification::Management::PhoneLineDetails AccessoryManager::GetPhoneLineDetails(GUID const& phoneLine)
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().GetPhoneLineDetails(phoneLine);
}

inline void AccessoryManager::AcceptPhoneCall(uint32_t phoneCallId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().AcceptPhoneCall(phoneCallId);
}

inline void AccessoryManager::AcceptPhoneCall(uint32_t phoneCallId, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& endPoint)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().AcceptPhoneCall(phoneCallId, endPoint);
}

inline void AccessoryManager::AcceptPhoneCallWithVideo(uint32_t phoneCallId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().AcceptPhoneCallWithVideo(phoneCallId);
}

inline void AccessoryManager::AcceptPhoneCallWithVideo(uint32_t phoneCallId, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& endPoint)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().AcceptPhoneCallWithVideo(phoneCallId, endPoint);
}

inline void AccessoryManager::RejectPhoneCall(uint32_t phoneCallId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().RejectPhoneCall(phoneCallId);
}

inline void AccessoryManager::RejectPhoneCall(uint32_t phoneCallId, uint32_t textResponseID)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().RejectPhoneCall(phoneCallId, textResponseID);
}

inline void AccessoryManager::MakePhoneCall(GUID const& phoneLine, param::hstring const& phoneNumber)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().MakePhoneCall(phoneLine, phoneNumber);
}

inline void AccessoryManager::MakePhoneCall(GUID const& phoneLine, param::hstring const& phoneNumber, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& endPoint)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().MakePhoneCall(phoneLine, phoneNumber, endPoint);
}

inline void AccessoryManager::MakePhoneCallWithVideo(GUID const& phoneLine, param::hstring const& phoneNumber)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().MakePhoneCallWithVideo(phoneLine, phoneNumber);
}

inline void AccessoryManager::MakePhoneCallWithVideo(GUID const& phoneLine, param::hstring const& phoneNumber, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& endPoint)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().MakePhoneCallWithVideo(phoneLine, phoneNumber, endPoint);
}

inline void AccessoryManager::SwapPhoneCalls(uint32_t phoneCallIdToHold, uint32_t phoneCallIdOnHold)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().SwapPhoneCalls(phoneCallIdToHold, phoneCallIdOnHold);
}

inline void AccessoryManager::HoldPhoneCall(uint32_t phoneCallId, bool holdCall)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().HoldPhoneCall(phoneCallId, holdCall);
}

inline void AccessoryManager::EndPhoneCall(uint32_t phoneCallId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().EndPhoneCall(phoneCallId);
}

inline void AccessoryManager::PhoneMute(bool value)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().PhoneMute(value);
}

inline bool AccessoryManager::PhoneMute()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().PhoneMute();
}

inline void AccessoryManager::PhoneCallAudioEndpoint(Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& value)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().PhoneCallAudioEndpoint(value);
}

inline Windows::Phone::Notification::Management::PhoneCallAudioEndpoint AccessoryManager::PhoneCallAudioEndpoint()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().PhoneCallAudioEndpoint();
}

inline void AccessoryManager::SnoozeAlarm(GUID const& alarmId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().SnoozeAlarm(alarmId);
}

inline void AccessoryManager::SnoozeAlarm(GUID const& alarmId, Windows::Foundation::TimeSpan const& timeSpan)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().SnoozeAlarm(alarmId, timeSpan);
}

inline void AccessoryManager::DismissAlarm(GUID const& alarmId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().DismissAlarm(alarmId);
}

inline void AccessoryManager::SnoozeReminder(GUID const& reminderId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().SnoozeReminder(reminderId);
}

inline void AccessoryManager::SnoozeReminder(GUID const& reminderId, Windows::Foundation::TimeSpan const& timeSpan)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().SnoozeReminder(reminderId, timeSpan);
}

inline void AccessoryManager::DismissReminder(GUID const& reminderId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().DismissReminder(reminderId);
}

inline Windows::Phone::Notification::Management::MediaMetadata AccessoryManager::GetMediaMetadata()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().GetMediaMetadata();
}

inline Windows::Phone::Notification::Management::PlaybackCapability AccessoryManager::MediaPlaybackCapabilities()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().MediaPlaybackCapabilities();
}

inline Windows::Phone::Notification::Management::PlaybackStatus AccessoryManager::MediaPlaybackStatus()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().MediaPlaybackStatus();
}

inline void AccessoryManager::PerformMediaPlaybackCommand(Windows::Phone::Notification::Management::PlaybackCommand const& command)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().PerformMediaPlaybackCommand(command);
}

inline bool AccessoryManager::DoNotDisturbEnabled()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().DoNotDisturbEnabled();
}

inline bool AccessoryManager::DrivingModeEnabled()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().DrivingModeEnabled();
}

inline bool AccessoryManager::BatterySaverState()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().BatterySaverState();
}

inline Windows::Foundation::Collections::IMapView<hstring, Windows::Phone::Notification::Management::AppNotificationInfo> AccessoryManager::GetApps()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().GetApps();
}

inline void AccessoryManager::EnableNotificationsForApplication(param::hstring const& appId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().EnableNotificationsForApplication(appId);
}

inline void AccessoryManager::DisableNotificationsForApplication(param::hstring const& appId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().DisableNotificationsForApplication(appId);
}

inline bool AccessoryManager::IsNotificationEnabledForApplication(param::hstring const& appId)
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().IsNotificationEnabledForApplication(appId);
}

inline int32_t AccessoryManager::GetEnabledAccessoryNotificationTypes()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().GetEnabledAccessoryNotificationTypes();
}

inline void AccessoryManager::EnableAccessoryNotificationTypes(int32_t accessoryNotificationTypes)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().EnableAccessoryNotificationTypes(accessoryNotificationTypes);
}

inline void AccessoryManager::DisableAllAccessoryNotificationTypes()
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().DisableAllAccessoryNotificationTypes();
}

inline bool AccessoryManager::GetUserConsent()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().GetUserConsent();
}

inline Windows::Storage::Streams::IRandomAccessStreamReference AccessoryManager::GetAppIcon(param::hstring const& appId)
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager>().GetAppIcon(appId);
}

inline void AccessoryManager::RingDevice()
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().RingDevice();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::SpeedDialEntry> AccessoryManager::SpeedDialList()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().SpeedDialList();
}

inline void AccessoryManager::ClearToast(param::hstring const& instanceId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().ClearToast(instanceId);
}

inline bool AccessoryManager::IsPhonePinLocked()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().IsPhonePinLocked();
}

inline void AccessoryManager::IncreaseVolume(int32_t step)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().IncreaseVolume(step);
}

inline void AccessoryManager::DecreaseVolume(int32_t step)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().DecreaseVolume(step);
}

inline void AccessoryManager::SetMute(bool mute)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().SetMute(mute);
}

inline void AccessoryManager::SetRingerVibrate(bool ringer, bool vibrate)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().SetRingerVibrate(ringer, vibrate);
}

inline Windows::Phone::Notification::Management::VolumeInfo AccessoryManager::VolumeInfo()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().VolumeInfo();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailAccountInfo> AccessoryManager::GetAllEmailAccounts()
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().GetAllEmailAccounts();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailFolderInfo> AccessoryManager::GetFolders(param::hstring const& emailAccount)
{
    return get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().GetFolders(emailAccount);
}

inline void AccessoryManager::EnableEmailNotificationEmailAccount(param::hstring const& emailAccount)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().EnableEmailNotificationEmailAccount(emailAccount);
}

inline void AccessoryManager::DisableEmailNotificationEmailAccount(param::hstring const& emailAccount)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().DisableEmailNotificationEmailAccount(emailAccount);
}

inline void AccessoryManager::EnableEmailNotificationFolderFilter(param::hstring const& emailAccount, param::vector_view<hstring> const& folders)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().EnableEmailNotificationFolderFilter(emailAccount, folders);
}

inline void AccessoryManager::UpdateEmailReadStatus(Windows::Phone::Notification::Management::BinaryId const& messageEntryId, bool isRead)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager2>().UpdateEmailReadStatus(messageEntryId, isRead);
}

inline void AccessoryManager::SnoozeAlarmByInstanceId(param::hstring const& instanceId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager3>().SnoozeAlarmByInstanceId(instanceId);
}

inline void AccessoryManager::DismissAlarmByInstanceId(param::hstring const& instanceId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager3>().DismissAlarmByInstanceId(instanceId);
}

inline void AccessoryManager::SnoozeReminderByInstanceId(param::hstring const& instanceId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager3>().SnoozeReminderByInstanceId(instanceId);
}

inline void AccessoryManager::DismissReminderByInstanceId(param::hstring const& instanceId)
{
    get_activation_factory<AccessoryManager, Windows::Phone::Notification::Management::IAccessoryManager3>().DismissReminderByInstanceId(instanceId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Phone::Notification::Management::IAccessoryManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IAccessoryManager> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IAccessoryManager2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IAccessoryManager2> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IAccessoryManager3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IAccessoryManager3> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails2> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IAppNotificationInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IAppNotificationInfo> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IBinaryId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IBinaryId> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IEmailAccountInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IEmailAccountInfo> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IEmailFolderInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IEmailFolderInfo> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails2> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IMediaControlsTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IMediaControlsTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IMediaMetadata> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IMediaMetadata> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IPhoneCallDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IPhoneCallDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IPhoneLineDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IPhoneLineDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IPhoneLineDetails2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IPhoneLineDetails2> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails2> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::ISpeedDialEntry> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::ISpeedDialEntry> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::ITextResponse> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::ITextResponse> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IToastNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IToastNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IToastNotificationTriggerDetails2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IToastNotificationTriggerDetails2> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::IVolumeInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::IVolumeInfo> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::AccessoryManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::AccessoryManager> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::AlarmNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::AlarmNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::AppNotificationInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::AppNotificationInfo> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::BinaryId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::BinaryId> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::CalendarChangedNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::CalendarChangedNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::CortanaTileNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::CortanaTileNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::EmailAccountInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::EmailAccountInfo> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::EmailFolderInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::EmailFolderInfo> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::EmailNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::EmailNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::EmailReadNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::EmailReadNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::MediaControlsTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::MediaControlsTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::MediaMetadata> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::MediaMetadata> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::PhoneCallDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::PhoneCallDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::PhoneLineDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::PhoneLineDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::PhoneNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::PhoneNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::ReminderNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::ReminderNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::SpeedDialEntry> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::SpeedDialEntry> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::TextResponse> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::TextResponse> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::ToastNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::ToastNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Phone::Notification::Management::VolumeInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Notification::Management::VolumeInfo> {};

}

WINRT_WARNING_POP
