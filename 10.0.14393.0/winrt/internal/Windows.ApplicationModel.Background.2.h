// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Background.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_7b44e581_cfa9_5763_bed7_6a65739f0dbf
#define WINRT_GENERIC_7b44e581_cfa9_5763_bed7_6a65739f0dbf
template <> struct __declspec(uuid("7b44e581-cfa9-5763-bed7-6a65739f0dbf")) __declspec(novtable) IAsyncOperation<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus> : impl_IAsyncOperation<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_47cbd985_0f08_5a3d_92cf_b27960506ed6
#define WINRT_GENERIC_47cbd985_0f08_5a3d_92cf_b27960506ed6
template <> struct __declspec(uuid("47cbd985-0f08-5a3d-92cf-b27960506ed6")) __declspec(novtable) IAsyncOperation<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult> : impl_IAsyncOperation<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult> {};
#endif

#ifndef WINRT_GENERIC_2595482c_1cbf_5691_a30d_2164909c6712
#define WINRT_GENERIC_2595482c_1cbf_5691_a30d_2164909c6712
template <> struct __declspec(uuid("2595482c-1cbf-5691-a30d-2164909c6712")) __declspec(novtable) IAsyncOperation<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult> : impl_IAsyncOperation<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_78c880f6_a7dc_5172_89da_7749fc82aa82
#define WINRT_GENERIC_78c880f6_a7dc_5172_89da_7749fc82aa82
template <> struct __declspec(uuid("78c880f6-a7dc-5172-89da-7749fc82aa82")) __declspec(novtable) IMapView<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> : impl_IMapView<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> {};
#endif

#ifndef WINRT_GENERIC_851e3cfd_306b_5c8e_ae3c_a8d83c623604
#define WINRT_GENERIC_851e3cfd_306b_5c8e_ae3c_a8d83c623604
template <> struct __declspec(uuid("851e3cfd-306b-5c8e-ae3c-a8d83c623604")) __declspec(novtable) IIterable<Windows::Storage::StorageLibrary> : impl_IIterable<Windows::Storage::StorageLibrary> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_b5136c46_2f2e_511d_9e8e_5ef4decb1da7
#define WINRT_GENERIC_b5136c46_2f2e_511d_9e8e_5ef4decb1da7
template <> struct __declspec(uuid("b5136c46-2f2e-511d-9e8e-5ef4decb1da7")) __declspec(novtable) IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult> : impl_IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult> {};
#endif

#ifndef WINRT_GENERIC_9d01424d_5653_59f8_ba6b_d0c077346d2d
#define WINRT_GENERIC_9d01424d_5653_59f8_ba6b_d0c077346d2d
template <> struct __declspec(uuid("9d01424d-5653-59f8-ba6b-d0c077346d2d")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> : impl_IAsyncOperation<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e3e660d6_d041_5ecd_b18b_fa254e4a860f
#define WINRT_GENERIC_e3e660d6_d041_5ecd_b18b_fa254e4a860f
template <> struct __declspec(uuid("e3e660d6-d041-5ecd-b18b-fa254e4a860f")) __declspec(novtable) IVector<winrt::Windows::Devices::Sensors::ActivityType> : impl_IVector<winrt::Windows::Devices::Sensors::ActivityType> {};
#endif

#ifndef WINRT_GENERIC_fc7a0488_2803_505c_9e62_9200afe416c6
#define WINRT_GENERIC_fc7a0488_2803_505c_9e62_9200afe416c6
template <> struct __declspec(uuid("fc7a0488-2803-505c-9e62-9200afe416c6")) __declspec(novtable) IVectorView<winrt::Windows::Devices::Sensors::ActivityType> : impl_IVectorView<winrt::Windows::Devices::Sensors::ActivityType> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_a55a747d_59f6_5cb6_b439_c8aad670905c
#define WINRT_GENERIC_a55a747d_59f6_5cb6_b439_c8aad670905c
template <> struct __declspec(uuid("a55a747d-59f6-5cb6-b439-c8aad670905c")) __declspec(novtable) IAsyncOperation<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus> : impl_IAsyncOperation<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_26dd26e3_3f47_5709_b2f2_d6d0ad3288f0
#define WINRT_GENERIC_26dd26e3_3f47_5709_b2f2_d6d0ad3288f0
template <> struct __declspec(uuid("26dd26e3-3f47-5709-b2f2-d6d0ad3288f0")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_d0065ef6_ee9d_55f8_ac2b_53a91ff96d2e
#define WINRT_GENERIC_d0065ef6_ee9d_55f8_ac2b_53a91ff96d2e
template <> struct __declspec(uuid("d0065ef6-ee9d-55f8-ac2b-53a91ff96d2e")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult> : impl_AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult> {};
#endif

#ifndef WINRT_GENERIC_3814c6a5_2ad1_5875_bed5_5031cd1f50a2
#define WINRT_GENERIC_3814c6a5_2ad1_5875_bed5_5031cd1f50a2
template <> struct __declspec(uuid("3814c6a5-2ad1-5875-bed5-5031cd1f50a2")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult> : impl_AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_5a1f6d75_8678_547c_8fd7_fbceb6ebf968
#define WINRT_GENERIC_5a1f6d75_8678_547c_8fd7_fbceb6ebf968
template <> struct __declspec(uuid("5a1f6d75-8678-547c-8fd7-fbceb6ebf968")) __declspec(novtable) IKeyValuePair<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> : impl_IKeyValuePair<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> {};
#endif

#ifndef WINRT_GENERIC_0a1c6409_fbd3_58c8_9af3_6262cc56e5b3
#define WINRT_GENERIC_0a1c6409_fbd3_58c8_9af3_6262cc56e5b3
template <> struct __declspec(uuid("0a1c6409-fbd3-58c8-9af3-6262cc56e5b3")) __declspec(novtable) IIterator<Windows::Storage::StorageLibrary> : impl_IIterator<Windows::Storage::StorageLibrary> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_d5aa9506_1464_57d4_859d_7ee9b26cb1f9
#define WINRT_GENERIC_d5aa9506_1464_57d4_859d_7ee9b26cb1f9
template <> struct __declspec(uuid("d5aa9506-1464-57d4-859d-7ee9b26cb1f9")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult> : impl_AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult> {};
#endif

#ifndef WINRT_GENERIC_3fd5a57e_47e4_5921_b148_5cb586166ca8
#define WINRT_GENERIC_3fd5a57e_47e4_5921_b148_5cb586166ca8
template <> struct __declspec(uuid("3fd5a57e-47e4-5921-b148-5cb586166ca8")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_40524281_a7c6_50b1_b6f5_0baa95d902c2
#define WINRT_GENERIC_40524281_a7c6_50b1_b6f5_0baa95d902c2
template <> struct __declspec(uuid("40524281-a7c6-50b1-b6f5-0baa95d902c2")) __declspec(novtable) IIterator<winrt::Windows::Devices::Sensors::ActivityType> : impl_IIterator<winrt::Windows::Devices::Sensors::ActivityType> {};
#endif

#ifndef WINRT_GENERIC_2a04cdfa_5dfd_5178_8731_ade998e4a7f6
#define WINRT_GENERIC_2a04cdfa_5dfd_5178_8731_ade998e4a7f6
template <> struct __declspec(uuid("2a04cdfa-5dfd-5178-8731-ade998e4a7f6")) __declspec(novtable) IIterable<winrt::Windows::Devices::Sensors::ActivityType> : impl_IIterable<winrt::Windows::Devices::Sensors::ActivityType> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_84108017_a8e7_5449_b713_df48503a953e
#define WINRT_GENERIC_84108017_a8e7_5449_b713_df48503a953e
template <> struct __declspec(uuid("84108017-a8e7-5449-b713-df48503a953e")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2001aea5_1a86_517e_8be5_11d7fb5935b2
#define WINRT_GENERIC_2001aea5_1a86_517e_8be5_11d7fb5935b2
template <> struct __declspec(uuid("2001aea5-1a86-517e-8be5-11d7fb5935b2")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>> {};
#endif

#ifndef WINRT_GENERIC_80fb0327_5a00_55cc_85db_a852719981b9
#define WINRT_GENERIC_80fb0327_5a00_55cc_85db_a852719981b9
template <> struct __declspec(uuid("80fb0327-5a00-55cc-85db-a852719981b9")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>> {};
#endif


}

namespace Windows::ApplicationModel::Background {

template <typename D>
struct WINRT_EBO impl_IActivitySensorTrigger
{
    Windows::Foundation::Collections::IVector<winrt::Windows::Devices::Sensors::ActivityType> SubscribedActivities() const;
    uint32_t ReportInterval() const;
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Sensors::ActivityType> SupportedActivities() const;
    uint32_t MinimumReportInterval() const;
};

template <typename D>
struct WINRT_EBO impl_IActivitySensorTriggerFactory
{
    Windows::ApplicationModel::Background::ActivitySensorTrigger Create(uint32_t reportIntervalInMilliseconds) const;
};

template <typename D>
struct WINRT_EBO impl_IAlarmApplicationManagerStatics
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus> RequestAccessAsync() const;
    Windows::ApplicationModel::Background::AlarmAccessStatus GetAccessStatus() const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationTrigger
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult> RequestAsync() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult> RequestAsync(const Windows::Foundation::Collections::ValueSet & arguments) const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationTriggerDetails
{
    Windows::Foundation::Collections::ValueSet Arguments() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentStoreNotificationTrigger
{
};

template <typename D>
struct WINRT_EBO impl_IBackgroundCondition
{
};

template <typename D>
struct WINRT_EBO impl_IBackgroundExecutionManagerStatics
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus> RequestAccessAsync() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus> RequestAccessAsync(hstring_ref applicationId) const;
    void RemoveAccess() const;
    void RemoveAccess(hstring_ref applicationId) const;
    Windows::ApplicationModel::Background::BackgroundAccessStatus GetAccessStatus() const;
    Windows::ApplicationModel::Background::BackgroundAccessStatus GetAccessStatus(hstring_ref applicationId) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTask
{
    void Run(const Windows::ApplicationModel::Background::IBackgroundTaskInstance & taskInstance) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTaskBuilder
{
    void TaskEntryPoint(hstring_ref value) const;
    hstring TaskEntryPoint() const;
    void SetTrigger(const Windows::ApplicationModel::Background::IBackgroundTrigger & trigger) const;
    void AddCondition(const Windows::ApplicationModel::Background::IBackgroundCondition & condition) const;
    void Name(hstring_ref value) const;
    hstring Name() const;
    Windows::ApplicationModel::Background::BackgroundTaskRegistration Register() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTaskBuilder2
{
    void CancelOnConditionLoss(bool value) const;
    bool CancelOnConditionLoss() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTaskBuilder3
{
    void IsNetworkRequested(bool value) const;
    bool IsNetworkRequested() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTaskCompletedEventArgs
{
    GUID InstanceId() const;
    void CheckResult() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTaskDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTaskInstance
{
    GUID InstanceId() const;
    Windows::ApplicationModel::Background::BackgroundTaskRegistration Task() const;
    uint32_t Progress() const;
    void Progress(uint32_t value) const;
    Windows::IInspectable TriggerDetails() const;
    event_token Canceled(const Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler & cancelHandler) const;
    using Canceled_revoker = event_revoker<IBackgroundTaskInstance>;
    Canceled_revoker Canceled(auto_revoke_t, const Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler & cancelHandler) const;
    void Canceled(event_token cookie) const;
    uint32_t SuspendedCount() const;
    Windows::ApplicationModel::Background::BackgroundTaskDeferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTaskInstance2
{
    uint32_t GetThrottleCount(Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter counter) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTaskInstance4
{
    Windows::System::User User() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTaskProgressEventArgs
{
    GUID InstanceId() const;
    uint32_t Progress() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTaskRegistration
{
    GUID TaskId() const;
    hstring Name() const;
    event_token Progress(const Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler & handler) const;
    using Progress_revoker = event_revoker<IBackgroundTaskRegistration>;
    Progress_revoker Progress(auto_revoke_t, const Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler & handler) const;
    void Progress(event_token cookie) const;
    event_token Completed(const Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler & handler) const;
    using Completed_revoker = event_revoker<IBackgroundTaskRegistration>;
    Completed_revoker Completed(auto_revoke_t, const Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler & handler) const;
    void Completed(event_token cookie) const;
    void Unregister(bool cancelTask) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTaskRegistration2
{
    Windows::ApplicationModel::Background::IBackgroundTrigger Trigger() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTaskRegistrationStatics
{
    Windows::Foundation::Collections::IMapView<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> AllTasks() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTrigger
{
};

template <typename D>
struct WINRT_EBO impl_IBackgroundWorkCostStatics
{
    Windows::ApplicationModel::Background::BackgroundWorkCostValue CurrentBackgroundWorkCost() const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothLEAdvertisementPublisherTrigger
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement Advertisement() const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothLEAdvertisementWatcherTrigger
{
    Windows::Foundation::TimeSpan MinSamplingInterval() const;
    Windows::Foundation::TimeSpan MaxSamplingInterval() const;
    Windows::Foundation::TimeSpan MinOutOfRangeTimeout() const;
    Windows::Foundation::TimeSpan MaxOutOfRangeTimeout() const;
    Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter SignalStrengthFilter() const;
    void SignalStrengthFilter(const Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter & value) const;
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter AdvertisementFilter() const;
    void AdvertisementFilter(const Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter & value) const;
};

template <typename D>
struct WINRT_EBO impl_ICachedFileUpdaterTrigger
{
};

template <typename D>
struct WINRT_EBO impl_ICachedFileUpdaterTriggerDetails
{
    Windows::Storage::Provider::CachedFileTarget UpdateTarget() const;
    Windows::Storage::Provider::FileUpdateRequest UpdateRequest() const;
    bool CanRequestUserInput() const;
};

template <typename D>
struct WINRT_EBO impl_IChatMessageNotificationTrigger
{
};

template <typename D>
struct WINRT_EBO impl_IChatMessageReceivedNotificationTrigger
{
};

template <typename D>
struct WINRT_EBO impl_ICommunicationBlockingAppSetAsActiveTrigger
{
};

template <typename D>
struct WINRT_EBO impl_IContactStoreNotificationTrigger
{
};

template <typename D>
struct WINRT_EBO impl_IContentPrefetchTrigger
{
    Windows::Foundation::TimeSpan WaitInterval() const;
};

template <typename D>
struct WINRT_EBO impl_IContentPrefetchTriggerFactory
{
    Windows::ApplicationModel::Background::ContentPrefetchTrigger Create(const Windows::Foundation::TimeSpan & waitInterval) const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceConnectionChangeTrigger
{
    hstring DeviceId() const;
    bool CanMaintainConnection() const;
    bool MaintainConnection() const;
    void MaintainConnection(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceConnectionChangeTriggerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> FromIdAsync(hstring_ref deviceId) const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceManufacturerNotificationTrigger
{
    hstring TriggerQualifier() const;
    bool OneShot() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceManufacturerNotificationTriggerFactory
{
    Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger Create(hstring_ref triggerQualifier, bool oneShot) const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceServicingTrigger
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult> RequestAsync(hstring_ref deviceId, const Windows::Foundation::TimeSpan & expectedDuration) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult> RequestAsync(hstring_ref deviceId, const Windows::Foundation::TimeSpan & expectedDuration, hstring_ref arguments) const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceUseTrigger
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult> RequestAsync(hstring_ref deviceId) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult> RequestAsync(hstring_ref deviceId, hstring_ref arguments) const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceWatcherTrigger
{
};

template <typename D>
struct WINRT_EBO impl_IEmailStoreNotificationTrigger
{
};

template <typename D>
struct WINRT_EBO impl_IGattCharacteristicNotificationTrigger
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic Characteristic() const;
};

template <typename D>
struct WINRT_EBO impl_IGattCharacteristicNotificationTriggerFactory
{
    Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger Create(const Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic & characteristic) const;
};

template <typename D>
struct WINRT_EBO impl_ILocationTrigger
{
    Windows::ApplicationModel::Background::LocationTriggerType TriggerType() const;
};

template <typename D>
struct WINRT_EBO impl_ILocationTriggerFactory
{
    Windows::ApplicationModel::Background::LocationTrigger Create(Windows::ApplicationModel::Background::LocationTriggerType triggerType) const;
};

template <typename D>
struct WINRT_EBO impl_IMaintenanceTrigger
{
    uint32_t FreshnessTime() const;
    bool OneShot() const;
};

template <typename D>
struct WINRT_EBO impl_IMaintenanceTriggerFactory
{
    Windows::ApplicationModel::Background::MaintenanceTrigger Create(uint32_t freshnessTime, bool oneShot) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaProcessingTrigger
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult> RequestAsync() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult> RequestAsync(const Windows::Foundation::Collections::ValueSet & arguments) const;
};

template <typename D>
struct WINRT_EBO impl_INetworkOperatorHotspotAuthenticationTrigger
{
};

template <typename D>
struct WINRT_EBO impl_INetworkOperatorNotificationTrigger
{
    hstring NetworkAccountId() const;
};

template <typename D>
struct WINRT_EBO impl_INetworkOperatorNotificationTriggerFactory
{
    Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger Create(hstring_ref networkAccountId) const;
};

template <typename D>
struct WINRT_EBO impl_IPhoneTrigger
{
    bool OneShot() const;
    Windows::ApplicationModel::Calls::Background::PhoneTriggerType TriggerType() const;
};

template <typename D>
struct WINRT_EBO impl_IPhoneTriggerFactory
{
    Windows::ApplicationModel::Background::PhoneTrigger Create(Windows::ApplicationModel::Calls::Background::PhoneTriggerType type, bool oneShot) const;
};

template <typename D>
struct WINRT_EBO impl_IPushNotificationTriggerFactory
{
    Windows::ApplicationModel::Background::PushNotificationTrigger Create(hstring_ref applicationId) const;
};

template <typename D>
struct WINRT_EBO impl_IRcsEndUserMessageAvailableTrigger
{
};

template <typename D>
struct WINRT_EBO impl_IRfcommConnectionTrigger
{
    Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation InboundConnection() const;
    Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation OutboundConnection() const;
    bool AllowMultipleConnections() const;
    void AllowMultipleConnections(bool value) const;
    Windows::Networking::Sockets::SocketProtectionLevel ProtectionLevel() const;
    void ProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel value) const;
    Windows::Networking::HostName RemoteHostName() const;
    void RemoteHostName(const Windows::Networking::HostName & value) const;
};

template <typename D>
struct WINRT_EBO impl_ISecondaryAuthenticationFactorAuthenticationTrigger
{
};

template <typename D>
struct WINRT_EBO impl_ISensorDataThresholdTrigger
{
};

template <typename D>
struct WINRT_EBO impl_ISensorDataThresholdTriggerFactory
{
    Windows::ApplicationModel::Background::SensorDataThresholdTrigger Create(const Windows::Devices::Sensors::ISensorDataThreshold & threshold) const;
};

template <typename D>
struct WINRT_EBO impl_ISmartCardTrigger
{
    Windows::Devices::SmartCards::SmartCardTriggerType TriggerType() const;
};

template <typename D>
struct WINRT_EBO impl_ISmartCardTriggerFactory
{
    Windows::ApplicationModel::Background::SmartCardTrigger Create(Windows::Devices::SmartCards::SmartCardTriggerType triggerType) const;
};

template <typename D>
struct WINRT_EBO impl_ISmsMessageReceivedTriggerFactory
{
    Windows::ApplicationModel::Background::SmsMessageReceivedTrigger Create(const Windows::Devices::Sms::SmsFilterRules & filterRules) const;
};

template <typename D>
struct WINRT_EBO impl_ISocketActivityTrigger
{
    bool IsWakeFromLowPowerSupported() const;
};

template <typename D>
struct WINRT_EBO impl_IStorageLibraryContentChangedTrigger
{
};

template <typename D>
struct WINRT_EBO impl_IStorageLibraryContentChangedTriggerStatics
{
    Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger Create(const Windows::Storage::StorageLibrary & storageLibrary) const;
    Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger CreateFromLibraries(const Windows::Foundation::Collections::IIterable<Windows::Storage::StorageLibrary> & storageLibraries) const;
};

template <typename D>
struct WINRT_EBO impl_ISystemCondition
{
    Windows::ApplicationModel::Background::SystemConditionType ConditionType() const;
};

template <typename D>
struct WINRT_EBO impl_ISystemConditionFactory
{
    Windows::ApplicationModel::Background::SystemCondition Create(Windows::ApplicationModel::Background::SystemConditionType conditionType) const;
};

template <typename D>
struct WINRT_EBO impl_ISystemTrigger
{
    bool OneShot() const;
    Windows::ApplicationModel::Background::SystemTriggerType TriggerType() const;
};

template <typename D>
struct WINRT_EBO impl_ISystemTriggerFactory
{
    Windows::ApplicationModel::Background::SystemTrigger Create(Windows::ApplicationModel::Background::SystemTriggerType triggerType, bool oneShot) const;
};

template <typename D>
struct WINRT_EBO impl_ITimeTrigger
{
    uint32_t FreshnessTime() const;
    bool OneShot() const;
};

template <typename D>
struct WINRT_EBO impl_ITimeTriggerFactory
{
    Windows::ApplicationModel::Background::TimeTrigger Create(uint32_t freshnessTime, bool oneShot) const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotificationActionTriggerFactory
{
    Windows::ApplicationModel::Background::ToastNotificationActionTrigger Create(hstring_ref applicationId) const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotificationHistoryChangedTriggerFactory
{
    Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger Create(hstring_ref applicationId) const;
};

template <typename D>
struct WINRT_EBO impl_IUserNotificationChangedTriggerFactory
{
    Windows::ApplicationModel::Background::UserNotificationChangedTrigger Create(Windows::UI::Notifications::NotificationKinds notificationKinds) const;
};

struct BackgroundTaskCanceledEventHandler : Windows::IUnknown
{
    BackgroundTaskCanceledEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<BackgroundTaskCanceledEventHandler>(m_ptr); }
    template <typename L> BackgroundTaskCanceledEventHandler(L lambda);
    template <typename F> BackgroundTaskCanceledEventHandler (F * function);
    template <typename O, typename M> BackgroundTaskCanceledEventHandler(O * object, M method);
    void operator()(const Windows::ApplicationModel::Background::IBackgroundTaskInstance & sender, Windows::ApplicationModel::Background::BackgroundTaskCancellationReason reason) const;
};

struct BackgroundTaskCompletedEventHandler : Windows::IUnknown
{
    BackgroundTaskCompletedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<BackgroundTaskCompletedEventHandler>(m_ptr); }
    template <typename L> BackgroundTaskCompletedEventHandler(L lambda);
    template <typename F> BackgroundTaskCompletedEventHandler (F * function);
    template <typename O, typename M> BackgroundTaskCompletedEventHandler(O * object, M method);
    void operator()(const Windows::ApplicationModel::Background::BackgroundTaskRegistration & sender, const Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs & args) const;
};

struct BackgroundTaskProgressEventHandler : Windows::IUnknown
{
    BackgroundTaskProgressEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<BackgroundTaskProgressEventHandler>(m_ptr); }
    template <typename L> BackgroundTaskProgressEventHandler(L lambda);
    template <typename F> BackgroundTaskProgressEventHandler (F * function);
    template <typename O, typename M> BackgroundTaskProgressEventHandler(O * object, M method);
    void operator()(const Windows::ApplicationModel::Background::BackgroundTaskRegistration & sender, const Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs & args) const;
};

struct IActivitySensorTrigger :
    Windows::IInspectable,
    impl::consume<IActivitySensorTrigger>,
    impl::require<IActivitySensorTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IActivitySensorTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IActivitySensorTrigger>(m_ptr); }
};

struct IActivitySensorTriggerFactory :
    Windows::IInspectable,
    impl::consume<IActivitySensorTriggerFactory>
{
    IActivitySensorTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IActivitySensorTriggerFactory>(m_ptr); }
};

struct IAlarmApplicationManagerStatics :
    Windows::IInspectable,
    impl::consume<IAlarmApplicationManagerStatics>
{
    IAlarmApplicationManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAlarmApplicationManagerStatics>(m_ptr); }
};

struct IApplicationTrigger :
    Windows::IInspectable,
    impl::consume<IApplicationTrigger>,
    impl::require<IApplicationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IApplicationTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationTrigger>(m_ptr); }
};

struct IApplicationTriggerDetails :
    Windows::IInspectable,
    impl::consume<IApplicationTriggerDetails>
{
    IApplicationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationTriggerDetails>(m_ptr); }
};

struct IAppointmentStoreNotificationTrigger :
    Windows::IInspectable,
    impl::consume<IAppointmentStoreNotificationTrigger>,
    impl::require<IAppointmentStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IAppointmentStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentStoreNotificationTrigger>(m_ptr); }
};

struct IBackgroundCondition :
    Windows::IInspectable,
    impl::consume<IBackgroundCondition>
{
    IBackgroundCondition(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundCondition>(m_ptr); }
};

struct IBackgroundExecutionManagerStatics :
    Windows::IInspectable,
    impl::consume<IBackgroundExecutionManagerStatics>
{
    IBackgroundExecutionManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundExecutionManagerStatics>(m_ptr); }
};

struct IBackgroundTask :
    Windows::IInspectable,
    impl::consume<IBackgroundTask>
{
    IBackgroundTask(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTask>(m_ptr); }
};

struct IBackgroundTaskBuilder :
    Windows::IInspectable,
    impl::consume<IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTaskBuilder>(m_ptr); }
};

struct IBackgroundTaskBuilder2 :
    Windows::IInspectable,
    impl::consume<IBackgroundTaskBuilder2>,
    impl::require<IBackgroundTaskBuilder2, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTaskBuilder2>(m_ptr); }
};

struct IBackgroundTaskBuilder3 :
    Windows::IInspectable,
    impl::consume<IBackgroundTaskBuilder3>,
    impl::require<IBackgroundTaskBuilder3, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTaskBuilder3>(m_ptr); }
};

struct IBackgroundTaskCompletedEventArgs :
    Windows::IInspectable,
    impl::consume<IBackgroundTaskCompletedEventArgs>
{
    IBackgroundTaskCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTaskCompletedEventArgs>(m_ptr); }
};

struct IBackgroundTaskDeferral :
    Windows::IInspectable,
    impl::consume<IBackgroundTaskDeferral>
{
    IBackgroundTaskDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTaskDeferral>(m_ptr); }
};

struct IBackgroundTaskInstance :
    Windows::IInspectable,
    impl::consume<IBackgroundTaskInstance>
{
    IBackgroundTaskInstance(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTaskInstance>(m_ptr); }
};

struct IBackgroundTaskInstance2 :
    Windows::IInspectable,
    impl::consume<IBackgroundTaskInstance2>,
    impl::require<IBackgroundTaskInstance2, Windows::ApplicationModel::Background::IBackgroundTaskInstance>
{
    IBackgroundTaskInstance2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTaskInstance2>(m_ptr); }
};

struct IBackgroundTaskInstance4 :
    Windows::IInspectable,
    impl::consume<IBackgroundTaskInstance4>,
    impl::require<IBackgroundTaskInstance4, Windows::ApplicationModel::Background::IBackgroundTaskInstance>
{
    IBackgroundTaskInstance4(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTaskInstance4>(m_ptr); }
};

struct IBackgroundTaskProgressEventArgs :
    Windows::IInspectable,
    impl::consume<IBackgroundTaskProgressEventArgs>
{
    IBackgroundTaskProgressEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTaskProgressEventArgs>(m_ptr); }
};

struct IBackgroundTaskRegistration :
    Windows::IInspectable,
    impl::consume<IBackgroundTaskRegistration>
{
    IBackgroundTaskRegistration(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTaskRegistration>(m_ptr); }
};

struct IBackgroundTaskRegistration2 :
    Windows::IInspectable,
    impl::consume<IBackgroundTaskRegistration2>,
    impl::require<IBackgroundTaskRegistration2, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
{
    IBackgroundTaskRegistration2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTaskRegistration2>(m_ptr); }
};

struct IBackgroundTaskRegistrationStatics :
    Windows::IInspectable,
    impl::consume<IBackgroundTaskRegistrationStatics>
{
    IBackgroundTaskRegistrationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTaskRegistrationStatics>(m_ptr); }
};

struct IBackgroundTrigger :
    Windows::IInspectable,
    impl::consume<IBackgroundTrigger>
{
    IBackgroundTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTrigger>(m_ptr); }
};

struct IBackgroundWorkCostStatics :
    Windows::IInspectable,
    impl::consume<IBackgroundWorkCostStatics>
{
    IBackgroundWorkCostStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundWorkCostStatics>(m_ptr); }
};

struct IBluetoothLEAdvertisementPublisherTrigger :
    Windows::IInspectable,
    impl::consume<IBluetoothLEAdvertisementPublisherTrigger>,
    impl::require<IBluetoothLEAdvertisementPublisherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IBluetoothLEAdvertisementPublisherTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothLEAdvertisementPublisherTrigger>(m_ptr); }
};

struct IBluetoothLEAdvertisementWatcherTrigger :
    Windows::IInspectable,
    impl::consume<IBluetoothLEAdvertisementWatcherTrigger>,
    impl::require<IBluetoothLEAdvertisementWatcherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IBluetoothLEAdvertisementWatcherTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothLEAdvertisementWatcherTrigger>(m_ptr); }
};

struct ICachedFileUpdaterTrigger :
    Windows::IInspectable,
    impl::consume<ICachedFileUpdaterTrigger>,
    impl::require<ICachedFileUpdaterTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ICachedFileUpdaterTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICachedFileUpdaterTrigger>(m_ptr); }
};

struct ICachedFileUpdaterTriggerDetails :
    Windows::IInspectable,
    impl::consume<ICachedFileUpdaterTriggerDetails>
{
    ICachedFileUpdaterTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICachedFileUpdaterTriggerDetails>(m_ptr); }
};

struct IChatMessageNotificationTrigger :
    Windows::IInspectable,
    impl::consume<IChatMessageNotificationTrigger>,
    impl::require<IChatMessageNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IChatMessageNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IChatMessageNotificationTrigger>(m_ptr); }
};

struct IChatMessageReceivedNotificationTrigger :
    Windows::IInspectable,
    impl::consume<IChatMessageReceivedNotificationTrigger>,
    impl::require<IChatMessageReceivedNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IChatMessageReceivedNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IChatMessageReceivedNotificationTrigger>(m_ptr); }
};

struct ICommunicationBlockingAppSetAsActiveTrigger :
    Windows::IInspectable,
    impl::consume<ICommunicationBlockingAppSetAsActiveTrigger>,
    impl::require<ICommunicationBlockingAppSetAsActiveTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ICommunicationBlockingAppSetAsActiveTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICommunicationBlockingAppSetAsActiveTrigger>(m_ptr); }
};

struct IContactStoreNotificationTrigger :
    Windows::IInspectable,
    impl::consume<IContactStoreNotificationTrigger>,
    impl::require<IContactStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IContactStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactStoreNotificationTrigger>(m_ptr); }
};

struct IContentPrefetchTrigger :
    Windows::IInspectable,
    impl::consume<IContentPrefetchTrigger>,
    impl::require<IContentPrefetchTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IContentPrefetchTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContentPrefetchTrigger>(m_ptr); }
};

struct IContentPrefetchTriggerFactory :
    Windows::IInspectable,
    impl::consume<IContentPrefetchTriggerFactory>
{
    IContentPrefetchTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContentPrefetchTriggerFactory>(m_ptr); }
};

struct IDeviceConnectionChangeTrigger :
    Windows::IInspectable,
    impl::consume<IDeviceConnectionChangeTrigger>,
    impl::require<IDeviceConnectionChangeTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceConnectionChangeTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceConnectionChangeTrigger>(m_ptr); }
};

struct IDeviceConnectionChangeTriggerStatics :
    Windows::IInspectable,
    impl::consume<IDeviceConnectionChangeTriggerStatics>
{
    IDeviceConnectionChangeTriggerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceConnectionChangeTriggerStatics>(m_ptr); }
};

struct IDeviceManufacturerNotificationTrigger :
    Windows::IInspectable,
    impl::consume<IDeviceManufacturerNotificationTrigger>,
    impl::require<IDeviceManufacturerNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceManufacturerNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceManufacturerNotificationTrigger>(m_ptr); }
};

struct IDeviceManufacturerNotificationTriggerFactory :
    Windows::IInspectable,
    impl::consume<IDeviceManufacturerNotificationTriggerFactory>
{
    IDeviceManufacturerNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceManufacturerNotificationTriggerFactory>(m_ptr); }
};

struct IDeviceServicingTrigger :
    Windows::IInspectable,
    impl::consume<IDeviceServicingTrigger>,
    impl::require<IDeviceServicingTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceServicingTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceServicingTrigger>(m_ptr); }
};

struct IDeviceUseTrigger :
    Windows::IInspectable,
    impl::consume<IDeviceUseTrigger>,
    impl::require<IDeviceUseTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceUseTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceUseTrigger>(m_ptr); }
};

struct IDeviceWatcherTrigger :
    Windows::IInspectable,
    impl::consume<IDeviceWatcherTrigger>,
    impl::require<IDeviceWatcherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceWatcherTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceWatcherTrigger>(m_ptr); }
};

struct IEmailStoreNotificationTrigger :
    Windows::IInspectable,
    impl::consume<IEmailStoreNotificationTrigger>,
    impl::require<IEmailStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IEmailStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailStoreNotificationTrigger>(m_ptr); }
};

struct IGattCharacteristicNotificationTrigger :
    Windows::IInspectable,
    impl::consume<IGattCharacteristicNotificationTrigger>,
    impl::require<IGattCharacteristicNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IGattCharacteristicNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGattCharacteristicNotificationTrigger>(m_ptr); }
};

struct IGattCharacteristicNotificationTriggerFactory :
    Windows::IInspectable,
    impl::consume<IGattCharacteristicNotificationTriggerFactory>
{
    IGattCharacteristicNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGattCharacteristicNotificationTriggerFactory>(m_ptr); }
};

struct ILocationTrigger :
    Windows::IInspectable,
    impl::consume<ILocationTrigger>,
    impl::require<ILocationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ILocationTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILocationTrigger>(m_ptr); }
};

struct ILocationTriggerFactory :
    Windows::IInspectable,
    impl::consume<ILocationTriggerFactory>
{
    ILocationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILocationTriggerFactory>(m_ptr); }
};

struct IMaintenanceTrigger :
    Windows::IInspectable,
    impl::consume<IMaintenanceTrigger>,
    impl::require<IMaintenanceTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IMaintenanceTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMaintenanceTrigger>(m_ptr); }
};

struct IMaintenanceTriggerFactory :
    Windows::IInspectable,
    impl::consume<IMaintenanceTriggerFactory>
{
    IMaintenanceTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMaintenanceTriggerFactory>(m_ptr); }
};

struct IMediaProcessingTrigger :
    Windows::IInspectable,
    impl::consume<IMediaProcessingTrigger>,
    impl::require<IMediaProcessingTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IMediaProcessingTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaProcessingTrigger>(m_ptr); }
};

struct INetworkOperatorHotspotAuthenticationTrigger :
    Windows::IInspectable,
    impl::consume<INetworkOperatorHotspotAuthenticationTrigger>,
    impl::require<INetworkOperatorHotspotAuthenticationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    INetworkOperatorHotspotAuthenticationTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INetworkOperatorHotspotAuthenticationTrigger>(m_ptr); }
};

struct INetworkOperatorNotificationTrigger :
    Windows::IInspectable,
    impl::consume<INetworkOperatorNotificationTrigger>,
    impl::require<INetworkOperatorNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    INetworkOperatorNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INetworkOperatorNotificationTrigger>(m_ptr); }
};

struct INetworkOperatorNotificationTriggerFactory :
    Windows::IInspectable,
    impl::consume<INetworkOperatorNotificationTriggerFactory>
{
    INetworkOperatorNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INetworkOperatorNotificationTriggerFactory>(m_ptr); }
};

struct IPhoneTrigger :
    Windows::IInspectable,
    impl::consume<IPhoneTrigger>,
    impl::require<IPhoneTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IPhoneTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneTrigger>(m_ptr); }
};

struct IPhoneTriggerFactory :
    Windows::IInspectable,
    impl::consume<IPhoneTriggerFactory>
{
    IPhoneTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneTriggerFactory>(m_ptr); }
};

struct IPushNotificationTriggerFactory :
    Windows::IInspectable,
    impl::consume<IPushNotificationTriggerFactory>
{
    IPushNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPushNotificationTriggerFactory>(m_ptr); }
};

struct IRcsEndUserMessageAvailableTrigger :
    Windows::IInspectable,
    impl::consume<IRcsEndUserMessageAvailableTrigger>,
    impl::require<IRcsEndUserMessageAvailableTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IRcsEndUserMessageAvailableTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRcsEndUserMessageAvailableTrigger>(m_ptr); }
};

struct IRfcommConnectionTrigger :
    Windows::IInspectable,
    impl::consume<IRfcommConnectionTrigger>,
    impl::require<IRfcommConnectionTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IRfcommConnectionTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRfcommConnectionTrigger>(m_ptr); }
};

struct ISecondaryAuthenticationFactorAuthenticationTrigger :
    Windows::IInspectable,
    impl::consume<ISecondaryAuthenticationFactorAuthenticationTrigger>,
    impl::require<ISecondaryAuthenticationFactorAuthenticationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISecondaryAuthenticationFactorAuthenticationTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISecondaryAuthenticationFactorAuthenticationTrigger>(m_ptr); }
};

struct ISensorDataThresholdTrigger :
    Windows::IInspectable,
    impl::consume<ISensorDataThresholdTrigger>,
    impl::require<ISensorDataThresholdTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISensorDataThresholdTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISensorDataThresholdTrigger>(m_ptr); }
};

struct ISensorDataThresholdTriggerFactory :
    Windows::IInspectable,
    impl::consume<ISensorDataThresholdTriggerFactory>
{
    ISensorDataThresholdTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISensorDataThresholdTriggerFactory>(m_ptr); }
};

struct ISmartCardTrigger :
    Windows::IInspectable,
    impl::consume<ISmartCardTrigger>,
    impl::require<ISmartCardTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISmartCardTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardTrigger>(m_ptr); }
};

struct ISmartCardTriggerFactory :
    Windows::IInspectable,
    impl::consume<ISmartCardTriggerFactory>
{
    ISmartCardTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmartCardTriggerFactory>(m_ptr); }
};

struct ISmsMessageReceivedTriggerFactory :
    Windows::IInspectable,
    impl::consume<ISmsMessageReceivedTriggerFactory>
{
    ISmsMessageReceivedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmsMessageReceivedTriggerFactory>(m_ptr); }
};

struct ISocketActivityTrigger :
    Windows::IInspectable,
    impl::consume<ISocketActivityTrigger>
{
    ISocketActivityTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISocketActivityTrigger>(m_ptr); }
};

struct IStorageLibraryContentChangedTrigger :
    Windows::IInspectable,
    impl::consume<IStorageLibraryContentChangedTrigger>,
    impl::require<IStorageLibraryContentChangedTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IStorageLibraryContentChangedTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStorageLibraryContentChangedTrigger>(m_ptr); }
};

struct IStorageLibraryContentChangedTriggerStatics :
    Windows::IInspectable,
    impl::consume<IStorageLibraryContentChangedTriggerStatics>
{
    IStorageLibraryContentChangedTriggerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStorageLibraryContentChangedTriggerStatics>(m_ptr); }
};

struct ISystemCondition :
    Windows::IInspectable,
    impl::consume<ISystemCondition>,
    impl::require<ISystemCondition, Windows::ApplicationModel::Background::IBackgroundCondition>
{
    ISystemCondition(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISystemCondition>(m_ptr); }
};

struct ISystemConditionFactory :
    Windows::IInspectable,
    impl::consume<ISystemConditionFactory>
{
    ISystemConditionFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISystemConditionFactory>(m_ptr); }
};

struct ISystemTrigger :
    Windows::IInspectable,
    impl::consume<ISystemTrigger>,
    impl::require<ISystemTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISystemTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISystemTrigger>(m_ptr); }
};

struct ISystemTriggerFactory :
    Windows::IInspectable,
    impl::consume<ISystemTriggerFactory>
{
    ISystemTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISystemTriggerFactory>(m_ptr); }
};

struct ITimeTrigger :
    Windows::IInspectable,
    impl::consume<ITimeTrigger>,
    impl::require<ITimeTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ITimeTrigger(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimeTrigger>(m_ptr); }
};

struct ITimeTriggerFactory :
    Windows::IInspectable,
    impl::consume<ITimeTriggerFactory>
{
    ITimeTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimeTriggerFactory>(m_ptr); }
};

struct IToastNotificationActionTriggerFactory :
    Windows::IInspectable,
    impl::consume<IToastNotificationActionTriggerFactory>
{
    IToastNotificationActionTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotificationActionTriggerFactory>(m_ptr); }
};

struct IToastNotificationHistoryChangedTriggerFactory :
    Windows::IInspectable,
    impl::consume<IToastNotificationHistoryChangedTriggerFactory>
{
    IToastNotificationHistoryChangedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotificationHistoryChangedTriggerFactory>(m_ptr); }
};

struct IUserNotificationChangedTriggerFactory :
    Windows::IInspectable,
    impl::consume<IUserNotificationChangedTriggerFactory>
{
    IUserNotificationChangedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUserNotificationChangedTriggerFactory>(m_ptr); }
};

}

}
