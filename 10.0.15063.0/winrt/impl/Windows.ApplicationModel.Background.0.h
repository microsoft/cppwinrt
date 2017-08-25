// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation {

struct BackgroundActivatedEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Background {

enum class PhoneTriggerType;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth {

enum class BluetoothError;
struct BluetoothSignalStrengthFilter;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Advertisement {

struct BluetoothLEAdvertisement;
struct BluetoothLEAdvertisementFilter;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Background {

enum class BluetoothEventTriggeringMode;
struct RfcommInboundConnectionInformation;
struct RfcommOutboundConnectionInformation;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::GenericAttributeProfile {

struct GattCharacteristic;
struct GattLocalService;
struct GattServiceProviderAdvertisingParameters;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Sensors {

enum class ActivityType;
struct ISensorDataThreshold;

}

WINRT_EXPORT namespace winrt::Windows::Devices::SmartCards {

enum class SmartCardTriggerType;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Sms {

struct SmsFilterRules;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::Networking {

struct HostName;

}

WINRT_EXPORT namespace winrt::Windows::Networking::Sockets {

enum class SocketProtectionLevel;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct StorageLibrary;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Provider {

enum class CachedFileTarget;
struct FileUpdateRequest;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::UI::Notifications {

enum class NotificationKinds : unsigned;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background {

enum class AlarmAccessStatus
{
    Unspecified = 0,
    AllowedWithWakeupCapability = 1,
    AllowedWithoutWakeupCapability = 2,
    Denied = 3,
};

enum class ApplicationTriggerResult
{
    Allowed = 0,
    CurrentlyRunning = 1,
    DisabledByPolicy = 2,
    UnknownError = 3,
};

enum class BackgroundAccessStatus
{
    Unspecified = 0,
    AllowedWithAlwaysOnRealTimeConnectivity [[deprecated("Use AlwaysAllowed or AllowedSubjectToSystemPolicy instead of AllowedWithAlwaysOnRealTimeConnectivity. For more info, see MSDN.")]] = 1,
    AllowedMayUseActiveRealTimeConnectivity [[deprecated("Use AlwaysAllowed or AllowedSubjectToSystemPolicy instead of AllowedMayUseActiveRealTimeConnectivity. For more info, see MSDN.")]] = 2,
    Denied [[deprecated("Use DeniedByUser or DeniedBySystemPolicy instead of Denied. For more info, see MSDN.")]] = 3,
    AlwaysAllowed = 4,
    AllowedSubjectToSystemPolicy = 5,
    DeniedBySystemPolicy = 6,
    DeniedByUser = 7,
};

enum class BackgroundTaskCancellationReason
{
    Abort = 0,
    Terminating = 1,
    LoggingOff = 2,
    ServicingUpdate = 3,
    IdleTask = 4,
    Uninstall = 5,
    ConditionLoss = 6,
    SystemPolicy = 7,
    QuietHoursEntered [[deprecated("QuietHoursEntered is deprecated after Windows 8.1")]] = 8,
    ExecutionTimeExceeded = 9,
    ResourceRevocation = 10,
    EnergySaver = 11,
};

enum class BackgroundTaskThrottleCounter
{
    All = 0,
    Cpu = 1,
    Network = 2,
};

enum class BackgroundWorkCostValue
{
    Low = 0,
    Medium = 1,
    High = 2,
};

enum class DeviceTriggerResult
{
    Allowed = 0,
    DeniedByUser = 1,
    DeniedBySystem = 2,
    LowBattery = 3,
};

enum class LocationTriggerType
{
    Geofence = 0,
};

enum class MediaProcessingTriggerResult
{
    Allowed = 0,
    CurrentlyRunning = 1,
    DisabledByPolicy = 2,
    UnknownError = 3,
};

enum class SystemConditionType
{
    Invalid = 0,
    UserPresent = 1,
    UserNotPresent = 2,
    InternetAvailable = 3,
    InternetNotAvailable = 4,
    SessionConnected = 5,
    SessionDisconnected = 6,
    FreeNetworkAvailable = 7,
    BackgroundWorkCostNotHigh = 8,
};

enum class SystemTriggerType
{
    Invalid = 0,
    SmsReceived = 1,
    UserPresent = 2,
    UserAway = 3,
    NetworkStateChange = 4,
    ControlChannelReset = 5,
    InternetAvailable = 6,
    SessionConnected = 7,
    ServicingComplete = 8,
    LockScreenApplicationAdded = 9,
    LockScreenApplicationRemoved = 10,
    TimeZoneChange = 11,
    OnlineIdConnectedStateChange = 12,
    BackgroundWorkCostChange = 13,
    PowerStateChange = 14,
    DefaultSignInAccountChange = 15,
};

struct IActivitySensorTrigger;
struct IActivitySensorTriggerFactory;
struct IAlarmApplicationManagerStatics;
struct IAppBroadcastTrigger;
struct IAppBroadcastTriggerFactory;
struct IAppBroadcastTriggerProviderInfo;
struct IApplicationTrigger;
struct IApplicationTriggerDetails;
struct IAppointmentStoreNotificationTrigger;
struct IBackgroundCondition;
struct IBackgroundExecutionManagerStatics;
struct IBackgroundTask;
struct IBackgroundTaskBuilder;
struct IBackgroundTaskBuilder2;
struct IBackgroundTaskBuilder3;
struct IBackgroundTaskBuilder4;
struct IBackgroundTaskCompletedEventArgs;
struct IBackgroundTaskDeferral;
struct IBackgroundTaskInstance;
struct IBackgroundTaskInstance2;
struct IBackgroundTaskInstance4;
struct IBackgroundTaskProgressEventArgs;
struct IBackgroundTaskRegistration;
struct IBackgroundTaskRegistration2;
struct IBackgroundTaskRegistration3;
struct IBackgroundTaskRegistrationGroup;
struct IBackgroundTaskRegistrationGroupFactory;
struct IBackgroundTaskRegistrationStatics;
struct IBackgroundTaskRegistrationStatics2;
struct IBackgroundTrigger;
struct IBackgroundWorkCostStatics;
struct IBluetoothLEAdvertisementPublisherTrigger;
struct IBluetoothLEAdvertisementWatcherTrigger;
struct ICachedFileUpdaterTrigger;
struct ICachedFileUpdaterTriggerDetails;
struct IChatMessageNotificationTrigger;
struct IChatMessageReceivedNotificationTrigger;
struct ICommunicationBlockingAppSetAsActiveTrigger;
struct IContactStoreNotificationTrigger;
struct IContentPrefetchTrigger;
struct IContentPrefetchTriggerFactory;
struct IDeviceConnectionChangeTrigger;
struct IDeviceConnectionChangeTriggerStatics;
struct IDeviceManufacturerNotificationTrigger;
struct IDeviceManufacturerNotificationTriggerFactory;
struct IDeviceServicingTrigger;
struct IDeviceUseTrigger;
struct IDeviceWatcherTrigger;
struct IEmailStoreNotificationTrigger;
struct IGattCharacteristicNotificationTrigger;
struct IGattCharacteristicNotificationTrigger2;
struct IGattCharacteristicNotificationTriggerFactory;
struct IGattCharacteristicNotificationTriggerFactory2;
struct IGattServiceProviderTrigger;
struct IGattServiceProviderTriggerResult;
struct IGattServiceProviderTriggerStatics;
struct ILocationTrigger;
struct ILocationTriggerFactory;
struct IMaintenanceTrigger;
struct IMaintenanceTriggerFactory;
struct IMediaProcessingTrigger;
struct INetworkOperatorHotspotAuthenticationTrigger;
struct INetworkOperatorNotificationTrigger;
struct INetworkOperatorNotificationTriggerFactory;
struct IPhoneTrigger;
struct IPhoneTriggerFactory;
struct IPushNotificationTriggerFactory;
struct IRcsEndUserMessageAvailableTrigger;
struct IRfcommConnectionTrigger;
struct ISecondaryAuthenticationFactorAuthenticationTrigger;
struct ISensorDataThresholdTrigger;
struct ISensorDataThresholdTriggerFactory;
struct ISmartCardTrigger;
struct ISmartCardTriggerFactory;
struct ISmsMessageReceivedTriggerFactory;
struct ISocketActivityTrigger;
struct IStorageLibraryContentChangedTrigger;
struct IStorageLibraryContentChangedTriggerStatics;
struct ISystemCondition;
struct ISystemConditionFactory;
struct ISystemTrigger;
struct ISystemTriggerFactory;
struct ITimeTrigger;
struct ITimeTriggerFactory;
struct IToastNotificationActionTriggerFactory;
struct IToastNotificationHistoryChangedTriggerFactory;
struct IUserNotificationChangedTriggerFactory;
struct ActivitySensorTrigger;
struct AlarmApplicationManager;
struct AppBroadcastTrigger;
struct AppBroadcastTriggerProviderInfo;
struct ApplicationTrigger;
struct ApplicationTriggerDetails;
struct AppointmentStoreNotificationTrigger;
struct BackgroundExecutionManager;
struct BackgroundTaskBuilder;
struct BackgroundTaskCompletedEventArgs;
struct BackgroundTaskDeferral;
struct BackgroundTaskProgressEventArgs;
struct BackgroundTaskRegistration;
struct BackgroundTaskRegistrationGroup;
struct BackgroundWorkCost;
struct BluetoothLEAdvertisementPublisherTrigger;
struct BluetoothLEAdvertisementWatcherTrigger;
struct CachedFileUpdaterTrigger;
struct CachedFileUpdaterTriggerDetails;
struct ChatMessageNotificationTrigger;
struct ChatMessageReceivedNotificationTrigger;
struct CommunicationBlockingAppSetAsActiveTrigger;
struct ContactStoreNotificationTrigger;
struct ContentPrefetchTrigger;
struct DeviceConnectionChangeTrigger;
struct DeviceManufacturerNotificationTrigger;
struct DeviceServicingTrigger;
struct DeviceUseTrigger;
struct DeviceWatcherTrigger;
struct EmailStoreNotificationTrigger;
struct GattCharacteristicNotificationTrigger;
struct GattServiceProviderTrigger;
struct GattServiceProviderTriggerResult;
struct LocationTrigger;
struct MaintenanceTrigger;
struct MediaProcessingTrigger;
struct MobileBroadbandDeviceServiceNotificationTrigger;
struct MobileBroadbandPinLockStateChangeTrigger;
struct MobileBroadbandRadioStateChangeTrigger;
struct MobileBroadbandRegistrationStateChangeTrigger;
struct NetworkOperatorHotspotAuthenticationTrigger;
struct NetworkOperatorNotificationTrigger;
struct PhoneTrigger;
struct PushNotificationTrigger;
struct RcsEndUserMessageAvailableTrigger;
struct RfcommConnectionTrigger;
struct SecondaryAuthenticationFactorAuthenticationTrigger;
struct SensorDataThresholdTrigger;
struct SmartCardTrigger;
struct SmsMessageReceivedTrigger;
struct SocketActivityTrigger;
struct StorageLibraryContentChangedTrigger;
struct SystemCondition;
struct SystemTrigger;
struct TimeTrigger;
struct ToastNotificationActionTrigger;
struct ToastNotificationHistoryChangedTrigger;
struct UserNotificationChangedTrigger;
struct BackgroundTaskCanceledEventHandler;
struct BackgroundTaskCompletedEventHandler;
struct BackgroundTaskProgressEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Background::IActivitySensorTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IAppBroadcastTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IApplicationTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IApplicationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundCondition>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTask>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskDeferral>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskInstance>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskInstance2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskInstance4>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IContentPrefetchTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IDeviceServicingTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IDeviceUseTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IDeviceWatcherTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IGattServiceProviderTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ILocationTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ILocationTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IMaintenanceTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IMediaProcessingTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IPhoneTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IPhoneTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IRfcommConnectionTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ISmartCardTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ISmartCardTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ISocketActivityTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ISystemCondition>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ISystemConditionFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ISystemTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ISystemTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ITimeTrigger>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ITimeTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Background::ActivitySensorTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::AlarmApplicationManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::AppBroadcastTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::ApplicationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::ApplicationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundExecutionManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskBuilder>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskDeferral>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskRegistration>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundWorkCost>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::CachedFileUpdaterTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::ChatMessageNotificationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::ContactStoreNotificationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::ContentPrefetchTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::DeviceServicingTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::DeviceUseTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::DeviceWatcherTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::EmailStoreNotificationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::GattServiceProviderTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::LocationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::MaintenanceTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::MediaProcessingTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::PhoneTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::PushNotificationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::RfcommConnectionTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::SensorDataThresholdTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::SmartCardTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::SmsMessageReceivedTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::SocketActivityTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::SystemCondition>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::SystemTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::TimeTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::ToastNotificationActionTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::UserNotificationChangedTrigger>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Background::AlarmAccessStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Background::ApplicationTriggerResult>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundAccessStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskCancellationReason>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundWorkCostValue>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Background::DeviceTriggerResult>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Background::LocationTriggerType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Background::MediaProcessingTriggerResult>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Background::SystemConditionType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Background::SystemTriggerType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::ApplicationModel::Background::IActivitySensorTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IActivitySensorTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IActivitySensorTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IAlarmApplicationManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Background::IAppBroadcastTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IAppBroadcastTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IAppBroadcastTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IAppBroadcastTriggerProviderInfo" }; };
template <> struct name<Windows::ApplicationModel::Background::IApplicationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IApplicationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IApplicationTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IApplicationTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IAppointmentStoreNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundCondition>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundCondition" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundExecutionManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTask>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTask" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder2" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder3" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder4" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskCompletedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskDeferral" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskInstance>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskInstance" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskInstance2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskInstance2" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskInstance4>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskInstance4" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskProgressEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistration" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistration2" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistration3" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationGroup" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationGroupFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationStatics" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationStatics2" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBackgroundWorkCostStatics" }; };
template <> struct name<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBluetoothLEAdvertisementPublisherTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IBluetoothLEAdvertisementWatcherTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ICachedFileUpdaterTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ICachedFileUpdaterTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IChatMessageNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IChatMessageReceivedNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ICommunicationBlockingAppSetAsActiveTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IContactStoreNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IContentPrefetchTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IContentPrefetchTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IContentPrefetchTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceConnectionChangeTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceConnectionChangeTriggerStatics" }; };
template <> struct name<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceManufacturerNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceManufacturerNotificationTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IDeviceServicingTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceServicingTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IDeviceUseTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceUseTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IDeviceWatcherTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IDeviceWatcherTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IEmailStoreNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTrigger2" }; };
template <> struct name<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTriggerFactory2" }; };
template <> struct name<Windows::ApplicationModel::Background::IGattServiceProviderTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattServiceProviderTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattServiceProviderTriggerResult" }; };
template <> struct name<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IGattServiceProviderTriggerStatics" }; };
template <> struct name<Windows::ApplicationModel::Background::ILocationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ILocationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ILocationTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ILocationTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IMaintenanceTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IMaintenanceTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IMaintenanceTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IMediaProcessingTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IMediaProcessingTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.INetworkOperatorHotspotAuthenticationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.INetworkOperatorNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.INetworkOperatorNotificationTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IPhoneTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IPhoneTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IPhoneTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IPhoneTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IPushNotificationTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IRcsEndUserMessageAvailableTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IRfcommConnectionTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IRfcommConnectionTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISecondaryAuthenticationFactorAuthenticationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISensorDataThresholdTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISensorDataThresholdTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::ISmartCardTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISmartCardTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ISmartCardTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISmartCardTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISmsMessageReceivedTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::ISocketActivityTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISocketActivityTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IStorageLibraryContentChangedTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IStorageLibraryContentChangedTriggerStatics" }; };
template <> struct name<Windows::ApplicationModel::Background::ISystemCondition>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISystemCondition" }; };
template <> struct name<Windows::ApplicationModel::Background::ISystemConditionFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISystemConditionFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::ISystemTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISystemTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ISystemTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ISystemTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::ITimeTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ITimeTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ITimeTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ITimeTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IToastNotificationActionTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IToastNotificationHistoryChangedTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.IUserNotificationChangedTriggerFactory" }; };
template <> struct name<Windows::ApplicationModel::Background::ActivitySensorTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ActivitySensorTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::AlarmApplicationManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.AlarmApplicationManager" }; };
template <> struct name<Windows::ApplicationModel::Background::AppBroadcastTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.AppBroadcastTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.AppBroadcastTriggerProviderInfo" }; };
template <> struct name<Windows::ApplicationModel::Background::ApplicationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ApplicationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ApplicationTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ApplicationTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.AppointmentStoreNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundExecutionManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundExecutionManager" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskBuilder>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskBuilder" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskCompletedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskDeferral" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskProgressEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskRegistration>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskRegistration" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskRegistrationGroup" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundWorkCost>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundWorkCost" }; };
template <> struct name<Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BluetoothLEAdvertisementPublisherTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BluetoothLEAdvertisementWatcherTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::CachedFileUpdaterTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.CachedFileUpdaterTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.CachedFileUpdaterTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Background::ChatMessageNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ChatMessageNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ChatMessageReceivedNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.CommunicationBlockingAppSetAsActiveTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ContactStoreNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ContactStoreNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ContentPrefetchTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ContentPrefetchTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.DeviceConnectionChangeTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.DeviceManufacturerNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::DeviceServicingTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.DeviceServicingTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::DeviceUseTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.DeviceUseTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::DeviceWatcherTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.DeviceWatcherTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::EmailStoreNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.EmailStoreNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.GattCharacteristicNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::GattServiceProviderTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.GattServiceProviderTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.GattServiceProviderTriggerResult" }; };
template <> struct name<Windows::ApplicationModel::Background::LocationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.LocationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::MaintenanceTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.MaintenanceTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::MediaProcessingTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.MediaProcessingTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.MobileBroadbandDeviceServiceNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.MobileBroadbandPinLockStateChangeTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.MobileBroadbandRadioStateChangeTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.MobileBroadbandRegistrationStateChangeTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.NetworkOperatorHotspotAuthenticationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.NetworkOperatorNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::PhoneTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.PhoneTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::PushNotificationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.PushNotificationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.RcsEndUserMessageAvailableTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::RfcommConnectionTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.RfcommConnectionTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.SecondaryAuthenticationFactorAuthenticationTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::SensorDataThresholdTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.SensorDataThresholdTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::SmartCardTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.SmartCardTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::SmsMessageReceivedTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.SmsMessageReceivedTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::SocketActivityTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.SocketActivityTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.StorageLibraryContentChangedTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::SystemCondition>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.SystemCondition" }; };
template <> struct name<Windows::ApplicationModel::Background::SystemTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.SystemTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::TimeTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.TimeTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ToastNotificationActionTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ToastNotificationActionTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ToastNotificationHistoryChangedTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::UserNotificationChangedTrigger>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.UserNotificationChangedTrigger" }; };
template <> struct name<Windows::ApplicationModel::Background::AlarmAccessStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.AlarmAccessStatus" }; };
template <> struct name<Windows::ApplicationModel::Background::ApplicationTriggerResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.ApplicationTriggerResult" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundAccessStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundAccessStatus" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskCancellationReason>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskCancellationReason" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskThrottleCounter" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundWorkCostValue>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundWorkCostValue" }; };
template <> struct name<Windows::ApplicationModel::Background::DeviceTriggerResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.DeviceTriggerResult" }; };
template <> struct name<Windows::ApplicationModel::Background::LocationTriggerType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.LocationTriggerType" }; };
template <> struct name<Windows::ApplicationModel::Background::MediaProcessingTriggerResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.MediaProcessingTriggerResult" }; };
template <> struct name<Windows::ApplicationModel::Background::SystemConditionType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.SystemConditionType" }; };
template <> struct name<Windows::ApplicationModel::Background::SystemTriggerType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.SystemTriggerType" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskCanceledEventHandler" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskCompletedEventHandler" }; };
template <> struct name<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler>{ static constexpr auto & value{ L"Windows.ApplicationModel.Background.BackgroundTaskProgressEventHandler" }; };
template <> struct guid<Windows::ApplicationModel::Background::IActivitySensorTrigger>{ static constexpr GUID value{ 0xD0DD4342,0xE37B,0x4823,{ 0xA5,0xFE,0x6B,0x31,0xDF,0xEF,0xDE,0xB0 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>{ static constexpr GUID value{ 0xA72691C3,0x3837,0x44F7,{ 0x83,0x1B,0x01,0x32,0xCC,0x87,0x2B,0xC3 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>{ static constexpr GUID value{ 0xCA03FA3B,0xCCE6,0x4DE2,{ 0xB0,0x9B,0x96,0x28,0xBD,0x33,0xBB,0xBE } }; };
template <> struct guid<Windows::ApplicationModel::Background::IAppBroadcastTrigger>{ static constexpr GUID value{ 0x74D4F496,0x8D37,0x44EC,{ 0x94,0x81,0x2A,0x0B,0x98,0x54,0xEB,0x48 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>{ static constexpr GUID value{ 0x280B9F44,0x22F4,0x4618,{ 0xA0,0x2E,0xE7,0xE4,0x11,0xEB,0x72,0x38 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>{ static constexpr GUID value{ 0xF219352D,0x9DE8,0x4420,{ 0x9C,0xE2,0x5E,0xFF,0x8F,0x17,0x37,0x6B } }; };
template <> struct guid<Windows::ApplicationModel::Background::IApplicationTrigger>{ static constexpr GUID value{ 0x0B468630,0x9574,0x492C,{ 0x9E,0x93,0x1A,0x3A,0xE6,0x33,0x5F,0xE9 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IApplicationTriggerDetails>{ static constexpr GUID value{ 0x97DC6AB2,0x2219,0x4A9E,{ 0x9C,0x5E,0x41,0xD0,0x47,0xF7,0x6E,0x82 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>{ static constexpr GUID value{ 0x64D4040C,0xC201,0x42AD,{ 0xAA,0x2A,0xE2,0x1B,0xA3,0x42,0x5B,0x6D } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundCondition>{ static constexpr GUID value{ 0xAE48A1EE,0x8951,0x400A,{ 0x83,0x02,0x9C,0x9C,0x9A,0x2A,0x3A,0x3B } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>{ static constexpr GUID value{ 0xE826EA58,0x66A9,0x4D41,{ 0x83,0xD4,0xB4,0xC1,0x8C,0x87,0xB8,0x46 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTask>{ static constexpr GUID value{ 0x7D13D534,0xFD12,0x43CE,{ 0x8C,0x22,0xEA,0x1F,0xF1,0x3C,0x06,0xDF } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>{ static constexpr GUID value{ 0x0351550E,0x3E64,0x4572,{ 0xA9,0x3A,0x84,0x07,0x5A,0x37,0xC9,0x17 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>{ static constexpr GUID value{ 0x6AE7CFB1,0x104F,0x406D,{ 0x8D,0xB6,0x84,0x4A,0x57,0x0F,0x42,0xBB } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>{ static constexpr GUID value{ 0x28C74F4A,0x8BA9,0x4C09,{ 0xA2,0x4F,0x19,0x68,0x3E,0x2C,0x92,0x4C } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>{ static constexpr GUID value{ 0x4755E522,0xCBA2,0x4E35,{ 0xBD,0x16,0xA6,0xDA,0x7F,0x1C,0x19,0xAA } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>{ static constexpr GUID value{ 0x565D25CF,0xF209,0x48F4,{ 0x99,0x67,0x2B,0x18,0x4F,0x7B,0xFB,0xF0 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskDeferral>{ static constexpr GUID value{ 0x93CC156D,0xAF27,0x4DD3,{ 0x84,0x6E,0x24,0xEE,0x40,0xCA,0xDD,0x25 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskInstance>{ static constexpr GUID value{ 0x865BDA7A,0x21D8,0x4573,{ 0x8F,0x32,0x92,0x8A,0x1B,0x06,0x41,0xF6 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskInstance2>{ static constexpr GUID value{ 0x4F7D0176,0x0C76,0x4FB4,{ 0x89,0x6D,0x5D,0xE1,0x86,0x41,0x22,0xF6 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskInstance4>{ static constexpr GUID value{ 0x7F29F23C,0xAA04,0x4B08,{ 0x97,0xB0,0x06,0xD8,0x74,0xCD,0xAB,0xF5 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>{ static constexpr GUID value{ 0xFB1468AC,0x8332,0x4D0A,{ 0x95,0x32,0x03,0xEA,0xE6,0x84,0xDA,0x31 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>{ static constexpr GUID value{ 0x10654CC2,0xA26E,0x43BF,{ 0x8C,0x12,0x1F,0xB4,0x0D,0xBF,0xBF,0xA0 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>{ static constexpr GUID value{ 0x6138C703,0xBB86,0x4112,{ 0xAF,0xC3,0x7F,0x93,0x9B,0x16,0x6E,0x3B } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>{ static constexpr GUID value{ 0xFE338195,0x9423,0x4D8B,{ 0x83,0x0D,0xB1,0xDD,0x2C,0x7B,0xAD,0xD5 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>{ static constexpr GUID value{ 0x2AB1919A,0x871B,0x4167,{ 0x8A,0x76,0x05,0x5C,0xD6,0x7B,0x5B,0x23 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>{ static constexpr GUID value{ 0x83D92B69,0x44CF,0x4631,{ 0x97,0x40,0x03,0xC7,0xD8,0x74,0x1B,0xC5 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>{ static constexpr GUID value{ 0x4C542F69,0xB000,0x42BA,{ 0xA0,0x93,0x6A,0x56,0x3C,0x65,0xE3,0xF8 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>{ static constexpr GUID value{ 0x174B671E,0xB20D,0x4FA9,{ 0xAD,0x9A,0xE9,0x3A,0xD6,0xC7,0x1E,0x01 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundTrigger>{ static constexpr GUID value{ 0x84B3A058,0x6027,0x4B87,{ 0x97,0x90,0xBD,0xF3,0xF7,0x57,0xDB,0xD7 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>{ static constexpr GUID value{ 0xC740A662,0xC310,0x4B82,{ 0xB3,0xE3,0x3B,0xCF,0xB9,0xE4,0xC7,0x7D } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>{ static constexpr GUID value{ 0xAB3E2612,0x25D3,0x48AE,{ 0x87,0x24,0xD8,0x18,0x77,0xAE,0x61,0x29 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>{ static constexpr GUID value{ 0x1AAB1819,0xBCE1,0x48EB,{ 0xA8,0x27,0x59,0xFB,0x7C,0xEE,0x52,0xA6 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>{ static constexpr GUID value{ 0xE21CAEEB,0x32F2,0x4D31,{ 0xB5,0x53,0xB9,0xE0,0x1B,0xDE,0x37,0xE0 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>{ static constexpr GUID value{ 0x71838C13,0x1314,0x47B4,{ 0x95,0x97,0xDC,0x7E,0x24,0x8C,0x17,0xCC } }; };
template <> struct guid<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>{ static constexpr GUID value{ 0x513B43BF,0x1D40,0x5C5D,{ 0x78,0xF5,0xC9,0x23,0xFE,0xE3,0x73,0x9E } }; };
template <> struct guid<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>{ static constexpr GUID value{ 0x3EA3760E,0xBAF5,0x4077,{ 0x88,0xE9,0x06,0x0C,0xF6,0xF0,0xC6,0xD5 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>{ static constexpr GUID value{ 0xFB91F28A,0x16A5,0x486D,{ 0x97,0x4C,0x78,0x35,0xA8,0x47,0x7B,0xE2 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>{ static constexpr GUID value{ 0xC833419B,0x4705,0x4571,{ 0x9A,0x16,0x06,0xB9,0x97,0xBF,0x9C,0x96 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IContentPrefetchTrigger>{ static constexpr GUID value{ 0x710627EE,0x04FA,0x440B,{ 0x80,0xC0,0x17,0x32,0x02,0x19,0x9E,0x5D } }; };
template <> struct guid<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>{ static constexpr GUID value{ 0xC2643EDA,0x8A03,0x409E,{ 0xB8,0xC4,0x88,0x81,0x4C,0x28,0xCC,0xB6 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>{ static constexpr GUID value{ 0x90875E64,0x3CDD,0x4EFB,{ 0xAB,0x1C,0x5B,0x3B,0x6A,0x60,0xCE,0x34 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>{ static constexpr GUID value{ 0xC3EA246A,0x4EFD,0x4498,{ 0xAA,0x60,0xA4,0xE4,0xE3,0xB1,0x7A,0xB9 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>{ static constexpr GUID value{ 0x81278AB5,0x41AB,0x16DA,{ 0x86,0xC2,0x7F,0x7B,0xF0,0x91,0x2F,0x5B } }; };
template <> struct guid<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>{ static constexpr GUID value{ 0x7955DE75,0x25BB,0x4153,{ 0xA1,0xA2,0x30,0x29,0xFC,0xAB,0xB6,0x52 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IDeviceServicingTrigger>{ static constexpr GUID value{ 0x1AB217AD,0x6E34,0x49D3,{ 0x9E,0x6F,0x17,0xF1,0xB6,0xDF,0xA8,0x81 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IDeviceUseTrigger>{ static constexpr GUID value{ 0x0DA68011,0x334F,0x4D57,{ 0xB6,0xEC,0x6D,0xCA,0x64,0xB4,0x12,0xE4 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IDeviceWatcherTrigger>{ static constexpr GUID value{ 0xA4617FDD,0x8573,0x4260,{ 0xBE,0xFC,0x5B,0xEC,0x89,0xCB,0x69,0x3D } }; };
template <> struct guid<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>{ static constexpr GUID value{ 0x986D06DA,0x47EB,0x4268,{ 0xA4,0xF2,0xF3,0xF7,0x71,0x88,0x38,0x8A } }; };
template <> struct guid<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>{ static constexpr GUID value{ 0xE25F8FC8,0x0696,0x474F,{ 0xA7,0x32,0xF2,0x92,0xB0,0xCE,0xBC,0x5D } }; };
template <> struct guid<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>{ static constexpr GUID value{ 0x9322A2C4,0xAE0E,0x42F2,{ 0xB2,0x8C,0xF5,0x13,0x72,0xE6,0x92,0x45 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>{ static constexpr GUID value{ 0x57BA1995,0xB143,0x4575,{ 0x9F,0x6B,0xFD,0x59,0xD9,0x3A,0xCE,0x1A } }; };
template <> struct guid<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>{ static constexpr GUID value{ 0x5998E91F,0x8A53,0x4E9F,{ 0xA3,0x2C,0x23,0xCD,0x33,0x66,0x4C,0xEE } }; };
template <> struct guid<Windows::ApplicationModel::Background::IGattServiceProviderTrigger>{ static constexpr GUID value{ 0xDDC6A3E9,0x1557,0x4BD8,{ 0x85,0x42,0x46,0x8A,0xA0,0xC6,0x96,0xF6 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>{ static constexpr GUID value{ 0x3C4691B1,0xB198,0x4E84,{ 0xBA,0xD4,0xCF,0x4A,0xD2,0x99,0xED,0x3A } }; };
template <> struct guid<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>{ static constexpr GUID value{ 0xB413A36A,0xE294,0x4591,{ 0xA5,0xA6,0x64,0x89,0x1A,0x82,0x81,0x53 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ILocationTrigger>{ static constexpr GUID value{ 0x47666A1C,0x6877,0x481E,{ 0x80,0x26,0xFF,0x7E,0x14,0xA8,0x11,0xA0 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ILocationTriggerFactory>{ static constexpr GUID value{ 0x1106BB07,0xFF69,0x4E09,{ 0xAA,0x8B,0x13,0x84,0xEA,0x47,0x5E,0x98 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IMaintenanceTrigger>{ static constexpr GUID value{ 0x68184C83,0xFC22,0x4CE5,{ 0x84,0x1A,0x72,0x39,0xA9,0x81,0x00,0x47 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>{ static constexpr GUID value{ 0x4B3DDB2E,0x97DD,0x4629,{ 0x88,0xB0,0xB0,0x6C,0xF9,0x48,0x2A,0xE5 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IMediaProcessingTrigger>{ static constexpr GUID value{ 0x9A95BE65,0x8A52,0x4B30,{ 0x90,0x11,0xCF,0x38,0x04,0x0E,0xA8,0xB0 } }; };
template <> struct guid<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>{ static constexpr GUID value{ 0xE756C791,0x3001,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } }; };
template <> struct guid<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>{ static constexpr GUID value{ 0x90089CC6,0x63CD,0x480C,{ 0x95,0xD1,0x6E,0x6A,0xEF,0x80,0x1E,0x4A } }; };
template <> struct guid<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>{ static constexpr GUID value{ 0x0A223E00,0x27D7,0x4353,{ 0xAD,0xB9,0x92,0x65,0xAA,0xEA,0x57,0x9D } }; };
template <> struct guid<Windows::ApplicationModel::Background::IPhoneTrigger>{ static constexpr GUID value{ 0x8DCFE99B,0xD4C5,0x49F1,{ 0xB7,0xD3,0x82,0xE8,0x7A,0x0E,0x9D,0xDE } }; };
template <> struct guid<Windows::ApplicationModel::Background::IPhoneTriggerFactory>{ static constexpr GUID value{ 0xA0D93CDA,0x5FC1,0x48FB,{ 0xA5,0x46,0x32,0x26,0x20,0x40,0x15,0x7B } }; };
template <> struct guid<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>{ static constexpr GUID value{ 0x6DD8ED1B,0x458E,0x4FC2,{ 0xBC,0x2E,0xD5,0x66,0x4F,0x77,0xED,0x19 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>{ static constexpr GUID value{ 0x986D0D6A,0xB2F6,0x467F,{ 0xA9,0x78,0xA4,0x40,0x91,0xC1,0x1A,0x66 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IRfcommConnectionTrigger>{ static constexpr GUID value{ 0xE8C4CAE2,0x0B53,0x4464,{ 0x93,0x94,0xFD,0x87,0x56,0x54,0xDE,0x64 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>{ static constexpr GUID value{ 0xF237F327,0x5181,0x4F24,{ 0x96,0xA7,0x70,0x0A,0x4E,0x5F,0xAC,0x62 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>{ static constexpr GUID value{ 0x5BC0F372,0xD48B,0x4B7F,{ 0xAB,0xEC,0x15,0xF9,0xBA,0xCC,0x12,0xE2 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>{ static constexpr GUID value{ 0x921FE675,0x7DF0,0x4DA3,{ 0x97,0xB3,0xE5,0x44,0xEE,0x85,0x7F,0xE6 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ISmartCardTrigger>{ static constexpr GUID value{ 0xF53BC5AC,0x84CA,0x4972,{ 0x8C,0xE9,0xE5,0x8F,0x97,0xB3,0x7A,0x50 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ISmartCardTriggerFactory>{ static constexpr GUID value{ 0x63BF54C3,0x89C1,0x4E00,{ 0xA9,0xD3,0x97,0xC6,0x29,0x26,0x9D,0xAD } }; };
template <> struct guid<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>{ static constexpr GUID value{ 0xEA3AD8C8,0x6BA4,0x4AB2,{ 0x8D,0x21,0xBC,0x6B,0x09,0xC7,0x75,0x64 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ISocketActivityTrigger>{ static constexpr GUID value{ 0xA9BBF810,0x9DDE,0x4F8A,{ 0x83,0xE3,0xB0,0xE0,0xE7,0xA5,0x0D,0x70 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>{ static constexpr GUID value{ 0x1637E0A7,0x829C,0x45BC,{ 0x92,0x9B,0xA1,0xE7,0xEA,0x78,0xD8,0x9B } }; };
template <> struct guid<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>{ static constexpr GUID value{ 0x7F9F1B39,0x5F90,0x4E12,{ 0x91,0x4E,0xA7,0xD8,0xE0,0xBB,0xFB,0x18 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ISystemCondition>{ static constexpr GUID value{ 0xC15FB476,0x89C5,0x420B,{ 0xAB,0xD3,0xFB,0x30,0x30,0x47,0x21,0x28 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ISystemConditionFactory>{ static constexpr GUID value{ 0xD269D1F1,0x05A7,0x49AE,{ 0x87,0xD7,0x16,0xB2,0xB8,0xB9,0xA5,0x53 } }; };
template <> struct guid<Windows::ApplicationModel::Background::ISystemTrigger>{ static constexpr GUID value{ 0x1D80C776,0x3748,0x4463,{ 0x8D,0x7E,0x27,0x6D,0xC1,0x39,0xAC,0x1C } }; };
template <> struct guid<Windows::ApplicationModel::Background::ISystemTriggerFactory>{ static constexpr GUID value{ 0xE80423D4,0x8791,0x4579,{ 0x81,0x26,0x87,0xEC,0x8A,0xAA,0x40,0x7A } }; };
template <> struct guid<Windows::ApplicationModel::Background::ITimeTrigger>{ static constexpr GUID value{ 0x656E5556,0x0B2A,0x4377,{ 0xBA,0x70,0x3B,0x45,0xA9,0x35,0x54,0x7F } }; };
template <> struct guid<Windows::ApplicationModel::Background::ITimeTriggerFactory>{ static constexpr GUID value{ 0x38C682FE,0x9B54,0x45E6,{ 0xB2,0xF3,0x26,0x9B,0x87,0xA6,0xF7,0x34 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>{ static constexpr GUID value{ 0xB09DFC27,0x6480,0x4349,{ 0x81,0x25,0x97,0xB3,0xEF,0xAA,0x0A,0x3A } }; };
template <> struct guid<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>{ static constexpr GUID value{ 0x81C6FAAD,0x8797,0x4785,{ 0x81,0xB4,0xB0,0xCC,0xCB,0x73,0xD1,0xD9 } }; };
template <> struct guid<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>{ static constexpr GUID value{ 0xCAD4436C,0x69AB,0x4E18,{ 0xA4,0x8A,0x5E,0xD2,0xAC,0x43,0x59,0x57 } }; };
template <> struct guid<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>{ static constexpr GUID value{ 0xA6C4BAC0,0x51F8,0x4C57,{ 0xAC,0x3F,0x15,0x6D,0xD1,0x68,0x0C,0x4F } }; };
template <> struct guid<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler>{ static constexpr GUID value{ 0x5B38E929,0xA086,0x46A7,{ 0xA6,0x78,0x43,0x91,0x35,0x82,0x2B,0xCF } }; };
template <> struct guid<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler>{ static constexpr GUID value{ 0x46E0683C,0x8A88,0x4C99,{ 0x80,0x4C,0x76,0x89,0x7F,0x62,0x77,0xA6 } }; };
template <> struct default_interface<Windows::ApplicationModel::Background::ActivitySensorTrigger>{ using type = Windows::ApplicationModel::Background::IActivitySensorTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::AppBroadcastTrigger>{ using type = Windows::ApplicationModel::Background::IAppBroadcastTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo>{ using type = Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo; };
template <> struct default_interface<Windows::ApplicationModel::Background::ApplicationTrigger>{ using type = Windows::ApplicationModel::Background::IApplicationTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::ApplicationTriggerDetails>{ using type = Windows::ApplicationModel::Background::IApplicationTriggerDetails; };
template <> struct default_interface<Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskBuilder>{ using type = Windows::ApplicationModel::Background::IBackgroundTaskBuilder; };
template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs>{ using type = Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskDeferral>{ using type = Windows::ApplicationModel::Background::IBackgroundTaskDeferral; };
template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs>{ using type = Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskRegistration>{ using type = Windows::ApplicationModel::Background::IBackgroundTaskRegistration; };
template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>{ using type = Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup; };
template <> struct default_interface<Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger>{ using type = Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger>{ using type = Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::CachedFileUpdaterTrigger>{ using type = Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails>{ using type = Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails; };
template <> struct default_interface<Windows::ApplicationModel::Background::ChatMessageNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IChatMessageNotificationTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger>{ using type = Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::ContactStoreNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IContactStoreNotificationTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::ContentPrefetchTrigger>{ using type = Windows::ApplicationModel::Background::IContentPrefetchTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>{ using type = Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::DeviceServicingTrigger>{ using type = Windows::ApplicationModel::Background::IDeviceServicingTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::DeviceUseTrigger>{ using type = Windows::ApplicationModel::Background::IDeviceUseTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::DeviceWatcherTrigger>{ using type = Windows::ApplicationModel::Background::IDeviceWatcherTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::EmailStoreNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::GattServiceProviderTrigger>{ using type = Windows::ApplicationModel::Background::IGattServiceProviderTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>{ using type = Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult; };
template <> struct default_interface<Windows::ApplicationModel::Background::LocationTrigger>{ using type = Windows::ApplicationModel::Background::ILocationTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::MaintenanceTrigger>{ using type = Windows::ApplicationModel::Background::IMaintenanceTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::MediaProcessingTrigger>{ using type = Windows::ApplicationModel::Background::IMediaProcessingTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger>{ using type = Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger>{ using type = Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::PhoneTrigger>{ using type = Windows::ApplicationModel::Background::IPhoneTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::PushNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger>{ using type = Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::RfcommConnectionTrigger>{ using type = Windows::ApplicationModel::Background::IRfcommConnectionTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger>{ using type = Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::SensorDataThresholdTrigger>{ using type = Windows::ApplicationModel::Background::ISensorDataThresholdTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::SmartCardTrigger>{ using type = Windows::ApplicationModel::Background::ISmartCardTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::SmsMessageReceivedTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::SocketActivityTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>{ using type = Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::SystemCondition>{ using type = Windows::ApplicationModel::Background::ISystemCondition; };
template <> struct default_interface<Windows::ApplicationModel::Background::SystemTrigger>{ using type = Windows::ApplicationModel::Background::ISystemTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::TimeTrigger>{ using type = Windows::ApplicationModel::Background::ITimeTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::ToastNotificationActionTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
template <> struct default_interface<Windows::ApplicationModel::Background::UserNotificationChangedTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IActivitySensorTrigger
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Sensors::ActivityType> SubscribedActivities() const;
    uint32_t ReportInterval() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivityType> SupportedActivities() const;
    uint32_t MinimumReportInterval() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IActivitySensorTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IActivitySensorTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IActivitySensorTriggerFactory
{
    Windows::ApplicationModel::Background::ActivitySensorTrigger Create(uint32_t reportIntervalInMilliseconds) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IActivitySensorTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IAlarmApplicationManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::AlarmAccessStatus> RequestAccessAsync() const;
    Windows::ApplicationModel::Background::AlarmAccessStatus GetAccessStatus() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IAlarmApplicationManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IAppBroadcastTrigger
{
    void ProviderInfo(Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo const& value) const;
    Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo ProviderInfo() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IAppBroadcastTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IAppBroadcastTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerFactory
{
    Windows::ApplicationModel::Background::AppBroadcastTrigger CreateAppBroadcastTrigger(param::hstring const& providerKey) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo
{
    void DisplayNameResource(param::hstring const& value) const;
    hstring DisplayNameResource() const;
    void LogoResource(param::hstring const& value) const;
    hstring LogoResource() const;
    void VideoKeyFrameInterval(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan VideoKeyFrameInterval() const;
    void MaxVideoBitrate(uint32_t value) const;
    uint32_t MaxVideoBitrate() const;
    void MaxVideoWidth(uint32_t value) const;
    uint32_t MaxVideoWidth() const;
    void MaxVideoHeight(uint32_t value) const;
    uint32_t MaxVideoHeight() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IApplicationTrigger
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::ApplicationTriggerResult> RequestAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::ApplicationTriggerResult> RequestAsync(Windows::Foundation::Collections::ValueSet const& arguments) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IApplicationTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IApplicationTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IApplicationTriggerDetails
{
    Windows::Foundation::Collections::ValueSet Arguments() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IApplicationTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IApplicationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IAppointmentStoreNotificationTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IAppointmentStoreNotificationTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundCondition
{
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundCondition> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundCondition<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus> RequestAccessAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus> RequestAccessAsync(param::hstring const& applicationId) const;
    void RemoveAccess() const;
    void RemoveAccess(param::hstring const& applicationId) const;
    Windows::ApplicationModel::Background::BackgroundAccessStatus GetAccessStatus() const;
    Windows::ApplicationModel::Background::BackgroundAccessStatus GetAccessStatus(param::hstring const& applicationId) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTask
{
    void Run(Windows::ApplicationModel::Background::IBackgroundTaskInstance const& taskInstance) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTask> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTask<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder
{
    void TaskEntryPoint(param::hstring const& value) const;
    hstring TaskEntryPoint() const;
    void SetTrigger(Windows::ApplicationModel::Background::IBackgroundTrigger const& trigger) const;
    void AddCondition(Windows::ApplicationModel::Background::IBackgroundCondition const& condition) const;
    void Name(param::hstring const& value) const;
    hstring Name() const;
    Windows::ApplicationModel::Background::BackgroundTaskRegistration Register() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder2
{
    void CancelOnConditionLoss(bool value) const;
    bool CancelOnConditionLoss() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder3
{
    void IsNetworkRequested(bool value) const;
    bool IsNetworkRequested() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder4
{
    Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup TaskGroup() const;
    void TaskGroup(Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder4<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskCompletedEventArgs
{
    GUID InstanceId() const;
    void CheckResult() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskDeferral> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskDeferral<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance
{
    GUID InstanceId() const;
    Windows::ApplicationModel::Background::BackgroundTaskRegistration Task() const;
    uint32_t Progress() const;
    void Progress(uint32_t value) const;
    Windows::Foundation::IInspectable TriggerDetails() const;
    event_token Canceled(Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler const& cancelHandler) const;
    using Canceled_revoker = event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskInstance>;
    Canceled_revoker Canceled(auto_revoke_t, Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler const& cancelHandler) const;
    void Canceled(event_token const& cookie) const;
    uint32_t SuspendedCount() const;
    Windows::ApplicationModel::Background::BackgroundTaskDeferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskInstance> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance2
{
    uint32_t GetThrottleCount(Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter const& counter) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskInstance2> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance4
{
    Windows::System::User User() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskInstance4> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance4<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskProgressEventArgs
{
    GUID InstanceId() const;
    uint32_t Progress() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskProgressEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration
{
    GUID TaskId() const;
    hstring Name() const;
    event_token Progress(Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler const& handler) const;
    using Progress_revoker = event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>;
    Progress_revoker Progress(auto_revoke_t, Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler const& handler) const;
    void Progress(event_token const& cookie) const;
    event_token Completed(Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler const& handler) const;
    using Completed_revoker = event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>;
    Completed_revoker Completed(auto_revoke_t, Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler const& handler) const;
    void Completed(event_token const& cookie) const;
    void Unregister(bool cancelTask) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistration> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration2
{
    Windows::ApplicationModel::Background::IBackgroundTrigger Trigger() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration3
{
    Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup TaskGroup() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup
{
    hstring Id() const;
    hstring Name() const;
    event_token BackgroundActivated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const;
    using BackgroundActivated_revoker = event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>;
    BackgroundActivated_revoker BackgroundActivated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const;
    void BackgroundActivated(event_token const& token) const;
    Windows::Foundation::Collections::IMapView<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration> AllTasks() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroupFactory
{
    Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup Create(param::hstring const& id) const;
    Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup CreateWithName(param::hstring const& id, param::hstring const& name) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroupFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics
{
    Windows::Foundation::Collections::IMapView<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> AllTasks() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics2
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> AllTaskGroups() const;
    Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup GetTaskGroup(param::hstring const& groupId) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBackgroundWorkCostStatics
{
    Windows::ApplicationModel::Background::BackgroundWorkCostValue CurrentBackgroundWorkCost() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundWorkCostStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement Advertisement() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger
{
    Windows::Foundation::TimeSpan MinSamplingInterval() const;
    Windows::Foundation::TimeSpan MaxSamplingInterval() const;
    Windows::Foundation::TimeSpan MinOutOfRangeTimeout() const;
    Windows::Foundation::TimeSpan MaxOutOfRangeTimeout() const;
    Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter SignalStrengthFilter() const;
    void SignalStrengthFilter(Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter const& value) const;
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter AdvertisementFilter() const;
    void AdvertisementFilter(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTriggerDetails
{
    Windows::Storage::Provider::CachedFileTarget UpdateTarget() const;
    Windows::Storage::Provider::FileUpdateRequest UpdateRequest() const;
    bool CanRequestUserInput() const;
};
template <> struct consume<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTriggerDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IChatMessageNotificationTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IChatMessageNotificationTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IChatMessageReceivedNotificationTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IChatMessageReceivedNotificationTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ICommunicationBlockingAppSetAsActiveTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ICommunicationBlockingAppSetAsActiveTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IContactStoreNotificationTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IContactStoreNotificationTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IContentPrefetchTrigger
{
    Windows::Foundation::TimeSpan WaitInterval() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IContentPrefetchTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IContentPrefetchTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IContentPrefetchTriggerFactory
{
    Windows::ApplicationModel::Background::ContentPrefetchTrigger Create(Windows::Foundation::TimeSpan const& waitInterval) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IContentPrefetchTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger
{
    hstring DeviceId() const;
    bool CanMaintainConnection() const;
    bool MaintainConnection() const;
    void MaintainConnection(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTriggerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> FromIdAsync(param::hstring const& deviceId) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTriggerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTrigger
{
    hstring TriggerQualifier() const;
    bool OneShot() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTriggerFactory
{
    Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger Create(param::hstring const& triggerQualifier, bool oneShot) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IDeviceServicingTrigger
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult> RequestAsync(param::hstring const& deviceId, Windows::Foundation::TimeSpan const& expectedDuration) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult> RequestAsync(param::hstring const& deviceId, Windows::Foundation::TimeSpan const& expectedDuration, param::hstring const& arguments) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IDeviceServicingTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceServicingTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IDeviceUseTrigger
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult> RequestAsync(param::hstring const& deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult> RequestAsync(param::hstring const& deviceId, param::hstring const& arguments) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IDeviceUseTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceUseTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IDeviceWatcherTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::IDeviceWatcherTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceWatcherTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IEmailStoreNotificationTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IEmailStoreNotificationTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic Characteristic() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger2
{
    Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode EventTriggeringMode() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory
{
    Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger Create(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory2
{
    Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger Create(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic, Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode const& eventTriggeringMode) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger
{
    hstring TriggerId() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService Service() const;
    void AdvertisingParameters(Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters const& value) const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters AdvertisingParameters() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IGattServiceProviderTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerResult
{
    Windows::ApplicationModel::Background::GattServiceProviderTrigger Trigger() const;
    Windows::Devices::Bluetooth::BluetoothError Error() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerResult<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult> CreateAsync(param::hstring const& triggerId, GUID const& serviceUuid) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ILocationTrigger
{
    Windows::ApplicationModel::Background::LocationTriggerType TriggerType() const;
};
template <> struct consume<Windows::ApplicationModel::Background::ILocationTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ILocationTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ILocationTriggerFactory
{
    Windows::ApplicationModel::Background::LocationTrigger Create(Windows::ApplicationModel::Background::LocationTriggerType const& triggerType) const;
};
template <> struct consume<Windows::ApplicationModel::Background::ILocationTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ILocationTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IMaintenanceTrigger
{
    uint32_t FreshnessTime() const;
    bool OneShot() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IMaintenanceTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IMaintenanceTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IMaintenanceTriggerFactory
{
    Windows::ApplicationModel::Background::MaintenanceTrigger Create(uint32_t freshnessTime, bool oneShot) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IMaintenanceTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IMediaProcessingTrigger
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::MediaProcessingTriggerResult> RequestAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::MediaProcessingTriggerResult> RequestAsync(Windows::Foundation::Collections::ValueSet const& arguments) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IMediaProcessingTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IMediaProcessingTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_INetworkOperatorHotspotAuthenticationTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_INetworkOperatorHotspotAuthenticationTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTrigger
{
    hstring NetworkAccountId() const;
};
template <> struct consume<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTriggerFactory
{
    Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger Create(param::hstring const& networkAccountId) const;
};
template <> struct consume<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IPhoneTrigger
{
    bool OneShot() const;
    Windows::ApplicationModel::Calls::Background::PhoneTriggerType TriggerType() const;
};
template <> struct consume<Windows::ApplicationModel::Background::IPhoneTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IPhoneTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IPhoneTriggerFactory
{
    Windows::ApplicationModel::Background::PhoneTrigger Create(Windows::ApplicationModel::Calls::Background::PhoneTriggerType const& type, bool oneShot) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IPhoneTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IPhoneTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IPushNotificationTriggerFactory
{
    Windows::ApplicationModel::Background::PushNotificationTrigger Create(param::hstring const& applicationId) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IPushNotificationTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IRcsEndUserMessageAvailableTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IRcsEndUserMessageAvailableTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger
{
    Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation InboundConnection() const;
    Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation OutboundConnection() const;
    bool AllowMultipleConnections() const;
    void AllowMultipleConnections(bool value) const;
    Windows::Networking::Sockets::SocketProtectionLevel ProtectionLevel() const;
    void ProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel const& value) const;
    Windows::Networking::HostName RemoteHostName() const;
    void RemoteHostName(Windows::Networking::HostName const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IRfcommConnectionTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ISecondaryAuthenticationFactorAuthenticationTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ISecondaryAuthenticationFactorAuthenticationTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ISensorDataThresholdTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ISensorDataThresholdTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ISensorDataThresholdTriggerFactory
{
    Windows::ApplicationModel::Background::SensorDataThresholdTrigger Create(Windows::Devices::Sensors::ISensorDataThreshold const& threshold) const;
};
template <> struct consume<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ISensorDataThresholdTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ISmartCardTrigger
{
    Windows::Devices::SmartCards::SmartCardTriggerType TriggerType() const;
};
template <> struct consume<Windows::ApplicationModel::Background::ISmartCardTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ISmartCardTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ISmartCardTriggerFactory
{
    Windows::ApplicationModel::Background::SmartCardTrigger Create(Windows::Devices::SmartCards::SmartCardTriggerType const& triggerType) const;
};
template <> struct consume<Windows::ApplicationModel::Background::ISmartCardTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ISmartCardTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ISmsMessageReceivedTriggerFactory
{
    Windows::ApplicationModel::Background::SmsMessageReceivedTrigger Create(Windows::Devices::Sms::SmsFilterRules const& filterRules) const;
};
template <> struct consume<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ISmsMessageReceivedTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ISocketActivityTrigger
{
    bool IsWakeFromLowPowerSupported() const;
};
template <> struct consume<Windows::ApplicationModel::Background::ISocketActivityTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ISocketActivityTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTrigger
{
};
template <> struct consume<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTriggerStatics
{
    Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger Create(Windows::Storage::StorageLibrary const& storageLibrary) const;
    Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger CreateFromLibraries(param::iterable<Windows::Storage::StorageLibrary> const& storageLibraries) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTriggerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ISystemCondition
{
    Windows::ApplicationModel::Background::SystemConditionType ConditionType() const;
};
template <> struct consume<Windows::ApplicationModel::Background::ISystemCondition> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ISystemCondition<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ISystemConditionFactory
{
    Windows::ApplicationModel::Background::SystemCondition Create(Windows::ApplicationModel::Background::SystemConditionType const& conditionType) const;
};
template <> struct consume<Windows::ApplicationModel::Background::ISystemConditionFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ISystemConditionFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ISystemTrigger
{
    bool OneShot() const;
    Windows::ApplicationModel::Background::SystemTriggerType TriggerType() const;
};
template <> struct consume<Windows::ApplicationModel::Background::ISystemTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ISystemTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ISystemTriggerFactory
{
    Windows::ApplicationModel::Background::SystemTrigger Create(Windows::ApplicationModel::Background::SystemTriggerType const& triggerType, bool oneShot) const;
};
template <> struct consume<Windows::ApplicationModel::Background::ISystemTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ISystemTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ITimeTrigger
{
    uint32_t FreshnessTime() const;
    bool OneShot() const;
};
template <> struct consume<Windows::ApplicationModel::Background::ITimeTrigger> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ITimeTrigger<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_ITimeTriggerFactory
{
    Windows::ApplicationModel::Background::TimeTrigger Create(uint32_t freshnessTime, bool oneShot) const;
};
template <> struct consume<Windows::ApplicationModel::Background::ITimeTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_ITimeTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IToastNotificationActionTriggerFactory
{
    Windows::ApplicationModel::Background::ToastNotificationActionTrigger Create(param::hstring const& applicationId) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IToastNotificationActionTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IToastNotificationHistoryChangedTriggerFactory
{
    Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger Create(param::hstring const& applicationId) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IToastNotificationHistoryChangedTriggerFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Background_IUserNotificationChangedTriggerFactory
{
    Windows::ApplicationModel::Background::UserNotificationChangedTrigger Create(Windows::UI::Notifications::NotificationKinds const& notificationKinds) const;
};
template <> struct consume<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Background_IUserNotificationChangedTriggerFactory<D>; };

template <> struct abi<Windows::ApplicationModel::Background::IActivitySensorTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SubscribedActivities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ReportInterval(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_SupportedActivities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint32_t reportIntervalInMilliseconds, ::IUnknown** activityTrigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetAccessStatus(abi_t<Windows::ApplicationModel::Background::AlarmAccessStatus>* status) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IAppBroadcastTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ProviderInfo(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ProviderInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAppBroadcastTrigger(HSTRING providerKey, ::IUnknown** broadcastTrigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_DisplayNameResource(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DisplayNameResource(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_LogoResource(HSTRING value) = 0;
    virtual HRESULT __stdcall get_LogoResource(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_VideoKeyFrameInterval(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_VideoKeyFrameInterval(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_MaxVideoBitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_MaxVideoBitrate(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_MaxVideoWidth(uint32_t value) = 0;
    virtual HRESULT __stdcall get_MaxVideoWidth(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_MaxVideoHeight(uint32_t value) = 0;
    virtual HRESULT __stdcall get_MaxVideoHeight(uint32_t* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IApplicationTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAsyncWithArguments(::IUnknown* arguments, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IApplicationTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Arguments(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundCondition>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestAccessForApplicationAsync(HSTRING applicationId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RemoveAccess() = 0;
    virtual HRESULT __stdcall RemoveAccessForApplication(HSTRING applicationId) = 0;
    virtual HRESULT __stdcall GetAccessStatus(abi_t<Windows::ApplicationModel::Background::BackgroundAccessStatus>* status) = 0;
    virtual HRESULT __stdcall GetAccessStatusForApplication(HSTRING applicationId, abi_t<Windows::ApplicationModel::Background::BackgroundAccessStatus>* status) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTask>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Run(::IUnknown* taskInstance) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_TaskEntryPoint(HSTRING value) = 0;
    virtual HRESULT __stdcall get_TaskEntryPoint(HSTRING* value) = 0;
    virtual HRESULT __stdcall SetTrigger(::IUnknown* trigger) = 0;
    virtual HRESULT __stdcall AddCondition(::IUnknown* condition) = 0;
    virtual HRESULT __stdcall put_Name(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall Register(::IUnknown** task) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_CancelOnConditionLoss(bool value) = 0;
    virtual HRESULT __stdcall get_CancelOnConditionLoss(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_IsNetworkRequested(bool value) = 0;
    virtual HRESULT __stdcall get_IsNetworkRequested(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TaskGroup(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TaskGroup(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InstanceId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall CheckResult() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskInstance>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InstanceId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_Task(::IUnknown** task) = 0;
    virtual HRESULT __stdcall get_Progress(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Progress(uint32_t value) = 0;
    virtual HRESULT __stdcall get_TriggerDetails(::IUnknown** triggerDetails) = 0;
    virtual HRESULT __stdcall add_Canceled(::IUnknown* cancelHandler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_Canceled(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall get_SuspendedCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** deferral) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskInstance2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetThrottleCount(abi_t<Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter> counter, uint32_t* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskInstance4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InstanceId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_Progress(uint32_t* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TaskId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall add_Progress(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_Progress(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_Completed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_Completed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall Unregister(bool cancelTask) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Trigger(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TaskGroup(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall add_BackgroundActivated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BackgroundActivated(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_AllTasks(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING id, ::IUnknown** group) = 0;
    virtual HRESULT __stdcall CreateWithName(HSTRING id, HSTRING name, ::IUnknown** group) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllTasks(::IUnknown** tasks) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllTaskGroups(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetTaskGroup(HSTRING groupId, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentBackgroundWorkCost(abi_t<Windows::ApplicationModel::Background::BackgroundWorkCostValue>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Advertisement(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MinSamplingInterval(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_MaxSamplingInterval(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_MinOutOfRangeTimeout(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_MaxOutOfRangeTimeout(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_SignalStrengthFilter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SignalStrengthFilter(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AdvertisementFilter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AdvertisementFilter(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UpdateTarget(abi_t<Windows::Storage::Provider::CachedFileTarget>* value) = 0;
    virtual HRESULT __stdcall get_UpdateRequest(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CanRequestUserInput(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::IContentPrefetchTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WaitInterval(abi_t<Windows::Foundation::TimeSpan>* waitInterval) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Foundation::TimeSpan> waitInterval, ::IUnknown** trigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CanMaintainConnection(bool* value) = 0;
    virtual HRESULT __stdcall get_MaintainConnection(bool* value) = 0;
    virtual HRESULT __stdcall put_MaintainConnection(bool value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** deviceChangeTrigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TriggerQualifier(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_OneShot(bool* oneShot) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING triggerQualifier, bool oneShot, ::IUnknown** trigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IDeviceServicingTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestAsyncSimple(HSTRING deviceId, abi_t<Windows::Foundation::TimeSpan> expectedDuration, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAsyncWithArguments(HSTRING deviceId, abi_t<Windows::Foundation::TimeSpan> expectedDuration, HSTRING arguments, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IDeviceUseTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestAsyncSimple(HSTRING deviceId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAsyncWithArguments(HSTRING deviceId, HSTRING arguments, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IDeviceWatcherTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Characteristic(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EventTriggeringMode(abi_t<Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* characteristic, ::IUnknown** gattCharacteristicNotificationTrigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithEventTriggeringMode(::IUnknown* characteristic, abi_t<Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode> eventTriggeringMode, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IGattServiceProviderTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TriggerId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Service(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AdvertisingParameters(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AdvertisingParameters(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Trigger(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAsync(HSTRING triggerId, abi_t<GUID> serviceUuid, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ILocationTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TriggerType(abi_t<Windows::ApplicationModel::Background::LocationTriggerType>* triggerType) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ILocationTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::ApplicationModel::Background::LocationTriggerType> triggerType, ::IUnknown** locationTrigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IMaintenanceTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FreshnessTime(uint32_t* freshnessTime) = 0;
    virtual HRESULT __stdcall get_OneShot(bool* oneShot) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint32_t freshnessTime, bool oneShot, ::IUnknown** trigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IMediaProcessingTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAsyncWithArguments(::IUnknown* arguments, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NetworkAccountId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING networkAccountId, ::IUnknown** trigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IPhoneTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OneShot(bool* value) = 0;
    virtual HRESULT __stdcall get_TriggerType(abi_t<Windows::ApplicationModel::Calls::Background::PhoneTriggerType>* result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IPhoneTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::ApplicationModel::Calls::Background::PhoneTriggerType> type, bool oneShot, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING applicationId, ::IUnknown** trigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::IRfcommConnectionTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InboundConnection(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OutboundConnection(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AllowMultipleConnections(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowMultipleConnections(bool value) = 0;
    virtual HRESULT __stdcall get_ProtectionLevel(abi_t<Windows::Networking::Sockets::SocketProtectionLevel>* value) = 0;
    virtual HRESULT __stdcall put_ProtectionLevel(abi_t<Windows::Networking::Sockets::SocketProtectionLevel> value) = 0;
    virtual HRESULT __stdcall get_RemoteHostName(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RemoteHostName(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* threshold, ::IUnknown** trigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ISmartCardTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TriggerType(abi_t<Windows::Devices::SmartCards::SmartCardTriggerType>* triggerType) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ISmartCardTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Devices::SmartCards::SmartCardTriggerType> triggerType, ::IUnknown** trigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* filterRules, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ISocketActivityTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsWakeFromLowPowerSupported(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* storageLibrary, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateFromLibraries(::IUnknown* storageLibraries, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ISystemCondition>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ConditionType(abi_t<Windows::ApplicationModel::Background::SystemConditionType>* conditionType) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ISystemConditionFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::ApplicationModel::Background::SystemConditionType> conditionType, ::IUnknown** condition) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ISystemTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OneShot(bool* oneShot) = 0;
    virtual HRESULT __stdcall get_TriggerType(abi_t<Windows::ApplicationModel::Background::SystemTriggerType>* triggerType) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ISystemTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::ApplicationModel::Background::SystemTriggerType> triggerType, bool oneShot, ::IUnknown** trigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ITimeTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FreshnessTime(uint32_t* freshnessTime) = 0;
    virtual HRESULT __stdcall get_OneShot(bool* oneShot) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::ITimeTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint32_t freshnessTime, bool oneShot, ::IUnknown** trigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING applicationId, ::IUnknown** trigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING applicationId, ::IUnknown** trigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::UI::Notifications::NotificationKinds> notificationKinds, ::IUnknown** trigger) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, abi_t<Windows::ApplicationModel::Background::BackgroundTaskCancellationReason> reason) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* args) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* args) = 0;
};};

}
