// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.Email.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.ApplicationModel.Appointments.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Phone.Notification.Management.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Phone::Notification::Management::IAccessoryManager> : produce_base<D, Windows::Phone::Notification::Management::IAccessoryManager>
{
    HRESULT __stdcall abi_RegisterAccessoryApp(abi_arg_out<hstring> triggerId) noexcept override
    {
        try
        {
            *triggerId = detach(this->shim().RegisterAccessoryApp());
            return S_OK;
        }
        catch (...)
        {
            *triggerId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNextTriggerDetails(abi_arg_out<Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails> pDetails) noexcept override
    {
        try
        {
            *pDetails = detach(this->shim().GetNextTriggerDetails());
            return S_OK;
        }
        catch (...)
        {
            *pDetails = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProcessTriggerDetails(abi_arg_in<Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails> pDetails) noexcept override
    {
        try
        {
            this->shim().ProcessTriggerDetails(*reinterpret_cast<const Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails *>(&pDetails));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneLineDetails(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::PhoneLineDetails>> ppvalue) noexcept override
    {
        try
        {
            *ppvalue = detach(this->shim().PhoneLineDetails());
            return S_OK;
        }
        catch (...)
        {
            *ppvalue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPhoneLineDetails(GUID phoneLine, abi_arg_out<Windows::Phone::Notification::Management::IPhoneLineDetails> ppdetails) noexcept override
    {
        try
        {
            *ppdetails = detach(this->shim().GetPhoneLineDetails(phoneLine));
            return S_OK;
        }
        catch (...)
        {
            *ppdetails = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcceptPhoneCall(uint32_t phoneCallId) noexcept override
    {
        try
        {
            this->shim().AcceptPhoneCall(phoneCallId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcceptPhoneCallOnEndpoint(uint32_t phoneCallId, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint) noexcept override
    {
        try
        {
            this->shim().AcceptPhoneCall(phoneCallId, endPoint);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcceptPhoneCallWithVideo(uint32_t phoneCallId) noexcept override
    {
        try
        {
            this->shim().AcceptPhoneCallWithVideo(phoneCallId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcceptPhoneCallWithVideoOnAudioEndpoint(uint32_t phoneCallId, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint) noexcept override
    {
        try
        {
            this->shim().AcceptPhoneCallWithVideo(phoneCallId, endPoint);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RejectPhoneCall(uint32_t phoneCallId) noexcept override
    {
        try
        {
            this->shim().RejectPhoneCall(phoneCallId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RejectPhoneCallWithText(uint32_t phoneCallId, uint32_t textResponseID) noexcept override
    {
        try
        {
            this->shim().RejectPhoneCall(phoneCallId, textResponseID);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MakePhoneCall(GUID phoneLine, abi_arg_in<hstring> phoneNumber) noexcept override
    {
        try
        {
            this->shim().MakePhoneCall(phoneLine, *reinterpret_cast<const hstring *>(&phoneNumber));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MakePhoneCallOnAudioEndpoint(GUID phoneLine, abi_arg_in<hstring> phoneNumber, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint) noexcept override
    {
        try
        {
            this->shim().MakePhoneCall(phoneLine, *reinterpret_cast<const hstring *>(&phoneNumber), endPoint);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MakePhoneCallWithVideo(GUID phoneLine, abi_arg_in<hstring> phoneNumber) noexcept override
    {
        try
        {
            this->shim().MakePhoneCallWithVideo(phoneLine, *reinterpret_cast<const hstring *>(&phoneNumber));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MakePhoneCallWithVideoOnAudioEndpoint(GUID phoneLine, abi_arg_in<hstring> phoneNumber, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint) noexcept override
    {
        try
        {
            this->shim().MakePhoneCallWithVideo(phoneLine, *reinterpret_cast<const hstring *>(&phoneNumber), endPoint);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SwapPhoneCalls(uint32_t phoneCallIdToHold, uint32_t phoneCallIdOnHold) noexcept override
    {
        try
        {
            this->shim().SwapPhoneCalls(phoneCallIdToHold, phoneCallIdOnHold);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_HoldPhoneCall(uint32_t phoneCallId, bool holdCall) noexcept override
    {
        try
        {
            this->shim().HoldPhoneCall(phoneCallId, holdCall);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EndPhoneCall(uint32_t phoneCallId) noexcept override
    {
        try
        {
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
            this->shim().PhoneMute(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneMute(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhoneMute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PhoneCallAudioEndpoint(Windows::Phone::Notification::Management::PhoneCallAudioEndpoint value) noexcept override
    {
        try
        {
            this->shim().PhoneCallAudioEndpoint(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneCallAudioEndpoint(Windows::Phone::Notification::Management::PhoneCallAudioEndpoint * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhoneCallAudioEndpoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SnoozeAlarm(GUID alarmId) noexcept override
    {
        try
        {
            this->shim().SnoozeAlarm(alarmId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SnoozeAlarmForSpecifiedTime(GUID alarmId, abi_arg_in<Windows::Foundation::TimeSpan> timeSpan) noexcept override
    {
        try
        {
            this->shim().SnoozeAlarm(alarmId, *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&timeSpan));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DismissAlarm(GUID alarmId) noexcept override
    {
        try
        {
            this->shim().DismissAlarm(alarmId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SnoozeReminder(GUID reminderId) noexcept override
    {
        try
        {
            this->shim().SnoozeReminder(reminderId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SnoozeReminderForSpecifiedTime(GUID reminderId, abi_arg_in<Windows::Foundation::TimeSpan> timeSpan) noexcept override
    {
        try
        {
            this->shim().SnoozeReminder(reminderId, *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&timeSpan));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DismissReminder(GUID reminderId) noexcept override
    {
        try
        {
            this->shim().DismissReminder(reminderId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMediaMetadata(abi_arg_out<Windows::Phone::Notification::Management::IMediaMetadata> ppMetadata) noexcept override
    {
        try
        {
            *ppMetadata = detach(this->shim().GetMediaMetadata());
            return S_OK;
        }
        catch (...)
        {
            *ppMetadata = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaPlaybackCapabilities(Windows::Phone::Notification::Management::PlaybackCapability * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaPlaybackCapabilities());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaPlaybackStatus(Windows::Phone::Notification::Management::PlaybackStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaPlaybackStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PerformMediaPlaybackCommand(Windows::Phone::Notification::Management::PlaybackCommand command) noexcept override
    {
        try
        {
            this->shim().PerformMediaPlaybackCommand(command);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DoNotDisturbEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DoNotDisturbEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DrivingModeEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DrivingModeEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BatterySaverState(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BatterySaverState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetApps(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Phone::Notification::Management::AppNotificationInfo>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetApps());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableNotificationsForApplication(abi_arg_in<hstring> appId) noexcept override
    {
        try
        {
            this->shim().EnableNotificationsForApplication(*reinterpret_cast<const hstring *>(&appId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DisableNotificationsForApplication(abi_arg_in<hstring> appId) noexcept override
    {
        try
        {
            this->shim().DisableNotificationsForApplication(*reinterpret_cast<const hstring *>(&appId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsNotificationEnabledForApplication(abi_arg_in<hstring> appId, bool * enabled) noexcept override
    {
        try
        {
            *enabled = detach(this->shim().IsNotificationEnabledForApplication(*reinterpret_cast<const hstring *>(&appId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetEnabledAccessoryNotificationTypes(int32_t * enabledAccessoryNotificationTypes) noexcept override
    {
        try
        {
            *enabledAccessoryNotificationTypes = detach(this->shim().GetEnabledAccessoryNotificationTypes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableAccessoryNotificationTypes(int32_t accessoryNotificationTypes) noexcept override
    {
        try
        {
            this->shim().EnableAccessoryNotificationTypes(accessoryNotificationTypes);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DisableAllAccessoryNotificationTypes() noexcept override
    {
        try
        {
            this->shim().DisableAllAccessoryNotificationTypes();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUserConsent(bool * enabled) noexcept override
    {
        try
        {
            *enabled = detach(this->shim().GetUserConsent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAppIcon(abi_arg_in<hstring> appId, abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetAppIcon(*reinterpret_cast<const hstring *>(&appId)));
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
    HRESULT __stdcall abi_RingDevice() noexcept override
    {
        try
        {
            this->shim().RingDevice();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpeedDialList(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::SpeedDialEntry>> ppvalue) noexcept override
    {
        try
        {
            *ppvalue = detach(this->shim().SpeedDialList());
            return S_OK;
        }
        catch (...)
        {
            *ppvalue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearToast(abi_arg_in<hstring> instanceId) noexcept override
    {
        try
        {
            this->shim().ClearToast(*reinterpret_cast<const hstring *>(&instanceId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPhonePinLocked(bool * pinLocked) noexcept override
    {
        try
        {
            *pinLocked = detach(this->shim().IsPhonePinLocked());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IncreaseVolume(int32_t step) noexcept override
    {
        try
        {
            this->shim().IncreaseVolume(step);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DecreaseVolume(int32_t step) noexcept override
    {
        try
        {
            this->shim().DecreaseVolume(step);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetMute(bool mute) noexcept override
    {
        try
        {
            this->shim().SetMute(mute);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetRingerVibrate(bool ringer, bool vibrate) noexcept override
    {
        try
        {
            this->shim().SetRingerVibrate(ringer, vibrate);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VolumeInfo(abi_arg_out<Windows::Phone::Notification::Management::IVolumeInfo> ppVolume) noexcept override
    {
        try
        {
            *ppVolume = detach(this->shim().VolumeInfo());
            return S_OK;
        }
        catch (...)
        {
            *ppVolume = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAllEmailAccounts(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailAccountInfo>> emailAccounts) noexcept override
    {
        try
        {
            *emailAccounts = detach(this->shim().GetAllEmailAccounts());
            return S_OK;
        }
        catch (...)
        {
            *emailAccounts = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFolders(abi_arg_in<hstring> emailAccount, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailFolderInfo>> folders) noexcept override
    {
        try
        {
            *folders = detach(this->shim().GetFolders(*reinterpret_cast<const hstring *>(&emailAccount)));
            return S_OK;
        }
        catch (...)
        {
            *folders = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableEmailNotificationEmailAccount(abi_arg_in<hstring> emailAccount) noexcept override
    {
        try
        {
            this->shim().EnableEmailNotificationEmailAccount(*reinterpret_cast<const hstring *>(&emailAccount));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DisableEmailNotificationEmailAccount(abi_arg_in<hstring> emailAccount) noexcept override
    {
        try
        {
            this->shim().DisableEmailNotificationEmailAccount(*reinterpret_cast<const hstring *>(&emailAccount));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableEmailNotificationFolderFilter(abi_arg_in<hstring> emailAccount, abi_arg_in<Windows::Foundation::Collections::IVectorView<hstring>> folders) noexcept override
    {
        try
        {
            this->shim().EnableEmailNotificationFolderFilter(*reinterpret_cast<const hstring *>(&emailAccount), *reinterpret_cast<const Windows::Foundation::Collections::IVectorView<hstring> *>(&folders));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateEmailReadStatus(abi_arg_in<Windows::Phone::Notification::Management::IBinaryId> messageEntryId, bool isRead) noexcept override
    {
        try
        {
            this->shim().UpdateEmailReadStatus(*reinterpret_cast<const Windows::Phone::Notification::Management::BinaryId *>(&messageEntryId), isRead);
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
    HRESULT __stdcall abi_SnoozeAlarmByInstanceId(abi_arg_in<hstring> instanceId) noexcept override
    {
        try
        {
            this->shim().SnoozeAlarmByInstanceId(*reinterpret_cast<const hstring *>(&instanceId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DismissAlarmByInstanceId(abi_arg_in<hstring> instanceId) noexcept override
    {
        try
        {
            this->shim().DismissAlarmByInstanceId(*reinterpret_cast<const hstring *>(&instanceId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SnoozeReminderByInstanceId(abi_arg_in<hstring> instanceId) noexcept override
    {
        try
        {
            this->shim().SnoozeReminderByInstanceId(*reinterpret_cast<const hstring *>(&instanceId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DismissReminderByInstanceId(abi_arg_in<hstring> instanceId) noexcept override
    {
        try
        {
            this->shim().DismissReminderByInstanceId(*reinterpret_cast<const hstring *>(&instanceId));
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
    HRESULT __stdcall get_TimeCreated(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimeCreated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppDisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessoryNotificationType(Windows::Phone::Notification::Management::AccessoryNotificationType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccessoryNotificationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartedProcessing(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartedProcessing());
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
    HRESULT __stdcall get_AlarmId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlarmId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReminderState(Windows::Phone::Notification::Management::ReminderState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReminderState());
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
    HRESULT __stdcall get_InstanceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InstanceId());
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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
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
    HRESULT __stdcall get_Id(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Length());
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
    HRESULT __stdcall get_EventType(Windows::Phone::Notification::Management::CalendarChangedEvent * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EventType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemId());
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
    HRESULT __stdcall get_TileId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TileId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Content(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LargeContent1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LargeContent1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LargeContent2(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LargeContent2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmphasizedText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EmphasizedText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NonWrappedSmallContent1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NonWrappedSmallContent1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NonWrappedSmallContent2(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NonWrappedSmallContent2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NonWrappedSmallContent3(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NonWrappedSmallContent3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NonWrappedSmallContent4(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NonWrappedSmallContent4());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
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
    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNotificationEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsNotificationEnabled());
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
    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNotificationEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsNotificationEnabled());
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
    HRESULT __stdcall get_AccountName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccountName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentFolderName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ParentFolderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SenderName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SenderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SenderAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SenderAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMessage(abi_arg_out<Windows::ApplicationModel::Email::IEmailMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EmailMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamp());
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
    HRESULT __stdcall get_MessageEntryId(abi_arg_out<Windows::Phone::Notification::Management::IBinaryId> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MessageEntryId());
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
    HRESULT __stdcall get_AccountName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccountName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentFolderName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ParentFolderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageEntryId(abi_arg_out<Windows::Phone::Notification::Management::IBinaryId> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MessageEntryId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRead(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRead());
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
    HRESULT __stdcall get_PlaybackStatus(Windows::Phone::Notification::Management::PlaybackStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaybackStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaMetadata(abi_arg_out<Windows::Phone::Notification::Management::IMediaMetadata> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaMetadata());
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
    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subtitle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Subtitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Artist(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Artist());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Album(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Album());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Track(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Track());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Thumbnail());
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
    HRESULT __stdcall get_PhoneLine(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhoneLine());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CallId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallTransport(Windows::Phone::Notification::Management::PhoneCallTransport * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CallTransport());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallMediaType(Windows::Phone::Notification::Management::PhoneMediaType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CallMediaType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallDirection(Windows::Phone::Notification::Management::PhoneCallDirection * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CallDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Phone::Notification::Management::PhoneCallState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConferenceCallId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConferenceCallId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContactName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PresetTextResponses(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::TextResponse>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PresetTextResponses());
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
    HRESULT __stdcall get_LineId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LineId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LineNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultOutgoingLine(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultOutgoingLine());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VoicemailCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VoicemailCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegistrationState(Windows::Phone::Notification::Management::PhoneLineRegistrationState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RegistrationState());
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
    HRESULT __stdcall get_MissedCallCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MissedCallCount());
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
    HRESULT __stdcall get_PhoneNotificationType(Windows::Phone::Notification::Management::PhoneNotificationType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhoneNotificationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallDetails(abi_arg_out<Windows::Phone::Notification::Management::IPhoneCallDetails> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CallDetails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneLineChangedId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhoneLineChangedId());
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
    HRESULT __stdcall get_ReminderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReminderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Details(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Details());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Appointment(abi_arg_out<Windows::ApplicationModel::Appointments::IAppointment> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Appointment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReminderState(Windows::Phone::Notification::Management::ReminderState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReminderState());
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
    HRESULT __stdcall get_InstanceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InstanceId());
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
    HRESULT __stdcall get_PhoneNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumberType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContactName());
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
    HRESULT __stdcall get_Id(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Content(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
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
    HRESULT __stdcall get_Text1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text2(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text3(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text4(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text4());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuppressPopup(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SuppressPopup());
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
    HRESULT __stdcall get_InstanceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InstanceId());
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
    HRESULT __stdcall get_SystemVolume(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SystemVolume());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallVolume(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CallVolume());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaVolume(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaVolume());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMuted(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsMuted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsVibrateEnabled(Windows::Phone::Notification::Management::VibrateState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsVibrateEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Phone::Notification::Management {

template <typename D> uint32_t impl_ITextResponse<D>::Id() const
{
    uint32_t value {};
    check_hresult(static_cast<const ITextResponse &>(static_cast<const D &>(*this))->get_Id(&value));
    return value;
}

template <typename D> hstring impl_ITextResponse<D>::Content() const
{
    hstring value;
    check_hresult(static_cast<const ITextResponse &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> hstring impl_IAppNotificationInfo<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IAppNotificationInfo &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IAppNotificationInfo<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IAppNotificationInfo &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailAccountInfo<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IEmailAccountInfo &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> bool impl_IEmailAccountInfo<D>::IsNotificationEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IEmailAccountInfo &>(static_cast<const D &>(*this))->get_IsNotificationEnabled(&value));
    return value;
}

template <typename D> hstring impl_IEmailFolderInfo<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IEmailFolderInfo &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> bool impl_IEmailFolderInfo<D>::IsNotificationEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IEmailFolderInfo &>(static_cast<const D &>(*this))->get_IsNotificationEnabled(&value));
    return value;
}

template <typename D> uint8_t impl_IBinaryId<D>::Id() const
{
    uint8_t value {};
    check_hresult(static_cast<const IBinaryId &>(static_cast<const D &>(*this))->get_Id(&value));
    return value;
}

template <typename D> uint32_t impl_IBinaryId<D>::Length() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBinaryId &>(static_cast<const D &>(*this))->get_Length(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IAccessoryNotificationTriggerDetails<D>::TimeCreated() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IAccessoryNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_TimeCreated(put(value)));
    return value;
}

template <typename D> hstring impl_IAccessoryNotificationTriggerDetails<D>::AppDisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IAccessoryNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_AppDisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IAccessoryNotificationTriggerDetails<D>::AppId() const
{
    hstring value;
    check_hresult(static_cast<const IAccessoryNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_AppId(put(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::AccessoryNotificationType impl_IAccessoryNotificationTriggerDetails<D>::AccessoryNotificationType() const
{
    Windows::Phone::Notification::Management::AccessoryNotificationType value {};
    check_hresult(static_cast<const IAccessoryNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_AccessoryNotificationType(&value));
    return value;
}

template <typename D> bool impl_IAccessoryNotificationTriggerDetails<D>::StartedProcessing() const
{
    bool value {};
    check_hresult(static_cast<const IAccessoryNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_StartedProcessing(&value));
    return value;
}

template <typename D> void impl_IAccessoryNotificationTriggerDetails<D>::StartedProcessing(bool value) const
{
    check_hresult(static_cast<const IAccessoryNotificationTriggerDetails &>(static_cast<const D &>(*this))->put_StartedProcessing(value));
}

template <typename D> GUID impl_IAlarmNotificationTriggerDetails<D>::AlarmId() const
{
    GUID value {};
    check_hresult(static_cast<const IAlarmNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_AlarmId(&value));
    return value;
}

template <typename D> hstring impl_IAlarmNotificationTriggerDetails<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IAlarmNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IAlarmNotificationTriggerDetails<D>::Timestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IAlarmNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Timestamp(put(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::ReminderState impl_IAlarmNotificationTriggerDetails<D>::ReminderState() const
{
    Windows::Phone::Notification::Management::ReminderState value {};
    check_hresult(static_cast<const IAlarmNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_ReminderState(&value));
    return value;
}

template <typename D> hstring impl_IAlarmNotificationTriggerDetails2<D>::InstanceId() const
{
    hstring value;
    check_hresult(static_cast<const IAlarmNotificationTriggerDetails2 &>(static_cast<const D &>(*this))->get_InstanceId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailNotificationTriggerDetails<D>::AccountName() const
{
    hstring value;
    check_hresult(static_cast<const IEmailNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_AccountName(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailNotificationTriggerDetails<D>::ParentFolderName() const
{
    hstring value;
    check_hresult(static_cast<const IEmailNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_ParentFolderName(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailNotificationTriggerDetails<D>::SenderName() const
{
    hstring value;
    check_hresult(static_cast<const IEmailNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_SenderName(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailNotificationTriggerDetails<D>::SenderAddress() const
{
    hstring value;
    check_hresult(static_cast<const IEmailNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_SenderAddress(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessage impl_IEmailNotificationTriggerDetails<D>::EmailMessage() const
{
    Windows::ApplicationModel::Email::EmailMessage value { nullptr };
    check_hresult(static_cast<const IEmailNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_EmailMessage(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IEmailNotificationTriggerDetails<D>::Timestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IEmailNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Timestamp(put(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::BinaryId impl_IEmailNotificationTriggerDetails2<D>::MessageEntryId() const
{
    Windows::Phone::Notification::Management::BinaryId value { nullptr };
    check_hresult(static_cast<const IEmailNotificationTriggerDetails2 &>(static_cast<const D &>(*this))->get_MessageEntryId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailReadNotificationTriggerDetails<D>::AccountName() const
{
    hstring value;
    check_hresult(static_cast<const IEmailReadNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_AccountName(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailReadNotificationTriggerDetails<D>::ParentFolderName() const
{
    hstring value;
    check_hresult(static_cast<const IEmailReadNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_ParentFolderName(put(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::BinaryId impl_IEmailReadNotificationTriggerDetails<D>::MessageEntryId() const
{
    Windows::Phone::Notification::Management::BinaryId value { nullptr };
    check_hresult(static_cast<const IEmailReadNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_MessageEntryId(put(value)));
    return value;
}

template <typename D> bool impl_IEmailReadNotificationTriggerDetails<D>::IsRead() const
{
    bool value {};
    check_hresult(static_cast<const IEmailReadNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_IsRead(&value));
    return value;
}

template <typename D> GUID impl_IPhoneLineDetails<D>::LineId() const
{
    GUID value {};
    check_hresult(static_cast<const IPhoneLineDetails &>(static_cast<const D &>(*this))->get_LineId(&value));
    return value;
}

template <typename D> hstring impl_IPhoneLineDetails<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IPhoneLineDetails &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IPhoneLineDetails<D>::LineNumber() const
{
    hstring value;
    check_hresult(static_cast<const IPhoneLineDetails &>(static_cast<const D &>(*this))->get_LineNumber(put(value)));
    return value;
}

template <typename D> bool impl_IPhoneLineDetails<D>::DefaultOutgoingLine() const
{
    bool value {};
    check_hresult(static_cast<const IPhoneLineDetails &>(static_cast<const D &>(*this))->get_DefaultOutgoingLine(&value));
    return value;
}

template <typename D> uint32_t impl_IPhoneLineDetails<D>::VoicemailCount() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPhoneLineDetails &>(static_cast<const D &>(*this))->get_VoicemailCount(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneLineRegistrationState impl_IPhoneLineDetails<D>::RegistrationState() const
{
    Windows::Phone::Notification::Management::PhoneLineRegistrationState value {};
    check_hresult(static_cast<const IPhoneLineDetails &>(static_cast<const D &>(*this))->get_RegistrationState(&value));
    return value;
}

template <typename D> uint32_t impl_IPhoneLineDetails2<D>::MissedCallCount() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPhoneLineDetails2 &>(static_cast<const D &>(*this))->get_MissedCallCount(&value));
    return value;
}

template <typename D> GUID impl_IPhoneCallDetails<D>::PhoneLine() const
{
    GUID value {};
    check_hresult(static_cast<const IPhoneCallDetails &>(static_cast<const D &>(*this))->get_PhoneLine(&value));
    return value;
}

template <typename D> uint32_t impl_IPhoneCallDetails<D>::CallId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPhoneCallDetails &>(static_cast<const D &>(*this))->get_CallId(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneCallTransport impl_IPhoneCallDetails<D>::CallTransport() const
{
    Windows::Phone::Notification::Management::PhoneCallTransport value {};
    check_hresult(static_cast<const IPhoneCallDetails &>(static_cast<const D &>(*this))->get_CallTransport(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneMediaType impl_IPhoneCallDetails<D>::CallMediaType() const
{
    Windows::Phone::Notification::Management::PhoneMediaType value {};
    check_hresult(static_cast<const IPhoneCallDetails &>(static_cast<const D &>(*this))->get_CallMediaType(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneCallDirection impl_IPhoneCallDetails<D>::CallDirection() const
{
    Windows::Phone::Notification::Management::PhoneCallDirection value {};
    check_hresult(static_cast<const IPhoneCallDetails &>(static_cast<const D &>(*this))->get_CallDirection(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneCallState impl_IPhoneCallDetails<D>::State() const
{
    Windows::Phone::Notification::Management::PhoneCallState value {};
    check_hresult(static_cast<const IPhoneCallDetails &>(static_cast<const D &>(*this))->get_State(&value));
    return value;
}

template <typename D> uint32_t impl_IPhoneCallDetails<D>::ConferenceCallId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPhoneCallDetails &>(static_cast<const D &>(*this))->get_ConferenceCallId(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPhoneCallDetails<D>::StartTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IPhoneCallDetails &>(static_cast<const D &>(*this))->get_StartTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPhoneCallDetails<D>::EndTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IPhoneCallDetails &>(static_cast<const D &>(*this))->get_EndTime(put(value)));
    return value;
}

template <typename D> hstring impl_IPhoneCallDetails<D>::PhoneNumber() const
{
    hstring value;
    check_hresult(static_cast<const IPhoneCallDetails &>(static_cast<const D &>(*this))->get_PhoneNumber(put(value)));
    return value;
}

template <typename D> hstring impl_IPhoneCallDetails<D>::ContactName() const
{
    hstring value;
    check_hresult(static_cast<const IPhoneCallDetails &>(static_cast<const D &>(*this))->get_ContactName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::TextResponse> impl_IPhoneCallDetails<D>::PresetTextResponses() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::TextResponse> value;
    check_hresult(static_cast<const IPhoneCallDetails &>(static_cast<const D &>(*this))->get_PresetTextResponses(put(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneNotificationType impl_IPhoneNotificationTriggerDetails<D>::PhoneNotificationType() const
{
    Windows::Phone::Notification::Management::PhoneNotificationType value {};
    check_hresult(static_cast<const IPhoneNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_PhoneNotificationType(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PhoneCallDetails impl_IPhoneNotificationTriggerDetails<D>::CallDetails() const
{
    Windows::Phone::Notification::Management::PhoneCallDetails value { nullptr };
    check_hresult(static_cast<const IPhoneNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_CallDetails(put(value)));
    return value;
}

template <typename D> GUID impl_IPhoneNotificationTriggerDetails<D>::PhoneLineChangedId() const
{
    GUID value {};
    check_hresult(static_cast<const IPhoneNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_PhoneLineChangedId(&value));
    return value;
}

template <typename D> hstring impl_ISpeedDialEntry<D>::PhoneNumber() const
{
    hstring value;
    check_hresult(static_cast<const ISpeedDialEntry &>(static_cast<const D &>(*this))->get_PhoneNumber(put(value)));
    return value;
}

template <typename D> hstring impl_ISpeedDialEntry<D>::NumberType() const
{
    hstring value;
    check_hresult(static_cast<const ISpeedDialEntry &>(static_cast<const D &>(*this))->get_NumberType(put(value)));
    return value;
}

template <typename D> hstring impl_ISpeedDialEntry<D>::ContactName() const
{
    hstring value;
    check_hresult(static_cast<const ISpeedDialEntry &>(static_cast<const D &>(*this))->get_ContactName(put(value)));
    return value;
}

template <typename D> GUID impl_IReminderNotificationTriggerDetails<D>::ReminderId() const
{
    GUID value {};
    check_hresult(static_cast<const IReminderNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_ReminderId(&value));
    return value;
}

template <typename D> hstring impl_IReminderNotificationTriggerDetails<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IReminderNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> hstring impl_IReminderNotificationTriggerDetails<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IReminderNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> hstring impl_IReminderNotificationTriggerDetails<D>::Details() const
{
    hstring value;
    check_hresult(static_cast<const IReminderNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Details(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IReminderNotificationTriggerDetails<D>::Timestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IReminderNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Timestamp(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::Appointment impl_IReminderNotificationTriggerDetails<D>::Appointment() const
{
    Windows::ApplicationModel::Appointments::Appointment value { nullptr };
    check_hresult(static_cast<const IReminderNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Appointment(put(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::ReminderState impl_IReminderNotificationTriggerDetails<D>::ReminderState() const
{
    Windows::Phone::Notification::Management::ReminderState value {};
    check_hresult(static_cast<const IReminderNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_ReminderState(&value));
    return value;
}

template <typename D> hstring impl_IReminderNotificationTriggerDetails2<D>::InstanceId() const
{
    hstring value;
    check_hresult(static_cast<const IReminderNotificationTriggerDetails2 &>(static_cast<const D &>(*this))->get_InstanceId(put(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::CalendarChangedEvent impl_ICalendarChangedNotificationTriggerDetails<D>::EventType() const
{
    Windows::Phone::Notification::Management::CalendarChangedEvent value {};
    check_hresult(static_cast<const ICalendarChangedNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_EventType(&value));
    return value;
}

template <typename D> hstring impl_ICalendarChangedNotificationTriggerDetails<D>::ItemId() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarChangedNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_ItemId(put(value)));
    return value;
}

template <typename D> hstring impl_IToastNotificationTriggerDetails<D>::Text1() const
{
    hstring value;
    check_hresult(static_cast<const IToastNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Text1(put(value)));
    return value;
}

template <typename D> hstring impl_IToastNotificationTriggerDetails<D>::Text2() const
{
    hstring value;
    check_hresult(static_cast<const IToastNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Text2(put(value)));
    return value;
}

template <typename D> hstring impl_IToastNotificationTriggerDetails<D>::Text3() const
{
    hstring value;
    check_hresult(static_cast<const IToastNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Text3(put(value)));
    return value;
}

template <typename D> hstring impl_IToastNotificationTriggerDetails<D>::Text4() const
{
    hstring value;
    check_hresult(static_cast<const IToastNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Text4(put(value)));
    return value;
}

template <typename D> bool impl_IToastNotificationTriggerDetails<D>::SuppressPopup() const
{
    bool value {};
    check_hresult(static_cast<const IToastNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_SuppressPopup(&value));
    return value;
}

template <typename D> hstring impl_IToastNotificationTriggerDetails2<D>::InstanceId() const
{
    hstring value;
    check_hresult(static_cast<const IToastNotificationTriggerDetails2 &>(static_cast<const D &>(*this))->get_InstanceId(put(value)));
    return value;
}

template <typename D> hstring impl_ICortanaTileNotificationTriggerDetails<D>::TileId() const
{
    hstring value;
    check_hresult(static_cast<const ICortanaTileNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_TileId(put(value)));
    return value;
}

template <typename D> hstring impl_ICortanaTileNotificationTriggerDetails<D>::Content() const
{
    hstring value;
    check_hresult(static_cast<const ICortanaTileNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> hstring impl_ICortanaTileNotificationTriggerDetails<D>::LargeContent1() const
{
    hstring value;
    check_hresult(static_cast<const ICortanaTileNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_LargeContent1(put(value)));
    return value;
}

template <typename D> hstring impl_ICortanaTileNotificationTriggerDetails<D>::LargeContent2() const
{
    hstring value;
    check_hresult(static_cast<const ICortanaTileNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_LargeContent2(put(value)));
    return value;
}

template <typename D> hstring impl_ICortanaTileNotificationTriggerDetails<D>::EmphasizedText() const
{
    hstring value;
    check_hresult(static_cast<const ICortanaTileNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_EmphasizedText(put(value)));
    return value;
}

template <typename D> hstring impl_ICortanaTileNotificationTriggerDetails<D>::NonWrappedSmallContent1() const
{
    hstring value;
    check_hresult(static_cast<const ICortanaTileNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_NonWrappedSmallContent1(put(value)));
    return value;
}

template <typename D> hstring impl_ICortanaTileNotificationTriggerDetails<D>::NonWrappedSmallContent2() const
{
    hstring value;
    check_hresult(static_cast<const ICortanaTileNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_NonWrappedSmallContent2(put(value)));
    return value;
}

template <typename D> hstring impl_ICortanaTileNotificationTriggerDetails<D>::NonWrappedSmallContent3() const
{
    hstring value;
    check_hresult(static_cast<const ICortanaTileNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_NonWrappedSmallContent3(put(value)));
    return value;
}

template <typename D> hstring impl_ICortanaTileNotificationTriggerDetails<D>::NonWrappedSmallContent4() const
{
    hstring value;
    check_hresult(static_cast<const ICortanaTileNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_NonWrappedSmallContent4(put(value)));
    return value;
}

template <typename D> hstring impl_ICortanaTileNotificationTriggerDetails<D>::Source() const
{
    hstring value;
    check_hresult(static_cast<const ICortanaTileNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaMetadata<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IMediaMetadata &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaMetadata<D>::Subtitle() const
{
    hstring value;
    check_hresult(static_cast<const IMediaMetadata &>(static_cast<const D &>(*this))->get_Subtitle(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaMetadata<D>::Artist() const
{
    hstring value;
    check_hresult(static_cast<const IMediaMetadata &>(static_cast<const D &>(*this))->get_Artist(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaMetadata<D>::Album() const
{
    hstring value;
    check_hresult(static_cast<const IMediaMetadata &>(static_cast<const D &>(*this))->get_Album(put(value)));
    return value;
}

template <typename D> uint32_t impl_IMediaMetadata<D>::Track() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMediaMetadata &>(static_cast<const D &>(*this))->get_Track(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaMetadata<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaMetadata &>(static_cast<const D &>(*this))->get_Duration(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IMediaMetadata<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IMediaMetadata &>(static_cast<const D &>(*this))->get_Thumbnail(put(value)));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PlaybackStatus impl_IMediaControlsTriggerDetails<D>::PlaybackStatus() const
{
    Windows::Phone::Notification::Management::PlaybackStatus value {};
    check_hresult(static_cast<const IMediaControlsTriggerDetails &>(static_cast<const D &>(*this))->get_PlaybackStatus(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::MediaMetadata impl_IMediaControlsTriggerDetails<D>::MediaMetadata() const
{
    Windows::Phone::Notification::Management::MediaMetadata value { nullptr };
    check_hresult(static_cast<const IMediaControlsTriggerDetails &>(static_cast<const D &>(*this))->get_MediaMetadata(put(value)));
    return value;
}

template <typename D> uint32_t impl_IVolumeInfo<D>::SystemVolume() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVolumeInfo &>(static_cast<const D &>(*this))->get_SystemVolume(&value));
    return value;
}

template <typename D> uint32_t impl_IVolumeInfo<D>::CallVolume() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVolumeInfo &>(static_cast<const D &>(*this))->get_CallVolume(&value));
    return value;
}

template <typename D> uint32_t impl_IVolumeInfo<D>::MediaVolume() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVolumeInfo &>(static_cast<const D &>(*this))->get_MediaVolume(&value));
    return value;
}

template <typename D> bool impl_IVolumeInfo<D>::IsMuted() const
{
    bool value {};
    check_hresult(static_cast<const IVolumeInfo &>(static_cast<const D &>(*this))->get_IsMuted(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::VibrateState impl_IVolumeInfo<D>::IsVibrateEnabled() const
{
    Windows::Phone::Notification::Management::VibrateState value {};
    check_hresult(static_cast<const IVolumeInfo &>(static_cast<const D &>(*this))->get_IsVibrateEnabled(&value));
    return value;
}

template <typename D> hstring impl_IAccessoryManager<D>::RegisterAccessoryApp() const
{
    hstring triggerId;
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_RegisterAccessoryApp(put(triggerId)));
    return triggerId;
}

template <typename D> Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails impl_IAccessoryManager<D>::GetNextTriggerDetails() const
{
    Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails pDetails;
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_GetNextTriggerDetails(put(pDetails)));
    return pDetails;
}

template <typename D> void impl_IAccessoryManager<D>::ProcessTriggerDetails(const Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails & pDetails) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_ProcessTriggerDetails(get(pDetails)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::PhoneLineDetails> impl_IAccessoryManager<D>::PhoneLineDetails() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::PhoneLineDetails> ppvalue;
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->get_PhoneLineDetails(put(ppvalue)));
    return ppvalue;
}

template <typename D> Windows::Phone::Notification::Management::PhoneLineDetails impl_IAccessoryManager<D>::GetPhoneLineDetails(GUID phoneLine) const
{
    Windows::Phone::Notification::Management::PhoneLineDetails ppdetails { nullptr };
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_GetPhoneLineDetails(phoneLine, put(ppdetails)));
    return ppdetails;
}

template <typename D> void impl_IAccessoryManager<D>::AcceptPhoneCall(uint32_t phoneCallId) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_AcceptPhoneCall(phoneCallId));
}

template <typename D> void impl_IAccessoryManager<D>::AcceptPhoneCall(uint32_t phoneCallId, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_AcceptPhoneCallOnEndpoint(phoneCallId, endPoint));
}

template <typename D> void impl_IAccessoryManager<D>::AcceptPhoneCallWithVideo(uint32_t phoneCallId) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_AcceptPhoneCallWithVideo(phoneCallId));
}

template <typename D> void impl_IAccessoryManager<D>::AcceptPhoneCallWithVideo(uint32_t phoneCallId, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_AcceptPhoneCallWithVideoOnAudioEndpoint(phoneCallId, endPoint));
}

template <typename D> void impl_IAccessoryManager<D>::RejectPhoneCall(uint32_t phoneCallId) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_RejectPhoneCall(phoneCallId));
}

template <typename D> void impl_IAccessoryManager<D>::RejectPhoneCall(uint32_t phoneCallId, uint32_t textResponseID) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_RejectPhoneCallWithText(phoneCallId, textResponseID));
}

template <typename D> void impl_IAccessoryManager<D>::MakePhoneCall(GUID phoneLine, hstring_ref phoneNumber) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_MakePhoneCall(phoneLine, get(phoneNumber)));
}

template <typename D> void impl_IAccessoryManager<D>::MakePhoneCall(GUID phoneLine, hstring_ref phoneNumber, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_MakePhoneCallOnAudioEndpoint(phoneLine, get(phoneNumber), endPoint));
}

template <typename D> void impl_IAccessoryManager<D>::MakePhoneCallWithVideo(GUID phoneLine, hstring_ref phoneNumber) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_MakePhoneCallWithVideo(phoneLine, get(phoneNumber)));
}

template <typename D> void impl_IAccessoryManager<D>::MakePhoneCallWithVideo(GUID phoneLine, hstring_ref phoneNumber, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_MakePhoneCallWithVideoOnAudioEndpoint(phoneLine, get(phoneNumber), endPoint));
}

template <typename D> void impl_IAccessoryManager<D>::SwapPhoneCalls(uint32_t phoneCallIdToHold, uint32_t phoneCallIdOnHold) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_SwapPhoneCalls(phoneCallIdToHold, phoneCallIdOnHold));
}

template <typename D> void impl_IAccessoryManager<D>::HoldPhoneCall(uint32_t phoneCallId, bool holdCall) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_HoldPhoneCall(phoneCallId, holdCall));
}

template <typename D> void impl_IAccessoryManager<D>::EndPhoneCall(uint32_t phoneCallId) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_EndPhoneCall(phoneCallId));
}

template <typename D> void impl_IAccessoryManager<D>::PhoneMute(bool value) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->put_PhoneMute(value));
}

template <typename D> bool impl_IAccessoryManager<D>::PhoneMute() const
{
    bool value {};
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->get_PhoneMute(&value));
    return value;
}

template <typename D> void impl_IAccessoryManager<D>::PhoneCallAudioEndpoint(Windows::Phone::Notification::Management::PhoneCallAudioEndpoint value) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->put_PhoneCallAudioEndpoint(value));
}

template <typename D> Windows::Phone::Notification::Management::PhoneCallAudioEndpoint impl_IAccessoryManager<D>::PhoneCallAudioEndpoint() const
{
    Windows::Phone::Notification::Management::PhoneCallAudioEndpoint value {};
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->get_PhoneCallAudioEndpoint(&value));
    return value;
}

template <typename D> void impl_IAccessoryManager<D>::SnoozeAlarm(GUID alarmId) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_SnoozeAlarm(alarmId));
}

template <typename D> void impl_IAccessoryManager<D>::SnoozeAlarm(GUID alarmId, const Windows::Foundation::TimeSpan & timeSpan) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_SnoozeAlarmForSpecifiedTime(alarmId, get(timeSpan)));
}

template <typename D> void impl_IAccessoryManager<D>::DismissAlarm(GUID alarmId) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_DismissAlarm(alarmId));
}

template <typename D> void impl_IAccessoryManager<D>::SnoozeReminder(GUID reminderId) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_SnoozeReminder(reminderId));
}

template <typename D> void impl_IAccessoryManager<D>::SnoozeReminder(GUID reminderId, const Windows::Foundation::TimeSpan & timeSpan) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_SnoozeReminderForSpecifiedTime(reminderId, get(timeSpan)));
}

template <typename D> void impl_IAccessoryManager<D>::DismissReminder(GUID reminderId) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_DismissReminder(reminderId));
}

template <typename D> Windows::Phone::Notification::Management::MediaMetadata impl_IAccessoryManager<D>::GetMediaMetadata() const
{
    Windows::Phone::Notification::Management::MediaMetadata ppMetadata { nullptr };
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_GetMediaMetadata(put(ppMetadata)));
    return ppMetadata;
}

template <typename D> Windows::Phone::Notification::Management::PlaybackCapability impl_IAccessoryManager<D>::MediaPlaybackCapabilities() const
{
    Windows::Phone::Notification::Management::PlaybackCapability value {};
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->get_MediaPlaybackCapabilities(&value));
    return value;
}

template <typename D> Windows::Phone::Notification::Management::PlaybackStatus impl_IAccessoryManager<D>::MediaPlaybackStatus() const
{
    Windows::Phone::Notification::Management::PlaybackStatus value {};
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->get_MediaPlaybackStatus(&value));
    return value;
}

template <typename D> void impl_IAccessoryManager<D>::PerformMediaPlaybackCommand(Windows::Phone::Notification::Management::PlaybackCommand command) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_PerformMediaPlaybackCommand(command));
}

template <typename D> bool impl_IAccessoryManager<D>::DoNotDisturbEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->get_DoNotDisturbEnabled(&value));
    return value;
}

template <typename D> bool impl_IAccessoryManager<D>::DrivingModeEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->get_DrivingModeEnabled(&value));
    return value;
}

template <typename D> bool impl_IAccessoryManager<D>::BatterySaverState() const
{
    bool value {};
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->get_BatterySaverState(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Phone::Notification::Management::AppNotificationInfo> impl_IAccessoryManager<D>::GetApps() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Phone::Notification::Management::AppNotificationInfo> returnValue;
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_GetApps(put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IAccessoryManager<D>::EnableNotificationsForApplication(hstring_ref appId) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_EnableNotificationsForApplication(get(appId)));
}

template <typename D> void impl_IAccessoryManager<D>::DisableNotificationsForApplication(hstring_ref appId) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_DisableNotificationsForApplication(get(appId)));
}

template <typename D> bool impl_IAccessoryManager<D>::IsNotificationEnabledForApplication(hstring_ref appId) const
{
    bool enabled {};
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_IsNotificationEnabledForApplication(get(appId), &enabled));
    return enabled;
}

template <typename D> int32_t impl_IAccessoryManager<D>::GetEnabledAccessoryNotificationTypes() const
{
    int32_t enabledAccessoryNotificationTypes {};
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_GetEnabledAccessoryNotificationTypes(&enabledAccessoryNotificationTypes));
    return enabledAccessoryNotificationTypes;
}

template <typename D> void impl_IAccessoryManager<D>::EnableAccessoryNotificationTypes(int32_t accessoryNotificationTypes) const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_EnableAccessoryNotificationTypes(accessoryNotificationTypes));
}

template <typename D> void impl_IAccessoryManager<D>::DisableAllAccessoryNotificationTypes() const
{
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_DisableAllAccessoryNotificationTypes());
}

template <typename D> bool impl_IAccessoryManager<D>::GetUserConsent() const
{
    bool enabled {};
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_GetUserConsent(&enabled));
    return enabled;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IAccessoryManager<D>::GetAppIcon(hstring_ref appId) const
{
    Windows::Storage::Streams::IRandomAccessStreamReference returnValue;
    check_hresult(static_cast<const IAccessoryManager &>(static_cast<const D &>(*this))->abi_GetAppIcon(get(appId), put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IAccessoryManager2<D>::RingDevice() const
{
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->abi_RingDevice());
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::SpeedDialEntry> impl_IAccessoryManager2<D>::SpeedDialList() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::SpeedDialEntry> ppvalue;
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->get_SpeedDialList(put(ppvalue)));
    return ppvalue;
}

template <typename D> void impl_IAccessoryManager2<D>::ClearToast(hstring_ref instanceId) const
{
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->abi_ClearToast(get(instanceId)));
}

template <typename D> bool impl_IAccessoryManager2<D>::IsPhonePinLocked() const
{
    bool pinLocked {};
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->get_IsPhonePinLocked(&pinLocked));
    return pinLocked;
}

template <typename D> void impl_IAccessoryManager2<D>::IncreaseVolume(int32_t step) const
{
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->abi_IncreaseVolume(step));
}

template <typename D> void impl_IAccessoryManager2<D>::DecreaseVolume(int32_t step) const
{
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->abi_DecreaseVolume(step));
}

template <typename D> void impl_IAccessoryManager2<D>::SetMute(bool mute) const
{
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->abi_SetMute(mute));
}

template <typename D> void impl_IAccessoryManager2<D>::SetRingerVibrate(bool ringer, bool vibrate) const
{
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->abi_SetRingerVibrate(ringer, vibrate));
}

template <typename D> Windows::Phone::Notification::Management::VolumeInfo impl_IAccessoryManager2<D>::VolumeInfo() const
{
    Windows::Phone::Notification::Management::VolumeInfo ppVolume { nullptr };
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->get_VolumeInfo(put(ppVolume)));
    return ppVolume;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailAccountInfo> impl_IAccessoryManager2<D>::GetAllEmailAccounts() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailAccountInfo> emailAccounts;
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->abi_GetAllEmailAccounts(put(emailAccounts)));
    return emailAccounts;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailFolderInfo> impl_IAccessoryManager2<D>::GetFolders(hstring_ref emailAccount) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailFolderInfo> folders;
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->abi_GetFolders(get(emailAccount), put(folders)));
    return folders;
}

template <typename D> void impl_IAccessoryManager2<D>::EnableEmailNotificationEmailAccount(hstring_ref emailAccount) const
{
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->abi_EnableEmailNotificationEmailAccount(get(emailAccount)));
}

template <typename D> void impl_IAccessoryManager2<D>::DisableEmailNotificationEmailAccount(hstring_ref emailAccount) const
{
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->abi_DisableEmailNotificationEmailAccount(get(emailAccount)));
}

template <typename D> void impl_IAccessoryManager2<D>::EnableEmailNotificationFolderFilter(hstring_ref emailAccount, const Windows::Foundation::Collections::IVectorView<hstring> & folders) const
{
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->abi_EnableEmailNotificationFolderFilter(get(emailAccount), get(folders)));
}

template <typename D> void impl_IAccessoryManager2<D>::UpdateEmailReadStatus(const Windows::Phone::Notification::Management::BinaryId & messageEntryId, bool isRead) const
{
    check_hresult(static_cast<const IAccessoryManager2 &>(static_cast<const D &>(*this))->abi_UpdateEmailReadStatus(get(messageEntryId), isRead));
}

template <typename D> void impl_IAccessoryManager3<D>::SnoozeAlarmByInstanceId(hstring_ref instanceId) const
{
    check_hresult(static_cast<const IAccessoryManager3 &>(static_cast<const D &>(*this))->abi_SnoozeAlarmByInstanceId(get(instanceId)));
}

template <typename D> void impl_IAccessoryManager3<D>::DismissAlarmByInstanceId(hstring_ref instanceId) const
{
    check_hresult(static_cast<const IAccessoryManager3 &>(static_cast<const D &>(*this))->abi_DismissAlarmByInstanceId(get(instanceId)));
}

template <typename D> void impl_IAccessoryManager3<D>::SnoozeReminderByInstanceId(hstring_ref instanceId) const
{
    check_hresult(static_cast<const IAccessoryManager3 &>(static_cast<const D &>(*this))->abi_SnoozeReminderByInstanceId(get(instanceId)));
}

template <typename D> void impl_IAccessoryManager3<D>::DismissReminderByInstanceId(hstring_ref instanceId) const
{
    check_hresult(static_cast<const IAccessoryManager3 &>(static_cast<const D &>(*this))->abi_DismissReminderByInstanceId(get(instanceId)));
}

inline hstring AccessoryManager::RegisterAccessoryApp()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().RegisterAccessoryApp();
}

inline Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails AccessoryManager::GetNextTriggerDetails()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().GetNextTriggerDetails();
}

inline void AccessoryManager::ProcessTriggerDetails(const Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails & pDetails)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().ProcessTriggerDetails(pDetails);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::PhoneLineDetails> AccessoryManager::PhoneLineDetails()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().PhoneLineDetails();
}

inline Windows::Phone::Notification::Management::PhoneLineDetails AccessoryManager::GetPhoneLineDetails(GUID phoneLine)
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().GetPhoneLineDetails(phoneLine);
}

inline void AccessoryManager::AcceptPhoneCall(uint32_t phoneCallId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().AcceptPhoneCall(phoneCallId);
}

inline void AccessoryManager::AcceptPhoneCall(uint32_t phoneCallId, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().AcceptPhoneCall(phoneCallId, endPoint);
}

inline void AccessoryManager::AcceptPhoneCallWithVideo(uint32_t phoneCallId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().AcceptPhoneCallWithVideo(phoneCallId);
}

inline void AccessoryManager::AcceptPhoneCallWithVideo(uint32_t phoneCallId, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().AcceptPhoneCallWithVideo(phoneCallId, endPoint);
}

inline void AccessoryManager::RejectPhoneCall(uint32_t phoneCallId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().RejectPhoneCall(phoneCallId);
}

inline void AccessoryManager::RejectPhoneCall(uint32_t phoneCallId, uint32_t textResponseID)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().RejectPhoneCall(phoneCallId, textResponseID);
}

inline void AccessoryManager::MakePhoneCall(GUID phoneLine, hstring_ref phoneNumber)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().MakePhoneCall(phoneLine, phoneNumber);
}

inline void AccessoryManager::MakePhoneCall(GUID phoneLine, hstring_ref phoneNumber, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().MakePhoneCall(phoneLine, phoneNumber, endPoint);
}

inline void AccessoryManager::MakePhoneCallWithVideo(GUID phoneLine, hstring_ref phoneNumber)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().MakePhoneCallWithVideo(phoneLine, phoneNumber);
}

inline void AccessoryManager::MakePhoneCallWithVideo(GUID phoneLine, hstring_ref phoneNumber, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint endPoint)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().MakePhoneCallWithVideo(phoneLine, phoneNumber, endPoint);
}

inline void AccessoryManager::SwapPhoneCalls(uint32_t phoneCallIdToHold, uint32_t phoneCallIdOnHold)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().SwapPhoneCalls(phoneCallIdToHold, phoneCallIdOnHold);
}

inline void AccessoryManager::HoldPhoneCall(uint32_t phoneCallId, bool holdCall)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().HoldPhoneCall(phoneCallId, holdCall);
}

inline void AccessoryManager::EndPhoneCall(uint32_t phoneCallId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().EndPhoneCall(phoneCallId);
}

inline void AccessoryManager::PhoneMute(bool value)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().PhoneMute(value);
}

inline bool AccessoryManager::PhoneMute()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().PhoneMute();
}

inline void AccessoryManager::PhoneCallAudioEndpoint(Windows::Phone::Notification::Management::PhoneCallAudioEndpoint value)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().PhoneCallAudioEndpoint(value);
}

inline Windows::Phone::Notification::Management::PhoneCallAudioEndpoint AccessoryManager::PhoneCallAudioEndpoint()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().PhoneCallAudioEndpoint();
}

inline void AccessoryManager::SnoozeAlarm(GUID alarmId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().SnoozeAlarm(alarmId);
}

inline void AccessoryManager::SnoozeAlarm(GUID alarmId, const Windows::Foundation::TimeSpan & timeSpan)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().SnoozeAlarm(alarmId, timeSpan);
}

inline void AccessoryManager::DismissAlarm(GUID alarmId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().DismissAlarm(alarmId);
}

inline void AccessoryManager::SnoozeReminder(GUID reminderId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().SnoozeReminder(reminderId);
}

inline void AccessoryManager::SnoozeReminder(GUID reminderId, const Windows::Foundation::TimeSpan & timeSpan)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().SnoozeReminder(reminderId, timeSpan);
}

inline void AccessoryManager::DismissReminder(GUID reminderId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().DismissReminder(reminderId);
}

inline Windows::Phone::Notification::Management::MediaMetadata AccessoryManager::GetMediaMetadata()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().GetMediaMetadata();
}

inline Windows::Phone::Notification::Management::PlaybackCapability AccessoryManager::MediaPlaybackCapabilities()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().MediaPlaybackCapabilities();
}

inline Windows::Phone::Notification::Management::PlaybackStatus AccessoryManager::MediaPlaybackStatus()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().MediaPlaybackStatus();
}

inline void AccessoryManager::PerformMediaPlaybackCommand(Windows::Phone::Notification::Management::PlaybackCommand command)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().PerformMediaPlaybackCommand(command);
}

inline bool AccessoryManager::DoNotDisturbEnabled()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().DoNotDisturbEnabled();
}

inline bool AccessoryManager::DrivingModeEnabled()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().DrivingModeEnabled();
}

inline bool AccessoryManager::BatterySaverState()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().BatterySaverState();
}

inline Windows::Foundation::Collections::IMapView<hstring, Windows::Phone::Notification::Management::AppNotificationInfo> AccessoryManager::GetApps()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().GetApps();
}

inline void AccessoryManager::EnableNotificationsForApplication(hstring_ref appId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().EnableNotificationsForApplication(appId);
}

inline void AccessoryManager::DisableNotificationsForApplication(hstring_ref appId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().DisableNotificationsForApplication(appId);
}

inline bool AccessoryManager::IsNotificationEnabledForApplication(hstring_ref appId)
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().IsNotificationEnabledForApplication(appId);
}

inline int32_t AccessoryManager::GetEnabledAccessoryNotificationTypes()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().GetEnabledAccessoryNotificationTypes();
}

inline void AccessoryManager::EnableAccessoryNotificationTypes(int32_t accessoryNotificationTypes)
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().EnableAccessoryNotificationTypes(accessoryNotificationTypes);
}

inline void AccessoryManager::DisableAllAccessoryNotificationTypes()
{
    get_activation_factory<AccessoryManager, IAccessoryManager>().DisableAllAccessoryNotificationTypes();
}

inline bool AccessoryManager::GetUserConsent()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().GetUserConsent();
}

inline Windows::Storage::Streams::IRandomAccessStreamReference AccessoryManager::GetAppIcon(hstring_ref appId)
{
    return get_activation_factory<AccessoryManager, IAccessoryManager>().GetAppIcon(appId);
}

inline void AccessoryManager::RingDevice()
{
    get_activation_factory<AccessoryManager, IAccessoryManager2>().RingDevice();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::SpeedDialEntry> AccessoryManager::SpeedDialList()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager2>().SpeedDialList();
}

inline void AccessoryManager::ClearToast(hstring_ref instanceId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager2>().ClearToast(instanceId);
}

inline bool AccessoryManager::IsPhonePinLocked()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager2>().IsPhonePinLocked();
}

inline void AccessoryManager::IncreaseVolume(int32_t step)
{
    get_activation_factory<AccessoryManager, IAccessoryManager2>().IncreaseVolume(step);
}

inline void AccessoryManager::DecreaseVolume(int32_t step)
{
    get_activation_factory<AccessoryManager, IAccessoryManager2>().DecreaseVolume(step);
}

inline void AccessoryManager::SetMute(bool mute)
{
    get_activation_factory<AccessoryManager, IAccessoryManager2>().SetMute(mute);
}

inline void AccessoryManager::SetRingerVibrate(bool ringer, bool vibrate)
{
    get_activation_factory<AccessoryManager, IAccessoryManager2>().SetRingerVibrate(ringer, vibrate);
}

inline Windows::Phone::Notification::Management::VolumeInfo AccessoryManager::VolumeInfo()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager2>().VolumeInfo();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailAccountInfo> AccessoryManager::GetAllEmailAccounts()
{
    return get_activation_factory<AccessoryManager, IAccessoryManager2>().GetAllEmailAccounts();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailFolderInfo> AccessoryManager::GetFolders(hstring_ref emailAccount)
{
    return get_activation_factory<AccessoryManager, IAccessoryManager2>().GetFolders(emailAccount);
}

inline void AccessoryManager::EnableEmailNotificationEmailAccount(hstring_ref emailAccount)
{
    get_activation_factory<AccessoryManager, IAccessoryManager2>().EnableEmailNotificationEmailAccount(emailAccount);
}

inline void AccessoryManager::DisableEmailNotificationEmailAccount(hstring_ref emailAccount)
{
    get_activation_factory<AccessoryManager, IAccessoryManager2>().DisableEmailNotificationEmailAccount(emailAccount);
}

inline void AccessoryManager::EnableEmailNotificationFolderFilter(hstring_ref emailAccount, const Windows::Foundation::Collections::IVectorView<hstring> & folders)
{
    get_activation_factory<AccessoryManager, IAccessoryManager2>().EnableEmailNotificationFolderFilter(emailAccount, folders);
}

inline void AccessoryManager::UpdateEmailReadStatus(const Windows::Phone::Notification::Management::BinaryId & messageEntryId, bool isRead)
{
    get_activation_factory<AccessoryManager, IAccessoryManager2>().UpdateEmailReadStatus(messageEntryId, isRead);
}

inline void AccessoryManager::SnoozeAlarmByInstanceId(hstring_ref instanceId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager3>().SnoozeAlarmByInstanceId(instanceId);
}

inline void AccessoryManager::DismissAlarmByInstanceId(hstring_ref instanceId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager3>().DismissAlarmByInstanceId(instanceId);
}

inline void AccessoryManager::SnoozeReminderByInstanceId(hstring_ref instanceId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager3>().SnoozeReminderByInstanceId(instanceId);
}

inline void AccessoryManager::DismissReminderByInstanceId(hstring_ref instanceId)
{
    get_activation_factory<AccessoryManager, IAccessoryManager3>().DismissReminderByInstanceId(instanceId);
}

}

}
