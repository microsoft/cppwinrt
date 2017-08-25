// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Text.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Popups.1.h"
#include "winrt/impl/Windows.UI.ViewManagement.1.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts {

struct WINRT_EBO AggregateContactManager :
    Windows::ApplicationModel::Contacts::IAggregateContactManager,
    impl::require<AggregateContactManager, Windows::ApplicationModel::Contacts::IAggregateContactManager2>
{
    AggregateContactManager(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Contact :
    Windows::ApplicationModel::Contacts::IContact,
    impl::require<Contact, Windows::ApplicationModel::Contacts::IContact2, Windows::ApplicationModel::Contacts::IContact3, Windows::ApplicationModel::Contacts::IContactName>
{
    Contact(std::nullptr_t) noexcept {}
    Contact();
};

struct WINRT_EBO ContactAddress :
    Windows::ApplicationModel::Contacts::IContactAddress
{
    ContactAddress(std::nullptr_t) noexcept {}
    ContactAddress();
};

struct WINRT_EBO ContactAnnotation :
    Windows::ApplicationModel::Contacts::IContactAnnotation,
    impl::require<ContactAnnotation, Windows::ApplicationModel::Contacts::IContactAnnotation2>
{
    ContactAnnotation(std::nullptr_t) noexcept {}
    ContactAnnotation();
};

struct WINRT_EBO ContactAnnotationList :
    Windows::ApplicationModel::Contacts::IContactAnnotationList
{
    ContactAnnotationList(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactAnnotationStore :
    Windows::ApplicationModel::Contacts::IContactAnnotationStore,
    impl::require<ContactAnnotationStore, Windows::ApplicationModel::Contacts::IContactAnnotationStore2>
{
    ContactAnnotationStore(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactBatch :
    Windows::ApplicationModel::Contacts::IContactBatch
{
    ContactBatch(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactCardDelayedDataLoader :
    Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader
{
    ContactCardDelayedDataLoader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactCardOptions :
    Windows::ApplicationModel::Contacts::IContactCardOptions,
    impl::require<ContactCardOptions, Windows::ApplicationModel::Contacts::IContactCardOptions2>
{
    ContactCardOptions(std::nullptr_t) noexcept {}
    ContactCardOptions();
};

struct WINRT_EBO ContactChange :
    Windows::ApplicationModel::Contacts::IContactChange
{
    ContactChange(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactChangeReader :
    Windows::ApplicationModel::Contacts::IContactChangeReader
{
    ContactChangeReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactChangeTracker :
    Windows::ApplicationModel::Contacts::IContactChangeTracker
{
    ContactChangeTracker(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactChangedDeferral :
    Windows::ApplicationModel::Contacts::IContactChangedDeferral
{
    ContactChangedDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactChangedEventArgs :
    Windows::ApplicationModel::Contacts::IContactChangedEventArgs
{
    ContactChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactConnectedServiceAccount :
    Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount
{
    ContactConnectedServiceAccount(std::nullptr_t) noexcept {}
    ContactConnectedServiceAccount();
};

struct WINRT_EBO ContactDate :
    Windows::ApplicationModel::Contacts::IContactDate
{
    ContactDate(std::nullptr_t) noexcept {}
    ContactDate();
};

struct WINRT_EBO ContactEmail :
    Windows::ApplicationModel::Contacts::IContactEmail
{
    ContactEmail(std::nullptr_t) noexcept {}
    ContactEmail();
};

struct WINRT_EBO ContactField :
    Windows::ApplicationModel::Contacts::IContactField
{
    ContactField(std::nullptr_t) noexcept {}
    ContactField(param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type);
    ContactField(param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category);
    ContactField(param::hstring const& name, param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category);
};

struct WINRT_EBO ContactFieldFactory :
    Windows::ApplicationModel::Contacts::IContactFieldFactory,
    impl::require<ContactFieldFactory, Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory, Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>
{
    ContactFieldFactory(std::nullptr_t) noexcept {}
    ContactFieldFactory();
};

struct WINRT_EBO ContactGroup :
    Windows::ApplicationModel::Contacts::IContactGroup
{
    ContactGroup(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactInformation :
    Windows::ApplicationModel::Contacts::IContactInformation
{
    ContactInformation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactInstantMessageField :
    Windows::ApplicationModel::Contacts::IContactInstantMessageField
{
    ContactInstantMessageField(std::nullptr_t) noexcept {}
    ContactInstantMessageField(param::hstring const& userName);
    ContactInstantMessageField(param::hstring const& userName, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category);
    ContactInstantMessageField(param::hstring const& userName, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category, param::hstring const& service, param::hstring const& displayText, Windows::Foundation::Uri const& verb);
};

struct WINRT_EBO ContactJobInfo :
    Windows::ApplicationModel::Contacts::IContactJobInfo
{
    ContactJobInfo(std::nullptr_t) noexcept {}
    ContactJobInfo();
};

struct ContactLaunchActionVerbs
{
    ContactLaunchActionVerbs() = delete;
    static hstring Call();
    static hstring Message();
    static hstring Map();
    static hstring Post();
    static hstring VideoCall();
};

struct WINRT_EBO ContactList :
    Windows::ApplicationModel::Contacts::IContactList,
    impl::require<ContactList, Windows::ApplicationModel::Contacts::IContactList2>
{
    ContactList(std::nullptr_t) noexcept {}
    using impl::consume_t<ContactList, Windows::ApplicationModel::Contacts::IContactList2>::SupportsServerSearch;
    using Windows::ApplicationModel::Contacts::IContactList::SupportsServerSearch;
};

struct WINRT_EBO ContactListSyncConstraints :
    Windows::ApplicationModel::Contacts::IContactListSyncConstraints
{
    ContactListSyncConstraints(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactListSyncManager :
    Windows::ApplicationModel::Contacts::IContactListSyncManager,
    impl::require<ContactListSyncManager, Windows::ApplicationModel::Contacts::IContactListSyncManager2>
{
    ContactListSyncManager(std::nullptr_t) noexcept {}
    using impl::consume_t<ContactListSyncManager, Windows::ApplicationModel::Contacts::IContactListSyncManager2>::LastAttemptedSyncTime;
    using Windows::ApplicationModel::Contacts::IContactListSyncManager::LastAttemptedSyncTime;
    using impl::consume_t<ContactListSyncManager, Windows::ApplicationModel::Contacts::IContactListSyncManager2>::LastSuccessfulSyncTime;
    using Windows::ApplicationModel::Contacts::IContactListSyncManager::LastSuccessfulSyncTime;
    using impl::consume_t<ContactListSyncManager, Windows::ApplicationModel::Contacts::IContactListSyncManager2>::Status;
    using Windows::ApplicationModel::Contacts::IContactListSyncManager::Status;
};

struct WINRT_EBO ContactLocationField :
    Windows::ApplicationModel::Contacts::IContactLocationField
{
    ContactLocationField(std::nullptr_t) noexcept {}
    ContactLocationField(param::hstring const& unstructuredAddress);
    ContactLocationField(param::hstring const& unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category);
    ContactLocationField(param::hstring const& unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category, param::hstring const& street, param::hstring const& city, param::hstring const& region, param::hstring const& country, param::hstring const& postalCode);
};

struct ContactManager
{
    ContactManager() = delete;
    static void ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection);
    static void ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement);
    static Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader ShowDelayLoadedContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> RequestStoreAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact, uint32_t maxBytes);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> ConvertVCardToContactAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& vCard);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> RequestStoreAsync(Windows::ApplicationModel::Contacts::ContactStoreAccessType const& accessType);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore> RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType const& accessType);
    static bool IsShowContactCardSupported();
    static void ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::ApplicationModel::Contacts::ContactCardOptions const& contactCardOptions);
    static bool IsShowDelayLoadedContactCardSupported();
    static Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader ShowDelayLoadedContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::ApplicationModel::Contacts::ContactCardOptions const& contactCardOptions);
    static void ShowFullContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::FullContactCardOptions const& fullContactCardOptions);
    static Windows::ApplicationModel::Contacts::ContactNameOrder SystemDisplayNameOrder();
    static void SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value);
    static Windows::ApplicationModel::Contacts::ContactNameOrder SystemSortOrder();
    static void SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value);
    static Windows::ApplicationModel::Contacts::ContactManagerForUser GetForUser(Windows::System::User const& user);
    static Windows::Foundation::IAsyncOperation<bool> IsShowFullContactCardSupportedAsync();
    static bool IncludeMiddleNameInSystemDisplayAndSort();
    static void IncludeMiddleNameInSystemDisplayAndSort(bool value);
};

struct WINRT_EBO ContactManagerForUser :
    Windows::ApplicationModel::Contacts::IContactManagerForUser,
    impl::require<ContactManagerForUser, Windows::ApplicationModel::Contacts::IContactManagerForUser2>
{
    ContactManagerForUser(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactMatchReason :
    Windows::ApplicationModel::Contacts::IContactMatchReason
{
    ContactMatchReason(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactPanel :
    Windows::ApplicationModel::Contacts::IContactPanel
{
    ContactPanel(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactPanelClosingEventArgs :
    Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs
{
    ContactPanelClosingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactPanelLaunchFullAppRequestedEventArgs :
    Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs
{
    ContactPanelLaunchFullAppRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactPhone :
    Windows::ApplicationModel::Contacts::IContactPhone
{
    ContactPhone(std::nullptr_t) noexcept {}
    ContactPhone();
};

struct WINRT_EBO ContactPicker :
    Windows::ApplicationModel::Contacts::IContactPicker,
    impl::require<ContactPicker, Windows::ApplicationModel::Contacts::IContactPicker2, Windows::ApplicationModel::Contacts::IContactPicker3>
{
    ContactPicker(std::nullptr_t) noexcept {}
    ContactPicker();
    static Windows::ApplicationModel::Contacts::ContactPicker CreateForUser(Windows::System::User const& user);
    static Windows::Foundation::IAsyncOperation<bool> IsSupportedAsync();
};

struct WINRT_EBO ContactQueryOptions :
    Windows::ApplicationModel::Contacts::IContactQueryOptions
{
    ContactQueryOptions(std::nullptr_t) noexcept {}
    ContactQueryOptions();
    ContactQueryOptions(param::hstring const& text);
    ContactQueryOptions(param::hstring const& text, Windows::ApplicationModel::Contacts::ContactQuerySearchFields const& fields);
};

struct WINRT_EBO ContactQueryTextSearch :
    Windows::ApplicationModel::Contacts::IContactQueryTextSearch
{
    ContactQueryTextSearch(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactReader :
    Windows::ApplicationModel::Contacts::IContactReader
{
    ContactReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactSignificantOther :
    Windows::ApplicationModel::Contacts::IContactSignificantOther,
    impl::require<ContactSignificantOther, Windows::ApplicationModel::Contacts::IContactSignificantOther2>
{
    ContactSignificantOther(std::nullptr_t) noexcept {}
    ContactSignificantOther();
};

struct WINRT_EBO ContactStore :
    Windows::ApplicationModel::Contacts::IContactStore,
    impl::require<ContactStore, Windows::ApplicationModel::Contacts::IContactStore2>
{
    ContactStore(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactStoreNotificationTriggerDetails :
    Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails
{
    ContactStoreNotificationTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactWebsite :
    Windows::ApplicationModel::Contacts::IContactWebsite,
    impl::require<ContactWebsite, Windows::ApplicationModel::Contacts::IContactWebsite2>
{
    ContactWebsite(std::nullptr_t) noexcept {}
    ContactWebsite();
};

struct WINRT_EBO FullContactCardOptions :
    Windows::ApplicationModel::Contacts::IFullContactCardOptions
{
    FullContactCardOptions(std::nullptr_t) noexcept {}
    FullContactCardOptions();
};

struct [[deprecated("KnownContactField  may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] KnownContactField
{
    KnownContactField() = delete;
    [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] static hstring Email();
    [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] static hstring PhoneNumber();
    [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] static hstring Location();
    [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] static hstring InstantMessage();
    [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] static Windows::ApplicationModel::Contacts::ContactFieldType ConvertNameToType(param::hstring const& name);
    [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] static hstring ConvertTypeToName(Windows::ApplicationModel::Contacts::ContactFieldType const& type);
};

struct WINRT_EBO PinnedContactIdsQueryResult :
    Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult
{
    PinnedContactIdsQueryResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PinnedContactManager :
    Windows::ApplicationModel::Contacts::IPinnedContactManager
{
    PinnedContactManager(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::Contacts::PinnedContactManager GetDefault();
    static Windows::ApplicationModel::Contacts::PinnedContactManager GetForUser(Windows::System::User const& user);
    static bool IsSupported();
};

}
