// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Phone.PersonalInformation.2.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IContactAddress<D>::Country() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactAddress)->get_Country(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_PersonalInformation_IContactAddress<D>::Country(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactAddress)->put_Country(get_abi(value)));
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IContactAddress<D>::Locality() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactAddress)->get_Locality(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_PersonalInformation_IContactAddress<D>::Locality(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactAddress)->put_Locality(get_abi(value)));
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IContactAddress<D>::Region() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactAddress)->get_Region(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_PersonalInformation_IContactAddress<D>::Region(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactAddress)->put_Region(get_abi(value)));
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IContactAddress<D>::PostalCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactAddress)->get_PostalCode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_PersonalInformation_IContactAddress<D>::PostalCode(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactAddress)->put_PostalCode(get_abi(value)));
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IContactAddress<D>::StreetAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactAddress)->get_StreetAddress(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_PersonalInformation_IContactAddress<D>::StreetAddress(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactAddress)->put_StreetAddress(get_abi(value)));
}

template <typename D> Windows::Phone::PersonalInformation::ContactChangeType consume_Windows_Phone_PersonalInformation_IContactChangeRecord<D>::ChangeType() const
{
    Windows::Phone::PersonalInformation::ContactChangeType value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactChangeRecord)->get_ChangeType(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Phone_PersonalInformation_IContactChangeRecord<D>::RevisionNumber() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactChangeRecord)->get_RevisionNumber(&value));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IContactChangeRecord<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactChangeRecord)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IContactChangeRecord<D>::RemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactChangeRecord)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IContactInformation<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_PersonalInformation_IContactInformation<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IContactInformation<D>::FamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->get_FamilyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_PersonalInformation_IContactInformation<D>::FamilyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->put_FamilyName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IContactInformation<D>::GivenName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->get_GivenName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_PersonalInformation_IContactInformation<D>::GivenName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->put_GivenName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IContactInformation<D>::HonorificPrefix() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->get_HonorificPrefix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_PersonalInformation_IContactInformation<D>::HonorificPrefix(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->put_HonorificPrefix(get_abi(value)));
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IContactInformation<D>::HonorificSuffix() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->get_HonorificSuffix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_PersonalInformation_IContactInformation<D>::HonorificSuffix(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->put_HonorificSuffix(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> consume_Windows_Phone_PersonalInformation_IContactInformation<D>::GetDisplayPictureAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->GetDisplayPictureAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_IContactInformation<D>::SetDisplayPictureAsync(Windows::Storage::Streams::IInputStream const& stream) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->SetDisplayPictureAsync(get_abi(stream), put_abi(action)));
    return action;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_Phone_PersonalInformation_IContactInformation<D>::DisplayPicture() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->get_DisplayPicture(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>> consume_Windows_Phone_PersonalInformation_IContactInformation<D>::GetPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->GetPropertiesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> consume_Windows_Phone_PersonalInformation_IContactInformation<D>::ToVcardAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->ToVcardAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> consume_Windows_Phone_PersonalInformation_IContactInformation<D>::ToVcardAsync(Windows::Phone::PersonalInformation::VCardFormat const& format) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation)->ToVcardWithOptionsAsync(get_abi(format), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Phone_PersonalInformation_IContactInformation2<D>::DisplayPictureDate() const
{
    Windows::Foundation::DateTime returnValue{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation2)->get_DisplayPictureDate(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_Phone_PersonalInformation_IContactInformation2<D>::DisplayPictureDate(Windows::Foundation::DateTime const& returnValue) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformation2)->put_DisplayPictureDate(get_abi(returnValue)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactInformation> consume_Windows_Phone_PersonalInformation_IContactInformationStatics<D>::ParseVcardAsync(Windows::Storage::Streams::IInputStream const& vcard) const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactInformation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactInformationStatics)->ParseVcardAsync(get_abi(vcard), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Phone_PersonalInformation_IContactQueryOptions<D>::DesiredFields() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactQueryOptions)->get_DesiredFields(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::PersonalInformation::ContactQueryResultOrdering consume_Windows_Phone_PersonalInformation_IContactQueryOptions<D>::OrderBy() const
{
    Windows::Phone::PersonalInformation::ContactQueryResultOrdering value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactQueryOptions)->get_OrderBy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_PersonalInformation_IContactQueryOptions<D>::OrderBy(Windows::Phone::PersonalInformation::ContactQueryResultOrdering const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactQueryOptions)->put_OrderBy(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> consume_Windows_Phone_PersonalInformation_IContactQueryResult<D>::GetContactCountAsync() const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactQueryResult)->GetContactCountAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::StoredContact>> consume_Windows_Phone_PersonalInformation_IContactQueryResult<D>::GetContactsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::StoredContact>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactQueryResult)->GetContactsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::StoredContact>> consume_Windows_Phone_PersonalInformation_IContactQueryResult<D>::GetContactsAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::StoredContact>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactQueryResult)->GetContactsAsyncInRange(startIndex, maxNumberOfItems, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Phone::PersonalInformation::ContactQueryOptions consume_Windows_Phone_PersonalInformation_IContactQueryResult<D>::GetCurrentQueryOptions() const
{
    Windows::Phone::PersonalInformation::ContactQueryOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactQueryResult)->GetCurrentQueryOptions(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> consume_Windows_Phone_PersonalInformation_IContactStore<D>::FindContactByRemoteIdAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactStore)->FindContactByRemoteIdAsync(get_abi(id), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> consume_Windows_Phone_PersonalInformation_IContactStore<D>::FindContactByIdAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactStore)->FindContactByIdAsync(get_abi(id), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_IContactStore<D>::DeleteContactAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactStore)->DeleteContactAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Phone::PersonalInformation::ContactQueryResult consume_Windows_Phone_PersonalInformation_IContactStore<D>::CreateContactQuery() const
{
    Windows::Phone::PersonalInformation::ContactQueryResult result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactStore)->CreateContactQueryDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::Phone::PersonalInformation::ContactQueryResult consume_Windows_Phone_PersonalInformation_IContactStore<D>::CreateContactQuery(Windows::Phone::PersonalInformation::ContactQueryOptions const& options) const
{
    Windows::Phone::PersonalInformation::ContactQueryResult result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactStore)->CreateContactQueryWithOptions(get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_IContactStore<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactStore)->DeleteAsync(put_abi(result)));
    return result;
}

template <typename D> uint64_t consume_Windows_Phone_PersonalInformation_IContactStore<D>::RevisionNumber() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactStore)->get_RevisionNumber(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::ContactChangeRecord>> consume_Windows_Phone_PersonalInformation_IContactStore<D>::GetChangesAsync(uint64_t baseRevisionNumber) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::ContactChangeRecord>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactStore)->GetChangesAsync(baseRevisionNumber, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>> consume_Windows_Phone_PersonalInformation_IContactStore<D>::LoadExtendedPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactStore)->LoadExtendedPropertiesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_IContactStore<D>::SaveExtendedPropertiesAsync(param::async_map_view<hstring, Windows::Foundation::IInspectable> const& data) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactStore)->SaveExtendedPropertiesAsync(get_abi(data), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> consume_Windows_Phone_PersonalInformation_IContactStore2<D>::CreateMeContactAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactStore2)->CreateMeContactAsync(get_abi(id), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> consume_Windows_Phone_PersonalInformation_IContactStoreStatics<D>::CreateOrOpenAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactStoreStatics)->CreateOrOpenAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> consume_Windows_Phone_PersonalInformation_IContactStoreStatics<D>::CreateOrOpenAsync(Windows::Phone::PersonalInformation::ContactStoreSystemAccessMode const& access, Windows::Phone::PersonalInformation::ContactStoreApplicationAccessMode const& sharing) const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IContactStoreStatics)->CreateOrOpenWithOptionsAsync(get_abi(access), get_abi(sharing), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::FamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_FamilyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::GivenName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_GivenName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::HonorificPrefix() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_HonorificPrefix(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::HonorificSuffix() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_HonorificSuffix(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::AdditionalName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_AdditionalName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::Address() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_Address(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::OtherAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_OtherAddress(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::Email() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_Email(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::WorkAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_WorkAddress(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::WorkTelephone() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_WorkTelephone(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::JobTitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_JobTitle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::Birthdate() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_Birthdate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::Anniversary() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_Anniversary(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::Telephone() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_Telephone(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::MobileTelephone() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_MobileTelephone(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::Url() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_Url(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::Notes() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_Notes(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::WorkFax() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_WorkFax(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::Children() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_Children(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::SignificantOther() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_SignificantOther(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::CompanyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_CompanyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::CompanyTelephone() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_CompanyTelephone(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::HomeFax() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_HomeFax(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::AlternateTelephone() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_AlternateTelephone(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::Manager() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_Manager(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::Nickname() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_Nickname(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::OfficeLocation() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_OfficeLocation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::WorkEmail() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_WorkEmail(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::YomiGivenName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_YomiGivenName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::YomiFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_YomiFamilyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::YomiCompanyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_YomiCompanyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::OtherEmail() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_OtherEmail(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::AlternateMobileTelephone() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_AlternateMobileTelephone(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IKnownContactPropertiesStatics<D>::AlternateWorkTelephone() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics)->get_AlternateWorkTelephone(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::PersonalInformation::ContactStore consume_Windows_Phone_PersonalInformation_IStoredContact<D>::Store() const
{
    Windows::Phone::PersonalInformation::ContactStore value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IStoredContact)->get_Store(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IStoredContact<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IStoredContact)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Phone_PersonalInformation_IStoredContact<D>::RemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IStoredContact)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Phone_PersonalInformation_IStoredContact<D>::RemoteId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IStoredContact)->put_RemoteId(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>> consume_Windows_Phone_PersonalInformation_IStoredContact<D>::GetExtendedPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IStoredContact)->GetExtendedPropertiesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_IStoredContact<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IStoredContact)->SaveAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_IStoredContact<D>::ReplaceExistingContactAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IStoredContact)->ReplaceExistingContactAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Phone::PersonalInformation::StoredContact consume_Windows_Phone_PersonalInformation_IStoredContactFactory<D>::CreateStoredContact(Windows::Phone::PersonalInformation::ContactStore const& store) const
{
    Windows::Phone::PersonalInformation::StoredContact result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IStoredContactFactory)->CreateStoredContact(get_abi(store), put_abi(result)));
    return result;
}

template <typename D> Windows::Phone::PersonalInformation::StoredContact consume_Windows_Phone_PersonalInformation_IStoredContactFactory<D>::CreateStoredContactFromInformation(Windows::Phone::PersonalInformation::ContactStore const& store, Windows::Phone::PersonalInformation::ContactInformation const& contact) const
{
    Windows::Phone::PersonalInformation::StoredContact result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::IStoredContactFactory)->CreateStoredContactFromInformation(get_abi(store), get_abi(contact), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::IContactAddress> : produce_base<D, Windows::Phone::PersonalInformation::IContactAddress>
{
    HRESULT __stdcall get_Country(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Country());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Country(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Country(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Locality(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Locality());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Locality(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Locality(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Region(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Region());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Region(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Region(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PostalCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PostalCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PostalCode(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PostalCode(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreetAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StreetAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StreetAddress(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StreetAddress(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::IContactChangeRecord> : produce_base<D, Windows::Phone::PersonalInformation::IContactChangeRecord>
{
    HRESULT __stdcall get_ChangeType(abi_t<Windows::Phone::PersonalInformation::ContactChangeType>* value) noexcept override
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

    HRESULT __stdcall get_RevisionNumber(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RevisionNumber());
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
};

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::IContactInformation> : produce_base<D, Windows::Phone::PersonalInformation::IContactInformation>
{
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

    HRESULT __stdcall get_FamilyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FamilyName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FamilyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GivenName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GivenName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GivenName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GivenName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HonorificPrefix(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HonorificPrefix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HonorificPrefix(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HonorificPrefix(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HonorificSuffix(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HonorificSuffix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HonorificSuffix(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HonorificSuffix(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDisplayPictureAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDisplayPictureAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDisplayPictureAsync(::IUnknown* stream, ::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SetDisplayPictureAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayPicture(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayPicture());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPropertiesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ToVcardAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ToVcardAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ToVcardWithOptionsAsync(abi_t<Windows::Phone::PersonalInformation::VCardFormat> format, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ToVcardAsync(*reinterpret_cast<Windows::Phone::PersonalInformation::VCardFormat const*>(&format)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::IContactInformation2> : produce_base<D, Windows::Phone::PersonalInformation::IContactInformation2>
{
    HRESULT __stdcall get_DisplayPictureDate(abi_t<Windows::Foundation::DateTime>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().DisplayPictureDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayPictureDate(abi_t<Windows::Foundation::DateTime> returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayPictureDate(*reinterpret_cast<Windows::Foundation::DateTime const*>(&returnValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::IContactInformationStatics> : produce_base<D, Windows::Phone::PersonalInformation::IContactInformationStatics>
{
    HRESULT __stdcall ParseVcardAsync(::IUnknown* vcard, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ParseVcardAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&vcard)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::IContactQueryOptions> : produce_base<D, Windows::Phone::PersonalInformation::IContactQueryOptions>
{
    HRESULT __stdcall get_DesiredFields(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredFields());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OrderBy(abi_t<Windows::Phone::PersonalInformation::ContactQueryResultOrdering>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OrderBy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OrderBy(abi_t<Windows::Phone::PersonalInformation::ContactQueryResultOrdering> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OrderBy(*reinterpret_cast<Windows::Phone::PersonalInformation::ContactQueryResultOrdering const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::IContactQueryResult> : produce_base<D, Windows::Phone::PersonalInformation::IContactQueryResult>
{
    HRESULT __stdcall GetContactCountAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetContactCountAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContactsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetContactsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContactsAsyncInRange(uint32_t startIndex, uint32_t maxNumberOfItems, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetContactsAsync(startIndex, maxNumberOfItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentQueryOptions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentQueryOptions());
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
struct produce<D, Windows::Phone::PersonalInformation::IContactStore> : produce_base<D, Windows::Phone::PersonalInformation::IContactStore>
{
    HRESULT __stdcall FindContactByRemoteIdAsync(HSTRING id, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindContactByRemoteIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindContactByIdAsync(HSTRING id, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindContactByIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteContactAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DeleteContactAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateContactQueryDefault(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateContactQuery());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateContactQueryWithOptions(::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateContactQuery(*reinterpret_cast<Windows::Phone::PersonalInformation::ContactQueryOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RevisionNumber(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RevisionNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetChangesAsync(uint64_t baseRevisionNumber, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetChangesAsync(baseRevisionNumber));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadExtendedPropertiesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LoadExtendedPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveExtendedPropertiesAsync(::IUnknown* data, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SaveExtendedPropertiesAsync(*reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> const*>(&data)));
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
struct produce<D, Windows::Phone::PersonalInformation::IContactStore2> : produce_base<D, Windows::Phone::PersonalInformation::IContactStore2>
{
    HRESULT __stdcall CreateMeContactAsync(HSTRING id, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateMeContactAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::IContactStoreStatics> : produce_base<D, Windows::Phone::PersonalInformation::IContactStoreStatics>
{
    HRESULT __stdcall CreateOrOpenAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateOrOpenAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateOrOpenWithOptionsAsync(abi_t<Windows::Phone::PersonalInformation::ContactStoreSystemAccessMode> access, abi_t<Windows::Phone::PersonalInformation::ContactStoreApplicationAccessMode> sharing, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateOrOpenAsync(*reinterpret_cast<Windows::Phone::PersonalInformation::ContactStoreSystemAccessMode const*>(&access), *reinterpret_cast<Windows::Phone::PersonalInformation::ContactStoreApplicationAccessMode const*>(&sharing)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics> : produce_base<D, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>
{
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

    HRESULT __stdcall get_FamilyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GivenName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GivenName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HonorificPrefix(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HonorificPrefix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HonorificSuffix(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HonorificSuffix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdditionalName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdditionalName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Address(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Address());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OtherAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Email(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Email());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WorkAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WorkAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WorkTelephone(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WorkTelephone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JobTitle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().JobTitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Birthdate(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Birthdate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Anniversary(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Anniversary());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Telephone(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Telephone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MobileTelephone(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MobileTelephone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Url(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Url());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Notes(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Notes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WorkFax(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WorkFax());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Children(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Children());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignificantOther(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignificantOther());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompanyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompanyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompanyTelephone(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompanyTelephone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HomeFax(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HomeFax());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateTelephone(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlternateTelephone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Manager(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Manager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Nickname(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Nickname());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OfficeLocation(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OfficeLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WorkEmail(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WorkEmail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YomiGivenName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().YomiGivenName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YomiFamilyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().YomiFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YomiCompanyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().YomiCompanyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherEmail(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OtherEmail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateMobileTelephone(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlternateMobileTelephone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateWorkTelephone(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlternateWorkTelephone());
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
struct produce<D, Windows::Phone::PersonalInformation::IStoredContact> : produce_base<D, Windows::Phone::PersonalInformation::IStoredContact>
{
    HRESULT __stdcall get_Store(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Store());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall GetExtendedPropertiesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetExtendedPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReplaceExistingContactAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReplaceExistingContactAsync(*reinterpret_cast<hstring const*>(&id)));
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
struct produce<D, Windows::Phone::PersonalInformation::IStoredContactFactory> : produce_base<D, Windows::Phone::PersonalInformation::IStoredContactFactory>
{
    HRESULT __stdcall CreateStoredContact(::IUnknown* store, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateStoredContact(*reinterpret_cast<Windows::Phone::PersonalInformation::ContactStore const*>(&store)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStoredContactFromInformation(::IUnknown* store, ::IUnknown* contact, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateStoredContactFromInformation(*reinterpret_cast<Windows::Phone::PersonalInformation::ContactStore const*>(&store), *reinterpret_cast<Windows::Phone::PersonalInformation::ContactInformation const*>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Phone::PersonalInformation {

inline ContactAddress::ContactAddress() :
    ContactAddress(activate_instance<ContactAddress>())
{}

inline ContactInformation::ContactInformation() :
    ContactInformation(activate_instance<ContactInformation>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactInformation> ContactInformation::ParseVcardAsync(Windows::Storage::Streams::IInputStream const& vcard)
{
    return get_activation_factory<ContactInformation, Windows::Phone::PersonalInformation::IContactInformationStatics>().ParseVcardAsync(vcard);
}

inline ContactQueryOptions::ContactQueryOptions() :
    ContactQueryOptions(activate_instance<ContactQueryOptions>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> ContactStore::CreateOrOpenAsync()
{
    return get_activation_factory<ContactStore, Windows::Phone::PersonalInformation::IContactStoreStatics>().CreateOrOpenAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> ContactStore::CreateOrOpenAsync(Windows::Phone::PersonalInformation::ContactStoreSystemAccessMode const& access, Windows::Phone::PersonalInformation::ContactStoreApplicationAccessMode const& sharing)
{
    return get_activation_factory<ContactStore, Windows::Phone::PersonalInformation::IContactStoreStatics>().CreateOrOpenAsync(access, sharing);
}

inline hstring KnownContactProperties::DisplayName()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().DisplayName();
}

inline hstring KnownContactProperties::FamilyName()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().FamilyName();
}

inline hstring KnownContactProperties::GivenName()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().GivenName();
}

inline hstring KnownContactProperties::HonorificPrefix()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().HonorificPrefix();
}

inline hstring KnownContactProperties::HonorificSuffix()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().HonorificSuffix();
}

inline hstring KnownContactProperties::AdditionalName()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().AdditionalName();
}

inline hstring KnownContactProperties::Address()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().Address();
}

inline hstring KnownContactProperties::OtherAddress()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().OtherAddress();
}

inline hstring KnownContactProperties::Email()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().Email();
}

inline hstring KnownContactProperties::WorkAddress()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().WorkAddress();
}

inline hstring KnownContactProperties::WorkTelephone()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().WorkTelephone();
}

inline hstring KnownContactProperties::JobTitle()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().JobTitle();
}

inline hstring KnownContactProperties::Birthdate()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().Birthdate();
}

inline hstring KnownContactProperties::Anniversary()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().Anniversary();
}

inline hstring KnownContactProperties::Telephone()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().Telephone();
}

inline hstring KnownContactProperties::MobileTelephone()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().MobileTelephone();
}

inline hstring KnownContactProperties::Url()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().Url();
}

inline hstring KnownContactProperties::Notes()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().Notes();
}

inline hstring KnownContactProperties::WorkFax()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().WorkFax();
}

inline hstring KnownContactProperties::Children()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().Children();
}

inline hstring KnownContactProperties::SignificantOther()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().SignificantOther();
}

inline hstring KnownContactProperties::CompanyName()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().CompanyName();
}

inline hstring KnownContactProperties::CompanyTelephone()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().CompanyTelephone();
}

inline hstring KnownContactProperties::HomeFax()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().HomeFax();
}

inline hstring KnownContactProperties::AlternateTelephone()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().AlternateTelephone();
}

inline hstring KnownContactProperties::Manager()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().Manager();
}

inline hstring KnownContactProperties::Nickname()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().Nickname();
}

inline hstring KnownContactProperties::OfficeLocation()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().OfficeLocation();
}

inline hstring KnownContactProperties::WorkEmail()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().WorkEmail();
}

inline hstring KnownContactProperties::YomiGivenName()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().YomiGivenName();
}

inline hstring KnownContactProperties::YomiFamilyName()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().YomiFamilyName();
}

inline hstring KnownContactProperties::YomiCompanyName()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().YomiCompanyName();
}

inline hstring KnownContactProperties::OtherEmail()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().OtherEmail();
}

inline hstring KnownContactProperties::AlternateMobileTelephone()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().AlternateMobileTelephone();
}

inline hstring KnownContactProperties::AlternateWorkTelephone()
{
    return get_activation_factory<KnownContactProperties, Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics>().AlternateWorkTelephone();
}

inline StoredContact::StoredContact(Windows::Phone::PersonalInformation::ContactStore const& store) :
    StoredContact(get_activation_factory<StoredContact, Windows::Phone::PersonalInformation::IStoredContactFactory>().CreateStoredContact(store))
{}

inline StoredContact::StoredContact(Windows::Phone::PersonalInformation::ContactStore const& store, Windows::Phone::PersonalInformation::ContactInformation const& contact) :
    StoredContact(get_activation_factory<StoredContact, Windows::Phone::PersonalInformation::IStoredContactFactory>().CreateStoredContactFromInformation(store, contact))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Phone::PersonalInformation::IContactAddress> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::IContactAddress> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::IContactChangeRecord> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::IContactChangeRecord> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::IContactInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::IContactInformation> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::IContactInformation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::IContactInformation2> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::IContactInformationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::IContactInformationStatics> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::IContactQueryOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::IContactQueryOptions> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::IContactQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::IContactQueryResult> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::IContactStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::IContactStore> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::IContactStore2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::IContactStore2> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::IContactStoreStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::IContactStoreStatics> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::IKnownContactPropertiesStatics> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::IStoredContact> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::IStoredContact> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::IStoredContactFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::IStoredContactFactory> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::ContactAddress> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::ContactAddress> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::ContactChangeRecord> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::ContactChangeRecord> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::ContactInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::ContactInformation> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::ContactQueryOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::ContactQueryOptions> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::ContactQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::ContactQueryResult> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::ContactStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::ContactStore> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::KnownContactProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::KnownContactProperties> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::StoredContact> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::StoredContact> {};

}

WINRT_WARNING_POP
