// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Contacts {

struct IAggregateContactManager;
struct IAggregateContactManager2;
struct IContact;
struct IContact2;
struct IContact3;
struct IContactAddress;
struct IContactAnnotation;
struct IContactAnnotationList;
struct IContactAnnotationStore;
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
struct IContactManagerStatics;
struct IContactManagerStatics2;
struct IContactManagerStatics3;
struct IContactManagerStatics4;
struct IContactMatchReason;
struct IContactName;
struct IContactPhone;
struct IContactPicker;
struct IContactPicker2;
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
struct ContactInformation;
struct ContactInstantMessageField;
struct ContactJobInfo;
struct ContactList;
struct ContactListSyncConstraints;
struct ContactListSyncManager;
struct ContactLocationField;
struct ContactManagerForUser;
struct ContactMatchReason;
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

}

namespace Windows::ApplicationModel::Contacts {

struct IAggregateContactManager;
struct IAggregateContactManager2;
struct IContact;
struct IContact2;
struct IContact3;
struct IContactAddress;
struct IContactAnnotation;
struct IContactAnnotationList;
struct IContactAnnotationStore;
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
struct IContactManagerStatics;
struct IContactManagerStatics2;
struct IContactManagerStatics3;
struct IContactManagerStatics4;
struct IContactMatchReason;
struct IContactName;
struct IContactPhone;
struct IContactPicker;
struct IContactPicker2;
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

}

namespace Windows::ApplicationModel::Contacts {

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
    Location = 2,
    InstantMessage = 3,
    Custom = 4,
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

}

}
