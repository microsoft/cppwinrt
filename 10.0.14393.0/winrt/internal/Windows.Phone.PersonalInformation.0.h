// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Phone::PersonalInformation {

struct IContactAddress;
struct IContactChangeRecord;
struct IContactInformation;
struct IContactInformation2;
struct IContactInformationStatics;
struct IContactQueryOptions;
struct IContactQueryResult;
struct IContactStore;
struct IContactStore2;
struct IContactStoreStatics;
struct IKnownContactPropertiesStatics;
struct IStoredContact;
struct IStoredContactFactory;
struct ContactAddress;
struct ContactChangeRecord;
struct ContactInformation;
struct ContactQueryOptions;
struct ContactQueryResult;
struct ContactStore;
struct StoredContact;

}

namespace Windows::Phone::PersonalInformation {

struct IContactAddress;
struct IContactChangeRecord;
struct IContactInformation;
struct IContactInformation2;
struct IContactInformationStatics;
struct IContactQueryOptions;
struct IContactQueryResult;
struct IContactStore;
struct IContactStore2;
struct IContactStoreStatics;
struct IKnownContactPropertiesStatics;
struct IStoredContact;
struct IStoredContactFactory;
struct ContactAddress;
struct ContactChangeRecord;
struct ContactInformation;
struct ContactQueryOptions;
struct ContactQueryResult;
struct ContactStore;
struct KnownContactProperties;
struct StoredContact;

}

namespace Windows::Phone::PersonalInformation {

enum class ContactChangeType
{
    Created = 0,
    Modified = 1,
    Deleted = 2,
};

enum class ContactQueryResultOrdering
{
    SystemDefault = 0,
    GivenNameFamilyName = 1,
    FamilyNameGivenName = 2,
};

enum class ContactStoreApplicationAccessMode
{
    LimitedReadOnly = 0,
    ReadOnly = 1,
};

enum class ContactStoreSystemAccessMode
{
    ReadOnly = 0,
    ReadWrite = 1,
};

enum class VCardFormat
{
    Version2_1 = 0,
    Version3 = 1,
};

}

}
