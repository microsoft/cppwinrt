// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Notifications.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_f6d1f700_49c2_52ae_8154_826f9908773c
#define WINRT_GENERIC_f6d1f700_49c2_52ae_8154_826f9908773c
template <> struct __declspec(uuid("f6d1f700-49c2-52ae-8154-826f9908773c")) __declspec(novtable) IMap<hstring, hstring> : impl_IMap<hstring, hstring> {};
#endif

#ifndef WINRT_GENERIC_60310303_49c5_52e6_abc6_a9b36eccc716
#define WINRT_GENERIC_60310303_49c5_52e6_abc6_a9b36eccc716
template <> struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716")) __declspec(novtable) IKeyValuePair<hstring, hstring> : impl_IKeyValuePair<hstring, hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
#define WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
template <> struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c")) __declspec(novtable) IReference<Windows::Foundation::DateTime> : impl_IReference<Windows::Foundation::DateTime> {};
#endif

#ifndef WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
#define WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
template <> struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800")) __declspec(novtable) IReference<Windows::Foundation::TimeSpan> : impl_IReference<Windows::Foundation::TimeSpan> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_b0d63b78_78ad_5e31_b6d8_e32a0e16c447
#define WINRT_GENERIC_b0d63b78_78ad_5e31_b6d8_e32a0e16c447
template <> struct __declspec(uuid("b0d63b78-78ad-5e31-b6d8-e32a0e16c447")) __declspec(novtable) IIterable<Windows::Foundation::Uri> : impl_IIterable<Windows::Foundation::Uri> {};
#endif

#ifndef WINRT_GENERIC_ac7f26f2_feb7_5b2a_8ac4_345bc62caede
#define WINRT_GENERIC_ac7f26f2_feb7_5b2a_8ac4_345bc62caede
template <> struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede")) __declspec(novtable) IMapView<hstring, hstring> : impl_IMapView<hstring, hstring> {};
#endif

#ifndef WINRT_GENERIC_7f7d8ad7_b4d2_5a03_be6f_2b89875fb32d
#define WINRT_GENERIC_7f7d8ad7_b4d2_5a03_be6f_2b89875fb32d
template <> struct __declspec(uuid("7f7d8ad7-b4d2-5a03-be6f-2b89875fb32d")) __declspec(novtable) IVector<Windows::UI::Notifications::NotificationBinding> : impl_IVector<Windows::UI::Notifications::NotificationBinding> {};
#endif

#ifndef WINRT_GENERIC_b60de92b_4e12_55af_b42f_afe2d70ba278
#define WINRT_GENERIC_b60de92b_4e12_55af_b42f_afe2d70ba278
template <> struct __declspec(uuid("b60de92b-4e12-55af-b42f-afe2d70ba278")) __declspec(novtable) IVectorView<Windows::UI::Notifications::AdaptiveNotificationText> : impl_IVectorView<Windows::UI::Notifications::AdaptiveNotificationText> {};
#endif

#ifndef WINRT_GENERIC_4f729c64_a213_52e9_af8b_58adca3e597f
#define WINRT_GENERIC_4f729c64_a213_52e9_af8b_58adca3e597f
template <> struct __declspec(uuid("4f729c64-a213-52e9-af8b-58adca3e597f")) __declspec(novtable) IVectorView<Windows::UI::Notifications::ScheduledTileNotification> : impl_IVectorView<Windows::UI::Notifications::ScheduledTileNotification> {};
#endif

#ifndef WINRT_GENERIC_ba0aff1f_6a8a_5a7e_a9f7_505b6266a436
#define WINRT_GENERIC_ba0aff1f_6a8a_5a7e_a9f7_505b6266a436
template <> struct __declspec(uuid("ba0aff1f-6a8a-5a7e-a9f7-505b6266a436")) __declspec(novtable) IVectorView<Windows::UI::Notifications::ScheduledToastNotification> : impl_IVectorView<Windows::UI::Notifications::ScheduledToastNotification> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_61c2402f_0ed0_5a18_ab69_59f4aa99a368
#define WINRT_GENERIC_61c2402f_0ed0_5a18_ab69_59f4aa99a368
template <> struct __declspec(uuid("61c2402f-0ed0-5a18-ab69-59f4aa99a368")) __declspec(novtable) TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastDismissedEventArgs> : impl_TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastDismissedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_ab54de2d_97d9_5528_b6ad_105afe156530
#define WINRT_GENERIC_ab54de2d_97d9_5528_b6ad_105afe156530
template <> struct __declspec(uuid("ab54de2d-97d9-5528-b6ad-105afe156530")) __declspec(novtable) TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::IInspectable> : impl_TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_95e3e803_c969_5e3a_9753_ea2ad22a9a33
#define WINRT_GENERIC_95e3e803_c969_5e3a_9753_ea2ad22a9a33
template <> struct __declspec(uuid("95e3e803-c969-5e3a-9753-ea2ad22a9a33")) __declspec(novtable) TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastFailedEventArgs> : impl_TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastFailedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_a819f3de_60aa_5159_8407_f0a7fb1f6832
#define WINRT_GENERIC_a819f3de_60aa_5159_8407_f0a7fb1f6832
template <> struct __declspec(uuid("a819f3de-60aa-5159-8407-f0a7fb1f6832")) __declspec(novtable) IVectorView<Windows::UI::Notifications::ToastNotification> : impl_IVectorView<Windows::UI::Notifications::ToastNotification> {};
#endif

#ifndef WINRT_GENERIC_1c157d0f_5efe_5cec_bbd6_0c6ce9af07a5
#define WINRT_GENERIC_1c157d0f_5efe_5cec_bbd6_0c6ce9af07a5
template <> struct __declspec(uuid("1c157d0f-5efe-5cec-bbd6-0c6ce9af07a5")) __declspec(novtable) IIterator<Windows::Foundation::Uri> : impl_IIterator<Windows::Foundation::Uri> {};
#endif

#ifndef WINRT_GENERIC_66187f56_9ee1_5c48_82da_6cb9ddf879e7
#define WINRT_GENERIC_66187f56_9ee1_5c48_82da_6cb9ddf879e7
template <> struct __declspec(uuid("66187f56-9ee1-5c48-82da-6cb9ddf879e7")) __declspec(novtable) IIterator<Windows::UI::Notifications::NotificationBinding> : impl_IIterator<Windows::UI::Notifications::NotificationBinding> {};
#endif

#ifndef WINRT_GENERIC_e8d9489c_635e_5153_8ab7_389f2ee9faca
#define WINRT_GENERIC_e8d9489c_635e_5153_8ab7_389f2ee9faca
template <> struct __declspec(uuid("e8d9489c-635e-5153-8ab7-389f2ee9faca")) __declspec(novtable) IIterable<Windows::UI::Notifications::NotificationBinding> : impl_IIterable<Windows::UI::Notifications::NotificationBinding> {};
#endif

#ifndef WINRT_GENERIC_9e4d0240_6d5c_582a_a29d_734e84750738
#define WINRT_GENERIC_9e4d0240_6d5c_582a_a29d_734e84750738
template <> struct __declspec(uuid("9e4d0240-6d5c-582a-a29d-734e84750738")) __declspec(novtable) IVectorView<Windows::UI::Notifications::NotificationBinding> : impl_IVectorView<Windows::UI::Notifications::NotificationBinding> {};
#endif

#ifndef WINRT_GENERIC_18015daa_cbc3_5a51_9f4b_3c069135b0e0
#define WINRT_GENERIC_18015daa_cbc3_5a51_9f4b_3c069135b0e0
template <> struct __declspec(uuid("18015daa-cbc3-5a51-9f4b-3c069135b0e0")) __declspec(novtable) IIterator<Windows::UI::Notifications::AdaptiveNotificationText> : impl_IIterator<Windows::UI::Notifications::AdaptiveNotificationText> {};
#endif

#ifndef WINRT_GENERIC_0343e8f2_ca4c_5f40_b8d1_3ff47047ce43
#define WINRT_GENERIC_0343e8f2_ca4c_5f40_b8d1_3ff47047ce43
template <> struct __declspec(uuid("0343e8f2-ca4c-5f40-b8d1-3ff47047ce43")) __declspec(novtable) IIterable<Windows::UI::Notifications::AdaptiveNotificationText> : impl_IIterable<Windows::UI::Notifications::AdaptiveNotificationText> {};
#endif

#ifndef WINRT_GENERIC_5665e491_6543_5036_935f_b5157950b359
#define WINRT_GENERIC_5665e491_6543_5036_935f_b5157950b359
template <> struct __declspec(uuid("5665e491-6543-5036-935f-b5157950b359")) __declspec(novtable) IIterator<Windows::UI::Notifications::ScheduledTileNotification> : impl_IIterator<Windows::UI::Notifications::ScheduledTileNotification> {};
#endif

#ifndef WINRT_GENERIC_4b60d1e5_52ae_5766_9720_be4ad086f952
#define WINRT_GENERIC_4b60d1e5_52ae_5766_9720_be4ad086f952
template <> struct __declspec(uuid("4b60d1e5-52ae-5766-9720-be4ad086f952")) __declspec(novtable) IIterable<Windows::UI::Notifications::ScheduledTileNotification> : impl_IIterable<Windows::UI::Notifications::ScheduledTileNotification> {};
#endif

#ifndef WINRT_GENERIC_304238b6_888a_5dd2_96cd_bfca8927483b
#define WINRT_GENERIC_304238b6_888a_5dd2_96cd_bfca8927483b
template <> struct __declspec(uuid("304238b6-888a-5dd2-96cd-bfca8927483b")) __declspec(novtable) IIterator<Windows::UI::Notifications::ScheduledToastNotification> : impl_IIterator<Windows::UI::Notifications::ScheduledToastNotification> {};
#endif

#ifndef WINRT_GENERIC_7a7b2a51_c182_5846_a861_4f9c036f24ad
#define WINRT_GENERIC_7a7b2a51_c182_5846_a861_4f9c036f24ad
template <> struct __declspec(uuid("7a7b2a51-c182-5846-a861-4f9c036f24ad")) __declspec(novtable) IIterable<Windows::UI::Notifications::ScheduledToastNotification> : impl_IIterable<Windows::UI::Notifications::ScheduledToastNotification> {};
#endif

#ifndef WINRT_GENERIC_fe1e726a_3aa9_5d98_b19b_97e3e17eec7b
#define WINRT_GENERIC_fe1e726a_3aa9_5d98_b19b_97e3e17eec7b
template <> struct __declspec(uuid("fe1e726a-3aa9-5d98-b19b-97e3e17eec7b")) __declspec(novtable) IIterator<Windows::UI::Notifications::ToastNotification> : impl_IIterator<Windows::UI::Notifications::ToastNotification> {};
#endif

#ifndef WINRT_GENERIC_52c9428b_d37a_554d_bf55_b8685d5f552d
#define WINRT_GENERIC_52c9428b_d37a_554d_bf55_b8685d5f552d
template <> struct __declspec(uuid("52c9428b-d37a-554d-bf55-b8685d5f552d")) __declspec(novtable) IIterable<Windows::UI::Notifications::ToastNotification> : impl_IIterable<Windows::UI::Notifications::ToastNotification> {};
#endif

#ifndef WINRT_GENERIC_e9bdaaf0_cbf6_5c72_be90_29cbf3a1319b
#define WINRT_GENERIC_e9bdaaf0_cbf6_5c72_be90_29cbf3a1319b
template <> struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> {};
#endif

#ifndef WINRT_GENERIC_05eb86f1_7140_5517_b88d_cbaebe57e6b1
#define WINRT_GENERIC_05eb86f1_7140_5517_b88d_cbaebe57e6b1
template <> struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> {};
#endif


}

namespace Windows::UI::Notifications {

template <typename D>
struct WINRT_EBO impl_IAdaptiveNotificationContent
{
    Windows::UI::Notifications::AdaptiveNotificationContentKind Kind() const;
    Windows::Foundation::Collections::IMap<hstring, hstring> Hints() const;
};

template <typename D>
struct WINRT_EBO impl_IAdaptiveNotificationText
{
    hstring Text() const;
    void Text(hstring_ref value) const;
    hstring Language() const;
    void Language(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IBadgeNotification
{
    Windows::Data::Xml::Dom::XmlDocument Content() const;
    void ExpirationTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ExpirationTime() const;
};

template <typename D>
struct WINRT_EBO impl_IBadgeNotificationFactory
{
    Windows::UI::Notifications::BadgeNotification CreateBadgeNotification(const Windows::Data::Xml::Dom::XmlDocument & content) const;
};

template <typename D>
struct WINRT_EBO impl_IBadgeUpdateManagerForUser
{
    Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForApplication() const;
    Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForApplication(hstring_ref applicationId) const;
    Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForSecondaryTile(hstring_ref tileId) const;
    Windows::System::User User() const;
};

template <typename D>
struct WINRT_EBO impl_IBadgeUpdateManagerStatics
{
    Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForApplication() const;
    Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForApplication(hstring_ref applicationId) const;
    Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForSecondaryTile(hstring_ref tileId) const;
    Windows::Data::Xml::Dom::XmlDocument GetTemplateContent(Windows::UI::Notifications::BadgeTemplateType type) const;
};

template <typename D>
struct WINRT_EBO impl_IBadgeUpdateManagerStatics2
{
    Windows::UI::Notifications::BadgeUpdateManagerForUser GetForUser(const Windows::System::User & user) const;
};

template <typename D>
struct WINRT_EBO impl_IBadgeUpdater
{
    void Update(const Windows::UI::Notifications::BadgeNotification & notification) const;
    void Clear() const;
    void StartPeriodicUpdate(const Windows::Foundation::Uri & badgeContent, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const;
    void StartPeriodicUpdate(const Windows::Foundation::Uri & badgeContent, const Windows::Foundation::DateTime & startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const;
    void StopPeriodicUpdate() const;
};

template <typename D>
struct WINRT_EBO impl_IKnownAdaptiveNotificationHintsStatics
{
    hstring Style() const;
    hstring Wrap() const;
    hstring MaxLines() const;
    hstring MinLines() const;
    hstring TextStacking() const;
    hstring Align() const;
};

template <typename D>
struct WINRT_EBO impl_IKnownAdaptiveNotificationTextStylesStatics
{
    hstring Caption() const;
    hstring Body() const;
    hstring Base() const;
    hstring Subtitle() const;
    hstring Title() const;
    hstring Subheader() const;
    hstring Header() const;
    hstring TitleNumeral() const;
    hstring SubheaderNumeral() const;
    hstring HeaderNumeral() const;
    hstring CaptionSubtle() const;
    hstring BodySubtle() const;
    hstring BaseSubtle() const;
    hstring SubtitleSubtle() const;
    hstring TitleSubtle() const;
    hstring SubheaderSubtle() const;
    hstring SubheaderNumeralSubtle() const;
    hstring HeaderSubtle() const;
    hstring HeaderNumeralSubtle() const;
};

template <typename D>
struct WINRT_EBO impl_IKnownNotificationBindingsStatics
{
    hstring ToastGeneric() const;
};

template <typename D>
struct WINRT_EBO impl_INotification
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ExpirationTime() const;
    void ExpirationTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const;
    Windows::UI::Notifications::NotificationVisual Visual() const;
    void Visual(const Windows::UI::Notifications::NotificationVisual & value) const;
};

template <typename D>
struct WINRT_EBO impl_INotificationBinding
{
    hstring Template() const;
    void Template(hstring_ref value) const;
    hstring Language() const;
    void Language(hstring_ref value) const;
    Windows::Foundation::Collections::IMap<hstring, hstring> Hints() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::AdaptiveNotificationText> GetTextElements() const;
};

template <typename D>
struct WINRT_EBO impl_INotificationVisual
{
    hstring Language() const;
    void Language(hstring_ref value) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Notifications::NotificationBinding> Bindings() const;
    Windows::UI::Notifications::NotificationBinding GetBinding(hstring_ref templateName) const;
};

template <typename D>
struct WINRT_EBO impl_IScheduledTileNotification
{
    Windows::Data::Xml::Dom::XmlDocument Content() const;
    Windows::Foundation::DateTime DeliveryTime() const;
    void ExpirationTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ExpirationTime() const;
    void Tag(hstring_ref value) const;
    hstring Tag() const;
    void Id(hstring_ref value) const;
    hstring Id() const;
};

template <typename D>
struct WINRT_EBO impl_IScheduledTileNotificationFactory
{
    Windows::UI::Notifications::ScheduledTileNotification CreateScheduledTileNotification(const Windows::Data::Xml::Dom::XmlDocument & content, const Windows::Foundation::DateTime & deliveryTime) const;
};

template <typename D>
struct WINRT_EBO impl_IScheduledToastNotification
{
    Windows::Data::Xml::Dom::XmlDocument Content() const;
    Windows::Foundation::DateTime DeliveryTime() const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> SnoozeInterval() const;
    uint32_t MaximumSnoozeCount() const;
    void Id(hstring_ref value) const;
    hstring Id() const;
};

template <typename D>
struct WINRT_EBO impl_IScheduledToastNotification2
{
    void Tag(hstring_ref value) const;
    hstring Tag() const;
    void Group(hstring_ref value) const;
    hstring Group() const;
    void SuppressPopup(bool value) const;
    bool SuppressPopup() const;
};

template <typename D>
struct WINRT_EBO impl_IScheduledToastNotification3
{
    Windows::UI::Notifications::NotificationMirroring NotificationMirroring() const;
    void NotificationMirroring(Windows::UI::Notifications::NotificationMirroring value) const;
    hstring RemoteId() const;
    void RemoteId(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IScheduledToastNotificationFactory
{
    Windows::UI::Notifications::ScheduledToastNotification CreateScheduledToastNotification(const Windows::Data::Xml::Dom::XmlDocument & content, const Windows::Foundation::DateTime & deliveryTime) const;
    Windows::UI::Notifications::ScheduledToastNotification CreateScheduledToastNotificationRecurring(const Windows::Data::Xml::Dom::XmlDocument & content, const Windows::Foundation::DateTime & deliveryTime, const Windows::Foundation::TimeSpan & snoozeInterval, uint32_t maximumSnoozeCount) const;
};

template <typename D>
struct WINRT_EBO impl_IShownTileNotification
{
    hstring Arguments() const;
};

template <typename D>
struct WINRT_EBO impl_ITileFlyoutNotification
{
    Windows::Data::Xml::Dom::XmlDocument Content() const;
    void ExpirationTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ExpirationTime() const;
};

template <typename D>
struct WINRT_EBO impl_ITileFlyoutNotificationFactory
{
    Windows::UI::Notifications::TileFlyoutNotification CreateTileFlyoutNotification(const Windows::Data::Xml::Dom::XmlDocument & content) const;
};

template <typename D>
struct WINRT_EBO impl_ITileFlyoutUpdateManagerStatics
{
    Windows::UI::Notifications::TileFlyoutUpdater CreateTileFlyoutUpdaterForApplication() const;
    Windows::UI::Notifications::TileFlyoutUpdater CreateTileFlyoutUpdaterForApplication(hstring_ref applicationId) const;
    Windows::UI::Notifications::TileFlyoutUpdater CreateTileFlyoutUpdaterForSecondaryTile(hstring_ref tileId) const;
    Windows::Data::Xml::Dom::XmlDocument GetTemplateContent(Windows::UI::Notifications::TileFlyoutTemplateType type) const;
};

template <typename D>
struct WINRT_EBO impl_ITileFlyoutUpdater
{
    void Update(const Windows::UI::Notifications::TileFlyoutNotification & notification) const;
    void Clear() const;
    void StartPeriodicUpdate(const Windows::Foundation::Uri & tileFlyoutContent, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const;
    void StartPeriodicUpdate(const Windows::Foundation::Uri & tileFlyoutContent, const Windows::Foundation::DateTime & startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const;
    void StopPeriodicUpdate() const;
    Windows::UI::Notifications::NotificationSetting Setting() const;
};

template <typename D>
struct WINRT_EBO impl_ITileNotification
{
    Windows::Data::Xml::Dom::XmlDocument Content() const;
    void ExpirationTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ExpirationTime() const;
    void Tag(hstring_ref value) const;
    hstring Tag() const;
};

template <typename D>
struct WINRT_EBO impl_ITileNotificationFactory
{
    Windows::UI::Notifications::TileNotification CreateTileNotification(const Windows::Data::Xml::Dom::XmlDocument & content) const;
};

template <typename D>
struct WINRT_EBO impl_ITileUpdateManagerForUser
{
    Windows::UI::Notifications::TileUpdater CreateTileUpdaterForApplicationForUser() const;
    Windows::UI::Notifications::TileUpdater CreateTileUpdaterForApplication(hstring_ref applicationId) const;
    Windows::UI::Notifications::TileUpdater CreateTileUpdaterForSecondaryTile(hstring_ref tileId) const;
    Windows::System::User User() const;
};

template <typename D>
struct WINRT_EBO impl_ITileUpdateManagerStatics
{
    Windows::UI::Notifications::TileUpdater CreateTileUpdaterForApplication() const;
    Windows::UI::Notifications::TileUpdater CreateTileUpdaterForApplication(hstring_ref applicationId) const;
    Windows::UI::Notifications::TileUpdater CreateTileUpdaterForSecondaryTile(hstring_ref tileId) const;
    Windows::Data::Xml::Dom::XmlDocument GetTemplateContent(Windows::UI::Notifications::TileTemplateType type) const;
};

template <typename D>
struct WINRT_EBO impl_ITileUpdateManagerStatics2
{
    Windows::UI::Notifications::TileUpdateManagerForUser GetForUser(const Windows::System::User & user) const;
};

template <typename D>
struct WINRT_EBO impl_ITileUpdater
{
    void Update(const Windows::UI::Notifications::TileNotification & notification) const;
    void Clear() const;
    void EnableNotificationQueue(bool enable) const;
    Windows::UI::Notifications::NotificationSetting Setting() const;
    void AddToSchedule(const Windows::UI::Notifications::ScheduledTileNotification & scheduledTile) const;
    void RemoveFromSchedule(const Windows::UI::Notifications::ScheduledTileNotification & scheduledTile) const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ScheduledTileNotification> GetScheduledTileNotifications() const;
    void StartPeriodicUpdate(const Windows::Foundation::Uri & tileContent, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const;
    void StartPeriodicUpdate(const Windows::Foundation::Uri & tileContent, const Windows::Foundation::DateTime & startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const;
    void StopPeriodicUpdate() const;
    void StartPeriodicUpdateBatch(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & tileContents, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const;
    void StartPeriodicUpdateBatch(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & tileContents, const Windows::Foundation::DateTime & startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const;
};

template <typename D>
struct WINRT_EBO impl_ITileUpdater2
{
    void EnableNotificationQueueForSquare150x150(bool enable) const;
    void EnableNotificationQueueForWide310x150(bool enable) const;
    void EnableNotificationQueueForSquare310x310(bool enable) const;
};

template <typename D>
struct WINRT_EBO impl_IToastActivatedEventArgs
{
    hstring Arguments() const;
};

template <typename D>
struct WINRT_EBO impl_IToastDismissedEventArgs
{
    Windows::UI::Notifications::ToastDismissalReason Reason() const;
};

template <typename D>
struct WINRT_EBO impl_IToastFailedEventArgs
{
    HRESULT ErrorCode() const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotification
{
    Windows::Data::Xml::Dom::XmlDocument Content() const;
    void ExpirationTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ExpirationTime() const;
    event_token Dismissed(const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastDismissedEventArgs> & handler) const;
    using Dismissed_revoker = event_revoker<IToastNotification>;
    Dismissed_revoker Dismissed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastDismissedEventArgs> & handler) const;
    void Dismissed(event_token cookie) const;
    event_token Activated(const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::IInspectable> & handler) const;
    using Activated_revoker = event_revoker<IToastNotification>;
    Activated_revoker Activated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::IInspectable> & handler) const;
    void Activated(event_token cookie) const;
    event_token Failed(const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastFailedEventArgs> & handler) const;
    using Failed_revoker = event_revoker<IToastNotification>;
    Failed_revoker Failed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastFailedEventArgs> & handler) const;
    void Failed(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotification2
{
    void Tag(hstring_ref value) const;
    hstring Tag() const;
    void Group(hstring_ref value) const;
    hstring Group() const;
    void SuppressPopup(bool value) const;
    bool SuppressPopup() const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotification3
{
    Windows::UI::Notifications::NotificationMirroring NotificationMirroring() const;
    void NotificationMirroring(Windows::UI::Notifications::NotificationMirroring value) const;
    hstring RemoteId() const;
    void RemoteId(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotificationActionTriggerDetail
{
    hstring Argument() const;
    Windows::Foundation::Collections::ValueSet UserInput() const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotificationFactory
{
    Windows::UI::Notifications::ToastNotification CreateToastNotification(const Windows::Data::Xml::Dom::XmlDocument & content) const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotificationHistory
{
    void RemoveGroup(hstring_ref group) const;
    void RemoveGroup(hstring_ref group, hstring_ref applicationId) const;
    void Remove(hstring_ref tag, hstring_ref group, hstring_ref applicationId) const;
    void Remove(hstring_ref tag, hstring_ref group) const;
    void Remove(hstring_ref tag) const;
    void Clear() const;
    void Clear(hstring_ref applicationId) const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotificationHistory2
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastNotification> GetHistory() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastNotification> GetHistory(hstring_ref applicationId) const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotificationHistoryChangedTriggerDetail
{
    Windows::UI::Notifications::ToastHistoryChangedType ChangeType() const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotificationManagerForUser
{
    Windows::UI::Notifications::ToastNotifier CreateToastNotifier() const;
    Windows::UI::Notifications::ToastNotifier CreateToastNotifier(hstring_ref applicationId) const;
    Windows::UI::Notifications::ToastNotificationHistory History() const;
    Windows::System::User User() const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotificationManagerStatics
{
    Windows::UI::Notifications::ToastNotifier CreateToastNotifier() const;
    Windows::UI::Notifications::ToastNotifier CreateToastNotifier(hstring_ref applicationId) const;
    Windows::Data::Xml::Dom::XmlDocument GetTemplateContent(Windows::UI::Notifications::ToastTemplateType type) const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotificationManagerStatics2
{
    Windows::UI::Notifications::ToastNotificationHistory History() const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotificationManagerStatics4
{
    Windows::UI::Notifications::ToastNotificationManagerForUser GetForUser(const Windows::System::User & user) const;
    void ConfigureNotificationMirroring(Windows::UI::Notifications::NotificationMirroring value) const;
};

template <typename D>
struct WINRT_EBO impl_IToastNotifier
{
    void Show(const Windows::UI::Notifications::ToastNotification & notification) const;
    void Hide(const Windows::UI::Notifications::ToastNotification & notification) const;
    Windows::UI::Notifications::NotificationSetting Setting() const;
    void AddToSchedule(const Windows::UI::Notifications::ScheduledToastNotification & scheduledToast) const;
    void RemoveFromSchedule(const Windows::UI::Notifications::ScheduledToastNotification & scheduledToast) const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ScheduledToastNotification> GetScheduledToastNotifications() const;
};

template <typename D>
struct WINRT_EBO impl_IUserNotification
{
    Windows::UI::Notifications::Notification Notification() const;
    Windows::ApplicationModel::AppInfo AppInfo() const;
    uint32_t Id() const;
    Windows::Foundation::DateTime CreationTime() const;
};

template <typename D>
struct WINRT_EBO impl_IUserNotificationChangedEventArgs
{
    Windows::UI::Notifications::UserNotificationChangedKind ChangeKind() const;
    uint32_t UserNotificationId() const;
};

struct IAdaptiveNotificationContent :
    Windows::IInspectable,
    impl::consume<IAdaptiveNotificationContent>
{
    IAdaptiveNotificationContent(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAdaptiveNotificationContent>(m_ptr); }
};

struct IAdaptiveNotificationText :
    Windows::IInspectable,
    impl::consume<IAdaptiveNotificationText>,
    impl::require<IAdaptiveNotificationText, Windows::UI::Notifications::IAdaptiveNotificationContent>
{
    IAdaptiveNotificationText(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAdaptiveNotificationText>(m_ptr); }
};

struct IBadgeNotification :
    Windows::IInspectable,
    impl::consume<IBadgeNotification>
{
    IBadgeNotification(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBadgeNotification>(m_ptr); }
};

struct IBadgeNotificationFactory :
    Windows::IInspectable,
    impl::consume<IBadgeNotificationFactory>
{
    IBadgeNotificationFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBadgeNotificationFactory>(m_ptr); }
};

struct IBadgeUpdateManagerForUser :
    Windows::IInspectable,
    impl::consume<IBadgeUpdateManagerForUser>
{
    IBadgeUpdateManagerForUser(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBadgeUpdateManagerForUser>(m_ptr); }
};

struct IBadgeUpdateManagerStatics :
    Windows::IInspectable,
    impl::consume<IBadgeUpdateManagerStatics>
{
    IBadgeUpdateManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBadgeUpdateManagerStatics>(m_ptr); }
};

struct IBadgeUpdateManagerStatics2 :
    Windows::IInspectable,
    impl::consume<IBadgeUpdateManagerStatics2>
{
    IBadgeUpdateManagerStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBadgeUpdateManagerStatics2>(m_ptr); }
};

struct IBadgeUpdater :
    Windows::IInspectable,
    impl::consume<IBadgeUpdater>
{
    IBadgeUpdater(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBadgeUpdater>(m_ptr); }
};

struct IKnownAdaptiveNotificationHintsStatics :
    Windows::IInspectable,
    impl::consume<IKnownAdaptiveNotificationHintsStatics>
{
    IKnownAdaptiveNotificationHintsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKnownAdaptiveNotificationHintsStatics>(m_ptr); }
};

struct IKnownAdaptiveNotificationTextStylesStatics :
    Windows::IInspectable,
    impl::consume<IKnownAdaptiveNotificationTextStylesStatics>
{
    IKnownAdaptiveNotificationTextStylesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKnownAdaptiveNotificationTextStylesStatics>(m_ptr); }
};

struct IKnownNotificationBindingsStatics :
    Windows::IInspectable,
    impl::consume<IKnownNotificationBindingsStatics>
{
    IKnownNotificationBindingsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKnownNotificationBindingsStatics>(m_ptr); }
};

struct INotification :
    Windows::IInspectable,
    impl::consume<INotification>
{
    INotification(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INotification>(m_ptr); }
};

struct INotificationBinding :
    Windows::IInspectable,
    impl::consume<INotificationBinding>
{
    INotificationBinding(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INotificationBinding>(m_ptr); }
};

struct INotificationVisual :
    Windows::IInspectable,
    impl::consume<INotificationVisual>
{
    INotificationVisual(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INotificationVisual>(m_ptr); }
};

struct IScheduledTileNotification :
    Windows::IInspectable,
    impl::consume<IScheduledTileNotification>
{
    IScheduledTileNotification(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScheduledTileNotification>(m_ptr); }
};

struct IScheduledTileNotificationFactory :
    Windows::IInspectable,
    impl::consume<IScheduledTileNotificationFactory>
{
    IScheduledTileNotificationFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScheduledTileNotificationFactory>(m_ptr); }
};

struct IScheduledToastNotification :
    Windows::IInspectable,
    impl::consume<IScheduledToastNotification>
{
    IScheduledToastNotification(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScheduledToastNotification>(m_ptr); }
};

struct IScheduledToastNotification2 :
    Windows::IInspectable,
    impl::consume<IScheduledToastNotification2>
{
    IScheduledToastNotification2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScheduledToastNotification2>(m_ptr); }
};

struct IScheduledToastNotification3 :
    Windows::IInspectable,
    impl::consume<IScheduledToastNotification3>
{
    IScheduledToastNotification3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScheduledToastNotification3>(m_ptr); }
};

struct IScheduledToastNotificationFactory :
    Windows::IInspectable,
    impl::consume<IScheduledToastNotificationFactory>
{
    IScheduledToastNotificationFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScheduledToastNotificationFactory>(m_ptr); }
};

struct IShownTileNotification :
    Windows::IInspectable,
    impl::consume<IShownTileNotification>
{
    IShownTileNotification(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IShownTileNotification>(m_ptr); }
};

struct ITileFlyoutNotification :
    Windows::IInspectable,
    impl::consume<ITileFlyoutNotification>
{
    ITileFlyoutNotification(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITileFlyoutNotification>(m_ptr); }
};

struct ITileFlyoutNotificationFactory :
    Windows::IInspectable,
    impl::consume<ITileFlyoutNotificationFactory>
{
    ITileFlyoutNotificationFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITileFlyoutNotificationFactory>(m_ptr); }
};

struct ITileFlyoutUpdateManagerStatics :
    Windows::IInspectable,
    impl::consume<ITileFlyoutUpdateManagerStatics>
{
    ITileFlyoutUpdateManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITileFlyoutUpdateManagerStatics>(m_ptr); }
};

struct ITileFlyoutUpdater :
    Windows::IInspectable,
    impl::consume<ITileFlyoutUpdater>
{
    ITileFlyoutUpdater(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITileFlyoutUpdater>(m_ptr); }
};

struct ITileNotification :
    Windows::IInspectable,
    impl::consume<ITileNotification>
{
    ITileNotification(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITileNotification>(m_ptr); }
};

struct ITileNotificationFactory :
    Windows::IInspectable,
    impl::consume<ITileNotificationFactory>
{
    ITileNotificationFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITileNotificationFactory>(m_ptr); }
};

struct ITileUpdateManagerForUser :
    Windows::IInspectable,
    impl::consume<ITileUpdateManagerForUser>
{
    ITileUpdateManagerForUser(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITileUpdateManagerForUser>(m_ptr); }
};

struct ITileUpdateManagerStatics :
    Windows::IInspectable,
    impl::consume<ITileUpdateManagerStatics>
{
    ITileUpdateManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITileUpdateManagerStatics>(m_ptr); }
};

struct ITileUpdateManagerStatics2 :
    Windows::IInspectable,
    impl::consume<ITileUpdateManagerStatics2>
{
    ITileUpdateManagerStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITileUpdateManagerStatics2>(m_ptr); }
};

struct ITileUpdater :
    Windows::IInspectable,
    impl::consume<ITileUpdater>
{
    ITileUpdater(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITileUpdater>(m_ptr); }
};

struct ITileUpdater2 :
    Windows::IInspectable,
    impl::consume<ITileUpdater2>
{
    ITileUpdater2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITileUpdater2>(m_ptr); }
};

struct IToastActivatedEventArgs :
    Windows::IInspectable,
    impl::consume<IToastActivatedEventArgs>
{
    IToastActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastActivatedEventArgs>(m_ptr); }
};

struct IToastDismissedEventArgs :
    Windows::IInspectable,
    impl::consume<IToastDismissedEventArgs>
{
    IToastDismissedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastDismissedEventArgs>(m_ptr); }
};

struct IToastFailedEventArgs :
    Windows::IInspectable,
    impl::consume<IToastFailedEventArgs>
{
    IToastFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastFailedEventArgs>(m_ptr); }
};

struct IToastNotification :
    Windows::IInspectable,
    impl::consume<IToastNotification>
{
    IToastNotification(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotification>(m_ptr); }
};

struct IToastNotification2 :
    Windows::IInspectable,
    impl::consume<IToastNotification2>
{
    IToastNotification2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotification2>(m_ptr); }
};

struct IToastNotification3 :
    Windows::IInspectable,
    impl::consume<IToastNotification3>
{
    IToastNotification3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotification3>(m_ptr); }
};

struct IToastNotificationActionTriggerDetail :
    Windows::IInspectable,
    impl::consume<IToastNotificationActionTriggerDetail>
{
    IToastNotificationActionTriggerDetail(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotificationActionTriggerDetail>(m_ptr); }
};

struct IToastNotificationFactory :
    Windows::IInspectable,
    impl::consume<IToastNotificationFactory>
{
    IToastNotificationFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotificationFactory>(m_ptr); }
};

struct IToastNotificationHistory :
    Windows::IInspectable,
    impl::consume<IToastNotificationHistory>
{
    IToastNotificationHistory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotificationHistory>(m_ptr); }
};

struct IToastNotificationHistory2 :
    Windows::IInspectable,
    impl::consume<IToastNotificationHistory2>
{
    IToastNotificationHistory2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotificationHistory2>(m_ptr); }
};

struct IToastNotificationHistoryChangedTriggerDetail :
    Windows::IInspectable,
    impl::consume<IToastNotificationHistoryChangedTriggerDetail>
{
    IToastNotificationHistoryChangedTriggerDetail(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotificationHistoryChangedTriggerDetail>(m_ptr); }
};

struct IToastNotificationManagerForUser :
    Windows::IInspectable,
    impl::consume<IToastNotificationManagerForUser>
{
    IToastNotificationManagerForUser(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotificationManagerForUser>(m_ptr); }
};

struct IToastNotificationManagerStatics :
    Windows::IInspectable,
    impl::consume<IToastNotificationManagerStatics>
{
    IToastNotificationManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotificationManagerStatics>(m_ptr); }
};

struct IToastNotificationManagerStatics2 :
    Windows::IInspectable,
    impl::consume<IToastNotificationManagerStatics2>
{
    IToastNotificationManagerStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotificationManagerStatics2>(m_ptr); }
};

struct IToastNotificationManagerStatics4 :
    Windows::IInspectable,
    impl::consume<IToastNotificationManagerStatics4>
{
    IToastNotificationManagerStatics4(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotificationManagerStatics4>(m_ptr); }
};

struct IToastNotifier :
    Windows::IInspectable,
    impl::consume<IToastNotifier>
{
    IToastNotifier(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IToastNotifier>(m_ptr); }
};

struct IUserNotification :
    Windows::IInspectable,
    impl::consume<IUserNotification>
{
    IUserNotification(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUserNotification>(m_ptr); }
};

struct IUserNotificationChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IUserNotificationChangedEventArgs>
{
    IUserNotificationChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUserNotificationChangedEventArgs>(m_ptr); }
};

}

}
