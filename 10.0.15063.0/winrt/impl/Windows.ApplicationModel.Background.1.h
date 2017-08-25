// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Activation.0.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.Background.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Advertisement.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Background.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.0.h"
#include "winrt/impl/Windows.Devices.Sensors.0.h"
#include "winrt/impl/Windows.Devices.SmartCards.0.h"
#include "winrt/impl/Windows.Devices.Sms.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.Networking.Sockets.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Provider.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.UI.Notifications.0.h"
#include "winrt/impl/Windows.ApplicationModel.Background.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background {

struct WINRT_EBO IActivitySensorTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivitySensorTrigger>,
    impl::require<IActivitySensorTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IActivitySensorTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IActivitySensorTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivitySensorTriggerFactory>
{
    IActivitySensorTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAlarmApplicationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAlarmApplicationManagerStatics>
{
    IAlarmApplicationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastTrigger>,
    impl::require<IAppBroadcastTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IAppBroadcastTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastTriggerFactory>
{
    IAppBroadcastTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastTriggerProviderInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastTriggerProviderInfo>
{
    IAppBroadcastTriggerProviderInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IApplicationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationTrigger>,
    impl::require<IApplicationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IApplicationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IApplicationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationTriggerDetails>
{
    IApplicationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentStoreNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreNotificationTrigger>,
    impl::require<IAppointmentStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IAppointmentStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundCondition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundCondition>
{
    IBackgroundCondition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundExecutionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundExecutionManagerStatics>
{
    IBackgroundExecutionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTask :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTask>
{
    IBackgroundTask(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskBuilder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskBuilder2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskBuilder2>,
    impl::require<IBackgroundTaskBuilder2, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskBuilder3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskBuilder3>,
    impl::require<IBackgroundTaskBuilder3, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskBuilder4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskBuilder4>,
    impl::require<IBackgroundTaskBuilder4, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskCompletedEventArgs>
{
    IBackgroundTaskCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskDeferral>
{
    IBackgroundTaskDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskInstance :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskInstance>
{
    IBackgroundTaskInstance(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskInstance2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskInstance2>,
    impl::require<IBackgroundTaskInstance2, Windows::ApplicationModel::Background::IBackgroundTaskInstance>
{
    IBackgroundTaskInstance2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskInstance4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskInstance4>,
    impl::require<IBackgroundTaskInstance4, Windows::ApplicationModel::Background::IBackgroundTaskInstance>
{
    IBackgroundTaskInstance4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskProgressEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskProgressEventArgs>
{
    IBackgroundTaskProgressEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskRegistration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistration>
{
    IBackgroundTaskRegistration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskRegistration2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistration2>,
    impl::require<IBackgroundTaskRegistration2, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
{
    IBackgroundTaskRegistration2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskRegistration3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistration3>,
    impl::require<IBackgroundTaskRegistration3, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
{
    IBackgroundTaskRegistration3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskRegistrationGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistrationGroup>
{
    IBackgroundTaskRegistrationGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskRegistrationGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistrationGroupFactory>
{
    IBackgroundTaskRegistrationGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskRegistrationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistrationStatics>
{
    IBackgroundTaskRegistrationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTaskRegistrationStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistrationStatics2>
{
    IBackgroundTaskRegistrationStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTrigger>
{
    IBackgroundTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundWorkCostStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundWorkCostStatics>
{
    IBackgroundWorkCostStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementPublisherTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementPublisherTrigger>,
    impl::require<IBluetoothLEAdvertisementPublisherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IBluetoothLEAdvertisementPublisherTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementWatcherTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementWatcherTrigger>,
    impl::require<IBluetoothLEAdvertisementWatcherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IBluetoothLEAdvertisementWatcherTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICachedFileUpdaterTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICachedFileUpdaterTrigger>,
    impl::require<ICachedFileUpdaterTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ICachedFileUpdaterTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICachedFileUpdaterTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICachedFileUpdaterTriggerDetails>
{
    ICachedFileUpdaterTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IChatMessageNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageNotificationTrigger>,
    impl::require<IChatMessageNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IChatMessageNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IChatMessageReceivedNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageReceivedNotificationTrigger>,
    impl::require<IChatMessageReceivedNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IChatMessageReceivedNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICommunicationBlockingAppSetAsActiveTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommunicationBlockingAppSetAsActiveTrigger>,
    impl::require<ICommunicationBlockingAppSetAsActiveTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ICommunicationBlockingAppSetAsActiveTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactStoreNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStoreNotificationTrigger>,
    impl::require<IContactStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IContactStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContentPrefetchTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentPrefetchTrigger>,
    impl::require<IContentPrefetchTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IContentPrefetchTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContentPrefetchTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentPrefetchTriggerFactory>
{
    IContentPrefetchTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceConnectionChangeTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceConnectionChangeTrigger>,
    impl::require<IDeviceConnectionChangeTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceConnectionChangeTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceConnectionChangeTriggerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceConnectionChangeTriggerStatics>
{
    IDeviceConnectionChangeTriggerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceManufacturerNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceManufacturerNotificationTrigger>,
    impl::require<IDeviceManufacturerNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceManufacturerNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceManufacturerNotificationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceManufacturerNotificationTriggerFactory>
{
    IDeviceManufacturerNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceServicingTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceServicingTrigger>,
    impl::require<IDeviceServicingTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceServicingTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceUseTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceUseTrigger>,
    impl::require<IDeviceUseTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceUseTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceWatcherTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceWatcherTrigger>,
    impl::require<IDeviceWatcherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceWatcherTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailStoreNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailStoreNotificationTrigger>,
    impl::require<IEmailStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IEmailStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattCharacteristicNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicNotificationTrigger>,
    impl::require<IGattCharacteristicNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IGattCharacteristicNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattCharacteristicNotificationTrigger2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicNotificationTrigger2>
{
    IGattCharacteristicNotificationTrigger2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattCharacteristicNotificationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicNotificationTriggerFactory>
{
    IGattCharacteristicNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattCharacteristicNotificationTriggerFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicNotificationTriggerFactory2>
{
    IGattCharacteristicNotificationTriggerFactory2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattServiceProviderTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderTrigger>
{
    IGattServiceProviderTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattServiceProviderTriggerResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderTriggerResult>
{
    IGattServiceProviderTriggerResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattServiceProviderTriggerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderTriggerStatics>
{
    IGattServiceProviderTriggerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILocationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocationTrigger>,
    impl::require<ILocationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ILocationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILocationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocationTriggerFactory>
{
    ILocationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMaintenanceTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMaintenanceTrigger>,
    impl::require<IMaintenanceTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IMaintenanceTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMaintenanceTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMaintenanceTriggerFactory>
{
    IMaintenanceTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaProcessingTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProcessingTrigger>,
    impl::require<IMediaProcessingTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IMediaProcessingTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INetworkOperatorHotspotAuthenticationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkOperatorHotspotAuthenticationTrigger>,
    impl::require<INetworkOperatorHotspotAuthenticationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    INetworkOperatorHotspotAuthenticationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INetworkOperatorNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkOperatorNotificationTrigger>,
    impl::require<INetworkOperatorNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    INetworkOperatorNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INetworkOperatorNotificationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkOperatorNotificationTriggerFactory>
{
    INetworkOperatorNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneTrigger>,
    impl::require<IPhoneTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IPhoneTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneTriggerFactory>
{
    IPhoneTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPushNotificationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationTriggerFactory>
{
    IPushNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRcsEndUserMessageAvailableTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRcsEndUserMessageAvailableTrigger>,
    impl::require<IRcsEndUserMessageAvailableTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IRcsEndUserMessageAvailableTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRfcommConnectionTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommConnectionTrigger>,
    impl::require<IRfcommConnectionTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IRfcommConnectionTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryAuthenticationFactorAuthenticationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorAuthenticationTrigger>,
    impl::require<ISecondaryAuthenticationFactorAuthenticationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISecondaryAuthenticationFactorAuthenticationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISensorDataThresholdTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISensorDataThresholdTrigger>,
    impl::require<ISensorDataThresholdTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISensorDataThresholdTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISensorDataThresholdTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISensorDataThresholdTriggerFactory>
{
    ISensorDataThresholdTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardTrigger>,
    impl::require<ISmartCardTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISmartCardTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmartCardTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardTriggerFactory>
{
    ISmartCardTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsMessageReceivedTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsMessageReceivedTriggerFactory>
{
    ISmsMessageReceivedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISocketActivityTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocketActivityTrigger>
{
    ISocketActivityTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageLibraryContentChangedTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryContentChangedTrigger>,
    impl::require<IStorageLibraryContentChangedTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IStorageLibraryContentChangedTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageLibraryContentChangedTriggerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryContentChangedTriggerStatics>
{
    IStorageLibraryContentChangedTriggerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemCondition :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemCondition>,
    impl::require<ISystemCondition, Windows::ApplicationModel::Background::IBackgroundCondition>
{
    ISystemCondition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemConditionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemConditionFactory>
{
    ISystemConditionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemTrigger>,
    impl::require<ISystemTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISystemTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemTriggerFactory>
{
    ISystemTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimeTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimeTrigger>,
    impl::require<ITimeTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ITimeTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimeTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimeTriggerFactory>
{
    ITimeTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationActionTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationActionTriggerFactory>
{
    IToastNotificationActionTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationHistoryChangedTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationHistoryChangedTriggerFactory>
{
    IToastNotificationHistoryChangedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserNotificationChangedTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserNotificationChangedTriggerFactory>
{
    IUserNotificationChangedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

}
