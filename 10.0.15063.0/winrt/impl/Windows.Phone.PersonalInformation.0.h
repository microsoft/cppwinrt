// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IInputStream;
struct IRandomAccessStream;
struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::Phone::PersonalInformation {

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

namespace winrt::impl {

template <> struct category<Windows::Phone::PersonalInformation::IContactAddress>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::IContactChangeRecord>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::IContactInformation>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::IContactInformation2>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::IContactInformationStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::IContactQueryOptions>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::IContactQueryResult>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::IContactStore>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::IContactStore2>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::IContactStoreStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::IStoredContact>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::IStoredContactFactory>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::ContactAddress>{ using type = class_category; };
template <> struct category<Windows::Phone::PersonalInformation::ContactChangeRecord>{ using type = class_category; };
template <> struct category<Windows::Phone::PersonalInformation::ContactInformation>{ using type = class_category; };
template <> struct category<Windows::Phone::PersonalInformation::ContactQueryOptions>{ using type = class_category; };
template <> struct category<Windows::Phone::PersonalInformation::ContactQueryResult>{ using type = class_category; };
template <> struct category<Windows::Phone::PersonalInformation::ContactStore>{ using type = class_category; };
template <> struct category<Windows::Phone::PersonalInformation::KnownContactProperties>{ using type = class_category; };
template <> struct category<Windows::Phone::PersonalInformation::StoredContact>{ using type = class_category; };
template <> struct category<Windows::Phone::PersonalInformation::ContactChangeType>{ using type = enum_category; };
template <> struct category<Windows::Phone::PersonalInformation::ContactQueryResultOrdering>{ using type = enum_category; };
template <> struct category<Windows::Phone::PersonalInformation::ContactStoreApplicationAccessMode>{ using type = enum_category; };
template <> struct category<Windows::Phone::PersonalInformation::ContactStoreSystemAccessMode>{ using type = enum_category; };
template <> struct category<Windows::Phone::PersonalInformation::VCardFormat>{ using type = enum_category; };
template <> struct name<Windows::Phone::PersonalInformation::IContactAddress>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.IContactAddress" }; };
template <> struct name<Windows::Phone::PersonalInformation::IContactChangeRecord>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.IContactChangeRecord" }; };
template <> struct name<Windows::Phone::PersonalInformation::IContactInformation>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.IContactInformation" }; };
template <> struct name<Windows::Phone::PersonalInformation::IContactInformation2>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.IContactInformation2" }; };
template <> struct name<Windows::Phone::PersonalInformation::IContactInformationStatics>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.IContactInformationStatics" }; };
template <> struct name<Windows::Phone::PersonalInformation::IContactQueryOptions>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.IContactQueryOptions" }; };
template <> struct name<Windows::Phone::PersonalInformation::IContactQueryResult>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.IContactQueryResult" }; };
template <> struct name<Windows::Phone::PersonalInformation::IContactStore>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.IContactStore" }; };
template <> struct name<Windows::Phone::PersonalInformation::IContactStore2>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.IContactStore2" }; };
template <> struct name<Windows::Phone::PersonalInformation::IContactStoreStatics>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.IContactStoreStatics" }; };
template <> struct name<Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.IKnownContactPropertiesStatics" }; };
template <> struct name<Windows::Phone::PersonalInformation::IStoredContact>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.IStoredContact" }; };
template <> struct name<Windows::Phone::PersonalInformation::IStoredContactFactory>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.IStoredContactFactory" }; };
template <> struct name<Windows::Phone::PersonalInformation::ContactAddress>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.ContactAddress" }; };
template <> struct name<Windows::Phone::PersonalInformation::ContactChangeRecord>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.ContactChangeRecord" }; };
template <> struct name<Windows::Phone::PersonalInformation::ContactInformation>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.ContactInformation" }; };
template <> struct name<Windows::Phone::PersonalInformation::ContactQueryOptions>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.ContactQueryOptions" }; };
template <> struct name<Windows::Phone::PersonalInformation::ContactQueryResult>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.ContactQueryResult" }; };
template <> struct name<Windows::Phone::PersonalInformation::ContactStore>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.ContactStore" }; };
template <> struct name<Windows::Phone::PersonalInformation::KnownContactProperties>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.KnownContactProperties" }; };
template <> struct name<Windows::Phone::PersonalInformation::StoredContact>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.StoredContact" }; };
template <> struct name<Windows::Phone::PersonalInformation::ContactChangeType>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.ContactChangeType" }; };
template <> struct name<Windows::Phone::PersonalInformation::ContactQueryResultOrdering>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.ContactQueryResultOrdering" }; };
template <> struct name<Windows::Phone::PersonalInformation::ContactStoreApplicationAccessMode>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.ContactStoreApplicationAccessMode" }; };
template <> struct name<Windows::Phone::PersonalInformation::ContactStoreSystemAccessMode>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.ContactStoreSystemAccessMode" }; };
template <> struct name<Windows::Phone::PersonalInformation::VCardFormat>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.VCardFormat" }; };
template <> struct guid<Windows::Phone::PersonalInformation::IContactAddress>{ static constexpr GUID value{ 0x5F24F927,0x94A9,0x44A2,{ 0xA1,0x55,0x2D,0x0B,0x37,0xD1,0xDC,0xCD } }; };
template <> struct guid<Windows::Phone::PersonalInformation::IContactChangeRecord>{ static constexpr GUID value{ 0xB9D3F78F,0x513B,0x4742,{ 0xBE,0x00,0xCC,0x5C,0x5C,0x23,0x6B,0x04 } }; };
template <> struct guid<Windows::Phone::PersonalInformation::IContactInformation>{ static constexpr GUID value{ 0xE2B51FFC,0xE792,0x4AB7,{ 0xB1,0x5B,0xF2,0xE0,0x78,0x66,0x4D,0xEA } }; };
template <> struct guid<Windows::Phone::PersonalInformation::IContactInformation2>{ static constexpr GUID value{ 0x3198B20C,0x621E,0x4668,{ 0xAC,0x38,0xD6,0x67,0xB8,0x7D,0x06,0xD5 } }; };
template <> struct guid<Windows::Phone::PersonalInformation::IContactInformationStatics>{ static constexpr GUID value{ 0x0F67BB29,0x03D0,0x4BE6,{ 0xB2,0xA5,0xFB,0x13,0x85,0x9F,0x12,0x02 } }; };
template <> struct guid<Windows::Phone::PersonalInformation::IContactQueryOptions>{ static constexpr GUID value{ 0x580CAB76,0x3F31,0x46C1,{ 0x9A,0x50,0x42,0x4A,0x53,0xDA,0xCA,0xE3 } }; };
template <> struct guid<Windows::Phone::PersonalInformation::IContactQueryResult>{ static constexpr GUID value{ 0xC03DB722,0xECDB,0x4700,{ 0x85,0x7E,0x3E,0x78,0x64,0x26,0xB0,0x4B } }; };
template <> struct guid<Windows::Phone::PersonalInformation::IContactStore>{ static constexpr GUID value{ 0xB2CD6FEF,0x2BFD,0x4FAD,{ 0x85,0x52,0x4E,0x69,0x80,0x97,0xE8,0xEB } }; };
template <> struct guid<Windows::Phone::PersonalInformation::IContactStore2>{ static constexpr GUID value{ 0x65F1B64F,0xD653,0x43A7,{ 0xB2,0x36,0xB3,0x0C,0x0F,0x4D,0x72,0x69 } }; };
template <> struct guid<Windows::Phone::PersonalInformation::IContactStoreStatics>{ static constexpr GUID value{ 0xA804FE22,0x4BEB,0x44CC,{ 0xA5,0x72,0x67,0xA5,0xB9,0x2E,0x85,0x67 } }; };
template <> struct guid<Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>{ static constexpr GUID value{ 0xD5812B01,0x2CED,0x4EE6,{ 0xB1,0xD6,0x09,0x4B,0xF8,0x8E,0xF0,0xB6 } }; };
template <> struct guid<Windows::Phone::PersonalInformation::IStoredContact>{ static constexpr GUID value{ 0xB070B7B1,0x263D,0x4E71,{ 0xAB,0xE7,0x59,0x1D,0x24,0x66,0x57,0x0E } }; };
template <> struct guid<Windows::Phone::PersonalInformation::IStoredContactFactory>{ static constexpr GUID value{ 0x49EDE921,0xC225,0x4FD9,{ 0x89,0xC5,0xCE,0xCC,0x2C,0x8A,0x4B,0x79 } }; };
template <> struct default_interface<Windows::Phone::PersonalInformation::ContactAddress>{ using type = Windows::Phone::PersonalInformation::IContactAddress; };
template <> struct default_interface<Windows::Phone::PersonalInformation::ContactChangeRecord>{ using type = Windows::Phone::PersonalInformation::IContactChangeRecord; };
template <> struct default_interface<Windows::Phone::PersonalInformation::ContactInformation>{ using type = Windows::Phone::PersonalInformation::IContactInformation; };
template <> struct default_interface<Windows::Phone::PersonalInformation::ContactQueryOptions>{ using type = Windows::Phone::PersonalInformation::IContactQueryOptions; };
template <> struct default_interface<Windows::Phone::PersonalInformation::ContactQueryResult>{ using type = Windows::Phone::PersonalInformation::IContactQueryResult; };
template <> struct default_interface<Windows::Phone::PersonalInformation::ContactStore>{ using type = Windows::Phone::PersonalInformation::IContactStore; };
template <> struct default_interface<Windows::Phone::PersonalInformation::StoredContact>{ using type = Windows::Phone::PersonalInformation::IStoredContact; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_IContactAddress
{
    hstring Country() const;
    void Country(param::hstring const& value) const;
    hstring Locality() const;
    void Locality(param::hstring const& value) const;
    hstring Region() const;
    void Region(param::hstring const& value) const;
    hstring PostalCode() const;
    void PostalCode(param::hstring const& value) const;
    hstring StreetAddress() const;
    void StreetAddress(param::hstring const& value) const;
};
template <> struct consume<Windows::Phone::PersonalInformation::IContactAddress> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_IContactAddress<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_IContactChangeRecord
{
    Windows::Phone::PersonalInformation::ContactChangeType ChangeType() const;
    uint64_t RevisionNumber() const;
    hstring Id() const;
    hstring RemoteId() const;
};
template <> struct consume<Windows::Phone::PersonalInformation::IContactChangeRecord> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_IContactChangeRecord<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_IContactInformation
{
    hstring DisplayName() const;
    void DisplayName(param::hstring const& value) const;
    hstring FamilyName() const;
    void FamilyName(param::hstring const& value) const;
    hstring GivenName() const;
    void GivenName(param::hstring const& value) const;
    hstring HonorificPrefix() const;
    void HonorificPrefix(param::hstring const& value) const;
    hstring HonorificSuffix() const;
    void HonorificSuffix(param::hstring const& value) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> GetDisplayPictureAsync() const;
    Windows::Foundation::IAsyncAction SetDisplayPictureAsync(Windows::Storage::Streams::IInputStream const& stream) const;
    Windows::Storage::Streams::IRandomAccessStreamReference DisplayPicture() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>> GetPropertiesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> ToVcardAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> ToVcardAsync(Windows::Phone::PersonalInformation::VCardFormat const& format) const;
};
template <> struct consume<Windows::Phone::PersonalInformation::IContactInformation> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_IContactInformation<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_IContactInformation2
{
    Windows::Foundation::DateTime DisplayPictureDate() const;
    void DisplayPictureDate(Windows::Foundation::DateTime const& returnValue) const;
};
template <> struct consume<Windows::Phone::PersonalInformation::IContactInformation2> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_IContactInformation2<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_IContactInformationStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactInformation> ParseVcardAsync(Windows::Storage::Streams::IInputStream const& vcard) const;
};
template <> struct consume<Windows::Phone::PersonalInformation::IContactInformationStatics> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_IContactInformationStatics<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_IContactQueryOptions
{
    Windows::Foundation::Collections::IVector<hstring> DesiredFields() const;
    Windows::Phone::PersonalInformation::ContactQueryResultOrdering OrderBy() const;
    void OrderBy(Windows::Phone::PersonalInformation::ContactQueryResultOrdering const& value) const;
};
template <> struct consume<Windows::Phone::PersonalInformation::IContactQueryOptions> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_IContactQueryOptions<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_IContactQueryResult
{
    Windows::Foundation::IAsyncOperation<uint32_t> GetContactCountAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::StoredContact>> GetContactsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::StoredContact>> GetContactsAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const;
    Windows::Phone::PersonalInformation::ContactQueryOptions GetCurrentQueryOptions() const;
};
template <> struct consume<Windows::Phone::PersonalInformation::IContactQueryResult> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_IContactQueryResult<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_IContactStore
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> FindContactByRemoteIdAsync(param::hstring const& id) const;
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> FindContactByIdAsync(param::hstring const& id) const;
    Windows::Foundation::IAsyncAction DeleteContactAsync(param::hstring const& id) const;
    Windows::Phone::PersonalInformation::ContactQueryResult CreateContactQuery() const;
    Windows::Phone::PersonalInformation::ContactQueryResult CreateContactQuery(Windows::Phone::PersonalInformation::ContactQueryOptions const& options) const;
    Windows::Foundation::IAsyncAction DeleteAsync() const;
    uint64_t RevisionNumber() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::ContactChangeRecord>> GetChangesAsync(uint64_t baseRevisionNumber) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>> LoadExtendedPropertiesAsync() const;
    Windows::Foundation::IAsyncAction SaveExtendedPropertiesAsync(param::async_map_view<hstring, Windows::Foundation::IInspectable> const& data) const;
};
template <> struct consume<Windows::Phone::PersonalInformation::IContactStore> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_IContactStore<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_IContactStore2
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> CreateMeContactAsync(param::hstring const& id) const;
};
template <> struct consume<Windows::Phone::PersonalInformation::IContactStore2> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_IContactStore2<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_IContactStoreStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> CreateOrOpenAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> CreateOrOpenAsync(Windows::Phone::PersonalInformation::ContactStoreSystemAccessMode const& access, Windows::Phone::PersonalInformation::ContactStoreApplicationAccessMode const& sharing) const;
};
template <> struct consume<Windows::Phone::PersonalInformation::IContactStoreStatics> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_IContactStoreStatics<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics
{
    hstring DisplayName() const;
    hstring FamilyName() const;
    hstring GivenName() const;
    hstring HonorificPrefix() const;
    hstring HonorificSuffix() const;
    hstring AdditionalName() const;
    hstring Address() const;
    hstring OtherAddress() const;
    hstring Email() const;
    hstring WorkAddress() const;
    hstring WorkTelephone() const;
    hstring JobTitle() const;
    hstring Birthdate() const;
    hstring Anniversary() const;
    hstring Telephone() const;
    hstring MobileTelephone() const;
    hstring Url() const;
    hstring Notes() const;
    hstring WorkFax() const;
    hstring Children() const;
    hstring SignificantOther() const;
    hstring CompanyName() const;
    hstring CompanyTelephone() const;
    hstring HomeFax() const;
    hstring AlternateTelephone() const;
    hstring Manager() const;
    hstring Nickname() const;
    hstring OfficeLocation() const;
    hstring WorkEmail() const;
    hstring YomiGivenName() const;
    hstring YomiFamilyName() const;
    hstring YomiCompanyName() const;
    hstring OtherEmail() const;
    hstring AlternateMobileTelephone() const;
    hstring AlternateWorkTelephone() const;
};
template <> struct consume<Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_IStoredContact
{
    Windows::Phone::PersonalInformation::ContactStore Store() const;
    hstring Id() const;
    hstring RemoteId() const;
    void RemoteId(param::hstring const& value) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>> GetExtendedPropertiesAsync() const;
    Windows::Foundation::IAsyncAction SaveAsync() const;
    Windows::Foundation::IAsyncAction ReplaceExistingContactAsync(param::hstring const& id) const;
};
template <> struct consume<Windows::Phone::PersonalInformation::IStoredContact> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_IStoredContact<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_IStoredContactFactory
{
    Windows::Phone::PersonalInformation::StoredContact CreateStoredContact(Windows::Phone::PersonalInformation::ContactStore const& store) const;
    Windows::Phone::PersonalInformation::StoredContact CreateStoredContactFromInformation(Windows::Phone::PersonalInformation::ContactStore const& store, Windows::Phone::PersonalInformation::ContactInformation const& contact) const;
};
template <> struct consume<Windows::Phone::PersonalInformation::IStoredContactFactory> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_IStoredContactFactory<D>; };

template <> struct abi<Windows::Phone::PersonalInformation::IContactAddress>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Country(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Country(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Locality(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Locality(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Region(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Region(HSTRING value) = 0;
    virtual HRESULT __stdcall get_PostalCode(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PostalCode(HSTRING value) = 0;
    virtual HRESULT __stdcall get_StreetAddress(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_StreetAddress(HSTRING value) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::IContactChangeRecord>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeType(abi_t<Windows::Phone::PersonalInformation::ContactChangeType>* value) = 0;
    virtual HRESULT __stdcall get_RevisionNumber(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RemoteId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::IContactInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_FamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_FamilyName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_GivenName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_GivenName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_HonorificPrefix(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_HonorificPrefix(HSTRING value) = 0;
    virtual HRESULT __stdcall get_HonorificSuffix(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_HonorificSuffix(HSTRING value) = 0;
    virtual HRESULT __stdcall GetDisplayPictureAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SetDisplayPictureAsync(::IUnknown* stream, ::IUnknown** action) = 0;
    virtual HRESULT __stdcall get_DisplayPicture(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetPropertiesAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ToVcardAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ToVcardWithOptionsAsync(abi_t<Windows::Phone::PersonalInformation::VCardFormat> format, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::IContactInformation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayPictureDate(abi_t<Windows::Foundation::DateTime>* returnValue) = 0;
    virtual HRESULT __stdcall put_DisplayPictureDate(abi_t<Windows::Foundation::DateTime> returnValue) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::IContactInformationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ParseVcardAsync(::IUnknown* vcard, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::IContactQueryOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DesiredFields(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OrderBy(abi_t<Windows::Phone::PersonalInformation::ContactQueryResultOrdering>* value) = 0;
    virtual HRESULT __stdcall put_OrderBy(abi_t<Windows::Phone::PersonalInformation::ContactQueryResultOrdering> value) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::IContactQueryResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetContactCountAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetContactsAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetContactsAsyncInRange(uint32_t startIndex, uint32_t maxNumberOfItems, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetCurrentQueryOptions(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::IContactStore>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindContactByRemoteIdAsync(HSTRING id, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FindContactByIdAsync(HSTRING id, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeleteContactAsync(HSTRING id, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateContactQueryDefault(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateContactQueryWithOptions(::IUnknown* options, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall DeleteAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_RevisionNumber(uint64_t* value) = 0;
    virtual HRESULT __stdcall GetChangesAsync(uint64_t baseRevisionNumber, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall LoadExtendedPropertiesAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SaveExtendedPropertiesAsync(::IUnknown* data, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::IContactStore2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMeContactAsync(HSTRING id, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::IContactStoreStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateOrOpenAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateOrOpenWithOptionsAsync(abi_t<Windows::Phone::PersonalInformation::ContactStoreSystemAccessMode> access, abi_t<Windows::Phone::PersonalInformation::ContactStoreApplicationAccessMode> sharing, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_GivenName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HonorificPrefix(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HonorificSuffix(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AdditionalName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Address(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_OtherAddress(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Email(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_WorkAddress(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_WorkTelephone(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_JobTitle(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Birthdate(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Anniversary(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Telephone(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MobileTelephone(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Url(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Notes(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_WorkFax(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Children(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SignificantOther(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CompanyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CompanyTelephone(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HomeFax(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AlternateTelephone(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Manager(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Nickname(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_OfficeLocation(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_WorkEmail(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_YomiGivenName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_YomiFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_YomiCompanyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_OtherEmail(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AlternateMobileTelephone(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AlternateWorkTelephone(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::IStoredContact>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Store(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RemoteId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_RemoteId(HSTRING value) = 0;
    virtual HRESULT __stdcall GetExtendedPropertiesAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReplaceExistingContactAsync(HSTRING id, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::IStoredContactFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateStoredContact(::IUnknown* store, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateStoredContactFromInformation(::IUnknown* store, ::IUnknown* contact, ::IUnknown** result) = 0;
};};

}
