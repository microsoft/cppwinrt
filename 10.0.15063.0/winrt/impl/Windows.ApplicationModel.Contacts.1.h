// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Text.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.Popups.0.h"
#include "winrt/impl/Windows.UI.ViewManagement.0.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts {

struct WINRT_EBO IAggregateContactManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAggregateContactManager>
{
    IAggregateContactManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAggregateContactManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAggregateContactManager2>
{
    IAggregateContactManager2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContact :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContact>
{
    IContact(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContact2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContact2>,
    impl::require<IContact2, Windows::ApplicationModel::Contacts::IContact>
{
    IContact2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContact3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContact3>,
    impl::require<IContact3, Windows::ApplicationModel::Contacts::IContact, Windows::ApplicationModel::Contacts::IContact2>
{
    IContact3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactAddress :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAddress>
{
    IContactAddress(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactAnnotation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAnnotation>
{
    IContactAnnotation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactAnnotation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAnnotation2>
{
    IContactAnnotation2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactAnnotationList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAnnotationList>
{
    IContactAnnotationList(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactAnnotationStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAnnotationStore>
{
    IContactAnnotationStore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactAnnotationStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAnnotationStore2>
{
    IContactAnnotationStore2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactBatch :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactBatch>
{
    IContactBatch(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactCardDelayedDataLoader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactCardDelayedDataLoader>,
    impl::require<IContactCardDelayedDataLoader, Windows::Foundation::IClosable>
{
    IContactCardDelayedDataLoader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactCardOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactCardOptions>
{
    IContactCardOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactCardOptions2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactCardOptions2>,
    impl::require<IContactCardOptions2, Windows::ApplicationModel::Contacts::IContactCardOptions>
{
    IContactCardOptions2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactChange :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactChange>
{
    IContactChange(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactChangeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactChangeReader>
{
    IContactChangeReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactChangeTracker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactChangeTracker>
{
    IContactChangeTracker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactChangedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactChangedDeferral>
{
    IContactChangedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactChangedEventArgs>
{
    IContactChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactConnectedServiceAccount :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactConnectedServiceAccount>
{
    IContactConnectedServiceAccount(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactDate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactDate>
{
    IContactDate(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactEmail :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactEmail>
{
    IContactEmail(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactField :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactField>
{
    IContactField(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactFieldFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactFieldFactory>
{
    IContactFieldFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactGroup>
{
    IContactGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactInformation>
{
    IContactInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactInstantMessageField :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactInstantMessageField>,
    impl::require<IContactInstantMessageField, Windows::ApplicationModel::Contacts::IContactField>
{
    IContactInstantMessageField(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactInstantMessageFieldFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactInstantMessageFieldFactory>
{
    IContactInstantMessageFieldFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactJobInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactJobInfo>
{
    IContactJobInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactLaunchActionVerbsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactLaunchActionVerbsStatics>
{
    IContactLaunchActionVerbsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactList>
{
    IContactList(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactList2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactList2>
{
    IContactList2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactListSyncConstraints :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListSyncConstraints>
{
    IContactListSyncConstraints(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactListSyncManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListSyncManager>
{
    IContactListSyncManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactListSyncManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListSyncManager2>
{
    IContactListSyncManager2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactLocationField :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactLocationField>,
    impl::require<IContactLocationField, Windows::ApplicationModel::Contacts::IContactField>
{
    IContactLocationField(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactLocationFieldFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactLocationFieldFactory>
{
    IContactLocationFieldFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerForUser>
{
    IContactManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactManagerForUser2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerForUser2>
{
    IContactManagerForUser2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerStatics>
{
    IContactManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerStatics2>,
    impl::require<IContactManagerStatics2, Windows::ApplicationModel::Contacts::IContactManagerStatics>
{
    IContactManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerStatics3>,
    impl::require<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics, Windows::ApplicationModel::Contacts::IContactManagerStatics2>
{
    IContactManagerStatics3(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics2>::RequestStoreAsync;
    using impl::consume_t<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics3>::RequestStoreAsync;
    using impl::consume_t<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics>::ShowContactCard;
    using impl::consume_t<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics3>::ShowContactCard;
    using impl::consume_t<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics>::ShowDelayLoadedContactCard;
    using impl::consume_t<IContactManagerStatics3, Windows::ApplicationModel::Contacts::IContactManagerStatics3>::ShowDelayLoadedContactCard;
};

struct WINRT_EBO IContactManagerStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerStatics4>
{
    IContactManagerStatics4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactManagerStatics5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactManagerStatics5>
{
    IContactManagerStatics5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactMatchReason :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactMatchReason>
{
    IContactMatchReason(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactName :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactName>
{
    IContactName(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactPanel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPanel>
{
    IContactPanel(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactPanelClosingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPanelClosingEventArgs>
{
    IContactPanelClosingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactPanelLaunchFullAppRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPanelLaunchFullAppRequestedEventArgs>
{
    IContactPanelLaunchFullAppRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactPhone :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPhone>
{
    IContactPhone(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactPicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPicker>
{
    IContactPicker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactPicker2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPicker2>
{
    IContactPicker2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactPicker3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPicker3>
{
    IContactPicker3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactPickerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPickerStatics>
{
    IContactPickerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactQueryOptions>
{
    IContactQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactQueryOptionsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactQueryOptionsFactory>
{
    IContactQueryOptionsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactQueryTextSearch :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactQueryTextSearch>
{
    IContactQueryTextSearch(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactReader>
{
    IContactReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactSignificantOther :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactSignificantOther>
{
    IContactSignificantOther(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactSignificantOther2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactSignificantOther2>,
    impl::require<IContactSignificantOther2, Windows::ApplicationModel::Contacts::IContactSignificantOther>
{
    IContactSignificantOther2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStore>
{
    IContactStore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStore2>,
    impl::require<IContactStore2, Windows::ApplicationModel::Contacts::IContactStore>
{
    IContactStore2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactStoreNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStoreNotificationTriggerDetails>
{
    IContactStoreNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactWebsite :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactWebsite>
{
    IContactWebsite(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactWebsite2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactWebsite2>,
    impl::require<IContactWebsite2, Windows::ApplicationModel::Contacts::IContactWebsite>
{
    IContactWebsite2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFullContactCardOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFullContactCardOptions>
{
    IFullContactCardOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] IKnownContactFieldStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownContactFieldStatics>
{
    IKnownContactFieldStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPinnedContactIdsQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPinnedContactIdsQueryResult>
{
    IPinnedContactIdsQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPinnedContactManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPinnedContactManager>
{
    IPinnedContactManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPinnedContactManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPinnedContactManagerStatics>
{
    IPinnedContactManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
