// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Notifications {

struct IAdaptiveNotificationContent;
struct IAdaptiveNotificationText;
struct IBadgeNotification;
struct IBadgeNotificationFactory;
struct IBadgeUpdateManagerForUser;
struct IBadgeUpdateManagerStatics;
struct IBadgeUpdateManagerStatics2;
struct IBadgeUpdater;
struct IKnownAdaptiveNotificationHintsStatics;
struct IKnownAdaptiveNotificationTextStylesStatics;
struct IKnownNotificationBindingsStatics;
struct INotification;
struct INotificationBinding;
struct INotificationVisual;
struct IScheduledTileNotification;
struct IScheduledTileNotificationFactory;
struct IScheduledToastNotification;
struct IScheduledToastNotification2;
struct IScheduledToastNotification3;
struct IScheduledToastNotificationFactory;
struct IShownTileNotification;
struct ITileFlyoutNotification;
struct ITileFlyoutNotificationFactory;
struct ITileFlyoutUpdateManagerStatics;
struct ITileFlyoutUpdater;
struct ITileNotification;
struct ITileNotificationFactory;
struct ITileUpdateManagerForUser;
struct ITileUpdateManagerStatics;
struct ITileUpdateManagerStatics2;
struct ITileUpdater;
struct ITileUpdater2;
struct IToastActivatedEventArgs;
struct IToastDismissedEventArgs;
struct IToastFailedEventArgs;
struct IToastNotification;
struct IToastNotification2;
struct IToastNotification3;
struct IToastNotificationActionTriggerDetail;
struct IToastNotificationFactory;
struct IToastNotificationHistory;
struct IToastNotificationHistory2;
struct IToastNotificationHistoryChangedTriggerDetail;
struct IToastNotificationManagerForUser;
struct IToastNotificationManagerStatics;
struct IToastNotificationManagerStatics2;
struct IToastNotificationManagerStatics4;
struct IToastNotifier;
struct IUserNotification;
struct IUserNotificationChangedEventArgs;
struct AdaptiveNotificationText;
struct BadgeNotification;
struct BadgeUpdateManagerForUser;
struct BadgeUpdater;
struct Notification;
struct NotificationBinding;
struct NotificationVisual;
struct ScheduledTileNotification;
struct ScheduledToastNotification;
struct ShownTileNotification;
struct TileFlyoutNotification;
struct TileFlyoutUpdater;
struct TileNotification;
struct TileUpdateManagerForUser;
struct TileUpdater;
struct ToastActivatedEventArgs;
struct ToastDismissedEventArgs;
struct ToastFailedEventArgs;
struct ToastNotification;
struct ToastNotificationActionTriggerDetail;
struct ToastNotificationHistory;
struct ToastNotificationHistoryChangedTriggerDetail;
struct ToastNotificationManagerForUser;
struct ToastNotifier;
struct UserNotification;
struct UserNotificationChangedEventArgs;

}

namespace Windows::UI::Notifications {

struct IAdaptiveNotificationContent;
struct IAdaptiveNotificationText;
struct IBadgeNotification;
struct IBadgeNotificationFactory;
struct IBadgeUpdateManagerForUser;
struct IBadgeUpdateManagerStatics;
struct IBadgeUpdateManagerStatics2;
struct IBadgeUpdater;
struct IKnownAdaptiveNotificationHintsStatics;
struct IKnownAdaptiveNotificationTextStylesStatics;
struct IKnownNotificationBindingsStatics;
struct INotification;
struct INotificationBinding;
struct INotificationVisual;
struct IScheduledTileNotification;
struct IScheduledTileNotificationFactory;
struct IScheduledToastNotification;
struct IScheduledToastNotification2;
struct IScheduledToastNotification3;
struct IScheduledToastNotificationFactory;
struct IShownTileNotification;
struct ITileFlyoutNotification;
struct ITileFlyoutNotificationFactory;
struct ITileFlyoutUpdateManagerStatics;
struct ITileFlyoutUpdater;
struct ITileNotification;
struct ITileNotificationFactory;
struct ITileUpdateManagerForUser;
struct ITileUpdateManagerStatics;
struct ITileUpdateManagerStatics2;
struct ITileUpdater;
struct ITileUpdater2;
struct IToastActivatedEventArgs;
struct IToastDismissedEventArgs;
struct IToastFailedEventArgs;
struct IToastNotification;
struct IToastNotification2;
struct IToastNotification3;
struct IToastNotificationActionTriggerDetail;
struct IToastNotificationFactory;
struct IToastNotificationHistory;
struct IToastNotificationHistory2;
struct IToastNotificationHistoryChangedTriggerDetail;
struct IToastNotificationManagerForUser;
struct IToastNotificationManagerStatics;
struct IToastNotificationManagerStatics2;
struct IToastNotificationManagerStatics4;
struct IToastNotifier;
struct IUserNotification;
struct IUserNotificationChangedEventArgs;
struct AdaptiveNotificationText;
struct BadgeNotification;
struct BadgeUpdateManager;
struct BadgeUpdateManagerForUser;
struct BadgeUpdater;
struct KnownAdaptiveNotificationHints;
struct KnownAdaptiveNotificationTextStyles;
struct KnownNotificationBindings;
struct Notification;
struct NotificationBinding;
struct NotificationVisual;
struct ScheduledTileNotification;
struct ScheduledToastNotification;
struct ShownTileNotification;
struct TileFlyoutNotification;
struct TileFlyoutUpdateManager;
struct TileFlyoutUpdater;
struct TileNotification;
struct TileUpdateManager;
struct TileUpdateManagerForUser;
struct TileUpdater;
struct ToastActivatedEventArgs;
struct ToastDismissedEventArgs;
struct ToastFailedEventArgs;
struct ToastNotification;
struct ToastNotificationActionTriggerDetail;
struct ToastNotificationHistory;
struct ToastNotificationHistoryChangedTriggerDetail;
struct ToastNotificationManager;
struct ToastNotificationManagerForUser;
struct ToastNotifier;
struct UserNotification;
struct UserNotificationChangedEventArgs;

}

namespace Windows::UI::Notifications {

enum class AdaptiveNotificationContentKind
{
    Text = 0,
};

enum class BadgeTemplateType
{
    BadgeGlyph = 0,
    BadgeNumber = 1,
};

enum class NotificationKinds : unsigned
{
    Unknown = 0x0,
    Toast = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(NotificationKinds)

enum class NotificationMirroring
{
    Allowed = 0,
    Disabled = 1,
};

enum class NotificationSetting
{
    Enabled = 0,
    DisabledForApplication = 1,
    DisabledForUser = 2,
    DisabledByGroupPolicy = 3,
    DisabledByManifest = 4,
};

enum class PeriodicUpdateRecurrence
{
    HalfHour = 0,
    Hour = 1,
    SixHours = 2,
    TwelveHours = 3,
    Daily = 4,
};

enum class TileFlyoutTemplateType
{
    TileFlyoutTemplate01 = 0,
};

enum class TileTemplateType
{
    TileSquareImage = 0,
    TileSquareBlock = 1,
    TileSquareText01 = 2,
    TileSquareText02 = 3,
    TileSquareText03 = 4,
    TileSquareText04 = 5,
    TileSquarePeekImageAndText01 = 6,
    TileSquarePeekImageAndText02 = 7,
    TileSquarePeekImageAndText03 = 8,
    TileSquarePeekImageAndText04 = 9,
    TileWideImage = 10,
    TileWideImageCollection = 11,
    TileWideImageAndText01 = 12,
    TileWideImageAndText02 = 13,
    TileWideBlockAndText01 = 14,
    TileWideBlockAndText02 = 15,
    TileWidePeekImageCollection01 = 16,
    TileWidePeekImageCollection02 = 17,
    TileWidePeekImageCollection03 = 18,
    TileWidePeekImageCollection04 = 19,
    TileWidePeekImageCollection05 = 20,
    TileWidePeekImageCollection06 = 21,
    TileWidePeekImageAndText01 = 22,
    TileWidePeekImageAndText02 = 23,
    TileWidePeekImage01 = 24,
    TileWidePeekImage02 = 25,
    TileWidePeekImage03 = 26,
    TileWidePeekImage04 = 27,
    TileWidePeekImage05 = 28,
    TileWidePeekImage06 = 29,
    TileWideSmallImageAndText01 = 30,
    TileWideSmallImageAndText02 = 31,
    TileWideSmallImageAndText03 = 32,
    TileWideSmallImageAndText04 = 33,
    TileWideSmallImageAndText05 = 34,
    TileWideText01 = 35,
    TileWideText02 = 36,
    TileWideText03 = 37,
    TileWideText04 = 38,
    TileWideText05 = 39,
    TileWideText06 = 40,
    TileWideText07 = 41,
    TileWideText08 = 42,
    TileWideText09 = 43,
    TileWideText10 = 44,
    TileWideText11 = 45,
    TileSquare150x150Image = 0,
    TileSquare150x150Block = 1,
    TileSquare150x150Text01 = 2,
    TileSquare150x150Text02 = 3,
    TileSquare150x150Text03 = 4,
    TileSquare150x150Text04 = 5,
    TileSquare150x150PeekImageAndText01 = 6,
    TileSquare150x150PeekImageAndText02 = 7,
    TileSquare150x150PeekImageAndText03 = 8,
    TileSquare150x150PeekImageAndText04 = 9,
    TileWide310x150Image = 10,
    TileWide310x150ImageCollection = 11,
    TileWide310x150ImageAndText01 = 12,
    TileWide310x150ImageAndText02 = 13,
    TileWide310x150BlockAndText01 = 14,
    TileWide310x150BlockAndText02 = 15,
    TileWide310x150PeekImageCollection01 = 16,
    TileWide310x150PeekImageCollection02 = 17,
    TileWide310x150PeekImageCollection03 = 18,
    TileWide310x150PeekImageCollection04 = 19,
    TileWide310x150PeekImageCollection05 = 20,
    TileWide310x150PeekImageCollection06 = 21,
    TileWide310x150PeekImageAndText01 = 22,
    TileWide310x150PeekImageAndText02 = 23,
    TileWide310x150PeekImage01 = 24,
    TileWide310x150PeekImage02 = 25,
    TileWide310x150PeekImage03 = 26,
    TileWide310x150PeekImage04 = 27,
    TileWide310x150PeekImage05 = 28,
    TileWide310x150PeekImage06 = 29,
    TileWide310x150SmallImageAndText01 = 30,
    TileWide310x150SmallImageAndText02 = 31,
    TileWide310x150SmallImageAndText03 = 32,
    TileWide310x150SmallImageAndText04 = 33,
    TileWide310x150SmallImageAndText05 = 34,
    TileWide310x150Text01 = 35,
    TileWide310x150Text02 = 36,
    TileWide310x150Text03 = 37,
    TileWide310x150Text04 = 38,
    TileWide310x150Text05 = 39,
    TileWide310x150Text06 = 40,
    TileWide310x150Text07 = 41,
    TileWide310x150Text08 = 42,
    TileWide310x150Text09 = 43,
    TileWide310x150Text10 = 44,
    TileWide310x150Text11 = 45,
    TileSquare310x310BlockAndText01 = 46,
    TileSquare310x310BlockAndText02 = 47,
    TileSquare310x310Image = 48,
    TileSquare310x310ImageAndText01 = 49,
    TileSquare310x310ImageAndText02 = 50,
    TileSquare310x310ImageAndTextOverlay01 = 51,
    TileSquare310x310ImageAndTextOverlay02 = 52,
    TileSquare310x310ImageAndTextOverlay03 = 53,
    TileSquare310x310ImageCollectionAndText01 = 54,
    TileSquare310x310ImageCollectionAndText02 = 55,
    TileSquare310x310ImageCollection = 56,
    TileSquare310x310SmallImagesAndTextList01 = 57,
    TileSquare310x310SmallImagesAndTextList02 = 58,
    TileSquare310x310SmallImagesAndTextList03 = 59,
    TileSquare310x310SmallImagesAndTextList04 = 60,
    TileSquare310x310Text01 = 61,
    TileSquare310x310Text02 = 62,
    TileSquare310x310Text03 = 63,
    TileSquare310x310Text04 = 64,
    TileSquare310x310Text05 = 65,
    TileSquare310x310Text06 = 66,
    TileSquare310x310Text07 = 67,
    TileSquare310x310Text08 = 68,
    TileSquare310x310TextList01 = 69,
    TileSquare310x310TextList02 = 70,
    TileSquare310x310TextList03 = 71,
    TileSquare310x310SmallImageAndText01 = 72,
    TileSquare310x310SmallImagesAndTextList05 = 73,
    TileSquare310x310Text09 = 74,
    TileSquare71x71IconWithBadge = 75,
    TileSquare150x150IconWithBadge = 76,
    TileWide310x150IconWithBadgeAndText = 77,
    TileSquare71x71Image = 78,
    TileTall150x310Image = 79,
};

enum class ToastDismissalReason
{
    UserCanceled = 0,
    ApplicationHidden = 1,
    TimedOut = 2,
};

enum class ToastHistoryChangedType
{
    Cleared = 0,
    Removed = 1,
    Expired = 2,
    Added = 3,
};

enum class ToastTemplateType
{
    ToastImageAndText01 = 0,
    ToastImageAndText02 = 1,
    ToastImageAndText03 = 2,
    ToastImageAndText04 = 3,
    ToastText01 = 4,
    ToastText02 = 5,
    ToastText03 = 6,
    ToastText04 = 7,
};

enum class UserNotificationChangedKind
{
    Added = 0,
    Removed = 1,
};

}

}
