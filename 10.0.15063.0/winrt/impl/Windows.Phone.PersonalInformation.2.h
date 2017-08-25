// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Phone.PersonalInformation.1.h"

WINRT_EXPORT namespace winrt::Windows::Phone::PersonalInformation {

struct WINRT_EBO ContactAddress :
    Windows::Phone::PersonalInformation::IContactAddress
{
    ContactAddress(std::nullptr_t) noexcept {}
    ContactAddress();
};

struct WINRT_EBO ContactChangeRecord :
    Windows::Phone::PersonalInformation::IContactChangeRecord
{
    ContactChangeRecord(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactInformation :
    Windows::Phone::PersonalInformation::IContactInformation
{
    ContactInformation(std::nullptr_t) noexcept {}
    ContactInformation();
    static Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactInformation> ParseVcardAsync(Windows::Storage::Streams::IInputStream const& vcard);
};

struct WINRT_EBO ContactQueryOptions :
    Windows::Phone::PersonalInformation::IContactQueryOptions
{
    ContactQueryOptions(std::nullptr_t) noexcept {}
    ContactQueryOptions();
};

struct WINRT_EBO ContactQueryResult :
    Windows::Phone::PersonalInformation::IContactQueryResult
{
    ContactQueryResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactStore :
    Windows::Phone::PersonalInformation::IContactStore,
    impl::require<ContactStore, Windows::Phone::PersonalInformation::IContactStore2>
{
    ContactStore(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> CreateOrOpenAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> CreateOrOpenAsync(Windows::Phone::PersonalInformation::ContactStoreSystemAccessMode const& access, Windows::Phone::PersonalInformation::ContactStoreApplicationAccessMode const& sharing);
};

struct KnownContactProperties
{
    KnownContactProperties() = delete;
    static hstring DisplayName();
    static hstring FamilyName();
    static hstring GivenName();
    static hstring HonorificPrefix();
    static hstring HonorificSuffix();
    static hstring AdditionalName();
    static hstring Address();
    static hstring OtherAddress();
    static hstring Email();
    static hstring WorkAddress();
    static hstring WorkTelephone();
    static hstring JobTitle();
    static hstring Birthdate();
    static hstring Anniversary();
    static hstring Telephone();
    static hstring MobileTelephone();
    static hstring Url();
    static hstring Notes();
    static hstring WorkFax();
    static hstring Children();
    static hstring SignificantOther();
    static hstring CompanyName();
    static hstring CompanyTelephone();
    static hstring HomeFax();
    static hstring AlternateTelephone();
    static hstring Manager();
    static hstring Nickname();
    static hstring OfficeLocation();
    static hstring WorkEmail();
    static hstring YomiGivenName();
    static hstring YomiFamilyName();
    static hstring YomiCompanyName();
    static hstring OtherEmail();
    static hstring AlternateMobileTelephone();
    static hstring AlternateWorkTelephone();
};

struct WINRT_EBO StoredContact :
    Windows::Phone::PersonalInformation::IStoredContact,
    impl::require<StoredContact, Windows::Phone::PersonalInformation::IContactInformation2>
{
    StoredContact(std::nullptr_t) noexcept {}
    StoredContact(Windows::Phone::PersonalInformation::ContactStore const& store);
    StoredContact(Windows::Phone::PersonalInformation::ContactStore const& store, Windows::Phone::PersonalInformation::ContactInformation const& contact);
};

}
