// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Data::Text {

struct TextSegment;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;
struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;
struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;
struct IRandomAccessStreamWithContentType;
struct RandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Popups {

enum class Placement;

}

WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement {

enum class ViewSizePreference;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts {

enum class ContactAddressKind
{
    Home = 0,
    Work = 1,
    Other = 2,
};

enum class ContactAnnotationOperations : unsigned
{
    None = 0x0,
    ContactProfile = 0x1,
    Message = 0x2,
    AudioCall = 0x4,
    VideoCall = 0x8,
    SocialFeeds = 0x10,
    Share = 0x20,
};

DEFINE_ENUM_FLAG_OPERATORS(ContactAnnotationOperations)

enum class ContactAnnotationStoreAccessType
{
    AppAnnotationsReadWrite = 0,
    AllAnnotationsReadWrite = 1,
};

enum class ContactBatchStatus
{
    Success = 0,
    ServerSearchSyncManagerError = 1,
    ServerSearchUnknownError = 2,
};

enum class ContactCardHeaderKind
{
    Default = 0,
    Basic = 1,
    Enterprise = 2,
};

enum class ContactCardTabKind
{
    Default = 0,
    Email = 1,
    Messaging = 2,
    Phone = 3,
    Video = 4,
    OrganizationalHierarchy = 5,
};

enum class ContactChangeType
{
    Created = 0,
    Modified = 1,
    Deleted = 2,
    ChangeTrackingLost = 3,
};

enum class ContactDateKind
{
    Birthday = 0,
    Anniversary = 1,
    Other = 2,
};

enum class ContactEmailKind
{
    Personal = 0,
    Work = 1,
    Other = 2,
};

enum class ContactFieldCategory
{
    None = 0,
    Home = 1,
    Work = 2,
    Mobile = 3,
    Other = 4,
};

enum class ContactFieldType
{
    Email = 0,
    PhoneNumber = 1,
    Location [[deprecated("Location  may be altered or unavailable for releases after Windows 8.1. Instead, use Address.")]] = 2,
    InstantMessage [[deprecated("InstantMessage  may be altered or unavailable for releases after Windows 8.1. Instead, use ConnectedServiceAccount.")]] = 3,
    Custom [[deprecated("Custom may be altered or unavailable for releases after Windows 8.1. Instead, use one of the specific types.")]] = 4,
    ConnectedServiceAccount = 5,
    ImportantDate = 6,
    Address = 7,
    SignificantOther = 8,
    Notes = 9,
    Website = 10,
    JobInfo = 11,
};

enum class ContactListOtherAppReadAccess
{
    SystemOnly = 0,
    Limited = 1,
    Full = 2,
    None = 3,
};

enum class ContactListOtherAppWriteAccess
{
    None = 0,
    SystemOnly = 1,
};

enum class ContactListSyncStatus
{
    Idle = 0,
    Syncing = 1,
    UpToDate = 2,
    AuthenticationError = 3,
    PolicyError = 4,
    UnknownError = 5,
    ManualAccountRemovalRequired = 6,
};

enum class ContactMatchReasonKind
{
    Name = 0,
    EmailAddress = 1,
    PhoneNumber = 2,
    JobInfo = 3,
    YomiName = 4,
    Other = 5,
};

enum class ContactNameOrder
{
    FirstNameLastName = 0,
    LastNameFirstName = 1,
};

enum class ContactPhoneKind
{
    Home = 0,
    Mobile = 1,
    Work = 2,
    Other = 3,
    Pager = 4,
    BusinessFax = 5,
    HomeFax = 6,
    Company = 7,
    Assistant = 8,
    Radio = 9,
};

enum class ContactQueryDesiredFields : unsigned
{
    None = 0x0,
    PhoneNumber = 0x1,
    EmailAddress = 0x2,
    PostalAddress = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(ContactQueryDesiredFields)

enum class ContactQuerySearchFields : unsigned
{
    None = 0x0,
    Name = 0x1,
    Email = 0x2,
    Phone = 0x4,
    All = 0xFFFFFFFF,
};

DEFINE_ENUM_FLAG_OPERATORS(ContactQuerySearchFields)

enum class ContactQuerySearchScope
{
    Local = 0,
    Server = 1,
};

enum class ContactRelationship
{
    Other = 0,
    Spouse = 1,
    Partner = 2,
    Sibling = 3,
    Parent = 4,
    Child = 5,
};

enum class ContactSelectionMode
{
    Contacts = 0,
    Fields = 1,
};

enum class ContactStoreAccessType
{
    AppContactsReadWrite = 0,
    AllContactsReadOnly = 1,
    AllContactsReadWrite = 2,
};

enum class PinnedContactSurface
{
    StartMenu = 0,
    Taskbar = 1,
};

struct IAggregateContactManager;
struct IAggregateContactManager2;
struct IContact;
struct IContact2;
struct IContact3;
struct IContactAddress;
struct IContactAnnotation;
struct IContactAnnotation2;
struct IContactAnnotationList;
struct IContactAnnotationStore;
struct IContactAnnotationStore2;
struct IContactBatch;
struct IContactCardDelayedDataLoader;
struct IContactCardOptions;
struct IContactCardOptions2;
struct IContactChange;
struct IContactChangeReader;
struct IContactChangeTracker;
struct IContactChangedDeferral;
struct IContactChangedEventArgs;
struct IContactConnectedServiceAccount;
struct IContactDate;
struct IContactEmail;
struct IContactField;
struct IContactFieldFactory;
struct IContactGroup;
struct IContactInformation;
struct IContactInstantMessageField;
struct IContactInstantMessageFieldFactory;
struct IContactJobInfo;
struct IContactLaunchActionVerbsStatics;
struct IContactList;
struct IContactList2;
struct IContactListSyncConstraints;
struct IContactListSyncManager;
struct IContactListSyncManager2;
struct IContactLocationField;
struct IContactLocationFieldFactory;
struct IContactManagerForUser;
struct IContactManagerForUser2;
struct IContactManagerStatics;
struct IContactManagerStatics2;
struct IContactManagerStatics3;
struct IContactManagerStatics4;
struct IContactManagerStatics5;
struct IContactMatchReason;
struct IContactName;
struct IContactPanel;
struct IContactPanelClosingEventArgs;
struct IContactPanelLaunchFullAppRequestedEventArgs;
struct IContactPhone;
struct IContactPicker;
struct IContactPicker2;
struct IContactPicker3;
struct IContactPickerStatics;
struct IContactQueryOptions;
struct IContactQueryOptionsFactory;
struct IContactQueryTextSearch;
struct IContactReader;
struct IContactSignificantOther;
struct IContactSignificantOther2;
struct IContactStore;
struct IContactStore2;
struct IContactStoreNotificationTriggerDetails;
struct IContactWebsite;
struct IContactWebsite2;
struct IFullContactCardOptions;
struct IKnownContactFieldStatics;
struct IPinnedContactIdsQueryResult;
struct IPinnedContactManager;
struct IPinnedContactManagerStatics;
struct AggregateContactManager;
struct Contact;
struct ContactAddress;
struct ContactAnnotation;
struct ContactAnnotationList;
struct ContactAnnotationStore;
struct ContactBatch;
struct ContactCardDelayedDataLoader;
struct ContactCardOptions;
struct ContactChange;
struct ContactChangeReader;
struct ContactChangeTracker;
struct ContactChangedDeferral;
struct ContactChangedEventArgs;
struct ContactConnectedServiceAccount;
struct ContactDate;
struct ContactEmail;
struct ContactField;
struct ContactFieldFactory;
struct ContactGroup;
struct ContactInformation;
struct ContactInstantMessageField;
struct ContactJobInfo;
struct ContactLaunchActionVerbs;
struct ContactList;
struct ContactListSyncConstraints;
struct ContactListSyncManager;
struct ContactLocationField;
struct ContactManager;
struct ContactManagerForUser;
struct ContactMatchReason;
struct ContactPanel;
struct ContactPanelClosingEventArgs;
struct ContactPanelLaunchFullAppRequestedEventArgs;
struct ContactPhone;
struct ContactPicker;
struct ContactQueryOptions;
struct ContactQueryTextSearch;
struct ContactReader;
struct ContactSignificantOther;
struct ContactStore;
struct ContactStoreNotificationTriggerDetails;
struct ContactWebsite;
struct FullContactCardOptions;
struct KnownContactField;
struct PinnedContactIdsQueryResult;
struct PinnedContactManager;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Contacts::IAggregateContactManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IAggregateContactManager2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContact>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContact2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContact3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactAddress>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactAnnotation>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactAnnotation2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactAnnotationList>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactAnnotationStore>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactAnnotationStore2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactBatch>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactCardOptions>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactCardOptions2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactChange>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactChangeReader>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactChangeTracker>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactChangedDeferral>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactDate>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactEmail>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactField>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactFieldFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactGroup>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactInformation>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactInstantMessageField>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactJobInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactList>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactList2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactListSyncConstraints>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactListSyncManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactListSyncManager2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactLocationField>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerForUser>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerForUser2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerStatics3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerStatics4>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerStatics5>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactMatchReason>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactName>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactPanel>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactPhone>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactPicker>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactPicker2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactPicker3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactPickerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactQueryOptions>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactQueryTextSearch>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactReader>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactSignificantOther>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactSignificantOther2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactStore>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactStore2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactWebsite>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IContactWebsite2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IFullContactCardOptions>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IPinnedContactManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Contacts::AggregateContactManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::Contact>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactAddress>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactAnnotation>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactAnnotationList>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactAnnotationStore>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactBatch>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactCardOptions>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactChange>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactChangeReader>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactChangeTracker>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactChangedDeferral>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactDate>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactEmail>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactField>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactFieldFactory>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactGroup>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactInformation>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactInstantMessageField>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactJobInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactLaunchActionVerbs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactList>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactListSyncConstraints>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactListSyncManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactLocationField>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactManagerForUser>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactMatchReason>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactPanel>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactPhone>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactPicker>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactQueryOptions>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactQueryTextSearch>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactReader>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactSignificantOther>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactStore>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactStoreNotificationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactWebsite>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::FullContactCardOptions>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::KnownContactField>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::PinnedContactIdsQueryResult>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::PinnedContactManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactAddressKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactAnnotationOperations>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactBatchStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactCardHeaderKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactCardTabKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactChangeType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactDateKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactEmailKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactFieldCategory>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactFieldType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactListSyncStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactMatchReasonKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactNameOrder>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactPhoneKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactQueryDesiredFields>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactQuerySearchFields>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactQuerySearchScope>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactRelationship>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactSelectionMode>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::ContactStoreAccessType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Contacts::PinnedContactSurface>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::Contacts::IAggregateContactManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IAggregateContactManager" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IAggregateContactManager2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IAggregateContactManager2" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContact>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContact" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContact2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContact2" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContact3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContact3" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactAddress>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactAddress" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactAnnotation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactAnnotation" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactAnnotation2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactAnnotation2" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactAnnotationList>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactAnnotationList" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactAnnotationStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactAnnotationStore" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactAnnotationStore2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactAnnotationStore2" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactBatch>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactBatch" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactCardDelayedDataLoader" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactCardOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactCardOptions" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactCardOptions2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactCardOptions2" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactChange>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactChange" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactChangeReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactChangeReader" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactChangeTracker>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactChangeTracker" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactChangedDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactChangedDeferral" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactConnectedServiceAccount" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactDate>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactDate" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactEmail>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactEmail" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactField>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactField" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactFieldFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactFieldFactory" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactGroup>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactGroup" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactInformation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactInformation" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactInstantMessageField>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactInstantMessageField" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactInstantMessageFieldFactory" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactJobInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactJobInfo" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactLaunchActionVerbsStatics" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactList>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactList" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactList2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactList2" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactListSyncConstraints>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactListSyncConstraints" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactListSyncManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactListSyncManager" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactListSyncManager2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactListSyncManager2" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactLocationField>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactLocationField" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactLocationFieldFactory" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerForUser>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerForUser" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerForUser2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerForUser2" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerStatics2" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerStatics3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerStatics3" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerStatics4>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerStatics4" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerStatics5>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerStatics5" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactMatchReason>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactMatchReason" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactName>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactName" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactPanel>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPanel" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPanelClosingEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPanelLaunchFullAppRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactPhone>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPhone" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactPicker>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPicker" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactPicker2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPicker2" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactPicker3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPicker3" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactPickerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPickerStatics" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactQueryOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactQueryOptions" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactQueryOptionsFactory" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactQueryTextSearch>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactQueryTextSearch" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactReader" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactSignificantOther>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactSignificantOther" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactSignificantOther2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactSignificantOther2" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactStore" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactStore2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactStore2" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactStoreNotificationTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactWebsite>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactWebsite" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IContactWebsite2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactWebsite2" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IFullContactCardOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IFullContactCardOptions" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IKnownContactFieldStatics" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IPinnedContactIdsQueryResult" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IPinnedContactManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IPinnedContactManager" }; };
template <> struct name<Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IPinnedContactManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Contacts::AggregateContactManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.AggregateContactManager" }; };
template <> struct name<Windows::ApplicationModel::Contacts::Contact>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.Contact" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactAddress>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAddress" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactAnnotation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAnnotation" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactAnnotationList>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAnnotationList" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactAnnotationStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAnnotationStore" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactBatch>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactBatch" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactCardDelayedDataLoader" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactCardOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactCardOptions" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactChange>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactChange" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactChangeReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactChangeReader" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactChangeTracker>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactChangeTracker" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactChangedDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactChangedDeferral" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactConnectedServiceAccount" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactDate>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactDate" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactEmail>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactEmail" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactField>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactField" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactFieldFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactFieldFactory" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactGroup>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactGroup" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactInformation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactInformation" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactInstantMessageField>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactInstantMessageField" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactJobInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactJobInfo" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactLaunchActionVerbs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactLaunchActionVerbs" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactList>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactList" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactListSyncConstraints>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactListSyncConstraints" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactListSyncManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactListSyncManager" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactLocationField>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactLocationField" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactManager" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactManagerForUser>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactManagerForUser" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactMatchReason>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactMatchReason" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactPanel>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactPanel" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactPanelClosingEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactPanelLaunchFullAppRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactPhone>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactPhone" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactPicker>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactPicker" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactQueryOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactQueryOptions" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactQueryTextSearch>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactQueryTextSearch" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactReader" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactSignificantOther>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactSignificantOther" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactStore" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactStoreNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactStoreNotificationTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactWebsite>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactWebsite" }; };
template <> struct name<Windows::ApplicationModel::Contacts::FullContactCardOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.FullContactCardOptions" }; };
template <> struct name<Windows::ApplicationModel::Contacts::KnownContactField>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.KnownContactField" }; };
template <> struct name<Windows::ApplicationModel::Contacts::PinnedContactIdsQueryResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.PinnedContactIdsQueryResult" }; };
template <> struct name<Windows::ApplicationModel::Contacts::PinnedContactManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.PinnedContactManager" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactAddressKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAddressKind" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactAnnotationOperations>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAnnotationOperations" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAnnotationStoreAccessType" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactBatchStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactBatchStatus" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactCardHeaderKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactCardHeaderKind" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactCardTabKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactCardTabKind" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactChangeType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactChangeType" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactDateKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactDateKind" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactEmailKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactEmailKind" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactFieldCategory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactFieldCategory" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactFieldType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactFieldType" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactListOtherAppReadAccess" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactListOtherAppWriteAccess" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactListSyncStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactListSyncStatus" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactMatchReasonKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactMatchReasonKind" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactNameOrder>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactNameOrder" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactPhoneKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactPhoneKind" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactQueryDesiredFields>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactQueryDesiredFields" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactQuerySearchFields>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactQuerySearchFields" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactQuerySearchScope>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactQuerySearchScope" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactRelationship>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactRelationship" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactSelectionMode>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactSelectionMode" }; };
template <> struct name<Windows::ApplicationModel::Contacts::ContactStoreAccessType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactStoreAccessType" }; };
template <> struct name<Windows::ApplicationModel::Contacts::PinnedContactSurface>{ static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.PinnedContactSurface" }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IAggregateContactManager>{ static constexpr GUID value{ 0x0379D5DD,0xDB5A,0x4FD3,{ 0xB5,0x4E,0x4D,0xF1,0x79,0x17,0xA2,0x12 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IAggregateContactManager2>{ static constexpr GUID value{ 0x5E8CC2D8,0xA9CD,0x4430,{ 0x9C,0x4B,0x01,0x34,0x8D,0xB2,0xCA,0x50 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContact>{ static constexpr GUID value{ 0xEC0072F3,0x2118,0x4049,{ 0x9E,0xBC,0x17,0xF0,0xAB,0x69,0x2B,0x64 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContact2>{ static constexpr GUID value{ 0xF312F365,0xBB77,0x4C94,{ 0x80,0x2D,0x83,0x28,0xCE,0xE4,0x0C,0x08 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContact3>{ static constexpr GUID value{ 0x48201E67,0xE08E,0x42A4,{ 0xB5,0x61,0x41,0xD0,0x8C,0xA9,0x57,0x5D } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactAddress>{ static constexpr GUID value{ 0x9739D39A,0x42CE,0x4872,{ 0x8D,0x70,0x30,0x63,0xAA,0x58,0x4B,0x70 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactAnnotation>{ static constexpr GUID value{ 0x821FC2EF,0x7D41,0x44A2,{ 0x84,0xC3,0x60,0xA2,0x81,0xDD,0x7B,0x86 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactAnnotation2>{ static constexpr GUID value{ 0xB691ECF3,0x4AB7,0x4A1F,{ 0x99,0x41,0x0C,0x9C,0xF3,0x17,0x1B,0x75 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactAnnotationList>{ static constexpr GUID value{ 0x92A486AA,0x5C88,0x45B9,{ 0xAA,0xD0,0x46,0x18,0x88,0xE6,0x8D,0x8A } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactAnnotationStore>{ static constexpr GUID value{ 0x23ACF4AA,0x7A77,0x457D,{ 0x82,0x03,0x98,0x7F,0x4B,0x31,0xAF,0x09 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactAnnotationStore2>{ static constexpr GUID value{ 0x7EDE23FD,0x61E7,0x4967,{ 0x8E,0xC5,0xBD,0xF2,0x80,0xA2,0x40,0x63 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactBatch>{ static constexpr GUID value{ 0x35D1972D,0xBFCE,0x46BB,{ 0x93,0xF8,0xA5,0xB0,0x6E,0xC5,0xE2,0x01 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader>{ static constexpr GUID value{ 0xB60AF902,0x1546,0x434D,{ 0x86,0x9C,0x6E,0x35,0x20,0x76,0x0E,0xF3 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactCardOptions>{ static constexpr GUID value{ 0x8C0A4F7E,0x6AB6,0x4F3F,{ 0xBE,0x72,0x81,0x72,0x36,0xEE,0xEA,0x5B } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactCardOptions2>{ static constexpr GUID value{ 0x8F271BA0,0xD74B,0x4CC6,{ 0x9F,0x53,0x1B,0x0E,0xB5,0xD1,0x27,0x3C } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactChange>{ static constexpr GUID value{ 0x951D4B10,0x6A59,0x4720,{ 0xA4,0xE1,0x36,0x3D,0x98,0xC1,0x35,0xD5 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactChangeReader>{ static constexpr GUID value{ 0x217319FA,0x2D0C,0x42E0,{ 0xA9,0xDA,0x3E,0xCD,0x56,0xA7,0x8A,0x47 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactChangeTracker>{ static constexpr GUID value{ 0x6E992952,0x309B,0x404D,{ 0x97,0x12,0xB3,0x7B,0xD3,0x02,0x78,0xAA } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactChangedDeferral>{ static constexpr GUID value{ 0xC5143AE8,0x1B03,0x46F8,{ 0xB6,0x94,0xA5,0x23,0xE8,0x3C,0xFC,0xB6 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactChangedEventArgs>{ static constexpr GUID value{ 0x525E7FD1,0x73F3,0x4B7D,{ 0xA9,0x18,0x58,0x0B,0xE4,0x36,0x61,0x21 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount>{ static constexpr GUID value{ 0xF6F83553,0xAA27,0x4731,{ 0x8E,0x4A,0x3D,0xEC,0x5C,0xE9,0xEE,0xC9 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactDate>{ static constexpr GUID value{ 0xFE98AE66,0xB205,0x4934,{ 0x91,0x74,0x0F,0xF2,0xB0,0x56,0x57,0x07 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactEmail>{ static constexpr GUID value{ 0x90A219A9,0xE3D3,0x4D63,{ 0x99,0x3B,0x05,0xB9,0xA5,0x39,0x3A,0xBF } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactField>{ static constexpr GUID value{ 0xB176486A,0xD293,0x492C,{ 0xA0,0x58,0xDB,0x57,0x5B,0x3E,0x3C,0x0F } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactFieldFactory>{ static constexpr GUID value{ 0x85E2913F,0x0E4A,0x4A3E,{ 0x89,0x94,0x40,0x6A,0xE7,0xED,0x64,0x6E } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactGroup>{ static constexpr GUID value{ 0x59BDEB01,0x9E9A,0x475D,{ 0xBF,0xE5,0xA3,0x7B,0x80,0x6D,0x85,0x2C } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactInformation>{ static constexpr GUID value{ 0x275EB6D4,0x6A2E,0x4278,{ 0xA9,0x14,0xE4,0x60,0xD5,0xF0,0x88,0xF6 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactInstantMessageField>{ static constexpr GUID value{ 0xCCE33B37,0x0D85,0x41FA,{ 0xB4,0x3D,0xDA,0x59,0x9C,0x3E,0xB0,0x09 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>{ static constexpr GUID value{ 0xBA0B6794,0x91A3,0x4BB2,{ 0xB1,0xB9,0x69,0xA5,0xDF,0xF0,0xBA,0x09 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactJobInfo>{ static constexpr GUID value{ 0x6D117B4C,0xCE50,0x4B43,{ 0x9E,0x69,0xB1,0x82,0x58,0xEA,0x53,0x15 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>{ static constexpr GUID value{ 0xFB1232D6,0xEE73,0x46E7,{ 0x87,0x61,0x11,0xCD,0x01,0x57,0x72,0x8F } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactList>{ static constexpr GUID value{ 0x16DDEC75,0x392C,0x4845,{ 0x9D,0xFB,0x51,0xA3,0xE7,0xEF,0x3E,0x42 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactList2>{ static constexpr GUID value{ 0xCB3943B4,0x4550,0x4DCB,{ 0x92,0x29,0x40,0xFF,0x91,0xFB,0x02,0x03 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactListSyncConstraints>{ static constexpr GUID value{ 0xB2B0BF01,0x3062,0x4E2E,{ 0x96,0x9D,0x01,0x8D,0x19,0x87,0xF3,0x14 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactListSyncManager>{ static constexpr GUID value{ 0x146E83BE,0x7925,0x4ACC,{ 0x9D,0xE5,0x21,0xDD,0xD0,0x6F,0x86,0x74 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactListSyncManager2>{ static constexpr GUID value{ 0xA9591247,0xBB55,0x4E23,{ 0x81,0x28,0x37,0x01,0x34,0xA8,0x5D,0x0D } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactLocationField>{ static constexpr GUID value{ 0x9EC00F82,0xAB6E,0x4B36,{ 0x89,0xE3,0xB2,0x3B,0xC0,0xA1,0xDA,0xCC } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>{ static constexpr GUID value{ 0xF79932D7,0x2FDF,0x43FE,{ 0x8F,0x18,0x41,0x89,0x73,0x90,0xBC,0xFE } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactManagerForUser>{ static constexpr GUID value{ 0xB74BBA57,0x1076,0x4BEF,{ 0xAE,0xF3,0x54,0x68,0x6D,0x18,0x38,0x7D } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactManagerForUser2>{ static constexpr GUID value{ 0x4D469C2E,0x3B75,0x4A73,{ 0xBB,0x30,0x73,0x66,0x45,0x47,0x22,0x56 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactManagerStatics>{ static constexpr GUID value{ 0x81F21AC0,0xF661,0x4708,{ 0xBA,0x4F,0xD3,0x86,0xBD,0x0D,0x62,0x2E } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactManagerStatics2>{ static constexpr GUID value{ 0xA178E620,0x47D8,0x48CC,{ 0x96,0x3C,0x95,0x92,0xB6,0xE5,0x10,0xC6 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactManagerStatics3>{ static constexpr GUID value{ 0xC4CC3D42,0x7586,0x492A,{ 0x93,0x0B,0x7B,0xC1,0x38,0xFC,0x21,0x39 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactManagerStatics4>{ static constexpr GUID value{ 0x24982272,0x347B,0x46DC,{ 0x8D,0x95,0x51,0xBD,0x41,0xE1,0x5A,0xAF } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactManagerStatics5>{ static constexpr GUID value{ 0xF7591A87,0xACB7,0x4FAD,{ 0x90,0xF2,0xA8,0xAB,0x64,0xCD,0xBB,0xA4 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactMatchReason>{ static constexpr GUID value{ 0xBC922504,0xE7D8,0x413E,{ 0x95,0xF4,0xB7,0x5C,0x54,0xC7,0x40,0x77 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactName>{ static constexpr GUID value{ 0xF404E97B,0x9034,0x453C,{ 0x8E,0xBF,0x14,0x0A,0x38,0xC8,0x6F,0x1D } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactPanel>{ static constexpr GUID value{ 0x41BF1265,0xD2EE,0x4B97,{ 0xA8,0x0A,0x7D,0x8D,0x64,0xCC,0xA6,0xF5 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs>{ static constexpr GUID value{ 0x222174D3,0xCF4B,0x46D7,{ 0xB7,0x39,0x6E,0xDC,0x16,0x11,0x0B,0xFB } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs>{ static constexpr GUID value{ 0x88D61C0E,0x23B4,0x4BE8,{ 0x8A,0xFC,0x07,0x2C,0x25,0xA4,0x19,0x0D } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactPhone>{ static constexpr GUID value{ 0x467DAB65,0x2712,0x4F52,{ 0xB7,0x83,0x9E,0xA8,0x11,0x1C,0x63,0xCD } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactPicker>{ static constexpr GUID value{ 0x0E09FD91,0x42F8,0x4055,{ 0x90,0xA0,0x89,0x6F,0x96,0x73,0x89,0x36 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactPicker2>{ static constexpr GUID value{ 0xB35011CF,0x5CEF,0x4D24,{ 0xAA,0x0C,0x34,0x0C,0x52,0x08,0x72,0x5D } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactPicker3>{ static constexpr GUID value{ 0x0E723315,0xB243,0x4BED,{ 0x85,0x16,0x22,0xB1,0xA7,0xAC,0x0A,0xCE } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactPickerStatics>{ static constexpr GUID value{ 0x7488C029,0x6A53,0x4258,{ 0xA3,0xE9,0x62,0xDF,0xF6,0x78,0x4B,0x6C } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactQueryOptions>{ static constexpr GUID value{ 0x4408CC9E,0x7D7C,0x42F0,{ 0x8A,0xC7,0xF5,0x07,0x33,0xEC,0xDB,0xC1 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory>{ static constexpr GUID value{ 0x543FBA47,0x8CE7,0x46CB,{ 0x9D,0xAC,0x9A,0xA4,0x2A,0x1B,0xC8,0xE2 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactQueryTextSearch>{ static constexpr GUID value{ 0xF7E3F9CB,0xA957,0x439B,{ 0xA0,0xB7,0x1C,0x02,0xA1,0x96,0x3F,0xF0 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactReader>{ static constexpr GUID value{ 0xD397E42E,0x1488,0x42F2,{ 0xBF,0x64,0x25,0x3F,0x48,0x84,0xBF,0xED } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactSignificantOther>{ static constexpr GUID value{ 0x8873B5AB,0xC5FB,0x46D8,{ 0x93,0xFE,0xDA,0x3F,0xF1,0x93,0x40,0x54 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactSignificantOther2>{ static constexpr GUID value{ 0x8D7BD474,0x3F03,0x45F8,{ 0xBA,0x0F,0xC4,0xED,0x37,0xD6,0x42,0x19 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactStore>{ static constexpr GUID value{ 0x2C220B10,0x3A6C,0x4293,{ 0xB9,0xBC,0xFE,0x98,0x7F,0x6E,0x0D,0x52 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactStore2>{ static constexpr GUID value{ 0x18CE1C22,0xEBD5,0x4BFB,{ 0xB6,0x90,0x5F,0x4F,0x27,0xC4,0xF0,0xE8 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails>{ static constexpr GUID value{ 0xABB298D6,0x878A,0x4F8B,{ 0xA9,0xCE,0x46,0xBB,0x7D,0x1C,0x84,0xCE } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactWebsite>{ static constexpr GUID value{ 0x9F130176,0xDC1B,0x4055,{ 0xAD,0x66,0x65,0x2F,0x39,0xD9,0x90,0xE8 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IContactWebsite2>{ static constexpr GUID value{ 0xF87EE91E,0x5647,0x4068,{ 0xBB,0x5E,0x4B,0x6F,0x43,0x7C,0xE3,0x08 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IFullContactCardOptions>{ static constexpr GUID value{ 0x8744436C,0x5CF9,0x4683,{ 0xBD,0xCA,0xA1,0xFD,0xEB,0xF8,0xDB,0xCE } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>{ static constexpr GUID value{ 0x2E0E1B12,0xD627,0x4FCA,{ 0xBA,0xD4,0x1F,0xAF,0x16,0x8C,0x7D,0x14 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult>{ static constexpr GUID value{ 0x7D9B2552,0x1579,0x4DDC,{ 0x87,0x1F,0xA3,0x0A,0x3A,0xEA,0x9B,0xA1 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IPinnedContactManager>{ static constexpr GUID value{ 0xFCBC740C,0xE1D6,0x45C3,{ 0xB8,0xB6,0xA3,0x56,0x04,0xE1,0x67,0xA0 } }; };
template <> struct guid<Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics>{ static constexpr GUID value{ 0xF65CCC7E,0xFDF9,0x486A,{ 0xAC,0xE9,0xBC,0x31,0x1D,0x0A,0xE7,0xF0 } }; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::AggregateContactManager>{ using type = Windows::ApplicationModel::Contacts::IAggregateContactManager; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::Contact>{ using type = Windows::ApplicationModel::Contacts::IContact; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactAddress>{ using type = Windows::ApplicationModel::Contacts::IContactAddress; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactAnnotation>{ using type = Windows::ApplicationModel::Contacts::IContactAnnotation; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactAnnotationList>{ using type = Windows::ApplicationModel::Contacts::IContactAnnotationList; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactAnnotationStore>{ using type = Windows::ApplicationModel::Contacts::IContactAnnotationStore; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactBatch>{ using type = Windows::ApplicationModel::Contacts::IContactBatch; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader>{ using type = Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactCardOptions>{ using type = Windows::ApplicationModel::Contacts::IContactCardOptions; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactChange>{ using type = Windows::ApplicationModel::Contacts::IContactChange; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactChangeReader>{ using type = Windows::ApplicationModel::Contacts::IContactChangeReader; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactChangeTracker>{ using type = Windows::ApplicationModel::Contacts::IContactChangeTracker; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactChangedDeferral>{ using type = Windows::ApplicationModel::Contacts::IContactChangedDeferral; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactChangedEventArgs>{ using type = Windows::ApplicationModel::Contacts::IContactChangedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount>{ using type = Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactDate>{ using type = Windows::ApplicationModel::Contacts::IContactDate; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactEmail>{ using type = Windows::ApplicationModel::Contacts::IContactEmail; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactField>{ using type = Windows::ApplicationModel::Contacts::IContactField; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactFieldFactory>{ using type = Windows::ApplicationModel::Contacts::IContactFieldFactory; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactGroup>{ using type = Windows::ApplicationModel::Contacts::IContactGroup; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactInformation>{ using type = Windows::ApplicationModel::Contacts::IContactInformation; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactInstantMessageField>{ using type = Windows::ApplicationModel::Contacts::IContactInstantMessageField; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactJobInfo>{ using type = Windows::ApplicationModel::Contacts::IContactJobInfo; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactList>{ using type = Windows::ApplicationModel::Contacts::IContactList; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactListSyncConstraints>{ using type = Windows::ApplicationModel::Contacts::IContactListSyncConstraints; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactListSyncManager>{ using type = Windows::ApplicationModel::Contacts::IContactListSyncManager; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactLocationField>{ using type = Windows::ApplicationModel::Contacts::IContactLocationField; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactManagerForUser>{ using type = Windows::ApplicationModel::Contacts::IContactManagerForUser; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactMatchReason>{ using type = Windows::ApplicationModel::Contacts::IContactMatchReason; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactPanel>{ using type = Windows::ApplicationModel::Contacts::IContactPanel; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs>{ using type = Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs>{ using type = Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactPhone>{ using type = Windows::ApplicationModel::Contacts::IContactPhone; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactPicker>{ using type = Windows::ApplicationModel::Contacts::IContactPicker; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactQueryOptions>{ using type = Windows::ApplicationModel::Contacts::IContactQueryOptions; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactQueryTextSearch>{ using type = Windows::ApplicationModel::Contacts::IContactQueryTextSearch; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactReader>{ using type = Windows::ApplicationModel::Contacts::IContactReader; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactSignificantOther>{ using type = Windows::ApplicationModel::Contacts::IContactSignificantOther; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactStore>{ using type = Windows::ApplicationModel::Contacts::IContactStore; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactStoreNotificationTriggerDetails>{ using type = Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactWebsite>{ using type = Windows::ApplicationModel::Contacts::IContactWebsite; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::FullContactCardOptions>{ using type = Windows::ApplicationModel::Contacts::IFullContactCardOptions; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::PinnedContactIdsQueryResult>{ using type = Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult; };
template <> struct default_interface<Windows::ApplicationModel::Contacts::PinnedContactManager>{ using type = Windows::ApplicationModel::Contacts::IPinnedContactManager; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IAggregateContactManager
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> FindRawContactsAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> TryLinkContactsAsync(Windows::ApplicationModel::Contacts::Contact const& primaryContact, Windows::ApplicationModel::Contacts::Contact const& secondaryContact) const;
    Windows::Foundation::IAsyncAction UnlinkRawContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
    Windows::Foundation::IAsyncOperation<bool> TrySetPreferredSourceForPictureAsync(Windows::ApplicationModel::Contacts::Contact const& aggregateContact, Windows::ApplicationModel::Contacts::Contact const& rawContact) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IAggregateContactManager> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IAggregateContactManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IAggregateContactManager2
{
    Windows::Foundation::IAsyncAction SetRemoteIdentificationInformationAsync(param::hstring const& contactListId, param::hstring const& remoteSourceId, param::hstring const& accountId) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IAggregateContactManager2> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IAggregateContactManager2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContact
{
    hstring Name() const;
    void Name(param::hstring const& value) const;
    Windows::Storage::Streams::IRandomAccessStreamReference Thumbnail() const;
    void Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::IContactField> Fields() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContact> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContact<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContact2
{
    hstring Id() const;
    void Id(param::hstring const& value) const;
    hstring Notes() const;
    void Notes(param::hstring const& value) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactPhone> Phones() const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactEmail> Emails() const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactAddress> Addresses() const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount> ConnectedServiceAccounts() const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactDate> ImportantDates() const;
    Windows::Foundation::Collections::IVector<hstring> DataSuppliers() const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactJobInfo> JobInfo() const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactSignificantOther> SignificantOthers() const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactWebsite> Websites() const;
    Windows::Foundation::Collections::IPropertySet ProviderProperties() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContact2> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContact2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContact3
{
    hstring ContactListId() const;
    Windows::Foundation::DateTime DisplayPictureUserUpdateTime() const;
    void DisplayPictureUserUpdateTime(Windows::Foundation::DateTime const& value) const;
    bool IsMe() const;
    hstring AggregateId() const;
    hstring RemoteId() const;
    void RemoteId(param::hstring const& value) const;
    hstring RingToneToken() const;
    void RingToneToken(param::hstring const& value) const;
    bool IsDisplayPictureManuallySet() const;
    Windows::Storage::Streams::IRandomAccessStreamReference LargeDisplayPicture() const;
    Windows::Storage::Streams::IRandomAccessStreamReference SmallDisplayPicture() const;
    Windows::Storage::Streams::IRandomAccessStreamReference SourceDisplayPicture() const;
    void SourceDisplayPicture(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    hstring TextToneToken() const;
    void TextToneToken(param::hstring const& value) const;
    bool IsAggregate() const;
    hstring FullName() const;
    hstring DisplayNameOverride() const;
    void DisplayNameOverride(param::hstring const& value) const;
    hstring Nickname() const;
    void Nickname(param::hstring const& value) const;
    hstring SortName() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContact3> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContact3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactAddress
{
    hstring StreetAddress() const;
    void StreetAddress(param::hstring const& value) const;
    hstring Locality() const;
    void Locality(param::hstring const& value) const;
    hstring Region() const;
    void Region(param::hstring const& value) const;
    hstring Country() const;
    void Country(param::hstring const& value) const;
    hstring PostalCode() const;
    void PostalCode(param::hstring const& value) const;
    Windows::ApplicationModel::Contacts::ContactAddressKind Kind() const;
    void Kind(Windows::ApplicationModel::Contacts::ContactAddressKind const& value) const;
    hstring Description() const;
    void Description(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactAddress> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactAddress<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactAnnotation
{
    hstring Id() const;
    hstring AnnotationListId() const;
    hstring ContactId() const;
    void ContactId(param::hstring const& value) const;
    hstring RemoteId() const;
    void RemoteId(param::hstring const& value) const;
    Windows::ApplicationModel::Contacts::ContactAnnotationOperations SupportedOperations() const;
    void SupportedOperations(Windows::ApplicationModel::Contacts::ContactAnnotationOperations const& value) const;
    bool IsDisabled() const;
    Windows::Foundation::Collections::ValueSet ProviderProperties() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactAnnotation> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactAnnotation<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactAnnotation2
{
    hstring ContactListId() const;
    void ContactListId(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactAnnotation2> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactAnnotation2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactAnnotationList
{
    hstring Id() const;
    hstring ProviderPackageFamilyName() const;
    hstring UserDataAccountId() const;
    Windows::Foundation::IAsyncAction DeleteAsync() const;
    Windows::Foundation::IAsyncOperation<bool> TrySaveAnnotationAsync(Windows::ApplicationModel::Contacts::ContactAnnotation const& annotation) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotation> GetAnnotationAsync(param::hstring const& annotationId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> FindAnnotationsByRemoteIdAsync(param::hstring const& remoteId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> FindAnnotationsAsync() const;
    Windows::Foundation::IAsyncAction DeleteAnnotationAsync(Windows::ApplicationModel::Contacts::ContactAnnotation const& annotation) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactAnnotationList> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactAnnotationList<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> FindContactIdsByEmailAsync(param::hstring const& emailAddress) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> FindContactIdsByPhoneNumberAsync(param::hstring const& phoneNumber) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> FindAnnotationsForContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
    Windows::Foundation::IAsyncAction DisableAnnotationAsync(Windows::ApplicationModel::Contacts::ContactAnnotation const& annotation) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> CreateAnnotationListAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> CreateAnnotationListAsync(param::hstring const& userDataAccountId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> GetAnnotationListAsync(param::hstring const& annotationListId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>> FindAnnotationListsAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactAnnotationStore> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore2
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> FindAnnotationsForContactListAsync(param::hstring const& contactListId) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactAnnotationStore2> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactBatch
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact> Contacts() const;
    Windows::ApplicationModel::Contacts::ContactBatchStatus Status() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactBatch> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactBatch<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactCardDelayedDataLoader
{
    void SetData(Windows::ApplicationModel::Contacts::Contact const& contact) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactCardDelayedDataLoader<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactCardOptions
{
    Windows::ApplicationModel::Contacts::ContactCardHeaderKind HeaderKind() const;
    void HeaderKind(Windows::ApplicationModel::Contacts::ContactCardHeaderKind const& value) const;
    Windows::ApplicationModel::Contacts::ContactCardTabKind InitialTabKind() const;
    void InitialTabKind(Windows::ApplicationModel::Contacts::ContactCardTabKind const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactCardOptions> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactCardOptions<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactCardOptions2
{
    Windows::Foundation::Collections::IVector<hstring> ServerSearchContactListIds() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactCardOptions2> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactCardOptions2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactChange
{
    Windows::ApplicationModel::Contacts::ContactChangeType ChangeType() const;
    Windows::ApplicationModel::Contacts::Contact Contact() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactChange> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactChange<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactChangeReader
{
    void AcceptChanges() const;
    void AcceptChangesThrough(Windows::ApplicationModel::Contacts::ContactChange const& lastChangeToAccept) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactChange>> ReadBatchAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactChangeReader> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactChangeReader<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactChangeTracker
{
    void Enable() const;
    Windows::ApplicationModel::Contacts::ContactChangeReader GetChangeReader() const;
    void Reset() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactChangeTracker> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactChangeTracker<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactChangedDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactChangedDeferral> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactChangedDeferral<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactChangedEventArgs
{
    Windows::ApplicationModel::Contacts::ContactChangedDeferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactChangedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactConnectedServiceAccount
{
    hstring Id() const;
    void Id(param::hstring const& value) const;
    hstring ServiceName() const;
    void ServiceName(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactConnectedServiceAccount<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactDate
{
    Windows::Foundation::IReference<uint32_t> Day() const;
    void Day(optional<uint32_t> const& value) const;
    Windows::Foundation::IReference<uint32_t> Month() const;
    void Month(optional<uint32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> Year() const;
    void Year(optional<int32_t> const& value) const;
    Windows::ApplicationModel::Contacts::ContactDateKind Kind() const;
    void Kind(Windows::ApplicationModel::Contacts::ContactDateKind const& value) const;
    hstring Description() const;
    void Description(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactDate> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactDate<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactEmail
{
    hstring Address() const;
    void Address(param::hstring const& value) const;
    Windows::ApplicationModel::Contacts::ContactEmailKind Kind() const;
    void Kind(Windows::ApplicationModel::Contacts::ContactEmailKind const& value) const;
    hstring Description() const;
    void Description(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactEmail> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactEmail<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactField
{
    Windows::ApplicationModel::Contacts::ContactFieldType Type() const;
    Windows::ApplicationModel::Contacts::ContactFieldCategory Category() const;
    hstring Name() const;
    hstring Value() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactField> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactField<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactFieldFactory
{
    Windows::ApplicationModel::Contacts::ContactField CreateField(param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type) const;
    Windows::ApplicationModel::Contacts::ContactField CreateField(param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) const;
    Windows::ApplicationModel::Contacts::ContactField CreateField(param::hstring const& name, param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactFieldFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactFieldFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactGroup
{
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactGroup> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactGroup<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactInformation
{
    hstring Name() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> GetThumbnailAsync() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> Emails() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> PhoneNumbers() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactLocationField> Locations() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactInstantMessageField> InstantMessages() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> CustomFields() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> QueryCustomFields(param::hstring const& customName) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactInformation> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactInformation<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactInstantMessageField
{
    hstring UserName() const;
    hstring Service() const;
    hstring DisplayText() const;
    Windows::Foundation::Uri LaunchUri() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactInstantMessageField> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactInstantMessageField<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactInstantMessageFieldFactory
{
    Windows::ApplicationModel::Contacts::ContactInstantMessageField CreateInstantMessage(param::hstring const& userName) const;
    Windows::ApplicationModel::Contacts::ContactInstantMessageField CreateInstantMessage(param::hstring const& userName, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) const;
    Windows::ApplicationModel::Contacts::ContactInstantMessageField CreateInstantMessage(param::hstring const& userName, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category, param::hstring const& service, param::hstring const& displayText, Windows::Foundation::Uri const& verb) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactInstantMessageFieldFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactJobInfo
{
    hstring CompanyName() const;
    void CompanyName(param::hstring const& value) const;
    hstring CompanyYomiName() const;
    void CompanyYomiName(param::hstring const& value) const;
    hstring Department() const;
    void Department(param::hstring const& value) const;
    hstring Title() const;
    void Title(param::hstring const& value) const;
    hstring Manager() const;
    void Manager(param::hstring const& value) const;
    hstring Office() const;
    void Office(param::hstring const& value) const;
    hstring CompanyAddress() const;
    void CompanyAddress(param::hstring const& value) const;
    hstring Description() const;
    void Description(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactJobInfo> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactLaunchActionVerbsStatics
{
    hstring Call() const;
    hstring Message() const;
    hstring Map() const;
    hstring Post() const;
    hstring VideoCall() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactLaunchActionVerbsStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactList
{
    hstring Id() const;
    hstring DisplayName() const;
    void DisplayName(param::hstring const& value) const;
    hstring SourceDisplayName() const;
    bool IsHidden() const;
    void IsHidden(bool value) const;
    Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess OtherAppReadAccess() const;
    void OtherAppReadAccess(Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess const& value) const;
    Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess OtherAppWriteAccess() const;
    void OtherAppWriteAccess(Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess const& value) const;
    Windows::ApplicationModel::Contacts::ContactChangeTracker ChangeTracker() const;
    Windows::ApplicationModel::Contacts::ContactListSyncManager SyncManager() const;
    bool SupportsServerSearch() const;
    hstring UserDataAccountId() const;
    event_token ContactChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactList, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const& value) const;
    using ContactChanged_revoker = event_revoker<Windows::ApplicationModel::Contacts::IContactList>;
    ContactChanged_revoker ContactChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactList, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const& value) const;
    void ContactChanged(event_token const& value) const;
    Windows::Foundation::IAsyncAction SaveAsync() const;
    Windows::Foundation::IAsyncAction DeleteAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> GetContactFromRemoteIdAsync(param::hstring const& remoteId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> GetMeContactAsync() const;
    Windows::ApplicationModel::Contacts::ContactReader GetContactReader() const;
    Windows::ApplicationModel::Contacts::ContactReader GetContactReader(Windows::ApplicationModel::Contacts::ContactQueryOptions const& options) const;
    Windows::Foundation::IAsyncAction SaveContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
    Windows::Foundation::IAsyncAction DeleteContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> GetContactAsync(param::hstring const& contactId) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactList> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactList<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactList2
{
    Windows::Foundation::IAsyncAction RegisterSyncManagerAsync() const;
    void SupportsServerSearch(bool value) const;
    Windows::ApplicationModel::Contacts::ContactListSyncConstraints SyncConstraints() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactList2> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactList2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints
{
    bool CanSyncDescriptions() const;
    void CanSyncDescriptions(bool value) const;
    Windows::Foundation::IReference<int32_t> MaxHomePhoneNumbers() const;
    void MaxHomePhoneNumbers(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxMobilePhoneNumbers() const;
    void MaxMobilePhoneNumbers(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxWorkPhoneNumbers() const;
    void MaxWorkPhoneNumbers(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxOtherPhoneNumbers() const;
    void MaxOtherPhoneNumbers(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxPagerPhoneNumbers() const;
    void MaxPagerPhoneNumbers(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxBusinessFaxPhoneNumbers() const;
    void MaxBusinessFaxPhoneNumbers(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxHomeFaxPhoneNumbers() const;
    void MaxHomeFaxPhoneNumbers(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxCompanyPhoneNumbers() const;
    void MaxCompanyPhoneNumbers(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxAssistantPhoneNumbers() const;
    void MaxAssistantPhoneNumbers(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxRadioPhoneNumbers() const;
    void MaxRadioPhoneNumbers(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxPersonalEmailAddresses() const;
    void MaxPersonalEmailAddresses(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxWorkEmailAddresses() const;
    void MaxWorkEmailAddresses(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxOtherEmailAddresses() const;
    void MaxOtherEmailAddresses(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxHomeAddresses() const;
    void MaxHomeAddresses(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxWorkAddresses() const;
    void MaxWorkAddresses(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxOtherAddresses() const;
    void MaxOtherAddresses(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxBirthdayDates() const;
    void MaxBirthdayDates(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxAnniversaryDates() const;
    void MaxAnniversaryDates(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxOtherDates() const;
    void MaxOtherDates(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxOtherRelationships() const;
    void MaxOtherRelationships(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxSpouseRelationships() const;
    void MaxSpouseRelationships(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxPartnerRelationships() const;
    void MaxPartnerRelationships(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxSiblingRelationships() const;
    void MaxSiblingRelationships(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxParentRelationships() const;
    void MaxParentRelationships(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxChildRelationships() const;
    void MaxChildRelationships(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxJobInfo() const;
    void MaxJobInfo(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> MaxWebsites() const;
    void MaxWebsites(optional<int32_t> const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactListSyncConstraints> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactListSyncManager
{
    Windows::ApplicationModel::Contacts::ContactListSyncStatus Status() const;
    Windows::Foundation::DateTime LastSuccessfulSyncTime() const;
    Windows::Foundation::DateTime LastAttemptedSyncTime() const;
    Windows::Foundation::IAsyncOperation<bool> SyncAsync() const;
    event_token SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactListSyncManager, Windows::Foundation::IInspectable> const& handler) const;
    using SyncStatusChanged_revoker = event_revoker<Windows::ApplicationModel::Contacts::IContactListSyncManager>;
    SyncStatusChanged_revoker SyncStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactListSyncManager, Windows::Foundation::IInspectable> const& handler) const;
    void SyncStatusChanged(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactListSyncManager> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactListSyncManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactListSyncManager2
{
    void Status(Windows::ApplicationModel::Contacts::ContactListSyncStatus const& value) const;
    void LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const;
    void LastAttemptedSyncTime(Windows::Foundation::DateTime const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactListSyncManager2> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactListSyncManager2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactLocationField
{
    hstring UnstructuredAddress() const;
    hstring Street() const;
    hstring City() const;
    hstring Region() const;
    hstring Country() const;
    hstring PostalCode() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactLocationField> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactLocationField<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactLocationFieldFactory
{
    Windows::ApplicationModel::Contacts::ContactLocationField CreateLocation(param::hstring const& unstructuredAddress) const;
    Windows::ApplicationModel::Contacts::ContactLocationField CreateLocation(param::hstring const& unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) const;
    Windows::ApplicationModel::Contacts::ContactLocationField CreateLocation(param::hstring const& unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category, param::hstring const& street, param::hstring const& city, param::hstring const& region, param::hstring const& country, param::hstring const& postalCode) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactLocationFieldFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactLocationFieldFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactManagerForUser
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact, uint32_t maxBytes) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> ConvertVCardToContactAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& vCard) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> RequestStoreAsync(Windows::ApplicationModel::Contacts::ContactStoreAccessType const& accessType) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore> RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType const& accessType) const;
    Windows::ApplicationModel::Contacts::ContactNameOrder SystemDisplayNameOrder() const;
    void SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value) const;
    Windows::ApplicationModel::Contacts::ContactNameOrder SystemSortOrder() const;
    void SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value) const;
    Windows::System::User User() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerForUser> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerForUser<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactManagerForUser2
{
    void ShowFullContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::FullContactCardOptions const& fullContactCardOptions) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerForUser2> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerForUser2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactManagerStatics
{
    void ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection) const;
    void ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
    Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader ShowDelayLoadedContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactManagerStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> RequestStoreAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact, uint32_t maxBytes) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> ConvertVCardToContactAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& vCard) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> RequestStoreAsync(Windows::ApplicationModel::Contacts::ContactStoreAccessType const& accessType) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore> RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType const& accessType) const;
    bool IsShowContactCardSupported() const;
    void ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::ApplicationModel::Contacts::ContactCardOptions const& contactCardOptions) const;
    bool IsShowDelayLoadedContactCardSupported() const;
    Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader ShowDelayLoadedContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::ApplicationModel::Contacts::ContactCardOptions const& contactCardOptions) const;
    void ShowFullContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::FullContactCardOptions const& fullContactCardOptions) const;
    Windows::ApplicationModel::Contacts::ContactNameOrder SystemDisplayNameOrder() const;
    void SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value) const;
    Windows::ApplicationModel::Contacts::ContactNameOrder SystemSortOrder() const;
    void SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerStatics3> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactManagerStatics4
{
    Windows::ApplicationModel::Contacts::ContactManagerForUser GetForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerStatics4> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerStatics4<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactManagerStatics5
{
    Windows::Foundation::IAsyncOperation<bool> IsShowFullContactCardSupportedAsync() const;
    bool IncludeMiddleNameInSystemDisplayAndSort() const;
    void IncludeMiddleNameInSystemDisplayAndSort(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerStatics5> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerStatics5<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactMatchReason
{
    Windows::ApplicationModel::Contacts::ContactMatchReasonKind Field() const;
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> Segments() const;
    hstring Text() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactMatchReason> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactMatchReason<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactName
{
    hstring FirstName() const;
    void FirstName(param::hstring const& value) const;
    hstring LastName() const;
    void LastName(param::hstring const& value) const;
    hstring MiddleName() const;
    void MiddleName(param::hstring const& value) const;
    hstring YomiGivenName() const;
    void YomiGivenName(param::hstring const& value) const;
    hstring YomiFamilyName() const;
    void YomiFamilyName(param::hstring const& value) const;
    hstring HonorificNameSuffix() const;
    void HonorificNameSuffix(param::hstring const& value) const;
    hstring HonorificNamePrefix() const;
    void HonorificNamePrefix(param::hstring const& value) const;
    hstring DisplayName() const;
    hstring YomiDisplayName() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactName> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactName<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactPanel
{
    void ClosePanel() const;
    Windows::Foundation::IReference<Windows::UI::Color> HeaderColor() const;
    void HeaderColor(optional<Windows::UI::Color> const& value) const;
    event_token LaunchFullAppRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs> const& handler) const;
    using LaunchFullAppRequested_revoker = event_revoker<Windows::ApplicationModel::Contacts::IContactPanel>;
    LaunchFullAppRequested_revoker LaunchFullAppRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs> const& handler) const;
    void LaunchFullAppRequested(event_token const& token) const;
    event_token Closing(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs> const& handler) const;
    using Closing_revoker = event_revoker<Windows::ApplicationModel::Contacts::IContactPanel>;
    Closing_revoker Closing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs> const& handler) const;
    void Closing(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactPanel> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPanel<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactPanelClosingEventArgs
{
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPanelClosingEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactPanelLaunchFullAppRequestedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPanelLaunchFullAppRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactPhone
{
    hstring Number() const;
    void Number(param::hstring const& value) const;
    Windows::ApplicationModel::Contacts::ContactPhoneKind Kind() const;
    void Kind(Windows::ApplicationModel::Contacts::ContactPhoneKind const& value) const;
    hstring Description() const;
    void Description(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactPhone> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPhone<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactPicker
{
    hstring CommitButtonText() const;
    void CommitButtonText(param::hstring const& value) const;
    Windows::ApplicationModel::Contacts::ContactSelectionMode SelectionMode() const;
    void SelectionMode(Windows::ApplicationModel::Contacts::ContactSelectionMode const& value) const;
    Windows::Foundation::Collections::IVector<hstring> DesiredFields() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactInformation> PickSingleContactAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactInformation>> PickMultipleContactsAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactPicker> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPicker<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactPicker2
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactFieldType> DesiredFieldsWithContactFieldType() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> PickContactAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::Contact>> PickContactsAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactPicker2> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPicker2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactPicker3
{
    Windows::System::User User() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactPicker3> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPicker3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactPickerStatics
{
    Windows::ApplicationModel::Contacts::ContactPicker CreateForUser(Windows::System::User const& user) const;
    Windows::Foundation::IAsyncOperation<bool> IsSupportedAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactPickerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPickerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactQueryOptions
{
    Windows::ApplicationModel::Contacts::ContactQueryTextSearch TextSearch() const;
    Windows::Foundation::Collections::IVector<hstring> ContactListIds() const;
    bool IncludeContactsFromHiddenLists() const;
    void IncludeContactsFromHiddenLists(bool value) const;
    Windows::ApplicationModel::Contacts::ContactQueryDesiredFields DesiredFields() const;
    void DesiredFields(Windows::ApplicationModel::Contacts::ContactQueryDesiredFields const& value) const;
    Windows::ApplicationModel::Contacts::ContactAnnotationOperations DesiredOperations() const;
    void DesiredOperations(Windows::ApplicationModel::Contacts::ContactAnnotationOperations const& value) const;
    Windows::Foundation::Collections::IVector<hstring> AnnotationListIds() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactQueryOptions> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactQueryOptions<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactQueryOptionsFactory
{
    Windows::ApplicationModel::Contacts::ContactQueryOptions CreateWithText(param::hstring const& text) const;
    Windows::ApplicationModel::Contacts::ContactQueryOptions CreateWithTextAndFields(param::hstring const& text, Windows::ApplicationModel::Contacts::ContactQuerySearchFields const& fields) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactQueryOptionsFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactQueryTextSearch
{
    Windows::ApplicationModel::Contacts::ContactQuerySearchFields Fields() const;
    void Fields(Windows::ApplicationModel::Contacts::ContactQuerySearchFields const& value) const;
    hstring Text() const;
    void Text(param::hstring const& value) const;
    Windows::ApplicationModel::Contacts::ContactQuerySearchScope SearchScope() const;
    void SearchScope(Windows::ApplicationModel::Contacts::ContactQuerySearchScope const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactQueryTextSearch> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactQueryTextSearch<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactReader
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactBatch> ReadBatchAsync() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactMatchReason> GetMatchingPropertiesWithMatchReason(Windows::ApplicationModel::Contacts::Contact const& contact) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactReader> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactReader<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactSignificantOther
{
    hstring Name() const;
    void Name(param::hstring const& value) const;
    hstring Description() const;
    void Description(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactSignificantOther> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactSignificantOther<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactSignificantOther2
{
    Windows::ApplicationModel::Contacts::ContactRelationship Relationship() const;
    void Relationship(Windows::ApplicationModel::Contacts::ContactRelationship const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactSignificantOther2> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactSignificantOther2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactStore
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> FindContactsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> FindContactsAsync(param::hstring const& searchText) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> GetContactAsync(param::hstring const& contactId) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactStore> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactStore<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactStore2
{
    Windows::ApplicationModel::Contacts::ContactChangeTracker ChangeTracker() const;
    event_token ContactChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactStore, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const& value) const;
    using ContactChanged_revoker = event_revoker<Windows::ApplicationModel::Contacts::IContactStore2>;
    ContactChanged_revoker ContactChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactStore, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const& value) const;
    void ContactChanged(event_token const& value) const;
    Windows::ApplicationModel::Contacts::AggregateContactManager AggregateContactManager() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>> FindContactListsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> GetContactListAsync(param::hstring const& contactListId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> CreateContactListAsync(param::hstring const& displayName) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> GetMeContactAsync() const;
    Windows::ApplicationModel::Contacts::ContactReader GetContactReader() const;
    Windows::ApplicationModel::Contacts::ContactReader GetContactReader(Windows::ApplicationModel::Contacts::ContactQueryOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> CreateContactListAsync(param::hstring const& displayName, param::hstring const& userDataAccountId) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactStore2> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactStore2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactStoreNotificationTriggerDetails
{
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactStoreNotificationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactWebsite
{
    Windows::Foundation::Uri Uri() const;
    void Uri(Windows::Foundation::Uri const& value) const;
    hstring Description() const;
    void Description(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactWebsite> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactWebsite<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IContactWebsite2
{
    hstring RawValue() const;
    void RawValue(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IContactWebsite2> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactWebsite2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IFullContactCardOptions
{
    Windows::UI::ViewManagement::ViewSizePreference DesiredRemainingView() const;
    void DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IFullContactCardOptions> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IFullContactCardOptions<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IKnownContactFieldStatics
{
    [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] hstring Email() const;
    [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] hstring PhoneNumber() const;
    [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] hstring Location() const;
    [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] hstring InstantMessage() const;
    [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] Windows::ApplicationModel::Contacts::ContactFieldType ConvertNameToType(param::hstring const& name) const;
    [[deprecated("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")]] hstring ConvertTypeToName(Windows::ApplicationModel::Contacts::ContactFieldType const& type) const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IKnownContactFieldStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IKnownContactFieldStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IPinnedContactIdsQueryResult
{
    Windows::Foundation::Collections::IVector<hstring> ContactIds() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IPinnedContactIdsQueryResult<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IPinnedContactManager
{
    Windows::System::User User() const;
    bool IsPinSurfaceSupported(Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const;
    bool IsContactPinned(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const;
    Windows::Foundation::IAsyncOperation<bool> RequestPinContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const;
    Windows::Foundation::IAsyncOperation<bool> RequestPinContactsAsync(param::async_iterable<Windows::ApplicationModel::Contacts::Contact> const& contacts, Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const;
    Windows::Foundation::IAsyncOperation<bool> RequestUnpinContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const;
    void SignalContactActivity(Windows::ApplicationModel::Contacts::Contact const& contact) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::PinnedContactIdsQueryResult> GetPinnedContactIdsAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IPinnedContactManager> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IPinnedContactManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Contacts_IPinnedContactManagerStatics
{
    Windows::ApplicationModel::Contacts::PinnedContactManager GetDefault() const;
    Windows::ApplicationModel::Contacts::PinnedContactManager GetForUser(Windows::System::User const& user) const;
    bool IsSupported() const;
};
template <> struct consume<Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IPinnedContactManagerStatics<D>; };

template <> struct abi<Windows::ApplicationModel::Contacts::IAggregateContactManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindRawContactsAsync(::IUnknown* contact, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryLinkContactsAsync(::IUnknown* primaryContact, ::IUnknown* secondaryContact, ::IUnknown** contact) = 0;
    virtual HRESULT __stdcall UnlinkRawContactAsync(::IUnknown* contact, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall TrySetPreferredSourceForPictureAsync(::IUnknown* aggregateContact, ::IUnknown* rawContact, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IAggregateContactManager2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetRemoteIdentificationInformationAsync(HSTRING contactListId, HSTRING remoteSourceId, HSTRING accountId, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContact>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Name(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Fields(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContact2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Id(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Notes(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Notes(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Phones(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Emails(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Addresses(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ConnectedServiceAccounts(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ImportantDates(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DataSuppliers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_JobInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SignificantOthers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Websites(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ProviderProperties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContact3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContactListId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayPictureUserUpdateTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall put_DisplayPictureUserUpdateTime(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall get_IsMe(bool* value) = 0;
    virtual HRESULT __stdcall get_AggregateId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RemoteId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_RemoteId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_RingToneToken(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_RingToneToken(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsDisplayPictureManuallySet(bool* value) = 0;
    virtual HRESULT __stdcall get_LargeDisplayPicture(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SmallDisplayPicture(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SourceDisplayPicture(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SourceDisplayPicture(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_TextToneToken(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TextToneToken(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsAggregate(bool* value) = 0;
    virtual HRESULT __stdcall get_FullName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayNameOverride(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DisplayNameOverride(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Nickname(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Nickname(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SortName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactAddress>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StreetAddress(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_StreetAddress(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Locality(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Locality(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Region(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Region(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Country(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Country(HSTRING value) = 0;
    virtual HRESULT __stdcall get_PostalCode(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PostalCode(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactAddressKind>* value) = 0;
    virtual HRESULT __stdcall put_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactAddressKind> value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Description(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactAnnotation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AnnotationListId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ContactId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ContactId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_RemoteId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_RemoteId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SupportedOperations(abi_t<Windows::ApplicationModel::Contacts::ContactAnnotationOperations>* value) = 0;
    virtual HRESULT __stdcall put_SupportedOperations(abi_t<Windows::ApplicationModel::Contacts::ContactAnnotationOperations> value) = 0;
    virtual HRESULT __stdcall get_IsDisabled(bool* value) = 0;
    virtual HRESULT __stdcall get_ProviderProperties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactAnnotation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContactListId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ContactListId(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactAnnotationList>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ProviderPackageFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_UserDataAccountId(HSTRING* value) = 0;
    virtual HRESULT __stdcall DeleteAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall TrySaveAnnotationAsync(::IUnknown* annotation, ::IUnknown** ppResult) = 0;
    virtual HRESULT __stdcall GetAnnotationAsync(HSTRING annotationId, ::IUnknown** annotation) = 0;
    virtual HRESULT __stdcall FindAnnotationsByRemoteIdAsync(HSTRING remoteId, ::IUnknown** annotations) = 0;
    virtual HRESULT __stdcall FindAnnotationsAsync(::IUnknown** annotations) = 0;
    virtual HRESULT __stdcall DeleteAnnotationAsync(::IUnknown* annotation, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactAnnotationStore>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindContactIdsByEmailAsync(HSTRING emailAddress, ::IUnknown** contactIds) = 0;
    virtual HRESULT __stdcall FindContactIdsByPhoneNumberAsync(HSTRING phoneNumber, ::IUnknown** contactIds) = 0;
    virtual HRESULT __stdcall FindAnnotationsForContactAsync(::IUnknown* contact, ::IUnknown** annotations) = 0;
    virtual HRESULT __stdcall DisableAnnotationAsync(::IUnknown* annotation, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateAnnotationListAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateAnnotationListInAccountAsync(HSTRING userDataAccountId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetAnnotationListAsync(HSTRING annotationListId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall FindAnnotationListsAsync(::IUnknown** lists) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactAnnotationStore2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindAnnotationsForContactListAsync(HSTRING contactListId, ::IUnknown** annotations) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactBatch>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Contacts(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Contacts::ContactBatchStatus>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetData(::IUnknown* contact) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactCardOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HeaderKind(abi_t<Windows::ApplicationModel::Contacts::ContactCardHeaderKind>* value) = 0;
    virtual HRESULT __stdcall put_HeaderKind(abi_t<Windows::ApplicationModel::Contacts::ContactCardHeaderKind> value) = 0;
    virtual HRESULT __stdcall get_InitialTabKind(abi_t<Windows::ApplicationModel::Contacts::ContactCardTabKind>* value) = 0;
    virtual HRESULT __stdcall put_InitialTabKind(abi_t<Windows::ApplicationModel::Contacts::ContactCardTabKind> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactCardOptions2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServerSearchContactListIds(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactChange>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeType(abi_t<Windows::ApplicationModel::Contacts::ContactChangeType>* value) = 0;
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactChangeReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AcceptChanges() = 0;
    virtual HRESULT __stdcall AcceptChangesThrough(::IUnknown* lastChangeToAccept) = 0;
    virtual HRESULT __stdcall ReadBatchAsync(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactChangeTracker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Enable() = 0;
    virtual HRESULT __stdcall GetChangeReader(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Reset() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactChangedDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Id(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ServiceName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ServiceName(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactDate>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Day(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Day(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Month(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Month(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Year(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Year(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactDateKind>* value) = 0;
    virtual HRESULT __stdcall put_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactDateKind> value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Description(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactEmail>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Address(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Address(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactEmailKind>* value) = 0;
    virtual HRESULT __stdcall put_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactEmailKind> value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Description(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactField>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::ApplicationModel::Contacts::ContactFieldType>* value) = 0;
    virtual HRESULT __stdcall get_Category(abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory>* value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Value(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactFieldFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateField_Default(HSTRING value, abi_t<Windows::ApplicationModel::Contacts::ContactFieldType> type, ::IUnknown** field) = 0;
    virtual HRESULT __stdcall CreateField_Category(HSTRING value, abi_t<Windows::ApplicationModel::Contacts::ContactFieldType> type, abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory> category, ::IUnknown** field) = 0;
    virtual HRESULT __stdcall CreateField_Custom(HSTRING name, HSTRING value, abi_t<Windows::ApplicationModel::Contacts::ContactFieldType> type, abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory> category, ::IUnknown** field) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactGroup>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetThumbnailAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_Emails(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PhoneNumbers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Locations(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InstantMessages(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CustomFields(::IUnknown** value) = 0;
    virtual HRESULT __stdcall QueryCustomFields(HSTRING customName, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactInstantMessageField>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UserName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Service(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LaunchUri(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstantMessage_Default(HSTRING userName, ::IUnknown** field) = 0;
    virtual HRESULT __stdcall CreateInstantMessage_Category(HSTRING userName, abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory> category, ::IUnknown** field) = 0;
    virtual HRESULT __stdcall CreateInstantMessage_All(HSTRING userName, abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory> category, HSTRING service, HSTRING displayText, ::IUnknown* verb, ::IUnknown** field) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactJobInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CompanyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_CompanyName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_CompanyYomiName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_CompanyYomiName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Department(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Department(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Manager(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Manager(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Office(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Office(HSTRING value) = 0;
    virtual HRESULT __stdcall get_CompanyAddress(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_CompanyAddress(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Description(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Call(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Message(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Map(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Post(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_VideoCall(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactList>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SourceDisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsHidden(bool* value) = 0;
    virtual HRESULT __stdcall put_IsHidden(bool value) = 0;
    virtual HRESULT __stdcall get_OtherAppReadAccess(abi_t<Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess>* value) = 0;
    virtual HRESULT __stdcall put_OtherAppReadAccess(abi_t<Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess> value) = 0;
    virtual HRESULT __stdcall get_OtherAppWriteAccess(abi_t<Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess>* value) = 0;
    virtual HRESULT __stdcall put_OtherAppWriteAccess(abi_t<Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess> value) = 0;
    virtual HRESULT __stdcall get_ChangeTracker(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SyncManager(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportsServerSearch(bool* value) = 0;
    virtual HRESULT __stdcall get_UserDataAccountId(HSTRING* value) = 0;
    virtual HRESULT __stdcall add_ContactChanged(::IUnknown* value, abi_t<event_token>* returnValue) = 0;
    virtual HRESULT __stdcall remove_ContactChanged(abi_t<event_token> value) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall DeleteAsync(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetContactFromRemoteIdAsync(HSTRING remoteId, ::IUnknown** contact) = 0;
    virtual HRESULT __stdcall GetMeContactAsync(::IUnknown** meContact) = 0;
    virtual HRESULT __stdcall GetContactReader(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetContactReaderWithOptions(::IUnknown* options, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall SaveContactAsync(::IUnknown* contact, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall DeleteContactAsync(::IUnknown* contact, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetContactAsync(HSTRING contactId, ::IUnknown** contacts) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactList2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RegisterSyncManagerAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall put_SupportsServerSearch(bool value) = 0;
    virtual HRESULT __stdcall get_SyncConstraints(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactListSyncConstraints>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanSyncDescriptions(bool* value) = 0;
    virtual HRESULT __stdcall put_CanSyncDescriptions(bool value) = 0;
    virtual HRESULT __stdcall get_MaxHomePhoneNumbers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxHomePhoneNumbers(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxMobilePhoneNumbers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxMobilePhoneNumbers(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxWorkPhoneNumbers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxWorkPhoneNumbers(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxOtherPhoneNumbers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxOtherPhoneNumbers(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxPagerPhoneNumbers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxPagerPhoneNumbers(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxBusinessFaxPhoneNumbers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxBusinessFaxPhoneNumbers(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxHomeFaxPhoneNumbers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxHomeFaxPhoneNumbers(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxCompanyPhoneNumbers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxCompanyPhoneNumbers(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxAssistantPhoneNumbers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxAssistantPhoneNumbers(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxRadioPhoneNumbers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxRadioPhoneNumbers(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxPersonalEmailAddresses(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxPersonalEmailAddresses(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxWorkEmailAddresses(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxWorkEmailAddresses(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxOtherEmailAddresses(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxOtherEmailAddresses(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxHomeAddresses(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxHomeAddresses(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxWorkAddresses(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxWorkAddresses(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxOtherAddresses(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxOtherAddresses(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxBirthdayDates(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxBirthdayDates(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxAnniversaryDates(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxAnniversaryDates(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxOtherDates(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxOtherDates(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxOtherRelationships(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxOtherRelationships(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxSpouseRelationships(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxSpouseRelationships(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxPartnerRelationships(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxPartnerRelationships(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxSiblingRelationships(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxSiblingRelationships(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxParentRelationships(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxParentRelationships(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxChildRelationships(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxChildRelationships(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxJobInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxJobInfo(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxWebsites(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MaxWebsites(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactListSyncManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Contacts::ContactListSyncStatus>* value) = 0;
    virtual HRESULT __stdcall get_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_LastAttemptedSyncTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall SyncAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_SyncStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SyncStatusChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactListSyncManager2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Status(abi_t<Windows::ApplicationModel::Contacts::ContactListSyncStatus> value) = 0;
    virtual HRESULT __stdcall put_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall put_LastAttemptedSyncTime(abi_t<Windows::Foundation::DateTime> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactLocationField>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UnstructuredAddress(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Street(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_City(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Region(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Country(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PostalCode(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateLocation_Default(HSTRING unstructuredAddress, ::IUnknown** field) = 0;
    virtual HRESULT __stdcall CreateLocation_Category(HSTRING unstructuredAddress, abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory> category, ::IUnknown** field) = 0;
    virtual HRESULT __stdcall CreateLocation_All(HSTRING unstructuredAddress, abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory> category, HSTRING street, HSTRING city, HSTRING region, HSTRING country, HSTRING postalCode, ::IUnknown** field) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerForUser>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ConvertContactToVCardAsync(::IUnknown* contact, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ConvertContactToVCardAsyncWithMaxBytes(::IUnknown* contact, uint32_t maxBytes, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ConvertVCardToContactAsync(::IUnknown* vCard, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestStoreAsync(abi_t<Windows::ApplicationModel::Contacts::ContactStoreAccessType> accessType, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAnnotationStoreAsync(abi_t<Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType> accessType, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_SystemDisplayNameOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder>* value) = 0;
    virtual HRESULT __stdcall put_SystemDisplayNameOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder> value) = 0;
    virtual HRESULT __stdcall get_SystemSortOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder>* value) = 0;
    virtual HRESULT __stdcall put_SystemSortOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder> value) = 0;
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerForUser2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowFullContactCard(::IUnknown* contact, ::IUnknown* fullContactCardOptions) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowContactCard(::IUnknown* contact, abi_t<Windows::Foundation::Rect> selection) = 0;
    virtual HRESULT __stdcall ShowContactCardWithPlacement(::IUnknown* contact, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement) = 0;
    virtual HRESULT __stdcall ShowDelayLoadedContactCard(::IUnknown* contact, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown** dataLoader) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestStoreAsync(::IUnknown** store) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ConvertContactToVCardAsync(::IUnknown* contact, ::IUnknown** vCard) = 0;
    virtual HRESULT __stdcall ConvertContactToVCardAsyncWithMaxBytes(::IUnknown* contact, uint32_t maxBytes, ::IUnknown** vCard) = 0;
    virtual HRESULT __stdcall ConvertVCardToContactAsync(::IUnknown* vCard, ::IUnknown** contact) = 0;
    virtual HRESULT __stdcall RequestStoreAsyncWithAccessType(abi_t<Windows::ApplicationModel::Contacts::ContactStoreAccessType> accessType, ::IUnknown** store) = 0;
    virtual HRESULT __stdcall RequestAnnotationStoreAsync(abi_t<Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType> accessType, ::IUnknown** store) = 0;
    virtual HRESULT __stdcall IsShowContactCardSupported(bool* result) = 0;
    virtual HRESULT __stdcall ShowContactCardWithOptions(::IUnknown* contact, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown* contactCardOptions) = 0;
    virtual HRESULT __stdcall IsShowDelayLoadedContactCardSupported(bool* result) = 0;
    virtual HRESULT __stdcall ShowDelayLoadedContactCardWithOptions(::IUnknown* contact, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown* contactCardOptions, ::IUnknown** dataLoader) = 0;
    virtual HRESULT __stdcall ShowFullContactCard(::IUnknown* contact, ::IUnknown* fullContactCardOptions) = 0;
    virtual HRESULT __stdcall get_SystemDisplayNameOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder>* value) = 0;
    virtual HRESULT __stdcall put_SystemDisplayNameOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder> value) = 0;
    virtual HRESULT __stdcall get_SystemSortOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder>* value) = 0;
    virtual HRESULT __stdcall put_SystemSortOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerStatics5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsShowFullContactCardSupportedAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_IncludeMiddleNameInSystemDisplayAndSort(bool* value) = 0;
    virtual HRESULT __stdcall put_IncludeMiddleNameInSystemDisplayAndSort(bool value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactMatchReason>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Field(abi_t<Windows::ApplicationModel::Contacts::ContactMatchReasonKind>* value) = 0;
    virtual HRESULT __stdcall get_Segments(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactName>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FirstName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_FirstName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_LastName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_LastName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_MiddleName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_MiddleName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_YomiGivenName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_YomiGivenName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_YomiFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_YomiFamilyName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_HonorificNameSuffix(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_HonorificNameSuffix(HSTRING value) = 0;
    virtual HRESULT __stdcall get_HonorificNamePrefix(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_HonorificNamePrefix(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_YomiDisplayName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactPanel>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ClosePanel() = 0;
    virtual HRESULT __stdcall get_HeaderColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_HeaderColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall add_LaunchFullAppRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_LaunchFullAppRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Closing(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Closing(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeferral(::IUnknown** deferral) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactPhone>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Number(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Number(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactPhoneKind>* value) = 0;
    virtual HRESULT __stdcall put_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactPhoneKind> value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Description(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactPicker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CommitButtonText(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_CommitButtonText(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SelectionMode(abi_t<Windows::ApplicationModel::Contacts::ContactSelectionMode>* value) = 0;
    virtual HRESULT __stdcall put_SelectionMode(abi_t<Windows::ApplicationModel::Contacts::ContactSelectionMode> value) = 0;
    virtual HRESULT __stdcall get_DesiredFields(::IUnknown** value) = 0;
    virtual HRESULT __stdcall PickSingleContactAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall PickMultipleContactsAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactPicker2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DesiredFieldsWithContactFieldType(::IUnknown** value) = 0;
    virtual HRESULT __stdcall PickContactAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall PickContactsAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactPicker3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactPickerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateForUser(::IUnknown* user, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall IsSupportedAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactQueryOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TextSearch(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ContactListIds(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IncludeContactsFromHiddenLists(bool* value) = 0;
    virtual HRESULT __stdcall put_IncludeContactsFromHiddenLists(bool value) = 0;
    virtual HRESULT __stdcall get_DesiredFields(abi_t<Windows::ApplicationModel::Contacts::ContactQueryDesiredFields>* value) = 0;
    virtual HRESULT __stdcall put_DesiredFields(abi_t<Windows::ApplicationModel::Contacts::ContactQueryDesiredFields> value) = 0;
    virtual HRESULT __stdcall get_DesiredOperations(abi_t<Windows::ApplicationModel::Contacts::ContactAnnotationOperations>* value) = 0;
    virtual HRESULT __stdcall put_DesiredOperations(abi_t<Windows::ApplicationModel::Contacts::ContactAnnotationOperations> value) = 0;
    virtual HRESULT __stdcall get_AnnotationListIds(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithText(HSTRING text, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithTextAndFields(HSTRING text, abi_t<Windows::ApplicationModel::Contacts::ContactQuerySearchFields> fields, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactQueryTextSearch>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Fields(abi_t<Windows::ApplicationModel::Contacts::ContactQuerySearchFields>* value) = 0;
    virtual HRESULT __stdcall put_Fields(abi_t<Windows::ApplicationModel::Contacts::ContactQuerySearchFields> value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Text(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SearchScope(abi_t<Windows::ApplicationModel::Contacts::ContactQuerySearchScope>* value) = 0;
    virtual HRESULT __stdcall put_SearchScope(abi_t<Windows::ApplicationModel::Contacts::ContactQuerySearchScope> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReadBatchAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetMatchingPropertiesWithMatchReason(::IUnknown* contact, ::IUnknown** ppRetVal) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactSignificantOther>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Name(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Description(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactSignificantOther2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Relationship(abi_t<Windows::ApplicationModel::Contacts::ContactRelationship>* value) = 0;
    virtual HRESULT __stdcall put_Relationship(abi_t<Windows::ApplicationModel::Contacts::ContactRelationship> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactStore>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindContactsAsync(::IUnknown** contacts) = 0;
    virtual HRESULT __stdcall FindContactsWithSearchTextAsync(HSTRING searchText, ::IUnknown** contacts) = 0;
    virtual HRESULT __stdcall GetContactAsync(HSTRING contactId, ::IUnknown** contacts) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactStore2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeTracker(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_ContactChanged(::IUnknown* value, abi_t<event_token>* returnValue) = 0;
    virtual HRESULT __stdcall remove_ContactChanged(abi_t<event_token> value) = 0;
    virtual HRESULT __stdcall get_AggregateContactManager(::IUnknown** value) = 0;
    virtual HRESULT __stdcall FindContactListsAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetContactListAsync(HSTRING contactListId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateContactListAsync(HSTRING displayName, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetMeContactAsync(::IUnknown** meContact) = 0;
    virtual HRESULT __stdcall GetContactReader(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetContactReaderWithOptions(::IUnknown* options, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateContactListInAccountAsync(HSTRING displayName, HSTRING userDataAccountId, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactWebsite>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Uri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Description(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IContactWebsite2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RawValue(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_RawValue(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IFullContactCardOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DesiredRemainingView(abi_t<Windows::UI::ViewManagement::ViewSizePreference>* value) = 0;
    virtual HRESULT __stdcall put_DesiredRemainingView(abi_t<Windows::UI::ViewManagement::ViewSizePreference> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Email(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PhoneNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Location(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_InstantMessage(HSTRING* value) = 0;
    virtual HRESULT __stdcall ConvertNameToType(HSTRING name, abi_t<Windows::ApplicationModel::Contacts::ContactFieldType>* type) = 0;
    virtual HRESULT __stdcall ConvertTypeToName(abi_t<Windows::ApplicationModel::Contacts::ContactFieldType> type, HSTRING* name) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContactIds(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IPinnedContactManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_User(::IUnknown** user) = 0;
    virtual HRESULT __stdcall IsPinSurfaceSupported(abi_t<Windows::ApplicationModel::Contacts::PinnedContactSurface> surface, bool* result) = 0;
    virtual HRESULT __stdcall IsContactPinned(::IUnknown* contact, abi_t<Windows::ApplicationModel::Contacts::PinnedContactSurface> surface, bool* result) = 0;
    virtual HRESULT __stdcall RequestPinContactAsync(::IUnknown* contact, abi_t<Windows::ApplicationModel::Contacts::PinnedContactSurface> surface, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestPinContactsAsync(::IUnknown* contacts, abi_t<Windows::ApplicationModel::Contacts::PinnedContactSurface> surface, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestUnpinContactAsync(::IUnknown* contact, abi_t<Windows::ApplicationModel::Contacts::PinnedContactSurface> surface, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SignalContactActivity(::IUnknown* contact) = 0;
    virtual HRESULT __stdcall GetPinnedContactIdsAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall IsSupported(bool* result) = 0;
};};

}
