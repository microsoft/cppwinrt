// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.Data.Xml.Dom.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Notifications.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> Windows::UI::Notifications::AdaptiveNotificationContentKind consume_Windows_UI_Notifications_IAdaptiveNotificationContent<D>::Kind() const
{
    Windows::UI::Notifications::AdaptiveNotificationContentKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IAdaptiveNotificationContent)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_UI_Notifications_IAdaptiveNotificationContent<D>::Hints() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IAdaptiveNotificationContent)->get_Hints(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IAdaptiveNotificationText<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IAdaptiveNotificationText)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IAdaptiveNotificationText<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IAdaptiveNotificationText)->put_Text(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_IAdaptiveNotificationText<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IAdaptiveNotificationText)->get_Language(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IAdaptiveNotificationText<D>::Language(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IAdaptiveNotificationText)->put_Language(get_abi(value)));
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_UI_Notifications_IBadgeNotification<D>::Content() const
{
    Windows::Data::Xml::Dom::XmlDocument value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeNotification)->get_Content(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IBadgeNotification<D>::ExpirationTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeNotification)->put_ExpirationTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_UI_Notifications_IBadgeNotification<D>::ExpirationTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeNotification)->get_ExpirationTime(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::BadgeNotification consume_Windows_UI_Notifications_IBadgeNotificationFactory<D>::CreateBadgeNotification(Windows::Data::Xml::Dom::XmlDocument const& content) const
{
    Windows::UI::Notifications::BadgeNotification notification{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeNotificationFactory)->CreateBadgeNotification(get_abi(content), put_abi(notification)));
    return notification;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater consume_Windows_UI_Notifications_IBadgeUpdateManagerForUser<D>::CreateBadgeUpdaterForApplication() const
{
    Windows::UI::Notifications::BadgeUpdater result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdateManagerForUser)->CreateBadgeUpdaterForApplication(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater consume_Windows_UI_Notifications_IBadgeUpdateManagerForUser<D>::CreateBadgeUpdaterForApplication(param::hstring const& applicationId) const
{
    Windows::UI::Notifications::BadgeUpdater result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdateManagerForUser)->CreateBadgeUpdaterForApplicationWithId(get_abi(applicationId), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater consume_Windows_UI_Notifications_IBadgeUpdateManagerForUser<D>::CreateBadgeUpdaterForSecondaryTile(param::hstring const& tileId) const
{
    Windows::UI::Notifications::BadgeUpdater result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdateManagerForUser)->CreateBadgeUpdaterForSecondaryTile(get_abi(tileId), put_abi(result)));
    return result;
}

template <typename D> Windows::System::User consume_Windows_UI_Notifications_IBadgeUpdateManagerForUser<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdateManagerForUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater consume_Windows_UI_Notifications_IBadgeUpdateManagerStatics<D>::CreateBadgeUpdaterForApplication() const
{
    Windows::UI::Notifications::BadgeUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdateManagerStatics)->CreateBadgeUpdaterForApplication(put_abi(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater consume_Windows_UI_Notifications_IBadgeUpdateManagerStatics<D>::CreateBadgeUpdaterForApplication(param::hstring const& applicationId) const
{
    Windows::UI::Notifications::BadgeUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdateManagerStatics)->CreateBadgeUpdaterForApplicationWithId(get_abi(applicationId), put_abi(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater consume_Windows_UI_Notifications_IBadgeUpdateManagerStatics<D>::CreateBadgeUpdaterForSecondaryTile(param::hstring const& tileId) const
{
    Windows::UI::Notifications::BadgeUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdateManagerStatics)->CreateBadgeUpdaterForSecondaryTile(get_abi(tileId), put_abi(updater)));
    return updater;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_UI_Notifications_IBadgeUpdateManagerStatics<D>::GetTemplateContent(Windows::UI::Notifications::BadgeTemplateType const& type) const
{
    Windows::Data::Xml::Dom::XmlDocument content{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdateManagerStatics)->GetTemplateContent(get_abi(type), put_abi(content)));
    return content;
}

template <typename D> Windows::UI::Notifications::BadgeUpdateManagerForUser consume_Windows_UI_Notifications_IBadgeUpdateManagerStatics2<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::UI::Notifications::BadgeUpdateManagerForUser result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdateManagerStatics2)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Notifications_IBadgeUpdater<D>::Update(Windows::UI::Notifications::BadgeNotification const& notification) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdater)->Update(get_abi(notification)));
}

template <typename D> void consume_Windows_UI_Notifications_IBadgeUpdater<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdater)->Clear());
}

template <typename D> void consume_Windows_UI_Notifications_IBadgeUpdater<D>::StartPeriodicUpdate(Windows::Foundation::Uri const& badgeContent, Windows::UI::Notifications::PeriodicUpdateRecurrence const& requestedInterval) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdater)->StartPeriodicUpdate(get_abi(badgeContent), get_abi(requestedInterval)));
}

template <typename D> void consume_Windows_UI_Notifications_IBadgeUpdater<D>::StartPeriodicUpdate(Windows::Foundation::Uri const& badgeContent, Windows::Foundation::DateTime const& startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence const& requestedInterval) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdater)->StartPeriodicUpdateAtTime(get_abi(badgeContent), get_abi(startTime), get_abi(requestedInterval)));
}

template <typename D> void consume_Windows_UI_Notifications_IBadgeUpdater<D>::StopPeriodicUpdate() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IBadgeUpdater)->StopPeriodicUpdate());
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationHintsStatics<D>::Style() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics)->get_Style(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationHintsStatics<D>::Wrap() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics)->get_Wrap(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationHintsStatics<D>::MaxLines() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics)->get_MaxLines(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationHintsStatics<D>::MinLines() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics)->get_MinLines(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationHintsStatics<D>::TextStacking() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics)->get_TextStacking(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationHintsStatics<D>::Align() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics)->get_Align(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::Caption() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_Caption(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::Body() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_Body(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::Base() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_Base(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::Subtitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_Subtitle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_Title(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::Subheader() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_Subheader(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::Header() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_Header(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::TitleNumeral() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_TitleNumeral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::SubheaderNumeral() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_SubheaderNumeral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::HeaderNumeral() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_HeaderNumeral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::CaptionSubtle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_CaptionSubtle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::BodySubtle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_BodySubtle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::BaseSubtle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_BaseSubtle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::SubtitleSubtle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_SubtitleSubtle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::TitleSubtle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_TitleSubtle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::SubheaderSubtle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_SubheaderSubtle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::SubheaderNumeralSubtle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_SubheaderNumeralSubtle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::HeaderSubtle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_HeaderSubtle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics<D>::HeaderNumeralSubtle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics)->get_HeaderNumeralSubtle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IKnownNotificationBindingsStatics<D>::ToastGeneric() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IKnownNotificationBindingsStatics)->get_ToastGeneric(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_UI_Notifications_INotification<D>::ExpirationTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotification)->get_ExpirationTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_INotification<D>::ExpirationTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotification)->put_ExpirationTime(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::NotificationVisual consume_Windows_UI_Notifications_INotification<D>::Visual() const
{
    Windows::UI::Notifications::NotificationVisual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotification)->get_Visual(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_INotification<D>::Visual(Windows::UI::Notifications::NotificationVisual const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotification)->put_Visual(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_INotificationBinding<D>::Template() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationBinding)->get_Template(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_INotificationBinding<D>::Template(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationBinding)->put_Template(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_INotificationBinding<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationBinding)->get_Language(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_INotificationBinding<D>::Language(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationBinding)->put_Language(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_UI_Notifications_INotificationBinding<D>::Hints() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationBinding)->get_Hints(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::AdaptiveNotificationText> consume_Windows_UI_Notifications_INotificationBinding<D>::GetTextElements() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::AdaptiveNotificationText> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationBinding)->GetTextElements(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_UI_Notifications_INotificationData<D>::Values() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationData)->get_Values(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Notifications_INotificationData<D>::SequenceNumber() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationData)->get_SequenceNumber(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_INotificationData<D>::SequenceNumber(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationData)->put_SequenceNumber(value));
}

template <typename D> Windows::UI::Notifications::NotificationData consume_Windows_UI_Notifications_INotificationDataFactory<D>::CreateNotificationData(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& initialValues, uint32_t sequenceNumber) const
{
    Windows::UI::Notifications::NotificationData result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationDataFactory)->CreateNotificationDataWithValuesAndSequenceNumber(get_abi(initialValues), sequenceNumber, put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::NotificationData consume_Windows_UI_Notifications_INotificationDataFactory<D>::CreateNotificationData(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& initialValues) const
{
    Windows::UI::Notifications::NotificationData result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationDataFactory)->CreateNotificationDataWithValues(get_abi(initialValues), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_UI_Notifications_INotificationVisual<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationVisual)->get_Language(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_INotificationVisual<D>::Language(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationVisual)->put_Language(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Notifications::NotificationBinding> consume_Windows_UI_Notifications_INotificationVisual<D>::Bindings() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Notifications::NotificationBinding> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationVisual)->get_Bindings(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::NotificationBinding consume_Windows_UI_Notifications_INotificationVisual<D>::GetBinding(param::hstring const& templateName) const
{
    Windows::UI::Notifications::NotificationBinding result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::INotificationVisual)->GetBinding(get_abi(templateName), put_abi(result)));
    return result;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_UI_Notifications_IScheduledTileNotification<D>::Content() const
{
    Windows::Data::Xml::Dom::XmlDocument value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledTileNotification)->get_Content(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_UI_Notifications_IScheduledTileNotification<D>::DeliveryTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledTileNotification)->get_DeliveryTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IScheduledTileNotification<D>::ExpirationTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledTileNotification)->put_ExpirationTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_UI_Notifications_IScheduledTileNotification<D>::ExpirationTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledTileNotification)->get_ExpirationTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IScheduledTileNotification<D>::Tag(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledTileNotification)->put_Tag(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_IScheduledTileNotification<D>::Tag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledTileNotification)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IScheduledTileNotification<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledTileNotification)->put_Id(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_IScheduledTileNotification<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledTileNotification)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::ScheduledTileNotification consume_Windows_UI_Notifications_IScheduledTileNotificationFactory<D>::CreateScheduledTileNotification(Windows::Data::Xml::Dom::XmlDocument const& content, Windows::Foundation::DateTime const& deliveryTime) const
{
    Windows::UI::Notifications::ScheduledTileNotification notification{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledTileNotificationFactory)->CreateScheduledTileNotification(get_abi(content), get_abi(deliveryTime), put_abi(notification)));
    return notification;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_UI_Notifications_IScheduledToastNotification<D>::Content() const
{
    Windows::Data::Xml::Dom::XmlDocument value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification)->get_Content(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_UI_Notifications_IScheduledToastNotification<D>::DeliveryTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification)->get_DeliveryTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_UI_Notifications_IScheduledToastNotification<D>::SnoozeInterval() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification)->get_SnoozeInterval(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Notifications_IScheduledToastNotification<D>::MaximumSnoozeCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification)->get_MaximumSnoozeCount(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IScheduledToastNotification<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification)->put_Id(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_IScheduledToastNotification<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IScheduledToastNotification2<D>::Tag(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification2)->put_Tag(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_IScheduledToastNotification2<D>::Tag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification2)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IScheduledToastNotification2<D>::Group(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification2)->put_Group(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_IScheduledToastNotification2<D>::Group() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification2)->get_Group(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IScheduledToastNotification2<D>::SuppressPopup(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification2)->put_SuppressPopup(value));
}

template <typename D> bool consume_Windows_UI_Notifications_IScheduledToastNotification2<D>::SuppressPopup() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification2)->get_SuppressPopup(&value));
    return value;
}

template <typename D> Windows::UI::Notifications::NotificationMirroring consume_Windows_UI_Notifications_IScheduledToastNotification3<D>::NotificationMirroring() const
{
    Windows::UI::Notifications::NotificationMirroring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification3)->get_NotificationMirroring(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IScheduledToastNotification3<D>::NotificationMirroring(Windows::UI::Notifications::NotificationMirroring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification3)->put_NotificationMirroring(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_IScheduledToastNotification3<D>::RemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification3)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IScheduledToastNotification3<D>::RemoteId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotification3)->put_RemoteId(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::ScheduledToastNotification consume_Windows_UI_Notifications_IScheduledToastNotificationFactory<D>::CreateScheduledToastNotification(Windows::Data::Xml::Dom::XmlDocument const& content, Windows::Foundation::DateTime const& deliveryTime) const
{
    Windows::UI::Notifications::ScheduledToastNotification notification{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotificationFactory)->CreateScheduledToastNotification(get_abi(content), get_abi(deliveryTime), put_abi(notification)));
    return notification;
}

template <typename D> Windows::UI::Notifications::ScheduledToastNotification consume_Windows_UI_Notifications_IScheduledToastNotificationFactory<D>::CreateScheduledToastNotificationRecurring(Windows::Data::Xml::Dom::XmlDocument const& content, Windows::Foundation::DateTime const& deliveryTime, Windows::Foundation::TimeSpan const& snoozeInterval, uint32_t maximumSnoozeCount) const
{
    Windows::UI::Notifications::ScheduledToastNotification notification{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IScheduledToastNotificationFactory)->CreateScheduledToastNotificationRecurring(get_abi(content), get_abi(deliveryTime), get_abi(snoozeInterval), maximumSnoozeCount, put_abi(notification)));
    return notification;
}

template <typename D> hstring consume_Windows_UI_Notifications_IShownTileNotification<D>::Arguments() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IShownTileNotification)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_UI_Notifications_ITileFlyoutNotification<D>::Content() const
{
    Windows::Data::Xml::Dom::XmlDocument value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutNotification)->get_Content(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_ITileFlyoutNotification<D>::ExpirationTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutNotification)->put_ExpirationTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_UI_Notifications_ITileFlyoutNotification<D>::ExpirationTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutNotification)->get_ExpirationTime(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::TileFlyoutNotification consume_Windows_UI_Notifications_ITileFlyoutNotificationFactory<D>::CreateTileFlyoutNotification(Windows::Data::Xml::Dom::XmlDocument const& content) const
{
    Windows::UI::Notifications::TileFlyoutNotification notification{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutNotificationFactory)->CreateTileFlyoutNotification(get_abi(content), put_abi(notification)));
    return notification;
}

template <typename D> Windows::UI::Notifications::TileFlyoutUpdater consume_Windows_UI_Notifications_ITileFlyoutUpdateManagerStatics<D>::CreateTileFlyoutUpdaterForApplication() const
{
    Windows::UI::Notifications::TileFlyoutUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics)->CreateTileFlyoutUpdaterForApplication(put_abi(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::TileFlyoutUpdater consume_Windows_UI_Notifications_ITileFlyoutUpdateManagerStatics<D>::CreateTileFlyoutUpdaterForApplication(param::hstring const& applicationId) const
{
    Windows::UI::Notifications::TileFlyoutUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics)->CreateTileFlyoutUpdaterForApplicationWithId(get_abi(applicationId), put_abi(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::TileFlyoutUpdater consume_Windows_UI_Notifications_ITileFlyoutUpdateManagerStatics<D>::CreateTileFlyoutUpdaterForSecondaryTile(param::hstring const& tileId) const
{
    Windows::UI::Notifications::TileFlyoutUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics)->CreateTileFlyoutUpdaterForSecondaryTile(get_abi(tileId), put_abi(updater)));
    return updater;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_UI_Notifications_ITileFlyoutUpdateManagerStatics<D>::GetTemplateContent(Windows::UI::Notifications::TileFlyoutTemplateType const& type) const
{
    Windows::Data::Xml::Dom::XmlDocument content{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics)->GetTemplateContent(get_abi(type), put_abi(content)));
    return content;
}

template <typename D> void consume_Windows_UI_Notifications_ITileFlyoutUpdater<D>::Update(Windows::UI::Notifications::TileFlyoutNotification const& notification) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutUpdater)->Update(get_abi(notification)));
}

template <typename D> void consume_Windows_UI_Notifications_ITileFlyoutUpdater<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutUpdater)->Clear());
}

template <typename D> void consume_Windows_UI_Notifications_ITileFlyoutUpdater<D>::StartPeriodicUpdate(Windows::Foundation::Uri const& tileFlyoutContent, Windows::UI::Notifications::PeriodicUpdateRecurrence const& requestedInterval) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutUpdater)->StartPeriodicUpdate(get_abi(tileFlyoutContent), get_abi(requestedInterval)));
}

template <typename D> void consume_Windows_UI_Notifications_ITileFlyoutUpdater<D>::StartPeriodicUpdate(Windows::Foundation::Uri const& tileFlyoutContent, Windows::Foundation::DateTime const& startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence const& requestedInterval) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutUpdater)->StartPeriodicUpdateAtTime(get_abi(tileFlyoutContent), get_abi(startTime), get_abi(requestedInterval)));
}

template <typename D> void consume_Windows_UI_Notifications_ITileFlyoutUpdater<D>::StopPeriodicUpdate() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutUpdater)->StopPeriodicUpdate());
}

template <typename D> Windows::UI::Notifications::NotificationSetting consume_Windows_UI_Notifications_ITileFlyoutUpdater<D>::Setting() const
{
    Windows::UI::Notifications::NotificationSetting value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileFlyoutUpdater)->get_Setting(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_UI_Notifications_ITileNotification<D>::Content() const
{
    Windows::Data::Xml::Dom::XmlDocument value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileNotification)->get_Content(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_ITileNotification<D>::ExpirationTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileNotification)->put_ExpirationTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_UI_Notifications_ITileNotification<D>::ExpirationTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileNotification)->get_ExpirationTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_ITileNotification<D>::Tag(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileNotification)->put_Tag(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_ITileNotification<D>::Tag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileNotification)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::TileNotification consume_Windows_UI_Notifications_ITileNotificationFactory<D>::CreateTileNotification(Windows::Data::Xml::Dom::XmlDocument const& content) const
{
    Windows::UI::Notifications::TileNotification notification{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileNotificationFactory)->CreateTileNotification(get_abi(content), put_abi(notification)));
    return notification;
}

template <typename D> Windows::UI::Notifications::TileUpdater consume_Windows_UI_Notifications_ITileUpdateManagerForUser<D>::CreateTileUpdaterForApplicationForUser() const
{
    Windows::UI::Notifications::TileUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdateManagerForUser)->CreateTileUpdaterForApplication(put_abi(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::TileUpdater consume_Windows_UI_Notifications_ITileUpdateManagerForUser<D>::CreateTileUpdaterForApplication(param::hstring const& applicationId) const
{
    Windows::UI::Notifications::TileUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdateManagerForUser)->CreateTileUpdaterForApplicationWithId(get_abi(applicationId), put_abi(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::TileUpdater consume_Windows_UI_Notifications_ITileUpdateManagerForUser<D>::CreateTileUpdaterForSecondaryTile(param::hstring const& tileId) const
{
    Windows::UI::Notifications::TileUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdateManagerForUser)->CreateTileUpdaterForSecondaryTile(get_abi(tileId), put_abi(updater)));
    return updater;
}

template <typename D> Windows::System::User consume_Windows_UI_Notifications_ITileUpdateManagerForUser<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdateManagerForUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::TileUpdater consume_Windows_UI_Notifications_ITileUpdateManagerStatics<D>::CreateTileUpdaterForApplication() const
{
    Windows::UI::Notifications::TileUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdateManagerStatics)->CreateTileUpdaterForApplication(put_abi(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::TileUpdater consume_Windows_UI_Notifications_ITileUpdateManagerStatics<D>::CreateTileUpdaterForApplication(param::hstring const& applicationId) const
{
    Windows::UI::Notifications::TileUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdateManagerStatics)->CreateTileUpdaterForApplicationWithId(get_abi(applicationId), put_abi(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::TileUpdater consume_Windows_UI_Notifications_ITileUpdateManagerStatics<D>::CreateTileUpdaterForSecondaryTile(param::hstring const& tileId) const
{
    Windows::UI::Notifications::TileUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdateManagerStatics)->CreateTileUpdaterForSecondaryTile(get_abi(tileId), put_abi(updater)));
    return updater;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_UI_Notifications_ITileUpdateManagerStatics<D>::GetTemplateContent(Windows::UI::Notifications::TileTemplateType const& type) const
{
    Windows::Data::Xml::Dom::XmlDocument content{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdateManagerStatics)->GetTemplateContent(get_abi(type), put_abi(content)));
    return content;
}

template <typename D> Windows::UI::Notifications::TileUpdateManagerForUser consume_Windows_UI_Notifications_ITileUpdateManagerStatics2<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::UI::Notifications::TileUpdateManagerForUser result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdateManagerStatics2)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Notifications_ITileUpdater<D>::Update(Windows::UI::Notifications::TileNotification const& notification) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater)->Update(get_abi(notification)));
}

template <typename D> void consume_Windows_UI_Notifications_ITileUpdater<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater)->Clear());
}

template <typename D> void consume_Windows_UI_Notifications_ITileUpdater<D>::EnableNotificationQueue(bool enable) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater)->EnableNotificationQueue(enable));
}

template <typename D> Windows::UI::Notifications::NotificationSetting consume_Windows_UI_Notifications_ITileUpdater<D>::Setting() const
{
    Windows::UI::Notifications::NotificationSetting value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater)->get_Setting(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_ITileUpdater<D>::AddToSchedule(Windows::UI::Notifications::ScheduledTileNotification const& scheduledTile) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater)->AddToSchedule(get_abi(scheduledTile)));
}

template <typename D> void consume_Windows_UI_Notifications_ITileUpdater<D>::RemoveFromSchedule(Windows::UI::Notifications::ScheduledTileNotification const& scheduledTile) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater)->RemoveFromSchedule(get_abi(scheduledTile)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ScheduledTileNotification> consume_Windows_UI_Notifications_ITileUpdater<D>::GetScheduledTileNotifications() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ScheduledTileNotification> scheduledTiles{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater)->GetScheduledTileNotifications(put_abi(scheduledTiles)));
    return scheduledTiles;
}

template <typename D> void consume_Windows_UI_Notifications_ITileUpdater<D>::StartPeriodicUpdate(Windows::Foundation::Uri const& tileContent, Windows::UI::Notifications::PeriodicUpdateRecurrence const& requestedInterval) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater)->StartPeriodicUpdate(get_abi(tileContent), get_abi(requestedInterval)));
}

template <typename D> void consume_Windows_UI_Notifications_ITileUpdater<D>::StartPeriodicUpdate(Windows::Foundation::Uri const& tileContent, Windows::Foundation::DateTime const& startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence const& requestedInterval) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater)->StartPeriodicUpdateAtTime(get_abi(tileContent), get_abi(startTime), get_abi(requestedInterval)));
}

template <typename D> void consume_Windows_UI_Notifications_ITileUpdater<D>::StopPeriodicUpdate() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater)->StopPeriodicUpdate());
}

template <typename D> void consume_Windows_UI_Notifications_ITileUpdater<D>::StartPeriodicUpdateBatch(param::iterable<Windows::Foundation::Uri> const& tileContents, Windows::UI::Notifications::PeriodicUpdateRecurrence const& requestedInterval) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater)->StartPeriodicUpdateBatch(get_abi(tileContents), get_abi(requestedInterval)));
}

template <typename D> void consume_Windows_UI_Notifications_ITileUpdater<D>::StartPeriodicUpdateBatch(param::iterable<Windows::Foundation::Uri> const& tileContents, Windows::Foundation::DateTime const& startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence const& requestedInterval) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater)->StartPeriodicUpdateBatchAtTime(get_abi(tileContents), get_abi(startTime), get_abi(requestedInterval)));
}

template <typename D> void consume_Windows_UI_Notifications_ITileUpdater2<D>::EnableNotificationQueueForSquare150x150(bool enable) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater2)->EnableNotificationQueueForSquare150x150(enable));
}

template <typename D> void consume_Windows_UI_Notifications_ITileUpdater2<D>::EnableNotificationQueueForWide310x150(bool enable) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater2)->EnableNotificationQueueForWide310x150(enable));
}

template <typename D> void consume_Windows_UI_Notifications_ITileUpdater2<D>::EnableNotificationQueueForSquare310x310(bool enable) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::ITileUpdater2)->EnableNotificationQueueForSquare310x310(enable));
}

template <typename D> hstring consume_Windows_UI_Notifications_IToastActivatedEventArgs<D>::Arguments() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastActivatedEventArgs)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IToastCollection<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollection)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IToastCollection<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollection)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IToastCollection<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollection)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_IToastCollection<D>::LaunchArgs() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollection)->get_LaunchArgs(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IToastCollection<D>::LaunchArgs(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollection)->put_LaunchArgs(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_Notifications_IToastCollection<D>::Icon() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollection)->get_Icon(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IToastCollection<D>::Icon(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollection)->put_Icon(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::ToastCollection consume_Windows_UI_Notifications_IToastCollectionFactory<D>::CreateInstance(param::hstring const& collectionId, param::hstring const& displayName, param::hstring const& launchArgs, Windows::Foundation::Uri const& iconUri) const
{
    Windows::UI::Notifications::ToastCollection result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollectionFactory)->CreateInstance(get_abi(collectionId), get_abi(displayName), get_abi(launchArgs), get_abi(iconUri), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_Notifications_IToastCollectionManager<D>::SaveToastCollectionAsync(Windows::UI::Notifications::ToastCollection const& collection) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollectionManager)->SaveToastCollectionAsync(get_abi(collection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastCollection>> consume_Windows_UI_Notifications_IToastCollectionManager<D>::FindAllToastCollectionsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastCollection>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollectionManager)->FindAllToastCollectionsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Notifications::ToastCollection> consume_Windows_UI_Notifications_IToastCollectionManager<D>::GetToastCollectionAsync(param::hstring const& collectionId) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Notifications::ToastCollection> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollectionManager)->GetToastCollectionAsync(get_abi(collectionId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_Notifications_IToastCollectionManager<D>::RemoveToastCollectionAsync(param::hstring const& collectionId) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollectionManager)->RemoveToastCollectionAsync(get_abi(collectionId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_Notifications_IToastCollectionManager<D>::RemoveAllToastCollectionsAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollectionManager)->RemoveAllToastCollectionsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::User consume_Windows_UI_Notifications_IToastCollectionManager<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollectionManager)->get_User(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IToastCollectionManager<D>::AppId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastCollectionManager)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::ToastDismissalReason consume_Windows_UI_Notifications_IToastDismissedEventArgs<D>::Reason() const
{
    Windows::UI::Notifications::ToastDismissalReason value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastDismissedEventArgs)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_UI_Notifications_IToastFailedEventArgs<D>::ErrorCode() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastFailedEventArgs)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_UI_Notifications_IToastNotification<D>::Content() const
{
    Windows::Data::Xml::Dom::XmlDocument value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification)->get_Content(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotification<D>::ExpirationTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification)->put_ExpirationTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_UI_Notifications_IToastNotification<D>::ExpirationTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification)->get_ExpirationTime(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Notifications_IToastNotification<D>::Dismissed(Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastDismissedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification)->add_Dismissed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Notifications::IToastNotification> consume_Windows_UI_Notifications_IToastNotification<D>::Dismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastDismissedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Notifications::IToastNotification>(this, &abi_t<Windows::UI::Notifications::IToastNotification>::remove_Dismissed, Dismissed(handler));
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotification<D>::Dismissed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification)->remove_Dismissed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Notifications_IToastNotification<D>::Activated(Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification)->add_Activated(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Notifications::IToastNotification> consume_Windows_UI_Notifications_IToastNotification<D>::Activated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Notifications::IToastNotification>(this, &abi_t<Windows::UI::Notifications::IToastNotification>::remove_Activated, Activated(handler));
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotification<D>::Activated(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification)->remove_Activated(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Notifications_IToastNotification<D>::Failed(Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastFailedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification)->add_Failed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Notifications::IToastNotification> consume_Windows_UI_Notifications_IToastNotification<D>::Failed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastFailedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Notifications::IToastNotification>(this, &abi_t<Windows::UI::Notifications::IToastNotification>::remove_Failed, Failed(handler));
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotification<D>::Failed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification)->remove_Failed(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotification2<D>::Tag(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification2)->put_Tag(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_IToastNotification2<D>::Tag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification2)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotification2<D>::Group(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification2)->put_Group(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_IToastNotification2<D>::Group() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification2)->get_Group(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotification2<D>::SuppressPopup(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification2)->put_SuppressPopup(value));
}

template <typename D> bool consume_Windows_UI_Notifications_IToastNotification2<D>::SuppressPopup() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification2)->get_SuppressPopup(&value));
    return value;
}

template <typename D> Windows::UI::Notifications::NotificationMirroring consume_Windows_UI_Notifications_IToastNotification3<D>::NotificationMirroring() const
{
    Windows::UI::Notifications::NotificationMirroring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification3)->get_NotificationMirroring(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotification3<D>::NotificationMirroring(Windows::UI::Notifications::NotificationMirroring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification3)->put_NotificationMirroring(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_IToastNotification3<D>::RemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification3)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotification3<D>::RemoteId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification3)->put_RemoteId(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::NotificationData consume_Windows_UI_Notifications_IToastNotification4<D>::Data() const
{
    Windows::UI::Notifications::NotificationData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification4)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotification4<D>::Data(Windows::UI::Notifications::NotificationData const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification4)->put_Data(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::ToastNotificationPriority consume_Windows_UI_Notifications_IToastNotification4<D>::Priority() const
{
    Windows::UI::Notifications::ToastNotificationPriority value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification4)->get_Priority(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotification4<D>::Priority(Windows::UI::Notifications::ToastNotificationPriority const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotification4)->put_Priority(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Notifications_IToastNotificationActionTriggerDetail<D>::Argument() const
{
    hstring argument{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationActionTriggerDetail)->get_Argument(put_abi(argument)));
    return argument;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_UI_Notifications_IToastNotificationActionTriggerDetail<D>::UserInput() const
{
    Windows::Foundation::Collections::ValueSet inputs{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationActionTriggerDetail)->get_UserInput(put_abi(inputs)));
    return inputs;
}

template <typename D> Windows::UI::Notifications::ToastNotification consume_Windows_UI_Notifications_IToastNotificationFactory<D>::CreateToastNotification(Windows::Data::Xml::Dom::XmlDocument const& content) const
{
    Windows::UI::Notifications::ToastNotification notification{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationFactory)->CreateToastNotification(get_abi(content), put_abi(notification)));
    return notification;
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotificationHistory<D>::RemoveGroup(param::hstring const& group) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationHistory)->RemoveGroup(get_abi(group)));
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotificationHistory<D>::RemoveGroup(param::hstring const& group, param::hstring const& applicationId) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationHistory)->RemoveGroupWithId(get_abi(group), get_abi(applicationId)));
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotificationHistory<D>::Remove(param::hstring const& tag, param::hstring const& group, param::hstring const& applicationId) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationHistory)->RemoveGroupedTagWithId(get_abi(tag), get_abi(group), get_abi(applicationId)));
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotificationHistory<D>::Remove(param::hstring const& tag, param::hstring const& group) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationHistory)->RemoveGroupedTag(get_abi(tag), get_abi(group)));
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotificationHistory<D>::Remove(param::hstring const& tag) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationHistory)->Remove(get_abi(tag)));
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotificationHistory<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationHistory)->Clear());
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotificationHistory<D>::Clear(param::hstring const& applicationId) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationHistory)->ClearWithId(get_abi(applicationId)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastNotification> consume_Windows_UI_Notifications_IToastNotificationHistory2<D>::GetHistory() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastNotification> toasts{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationHistory2)->GetHistory(put_abi(toasts)));
    return toasts;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastNotification> consume_Windows_UI_Notifications_IToastNotificationHistory2<D>::GetHistory(param::hstring const& applicationId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastNotification> toasts{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationHistory2)->GetHistoryWithId(get_abi(applicationId), put_abi(toasts)));
    return toasts;
}

template <typename D> Windows::UI::Notifications::ToastHistoryChangedType consume_Windows_UI_Notifications_IToastNotificationHistoryChangedTriggerDetail<D>::ChangeType() const
{
    Windows::UI::Notifications::ToastHistoryChangedType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail)->get_ChangeType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Notifications_IToastNotificationHistoryChangedTriggerDetail2<D>::CollectionId() const
{
    hstring collectionId{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail2)->get_CollectionId(put_abi(collectionId)));
    return collectionId;
}

template <typename D> Windows::UI::Notifications::ToastNotifier consume_Windows_UI_Notifications_IToastNotificationManagerForUser<D>::CreateToastNotifier() const
{
    Windows::UI::Notifications::ToastNotifier result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerForUser)->CreateToastNotifier(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::ToastNotifier consume_Windows_UI_Notifications_IToastNotificationManagerForUser<D>::CreateToastNotifier(param::hstring const& applicationId) const
{
    Windows::UI::Notifications::ToastNotifier result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerForUser)->CreateToastNotifierWithId(get_abi(applicationId), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::ToastNotificationHistory consume_Windows_UI_Notifications_IToastNotificationManagerForUser<D>::History() const
{
    Windows::UI::Notifications::ToastNotificationHistory value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerForUser)->get_History(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_UI_Notifications_IToastNotificationManagerForUser<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerForUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Notifications::ToastNotifier> consume_Windows_UI_Notifications_IToastNotificationManagerForUser2<D>::GetToastNotifierForToastCollectionIdAsync(param::hstring const& collectionId) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Notifications::ToastNotifier> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerForUser2)->GetToastNotifierForToastCollectionIdAsync(get_abi(collectionId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Notifications::ToastNotificationHistory> consume_Windows_UI_Notifications_IToastNotificationManagerForUser2<D>::GetHistoryForToastCollectionIdAsync(param::hstring const& collectionId) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Notifications::ToastNotificationHistory> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerForUser2)->GetHistoryForToastCollectionIdAsync(get_abi(collectionId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::UI::Notifications::ToastCollectionManager consume_Windows_UI_Notifications_IToastNotificationManagerForUser2<D>::GetToastCollectionManager() const
{
    Windows::UI::Notifications::ToastCollectionManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerForUser2)->GetToastCollectionManager(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::ToastCollectionManager consume_Windows_UI_Notifications_IToastNotificationManagerForUser2<D>::GetToastCollectionManager(param::hstring const& appId) const
{
    Windows::UI::Notifications::ToastCollectionManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerForUser2)->GetToastCollectionManagerWithAppId(get_abi(appId), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::ToastNotifier consume_Windows_UI_Notifications_IToastNotificationManagerStatics<D>::CreateToastNotifier() const
{
    Windows::UI::Notifications::ToastNotifier notifier{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerStatics)->CreateToastNotifier(put_abi(notifier)));
    return notifier;
}

template <typename D> Windows::UI::Notifications::ToastNotifier consume_Windows_UI_Notifications_IToastNotificationManagerStatics<D>::CreateToastNotifier(param::hstring const& applicationId) const
{
    Windows::UI::Notifications::ToastNotifier notifier{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerStatics)->CreateToastNotifierWithId(get_abi(applicationId), put_abi(notifier)));
    return notifier;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_UI_Notifications_IToastNotificationManagerStatics<D>::GetTemplateContent(Windows::UI::Notifications::ToastTemplateType const& type) const
{
    Windows::Data::Xml::Dom::XmlDocument content{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerStatics)->GetTemplateContent(get_abi(type), put_abi(content)));
    return content;
}

template <typename D> Windows::UI::Notifications::ToastNotificationHistory consume_Windows_UI_Notifications_IToastNotificationManagerStatics2<D>::History() const
{
    Windows::UI::Notifications::ToastNotificationHistory value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerStatics2)->get_History(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::ToastNotificationManagerForUser consume_Windows_UI_Notifications_IToastNotificationManagerStatics4<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::UI::Notifications::ToastNotificationManagerForUser result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerStatics4)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotificationManagerStatics4<D>::ConfigureNotificationMirroring(Windows::UI::Notifications::NotificationMirroring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerStatics4)->ConfigureNotificationMirroring(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::ToastNotificationManagerForUser consume_Windows_UI_Notifications_IToastNotificationManagerStatics5<D>::GetDefault() const
{
    Windows::UI::Notifications::ToastNotificationManagerForUser value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotificationManagerStatics5)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotifier<D>::Show(Windows::UI::Notifications::ToastNotification const& notification) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotifier)->Show(get_abi(notification)));
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotifier<D>::Hide(Windows::UI::Notifications::ToastNotification const& notification) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotifier)->Hide(get_abi(notification)));
}

template <typename D> Windows::UI::Notifications::NotificationSetting consume_Windows_UI_Notifications_IToastNotifier<D>::Setting() const
{
    Windows::UI::Notifications::NotificationSetting value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotifier)->get_Setting(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotifier<D>::AddToSchedule(Windows::UI::Notifications::ScheduledToastNotification const& scheduledToast) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotifier)->AddToSchedule(get_abi(scheduledToast)));
}

template <typename D> void consume_Windows_UI_Notifications_IToastNotifier<D>::RemoveFromSchedule(Windows::UI::Notifications::ScheduledToastNotification const& scheduledToast) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotifier)->RemoveFromSchedule(get_abi(scheduledToast)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ScheduledToastNotification> consume_Windows_UI_Notifications_IToastNotifier<D>::GetScheduledToastNotifications() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ScheduledToastNotification> scheduledToasts{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotifier)->GetScheduledToastNotifications(put_abi(scheduledToasts)));
    return scheduledToasts;
}

template <typename D> Windows::UI::Notifications::NotificationUpdateResult consume_Windows_UI_Notifications_IToastNotifier2<D>::Update(Windows::UI::Notifications::NotificationData const& data, param::hstring const& tag, param::hstring const& group) const
{
    Windows::UI::Notifications::NotificationUpdateResult result{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotifier2)->UpdateWithTagAndGroup(get_abi(data), get_abi(tag), get_abi(group), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::NotificationUpdateResult consume_Windows_UI_Notifications_IToastNotifier2<D>::Update(Windows::UI::Notifications::NotificationData const& data, param::hstring const& tag) const
{
    Windows::UI::Notifications::NotificationUpdateResult result{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IToastNotifier2)->UpdateWithTag(get_abi(data), get_abi(tag), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::Notification consume_Windows_UI_Notifications_IUserNotification<D>::Notification() const
{
    Windows::UI::Notifications::Notification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IUserNotification)->get_Notification(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::AppInfo consume_Windows_UI_Notifications_IUserNotification<D>::AppInfo() const
{
    Windows::ApplicationModel::AppInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IUserNotification)->get_AppInfo(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Notifications_IUserNotification<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IUserNotification)->get_Id(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_UI_Notifications_IUserNotification<D>::CreationTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IUserNotification)->get_CreationTime(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::UserNotificationChangedKind consume_Windows_UI_Notifications_IUserNotificationChangedEventArgs<D>::ChangeKind() const
{
    Windows::UI::Notifications::UserNotificationChangedKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IUserNotificationChangedEventArgs)->get_ChangeKind(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Notifications_IUserNotificationChangedEventArgs<D>::UserNotificationId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Notifications::IUserNotificationChangedEventArgs)->get_UserNotificationId(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::Notifications::IAdaptiveNotificationContent> : produce_base<D, Windows::UI::Notifications::IAdaptiveNotificationContent>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::UI::Notifications::AdaptiveNotificationContentKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hints(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Hints());
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
struct produce<D, Windows::UI::Notifications::IAdaptiveNotificationText> : produce_base<D, Windows::UI::Notifications::IAdaptiveNotificationText>
{
    HRESULT __stdcall get_Text(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Text(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Language(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Language(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IBadgeNotification> : produce_base<D, Windows::UI::Notifications::IBadgeNotification>
{
    HRESULT __stdcall get_Content(::IUnknown** value) noexcept override
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

    HRESULT __stdcall put_ExpirationTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExpirationTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpirationTime());
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
struct produce<D, Windows::UI::Notifications::IBadgeNotificationFactory> : produce_base<D, Windows::UI::Notifications::IBadgeNotificationFactory>
{
    HRESULT __stdcall CreateBadgeNotification(::IUnknown* content, ::IUnknown** notification) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *notification = detach_abi(this->shim().CreateBadgeNotification(*reinterpret_cast<Windows::Data::Xml::Dom::XmlDocument const*>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IBadgeUpdateManagerForUser> : produce_base<D, Windows::UI::Notifications::IBadgeUpdateManagerForUser>
{
    HRESULT __stdcall CreateBadgeUpdaterForApplication(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateBadgeUpdaterForApplication());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateBadgeUpdaterForApplicationWithId(HSTRING applicationId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateBadgeUpdaterForApplication(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateBadgeUpdaterForSecondaryTile(HSTRING tileId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateBadgeUpdaterForSecondaryTile(*reinterpret_cast<hstring const*>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
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
struct produce<D, Windows::UI::Notifications::IBadgeUpdateManagerStatics> : produce_base<D, Windows::UI::Notifications::IBadgeUpdateManagerStatics>
{
    HRESULT __stdcall CreateBadgeUpdaterForApplication(::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateBadgeUpdaterForApplication());
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateBadgeUpdaterForApplicationWithId(HSTRING applicationId, ::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateBadgeUpdaterForApplication(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateBadgeUpdaterForSecondaryTile(HSTRING tileId, ::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateBadgeUpdaterForSecondaryTile(*reinterpret_cast<hstring const*>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTemplateContent(abi_t<Windows::UI::Notifications::BadgeTemplateType> type, ::IUnknown** content) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *content = detach_abi(this->shim().GetTemplateContent(*reinterpret_cast<Windows::UI::Notifications::BadgeTemplateType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *content = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IBadgeUpdateManagerStatics2> : produce_base<D, Windows::UI::Notifications::IBadgeUpdateManagerStatics2>
{
    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IBadgeUpdater> : produce_base<D, Windows::UI::Notifications::IBadgeUpdater>
{
    HRESULT __stdcall Update(::IUnknown* notification) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Update(*reinterpret_cast<Windows::UI::Notifications::BadgeNotification const*>(&notification));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Clear() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartPeriodicUpdate(::IUnknown* badgeContent, abi_t<Windows::UI::Notifications::PeriodicUpdateRecurrence> requestedInterval) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPeriodicUpdate(*reinterpret_cast<Windows::Foundation::Uri const*>(&badgeContent), *reinterpret_cast<Windows::UI::Notifications::PeriodicUpdateRecurrence const*>(&requestedInterval));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartPeriodicUpdateAtTime(::IUnknown* badgeContent, abi_t<Windows::Foundation::DateTime> startTime, abi_t<Windows::UI::Notifications::PeriodicUpdateRecurrence> requestedInterval) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPeriodicUpdate(*reinterpret_cast<Windows::Foundation::Uri const*>(&badgeContent), *reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::UI::Notifications::PeriodicUpdateRecurrence const*>(&requestedInterval));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopPeriodicUpdate() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopPeriodicUpdate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics> : produce_base<D, Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics>
{
    HRESULT __stdcall get_Style(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Style());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wrap(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Wrap());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxLines(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxLines());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinLines(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinLines());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextStacking(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextStacking());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Align(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Align());
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
struct produce<D, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics> : produce_base<D, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>
{
    HRESULT __stdcall get_Caption(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Caption());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Body(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Body());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Base(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Base());
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

    HRESULT __stdcall get_Subheader(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Subheader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Header(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Header());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TitleNumeral(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TitleNumeral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubheaderNumeral(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubheaderNumeral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderNumeral(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeaderNumeral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaptionSubtle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaptionSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BodySubtle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BodySubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BaseSubtle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BaseSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubtitleSubtle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubtitleSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TitleSubtle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TitleSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubheaderSubtle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubheaderSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubheaderNumeralSubtle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubheaderNumeralSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderSubtle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeaderSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderNumeralSubtle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeaderNumeralSubtle());
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
struct produce<D, Windows::UI::Notifications::IKnownNotificationBindingsStatics> : produce_base<D, Windows::UI::Notifications::IKnownNotificationBindingsStatics>
{
    HRESULT __stdcall get_ToastGeneric(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToastGeneric());
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
struct produce<D, Windows::UI::Notifications::INotification> : produce_base<D, Windows::UI::Notifications::INotification>
{
    HRESULT __stdcall get_ExpirationTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpirationTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExpirationTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExpirationTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visual(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Visual());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Visual(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Visual(*reinterpret_cast<Windows::UI::Notifications::NotificationVisual const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::INotificationBinding> : produce_base<D, Windows::UI::Notifications::INotificationBinding>
{
    HRESULT __stdcall get_Template(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Template());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Template(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Template(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Language(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Language(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hints(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Hints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTextElements(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetTextElements());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::INotificationData> : produce_base<D, Windows::UI::Notifications::INotificationData>
{
    HRESULT __stdcall get_Values(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Values());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SequenceNumber(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SequenceNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SequenceNumber(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SequenceNumber(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::INotificationDataFactory> : produce_base<D, Windows::UI::Notifications::INotificationDataFactory>
{
    HRESULT __stdcall CreateNotificationDataWithValuesAndSequenceNumber(::IUnknown* initialValues, uint32_t sequenceNumber, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateNotificationData(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const*>(&initialValues), sequenceNumber));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateNotificationDataWithValues(::IUnknown* initialValues, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateNotificationData(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const*>(&initialValues)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::INotificationVisual> : produce_base<D, Windows::UI::Notifications::INotificationVisual>
{
    HRESULT __stdcall get_Language(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Language(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Language(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bindings(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Bindings());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBinding(HSTRING templateName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetBinding(*reinterpret_cast<hstring const*>(&templateName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IScheduledTileNotification> : produce_base<D, Windows::UI::Notifications::IScheduledTileNotification>
{
    HRESULT __stdcall get_Content(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_DeliveryTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeliveryTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExpirationTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExpirationTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpirationTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IScheduledTileNotificationFactory> : produce_base<D, Windows::UI::Notifications::IScheduledTileNotificationFactory>
{
    HRESULT __stdcall CreateScheduledTileNotification(::IUnknown* content, abi_t<Windows::Foundation::DateTime> deliveryTime, ::IUnknown** notification) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *notification = detach_abi(this->shim().CreateScheduledTileNotification(*reinterpret_cast<Windows::Data::Xml::Dom::XmlDocument const*>(&content), *reinterpret_cast<Windows::Foundation::DateTime const*>(&deliveryTime)));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IScheduledToastNotification> : produce_base<D, Windows::UI::Notifications::IScheduledToastNotification>
{
    HRESULT __stdcall get_Content(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_DeliveryTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeliveryTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SnoozeInterval(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SnoozeInterval());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaximumSnoozeCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaximumSnoozeCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IScheduledToastNotification2> : produce_base<D, Windows::UI::Notifications::IScheduledToastNotification2>
{
    HRESULT __stdcall put_Tag(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Group(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Group(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Group(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Group());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuppressPopup(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuppressPopup(value);
            return S_OK;
        }
        catch (...)
        {
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
struct produce<D, Windows::UI::Notifications::IScheduledToastNotification3> : produce_base<D, Windows::UI::Notifications::IScheduledToastNotification3>
{
    HRESULT __stdcall get_NotificationMirroring(abi_t<Windows::UI::Notifications::NotificationMirroring>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NotificationMirroring());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NotificationMirroring(abi_t<Windows::UI::Notifications::NotificationMirroring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotificationMirroring(*reinterpret_cast<Windows::UI::Notifications::NotificationMirroring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IScheduledToastNotificationFactory> : produce_base<D, Windows::UI::Notifications::IScheduledToastNotificationFactory>
{
    HRESULT __stdcall CreateScheduledToastNotification(::IUnknown* content, abi_t<Windows::Foundation::DateTime> deliveryTime, ::IUnknown** notification) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *notification = detach_abi(this->shim().CreateScheduledToastNotification(*reinterpret_cast<Windows::Data::Xml::Dom::XmlDocument const*>(&content), *reinterpret_cast<Windows::Foundation::DateTime const*>(&deliveryTime)));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateScheduledToastNotificationRecurring(::IUnknown* content, abi_t<Windows::Foundation::DateTime> deliveryTime, abi_t<Windows::Foundation::TimeSpan> snoozeInterval, uint32_t maximumSnoozeCount, ::IUnknown** notification) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *notification = detach_abi(this->shim().CreateScheduledToastNotificationRecurring(*reinterpret_cast<Windows::Data::Xml::Dom::XmlDocument const*>(&content), *reinterpret_cast<Windows::Foundation::DateTime const*>(&deliveryTime), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&snoozeInterval), maximumSnoozeCount));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IShownTileNotification> : produce_base<D, Windows::UI::Notifications::IShownTileNotification>
{
    HRESULT __stdcall get_Arguments(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Arguments());
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
struct produce<D, Windows::UI::Notifications::ITileFlyoutNotification> : produce_base<D, Windows::UI::Notifications::ITileFlyoutNotification>
{
    HRESULT __stdcall get_Content(::IUnknown** value) noexcept override
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

    HRESULT __stdcall put_ExpirationTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExpirationTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpirationTime());
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
struct produce<D, Windows::UI::Notifications::ITileFlyoutNotificationFactory> : produce_base<D, Windows::UI::Notifications::ITileFlyoutNotificationFactory>
{
    HRESULT __stdcall CreateTileFlyoutNotification(::IUnknown* content, ::IUnknown** notification) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *notification = detach_abi(this->shim().CreateTileFlyoutNotification(*reinterpret_cast<Windows::Data::Xml::Dom::XmlDocument const*>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics> : produce_base<D, Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics>
{
    HRESULT __stdcall CreateTileFlyoutUpdaterForApplication(::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateTileFlyoutUpdaterForApplication());
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTileFlyoutUpdaterForApplicationWithId(HSTRING applicationId, ::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateTileFlyoutUpdaterForApplication(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTileFlyoutUpdaterForSecondaryTile(HSTRING tileId, ::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateTileFlyoutUpdaterForSecondaryTile(*reinterpret_cast<hstring const*>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTemplateContent(abi_t<Windows::UI::Notifications::TileFlyoutTemplateType> type, ::IUnknown** content) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *content = detach_abi(this->shim().GetTemplateContent(*reinterpret_cast<Windows::UI::Notifications::TileFlyoutTemplateType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *content = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::ITileFlyoutUpdater> : produce_base<D, Windows::UI::Notifications::ITileFlyoutUpdater>
{
    HRESULT __stdcall Update(::IUnknown* notification) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Update(*reinterpret_cast<Windows::UI::Notifications::TileFlyoutNotification const*>(&notification));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Clear() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartPeriodicUpdate(::IUnknown* tileFlyoutContent, abi_t<Windows::UI::Notifications::PeriodicUpdateRecurrence> requestedInterval) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPeriodicUpdate(*reinterpret_cast<Windows::Foundation::Uri const*>(&tileFlyoutContent), *reinterpret_cast<Windows::UI::Notifications::PeriodicUpdateRecurrence const*>(&requestedInterval));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartPeriodicUpdateAtTime(::IUnknown* tileFlyoutContent, abi_t<Windows::Foundation::DateTime> startTime, abi_t<Windows::UI::Notifications::PeriodicUpdateRecurrence> requestedInterval) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPeriodicUpdate(*reinterpret_cast<Windows::Foundation::Uri const*>(&tileFlyoutContent), *reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::UI::Notifications::PeriodicUpdateRecurrence const*>(&requestedInterval));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopPeriodicUpdate() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopPeriodicUpdate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Setting(abi_t<Windows::UI::Notifications::NotificationSetting>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Setting());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::ITileNotification> : produce_base<D, Windows::UI::Notifications::ITileNotification>
{
    HRESULT __stdcall get_Content(::IUnknown** value) noexcept override
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

    HRESULT __stdcall put_ExpirationTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExpirationTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpirationTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tag());
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
struct produce<D, Windows::UI::Notifications::ITileNotificationFactory> : produce_base<D, Windows::UI::Notifications::ITileNotificationFactory>
{
    HRESULT __stdcall CreateTileNotification(::IUnknown* content, ::IUnknown** notification) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *notification = detach_abi(this->shim().CreateTileNotification(*reinterpret_cast<Windows::Data::Xml::Dom::XmlDocument const*>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::ITileUpdateManagerForUser> : produce_base<D, Windows::UI::Notifications::ITileUpdateManagerForUser>
{
    HRESULT __stdcall CreateTileUpdaterForApplication(::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateTileUpdaterForApplicationForUser());
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTileUpdaterForApplicationWithId(HSTRING applicationId, ::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateTileUpdaterForApplication(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTileUpdaterForSecondaryTile(HSTRING tileId, ::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateTileUpdaterForSecondaryTile(*reinterpret_cast<hstring const*>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
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
struct produce<D, Windows::UI::Notifications::ITileUpdateManagerStatics> : produce_base<D, Windows::UI::Notifications::ITileUpdateManagerStatics>
{
    HRESULT __stdcall CreateTileUpdaterForApplication(::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateTileUpdaterForApplication());
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTileUpdaterForApplicationWithId(HSTRING applicationId, ::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateTileUpdaterForApplication(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTileUpdaterForSecondaryTile(HSTRING tileId, ::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateTileUpdaterForSecondaryTile(*reinterpret_cast<hstring const*>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTemplateContent(abi_t<Windows::UI::Notifications::TileTemplateType> type, ::IUnknown** content) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *content = detach_abi(this->shim().GetTemplateContent(*reinterpret_cast<Windows::UI::Notifications::TileTemplateType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *content = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::ITileUpdateManagerStatics2> : produce_base<D, Windows::UI::Notifications::ITileUpdateManagerStatics2>
{
    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::ITileUpdater> : produce_base<D, Windows::UI::Notifications::ITileUpdater>
{
    HRESULT __stdcall Update(::IUnknown* notification) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Update(*reinterpret_cast<Windows::UI::Notifications::TileNotification const*>(&notification));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Clear() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnableNotificationQueue(bool enable) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableNotificationQueue(enable);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Setting(abi_t<Windows::UI::Notifications::NotificationSetting>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Setting());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddToSchedule(::IUnknown* scheduledTile) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddToSchedule(*reinterpret_cast<Windows::UI::Notifications::ScheduledTileNotification const*>(&scheduledTile));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveFromSchedule(::IUnknown* scheduledTile) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFromSchedule(*reinterpret_cast<Windows::UI::Notifications::ScheduledTileNotification const*>(&scheduledTile));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetScheduledTileNotifications(::IUnknown** scheduledTiles) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *scheduledTiles = detach_abi(this->shim().GetScheduledTileNotifications());
            return S_OK;
        }
        catch (...)
        {
            *scheduledTiles = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartPeriodicUpdate(::IUnknown* tileContent, abi_t<Windows::UI::Notifications::PeriodicUpdateRecurrence> requestedInterval) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPeriodicUpdate(*reinterpret_cast<Windows::Foundation::Uri const*>(&tileContent), *reinterpret_cast<Windows::UI::Notifications::PeriodicUpdateRecurrence const*>(&requestedInterval));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartPeriodicUpdateAtTime(::IUnknown* tileContent, abi_t<Windows::Foundation::DateTime> startTime, abi_t<Windows::UI::Notifications::PeriodicUpdateRecurrence> requestedInterval) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPeriodicUpdate(*reinterpret_cast<Windows::Foundation::Uri const*>(&tileContent), *reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::UI::Notifications::PeriodicUpdateRecurrence const*>(&requestedInterval));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopPeriodicUpdate() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopPeriodicUpdate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartPeriodicUpdateBatch(::IUnknown* tileContents, abi_t<Windows::UI::Notifications::PeriodicUpdateRecurrence> requestedInterval) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPeriodicUpdateBatch(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&tileContents), *reinterpret_cast<Windows::UI::Notifications::PeriodicUpdateRecurrence const*>(&requestedInterval));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartPeriodicUpdateBatchAtTime(::IUnknown* tileContents, abi_t<Windows::Foundation::DateTime> startTime, abi_t<Windows::UI::Notifications::PeriodicUpdateRecurrence> requestedInterval) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPeriodicUpdateBatch(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&tileContents), *reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::UI::Notifications::PeriodicUpdateRecurrence const*>(&requestedInterval));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::ITileUpdater2> : produce_base<D, Windows::UI::Notifications::ITileUpdater2>
{
    HRESULT __stdcall EnableNotificationQueueForSquare150x150(bool enable) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableNotificationQueueForSquare150x150(enable);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnableNotificationQueueForWide310x150(bool enable) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableNotificationQueueForWide310x150(enable);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnableNotificationQueueForSquare310x310(bool enable) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableNotificationQueueForSquare310x310(enable);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastActivatedEventArgs> : produce_base<D, Windows::UI::Notifications::IToastActivatedEventArgs>
{
    HRESULT __stdcall get_Arguments(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Arguments());
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
struct produce<D, Windows::UI::Notifications::IToastCollection> : produce_base<D, Windows::UI::Notifications::IToastCollection>
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

    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LaunchArgs(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LaunchArgs());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LaunchArgs(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LaunchArgs(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Icon(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Icon());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Icon(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Icon(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastCollectionFactory> : produce_base<D, Windows::UI::Notifications::IToastCollectionFactory>
{
    HRESULT __stdcall CreateInstance(HSTRING collectionId, HSTRING displayName, HSTRING launchArgs, ::IUnknown* iconUri, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&collectionId), *reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<hstring const*>(&launchArgs), *reinterpret_cast<Windows::Foundation::Uri const*>(&iconUri)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastCollectionManager> : produce_base<D, Windows::UI::Notifications::IToastCollectionManager>
{
    HRESULT __stdcall SaveToastCollectionAsync(::IUnknown* collection, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SaveToastCollectionAsync(*reinterpret_cast<Windows::UI::Notifications::ToastCollection const*>(&collection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllToastCollectionsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAllToastCollectionsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetToastCollectionAsync(HSTRING collectionId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetToastCollectionAsync(*reinterpret_cast<hstring const*>(&collectionId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveToastCollectionAsync(HSTRING collectionId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RemoveToastCollectionAsync(*reinterpret_cast<hstring const*>(&collectionId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveAllToastCollectionsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RemoveAllToastCollectionsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
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
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastDismissedEventArgs> : produce_base<D, Windows::UI::Notifications::IToastDismissedEventArgs>
{
    HRESULT __stdcall get_Reason(abi_t<Windows::UI::Notifications::ToastDismissalReason>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastFailedEventArgs> : produce_base<D, Windows::UI::Notifications::IToastFailedEventArgs>
{
    HRESULT __stdcall get_ErrorCode(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotification> : produce_base<D, Windows::UI::Notifications::IToastNotification>
{
    HRESULT __stdcall get_Content(::IUnknown** value) noexcept override
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

    HRESULT __stdcall put_ExpirationTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExpirationTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpirationTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Dismissed(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().Dismissed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastDismissedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Dismissed(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Dismissed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Activated(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().Activated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Activated(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Activated(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Failed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Failed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastFailedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Failed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Failed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotification2> : produce_base<D, Windows::UI::Notifications::IToastNotification2>
{
    HRESULT __stdcall put_Tag(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Group(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Group(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Group(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Group());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuppressPopup(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuppressPopup(value);
            return S_OK;
        }
        catch (...)
        {
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
struct produce<D, Windows::UI::Notifications::IToastNotification3> : produce_base<D, Windows::UI::Notifications::IToastNotification3>
{
    HRESULT __stdcall get_NotificationMirroring(abi_t<Windows::UI::Notifications::NotificationMirroring>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NotificationMirroring());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NotificationMirroring(abi_t<Windows::UI::Notifications::NotificationMirroring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotificationMirroring(*reinterpret_cast<Windows::UI::Notifications::NotificationMirroring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotification4> : produce_base<D, Windows::UI::Notifications::IToastNotification4>
{
    HRESULT __stdcall get_Data(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Data(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<Windows::UI::Notifications::NotificationData const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Priority(abi_t<Windows::UI::Notifications::ToastNotificationPriority>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Priority());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Priority(abi_t<Windows::UI::Notifications::ToastNotificationPriority> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Priority(*reinterpret_cast<Windows::UI::Notifications::ToastNotificationPriority const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationActionTriggerDetail> : produce_base<D, Windows::UI::Notifications::IToastNotificationActionTriggerDetail>
{
    HRESULT __stdcall get_Argument(HSTRING* argument) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *argument = detach_abi(this->shim().Argument());
            return S_OK;
        }
        catch (...)
        {
            *argument = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserInput(::IUnknown** inputs) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *inputs = detach_abi(this->shim().UserInput());
            return S_OK;
        }
        catch (...)
        {
            *inputs = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationFactory> : produce_base<D, Windows::UI::Notifications::IToastNotificationFactory>
{
    HRESULT __stdcall CreateToastNotification(::IUnknown* content, ::IUnknown** notification) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *notification = detach_abi(this->shim().CreateToastNotification(*reinterpret_cast<Windows::Data::Xml::Dom::XmlDocument const*>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationHistory> : produce_base<D, Windows::UI::Notifications::IToastNotificationHistory>
{
    HRESULT __stdcall RemoveGroup(HSTRING group) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveGroup(*reinterpret_cast<hstring const*>(&group));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveGroupWithId(HSTRING group, HSTRING applicationId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveGroup(*reinterpret_cast<hstring const*>(&group), *reinterpret_cast<hstring const*>(&applicationId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveGroupedTagWithId(HSTRING tag, HSTRING group, HSTRING applicationId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<hstring const*>(&tag), *reinterpret_cast<hstring const*>(&group), *reinterpret_cast<hstring const*>(&applicationId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveGroupedTag(HSTRING tag, HSTRING group) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<hstring const*>(&tag), *reinterpret_cast<hstring const*>(&group));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Remove(HSTRING tag) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<hstring const*>(&tag));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Clear() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearWithId(HSTRING applicationId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear(*reinterpret_cast<hstring const*>(&applicationId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationHistory2> : produce_base<D, Windows::UI::Notifications::IToastNotificationHistory2>
{
    HRESULT __stdcall GetHistory(::IUnknown** toasts) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *toasts = detach_abi(this->shim().GetHistory());
            return S_OK;
        }
        catch (...)
        {
            *toasts = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHistoryWithId(HSTRING applicationId, ::IUnknown** toasts) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *toasts = detach_abi(this->shim().GetHistory(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *toasts = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail> : produce_base<D, Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail>
{
    HRESULT __stdcall get_ChangeType(abi_t<Windows::UI::Notifications::ToastHistoryChangedType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail2> : produce_base<D, Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail2>
{
    HRESULT __stdcall get_CollectionId(HSTRING* collectionId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *collectionId = detach_abi(this->shim().CollectionId());
            return S_OK;
        }
        catch (...)
        {
            *collectionId = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationManagerForUser> : produce_base<D, Windows::UI::Notifications::IToastNotificationManagerForUser>
{
    HRESULT __stdcall CreateToastNotifier(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateToastNotifier());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateToastNotifierWithId(HSTRING applicationId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateToastNotifier(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_History(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().History());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
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
struct produce<D, Windows::UI::Notifications::IToastNotificationManagerForUser2> : produce_base<D, Windows::UI::Notifications::IToastNotificationManagerForUser2>
{
    HRESULT __stdcall GetToastNotifierForToastCollectionIdAsync(HSTRING collectionId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetToastNotifierForToastCollectionIdAsync(*reinterpret_cast<hstring const*>(&collectionId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHistoryForToastCollectionIdAsync(HSTRING collectionId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetHistoryForToastCollectionIdAsync(*reinterpret_cast<hstring const*>(&collectionId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetToastCollectionManager(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetToastCollectionManager());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetToastCollectionManagerWithAppId(HSTRING appId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetToastCollectionManager(*reinterpret_cast<hstring const*>(&appId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationManagerStatics> : produce_base<D, Windows::UI::Notifications::IToastNotificationManagerStatics>
{
    HRESULT __stdcall CreateToastNotifier(::IUnknown** notifier) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *notifier = detach_abi(this->shim().CreateToastNotifier());
            return S_OK;
        }
        catch (...)
        {
            *notifier = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateToastNotifierWithId(HSTRING applicationId, ::IUnknown** notifier) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *notifier = detach_abi(this->shim().CreateToastNotifier(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *notifier = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTemplateContent(abi_t<Windows::UI::Notifications::ToastTemplateType> type, ::IUnknown** content) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *content = detach_abi(this->shim().GetTemplateContent(*reinterpret_cast<Windows::UI::Notifications::ToastTemplateType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *content = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationManagerStatics2> : produce_base<D, Windows::UI::Notifications::IToastNotificationManagerStatics2>
{
    HRESULT __stdcall get_History(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().History());
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
struct produce<D, Windows::UI::Notifications::IToastNotificationManagerStatics4> : produce_base<D, Windows::UI::Notifications::IToastNotificationManagerStatics4>
{
    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConfigureNotificationMirroring(abi_t<Windows::UI::Notifications::NotificationMirroring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureNotificationMirroring(*reinterpret_cast<Windows::UI::Notifications::NotificationMirroring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationManagerStatics5> : produce_base<D, Windows::UI::Notifications::IToastNotificationManagerStatics5>
{
    HRESULT __stdcall GetDefault(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::UI::Notifications::IToastNotifier> : produce_base<D, Windows::UI::Notifications::IToastNotifier>
{
    HRESULT __stdcall Show(::IUnknown* notification) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&notification));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Hide(::IUnknown* notification) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hide(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&notification));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Setting(abi_t<Windows::UI::Notifications::NotificationSetting>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Setting());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddToSchedule(::IUnknown* scheduledToast) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddToSchedule(*reinterpret_cast<Windows::UI::Notifications::ScheduledToastNotification const*>(&scheduledToast));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveFromSchedule(::IUnknown* scheduledToast) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFromSchedule(*reinterpret_cast<Windows::UI::Notifications::ScheduledToastNotification const*>(&scheduledToast));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetScheduledToastNotifications(::IUnknown** scheduledToasts) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *scheduledToasts = detach_abi(this->shim().GetScheduledToastNotifications());
            return S_OK;
        }
        catch (...)
        {
            *scheduledToasts = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotifier2> : produce_base<D, Windows::UI::Notifications::IToastNotifier2>
{
    HRESULT __stdcall UpdateWithTagAndGroup(::IUnknown* data, HSTRING tag, HSTRING group, abi_t<Windows::UI::Notifications::NotificationUpdateResult>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Update(*reinterpret_cast<Windows::UI::Notifications::NotificationData const*>(&data), *reinterpret_cast<hstring const*>(&tag), *reinterpret_cast<hstring const*>(&group)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateWithTag(::IUnknown* data, HSTRING tag, abi_t<Windows::UI::Notifications::NotificationUpdateResult>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Update(*reinterpret_cast<Windows::UI::Notifications::NotificationData const*>(&data), *reinterpret_cast<hstring const*>(&tag)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IUserNotification> : produce_base<D, Windows::UI::Notifications::IUserNotification>
{
    HRESULT __stdcall get_Notification(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Notification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_CreationTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreationTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IUserNotificationChangedEventArgs> : produce_base<D, Windows::UI::Notifications::IUserNotificationChangedEventArgs>
{
    HRESULT __stdcall get_ChangeKind(abi_t<Windows::UI::Notifications::UserNotificationChangedKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserNotificationId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserNotificationId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Notifications {

inline AdaptiveNotificationText::AdaptiveNotificationText() :
    AdaptiveNotificationText(activate_instance<AdaptiveNotificationText>())
{}

inline BadgeNotification::BadgeNotification(Windows::Data::Xml::Dom::XmlDocument const& content) :
    BadgeNotification(get_activation_factory<BadgeNotification, Windows::UI::Notifications::IBadgeNotificationFactory>().CreateBadgeNotification(content))
{}

inline Windows::UI::Notifications::BadgeUpdater BadgeUpdateManager::CreateBadgeUpdaterForApplication()
{
    return get_activation_factory<BadgeUpdateManager, Windows::UI::Notifications::IBadgeUpdateManagerStatics>().CreateBadgeUpdaterForApplication();
}

inline Windows::UI::Notifications::BadgeUpdater BadgeUpdateManager::CreateBadgeUpdaterForApplication(param::hstring const& applicationId)
{
    return get_activation_factory<BadgeUpdateManager, Windows::UI::Notifications::IBadgeUpdateManagerStatics>().CreateBadgeUpdaterForApplication(applicationId);
}

inline Windows::UI::Notifications::BadgeUpdater BadgeUpdateManager::CreateBadgeUpdaterForSecondaryTile(param::hstring const& tileId)
{
    return get_activation_factory<BadgeUpdateManager, Windows::UI::Notifications::IBadgeUpdateManagerStatics>().CreateBadgeUpdaterForSecondaryTile(tileId);
}

inline Windows::Data::Xml::Dom::XmlDocument BadgeUpdateManager::GetTemplateContent(Windows::UI::Notifications::BadgeTemplateType const& type)
{
    return get_activation_factory<BadgeUpdateManager, Windows::UI::Notifications::IBadgeUpdateManagerStatics>().GetTemplateContent(type);
}

inline Windows::UI::Notifications::BadgeUpdateManagerForUser BadgeUpdateManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<BadgeUpdateManager, Windows::UI::Notifications::IBadgeUpdateManagerStatics2>().GetForUser(user);
}

inline hstring KnownAdaptiveNotificationHints::Style()
{
    return get_activation_factory<KnownAdaptiveNotificationHints, Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics>().Style();
}

inline hstring KnownAdaptiveNotificationHints::Wrap()
{
    return get_activation_factory<KnownAdaptiveNotificationHints, Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics>().Wrap();
}

inline hstring KnownAdaptiveNotificationHints::MaxLines()
{
    return get_activation_factory<KnownAdaptiveNotificationHints, Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics>().MaxLines();
}

inline hstring KnownAdaptiveNotificationHints::MinLines()
{
    return get_activation_factory<KnownAdaptiveNotificationHints, Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics>().MinLines();
}

inline hstring KnownAdaptiveNotificationHints::TextStacking()
{
    return get_activation_factory<KnownAdaptiveNotificationHints, Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics>().TextStacking();
}

inline hstring KnownAdaptiveNotificationHints::Align()
{
    return get_activation_factory<KnownAdaptiveNotificationHints, Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics>().Align();
}

inline hstring KnownAdaptiveNotificationTextStyles::Caption()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().Caption();
}

inline hstring KnownAdaptiveNotificationTextStyles::Body()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().Body();
}

inline hstring KnownAdaptiveNotificationTextStyles::Base()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().Base();
}

inline hstring KnownAdaptiveNotificationTextStyles::Subtitle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().Subtitle();
}

inline hstring KnownAdaptiveNotificationTextStyles::Title()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().Title();
}

inline hstring KnownAdaptiveNotificationTextStyles::Subheader()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().Subheader();
}

inline hstring KnownAdaptiveNotificationTextStyles::Header()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().Header();
}

inline hstring KnownAdaptiveNotificationTextStyles::TitleNumeral()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().TitleNumeral();
}

inline hstring KnownAdaptiveNotificationTextStyles::SubheaderNumeral()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().SubheaderNumeral();
}

inline hstring KnownAdaptiveNotificationTextStyles::HeaderNumeral()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().HeaderNumeral();
}

inline hstring KnownAdaptiveNotificationTextStyles::CaptionSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().CaptionSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::BodySubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().BodySubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::BaseSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().BaseSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::SubtitleSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().SubtitleSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::TitleSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().TitleSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::SubheaderSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().SubheaderSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::SubheaderNumeralSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().SubheaderNumeralSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::HeaderSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().HeaderSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::HeaderNumeralSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>().HeaderNumeralSubtle();
}

inline hstring KnownNotificationBindings::ToastGeneric()
{
    return get_activation_factory<KnownNotificationBindings, Windows::UI::Notifications::IKnownNotificationBindingsStatics>().ToastGeneric();
}

inline Notification::Notification() :
    Notification(activate_instance<Notification>())
{}

inline NotificationData::NotificationData() :
    NotificationData(activate_instance<NotificationData>())
{}

inline NotificationData::NotificationData(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& initialValues, uint32_t sequenceNumber) :
    NotificationData(get_activation_factory<NotificationData, Windows::UI::Notifications::INotificationDataFactory>().CreateNotificationData(initialValues, sequenceNumber))
{}

inline NotificationData::NotificationData(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& initialValues) :
    NotificationData(get_activation_factory<NotificationData, Windows::UI::Notifications::INotificationDataFactory>().CreateNotificationData(initialValues))
{}

inline ScheduledTileNotification::ScheduledTileNotification(Windows::Data::Xml::Dom::XmlDocument const& content, Windows::Foundation::DateTime const& deliveryTime) :
    ScheduledTileNotification(get_activation_factory<ScheduledTileNotification, Windows::UI::Notifications::IScheduledTileNotificationFactory>().CreateScheduledTileNotification(content, deliveryTime))
{}

inline ScheduledToastNotification::ScheduledToastNotification(Windows::Data::Xml::Dom::XmlDocument const& content, Windows::Foundation::DateTime const& deliveryTime) :
    ScheduledToastNotification(get_activation_factory<ScheduledToastNotification, Windows::UI::Notifications::IScheduledToastNotificationFactory>().CreateScheduledToastNotification(content, deliveryTime))
{}

inline ScheduledToastNotification::ScheduledToastNotification(Windows::Data::Xml::Dom::XmlDocument const& content, Windows::Foundation::DateTime const& deliveryTime, Windows::Foundation::TimeSpan const& snoozeInterval, uint32_t maximumSnoozeCount) :
    ScheduledToastNotification(get_activation_factory<ScheduledToastNotification, Windows::UI::Notifications::IScheduledToastNotificationFactory>().CreateScheduledToastNotificationRecurring(content, deliveryTime, snoozeInterval, maximumSnoozeCount))
{}

inline TileFlyoutNotification::TileFlyoutNotification(Windows::Data::Xml::Dom::XmlDocument const& content) :
    TileFlyoutNotification(get_activation_factory<TileFlyoutNotification, Windows::UI::Notifications::ITileFlyoutNotificationFactory>().CreateTileFlyoutNotification(content))
{}

inline Windows::UI::Notifications::TileFlyoutUpdater TileFlyoutUpdateManager::CreateTileFlyoutUpdaterForApplication()
{
    return get_activation_factory<TileFlyoutUpdateManager, Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics>().CreateTileFlyoutUpdaterForApplication();
}

inline Windows::UI::Notifications::TileFlyoutUpdater TileFlyoutUpdateManager::CreateTileFlyoutUpdaterForApplication(param::hstring const& applicationId)
{
    return get_activation_factory<TileFlyoutUpdateManager, Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics>().CreateTileFlyoutUpdaterForApplication(applicationId);
}

inline Windows::UI::Notifications::TileFlyoutUpdater TileFlyoutUpdateManager::CreateTileFlyoutUpdaterForSecondaryTile(param::hstring const& tileId)
{
    return get_activation_factory<TileFlyoutUpdateManager, Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics>().CreateTileFlyoutUpdaterForSecondaryTile(tileId);
}

inline Windows::Data::Xml::Dom::XmlDocument TileFlyoutUpdateManager::GetTemplateContent(Windows::UI::Notifications::TileFlyoutTemplateType const& type)
{
    return get_activation_factory<TileFlyoutUpdateManager, Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics>().GetTemplateContent(type);
}

inline TileNotification::TileNotification(Windows::Data::Xml::Dom::XmlDocument const& content) :
    TileNotification(get_activation_factory<TileNotification, Windows::UI::Notifications::ITileNotificationFactory>().CreateTileNotification(content))
{}

inline Windows::UI::Notifications::TileUpdater TileUpdateManager::CreateTileUpdaterForApplication()
{
    return get_activation_factory<TileUpdateManager, Windows::UI::Notifications::ITileUpdateManagerStatics>().CreateTileUpdaterForApplication();
}

inline Windows::UI::Notifications::TileUpdater TileUpdateManager::CreateTileUpdaterForApplication(param::hstring const& applicationId)
{
    return get_activation_factory<TileUpdateManager, Windows::UI::Notifications::ITileUpdateManagerStatics>().CreateTileUpdaterForApplication(applicationId);
}

inline Windows::UI::Notifications::TileUpdater TileUpdateManager::CreateTileUpdaterForSecondaryTile(param::hstring const& tileId)
{
    return get_activation_factory<TileUpdateManager, Windows::UI::Notifications::ITileUpdateManagerStatics>().CreateTileUpdaterForSecondaryTile(tileId);
}

inline Windows::Data::Xml::Dom::XmlDocument TileUpdateManager::GetTemplateContent(Windows::UI::Notifications::TileTemplateType const& type)
{
    return get_activation_factory<TileUpdateManager, Windows::UI::Notifications::ITileUpdateManagerStatics>().GetTemplateContent(type);
}

inline Windows::UI::Notifications::TileUpdateManagerForUser TileUpdateManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<TileUpdateManager, Windows::UI::Notifications::ITileUpdateManagerStatics2>().GetForUser(user);
}

inline ToastCollection::ToastCollection(param::hstring const& collectionId, param::hstring const& displayName, param::hstring const& launchArgs, Windows::Foundation::Uri const& iconUri) :
    ToastCollection(get_activation_factory<ToastCollection, Windows::UI::Notifications::IToastCollectionFactory>().CreateInstance(collectionId, displayName, launchArgs, iconUri))
{}

inline ToastNotification::ToastNotification(Windows::Data::Xml::Dom::XmlDocument const& content) :
    ToastNotification(get_activation_factory<ToastNotification, Windows::UI::Notifications::IToastNotificationFactory>().CreateToastNotification(content))
{}

inline Windows::UI::Notifications::ToastNotifier ToastNotificationManager::CreateToastNotifier()
{
    return get_activation_factory<ToastNotificationManager, Windows::UI::Notifications::IToastNotificationManagerStatics>().CreateToastNotifier();
}

inline Windows::UI::Notifications::ToastNotifier ToastNotificationManager::CreateToastNotifier(param::hstring const& applicationId)
{
    return get_activation_factory<ToastNotificationManager, Windows::UI::Notifications::IToastNotificationManagerStatics>().CreateToastNotifier(applicationId);
}

inline Windows::Data::Xml::Dom::XmlDocument ToastNotificationManager::GetTemplateContent(Windows::UI::Notifications::ToastTemplateType const& type)
{
    return get_activation_factory<ToastNotificationManager, Windows::UI::Notifications::IToastNotificationManagerStatics>().GetTemplateContent(type);
}

inline Windows::UI::Notifications::ToastNotificationHistory ToastNotificationManager::History()
{
    return get_activation_factory<ToastNotificationManager, Windows::UI::Notifications::IToastNotificationManagerStatics2>().History();
}

inline Windows::UI::Notifications::ToastNotificationManagerForUser ToastNotificationManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<ToastNotificationManager, Windows::UI::Notifications::IToastNotificationManagerStatics4>().GetForUser(user);
}

inline void ToastNotificationManager::ConfigureNotificationMirroring(Windows::UI::Notifications::NotificationMirroring const& value)
{
    get_activation_factory<ToastNotificationManager, Windows::UI::Notifications::IToastNotificationManagerStatics4>().ConfigureNotificationMirroring(value);
}

inline Windows::UI::Notifications::ToastNotificationManagerForUser ToastNotificationManager::GetDefault()
{
    return get_activation_factory<ToastNotificationManager, Windows::UI::Notifications::IToastNotificationManagerStatics5>().GetDefault();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Notifications::IAdaptiveNotificationContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IAdaptiveNotificationContent> {};

template<> struct hash<winrt::Windows::UI::Notifications::IAdaptiveNotificationText> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IAdaptiveNotificationText> {};

template<> struct hash<winrt::Windows::UI::Notifications::IBadgeNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IBadgeNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::IBadgeNotificationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IBadgeNotificationFactory> {};

template<> struct hash<winrt::Windows::UI::Notifications::IBadgeUpdateManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IBadgeUpdateManagerForUser> {};

template<> struct hash<winrt::Windows::UI::Notifications::IBadgeUpdateManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IBadgeUpdateManagerStatics> {};

template<> struct hash<winrt::Windows::UI::Notifications::IBadgeUpdateManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IBadgeUpdateManagerStatics2> {};

template<> struct hash<winrt::Windows::UI::Notifications::IBadgeUpdater> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IBadgeUpdater> {};

template<> struct hash<winrt::Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics> {};

template<> struct hash<winrt::Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics> {};

template<> struct hash<winrt::Windows::UI::Notifications::IKnownNotificationBindingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IKnownNotificationBindingsStatics> {};

template<> struct hash<winrt::Windows::UI::Notifications::INotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::INotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::INotificationBinding> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::INotificationBinding> {};

template<> struct hash<winrt::Windows::UI::Notifications::INotificationData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::INotificationData> {};

template<> struct hash<winrt::Windows::UI::Notifications::INotificationDataFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::INotificationDataFactory> {};

template<> struct hash<winrt::Windows::UI::Notifications::INotificationVisual> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::INotificationVisual> {};

template<> struct hash<winrt::Windows::UI::Notifications::IScheduledTileNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IScheduledTileNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::IScheduledTileNotificationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IScheduledTileNotificationFactory> {};

template<> struct hash<winrt::Windows::UI::Notifications::IScheduledToastNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IScheduledToastNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::IScheduledToastNotification2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IScheduledToastNotification2> {};

template<> struct hash<winrt::Windows::UI::Notifications::IScheduledToastNotification3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IScheduledToastNotification3> {};

template<> struct hash<winrt::Windows::UI::Notifications::IScheduledToastNotificationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IScheduledToastNotificationFactory> {};

template<> struct hash<winrt::Windows::UI::Notifications::IShownTileNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IShownTileNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::ITileFlyoutNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ITileFlyoutNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::ITileFlyoutNotificationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ITileFlyoutNotificationFactory> {};

template<> struct hash<winrt::Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics> {};

template<> struct hash<winrt::Windows::UI::Notifications::ITileFlyoutUpdater> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ITileFlyoutUpdater> {};

template<> struct hash<winrt::Windows::UI::Notifications::ITileNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ITileNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::ITileNotificationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ITileNotificationFactory> {};

template<> struct hash<winrt::Windows::UI::Notifications::ITileUpdateManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ITileUpdateManagerForUser> {};

template<> struct hash<winrt::Windows::UI::Notifications::ITileUpdateManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ITileUpdateManagerStatics> {};

template<> struct hash<winrt::Windows::UI::Notifications::ITileUpdateManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ITileUpdateManagerStatics2> {};

template<> struct hash<winrt::Windows::UI::Notifications::ITileUpdater> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ITileUpdater> {};

template<> struct hash<winrt::Windows::UI::Notifications::ITileUpdater2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ITileUpdater2> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastCollection> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastCollectionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastCollectionFactory> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastCollectionManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastCollectionManager> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastDismissedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastDismissedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastFailedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastFailedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotification2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotification2> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotification3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotification3> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotification4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotification4> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotificationActionTriggerDetail> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotificationActionTriggerDetail> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotificationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotificationFactory> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotificationHistory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotificationHistory> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotificationHistory2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotificationHistory2> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail2> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotificationManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotificationManagerForUser> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotificationManagerForUser2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotificationManagerForUser2> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics4> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics5> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotifier> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotifier> {};

template<> struct hash<winrt::Windows::UI::Notifications::IToastNotifier2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IToastNotifier2> {};

template<> struct hash<winrt::Windows::UI::Notifications::IUserNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IUserNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::IUserNotificationChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::IUserNotificationChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Notifications::AdaptiveNotificationText> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::AdaptiveNotificationText> {};

template<> struct hash<winrt::Windows::UI::Notifications::BadgeNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::BadgeNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::BadgeUpdateManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::BadgeUpdateManager> {};

template<> struct hash<winrt::Windows::UI::Notifications::BadgeUpdateManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::BadgeUpdateManagerForUser> {};

template<> struct hash<winrt::Windows::UI::Notifications::BadgeUpdater> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::BadgeUpdater> {};

template<> struct hash<winrt::Windows::UI::Notifications::KnownAdaptiveNotificationHints> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::KnownAdaptiveNotificationHints> {};

template<> struct hash<winrt::Windows::UI::Notifications::KnownAdaptiveNotificationTextStyles> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::KnownAdaptiveNotificationTextStyles> {};

template<> struct hash<winrt::Windows::UI::Notifications::KnownNotificationBindings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::KnownNotificationBindings> {};

template<> struct hash<winrt::Windows::UI::Notifications::Notification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::Notification> {};

template<> struct hash<winrt::Windows::UI::Notifications::NotificationBinding> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::NotificationBinding> {};

template<> struct hash<winrt::Windows::UI::Notifications::NotificationData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::NotificationData> {};

template<> struct hash<winrt::Windows::UI::Notifications::NotificationVisual> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::NotificationVisual> {};

template<> struct hash<winrt::Windows::UI::Notifications::ScheduledTileNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ScheduledTileNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::ScheduledToastNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ScheduledToastNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::ShownTileNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ShownTileNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::TileFlyoutNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::TileFlyoutNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::TileFlyoutUpdateManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::TileFlyoutUpdateManager> {};

template<> struct hash<winrt::Windows::UI::Notifications::TileFlyoutUpdater> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::TileFlyoutUpdater> {};

template<> struct hash<winrt::Windows::UI::Notifications::TileNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::TileNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::TileUpdateManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::TileUpdateManager> {};

template<> struct hash<winrt::Windows::UI::Notifications::TileUpdateManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::TileUpdateManagerForUser> {};

template<> struct hash<winrt::Windows::UI::Notifications::TileUpdater> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::TileUpdater> {};

template<> struct hash<winrt::Windows::UI::Notifications::ToastActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ToastActivatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Notifications::ToastCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ToastCollection> {};

template<> struct hash<winrt::Windows::UI::Notifications::ToastCollectionManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ToastCollectionManager> {};

template<> struct hash<winrt::Windows::UI::Notifications::ToastDismissedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ToastDismissedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Notifications::ToastFailedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ToastFailedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Notifications::ToastNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ToastNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::ToastNotificationActionTriggerDetail> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ToastNotificationActionTriggerDetail> {};

template<> struct hash<winrt::Windows::UI::Notifications::ToastNotificationHistory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ToastNotificationHistory> {};

template<> struct hash<winrt::Windows::UI::Notifications::ToastNotificationHistoryChangedTriggerDetail> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ToastNotificationHistoryChangedTriggerDetail> {};

template<> struct hash<winrt::Windows::UI::Notifications::ToastNotificationManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ToastNotificationManager> {};

template<> struct hash<winrt::Windows::UI::Notifications::ToastNotificationManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ToastNotificationManagerForUser> {};

template<> struct hash<winrt::Windows::UI::Notifications::ToastNotifier> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::ToastNotifier> {};

template<> struct hash<winrt::Windows::UI::Notifications::UserNotification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::UserNotification> {};

template<> struct hash<winrt::Windows::UI::Notifications::UserNotificationChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Notifications::UserNotificationChangedEventArgs> {};

}

WINRT_WARNING_POP
