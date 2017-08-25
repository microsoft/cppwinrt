// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Data.Text.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.UI.ViewManagement.2.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> consume_Windows_ApplicationModel_Contacts_IAggregateContactManager<D>::FindRawContactsAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IAggregateContactManager)->FindRawContactsAsync(get_abi(contact), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> consume_Windows_ApplicationModel_Contacts_IAggregateContactManager<D>::TryLinkContactsAsync(Windows::ApplicationModel::Contacts::Contact const& primaryContact, Windows::ApplicationModel::Contacts::Contact const& secondaryContact) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> contact{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IAggregateContactManager)->TryLinkContactsAsync(get_abi(primaryContact), get_abi(secondaryContact), put_abi(contact)));
    return contact;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_IAggregateContactManager<D>::UnlinkRawContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IAggregateContactManager)->UnlinkRawContactAsync(get_abi(contact), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Contacts_IAggregateContactManager<D>::TrySetPreferredSourceForPictureAsync(Windows::ApplicationModel::Contacts::Contact const& aggregateContact, Windows::ApplicationModel::Contacts::Contact const& rawContact) const
{
    Windows::Foundation::IAsyncOperation<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IAggregateContactManager)->TrySetPreferredSourceForPictureAsync(get_abi(aggregateContact), get_abi(rawContact), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_IAggregateContactManager2<D>::SetRemoteIdentificationInformationAsync(param::hstring const& contactListId, param::hstring const& remoteSourceId, param::hstring const& accountId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IAggregateContactManager2)->SetRemoteIdentificationInformationAsync(get_abi(contactListId), get_abi(remoteSourceId), get_abi(accountId), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContact<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContact<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact)->put_Name(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Contacts_IContact<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContact<D>::Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact)->put_Thumbnail(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::IContactField> consume_Windows_ApplicationModel_Contacts_IContact<D>::Fields() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::IContactField> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact)->get_Fields(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContact2<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContact2<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->put_Id(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContact2<D>::Notes() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->get_Notes(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContact2<D>::Notes(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->put_Notes(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactPhone> consume_Windows_ApplicationModel_Contacts_IContact2<D>::Phones() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactPhone> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->get_Phones(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactEmail> consume_Windows_ApplicationModel_Contacts_IContact2<D>::Emails() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactEmail> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->get_Emails(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactAddress> consume_Windows_ApplicationModel_Contacts_IContact2<D>::Addresses() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactAddress> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->get_Addresses(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount> consume_Windows_ApplicationModel_Contacts_IContact2<D>::ConnectedServiceAccounts() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->get_ConnectedServiceAccounts(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactDate> consume_Windows_ApplicationModel_Contacts_IContact2<D>::ImportantDates() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactDate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->get_ImportantDates(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Contacts_IContact2<D>::DataSuppliers() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->get_DataSuppliers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactJobInfo> consume_Windows_ApplicationModel_Contacts_IContact2<D>::JobInfo() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactJobInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->get_JobInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactSignificantOther> consume_Windows_ApplicationModel_Contacts_IContact2<D>::SignificantOthers() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactSignificantOther> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->get_SignificantOthers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactWebsite> consume_Windows_ApplicationModel_Contacts_IContact2<D>::Websites() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactWebsite> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->get_Websites(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_ApplicationModel_Contacts_IContact2<D>::ProviderProperties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact2)->get_ProviderProperties(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContact3<D>::ContactListId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_ContactListId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Contacts_IContact3<D>::DisplayPictureUserUpdateTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_DisplayPictureUserUpdateTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContact3<D>::DisplayPictureUserUpdateTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->put_DisplayPictureUserUpdateTime(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IContact3<D>::IsMe() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_IsMe(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContact3<D>::AggregateId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_AggregateId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContact3<D>::RemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContact3<D>::RemoteId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->put_RemoteId(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContact3<D>::RingToneToken() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_RingToneToken(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContact3<D>::RingToneToken(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->put_RingToneToken(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IContact3<D>::IsDisplayPictureManuallySet() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_IsDisplayPictureManuallySet(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Contacts_IContact3<D>::LargeDisplayPicture() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_LargeDisplayPicture(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Contacts_IContact3<D>::SmallDisplayPicture() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_SmallDisplayPicture(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Contacts_IContact3<D>::SourceDisplayPicture() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_SourceDisplayPicture(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContact3<D>::SourceDisplayPicture(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->put_SourceDisplayPicture(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContact3<D>::TextToneToken() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_TextToneToken(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContact3<D>::TextToneToken(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->put_TextToneToken(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IContact3<D>::IsAggregate() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_IsAggregate(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContact3<D>::FullName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_FullName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContact3<D>::DisplayNameOverride() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_DisplayNameOverride(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContact3<D>::DisplayNameOverride(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->put_DisplayNameOverride(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContact3<D>::Nickname() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_Nickname(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContact3<D>::Nickname(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->put_Nickname(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContact3<D>::SortName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContact3)->get_SortName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::StreetAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->get_StreetAddress(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::StreetAddress(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->put_StreetAddress(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::Locality() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->get_Locality(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::Locality(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->put_Locality(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::Region() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->get_Region(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::Region(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->put_Region(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::Country() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->get_Country(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::Country(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->put_Country(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::PostalCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->get_PostalCode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::PostalCode(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->put_PostalCode(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactAddressKind consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::Kind() const
{
    Windows::ApplicationModel::Contacts::ContactAddressKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::Kind(Windows::ApplicationModel::Contacts::ContactAddressKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->put_Kind(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactAddress<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAddress)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAnnotation<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotation)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAnnotation<D>::AnnotationListId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotation)->get_AnnotationListId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAnnotation<D>::ContactId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotation)->get_ContactId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactAnnotation<D>::ContactId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotation)->put_ContactId(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAnnotation<D>::RemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotation)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactAnnotation<D>::RemoteId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotation)->put_RemoteId(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactAnnotationOperations consume_Windows_ApplicationModel_Contacts_IContactAnnotation<D>::SupportedOperations() const
{
    Windows::ApplicationModel::Contacts::ContactAnnotationOperations value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotation)->get_SupportedOperations(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactAnnotation<D>::SupportedOperations(Windows::ApplicationModel::Contacts::ContactAnnotationOperations const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotation)->put_SupportedOperations(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IContactAnnotation<D>::IsDisabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotation)->get_IsDisabled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_ApplicationModel_Contacts_IContactAnnotation<D>::ProviderProperties() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotation)->get_ProviderProperties(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAnnotation2<D>::ContactListId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotation2)->get_ContactListId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactAnnotation2<D>::ContactListId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotation2)->put_ContactListId(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAnnotationList<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationList)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAnnotationList<D>::ProviderPackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationList)->get_ProviderPackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactAnnotationList<D>::UserDataAccountId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationList)->get_UserDataAccountId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_IContactAnnotationList<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationList)->DeleteAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Contacts_IContactAnnotationList<D>::TrySaveAnnotationAsync(Windows::ApplicationModel::Contacts::ContactAnnotation const& annotation) const
{
    Windows::Foundation::IAsyncOperation<bool> ppResult{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationList)->TrySaveAnnotationAsync(get_abi(annotation), put_abi(ppResult)));
    return ppResult;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotation> consume_Windows_ApplicationModel_Contacts_IContactAnnotationList<D>::GetAnnotationAsync(param::hstring const& annotationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotation> annotation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationList)->GetAnnotationAsync(get_abi(annotationId), put_abi(annotation)));
    return annotation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> consume_Windows_ApplicationModel_Contacts_IContactAnnotationList<D>::FindAnnotationsByRemoteIdAsync(param::hstring const& remoteId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> annotations{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationList)->FindAnnotationsByRemoteIdAsync(get_abi(remoteId), put_abi(annotations)));
    return annotations;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> consume_Windows_ApplicationModel_Contacts_IContactAnnotationList<D>::FindAnnotationsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> annotations{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationList)->FindAnnotationsAsync(put_abi(annotations)));
    return annotations;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_IContactAnnotationList<D>::DeleteAnnotationAsync(Windows::ApplicationModel::Contacts::ContactAnnotation const& annotation) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationList)->DeleteAnnotationAsync(get_abi(annotation), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore<D>::FindContactIdsByEmailAsync(param::hstring const& emailAddress) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> contactIds{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationStore)->FindContactIdsByEmailAsync(get_abi(emailAddress), put_abi(contactIds)));
    return contactIds;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore<D>::FindContactIdsByPhoneNumberAsync(param::hstring const& phoneNumber) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> contactIds{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationStore)->FindContactIdsByPhoneNumberAsync(get_abi(phoneNumber), put_abi(contactIds)));
    return contactIds;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore<D>::FindAnnotationsForContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> annotations{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationStore)->FindAnnotationsForContactAsync(get_abi(contact), put_abi(annotations)));
    return annotations;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore<D>::DisableAnnotationAsync(Windows::ApplicationModel::Contacts::ContactAnnotation const& annotation) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationStore)->DisableAnnotationAsync(get_abi(annotation), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore<D>::CreateAnnotationListAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationStore)->CreateAnnotationListAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore<D>::CreateAnnotationListAsync(param::hstring const& userDataAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationStore)->CreateAnnotationListInAccountAsync(get_abi(userDataAccountId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore<D>::GetAnnotationListAsync(param::hstring const& annotationListId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationStore)->GetAnnotationListAsync(get_abi(annotationListId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>> consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore<D>::FindAnnotationListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>> lists{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationStore)->FindAnnotationListsAsync(put_abi(lists)));
    return lists;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore2<D>::FindAnnotationsForContactListAsync(param::hstring const& contactListId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> annotations{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactAnnotationStore2)->FindAnnotationsForContactListAsync(get_abi(contactListId), put_abi(annotations)));
    return annotations;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact> consume_Windows_ApplicationModel_Contacts_IContactBatch<D>::Contacts() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactBatch)->get_Contacts(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactBatchStatus consume_Windows_ApplicationModel_Contacts_IContactBatch<D>::Status() const
{
    Windows::ApplicationModel::Contacts::ContactBatchStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactBatch)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactCardDelayedDataLoader<D>::SetData(Windows::ApplicationModel::Contacts::Contact const& contact) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader)->SetData(get_abi(contact)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactCardHeaderKind consume_Windows_ApplicationModel_Contacts_IContactCardOptions<D>::HeaderKind() const
{
    Windows::ApplicationModel::Contacts::ContactCardHeaderKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactCardOptions)->get_HeaderKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactCardOptions<D>::HeaderKind(Windows::ApplicationModel::Contacts::ContactCardHeaderKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactCardOptions)->put_HeaderKind(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactCardTabKind consume_Windows_ApplicationModel_Contacts_IContactCardOptions<D>::InitialTabKind() const
{
    Windows::ApplicationModel::Contacts::ContactCardTabKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactCardOptions)->get_InitialTabKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactCardOptions<D>::InitialTabKind(Windows::ApplicationModel::Contacts::ContactCardTabKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactCardOptions)->put_InitialTabKind(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Contacts_IContactCardOptions2<D>::ServerSearchContactListIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactCardOptions2)->get_ServerSearchContactListIds(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactChangeType consume_Windows_ApplicationModel_Contacts_IContactChange<D>::ChangeType() const
{
    Windows::ApplicationModel::Contacts::ContactChangeType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactChange)->get_ChangeType(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Contacts_IContactChange<D>::Contact() const
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactChange)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactChangeReader<D>::AcceptChanges() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactChangeReader)->AcceptChanges());
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactChangeReader<D>::AcceptChangesThrough(Windows::ApplicationModel::Contacts::ContactChange const& lastChangeToAccept) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactChangeReader)->AcceptChangesThrough(get_abi(lastChangeToAccept)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactChange>> consume_Windows_ApplicationModel_Contacts_IContactChangeReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactChange>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactChangeReader)->ReadBatchAsync(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactChangeTracker<D>::Enable() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactChangeTracker)->Enable());
}

template <typename D> Windows::ApplicationModel::Contacts::ContactChangeReader consume_Windows_ApplicationModel_Contacts_IContactChangeTracker<D>::GetChangeReader() const
{
    Windows::ApplicationModel::Contacts::ContactChangeReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactChangeTracker)->GetChangeReader(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactChangeTracker<D>::Reset() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactChangeTracker)->Reset());
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactChangedDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactChangedDeferral)->Complete());
}

template <typename D> Windows::ApplicationModel::Contacts::ContactChangedDeferral consume_Windows_ApplicationModel_Contacts_IContactChangedEventArgs<D>::GetDeferral() const
{
    Windows::ApplicationModel::Contacts::ContactChangedDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactChangedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactConnectedServiceAccount<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactConnectedServiceAccount<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount)->put_Id(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactConnectedServiceAccount<D>::ServiceName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount)->get_ServiceName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactConnectedServiceAccount<D>::ServiceName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount)->put_ServiceName(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_ApplicationModel_Contacts_IContactDate<D>::Day() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactDate)->get_Day(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactDate<D>::Day(optional<uint32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactDate)->put_Day(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_ApplicationModel_Contacts_IContactDate<D>::Month() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactDate)->get_Month(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactDate<D>::Month(optional<uint32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactDate)->put_Month(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactDate<D>::Year() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactDate)->get_Year(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactDate<D>::Year(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactDate)->put_Year(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactDateKind consume_Windows_ApplicationModel_Contacts_IContactDate<D>::Kind() const
{
    Windows::ApplicationModel::Contacts::ContactDateKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactDate)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactDate<D>::Kind(Windows::ApplicationModel::Contacts::ContactDateKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactDate)->put_Kind(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactDate<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactDate)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactDate<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactDate)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactEmail<D>::Address() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactEmail)->get_Address(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactEmail<D>::Address(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactEmail)->put_Address(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactEmailKind consume_Windows_ApplicationModel_Contacts_IContactEmail<D>::Kind() const
{
    Windows::ApplicationModel::Contacts::ContactEmailKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactEmail)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactEmail<D>::Kind(Windows::ApplicationModel::Contacts::ContactEmailKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactEmail)->put_Kind(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactEmail<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactEmail)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactEmail<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactEmail)->put_Description(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactFieldType consume_Windows_ApplicationModel_Contacts_IContactField<D>::Type() const
{
    Windows::ApplicationModel::Contacts::ContactFieldType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactField)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactFieldCategory consume_Windows_ApplicationModel_Contacts_IContactField<D>::Category() const
{
    Windows::ApplicationModel::Contacts::ContactFieldCategory value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactField)->get_Category(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactField<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactField)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactField<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactField)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactField consume_Windows_ApplicationModel_Contacts_IContactFieldFactory<D>::CreateField(param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type) const
{
    Windows::ApplicationModel::Contacts::ContactField field{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactFieldFactory)->CreateField_Default(get_abi(value), get_abi(type), put_abi(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactField consume_Windows_ApplicationModel_Contacts_IContactFieldFactory<D>::CreateField(param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) const
{
    Windows::ApplicationModel::Contacts::ContactField field{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactFieldFactory)->CreateField_Category(get_abi(value), get_abi(type), get_abi(category), put_abi(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactField consume_Windows_ApplicationModel_Contacts_IContactFieldFactory<D>::CreateField(param::hstring const& name, param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) const
{
    Windows::ApplicationModel::Contacts::ContactField field{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactFieldFactory)->CreateField_Custom(get_abi(name), get_abi(value), get_abi(type), get_abi(category), put_abi(field)));
    return field;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactInformation<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInformation)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> consume_Windows_ApplicationModel_Contacts_IContactInformation<D>::GetThumbnailAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInformation)->GetThumbnailAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> consume_Windows_ApplicationModel_Contacts_IContactInformation<D>::Emails() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInformation)->get_Emails(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> consume_Windows_ApplicationModel_Contacts_IContactInformation<D>::PhoneNumbers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInformation)->get_PhoneNumbers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactLocationField> consume_Windows_ApplicationModel_Contacts_IContactInformation<D>::Locations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactLocationField> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInformation)->get_Locations(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactInstantMessageField> consume_Windows_ApplicationModel_Contacts_IContactInformation<D>::InstantMessages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactInstantMessageField> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInformation)->get_InstantMessages(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> consume_Windows_ApplicationModel_Contacts_IContactInformation<D>::CustomFields() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInformation)->get_CustomFields(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> consume_Windows_ApplicationModel_Contacts_IContactInformation<D>::QueryCustomFields(param::hstring const& customName) const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInformation)->QueryCustomFields(get_abi(customName), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactInstantMessageField<D>::UserName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInstantMessageField)->get_UserName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactInstantMessageField<D>::Service() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInstantMessageField)->get_Service(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactInstantMessageField<D>::DisplayText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInstantMessageField)->get_DisplayText(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_Contacts_IContactInstantMessageField<D>::LaunchUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInstantMessageField)->get_LaunchUri(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactInstantMessageField consume_Windows_ApplicationModel_Contacts_IContactInstantMessageFieldFactory<D>::CreateInstantMessage(param::hstring const& userName) const
{
    Windows::ApplicationModel::Contacts::ContactInstantMessageField field{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory)->CreateInstantMessage_Default(get_abi(userName), put_abi(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactInstantMessageField consume_Windows_ApplicationModel_Contacts_IContactInstantMessageFieldFactory<D>::CreateInstantMessage(param::hstring const& userName, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) const
{
    Windows::ApplicationModel::Contacts::ContactInstantMessageField field{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory)->CreateInstantMessage_Category(get_abi(userName), get_abi(category), put_abi(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactInstantMessageField consume_Windows_ApplicationModel_Contacts_IContactInstantMessageFieldFactory<D>::CreateInstantMessage(param::hstring const& userName, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category, param::hstring const& service, param::hstring const& displayText, Windows::Foundation::Uri const& verb) const
{
    Windows::ApplicationModel::Contacts::ContactInstantMessageField field{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory)->CreateInstantMessage_All(get_abi(userName), get_abi(category), get_abi(service), get_abi(displayText), get_abi(verb), put_abi(field)));
    return field;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::CompanyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->get_CompanyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::CompanyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->put_CompanyName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::CompanyYomiName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->get_CompanyYomiName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::CompanyYomiName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->put_CompanyYomiName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::Department() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->get_Department(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::Department(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->put_Department(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->put_Title(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::Manager() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->get_Manager(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::Manager(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->put_Manager(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::Office() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->get_Office(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::Office(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->put_Office(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::CompanyAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->get_CompanyAddress(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::CompanyAddress(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->put_CompanyAddress(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactJobInfo)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactLaunchActionVerbsStatics<D>::Call() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics)->get_Call(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactLaunchActionVerbsStatics<D>::Message() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics)->get_Message(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactLaunchActionVerbsStatics<D>::Map() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics)->get_Map(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactLaunchActionVerbsStatics<D>::Post() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics)->get_Post(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactLaunchActionVerbsStatics<D>::VideoCall() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics)->get_VideoCall(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactList<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactList<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactList<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactList<D>::SourceDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->get_SourceDisplayName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IContactList<D>::IsHidden() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->get_IsHidden(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactList<D>::IsHidden(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->put_IsHidden(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess consume_Windows_ApplicationModel_Contacts_IContactList<D>::OtherAppReadAccess() const
{
    Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->get_OtherAppReadAccess(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactList<D>::OtherAppReadAccess(Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->put_OtherAppReadAccess(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess consume_Windows_ApplicationModel_Contacts_IContactList<D>::OtherAppWriteAccess() const
{
    Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->get_OtherAppWriteAccess(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactList<D>::OtherAppWriteAccess(Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->put_OtherAppWriteAccess(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactChangeTracker consume_Windows_ApplicationModel_Contacts_IContactList<D>::ChangeTracker() const
{
    Windows::ApplicationModel::Contacts::ContactChangeTracker value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->get_ChangeTracker(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactListSyncManager consume_Windows_ApplicationModel_Contacts_IContactList<D>::SyncManager() const
{
    Windows::ApplicationModel::Contacts::ContactListSyncManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->get_SyncManager(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IContactList<D>::SupportsServerSearch() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->get_SupportsServerSearch(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactList<D>::UserDataAccountId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->get_UserDataAccountId(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Contacts_IContactList<D>::ContactChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactList, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const& value) const
{
    event_token returnValue{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->add_ContactChanged(get_abi(value), put_abi(returnValue)));
    return returnValue;
}

template <typename D> event_revoker<Windows::ApplicationModel::Contacts::IContactList> consume_Windows_ApplicationModel_Contacts_IContactList<D>::ContactChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactList, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Contacts::IContactList>(this, &abi_t<Windows::ApplicationModel::Contacts::IContactList>::remove_ContactChanged, ContactChanged(value));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactList<D>::ContactChanged(event_token const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->remove_ContactChanged(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_IContactList<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->SaveAsync(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_IContactList<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->DeleteAsync(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> consume_Windows_ApplicationModel_Contacts_IContactList<D>::GetContactFromRemoteIdAsync(param::hstring const& remoteId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> contact{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->GetContactFromRemoteIdAsync(get_abi(remoteId), put_abi(contact)));
    return contact;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> consume_Windows_ApplicationModel_Contacts_IContactList<D>::GetMeContactAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> meContact{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->GetMeContactAsync(put_abi(meContact)));
    return meContact;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactReader consume_Windows_ApplicationModel_Contacts_IContactList<D>::GetContactReader() const
{
    Windows::ApplicationModel::Contacts::ContactReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->GetContactReader(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactReader consume_Windows_ApplicationModel_Contacts_IContactList<D>::GetContactReader(Windows::ApplicationModel::Contacts::ContactQueryOptions const& options) const
{
    Windows::ApplicationModel::Contacts::ContactReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->GetContactReaderWithOptions(get_abi(options), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_IContactList<D>::SaveContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->SaveContactAsync(get_abi(contact), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_IContactList<D>::DeleteContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->DeleteContactAsync(get_abi(contact), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> consume_Windows_ApplicationModel_Contacts_IContactList<D>::GetContactAsync(param::hstring const& contactId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> contacts{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList)->GetContactAsync(get_abi(contactId), put_abi(contacts)));
    return contacts;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_IContactList2<D>::RegisterSyncManagerAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList2)->RegisterSyncManagerAsync(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactList2<D>::SupportsServerSearch(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList2)->put_SupportsServerSearch(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactListSyncConstraints consume_Windows_ApplicationModel_Contacts_IContactList2<D>::SyncConstraints() const
{
    Windows::ApplicationModel::Contacts::ContactListSyncConstraints value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactList2)->get_SyncConstraints(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::CanSyncDescriptions() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_CanSyncDescriptions(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::CanSyncDescriptions(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_CanSyncDescriptions(value));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxHomePhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxHomePhoneNumbers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxHomePhoneNumbers(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxHomePhoneNumbers(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxMobilePhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxMobilePhoneNumbers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxMobilePhoneNumbers(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxMobilePhoneNumbers(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxWorkPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxWorkPhoneNumbers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxWorkPhoneNumbers(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxWorkPhoneNumbers(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxOtherPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxOtherPhoneNumbers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxOtherPhoneNumbers(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxOtherPhoneNumbers(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxPagerPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxPagerPhoneNumbers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxPagerPhoneNumbers(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxPagerPhoneNumbers(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxBusinessFaxPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxBusinessFaxPhoneNumbers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxBusinessFaxPhoneNumbers(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxBusinessFaxPhoneNumbers(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxHomeFaxPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxHomeFaxPhoneNumbers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxHomeFaxPhoneNumbers(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxHomeFaxPhoneNumbers(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxCompanyPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxCompanyPhoneNumbers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxCompanyPhoneNumbers(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxCompanyPhoneNumbers(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxAssistantPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxAssistantPhoneNumbers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxAssistantPhoneNumbers(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxAssistantPhoneNumbers(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxRadioPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxRadioPhoneNumbers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxRadioPhoneNumbers(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxRadioPhoneNumbers(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxPersonalEmailAddresses() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxPersonalEmailAddresses(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxPersonalEmailAddresses(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxPersonalEmailAddresses(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxWorkEmailAddresses() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxWorkEmailAddresses(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxWorkEmailAddresses(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxWorkEmailAddresses(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxOtherEmailAddresses() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxOtherEmailAddresses(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxOtherEmailAddresses(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxOtherEmailAddresses(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxHomeAddresses() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxHomeAddresses(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxHomeAddresses(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxHomeAddresses(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxWorkAddresses() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxWorkAddresses(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxWorkAddresses(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxWorkAddresses(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxOtherAddresses() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxOtherAddresses(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxOtherAddresses(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxOtherAddresses(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxBirthdayDates() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxBirthdayDates(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxBirthdayDates(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxBirthdayDates(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxAnniversaryDates() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxAnniversaryDates(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxAnniversaryDates(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxAnniversaryDates(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxOtherDates() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxOtherDates(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxOtherDates(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxOtherDates(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxOtherRelationships() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxOtherRelationships(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxOtherRelationships(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxOtherRelationships(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxSpouseRelationships() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxSpouseRelationships(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxSpouseRelationships(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxSpouseRelationships(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxPartnerRelationships() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxPartnerRelationships(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxPartnerRelationships(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxPartnerRelationships(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxSiblingRelationships() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxSiblingRelationships(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxSiblingRelationships(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxSiblingRelationships(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxParentRelationships() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxParentRelationships(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxParentRelationships(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxParentRelationships(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxChildRelationships() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxChildRelationships(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxChildRelationships(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxChildRelationships(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxJobInfo() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxJobInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxJobInfo(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxJobInfo(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxWebsites() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->get_MaxWebsites(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>::MaxWebsites(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncConstraints)->put_MaxWebsites(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactListSyncStatus consume_Windows_ApplicationModel_Contacts_IContactListSyncManager<D>::Status() const
{
    Windows::ApplicationModel::Contacts::ContactListSyncStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncManager)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Contacts_IContactListSyncManager<D>::LastSuccessfulSyncTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncManager)->get_LastSuccessfulSyncTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Contacts_IContactListSyncManager<D>::LastAttemptedSyncTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncManager)->get_LastAttemptedSyncTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Contacts_IContactListSyncManager<D>::SyncAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncManager)->SyncAsync(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_ApplicationModel_Contacts_IContactListSyncManager<D>::SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactListSyncManager, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncManager)->add_SyncStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Contacts::IContactListSyncManager> consume_Windows_ApplicationModel_Contacts_IContactListSyncManager<D>::SyncStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactListSyncManager, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Contacts::IContactListSyncManager>(this, &abi_t<Windows::ApplicationModel::Contacts::IContactListSyncManager>::remove_SyncStatusChanged, SyncStatusChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncManager<D>::SyncStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncManager)->remove_SyncStatusChanged(get_abi(token)));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncManager2<D>::Status(Windows::ApplicationModel::Contacts::ContactListSyncStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncManager2)->put_Status(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncManager2<D>::LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncManager2)->put_LastSuccessfulSyncTime(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactListSyncManager2<D>::LastAttemptedSyncTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactListSyncManager2)->put_LastAttemptedSyncTime(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactLocationField<D>::UnstructuredAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLocationField)->get_UnstructuredAddress(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactLocationField<D>::Street() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLocationField)->get_Street(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactLocationField<D>::City() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLocationField)->get_City(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactLocationField<D>::Region() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLocationField)->get_Region(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactLocationField<D>::Country() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLocationField)->get_Country(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactLocationField<D>::PostalCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLocationField)->get_PostalCode(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactLocationField consume_Windows_ApplicationModel_Contacts_IContactLocationFieldFactory<D>::CreateLocation(param::hstring const& unstructuredAddress) const
{
    Windows::ApplicationModel::Contacts::ContactLocationField field{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLocationFieldFactory)->CreateLocation_Default(get_abi(unstructuredAddress), put_abi(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactLocationField consume_Windows_ApplicationModel_Contacts_IContactLocationFieldFactory<D>::CreateLocation(param::hstring const& unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) const
{
    Windows::ApplicationModel::Contacts::ContactLocationField field{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLocationFieldFactory)->CreateLocation_Category(get_abi(unstructuredAddress), get_abi(category), put_abi(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactLocationField consume_Windows_ApplicationModel_Contacts_IContactLocationFieldFactory<D>::CreateLocation(param::hstring const& unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category, param::hstring const& street, param::hstring const& city, param::hstring const& region, param::hstring const& country, param::hstring const& postalCode) const
{
    Windows::ApplicationModel::Contacts::ContactLocationField field{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactLocationFieldFactory)->CreateLocation_All(get_abi(unstructuredAddress), get_abi(category), get_abi(street), get_abi(city), get_abi(region), get_abi(country), get_abi(postalCode), put_abi(field)));
    return field;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> consume_Windows_ApplicationModel_Contacts_IContactManagerForUser<D>::ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerForUser)->ConvertContactToVCardAsync(get_abi(contact), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> consume_Windows_ApplicationModel_Contacts_IContactManagerForUser<D>::ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact, uint32_t maxBytes) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerForUser)->ConvertContactToVCardAsyncWithMaxBytes(get_abi(contact), maxBytes, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> consume_Windows_ApplicationModel_Contacts_IContactManagerForUser<D>::ConvertVCardToContactAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& vCard) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerForUser)->ConvertVCardToContactAsync(get_abi(vCard), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> consume_Windows_ApplicationModel_Contacts_IContactManagerForUser<D>::RequestStoreAsync(Windows::ApplicationModel::Contacts::ContactStoreAccessType const& accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerForUser)->RequestStoreAsync(get_abi(accessType), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore> consume_Windows_ApplicationModel_Contacts_IContactManagerForUser<D>::RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType const& accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerForUser)->RequestAnnotationStoreAsync(get_abi(accessType), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactNameOrder consume_Windows_ApplicationModel_Contacts_IContactManagerForUser<D>::SystemDisplayNameOrder() const
{
    Windows::ApplicationModel::Contacts::ContactNameOrder value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerForUser)->get_SystemDisplayNameOrder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactManagerForUser<D>::SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerForUser)->put_SystemDisplayNameOrder(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactNameOrder consume_Windows_ApplicationModel_Contacts_IContactManagerForUser<D>::SystemSortOrder() const
{
    Windows::ApplicationModel::Contacts::ContactNameOrder value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerForUser)->get_SystemSortOrder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactManagerForUser<D>::SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerForUser)->put_SystemSortOrder(get_abi(value)));
}

template <typename D> Windows::System::User consume_Windows_ApplicationModel_Contacts_IContactManagerForUser<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerForUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactManagerForUser2<D>::ShowFullContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::FullContactCardOptions const& fullContactCardOptions) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerForUser2)->ShowFullContactCard(get_abi(contact), get_abi(fullContactCardOptions)));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactManagerStatics<D>::ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics)->ShowContactCard(get_abi(contact), get_abi(selection)));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactManagerStatics<D>::ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics)->ShowContactCardWithPlacement(get_abi(contact), get_abi(selection), get_abi(preferredPlacement)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader consume_Windows_ApplicationModel_Contacts_IContactManagerStatics<D>::ShowDelayLoadedContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader dataLoader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics)->ShowDelayLoadedContactCard(get_abi(contact), get_abi(selection), get_abi(preferredPlacement), put_abi(dataLoader)));
    return dataLoader;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> consume_Windows_ApplicationModel_Contacts_IContactManagerStatics2<D>::RequestStoreAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> store{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics2)->RequestStoreAsync(put_abi(store)));
    return store;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> vCard{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->ConvertContactToVCardAsync(get_abi(contact), put_abi(vCard)));
    return vCard;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact, uint32_t maxBytes) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> vCard{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->ConvertContactToVCardAsyncWithMaxBytes(get_abi(contact), maxBytes, put_abi(vCard)));
    return vCard;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::ConvertVCardToContactAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& vCard) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> contact{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->ConvertVCardToContactAsync(get_abi(vCard), put_abi(contact)));
    return contact;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::RequestStoreAsync(Windows::ApplicationModel::Contacts::ContactStoreAccessType const& accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> store{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->RequestStoreAsyncWithAccessType(get_abi(accessType), put_abi(store)));
    return store;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore> consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType const& accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore> store{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->RequestAnnotationStoreAsync(get_abi(accessType), put_abi(store)));
    return store;
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::IsShowContactCardSupported() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->IsShowContactCardSupported(&result));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::ApplicationModel::Contacts::ContactCardOptions const& contactCardOptions) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->ShowContactCardWithOptions(get_abi(contact), get_abi(selection), get_abi(preferredPlacement), get_abi(contactCardOptions)));
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::IsShowDelayLoadedContactCardSupported() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->IsShowDelayLoadedContactCardSupported(&result));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::ShowDelayLoadedContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::ApplicationModel::Contacts::ContactCardOptions const& contactCardOptions) const
{
    Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader dataLoader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->ShowDelayLoadedContactCardWithOptions(get_abi(contact), get_abi(selection), get_abi(preferredPlacement), get_abi(contactCardOptions), put_abi(dataLoader)));
    return dataLoader;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::ShowFullContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::FullContactCardOptions const& fullContactCardOptions) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->ShowFullContactCard(get_abi(contact), get_abi(fullContactCardOptions)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactNameOrder consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::SystemDisplayNameOrder() const
{
    Windows::ApplicationModel::Contacts::ContactNameOrder value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->get_SystemDisplayNameOrder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->put_SystemDisplayNameOrder(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactNameOrder consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::SystemSortOrder() const
{
    Windows::ApplicationModel::Contacts::ContactNameOrder value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->get_SystemSortOrder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>::SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics3)->put_SystemSortOrder(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactManagerForUser consume_Windows_ApplicationModel_Contacts_IContactManagerStatics4<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::ApplicationModel::Contacts::ContactManagerForUser result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics4)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Contacts_IContactManagerStatics5<D>::IsShowFullContactCardSupportedAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics5)->IsShowFullContactCardSupportedAsync(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IContactManagerStatics5<D>::IncludeMiddleNameInSystemDisplayAndSort() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics5)->get_IncludeMiddleNameInSystemDisplayAndSort(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactManagerStatics5<D>::IncludeMiddleNameInSystemDisplayAndSort(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactManagerStatics5)->put_IncludeMiddleNameInSystemDisplayAndSort(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactMatchReasonKind consume_Windows_ApplicationModel_Contacts_IContactMatchReason<D>::Field() const
{
    Windows::ApplicationModel::Contacts::ContactMatchReasonKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactMatchReason)->get_Field(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> consume_Windows_ApplicationModel_Contacts_IContactMatchReason<D>::Segments() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactMatchReason)->get_Segments(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactMatchReason<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactMatchReason)->get_Text(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactName<D>::FirstName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->get_FirstName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactName<D>::FirstName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->put_FirstName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactName<D>::LastName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->get_LastName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactName<D>::LastName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->put_LastName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactName<D>::MiddleName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->get_MiddleName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactName<D>::MiddleName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->put_MiddleName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactName<D>::YomiGivenName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->get_YomiGivenName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactName<D>::YomiGivenName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->put_YomiGivenName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactName<D>::YomiFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->get_YomiFamilyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactName<D>::YomiFamilyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->put_YomiFamilyName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactName<D>::HonorificNameSuffix() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->get_HonorificNameSuffix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactName<D>::HonorificNameSuffix(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->put_HonorificNameSuffix(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactName<D>::HonorificNamePrefix() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->get_HonorificNamePrefix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactName<D>::HonorificNamePrefix(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->put_HonorificNamePrefix(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactName<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactName<D>::YomiDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactName)->get_YomiDisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactPanel<D>::ClosePanel() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPanel)->ClosePanel());
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_ApplicationModel_Contacts_IContactPanel<D>::HeaderColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPanel)->get_HeaderColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactPanel<D>::HeaderColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPanel)->put_HeaderColor(get_abi(value)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Contacts_IContactPanel<D>::LaunchFullAppRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPanel)->add_LaunchFullAppRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Contacts::IContactPanel> consume_Windows_ApplicationModel_Contacts_IContactPanel<D>::LaunchFullAppRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Contacts::IContactPanel>(this, &abi_t<Windows::ApplicationModel::Contacts::IContactPanel>::remove_LaunchFullAppRequested, LaunchFullAppRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactPanel<D>::LaunchFullAppRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPanel)->remove_LaunchFullAppRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Contacts_IContactPanel<D>::Closing(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPanel)->add_Closing(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Contacts::IContactPanel> consume_Windows_ApplicationModel_Contacts_IContactPanel<D>::Closing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Contacts::IContactPanel>(this, &abi_t<Windows::ApplicationModel::Contacts::IContactPanel>::remove_Closing, Closing(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactPanel<D>::Closing(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPanel)->remove_Closing(get_abi(token)));
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Contacts_IContactPanelClosingEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IContactPanelLaunchFullAppRequestedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactPanelLaunchFullAppRequestedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs)->put_Handled(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactPhone<D>::Number() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPhone)->get_Number(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactPhone<D>::Number(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPhone)->put_Number(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactPhoneKind consume_Windows_ApplicationModel_Contacts_IContactPhone<D>::Kind() const
{
    Windows::ApplicationModel::Contacts::ContactPhoneKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPhone)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactPhone<D>::Kind(Windows::ApplicationModel::Contacts::ContactPhoneKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPhone)->put_Kind(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactPhone<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPhone)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactPhone<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPhone)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactPicker<D>::CommitButtonText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPicker)->get_CommitButtonText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactPicker<D>::CommitButtonText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPicker)->put_CommitButtonText(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactSelectionMode consume_Windows_ApplicationModel_Contacts_IContactPicker<D>::SelectionMode() const
{
    Windows::ApplicationModel::Contacts::ContactSelectionMode value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPicker)->get_SelectionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactPicker<D>::SelectionMode(Windows::ApplicationModel::Contacts::ContactSelectionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPicker)->put_SelectionMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Contacts_IContactPicker<D>::DesiredFields() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPicker)->get_DesiredFields(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactInformation> consume_Windows_ApplicationModel_Contacts_IContactPicker<D>::PickSingleContactAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactInformation> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPicker)->PickSingleContactAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactInformation>> consume_Windows_ApplicationModel_Contacts_IContactPicker<D>::PickMultipleContactsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactInformation>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPicker)->PickMultipleContactsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactFieldType> consume_Windows_ApplicationModel_Contacts_IContactPicker2<D>::DesiredFieldsWithContactFieldType() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactFieldType> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPicker2)->get_DesiredFieldsWithContactFieldType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> consume_Windows_ApplicationModel_Contacts_IContactPicker2<D>::PickContactAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPicker2)->PickContactAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::Contact>> consume_Windows_ApplicationModel_Contacts_IContactPicker2<D>::PickContactsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::Contact>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPicker2)->PickContactsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::System::User consume_Windows_ApplicationModel_Contacts_IContactPicker3<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPicker3)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactPicker consume_Windows_ApplicationModel_Contacts_IContactPickerStatics<D>::CreateForUser(Windows::System::User const& user) const
{
    Windows::ApplicationModel::Contacts::ContactPicker result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPickerStatics)->CreateForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Contacts_IContactPickerStatics<D>::IsSupportedAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactPickerStatics)->IsSupportedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQueryTextSearch consume_Windows_ApplicationModel_Contacts_IContactQueryOptions<D>::TextSearch() const
{
    Windows::ApplicationModel::Contacts::ContactQueryTextSearch value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryOptions)->get_TextSearch(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Contacts_IContactQueryOptions<D>::ContactListIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryOptions)->get_ContactListIds(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IContactQueryOptions<D>::IncludeContactsFromHiddenLists() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryOptions)->get_IncludeContactsFromHiddenLists(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactQueryOptions<D>::IncludeContactsFromHiddenLists(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryOptions)->put_IncludeContactsFromHiddenLists(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQueryDesiredFields consume_Windows_ApplicationModel_Contacts_IContactQueryOptions<D>::DesiredFields() const
{
    Windows::ApplicationModel::Contacts::ContactQueryDesiredFields value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryOptions)->get_DesiredFields(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactQueryOptions<D>::DesiredFields(Windows::ApplicationModel::Contacts::ContactQueryDesiredFields const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryOptions)->put_DesiredFields(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactAnnotationOperations consume_Windows_ApplicationModel_Contacts_IContactQueryOptions<D>::DesiredOperations() const
{
    Windows::ApplicationModel::Contacts::ContactAnnotationOperations value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryOptions)->get_DesiredOperations(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactQueryOptions<D>::DesiredOperations(Windows::ApplicationModel::Contacts::ContactAnnotationOperations const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryOptions)->put_DesiredOperations(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Contacts_IContactQueryOptions<D>::AnnotationListIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryOptions)->get_AnnotationListIds(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQueryOptions consume_Windows_ApplicationModel_Contacts_IContactQueryOptionsFactory<D>::CreateWithText(param::hstring const& text) const
{
    Windows::ApplicationModel::Contacts::ContactQueryOptions result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory)->CreateWithText(get_abi(text), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQueryOptions consume_Windows_ApplicationModel_Contacts_IContactQueryOptionsFactory<D>::CreateWithTextAndFields(param::hstring const& text, Windows::ApplicationModel::Contacts::ContactQuerySearchFields const& fields) const
{
    Windows::ApplicationModel::Contacts::ContactQueryOptions result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory)->CreateWithTextAndFields(get_abi(text), get_abi(fields), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQuerySearchFields consume_Windows_ApplicationModel_Contacts_IContactQueryTextSearch<D>::Fields() const
{
    Windows::ApplicationModel::Contacts::ContactQuerySearchFields value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryTextSearch)->get_Fields(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactQueryTextSearch<D>::Fields(Windows::ApplicationModel::Contacts::ContactQuerySearchFields const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryTextSearch)->put_Fields(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactQueryTextSearch<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryTextSearch)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactQueryTextSearch<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryTextSearch)->put_Text(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQuerySearchScope consume_Windows_ApplicationModel_Contacts_IContactQueryTextSearch<D>::SearchScope() const
{
    Windows::ApplicationModel::Contacts::ContactQuerySearchScope value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryTextSearch)->get_SearchScope(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactQueryTextSearch<D>::SearchScope(Windows::ApplicationModel::Contacts::ContactQuerySearchScope const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactQueryTextSearch)->put_SearchScope(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactBatch> consume_Windows_ApplicationModel_Contacts_IContactReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactBatch> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactReader)->ReadBatchAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactMatchReason> consume_Windows_ApplicationModel_Contacts_IContactReader<D>::GetMatchingPropertiesWithMatchReason(Windows::ApplicationModel::Contacts::Contact const& contact) const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactMatchReason> ppRetVal{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactReader)->GetMatchingPropertiesWithMatchReason(get_abi(contact), put_abi(ppRetVal)));
    return ppRetVal;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactSignificantOther<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactSignificantOther)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactSignificantOther<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactSignificantOther)->put_Name(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactSignificantOther<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactSignificantOther)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactSignificantOther<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactSignificantOther)->put_Description(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactRelationship consume_Windows_ApplicationModel_Contacts_IContactSignificantOther2<D>::Relationship() const
{
    Windows::ApplicationModel::Contacts::ContactRelationship value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactSignificantOther2)->get_Relationship(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactSignificantOther2<D>::Relationship(Windows::ApplicationModel::Contacts::ContactRelationship const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactSignificantOther2)->put_Relationship(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> consume_Windows_ApplicationModel_Contacts_IContactStore<D>::FindContactsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> contacts{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore)->FindContactsAsync(put_abi(contacts)));
    return contacts;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> consume_Windows_ApplicationModel_Contacts_IContactStore<D>::FindContactsAsync(param::hstring const& searchText) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> contacts{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore)->FindContactsWithSearchTextAsync(get_abi(searchText), put_abi(contacts)));
    return contacts;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> consume_Windows_ApplicationModel_Contacts_IContactStore<D>::GetContactAsync(param::hstring const& contactId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> contacts{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore)->GetContactAsync(get_abi(contactId), put_abi(contacts)));
    return contacts;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactChangeTracker consume_Windows_ApplicationModel_Contacts_IContactStore2<D>::ChangeTracker() const
{
    Windows::ApplicationModel::Contacts::ContactChangeTracker value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore2)->get_ChangeTracker(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Contacts_IContactStore2<D>::ContactChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactStore, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const& value) const
{
    event_token returnValue{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore2)->add_ContactChanged(get_abi(value), put_abi(returnValue)));
    return returnValue;
}

template <typename D> event_revoker<Windows::ApplicationModel::Contacts::IContactStore2> consume_Windows_ApplicationModel_Contacts_IContactStore2<D>::ContactChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactStore, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Contacts::IContactStore2>(this, &abi_t<Windows::ApplicationModel::Contacts::IContactStore2>::remove_ContactChanged, ContactChanged(value));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactStore2<D>::ContactChanged(event_token const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore2)->remove_ContactChanged(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::AggregateContactManager consume_Windows_ApplicationModel_Contacts_IContactStore2<D>::AggregateContactManager() const
{
    Windows::ApplicationModel::Contacts::AggregateContactManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore2)->get_AggregateContactManager(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>> consume_Windows_ApplicationModel_Contacts_IContactStore2<D>::FindContactListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore2)->FindContactListsAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> consume_Windows_ApplicationModel_Contacts_IContactStore2<D>::GetContactListAsync(param::hstring const& contactListId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore2)->GetContactListAsync(get_abi(contactListId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> consume_Windows_ApplicationModel_Contacts_IContactStore2<D>::CreateContactListAsync(param::hstring const& displayName) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore2)->CreateContactListAsync(get_abi(displayName), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> consume_Windows_ApplicationModel_Contacts_IContactStore2<D>::GetMeContactAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> meContact{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore2)->GetMeContactAsync(put_abi(meContact)));
    return meContact;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactReader consume_Windows_ApplicationModel_Contacts_IContactStore2<D>::GetContactReader() const
{
    Windows::ApplicationModel::Contacts::ContactReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore2)->GetContactReader(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactReader consume_Windows_ApplicationModel_Contacts_IContactStore2<D>::GetContactReader(Windows::ApplicationModel::Contacts::ContactQueryOptions const& options) const
{
    Windows::ApplicationModel::Contacts::ContactReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore2)->GetContactReaderWithOptions(get_abi(options), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> consume_Windows_ApplicationModel_Contacts_IContactStore2<D>::CreateContactListAsync(param::hstring const& displayName, param::hstring const& userDataAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactStore2)->CreateContactListInAccountAsync(get_abi(displayName), get_abi(userDataAccountId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_Contacts_IContactWebsite<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactWebsite)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactWebsite<D>::Uri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactWebsite)->put_Uri(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactWebsite<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactWebsite)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactWebsite<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactWebsite)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IContactWebsite2<D>::RawValue() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactWebsite2)->get_RawValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IContactWebsite2<D>::RawValue(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IContactWebsite2)->put_RawValue(get_abi(value)));
}

template <typename D> Windows::UI::ViewManagement::ViewSizePreference consume_Windows_ApplicationModel_Contacts_IFullContactCardOptions<D>::DesiredRemainingView() const
{
    Windows::UI::ViewManagement::ViewSizePreference value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IFullContactCardOptions)->get_DesiredRemainingView(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IFullContactCardOptions<D>::DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IFullContactCardOptions)->put_DesiredRemainingView(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IKnownContactFieldStatics<D>::Email() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IKnownContactFieldStatics)->get_Email(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IKnownContactFieldStatics<D>::PhoneNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IKnownContactFieldStatics)->get_PhoneNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IKnownContactFieldStatics<D>::Location() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IKnownContactFieldStatics)->get_Location(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IKnownContactFieldStatics<D>::InstantMessage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IKnownContactFieldStatics)->get_InstantMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactFieldType consume_Windows_ApplicationModel_Contacts_IKnownContactFieldStatics<D>::ConvertNameToType(param::hstring const& name) const
{
    Windows::ApplicationModel::Contacts::ContactFieldType type{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IKnownContactFieldStatics)->ConvertNameToType(get_abi(name), put_abi(type)));
    return type;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_IKnownContactFieldStatics<D>::ConvertTypeToName(Windows::ApplicationModel::Contacts::ContactFieldType const& type) const
{
    hstring name{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IKnownContactFieldStatics)->ConvertTypeToName(get_abi(type), put_abi(name)));
    return name;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Contacts_IPinnedContactIdsQueryResult<D>::ContactIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult)->get_ContactIds(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_ApplicationModel_Contacts_IPinnedContactManager<D>::User() const
{
    Windows::System::User user{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IPinnedContactManager)->get_User(put_abi(user)));
    return user;
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IPinnedContactManager<D>::IsPinSurfaceSupported(Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IPinnedContactManager)->IsPinSurfaceSupported(get_abi(surface), &result));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IPinnedContactManager<D>::IsContactPinned(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IPinnedContactManager)->IsContactPinned(get_abi(contact), get_abi(surface), &result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Contacts_IPinnedContactManager<D>::RequestPinContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IPinnedContactManager)->RequestPinContactAsync(get_abi(contact), get_abi(surface), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Contacts_IPinnedContactManager<D>::RequestPinContactsAsync(param::async_iterable<Windows::ApplicationModel::Contacts::Contact> const& contacts, Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IPinnedContactManager)->RequestPinContactsAsync(get_abi(contacts), get_abi(surface), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Contacts_IPinnedContactManager<D>::RequestUnpinContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IPinnedContactManager)->RequestUnpinContactAsync(get_abi(contact), get_abi(surface), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_IPinnedContactManager<D>::SignalContactActivity(Windows::ApplicationModel::Contacts::Contact const& contact) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IPinnedContactManager)->SignalContactActivity(get_abi(contact)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::PinnedContactIdsQueryResult> consume_Windows_ApplicationModel_Contacts_IPinnedContactManager<D>::GetPinnedContactIdsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::PinnedContactIdsQueryResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IPinnedContactManager)->GetPinnedContactIdsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Contacts::PinnedContactManager consume_Windows_ApplicationModel_Contacts_IPinnedContactManagerStatics<D>::GetDefault() const
{
    Windows::ApplicationModel::Contacts::PinnedContactManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::PinnedContactManager consume_Windows_ApplicationModel_Contacts_IPinnedContactManagerStatics<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::ApplicationModel::Contacts::PinnedContactManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_IPinnedContactManagerStatics<D>::IsSupported() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics)->IsSupported(&result));
    return result;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IAggregateContactManager> : produce_base<D, Windows::ApplicationModel::Contacts::IAggregateContactManager>
{
    HRESULT __stdcall FindRawContactsAsync(::IUnknown* contact, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FindRawContactsAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryLinkContactsAsync(::IUnknown* primaryContact, ::IUnknown* secondaryContact, ::IUnknown** contact) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contact = detach_abi(this->shim().TryLinkContactsAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&primaryContact), *reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&secondaryContact)));
            return S_OK;
        }
        catch (...)
        {
            *contact = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnlinkRawContactAsync(::IUnknown* contact, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnlinkRawContactAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetPreferredSourceForPictureAsync(::IUnknown* aggregateContact, ::IUnknown* rawContact, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrySetPreferredSourceForPictureAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&aggregateContact), *reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&rawContact)));
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
struct produce<D, Windows::ApplicationModel::Contacts::IAggregateContactManager2> : produce_base<D, Windows::ApplicationModel::Contacts::IAggregateContactManager2>
{
    HRESULT __stdcall SetRemoteIdentificationInformationAsync(HSTRING contactListId, HSTRING remoteSourceId, HSTRING accountId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SetRemoteIdentificationInformationAsync(*reinterpret_cast<hstring const*>(&contactListId), *reinterpret_cast<hstring const*>(&remoteSourceId), *reinterpret_cast<hstring const*>(&accountId)));
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
struct produce<D, Windows::ApplicationModel::Contacts::IContact> : produce_base<D, Windows::ApplicationModel::Contacts::IContact>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbnail(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Fields(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Fields());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContact2> : produce_base<D, Windows::ApplicationModel::Contacts::IContact2>
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

    HRESULT __stdcall put_Notes(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Notes(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Phones(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Phones());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Emails(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Emails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Addresses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Addresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectedServiceAccounts(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConnectedServiceAccounts());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImportantDates(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImportantDates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataSuppliers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataSuppliers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JobInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().JobInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignificantOthers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignificantOthers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Websites(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Websites());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProviderProperties());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContact3> : produce_base<D, Windows::ApplicationModel::Contacts::IContact3>
{
    HRESULT __stdcall get_ContactListId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContactListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayPictureUserUpdateTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayPictureUserUpdateTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayPictureUserUpdateTime(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayPictureUserUpdateTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMe(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMe());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AggregateId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AggregateId());
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

    HRESULT __stdcall get_RingToneToken(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RingToneToken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RingToneToken(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RingToneToken(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDisplayPictureManuallySet(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDisplayPictureManuallySet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LargeDisplayPicture(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LargeDisplayPicture());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmallDisplayPicture(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SmallDisplayPicture());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceDisplayPicture(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceDisplayPicture());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceDisplayPicture(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceDisplayPicture(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextToneToken(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextToneToken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TextToneToken(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextToneToken(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAggregate(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAggregate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FullName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayNameOverride(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayNameOverride());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayNameOverride(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayNameOverride(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall put_Nickname(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Nickname(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SortName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SortName());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactAddress> : produce_base<D, Windows::ApplicationModel::Contacts::IContactAddress>
{
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

    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactAddressKind>* value) noexcept override
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

    HRESULT __stdcall put_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactAddressKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Kind(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactAddressKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactAnnotation> : produce_base<D, Windows::ApplicationModel::Contacts::IContactAnnotation>
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

    HRESULT __stdcall get_AnnotationListId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnnotationListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContactId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContactId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContactId(*reinterpret_cast<hstring const*>(&value));
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

    HRESULT __stdcall get_SupportedOperations(abi_t<Windows::ApplicationModel::Contacts::ContactAnnotationOperations>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedOperations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SupportedOperations(abi_t<Windows::ApplicationModel::Contacts::ContactAnnotationOperations> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportedOperations(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactAnnotationOperations const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDisabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDisabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProviderProperties());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactAnnotation2> : produce_base<D, Windows::ApplicationModel::Contacts::IContactAnnotation2>
{
    HRESULT __stdcall get_ContactListId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContactListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContactListId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContactListId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactAnnotationList> : produce_base<D, Windows::ApplicationModel::Contacts::IContactAnnotationList>
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

    HRESULT __stdcall get_ProviderPackageFamilyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProviderPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDataAccountId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserDataAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySaveAnnotationAsync(::IUnknown* annotation, ::IUnknown** ppResult) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppResult = detach_abi(this->shim().TrySaveAnnotationAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactAnnotation const*>(&annotation)));
            return S_OK;
        }
        catch (...)
        {
            *ppResult = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAnnotationAsync(HSTRING annotationId, ::IUnknown** annotation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *annotation = detach_abi(this->shim().GetAnnotationAsync(*reinterpret_cast<hstring const*>(&annotationId)));
            return S_OK;
        }
        catch (...)
        {
            *annotation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAnnotationsByRemoteIdAsync(HSTRING remoteId, ::IUnknown** annotations) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *annotations = detach_abi(this->shim().FindAnnotationsByRemoteIdAsync(*reinterpret_cast<hstring const*>(&remoteId)));
            return S_OK;
        }
        catch (...)
        {
            *annotations = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAnnotationsAsync(::IUnknown** annotations) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *annotations = detach_abi(this->shim().FindAnnotationsAsync());
            return S_OK;
        }
        catch (...)
        {
            *annotations = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAnnotationAsync(::IUnknown* annotation, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeleteAnnotationAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactAnnotation const*>(&annotation)));
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactAnnotationStore> : produce_base<D, Windows::ApplicationModel::Contacts::IContactAnnotationStore>
{
    HRESULT __stdcall FindContactIdsByEmailAsync(HSTRING emailAddress, ::IUnknown** contactIds) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contactIds = detach_abi(this->shim().FindContactIdsByEmailAsync(*reinterpret_cast<hstring const*>(&emailAddress)));
            return S_OK;
        }
        catch (...)
        {
            *contactIds = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindContactIdsByPhoneNumberAsync(HSTRING phoneNumber, ::IUnknown** contactIds) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contactIds = detach_abi(this->shim().FindContactIdsByPhoneNumberAsync(*reinterpret_cast<hstring const*>(&phoneNumber)));
            return S_OK;
        }
        catch (...)
        {
            *contactIds = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAnnotationsForContactAsync(::IUnknown* contact, ::IUnknown** annotations) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *annotations = detach_abi(this->shim().FindAnnotationsForContactAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *annotations = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DisableAnnotationAsync(::IUnknown* annotation, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisableAnnotationAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactAnnotation const*>(&annotation)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAnnotationListAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAnnotationListAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAnnotationListInAccountAsync(HSTRING userDataAccountId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAnnotationListAsync(*reinterpret_cast<hstring const*>(&userDataAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAnnotationListAsync(HSTRING annotationListId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAnnotationListAsync(*reinterpret_cast<hstring const*>(&annotationListId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAnnotationListsAsync(::IUnknown** lists) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *lists = detach_abi(this->shim().FindAnnotationListsAsync());
            return S_OK;
        }
        catch (...)
        {
            *lists = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactAnnotationStore2> : produce_base<D, Windows::ApplicationModel::Contacts::IContactAnnotationStore2>
{
    HRESULT __stdcall FindAnnotationsForContactListAsync(HSTRING contactListId, ::IUnknown** annotations) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *annotations = detach_abi(this->shim().FindAnnotationsForContactListAsync(*reinterpret_cast<hstring const*>(&contactListId)));
            return S_OK;
        }
        catch (...)
        {
            *annotations = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactBatch> : produce_base<D, Windows::ApplicationModel::Contacts::IContactBatch>
{
    HRESULT __stdcall get_Contacts(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contacts());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Contacts::ContactBatchStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader> : produce_base<D, Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader>
{
    HRESULT __stdcall SetData(::IUnknown* contact) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetData(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactCardOptions> : produce_base<D, Windows::ApplicationModel::Contacts::IContactCardOptions>
{
    HRESULT __stdcall get_HeaderKind(abi_t<Windows::ApplicationModel::Contacts::ContactCardHeaderKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeaderKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeaderKind(abi_t<Windows::ApplicationModel::Contacts::ContactCardHeaderKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeaderKind(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactCardHeaderKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InitialTabKind(abi_t<Windows::ApplicationModel::Contacts::ContactCardTabKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InitialTabKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InitialTabKind(abi_t<Windows::ApplicationModel::Contacts::ContactCardTabKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialTabKind(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactCardTabKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactCardOptions2> : produce_base<D, Windows::ApplicationModel::Contacts::IContactCardOptions2>
{
    HRESULT __stdcall get_ServerSearchContactListIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServerSearchContactListIds());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactChange> : produce_base<D, Windows::ApplicationModel::Contacts::IContactChange>
{
    HRESULT __stdcall get_ChangeType(abi_t<Windows::ApplicationModel::Contacts::ContactChangeType>* value) noexcept override
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

    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contact());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactChangeReader> : produce_base<D, Windows::ApplicationModel::Contacts::IContactChangeReader>
{
    HRESULT __stdcall AcceptChanges() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptChanges();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AcceptChangesThrough(::IUnknown* lastChangeToAccept) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptChangesThrough(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactChange const*>(&lastChangeToAccept));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadBatchAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadBatchAsync());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactChangeTracker> : produce_base<D, Windows::ApplicationModel::Contacts::IContactChangeTracker>
{
    HRESULT __stdcall Enable() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enable();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetChangeReader(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetChangeReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Reset() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reset();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactChangedDeferral> : produce_base<D, Windows::ApplicationModel::Contacts::IContactChangedDeferral>
{
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Contacts::IContactChangedEventArgs>
{
    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount> : produce_base<D, Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount>
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

    HRESULT __stdcall get_ServiceName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServiceName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServiceName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactDate> : produce_base<D, Windows::ApplicationModel::Contacts::IContactDate>
{
    HRESULT __stdcall get_Day(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Day());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Day(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Day(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Month(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Month());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Month(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Month(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Year(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Year());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Year(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Year(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactDateKind>* value) noexcept override
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

    HRESULT __stdcall put_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactDateKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Kind(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactDateKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactEmail> : produce_base<D, Windows::ApplicationModel::Contacts::IContactEmail>
{
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

    HRESULT __stdcall put_Address(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Address(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactEmailKind>* value) noexcept override
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

    HRESULT __stdcall put_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactEmailKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Kind(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactEmailKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactField> : produce_base<D, Windows::ApplicationModel::Contacts::IContactField>
{
    HRESULT __stdcall get_Type(abi_t<Windows::ApplicationModel::Contacts::ContactFieldType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Category(abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Category());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactFieldFactory> : produce_base<D, Windows::ApplicationModel::Contacts::IContactFieldFactory>
{
    HRESULT __stdcall CreateField_Default(HSTRING value, abi_t<Windows::ApplicationModel::Contacts::ContactFieldType> type, ::IUnknown** field) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *field = detach_abi(this->shim().CreateField(*reinterpret_cast<hstring const*>(&value), *reinterpret_cast<Windows::ApplicationModel::Contacts::ContactFieldType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateField_Category(HSTRING value, abi_t<Windows::ApplicationModel::Contacts::ContactFieldType> type, abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory> category, ::IUnknown** field) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *field = detach_abi(this->shim().CreateField(*reinterpret_cast<hstring const*>(&value), *reinterpret_cast<Windows::ApplicationModel::Contacts::ContactFieldType const*>(&type), *reinterpret_cast<Windows::ApplicationModel::Contacts::ContactFieldCategory const*>(&category)));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateField_Custom(HSTRING name, HSTRING value, abi_t<Windows::ApplicationModel::Contacts::ContactFieldType> type, abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory> category, ::IUnknown** field) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *field = detach_abi(this->shim().CreateField(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value), *reinterpret_cast<Windows::ApplicationModel::Contacts::ContactFieldType const*>(&type), *reinterpret_cast<Windows::ApplicationModel::Contacts::ContactFieldCategory const*>(&category)));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactGroup> : produce_base<D, Windows::ApplicationModel::Contacts::IContactGroup>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactInformation> : produce_base<D, Windows::ApplicationModel::Contacts::IContactInformation>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetThumbnailAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetThumbnailAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Emails(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Emails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Locations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Locations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstantMessages(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstantMessages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomFields(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomFields());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall QueryCustomFields(HSTRING customName, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryCustomFields(*reinterpret_cast<hstring const*>(&customName)));
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactInstantMessageField> : produce_base<D, Windows::ApplicationModel::Contacts::IContactInstantMessageField>
{
    HRESULT __stdcall get_UserName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Service(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Service());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LaunchUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LaunchUri());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory> : produce_base<D, Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>
{
    HRESULT __stdcall CreateInstantMessage_Default(HSTRING userName, ::IUnknown** field) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *field = detach_abi(this->shim().CreateInstantMessage(*reinterpret_cast<hstring const*>(&userName)));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstantMessage_Category(HSTRING userName, abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory> category, ::IUnknown** field) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *field = detach_abi(this->shim().CreateInstantMessage(*reinterpret_cast<hstring const*>(&userName), *reinterpret_cast<Windows::ApplicationModel::Contacts::ContactFieldCategory const*>(&category)));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstantMessage_All(HSTRING userName, abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory> category, HSTRING service, HSTRING displayText, ::IUnknown* verb, ::IUnknown** field) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *field = detach_abi(this->shim().CreateInstantMessage(*reinterpret_cast<hstring const*>(&userName), *reinterpret_cast<Windows::ApplicationModel::Contacts::ContactFieldCategory const*>(&category), *reinterpret_cast<hstring const*>(&service), *reinterpret_cast<hstring const*>(&displayText), *reinterpret_cast<Windows::Foundation::Uri const*>(&verb)));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactJobInfo> : produce_base<D, Windows::ApplicationModel::Contacts::IContactJobInfo>
{
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

    HRESULT __stdcall put_CompanyName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompanyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompanyYomiName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompanyYomiName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CompanyYomiName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompanyYomiName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Department(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Department());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Department(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Department(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall put_Title(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall put_Manager(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Manager(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Office(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Office());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Office(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Office(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompanyAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompanyAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CompanyAddress(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompanyAddress(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics> : produce_base<D, Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>
{
    HRESULT __stdcall get_Call(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Call());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Map(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Map());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Post(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Post());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoCall(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoCall());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactList> : produce_base<D, Windows::ApplicationModel::Contacts::IContactList>
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

    HRESULT __stdcall get_SourceDisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHidden(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsHidden());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsHidden(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsHidden(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppReadAccess(abi_t<Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OtherAppReadAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppReadAccess(abi_t<Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OtherAppReadAccess(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppWriteAccess(abi_t<Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OtherAppWriteAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppWriteAccess(abi_t<Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OtherAppWriteAccess(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChangeTracker(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeTracker());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SyncManager(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SyncManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsServerSearch(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportsServerSearch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDataAccountId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserDataAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ContactChanged(::IUnknown* value, abi_t<event_token>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().ContactChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactList, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ContactChanged(abi_t<event_token> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContactChanged(*reinterpret_cast<event_token const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveAsync(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAsync(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContactFromRemoteIdAsync(HSTRING remoteId, ::IUnknown** contact) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contact = detach_abi(this->shim().GetContactFromRemoteIdAsync(*reinterpret_cast<hstring const*>(&remoteId)));
            return S_OK;
        }
        catch (...)
        {
            *contact = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMeContactAsync(::IUnknown** meContact) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *meContact = detach_abi(this->shim().GetMeContactAsync());
            return S_OK;
        }
        catch (...)
        {
            *meContact = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContactReader(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetContactReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContactReaderWithOptions(::IUnknown* options, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetContactReader(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactQueryOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveContactAsync(::IUnknown* contact, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SaveContactAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteContactAsync(::IUnknown* contact, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeleteContactAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContactAsync(HSTRING contactId, ::IUnknown** contacts) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contacts = detach_abi(this->shim().GetContactAsync(*reinterpret_cast<hstring const*>(&contactId)));
            return S_OK;
        }
        catch (...)
        {
            *contacts = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactList2> : produce_base<D, Windows::ApplicationModel::Contacts::IContactList2>
{
    HRESULT __stdcall RegisterSyncManagerAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RegisterSyncManagerAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SupportsServerSearch(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportsServerSearch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SyncConstraints(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SyncConstraints());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactListSyncConstraints> : produce_base<D, Windows::ApplicationModel::Contacts::IContactListSyncConstraints>
{
    HRESULT __stdcall get_CanSyncDescriptions(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanSyncDescriptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanSyncDescriptions(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanSyncDescriptions(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxHomePhoneNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxHomePhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxHomePhoneNumbers(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxHomePhoneNumbers(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxMobilePhoneNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxMobilePhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxMobilePhoneNumbers(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxMobilePhoneNumbers(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxWorkPhoneNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxWorkPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxWorkPhoneNumbers(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxWorkPhoneNumbers(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxOtherPhoneNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxOtherPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxOtherPhoneNumbers(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxOtherPhoneNumbers(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPagerPhoneNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPagerPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxPagerPhoneNumbers(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxPagerPhoneNumbers(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxBusinessFaxPhoneNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxBusinessFaxPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxBusinessFaxPhoneNumbers(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxBusinessFaxPhoneNumbers(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxHomeFaxPhoneNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxHomeFaxPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxHomeFaxPhoneNumbers(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxHomeFaxPhoneNumbers(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxCompanyPhoneNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxCompanyPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxCompanyPhoneNumbers(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxCompanyPhoneNumbers(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAssistantPhoneNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxAssistantPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxAssistantPhoneNumbers(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxAssistantPhoneNumbers(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxRadioPhoneNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxRadioPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxRadioPhoneNumbers(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxRadioPhoneNumbers(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPersonalEmailAddresses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPersonalEmailAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxPersonalEmailAddresses(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxPersonalEmailAddresses(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxWorkEmailAddresses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxWorkEmailAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxWorkEmailAddresses(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxWorkEmailAddresses(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxOtherEmailAddresses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxOtherEmailAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxOtherEmailAddresses(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxOtherEmailAddresses(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxHomeAddresses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxHomeAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxHomeAddresses(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxHomeAddresses(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxWorkAddresses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxWorkAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxWorkAddresses(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxWorkAddresses(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxOtherAddresses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxOtherAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxOtherAddresses(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxOtherAddresses(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxBirthdayDates(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxBirthdayDates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxBirthdayDates(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxBirthdayDates(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAnniversaryDates(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxAnniversaryDates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxAnniversaryDates(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxAnniversaryDates(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxOtherDates(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxOtherDates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxOtherDates(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxOtherDates(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxOtherRelationships(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxOtherRelationships());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxOtherRelationships(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxOtherRelationships(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSpouseRelationships(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxSpouseRelationships());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxSpouseRelationships(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxSpouseRelationships(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPartnerRelationships(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPartnerRelationships());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxPartnerRelationships(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxPartnerRelationships(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSiblingRelationships(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxSiblingRelationships());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxSiblingRelationships(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxSiblingRelationships(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxParentRelationships(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxParentRelationships());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxParentRelationships(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxParentRelationships(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxChildRelationships(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxChildRelationships());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxChildRelationships(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxChildRelationships(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxJobInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxJobInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxJobInfo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxJobInfo(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxWebsites(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxWebsites());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxWebsites(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxWebsites(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactListSyncManager> : produce_base<D, Windows::ApplicationModel::Contacts::IContactListSyncManager>
{
    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Contacts::ContactListSyncStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastSuccessfulSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastAttemptedSyncTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastAttemptedSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SyncAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SyncAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SyncStatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SyncStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactListSyncManager, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SyncStatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SyncStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactListSyncManager2> : produce_base<D, Windows::ApplicationModel::Contacts::IContactListSyncManager2>
{
    HRESULT __stdcall put_Status(abi_t<Windows::ApplicationModel::Contacts::ContactListSyncStatus> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactListSyncStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastSuccessfulSyncTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastAttemptedSyncTime(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastAttemptedSyncTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactLocationField> : produce_base<D, Windows::ApplicationModel::Contacts::IContactLocationField>
{
    HRESULT __stdcall get_UnstructuredAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnstructuredAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Street(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Street());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_City(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().City());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactLocationFieldFactory> : produce_base<D, Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>
{
    HRESULT __stdcall CreateLocation_Default(HSTRING unstructuredAddress, ::IUnknown** field) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *field = detach_abi(this->shim().CreateLocation(*reinterpret_cast<hstring const*>(&unstructuredAddress)));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLocation_Category(HSTRING unstructuredAddress, abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory> category, ::IUnknown** field) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *field = detach_abi(this->shim().CreateLocation(*reinterpret_cast<hstring const*>(&unstructuredAddress), *reinterpret_cast<Windows::ApplicationModel::Contacts::ContactFieldCategory const*>(&category)));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLocation_All(HSTRING unstructuredAddress, abi_t<Windows::ApplicationModel::Contacts::ContactFieldCategory> category, HSTRING street, HSTRING city, HSTRING region, HSTRING country, HSTRING postalCode, ::IUnknown** field) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *field = detach_abi(this->shim().CreateLocation(*reinterpret_cast<hstring const*>(&unstructuredAddress), *reinterpret_cast<Windows::ApplicationModel::Contacts::ContactFieldCategory const*>(&category), *reinterpret_cast<hstring const*>(&street), *reinterpret_cast<hstring const*>(&city), *reinterpret_cast<hstring const*>(&region), *reinterpret_cast<hstring const*>(&country), *reinterpret_cast<hstring const*>(&postalCode)));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactManagerForUser> : produce_base<D, Windows::ApplicationModel::Contacts::IContactManagerForUser>
{
    HRESULT __stdcall ConvertContactToVCardAsync(::IUnknown* contact, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ConvertContactToVCardAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertContactToVCardAsyncWithMaxBytes(::IUnknown* contact, uint32_t maxBytes, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ConvertContactToVCardAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact), maxBytes));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertVCardToContactAsync(::IUnknown* vCard, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ConvertVCardToContactAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&vCard)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestStoreAsync(abi_t<Windows::ApplicationModel::Contacts::ContactStoreAccessType> accessType, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestStoreAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactStoreAccessType const*>(&accessType)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAnnotationStoreAsync(abi_t<Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType> accessType, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAnnotationStoreAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType const*>(&accessType)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemDisplayNameOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemDisplayNameOrder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SystemDisplayNameOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SystemDisplayNameOrder(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactNameOrder const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemSortOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemSortOrder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SystemSortOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SystemSortOrder(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactNameOrder const*>(&value));
            return S_OK;
        }
        catch (...)
        {
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactManagerForUser2> : produce_base<D, Windows::ApplicationModel::Contacts::IContactManagerForUser2>
{
    HRESULT __stdcall ShowFullContactCard(::IUnknown* contact, ::IUnknown* fullContactCardOptions) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowFullContactCard(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact), *reinterpret_cast<Windows::ApplicationModel::Contacts::FullContactCardOptions const*>(&fullContactCardOptions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactManagerStatics> : produce_base<D, Windows::ApplicationModel::Contacts::IContactManagerStatics>
{
    HRESULT __stdcall ShowContactCard(::IUnknown* contact, abi_t<Windows::Foundation::Rect> selection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowContactCard(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowContactCardWithPlacement(::IUnknown* contact, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowContactCard(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowDelayLoadedContactCard(::IUnknown* contact, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown** dataLoader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *dataLoader = detach_abi(this->shim().ShowDelayLoadedContactCard(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return S_OK;
        }
        catch (...)
        {
            *dataLoader = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactManagerStatics2> : produce_base<D, Windows::ApplicationModel::Contacts::IContactManagerStatics2>
{
    HRESULT __stdcall RequestStoreAsync(::IUnknown** store) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *store = detach_abi(this->shim().RequestStoreAsync());
            return S_OK;
        }
        catch (...)
        {
            *store = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactManagerStatics3> : produce_base<D, Windows::ApplicationModel::Contacts::IContactManagerStatics3>
{
    HRESULT __stdcall ConvertContactToVCardAsync(::IUnknown* contact, ::IUnknown** vCard) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *vCard = detach_abi(this->shim().ConvertContactToVCardAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *vCard = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertContactToVCardAsyncWithMaxBytes(::IUnknown* contact, uint32_t maxBytes, ::IUnknown** vCard) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *vCard = detach_abi(this->shim().ConvertContactToVCardAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact), maxBytes));
            return S_OK;
        }
        catch (...)
        {
            *vCard = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertVCardToContactAsync(::IUnknown* vCard, ::IUnknown** contact) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contact = detach_abi(this->shim().ConvertVCardToContactAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&vCard)));
            return S_OK;
        }
        catch (...)
        {
            *contact = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestStoreAsyncWithAccessType(abi_t<Windows::ApplicationModel::Contacts::ContactStoreAccessType> accessType, ::IUnknown** store) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *store = detach_abi(this->shim().RequestStoreAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactStoreAccessType const*>(&accessType)));
            return S_OK;
        }
        catch (...)
        {
            *store = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAnnotationStoreAsync(abi_t<Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType> accessType, ::IUnknown** store) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *store = detach_abi(this->shim().RequestAnnotationStoreAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType const*>(&accessType)));
            return S_OK;
        }
        catch (...)
        {
            *store = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsShowContactCardSupported(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsShowContactCardSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowContactCardWithOptions(::IUnknown* contact, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown* contactCardOptions) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowContactCard(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::ApplicationModel::Contacts::ContactCardOptions const*>(&contactCardOptions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsShowDelayLoadedContactCardSupported(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsShowDelayLoadedContactCardSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowDelayLoadedContactCardWithOptions(::IUnknown* contact, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown* contactCardOptions, ::IUnknown** dataLoader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *dataLoader = detach_abi(this->shim().ShowDelayLoadedContactCard(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::ApplicationModel::Contacts::ContactCardOptions const*>(&contactCardOptions)));
            return S_OK;
        }
        catch (...)
        {
            *dataLoader = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowFullContactCard(::IUnknown* contact, ::IUnknown* fullContactCardOptions) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowFullContactCard(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact), *reinterpret_cast<Windows::ApplicationModel::Contacts::FullContactCardOptions const*>(&fullContactCardOptions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemDisplayNameOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemDisplayNameOrder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SystemDisplayNameOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SystemDisplayNameOrder(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactNameOrder const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemSortOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemSortOrder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SystemSortOrder(abi_t<Windows::ApplicationModel::Contacts::ContactNameOrder> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SystemSortOrder(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactNameOrder const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactManagerStatics4> : produce_base<D, Windows::ApplicationModel::Contacts::IContactManagerStatics4>
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactManagerStatics5> : produce_base<D, Windows::ApplicationModel::Contacts::IContactManagerStatics5>
{
    HRESULT __stdcall IsShowFullContactCardSupportedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsShowFullContactCardSupportedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeMiddleNameInSystemDisplayAndSort(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncludeMiddleNameInSystemDisplayAndSort());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncludeMiddleNameInSystemDisplayAndSort(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeMiddleNameInSystemDisplayAndSort(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactMatchReason> : produce_base<D, Windows::ApplicationModel::Contacts::IContactMatchReason>
{
    HRESULT __stdcall get_Field(abi_t<Windows::ApplicationModel::Contacts::ContactMatchReasonKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Field());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Segments(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Segments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactName> : produce_base<D, Windows::ApplicationModel::Contacts::IContactName>
{
    HRESULT __stdcall get_FirstName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FirstName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FirstName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MiddleName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MiddleName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MiddleName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MiddleName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall put_YomiGivenName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().YomiGivenName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall put_YomiFamilyName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().YomiFamilyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HonorificNameSuffix(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HonorificNameSuffix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HonorificNameSuffix(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HonorificNameSuffix(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HonorificNamePrefix(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HonorificNamePrefix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HonorificNamePrefix(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HonorificNamePrefix(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall get_YomiDisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().YomiDisplayName());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactPanel> : produce_base<D, Windows::ApplicationModel::Contacts::IContactPanel>
{
    HRESULT __stdcall ClosePanel() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClosePanel();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeaderColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeaderColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeaderColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LaunchFullAppRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().LaunchFullAppRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LaunchFullAppRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LaunchFullAppRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Closing(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Closing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Closing(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closing(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs> : produce_base<D, Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs>
{
    HRESULT __stdcall GetDeferral(::IUnknown** deferral) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deferral = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs> : produce_base<D, Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactPhone> : produce_base<D, Windows::ApplicationModel::Contacts::IContactPhone>
{
    HRESULT __stdcall get_Number(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Number());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Number(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Number(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactPhoneKind>* value) noexcept override
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

    HRESULT __stdcall put_Kind(abi_t<Windows::ApplicationModel::Contacts::ContactPhoneKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Kind(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactPhoneKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactPicker> : produce_base<D, Windows::ApplicationModel::Contacts::IContactPicker>
{
    HRESULT __stdcall get_CommitButtonText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CommitButtonText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CommitButtonText(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommitButtonText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionMode(abi_t<Windows::ApplicationModel::Contacts::ContactSelectionMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectionMode(abi_t<Windows::ApplicationModel::Contacts::ContactSelectionMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectionMode(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactSelectionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall PickSingleContactAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PickSingleContactAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickMultipleContactsAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PickMultipleContactsAsync());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactPicker2> : produce_base<D, Windows::ApplicationModel::Contacts::IContactPicker2>
{
    HRESULT __stdcall get_DesiredFieldsWithContactFieldType(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredFieldsWithContactFieldType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickContactAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PickContactAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickContactsAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PickContactsAsync());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactPicker3> : produce_base<D, Windows::ApplicationModel::Contacts::IContactPicker3>
{
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactPickerStatics> : produce_base<D, Windows::ApplicationModel::Contacts::IContactPickerStatics>
{
    HRESULT __stdcall CreateForUser(::IUnknown* user, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsSupportedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsSupportedAsync());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactQueryOptions> : produce_base<D, Windows::ApplicationModel::Contacts::IContactQueryOptions>
{
    HRESULT __stdcall get_TextSearch(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextSearch());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactListIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContactListIds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeContactsFromHiddenLists(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncludeContactsFromHiddenLists());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncludeContactsFromHiddenLists(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeContactsFromHiddenLists(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredFields(abi_t<Windows::ApplicationModel::Contacts::ContactQueryDesiredFields>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredFields());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredFields(abi_t<Windows::ApplicationModel::Contacts::ContactQueryDesiredFields> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredFields(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactQueryDesiredFields const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredOperations(abi_t<Windows::ApplicationModel::Contacts::ContactAnnotationOperations>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredOperations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredOperations(abi_t<Windows::ApplicationModel::Contacts::ContactAnnotationOperations> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredOperations(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactAnnotationOperations const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AnnotationListIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnnotationListIds());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory> : produce_base<D, Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory>
{
    HRESULT __stdcall CreateWithText(HSTRING text, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithText(*reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithTextAndFields(HSTRING text, abi_t<Windows::ApplicationModel::Contacts::ContactQuerySearchFields> fields, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithTextAndFields(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Windows::ApplicationModel::Contacts::ContactQuerySearchFields const*>(&fields)));
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactQueryTextSearch> : produce_base<D, Windows::ApplicationModel::Contacts::IContactQueryTextSearch>
{
    HRESULT __stdcall get_Fields(abi_t<Windows::ApplicationModel::Contacts::ContactQuerySearchFields>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Fields());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Fields(abi_t<Windows::ApplicationModel::Contacts::ContactQuerySearchFields> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Fields(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactQuerySearchFields const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_SearchScope(abi_t<Windows::ApplicationModel::Contacts::ContactQuerySearchScope>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SearchScope());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SearchScope(abi_t<Windows::ApplicationModel::Contacts::ContactQuerySearchScope> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SearchScope(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactQuerySearchScope const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactReader> : produce_base<D, Windows::ApplicationModel::Contacts::IContactReader>
{
    HRESULT __stdcall ReadBatchAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadBatchAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMatchingPropertiesWithMatchReason(::IUnknown* contact, ::IUnknown** ppRetVal) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppRetVal = detach_abi(this->shim().GetMatchingPropertiesWithMatchReason(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *ppRetVal = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactSignificantOther> : produce_base<D, Windows::ApplicationModel::Contacts::IContactSignificantOther>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactSignificantOther2> : produce_base<D, Windows::ApplicationModel::Contacts::IContactSignificantOther2>
{
    HRESULT __stdcall get_Relationship(abi_t<Windows::ApplicationModel::Contacts::ContactRelationship>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Relationship());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Relationship(abi_t<Windows::ApplicationModel::Contacts::ContactRelationship> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Relationship(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactRelationship const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactStore> : produce_base<D, Windows::ApplicationModel::Contacts::IContactStore>
{
    HRESULT __stdcall FindContactsAsync(::IUnknown** contacts) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contacts = detach_abi(this->shim().FindContactsAsync());
            return S_OK;
        }
        catch (...)
        {
            *contacts = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindContactsWithSearchTextAsync(HSTRING searchText, ::IUnknown** contacts) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contacts = detach_abi(this->shim().FindContactsAsync(*reinterpret_cast<hstring const*>(&searchText)));
            return S_OK;
        }
        catch (...)
        {
            *contacts = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContactAsync(HSTRING contactId, ::IUnknown** contacts) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contacts = detach_abi(this->shim().GetContactAsync(*reinterpret_cast<hstring const*>(&contactId)));
            return S_OK;
        }
        catch (...)
        {
            *contacts = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactStore2> : produce_base<D, Windows::ApplicationModel::Contacts::IContactStore2>
{
    HRESULT __stdcall get_ChangeTracker(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeTracker());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ContactChanged(::IUnknown* value, abi_t<event_token>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().ContactChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactStore, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ContactChanged(abi_t<event_token> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContactChanged(*reinterpret_cast<event_token const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AggregateContactManager(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AggregateContactManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindContactListsAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FindContactListsAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContactListAsync(HSTRING contactListId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetContactListAsync(*reinterpret_cast<hstring const*>(&contactListId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateContactListAsync(HSTRING displayName, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateContactListAsync(*reinterpret_cast<hstring const*>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMeContactAsync(::IUnknown** meContact) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *meContact = detach_abi(this->shim().GetMeContactAsync());
            return S_OK;
        }
        catch (...)
        {
            *meContact = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContactReader(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetContactReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContactReaderWithOptions(::IUnknown* options, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetContactReader(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactQueryOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateContactListInAccountAsync(HSTRING displayName, HSTRING userDataAccountId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateContactListAsync(*reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<hstring const*>(&userDataAccountId)));
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails> : produce_base<D, Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactWebsite> : produce_base<D, Windows::ApplicationModel::Contacts::IContactWebsite>
{
    HRESULT __stdcall get_Uri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IContactWebsite2> : produce_base<D, Windows::ApplicationModel::Contacts::IContactWebsite2>
{
    HRESULT __stdcall get_RawValue(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RawValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RawValue(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RawValue(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IFullContactCardOptions> : produce_base<D, Windows::ApplicationModel::Contacts::IFullContactCardOptions>
{
    HRESULT __stdcall get_DesiredRemainingView(abi_t<Windows::UI::ViewManagement::ViewSizePreference>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredRemainingView());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredRemainingView(abi_t<Windows::UI::ViewManagement::ViewSizePreference> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredRemainingView(*reinterpret_cast<Windows::UI::ViewManagement::ViewSizePreference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IKnownContactFieldStatics> : produce_base<D, Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>
{
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

    HRESULT __stdcall get_PhoneNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstantMessage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstantMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertNameToType(HSTRING name, abi_t<Windows::ApplicationModel::Contacts::ContactFieldType>* type) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *type = detach_abi(this->shim().ConvertNameToType(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertTypeToName(abi_t<Windows::ApplicationModel::Contacts::ContactFieldType> type, HSTRING* name) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *name = detach_abi(this->shim().ConvertTypeToName(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactFieldType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *name = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult> : produce_base<D, Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult>
{
    HRESULT __stdcall get_ContactIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContactIds());
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
struct produce<D, Windows::ApplicationModel::Contacts::IPinnedContactManager> : produce_base<D, Windows::ApplicationModel::Contacts::IPinnedContactManager>
{
    HRESULT __stdcall get_User(::IUnknown** user) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *user = detach_abi(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            *user = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsPinSurfaceSupported(abi_t<Windows::ApplicationModel::Contacts::PinnedContactSurface> surface, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsPinSurfaceSupported(*reinterpret_cast<Windows::ApplicationModel::Contacts::PinnedContactSurface const*>(&surface)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsContactPinned(::IUnknown* contact, abi_t<Windows::ApplicationModel::Contacts::PinnedContactSurface> surface, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsContactPinned(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact), *reinterpret_cast<Windows::ApplicationModel::Contacts::PinnedContactSurface const*>(&surface)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestPinContactAsync(::IUnknown* contact, abi_t<Windows::ApplicationModel::Contacts::PinnedContactSurface> surface, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestPinContactAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact), *reinterpret_cast<Windows::ApplicationModel::Contacts::PinnedContactSurface const*>(&surface)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestPinContactsAsync(::IUnknown* contacts, abi_t<Windows::ApplicationModel::Contacts::PinnedContactSurface> surface, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestPinContactsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Contacts::Contact> const*>(&contacts), *reinterpret_cast<Windows::ApplicationModel::Contacts::PinnedContactSurface const*>(&surface)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestUnpinContactAsync(::IUnknown* contact, abi_t<Windows::ApplicationModel::Contacts::PinnedContactSurface> surface, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestUnpinContactAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact), *reinterpret_cast<Windows::ApplicationModel::Contacts::PinnedContactSurface const*>(&surface)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SignalContactActivity(::IUnknown* contact) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SignalContactActivity(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPinnedContactIdsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPinnedContactIdsAsync());
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
struct produce<D, Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics> : produce_base<D, Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall IsSupported(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts {

inline Contact::Contact() :
    Contact(activate_instance<Contact>())
{}

inline ContactAddress::ContactAddress() :
    ContactAddress(activate_instance<ContactAddress>())
{}

inline ContactAnnotation::ContactAnnotation() :
    ContactAnnotation(activate_instance<ContactAnnotation>())
{}

inline ContactCardOptions::ContactCardOptions() :
    ContactCardOptions(activate_instance<ContactCardOptions>())
{}

inline ContactConnectedServiceAccount::ContactConnectedServiceAccount() :
    ContactConnectedServiceAccount(activate_instance<ContactConnectedServiceAccount>())
{}

inline ContactDate::ContactDate() :
    ContactDate(activate_instance<ContactDate>())
{}

inline ContactEmail::ContactEmail() :
    ContactEmail(activate_instance<ContactEmail>())
{}

inline ContactField::ContactField(param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type) :
    ContactField(get_activation_factory<ContactField, Windows::ApplicationModel::Contacts::IContactFieldFactory>().CreateField(value, type))
{}

inline ContactField::ContactField(param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) :
    ContactField(get_activation_factory<ContactField, Windows::ApplicationModel::Contacts::IContactFieldFactory>().CreateField(value, type, category))
{}

inline ContactField::ContactField(param::hstring const& name, param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) :
    ContactField(get_activation_factory<ContactField, Windows::ApplicationModel::Contacts::IContactFieldFactory>().CreateField(name, value, type, category))
{}

inline ContactFieldFactory::ContactFieldFactory() :
    ContactFieldFactory(activate_instance<ContactFieldFactory>())
{}

inline ContactInstantMessageField::ContactInstantMessageField(param::hstring const& userName) :
    ContactInstantMessageField(get_activation_factory<ContactInstantMessageField, Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>().CreateInstantMessage(userName))
{}

inline ContactInstantMessageField::ContactInstantMessageField(param::hstring const& userName, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) :
    ContactInstantMessageField(get_activation_factory<ContactInstantMessageField, Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>().CreateInstantMessage(userName, category))
{}

inline ContactInstantMessageField::ContactInstantMessageField(param::hstring const& userName, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category, param::hstring const& service, param::hstring const& displayText, Windows::Foundation::Uri const& verb) :
    ContactInstantMessageField(get_activation_factory<ContactInstantMessageField, Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>().CreateInstantMessage(userName, category, service, displayText, verb))
{}

inline ContactJobInfo::ContactJobInfo() :
    ContactJobInfo(activate_instance<ContactJobInfo>())
{}

inline hstring ContactLaunchActionVerbs::Call()
{
    return get_activation_factory<ContactLaunchActionVerbs, Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>().Call();
}

inline hstring ContactLaunchActionVerbs::Message()
{
    return get_activation_factory<ContactLaunchActionVerbs, Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>().Message();
}

inline hstring ContactLaunchActionVerbs::Map()
{
    return get_activation_factory<ContactLaunchActionVerbs, Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>().Map();
}

inline hstring ContactLaunchActionVerbs::Post()
{
    return get_activation_factory<ContactLaunchActionVerbs, Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>().Post();
}

inline hstring ContactLaunchActionVerbs::VideoCall()
{
    return get_activation_factory<ContactLaunchActionVerbs, Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>().VideoCall();
}

inline ContactLocationField::ContactLocationField(param::hstring const& unstructuredAddress) :
    ContactLocationField(get_activation_factory<ContactLocationField, Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>().CreateLocation(unstructuredAddress))
{}

inline ContactLocationField::ContactLocationField(param::hstring const& unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) :
    ContactLocationField(get_activation_factory<ContactLocationField, Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>().CreateLocation(unstructuredAddress, category))
{}

inline ContactLocationField::ContactLocationField(param::hstring const& unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category, param::hstring const& street, param::hstring const& city, param::hstring const& region, param::hstring const& country, param::hstring const& postalCode) :
    ContactLocationField(get_activation_factory<ContactLocationField, Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>().CreateLocation(unstructuredAddress, category, street, city, region, country, postalCode))
{}

inline void ContactManager::ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection)
{
    get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics>().ShowContactCard(contact, selection);
}

inline void ContactManager::ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement)
{
    get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics>().ShowContactCard(contact, selection, preferredPlacement);
}

inline Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader ContactManager::ShowDelayLoadedContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement)
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics>().ShowDelayLoadedContactCard(contact, selection, preferredPlacement);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> ContactManager::RequestStoreAsync()
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics2>().RequestStoreAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> ContactManager::ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact)
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().ConvertContactToVCardAsync(contact);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> ContactManager::ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact, uint32_t maxBytes)
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().ConvertContactToVCardAsync(contact, maxBytes);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> ContactManager::ConvertVCardToContactAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& vCard)
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().ConvertVCardToContactAsync(vCard);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> ContactManager::RequestStoreAsync(Windows::ApplicationModel::Contacts::ContactStoreAccessType const& accessType)
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().RequestStoreAsync(accessType);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore> ContactManager::RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType const& accessType)
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().RequestAnnotationStoreAsync(accessType);
}

inline bool ContactManager::IsShowContactCardSupported()
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().IsShowContactCardSupported();
}

inline void ContactManager::ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::ApplicationModel::Contacts::ContactCardOptions const& contactCardOptions)
{
    get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().ShowContactCard(contact, selection, preferredPlacement, contactCardOptions);
}

inline bool ContactManager::IsShowDelayLoadedContactCardSupported()
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().IsShowDelayLoadedContactCardSupported();
}

inline Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader ContactManager::ShowDelayLoadedContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::ApplicationModel::Contacts::ContactCardOptions const& contactCardOptions)
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().ShowDelayLoadedContactCard(contact, selection, preferredPlacement, contactCardOptions);
}

inline void ContactManager::ShowFullContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::FullContactCardOptions const& fullContactCardOptions)
{
    get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().ShowFullContactCard(contact, fullContactCardOptions);
}

inline Windows::ApplicationModel::Contacts::ContactNameOrder ContactManager::SystemDisplayNameOrder()
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().SystemDisplayNameOrder();
}

inline void ContactManager::SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value)
{
    get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().SystemDisplayNameOrder(value);
}

inline Windows::ApplicationModel::Contacts::ContactNameOrder ContactManager::SystemSortOrder()
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().SystemSortOrder();
}

inline void ContactManager::SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value)
{
    get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics3>().SystemSortOrder(value);
}

inline Windows::ApplicationModel::Contacts::ContactManagerForUser ContactManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics4>().GetForUser(user);
}

inline Windows::Foundation::IAsyncOperation<bool> ContactManager::IsShowFullContactCardSupportedAsync()
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics5>().IsShowFullContactCardSupportedAsync();
}

inline bool ContactManager::IncludeMiddleNameInSystemDisplayAndSort()
{
    return get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics5>().IncludeMiddleNameInSystemDisplayAndSort();
}

inline void ContactManager::IncludeMiddleNameInSystemDisplayAndSort(bool value)
{
    get_activation_factory<ContactManager, Windows::ApplicationModel::Contacts::IContactManagerStatics5>().IncludeMiddleNameInSystemDisplayAndSort(value);
}

inline ContactPhone::ContactPhone() :
    ContactPhone(activate_instance<ContactPhone>())
{}

inline ContactPicker::ContactPicker() :
    ContactPicker(activate_instance<ContactPicker>())
{}

inline Windows::ApplicationModel::Contacts::ContactPicker ContactPicker::CreateForUser(Windows::System::User const& user)
{
    return get_activation_factory<ContactPicker, Windows::ApplicationModel::Contacts::IContactPickerStatics>().CreateForUser(user);
}

inline Windows::Foundation::IAsyncOperation<bool> ContactPicker::IsSupportedAsync()
{
    return get_activation_factory<ContactPicker, Windows::ApplicationModel::Contacts::IContactPickerStatics>().IsSupportedAsync();
}

inline ContactQueryOptions::ContactQueryOptions() :
    ContactQueryOptions(activate_instance<ContactQueryOptions>())
{}

inline ContactQueryOptions::ContactQueryOptions(param::hstring const& text) :
    ContactQueryOptions(get_activation_factory<ContactQueryOptions, Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory>().CreateWithText(text))
{}

inline ContactQueryOptions::ContactQueryOptions(param::hstring const& text, Windows::ApplicationModel::Contacts::ContactQuerySearchFields const& fields) :
    ContactQueryOptions(get_activation_factory<ContactQueryOptions, Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory>().CreateWithTextAndFields(text, fields))
{}

inline ContactSignificantOther::ContactSignificantOther() :
    ContactSignificantOther(activate_instance<ContactSignificantOther>())
{}

inline ContactWebsite::ContactWebsite() :
    ContactWebsite(activate_instance<ContactWebsite>())
{}

inline FullContactCardOptions::FullContactCardOptions() :
    FullContactCardOptions(activate_instance<FullContactCardOptions>())
{}

inline hstring KnownContactField::Email()
{
    return get_activation_factory<KnownContactField, Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>().Email();
}

inline hstring KnownContactField::PhoneNumber()
{
    return get_activation_factory<KnownContactField, Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>().PhoneNumber();
}

inline hstring KnownContactField::Location()
{
    return get_activation_factory<KnownContactField, Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>().Location();
}

inline hstring KnownContactField::InstantMessage()
{
    return get_activation_factory<KnownContactField, Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>().InstantMessage();
}

inline Windows::ApplicationModel::Contacts::ContactFieldType KnownContactField::ConvertNameToType(param::hstring const& name)
{
    return get_activation_factory<KnownContactField, Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>().ConvertNameToType(name);
}

inline hstring KnownContactField::ConvertTypeToName(Windows::ApplicationModel::Contacts::ContactFieldType const& type)
{
    return get_activation_factory<KnownContactField, Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>().ConvertTypeToName(type);
}

inline Windows::ApplicationModel::Contacts::PinnedContactManager PinnedContactManager::GetDefault()
{
    return get_activation_factory<PinnedContactManager, Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics>().GetDefault();
}

inline Windows::ApplicationModel::Contacts::PinnedContactManager PinnedContactManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<PinnedContactManager, Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics>().GetForUser(user);
}

inline bool PinnedContactManager::IsSupported()
{
    return get_activation_factory<PinnedContactManager, Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics>().IsSupported();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IAggregateContactManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IAggregateContactManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IAggregateContactManager2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IAggregateContactManager2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContact> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContact> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContact2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContact2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContact3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContact3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactAddress> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactAddress> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactAnnotation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactAnnotation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactAnnotation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactAnnotation2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactAnnotationList> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactAnnotationList> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactAnnotationStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactAnnotationStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactAnnotationStore2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactAnnotationStore2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactBatch> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactCardOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactCardOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactCardOptions2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactCardOptions2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactChange> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactChangeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactChangeReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactChangeTracker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactChangeTracker> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactChangedDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactChangedDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactDate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactDate> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactEmail> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactEmail> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactField> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactField> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactFieldFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactFieldFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactGroup> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactInformation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactInstantMessageField> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactInstantMessageField> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactJobInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactJobInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactList> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactList> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactList2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactList2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactListSyncConstraints> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactListSyncConstraints> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactListSyncManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactListSyncManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactListSyncManager2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactListSyncManager2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactLocationField> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactLocationField> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactLocationFieldFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactLocationFieldFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactManagerForUser> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactManagerForUser2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactManagerForUser2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactManagerStatics2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactManagerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactManagerStatics3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactManagerStatics4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactManagerStatics4> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactManagerStatics5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactManagerStatics5> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactMatchReason> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactMatchReason> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactName> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactName> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactPanel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactPanel> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactPhone> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactPhone> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactPicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactPicker> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactPicker2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactPicker2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactPicker3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactPicker3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactPickerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactPickerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactQueryOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactQueryOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactQueryTextSearch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactQueryTextSearch> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactSignificantOther> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactSignificantOther> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactSignificantOther2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactSignificantOther2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactStore2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactStore2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactWebsite> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactWebsite> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IContactWebsite2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IContactWebsite2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IFullContactCardOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IFullContactCardOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IKnownContactFieldStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IKnownContactFieldStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IPinnedContactManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IPinnedContactManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::AggregateContactManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::AggregateContactManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::Contact> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::Contact> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactAddress> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactAddress> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactAnnotation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactAnnotation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactAnnotationList> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactAnnotationList> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactAnnotationStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactAnnotationStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactBatch> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactCardOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactCardOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactChange> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactChangeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactChangeReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactChangeTracker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactChangeTracker> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactChangedDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactChangedDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactDate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactDate> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactEmail> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactEmail> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactField> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactField> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactFieldFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactFieldFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactGroup> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactInformation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactInstantMessageField> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactInstantMessageField> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactJobInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactJobInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactLaunchActionVerbs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactLaunchActionVerbs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactList> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactList> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactListSyncConstraints> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactListSyncConstraints> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactListSyncManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactListSyncManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactLocationField> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactLocationField> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactManagerForUser> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactMatchReason> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactMatchReason> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactPanel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactPanel> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactPhone> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactPhone> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactPicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactPicker> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactQueryOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactQueryOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactQueryTextSearch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactQueryTextSearch> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactSignificantOther> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactSignificantOther> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactStoreNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactStoreNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::ContactWebsite> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::ContactWebsite> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::FullContactCardOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::FullContactCardOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::KnownContactField> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::KnownContactField> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::PinnedContactIdsQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::PinnedContactIdsQueryResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::PinnedContactManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::PinnedContactManager> {};

}

WINRT_WARNING_POP
