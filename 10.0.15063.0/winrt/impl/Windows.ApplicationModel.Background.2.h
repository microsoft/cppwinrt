// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.Background.1.h"
#include "winrt/impl/Windows.Devices.Bluetooth.1.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Advertisement.1.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Background.1.h"
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.1.h"
#include "winrt/impl/Windows.Devices.Sensors.1.h"
#include "winrt/impl/Windows.Devices.SmartCards.1.h"
#include "winrt/impl/Windows.Devices.Sms.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Networking.Sockets.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Provider.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.Notifications.1.h"
#include "winrt/impl/Windows.ApplicationModel.Background.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background {

struct BackgroundTaskCanceledEventHandler : Windows::Foundation::IUnknown
{
    BackgroundTaskCanceledEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> BackgroundTaskCanceledEventHandler(L lambda);
    template <typename F> BackgroundTaskCanceledEventHandler(F* function);
    template <typename O, typename M> BackgroundTaskCanceledEventHandler(O* object, M method);
    void operator()(Windows::ApplicationModel::Background::IBackgroundTaskInstance const& sender, Windows::ApplicationModel::Background::BackgroundTaskCancellationReason const& reason) const;
};

struct BackgroundTaskCompletedEventHandler : Windows::Foundation::IUnknown
{
    BackgroundTaskCompletedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> BackgroundTaskCompletedEventHandler(L lambda);
    template <typename F> BackgroundTaskCompletedEventHandler(F* function);
    template <typename O, typename M> BackgroundTaskCompletedEventHandler(O* object, M method);
    void operator()(Windows::ApplicationModel::Background::BackgroundTaskRegistration const& sender, Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs const& args) const;
};

struct BackgroundTaskProgressEventHandler : Windows::Foundation::IUnknown
{
    BackgroundTaskProgressEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> BackgroundTaskProgressEventHandler(L lambda);
    template <typename F> BackgroundTaskProgressEventHandler(F* function);
    template <typename O, typename M> BackgroundTaskProgressEventHandler(O* object, M method);
    void operator()(Windows::ApplicationModel::Background::BackgroundTaskRegistration const& sender, Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs const& args) const;
};

struct WINRT_EBO ActivitySensorTrigger :
    Windows::ApplicationModel::Background::IActivitySensorTrigger
{
    ActivitySensorTrigger(std::nullptr_t) noexcept {}
    ActivitySensorTrigger(uint32_t reportIntervalInMilliseconds);
};

struct AlarmApplicationManager
{
    AlarmApplicationManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::AlarmAccessStatus> RequestAccessAsync();
    static Windows::ApplicationModel::Background::AlarmAccessStatus GetAccessStatus();
};

struct WINRT_EBO AppBroadcastTrigger :
    Windows::ApplicationModel::Background::IAppBroadcastTrigger
{
    AppBroadcastTrigger(std::nullptr_t) noexcept {}
    AppBroadcastTrigger(param::hstring const& providerKey);
};

struct WINRT_EBO AppBroadcastTriggerProviderInfo :
    Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo
{
    AppBroadcastTriggerProviderInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ApplicationTrigger :
    Windows::ApplicationModel::Background::IApplicationTrigger
{
    ApplicationTrigger(std::nullptr_t) noexcept {}
    ApplicationTrigger();
};

struct WINRT_EBO ApplicationTriggerDetails :
    Windows::ApplicationModel::Background::IApplicationTriggerDetails
{
    ApplicationTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppointmentStoreNotificationTrigger :
    Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger
{
    AppointmentStoreNotificationTrigger(std::nullptr_t) noexcept {}
    AppointmentStoreNotificationTrigger();
};

struct BackgroundExecutionManager
{
    BackgroundExecutionManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus> RequestAccessAsync();
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus> RequestAccessAsync(param::hstring const& applicationId);
    static void RemoveAccess();
    static void RemoveAccess(param::hstring const& applicationId);
    static Windows::ApplicationModel::Background::BackgroundAccessStatus GetAccessStatus();
    static Windows::ApplicationModel::Background::BackgroundAccessStatus GetAccessStatus(param::hstring const& applicationId);
};

struct WINRT_EBO BackgroundTaskBuilder :
    Windows::ApplicationModel::Background::IBackgroundTaskBuilder,
    impl::require<BackgroundTaskBuilder, Windows::ApplicationModel::Background::IBackgroundTaskBuilder2, Windows::ApplicationModel::Background::IBackgroundTaskBuilder3, Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>
{
    BackgroundTaskBuilder(std::nullptr_t) noexcept {}
    BackgroundTaskBuilder();
};

struct WINRT_EBO BackgroundTaskCompletedEventArgs :
    Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs
{
    BackgroundTaskCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BackgroundTaskDeferral :
    Windows::ApplicationModel::Background::IBackgroundTaskDeferral
{
    BackgroundTaskDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BackgroundTaskProgressEventArgs :
    Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs
{
    BackgroundTaskProgressEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BackgroundTaskRegistration :
    Windows::ApplicationModel::Background::IBackgroundTaskRegistration,
    impl::require<BackgroundTaskRegistration, Windows::ApplicationModel::Background::IBackgroundTaskRegistration2, Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>
{
    BackgroundTaskRegistration(std::nullptr_t) noexcept {}
    static Windows::Foundation::Collections::IMapView<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> AllTasks();
    static Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> AllTaskGroups();
    static Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup GetTaskGroup(param::hstring const& groupId);
};

struct WINRT_EBO BackgroundTaskRegistrationGroup :
    Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup
{
    BackgroundTaskRegistrationGroup(std::nullptr_t) noexcept {}
    BackgroundTaskRegistrationGroup(param::hstring const& id);
    BackgroundTaskRegistrationGroup(param::hstring const& id, param::hstring const& name);
};

struct BackgroundWorkCost
{
    BackgroundWorkCost() = delete;
    static Windows::ApplicationModel::Background::BackgroundWorkCostValue CurrentBackgroundWorkCost();
};

struct WINRT_EBO BluetoothLEAdvertisementPublisherTrigger :
    Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger
{
    BluetoothLEAdvertisementPublisherTrigger(std::nullptr_t) noexcept {}
    BluetoothLEAdvertisementPublisherTrigger();
};

struct WINRT_EBO BluetoothLEAdvertisementWatcherTrigger :
    Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger
{
    BluetoothLEAdvertisementWatcherTrigger(std::nullptr_t) noexcept {}
    BluetoothLEAdvertisementWatcherTrigger();
};

struct WINRT_EBO CachedFileUpdaterTrigger :
    Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger
{
    CachedFileUpdaterTrigger(std::nullptr_t) noexcept {}
    CachedFileUpdaterTrigger();
};

struct WINRT_EBO CachedFileUpdaterTriggerDetails :
    Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails
{
    CachedFileUpdaterTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatMessageNotificationTrigger :
    Windows::ApplicationModel::Background::IChatMessageNotificationTrigger
{
    ChatMessageNotificationTrigger(std::nullptr_t) noexcept {}
    ChatMessageNotificationTrigger();
};

struct WINRT_EBO ChatMessageReceivedNotificationTrigger :
    Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger
{
    ChatMessageReceivedNotificationTrigger(std::nullptr_t) noexcept {}
    ChatMessageReceivedNotificationTrigger();
};

struct WINRT_EBO CommunicationBlockingAppSetAsActiveTrigger :
    Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger
{
    CommunicationBlockingAppSetAsActiveTrigger(std::nullptr_t) noexcept {}
    CommunicationBlockingAppSetAsActiveTrigger();
};

struct WINRT_EBO ContactStoreNotificationTrigger :
    Windows::ApplicationModel::Background::IContactStoreNotificationTrigger
{
    ContactStoreNotificationTrigger(std::nullptr_t) noexcept {}
    ContactStoreNotificationTrigger();
};

struct WINRT_EBO ContentPrefetchTrigger :
    Windows::ApplicationModel::Background::IContentPrefetchTrigger
{
    ContentPrefetchTrigger(std::nullptr_t) noexcept {}
    ContentPrefetchTrigger();
    ContentPrefetchTrigger(Windows::Foundation::TimeSpan const& waitInterval);
};

struct WINRT_EBO DeviceConnectionChangeTrigger :
    Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger
{
    DeviceConnectionChangeTrigger(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> FromIdAsync(param::hstring const& deviceId);
};

struct WINRT_EBO DeviceManufacturerNotificationTrigger :
    Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger
{
    DeviceManufacturerNotificationTrigger(std::nullptr_t) noexcept {}
    DeviceManufacturerNotificationTrigger(param::hstring const& triggerQualifier, bool oneShot);
};

struct WINRT_EBO DeviceServicingTrigger :
    Windows::ApplicationModel::Background::IDeviceServicingTrigger
{
    DeviceServicingTrigger(std::nullptr_t) noexcept {}
    DeviceServicingTrigger();
};

struct WINRT_EBO DeviceUseTrigger :
    Windows::ApplicationModel::Background::IDeviceUseTrigger
{
    DeviceUseTrigger(std::nullptr_t) noexcept {}
    DeviceUseTrigger();
};

struct WINRT_EBO DeviceWatcherTrigger :
    Windows::ApplicationModel::Background::IDeviceWatcherTrigger
{
    DeviceWatcherTrigger(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailStoreNotificationTrigger :
    Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger
{
    EmailStoreNotificationTrigger(std::nullptr_t) noexcept {}
    EmailStoreNotificationTrigger();
};

struct WINRT_EBO GattCharacteristicNotificationTrigger :
    Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger,
    impl::require<GattCharacteristicNotificationTrigger, Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>
{
    GattCharacteristicNotificationTrigger(std::nullptr_t) noexcept {}
    GattCharacteristicNotificationTrigger(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic);
    GattCharacteristicNotificationTrigger(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic, Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode const& eventTriggeringMode);
};

struct WINRT_EBO GattServiceProviderTrigger :
    Windows::ApplicationModel::Background::IGattServiceProviderTrigger,
    impl::require<GattServiceProviderTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    GattServiceProviderTrigger(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult> CreateAsync(param::hstring const& triggerId, GUID const& serviceUuid);
};

struct WINRT_EBO GattServiceProviderTriggerResult :
    Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult
{
    GattServiceProviderTriggerResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LocationTrigger :
    Windows::ApplicationModel::Background::ILocationTrigger
{
    LocationTrigger(std::nullptr_t) noexcept {}
    LocationTrigger(Windows::ApplicationModel::Background::LocationTriggerType const& triggerType);
};

struct WINRT_EBO MaintenanceTrigger :
    Windows::ApplicationModel::Background::IMaintenanceTrigger
{
    MaintenanceTrigger(std::nullptr_t) noexcept {}
    MaintenanceTrigger(uint32_t freshnessTime, bool oneShot);
};

struct WINRT_EBO MediaProcessingTrigger :
    Windows::ApplicationModel::Background::IMediaProcessingTrigger
{
    MediaProcessingTrigger(std::nullptr_t) noexcept {}
    MediaProcessingTrigger();
};

struct WINRT_EBO MobileBroadbandDeviceServiceNotificationTrigger :
    Windows::ApplicationModel::Background::IBackgroundTrigger
{
    MobileBroadbandDeviceServiceNotificationTrigger(std::nullptr_t) noexcept {}
    MobileBroadbandDeviceServiceNotificationTrigger();
};

struct WINRT_EBO MobileBroadbandPinLockStateChangeTrigger :
    Windows::ApplicationModel::Background::IBackgroundTrigger
{
    MobileBroadbandPinLockStateChangeTrigger(std::nullptr_t) noexcept {}
    MobileBroadbandPinLockStateChangeTrigger();
};

struct WINRT_EBO MobileBroadbandRadioStateChangeTrigger :
    Windows::ApplicationModel::Background::IBackgroundTrigger
{
    MobileBroadbandRadioStateChangeTrigger(std::nullptr_t) noexcept {}
    MobileBroadbandRadioStateChangeTrigger();
};

struct WINRT_EBO MobileBroadbandRegistrationStateChangeTrigger :
    Windows::ApplicationModel::Background::IBackgroundTrigger
{
    MobileBroadbandRegistrationStateChangeTrigger(std::nullptr_t) noexcept {}
    MobileBroadbandRegistrationStateChangeTrigger();
};

struct WINRT_EBO NetworkOperatorHotspotAuthenticationTrigger :
    Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger
{
    NetworkOperatorHotspotAuthenticationTrigger(std::nullptr_t) noexcept {}
    NetworkOperatorHotspotAuthenticationTrigger();
};

struct WINRT_EBO NetworkOperatorNotificationTrigger :
    Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger
{
    NetworkOperatorNotificationTrigger(std::nullptr_t) noexcept {}
    NetworkOperatorNotificationTrigger(param::hstring const& networkAccountId);
};

struct WINRT_EBO PhoneTrigger :
    Windows::ApplicationModel::Background::IPhoneTrigger
{
    PhoneTrigger(std::nullptr_t) noexcept {}
    PhoneTrigger(Windows::ApplicationModel::Calls::Background::PhoneTriggerType const& type, bool oneShot);
};

struct WINRT_EBO PushNotificationTrigger :
    Windows::ApplicationModel::Background::IBackgroundTrigger
{
    PushNotificationTrigger(std::nullptr_t) noexcept {}
    PushNotificationTrigger();
    PushNotificationTrigger(param::hstring const& applicationId);
};

struct WINRT_EBO RcsEndUserMessageAvailableTrigger :
    Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger
{
    RcsEndUserMessageAvailableTrigger(std::nullptr_t) noexcept {}
    RcsEndUserMessageAvailableTrigger();
};

struct WINRT_EBO RfcommConnectionTrigger :
    Windows::ApplicationModel::Background::IRfcommConnectionTrigger
{
    RfcommConnectionTrigger(std::nullptr_t) noexcept {}
    RfcommConnectionTrigger();
};

struct WINRT_EBO SecondaryAuthenticationFactorAuthenticationTrigger :
    Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger
{
    SecondaryAuthenticationFactorAuthenticationTrigger(std::nullptr_t) noexcept {}
    SecondaryAuthenticationFactorAuthenticationTrigger();
};

struct WINRT_EBO SensorDataThresholdTrigger :
    Windows::ApplicationModel::Background::ISensorDataThresholdTrigger
{
    SensorDataThresholdTrigger(std::nullptr_t) noexcept {}
    SensorDataThresholdTrigger(Windows::Devices::Sensors::ISensorDataThreshold const& threshold);
};

struct WINRT_EBO SmartCardTrigger :
    Windows::ApplicationModel::Background::ISmartCardTrigger
{
    SmartCardTrigger(std::nullptr_t) noexcept {}
    SmartCardTrigger(Windows::Devices::SmartCards::SmartCardTriggerType const& triggerType);
};

struct WINRT_EBO SmsMessageReceivedTrigger :
    Windows::ApplicationModel::Background::IBackgroundTrigger
{
    SmsMessageReceivedTrigger(std::nullptr_t) noexcept {}
    SmsMessageReceivedTrigger(Windows::Devices::Sms::SmsFilterRules const& filterRules);
};

struct WINRT_EBO SocketActivityTrigger :
    Windows::ApplicationModel::Background::IBackgroundTrigger,
    impl::require<SocketActivityTrigger, Windows::ApplicationModel::Background::ISocketActivityTrigger>
{
    SocketActivityTrigger(std::nullptr_t) noexcept {}
    SocketActivityTrigger();
};

struct WINRT_EBO StorageLibraryContentChangedTrigger :
    Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger
{
    StorageLibraryContentChangedTrigger(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger Create(Windows::Storage::StorageLibrary const& storageLibrary);
    static Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger CreateFromLibraries(param::iterable<Windows::Storage::StorageLibrary> const& storageLibraries);
};

struct WINRT_EBO SystemCondition :
    Windows::ApplicationModel::Background::ISystemCondition
{
    SystemCondition(std::nullptr_t) noexcept {}
    SystemCondition(Windows::ApplicationModel::Background::SystemConditionType const& conditionType);
};

struct WINRT_EBO SystemTrigger :
    Windows::ApplicationModel::Background::ISystemTrigger
{
    SystemTrigger(std::nullptr_t) noexcept {}
    SystemTrigger(Windows::ApplicationModel::Background::SystemTriggerType const& triggerType, bool oneShot);
};

struct WINRT_EBO TimeTrigger :
    Windows::ApplicationModel::Background::ITimeTrigger
{
    TimeTrigger(std::nullptr_t) noexcept {}
    TimeTrigger(uint32_t freshnessTime, bool oneShot);
};

struct WINRT_EBO ToastNotificationActionTrigger :
    Windows::ApplicationModel::Background::IBackgroundTrigger
{
    ToastNotificationActionTrigger(std::nullptr_t) noexcept {}
    ToastNotificationActionTrigger();
    ToastNotificationActionTrigger(param::hstring const& applicationId);
};

struct WINRT_EBO ToastNotificationHistoryChangedTrigger :
    Windows::ApplicationModel::Background::IBackgroundTrigger
{
    ToastNotificationHistoryChangedTrigger(std::nullptr_t) noexcept {}
    ToastNotificationHistoryChangedTrigger();
    ToastNotificationHistoryChangedTrigger(param::hstring const& applicationId);
};

struct WINRT_EBO UserNotificationChangedTrigger :
    Windows::ApplicationModel::Background::IBackgroundTrigger
{
    UserNotificationChangedTrigger(std::nullptr_t) noexcept {}
    UserNotificationChangedTrigger(Windows::UI::Notifications::NotificationKinds const& notificationKinds);
};

}
