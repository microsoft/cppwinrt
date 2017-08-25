// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.0.h"
#include "winrt/impl/Windows.Data.Xml.Dom.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.UI.Notifications.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Notifications {

struct WINRT_EBO IAdaptiveNotificationContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveNotificationContent>
{
    IAdaptiveNotificationContent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveNotificationText :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveNotificationText>,
    impl::require<IAdaptiveNotificationText, Windows::UI::Notifications::IAdaptiveNotificationContent>
{
    IAdaptiveNotificationText(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBadgeNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBadgeNotification>
{
    IBadgeNotification(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBadgeNotificationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBadgeNotificationFactory>
{
    IBadgeNotificationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBadgeUpdateManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBadgeUpdateManagerForUser>
{
    IBadgeUpdateManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBadgeUpdateManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBadgeUpdateManagerStatics>
{
    IBadgeUpdateManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBadgeUpdateManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBadgeUpdateManagerStatics2>
{
    IBadgeUpdateManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBadgeUpdater :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBadgeUpdater>
{
    IBadgeUpdater(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKnownAdaptiveNotificationHintsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownAdaptiveNotificationHintsStatics>
{
    IKnownAdaptiveNotificationHintsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKnownAdaptiveNotificationTextStylesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownAdaptiveNotificationTextStylesStatics>
{
    IKnownAdaptiveNotificationTextStylesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKnownNotificationBindingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownNotificationBindingsStatics>
{
    IKnownNotificationBindingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotification>
{
    INotification(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INotificationBinding :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotificationBinding>
{
    INotificationBinding(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INotificationData :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotificationData>
{
    INotificationData(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INotificationDataFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotificationDataFactory>
{
    INotificationDataFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INotificationVisual :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotificationVisual>
{
    INotificationVisual(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScheduledTileNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScheduledTileNotification>
{
    IScheduledTileNotification(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScheduledTileNotificationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScheduledTileNotificationFactory>
{
    IScheduledTileNotificationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScheduledToastNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScheduledToastNotification>
{
    IScheduledToastNotification(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScheduledToastNotification2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScheduledToastNotification2>
{
    IScheduledToastNotification2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScheduledToastNotification3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScheduledToastNotification3>
{
    IScheduledToastNotification3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScheduledToastNotificationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScheduledToastNotificationFactory>
{
    IScheduledToastNotificationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShownTileNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShownTileNotification>
{
    IShownTileNotification(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileFlyoutNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileFlyoutNotification>
{
    ITileFlyoutNotification(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileFlyoutNotificationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileFlyoutNotificationFactory>
{
    ITileFlyoutNotificationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileFlyoutUpdateManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileFlyoutUpdateManagerStatics>
{
    ITileFlyoutUpdateManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileFlyoutUpdater :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileFlyoutUpdater>
{
    ITileFlyoutUpdater(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileNotification>
{
    ITileNotification(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileNotificationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileNotificationFactory>
{
    ITileNotificationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileUpdateManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileUpdateManagerForUser>
{
    ITileUpdateManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileUpdateManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileUpdateManagerStatics>
{
    ITileUpdateManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileUpdateManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileUpdateManagerStatics2>
{
    ITileUpdateManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileUpdater :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileUpdater>
{
    ITileUpdater(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileUpdater2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileUpdater2>
{
    ITileUpdater2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastActivatedEventArgs>
{
    IToastActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastCollection>
{
    IToastCollection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastCollectionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastCollectionFactory>
{
    IToastCollectionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastCollectionManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastCollectionManager>
{
    IToastCollectionManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastDismissedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastDismissedEventArgs>
{
    IToastDismissedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastFailedEventArgs>
{
    IToastFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotification>
{
    IToastNotification(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotification2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotification2>
{
    IToastNotification2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotification3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotification3>
{
    IToastNotification3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotification4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotification4>
{
    IToastNotification4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationActionTriggerDetail :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationActionTriggerDetail>
{
    IToastNotificationActionTriggerDetail(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationFactory>
{
    IToastNotificationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationHistory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationHistory>
{
    IToastNotificationHistory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationHistory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationHistory2>
{
    IToastNotificationHistory2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationHistoryChangedTriggerDetail :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationHistoryChangedTriggerDetail>
{
    IToastNotificationHistoryChangedTriggerDetail(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationHistoryChangedTriggerDetail2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationHistoryChangedTriggerDetail2>
{
    IToastNotificationHistoryChangedTriggerDetail2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerForUser>
{
    IToastNotificationManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationManagerForUser2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerForUser2>
{
    IToastNotificationManagerForUser2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerStatics>
{
    IToastNotificationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerStatics2>
{
    IToastNotificationManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationManagerStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerStatics4>
{
    IToastNotificationManagerStatics4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationManagerStatics5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerStatics5>
{
    IToastNotificationManagerStatics5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotifier>
{
    IToastNotifier(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotifier2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotifier2>
{
    IToastNotifier2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserNotification>
{
    IUserNotification(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserNotificationChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserNotificationChangedEventArgs>
{
    IUserNotificationChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
