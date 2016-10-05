// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.ViewManagement.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.Popups.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.ApplicationModel.Contacts.3.h"
#include "Windows.ApplicationModel.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::IAggregateContactManager> : produce_base<D, Windows::ApplicationModel::Contacts::IAggregateContactManager>
{
    HRESULT __stdcall abi_FindRawContactsAsync(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FindRawContactsAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryLinkContactsAsync(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> primaryContact, abi_arg_in<Windows::ApplicationModel::Contacts::IContact> secondaryContact, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact>> contact) noexcept override
    {
        try
        {
            *contact = detach(this->shim().TryLinkContactsAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&primaryContact), *reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&secondaryContact)));
            return S_OK;
        }
        catch (...)
        {
            *contact = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnlinkRawContactAsync(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnlinkRawContactAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetPreferredSourceForPictureAsync(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> aggregateContact, abi_arg_in<Windows::ApplicationModel::Contacts::IContact> rawContact, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrySetPreferredSourceForPictureAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&aggregateContact), *reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&rawContact)));
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
    HRESULT __stdcall abi_SetRemoteIdentificationInformationAsync(abi_arg_in<hstring> contactListId, abi_arg_in<hstring> remoteSourceId, abi_arg_in<hstring> accountId, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SetRemoteIdentificationInformationAsync(*reinterpret_cast<const hstring *>(&contactListId), *reinterpret_cast<const hstring *>(&remoteSourceId), *reinterpret_cast<const hstring *>(&accountId)));
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
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Name(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            this->shim().Thumbnail(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Fields(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::IContactField>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Fields());
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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Id(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Notes(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Notes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Notes(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Notes(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Phones(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactPhone>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Phones());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Emails(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactEmail>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Emails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Addresses(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactAddress>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Addresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectedServiceAccounts(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConnectedServiceAccounts());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImportantDates(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactDate>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ImportantDates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataSuppliers(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataSuppliers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JobInfo(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactJobInfo>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().JobInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignificantOthers(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactSignificantOther>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SignificantOthers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Websites(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactWebsite>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Websites());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderProperties(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProviderProperties());
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
    HRESULT __stdcall get_ContactListId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContactListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayPictureUserUpdateTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayPictureUserUpdateTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayPictureUserUpdateTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().DisplayPictureUserUpdateTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMe(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsMe());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AggregateId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AggregateId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().RemoteId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RingToneToken(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RingToneToken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RingToneToken(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().RingToneToken(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDisplayPictureManuallySet(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDisplayPictureManuallySet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LargeDisplayPicture(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LargeDisplayPicture());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmallDisplayPicture(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SmallDisplayPicture());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceDisplayPicture(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceDisplayPicture());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceDisplayPicture(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            this->shim().SourceDisplayPicture(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextToneToken(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TextToneToken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TextToneToken(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TextToneToken(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAggregate(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsAggregate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FullName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayNameOverride(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayNameOverride());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayNameOverride(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DisplayNameOverride(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Nickname(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Nickname());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Nickname(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Nickname(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SortName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SortName());
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
    HRESULT __stdcall get_StreetAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StreetAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StreetAddress(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().StreetAddress(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Locality(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Locality());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Locality(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Locality(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Region(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Region());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Region(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Region(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Country(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Country());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Country(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Country(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PostalCode(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PostalCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PostalCode(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().PostalCode(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::ApplicationModel::Contacts::ContactAddressKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Kind(Windows::ApplicationModel::Contacts::ContactAddressKind value) noexcept override
    {
        try
        {
            this->shim().Kind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Description(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AnnotationListId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AnnotationListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContactId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContactId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ContactId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().RemoteId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedOperations(Windows::ApplicationModel::Contacts::ContactAnnotationOperations * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedOperations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SupportedOperations(Windows::ApplicationModel::Contacts::ContactAnnotationOperations value) noexcept override
    {
        try
        {
            this->shim().SupportedOperations(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDisabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDisabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderProperties(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProviderProperties());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactAnnotationList> : produce_base<D, Windows::ApplicationModel::Contacts::IContactAnnotationList>
{
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderPackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProviderPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDataAccountId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserDataAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsync(abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySaveAnnotationAsync(abi_arg_in<Windows::ApplicationModel::Contacts::IContactAnnotation> annotation, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> ppResult) noexcept override
    {
        try
        {
            *ppResult = detach(this->shim().TrySaveAnnotationAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::ContactAnnotation *>(&annotation)));
            return S_OK;
        }
        catch (...)
        {
            *ppResult = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAnnotationAsync(abi_arg_in<hstring> annotationId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotation>> annotation) noexcept override
    {
        try
        {
            *annotation = detach(this->shim().GetAnnotationAsync(*reinterpret_cast<const hstring *>(&annotationId)));
            return S_OK;
        }
        catch (...)
        {
            *annotation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAnnotationsByRemoteIdAsync(abi_arg_in<hstring> remoteId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>>> annotations) noexcept override
    {
        try
        {
            *annotations = detach(this->shim().FindAnnotationsByRemoteIdAsync(*reinterpret_cast<const hstring *>(&remoteId)));
            return S_OK;
        }
        catch (...)
        {
            *annotations = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAnnotationsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>>> annotations) noexcept override
    {
        try
        {
            *annotations = detach(this->shim().FindAnnotationsAsync());
            return S_OK;
        }
        catch (...)
        {
            *annotations = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAnnotationAsync(abi_arg_in<Windows::ApplicationModel::Contacts::IContactAnnotation> annotation, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeleteAnnotationAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::ContactAnnotation *>(&annotation)));
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
    HRESULT __stdcall abi_FindContactIdsByEmailAsync(abi_arg_in<hstring> emailAddress, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>> contactIds) noexcept override
    {
        try
        {
            *contactIds = detach(this->shim().FindContactIdsByEmailAsync(*reinterpret_cast<const hstring *>(&emailAddress)));
            return S_OK;
        }
        catch (...)
        {
            *contactIds = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindContactIdsByPhoneNumberAsync(abi_arg_in<hstring> phoneNumber, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>> contactIds) noexcept override
    {
        try
        {
            *contactIds = detach(this->shim().FindContactIdsByPhoneNumberAsync(*reinterpret_cast<const hstring *>(&phoneNumber)));
            return S_OK;
        }
        catch (...)
        {
            *contactIds = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAnnotationsForContactAsync(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>>> annotations) noexcept override
    {
        try
        {
            *annotations = detach(this->shim().FindAnnotationsForContactAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *annotations = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DisableAnnotationAsync(abi_arg_in<Windows::ApplicationModel::Contacts::IContactAnnotation> annotation, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisableAnnotationAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::ContactAnnotation *>(&annotation)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAnnotationListAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateAnnotationListAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAnnotationListInAccountAsync(abi_arg_in<hstring> userDataAccountId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateAnnotationListAsync(*reinterpret_cast<const hstring *>(&userDataAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAnnotationListAsync(abi_arg_in<hstring> annotationListId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetAnnotationListAsync(*reinterpret_cast<const hstring *>(&annotationListId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAnnotationListsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>>> lists) noexcept override
    {
        try
        {
            *lists = detach(this->shim().FindAnnotationListsAsync());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactBatch> : produce_base<D, Windows::ApplicationModel::Contacts::IContactBatch>
{
    HRESULT __stdcall get_Contacts(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contacts());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::ApplicationModel::Contacts::ContactBatchStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
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
    HRESULT __stdcall abi_SetData(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact) noexcept override
    {
        try
        {
            this->shim().SetData(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact));
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
    HRESULT __stdcall get_HeaderKind(Windows::ApplicationModel::Contacts::ContactCardHeaderKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeaderKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeaderKind(Windows::ApplicationModel::Contacts::ContactCardHeaderKind value) noexcept override
    {
        try
        {
            this->shim().HeaderKind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InitialTabKind(Windows::ApplicationModel::Contacts::ContactCardTabKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InitialTabKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InitialTabKind(Windows::ApplicationModel::Contacts::ContactCardTabKind value) noexcept override
    {
        try
        {
            this->shim().InitialTabKind(value);
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
    HRESULT __stdcall get_ServerSearchContactListIds(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerSearchContactListIds());
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
    HRESULT __stdcall get_ChangeType(Windows::ApplicationModel::Contacts::ContactChangeType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(abi_arg_out<Windows::ApplicationModel::Contacts::IContact> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contact());
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
    HRESULT __stdcall abi_AcceptChanges() noexcept override
    {
        try
        {
            this->shim().AcceptChanges();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcceptChangesThrough(abi_arg_in<Windows::ApplicationModel::Contacts::IContactChange> lastChangeToAccept) noexcept override
    {
        try
        {
            this->shim().AcceptChangesThrough(*reinterpret_cast<const Windows::ApplicationModel::Contacts::ContactChange *>(&lastChangeToAccept));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadBatchAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactChange>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadBatchAsync());
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
    HRESULT __stdcall abi_Enable() noexcept override
    {
        try
        {
            this->shim().Enable();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetChangeReader(abi_arg_out<Windows::ApplicationModel::Contacts::IContactChangeReader> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetChangeReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Reset() noexcept override
    {
        try
        {
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
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
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
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::ApplicationModel::Contacts::IContactChangedDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Id(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServiceName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ServiceName(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_Day(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Day());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Day(abi_arg_in<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            this->shim().Day(*reinterpret_cast<const Windows::Foundation::IReference<uint32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Month(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Month());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Month(abi_arg_in<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            this->shim().Month(*reinterpret_cast<const Windows::Foundation::IReference<uint32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Year(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Year());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Year(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().Year(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::ApplicationModel::Contacts::ContactDateKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Kind(Windows::ApplicationModel::Contacts::ContactDateKind value) noexcept override
    {
        try
        {
            this->shim().Kind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Description(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_Address(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Address());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Address(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Address(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::ApplicationModel::Contacts::ContactEmailKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Kind(Windows::ApplicationModel::Contacts::ContactEmailKind value) noexcept override
    {
        try
        {
            this->shim().Kind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Description(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_Type(Windows::ApplicationModel::Contacts::ContactFieldType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Category(Windows::ApplicationModel::Contacts::ContactFieldCategory * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Category());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
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
    HRESULT __stdcall abi_CreateField_Default(abi_arg_in<hstring> value, Windows::ApplicationModel::Contacts::ContactFieldType type, abi_arg_out<Windows::ApplicationModel::Contacts::IContactField> field) noexcept override
    {
        try
        {
            *field = detach(this->shim().CreateField(*reinterpret_cast<const hstring *>(&value), type));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateField_Category(abi_arg_in<hstring> value, Windows::ApplicationModel::Contacts::ContactFieldType type, Windows::ApplicationModel::Contacts::ContactFieldCategory category, abi_arg_out<Windows::ApplicationModel::Contacts::IContactField> field) noexcept override
    {
        try
        {
            *field = detach(this->shim().CreateField(*reinterpret_cast<const hstring *>(&value), type, category));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateField_Custom(abi_arg_in<hstring> name, abi_arg_in<hstring> value, Windows::ApplicationModel::Contacts::ContactFieldType type, Windows::ApplicationModel::Contacts::ContactFieldCategory category, abi_arg_out<Windows::ApplicationModel::Contacts::IContactField> field) noexcept override
    {
        try
        {
            *field = detach(this->shim().CreateField(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value), type, category));
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactInformation> : produce_base<D, Windows::ApplicationModel::Contacts::IContactInformation>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetThumbnailAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetThumbnailAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Emails(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Emails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneNumbers(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Locations(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactLocationField>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Locations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstantMessages(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactInstantMessageField>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InstantMessages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomFields(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CustomFields());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_QueryCustomFields(abi_arg_in<hstring> customName, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QueryCustomFields(*reinterpret_cast<const hstring *>(&customName)));
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
    HRESULT __stdcall get_UserName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Service(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Service());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LaunchUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LaunchUri());
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
    HRESULT __stdcall abi_CreateInstantMessage_Default(abi_arg_in<hstring> userName, abi_arg_out<Windows::ApplicationModel::Contacts::IContactInstantMessageField> field) noexcept override
    {
        try
        {
            *field = detach(this->shim().CreateInstantMessage(*reinterpret_cast<const hstring *>(&userName)));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstantMessage_Category(abi_arg_in<hstring> userName, Windows::ApplicationModel::Contacts::ContactFieldCategory category, abi_arg_out<Windows::ApplicationModel::Contacts::IContactInstantMessageField> field) noexcept override
    {
        try
        {
            *field = detach(this->shim().CreateInstantMessage(*reinterpret_cast<const hstring *>(&userName), category));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstantMessage_All(abi_arg_in<hstring> userName, Windows::ApplicationModel::Contacts::ContactFieldCategory category, abi_arg_in<hstring> service, abi_arg_in<hstring> displayText, abi_arg_in<Windows::Foundation::IUriRuntimeClass> verb, abi_arg_out<Windows::ApplicationModel::Contacts::IContactInstantMessageField> field) noexcept override
    {
        try
        {
            *field = detach(this->shim().CreateInstantMessage(*reinterpret_cast<const hstring *>(&userName), category, *reinterpret_cast<const hstring *>(&service), *reinterpret_cast<const hstring *>(&displayText), *reinterpret_cast<const Windows::Foundation::Uri *>(&verb)));
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
    HRESULT __stdcall get_CompanyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CompanyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CompanyName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().CompanyName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompanyYomiName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CompanyYomiName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CompanyYomiName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().CompanyYomiName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Department(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Department());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Department(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Department(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Manager(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Manager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Manager(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Manager(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Office(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Office());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Office(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Office(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompanyAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CompanyAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CompanyAddress(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().CompanyAddress(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Description(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_Call(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Call());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Map(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Map());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Post(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Post());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoCall(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoCall());
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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceDisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHidden(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsHidden());
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
            this->shim().IsHidden(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppReadAccess(Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OtherAppReadAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppReadAccess(Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess value) noexcept override
    {
        try
        {
            this->shim().OtherAppReadAccess(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppWriteAccess(Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OtherAppWriteAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppWriteAccess(Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess value) noexcept override
    {
        try
        {
            this->shim().OtherAppWriteAccess(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChangeTracker(abi_arg_out<Windows::ApplicationModel::Contacts::IContactChangeTracker> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeTracker());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SyncManager(abi_arg_out<Windows::ApplicationModel::Contacts::IContactListSyncManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SyncManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsServerSearch(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportsServerSearch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDataAccountId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserDataAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ContactChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactList, Windows::ApplicationModel::Contacts::ContactChangedEventArgs>> value, event_token * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().ContactChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactList, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ContactChanged(event_token value) noexcept override
    {
        try
        {
            this->shim().ContactChanged(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveAsync(abi_arg_out<Windows::Foundation::IAsyncAction> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsync(abi_arg_out<Windows::Foundation::IAsyncAction> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetContactFromRemoteIdAsync(abi_arg_in<hstring> remoteId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact>> contact) noexcept override
    {
        try
        {
            *contact = detach(this->shim().GetContactFromRemoteIdAsync(*reinterpret_cast<const hstring *>(&remoteId)));
            return S_OK;
        }
        catch (...)
        {
            *contact = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMeContactAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact>> meContact) noexcept override
    {
        try
        {
            *meContact = detach(this->shim().GetMeContactAsync());
            return S_OK;
        }
        catch (...)
        {
            *meContact = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetContactReader(abi_arg_out<Windows::ApplicationModel::Contacts::IContactReader> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetContactReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetContactReaderWithOptions(abi_arg_in<Windows::ApplicationModel::Contacts::IContactQueryOptions> options, abi_arg_out<Windows::ApplicationModel::Contacts::IContactReader> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetContactReader(*reinterpret_cast<const Windows::ApplicationModel::Contacts::ContactQueryOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveContactAsync(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SaveContactAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteContactAsync(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeleteContactAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetContactAsync(abi_arg_in<hstring> contactId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact>> contacts) noexcept override
    {
        try
        {
            *contacts = detach(this->shim().GetContactAsync(*reinterpret_cast<const hstring *>(&contactId)));
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
    HRESULT __stdcall abi_RegisterSyncManagerAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RegisterSyncManagerAsync());
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
            this->shim().SupportsServerSearch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SyncConstraints(abi_arg_out<Windows::ApplicationModel::Contacts::IContactListSyncConstraints> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SyncConstraints());
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
    HRESULT __stdcall get_CanSyncDescriptions(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanSyncDescriptions());
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
            this->shim().CanSyncDescriptions(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxHomePhoneNumbers(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxHomePhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxHomePhoneNumbers(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxHomePhoneNumbers(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxMobilePhoneNumbers(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxMobilePhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxMobilePhoneNumbers(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxMobilePhoneNumbers(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxWorkPhoneNumbers(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxWorkPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxWorkPhoneNumbers(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxWorkPhoneNumbers(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxOtherPhoneNumbers(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxOtherPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxOtherPhoneNumbers(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxOtherPhoneNumbers(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPagerPhoneNumbers(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxPagerPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxPagerPhoneNumbers(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxPagerPhoneNumbers(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxBusinessFaxPhoneNumbers(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxBusinessFaxPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxBusinessFaxPhoneNumbers(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxBusinessFaxPhoneNumbers(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxHomeFaxPhoneNumbers(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxHomeFaxPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxHomeFaxPhoneNumbers(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxHomeFaxPhoneNumbers(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxCompanyPhoneNumbers(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxCompanyPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxCompanyPhoneNumbers(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxCompanyPhoneNumbers(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAssistantPhoneNumbers(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxAssistantPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxAssistantPhoneNumbers(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxAssistantPhoneNumbers(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxRadioPhoneNumbers(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxRadioPhoneNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxRadioPhoneNumbers(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxRadioPhoneNumbers(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPersonalEmailAddresses(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxPersonalEmailAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxPersonalEmailAddresses(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxPersonalEmailAddresses(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxWorkEmailAddresses(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxWorkEmailAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxWorkEmailAddresses(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxWorkEmailAddresses(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxOtherEmailAddresses(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxOtherEmailAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxOtherEmailAddresses(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxOtherEmailAddresses(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxHomeAddresses(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxHomeAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxHomeAddresses(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxHomeAddresses(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxWorkAddresses(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxWorkAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxWorkAddresses(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxWorkAddresses(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxOtherAddresses(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxOtherAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxOtherAddresses(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxOtherAddresses(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxBirthdayDates(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxBirthdayDates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxBirthdayDates(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxBirthdayDates(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAnniversaryDates(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxAnniversaryDates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxAnniversaryDates(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxAnniversaryDates(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxOtherDates(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxOtherDates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxOtherDates(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxOtherDates(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxOtherRelationships(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxOtherRelationships());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxOtherRelationships(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxOtherRelationships(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSpouseRelationships(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxSpouseRelationships());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxSpouseRelationships(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxSpouseRelationships(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPartnerRelationships(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxPartnerRelationships());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxPartnerRelationships(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxPartnerRelationships(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSiblingRelationships(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxSiblingRelationships());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxSiblingRelationships(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxSiblingRelationships(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxParentRelationships(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxParentRelationships());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxParentRelationships(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxParentRelationships(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxChildRelationships(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxChildRelationships());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxChildRelationships(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxChildRelationships(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxJobInfo(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxJobInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxJobInfo(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxJobInfo(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxWebsites(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxWebsites());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxWebsites(abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxWebsites(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
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
    HRESULT __stdcall get_Status(Windows::ApplicationModel::Contacts::ContactListSyncStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastSuccessfulSyncTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastSuccessfulSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastAttemptedSyncTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastAttemptedSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SyncAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SyncAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SyncStatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactListSyncManager, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SyncStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactListSyncManager, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SyncStatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().SyncStatusChanged(token);
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
    HRESULT __stdcall put_Status(Windows::ApplicationModel::Contacts::ContactListSyncStatus value) noexcept override
    {
        try
        {
            this->shim().Status(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastSuccessfulSyncTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().LastSuccessfulSyncTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastAttemptedSyncTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().LastAttemptedSyncTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
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
    HRESULT __stdcall get_UnstructuredAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnstructuredAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Street(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Street());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_City(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().City());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Region(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Region());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Country(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Country());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PostalCode(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PostalCode());
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
    HRESULT __stdcall abi_CreateLocation_Default(abi_arg_in<hstring> unstructuredAddress, abi_arg_out<Windows::ApplicationModel::Contacts::IContactLocationField> field) noexcept override
    {
        try
        {
            *field = detach(this->shim().CreateLocation(*reinterpret_cast<const hstring *>(&unstructuredAddress)));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateLocation_Category(abi_arg_in<hstring> unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory category, abi_arg_out<Windows::ApplicationModel::Contacts::IContactLocationField> field) noexcept override
    {
        try
        {
            *field = detach(this->shim().CreateLocation(*reinterpret_cast<const hstring *>(&unstructuredAddress), category));
            return S_OK;
        }
        catch (...)
        {
            *field = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateLocation_All(abi_arg_in<hstring> unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory category, abi_arg_in<hstring> street, abi_arg_in<hstring> city, abi_arg_in<hstring> region, abi_arg_in<hstring> country, abi_arg_in<hstring> postalCode, abi_arg_out<Windows::ApplicationModel::Contacts::IContactLocationField> field) noexcept override
    {
        try
        {
            *field = detach(this->shim().CreateLocation(*reinterpret_cast<const hstring *>(&unstructuredAddress), category, *reinterpret_cast<const hstring *>(&street), *reinterpret_cast<const hstring *>(&city), *reinterpret_cast<const hstring *>(&region), *reinterpret_cast<const hstring *>(&country), *reinterpret_cast<const hstring *>(&postalCode)));
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
    HRESULT __stdcall abi_ConvertContactToVCardAsync(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ConvertContactToVCardAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertContactToVCardAsyncWithMaxBytes(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, uint32_t maxBytes, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ConvertContactToVCardAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact), maxBytes));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertVCardToContactAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> vCard, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ConvertVCardToContactAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&vCard)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestStoreAsync(Windows::ApplicationModel::Contacts::ContactStoreAccessType accessType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestStoreAsync(accessType));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType accessType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestAnnotationStoreAsync(accessType));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SystemDisplayNameOrder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder value) noexcept override
    {
        try
        {
            this->shim().SystemDisplayNameOrder(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SystemSortOrder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder value) noexcept override
    {
        try
        {
            this->shim().SystemSortOrder(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().User());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactManagerStatics> : produce_base<D, Windows::ApplicationModel::Contacts::IContactManagerStatics>
{
    HRESULT __stdcall abi_ShowContactCard(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_in<Windows::Foundation::Rect> selection) noexcept override
    {
        try
        {
            this->shim().ShowContactCard(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowContactCardWithPlacement(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement) noexcept override
    {
        try
        {
            this->shim().ShowContactCard(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowDelayLoadedContactCard(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_out<Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader> dataLoader) noexcept override
    {
        try
        {
            *dataLoader = detach(this->shim().ShowDelayLoadedContactCard(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement));
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
    HRESULT __stdcall abi_RequestStoreAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore>> store) noexcept override
    {
        try
        {
            *store = detach(this->shim().RequestStoreAsync());
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
    HRESULT __stdcall abi_ConvertContactToVCardAsync(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference>> vCard) noexcept override
    {
        try
        {
            *vCard = detach(this->shim().ConvertContactToVCardAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *vCard = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertContactToVCardAsyncWithMaxBytes(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, uint32_t maxBytes, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference>> vCard) noexcept override
    {
        try
        {
            *vCard = detach(this->shim().ConvertContactToVCardAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact), maxBytes));
            return S_OK;
        }
        catch (...)
        {
            *vCard = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertVCardToContactAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> vCard, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact>> contact) noexcept override
    {
        try
        {
            *contact = detach(this->shim().ConvertVCardToContactAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&vCard)));
            return S_OK;
        }
        catch (...)
        {
            *contact = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestStoreAsyncWithAccessType(Windows::ApplicationModel::Contacts::ContactStoreAccessType accessType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore>> store) noexcept override
    {
        try
        {
            *store = detach(this->shim().RequestStoreAsync(accessType));
            return S_OK;
        }
        catch (...)
        {
            *store = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType accessType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore>> store) noexcept override
    {
        try
        {
            *store = detach(this->shim().RequestAnnotationStoreAsync(accessType));
            return S_OK;
        }
        catch (...)
        {
            *store = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsShowContactCardSupported(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsShowContactCardSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowContactCardWithOptions(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_in<Windows::ApplicationModel::Contacts::IContactCardOptions> contactCardOptions) noexcept override
    {
        try
        {
            this->shim().ShowContactCard(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement, *reinterpret_cast<const Windows::ApplicationModel::Contacts::ContactCardOptions *>(&contactCardOptions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsShowDelayLoadedContactCardSupported(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsShowDelayLoadedContactCardSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowDelayLoadedContactCardWithOptions(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_in<Windows::ApplicationModel::Contacts::IContactCardOptions> contactCardOptions, abi_arg_out<Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader> dataLoader) noexcept override
    {
        try
        {
            *dataLoader = detach(this->shim().ShowDelayLoadedContactCard(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement, *reinterpret_cast<const Windows::ApplicationModel::Contacts::ContactCardOptions *>(&contactCardOptions)));
            return S_OK;
        }
        catch (...)
        {
            *dataLoader = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowFullContactCard(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_in<Windows::ApplicationModel::Contacts::IFullContactCardOptions> fullContactCardOptions) noexcept override
    {
        try
        {
            this->shim().ShowFullContactCard(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact), *reinterpret_cast<const Windows::ApplicationModel::Contacts::FullContactCardOptions *>(&fullContactCardOptions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SystemDisplayNameOrder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder value) noexcept override
    {
        try
        {
            this->shim().SystemDisplayNameOrder(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SystemSortOrder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder value) noexcept override
    {
        try
        {
            this->shim().SystemSortOrder(value);
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
    HRESULT __stdcall abi_GetForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_out<Windows::ApplicationModel::Contacts::IContactManagerForUser> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactMatchReason> : produce_base<D, Windows::ApplicationModel::Contacts::IContactMatchReason>
{
    HRESULT __stdcall get_Field(Windows::ApplicationModel::Contacts::ContactMatchReasonKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Field());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Segments(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Segments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
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
    HRESULT __stdcall get_FirstName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FirstName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().FirstName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().LastName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MiddleName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MiddleName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MiddleName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().MiddleName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YomiGivenName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().YomiGivenName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_YomiGivenName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().YomiGivenName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YomiFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().YomiFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_YomiFamilyName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().YomiFamilyName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HonorificNameSuffix(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HonorificNameSuffix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HonorificNameSuffix(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().HonorificNameSuffix(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HonorificNamePrefix(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HonorificNamePrefix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HonorificNamePrefix(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().HonorificNamePrefix(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YomiDisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().YomiDisplayName());
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
struct produce<D, Windows::ApplicationModel::Contacts::IContactPhone> : produce_base<D, Windows::ApplicationModel::Contacts::IContactPhone>
{
    HRESULT __stdcall get_Number(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Number());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Number(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Number(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::ApplicationModel::Contacts::ContactPhoneKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Kind(Windows::ApplicationModel::Contacts::ContactPhoneKind value) noexcept override
    {
        try
        {
            this->shim().Kind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Description(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_CommitButtonText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CommitButtonText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CommitButtonText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().CommitButtonText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionMode(Windows::ApplicationModel::Contacts::ContactSelectionMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectionMode(Windows::ApplicationModel::Contacts::ContactSelectionMode value) noexcept override
    {
        try
        {
            this->shim().SelectionMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredFields(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredFields());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickSingleContactAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactInformation>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().PickSingleContactAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickMultipleContactsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactInformation>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().PickMultipleContactsAsync());
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
    HRESULT __stdcall get_DesiredFieldsWithContactFieldType(abi_arg_out<Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Contacts::ContactFieldType>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredFieldsWithContactFieldType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickContactAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().PickContactAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickContactsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::Contact>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().PickContactsAsync());
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
    HRESULT __stdcall get_TextSearch(abi_arg_out<Windows::ApplicationModel::Contacts::IContactQueryTextSearch> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TextSearch());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactListIds(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContactListIds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeContactsFromHiddenLists(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IncludeContactsFromHiddenLists());
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
            this->shim().IncludeContactsFromHiddenLists(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredFields(Windows::ApplicationModel::Contacts::ContactQueryDesiredFields * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredFields());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredFields(Windows::ApplicationModel::Contacts::ContactQueryDesiredFields value) noexcept override
    {
        try
        {
            this->shim().DesiredFields(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredOperations(Windows::ApplicationModel::Contacts::ContactAnnotationOperations * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredOperations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredOperations(Windows::ApplicationModel::Contacts::ContactAnnotationOperations value) noexcept override
    {
        try
        {
            this->shim().DesiredOperations(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AnnotationListIds(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AnnotationListIds());
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
    HRESULT __stdcall abi_CreateWithText(abi_arg_in<hstring> text, abi_arg_out<Windows::ApplicationModel::Contacts::IContactQueryOptions> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithText(*reinterpret_cast<const hstring *>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithTextAndFields(abi_arg_in<hstring> text, Windows::ApplicationModel::Contacts::ContactQuerySearchFields fields, abi_arg_out<Windows::ApplicationModel::Contacts::IContactQueryOptions> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithTextAndFields(*reinterpret_cast<const hstring *>(&text), fields));
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
    HRESULT __stdcall get_Fields(Windows::ApplicationModel::Contacts::ContactQuerySearchFields * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Fields());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Fields(Windows::ApplicationModel::Contacts::ContactQuerySearchFields value) noexcept override
    {
        try
        {
            this->shim().Fields(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Text(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Text(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchScope(Windows::ApplicationModel::Contacts::ContactQuerySearchScope * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SearchScope());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SearchScope(Windows::ApplicationModel::Contacts::ContactQuerySearchScope value) noexcept override
    {
        try
        {
            this->shim().SearchScope(value);
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
    HRESULT __stdcall abi_ReadBatchAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactBatch>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadBatchAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMatchingPropertiesWithMatchReason(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactMatchReason>> ppRetVal) noexcept override
    {
        try
        {
            *ppRetVal = detach(this->shim().GetMatchingPropertiesWithMatchReason(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact)));
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
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Name(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Description(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_Relationship(Windows::ApplicationModel::Contacts::ContactRelationship * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Relationship());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Relationship(Windows::ApplicationModel::Contacts::ContactRelationship value) noexcept override
    {
        try
        {
            this->shim().Relationship(value);
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
    HRESULT __stdcall abi_FindContactsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>>> contacts) noexcept override
    {
        try
        {
            *contacts = detach(this->shim().FindContactsAsync());
            return S_OK;
        }
        catch (...)
        {
            *contacts = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindContactsWithSearchTextAsync(abi_arg_in<hstring> searchText, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>>> contacts) noexcept override
    {
        try
        {
            *contacts = detach(this->shim().FindContactsAsync(*reinterpret_cast<const hstring *>(&searchText)));
            return S_OK;
        }
        catch (...)
        {
            *contacts = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetContactAsync(abi_arg_in<hstring> contactId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact>> contacts) noexcept override
    {
        try
        {
            *contacts = detach(this->shim().GetContactAsync(*reinterpret_cast<const hstring *>(&contactId)));
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
    HRESULT __stdcall get_ChangeTracker(abi_arg_out<Windows::ApplicationModel::Contacts::IContactChangeTracker> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeTracker());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ContactChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactStore, Windows::ApplicationModel::Contacts::ContactChangedEventArgs>> value, event_token * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().ContactChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactStore, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ContactChanged(event_token value) noexcept override
    {
        try
        {
            this->shim().ContactChanged(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AggregateContactManager(abi_arg_out<Windows::ApplicationModel::Contacts::IAggregateContactManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AggregateContactManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindContactListsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FindContactListsAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetContactListAsync(abi_arg_in<hstring> contactListId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetContactListAsync(*reinterpret_cast<const hstring *>(&contactListId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateContactListAsync(abi_arg_in<hstring> displayName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateContactListAsync(*reinterpret_cast<const hstring *>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMeContactAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact>> meContact) noexcept override
    {
        try
        {
            *meContact = detach(this->shim().GetMeContactAsync());
            return S_OK;
        }
        catch (...)
        {
            *meContact = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetContactReader(abi_arg_out<Windows::ApplicationModel::Contacts::IContactReader> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetContactReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetContactReaderWithOptions(abi_arg_in<Windows::ApplicationModel::Contacts::IContactQueryOptions> options, abi_arg_out<Windows::ApplicationModel::Contacts::IContactReader> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetContactReader(*reinterpret_cast<const Windows::ApplicationModel::Contacts::ContactQueryOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateContactListInAccountAsync(abi_arg_in<hstring> displayName, abi_arg_in<hstring> userDataAccountId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateContactListAsync(*reinterpret_cast<const hstring *>(&displayName), *reinterpret_cast<const hstring *>(&userDataAccountId)));
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
    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Uri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Description(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_RawValue(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RawValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RawValue(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().RawValue(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredRemainingView());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference value) noexcept override
    {
        try
        {
            this->shim().DesiredRemainingView(value);
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
    HRESULT __stdcall get_Email(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Email());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstantMessage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InstantMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertNameToType(abi_arg_in<hstring> name, Windows::ApplicationModel::Contacts::ContactFieldType * type) noexcept override
    {
        try
        {
            *type = detach(this->shim().ConvertNameToType(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertTypeToName(Windows::ApplicationModel::Contacts::ContactFieldType type, abi_arg_out<hstring> name) noexcept override
    {
        try
        {
            *name = detach(this->shim().ConvertTypeToName(type));
            return S_OK;
        }
        catch (...)
        {
            *name = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Contacts {

template <typename D> Windows::ApplicationModel::Contacts::ContactCardHeaderKind impl_IContactCardOptions<D>::HeaderKind() const
{
    Windows::ApplicationModel::Contacts::ContactCardHeaderKind value {};
    check_hresult(static_cast<const IContactCardOptions &>(static_cast<const D &>(*this))->get_HeaderKind(&value));
    return value;
}

template <typename D> void impl_IContactCardOptions<D>::HeaderKind(Windows::ApplicationModel::Contacts::ContactCardHeaderKind value) const
{
    check_hresult(static_cast<const IContactCardOptions &>(static_cast<const D &>(*this))->put_HeaderKind(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactCardTabKind impl_IContactCardOptions<D>::InitialTabKind() const
{
    Windows::ApplicationModel::Contacts::ContactCardTabKind value {};
    check_hresult(static_cast<const IContactCardOptions &>(static_cast<const D &>(*this))->get_InitialTabKind(&value));
    return value;
}

template <typename D> void impl_IContactCardOptions<D>::InitialTabKind(Windows::ApplicationModel::Contacts::ContactCardTabKind value) const
{
    check_hresult(static_cast<const IContactCardOptions &>(static_cast<const D &>(*this))->put_InitialTabKind(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IContactCardOptions2<D>::ServerSearchContactListIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IContactCardOptions2 &>(static_cast<const D &>(*this))->get_ServerSearchContactListIds(put(value)));
    return value;
}

template <typename D> Windows::UI::ViewManagement::ViewSizePreference impl_IFullContactCardOptions<D>::DesiredRemainingView() const
{
    Windows::UI::ViewManagement::ViewSizePreference value {};
    check_hresult(static_cast<const IFullContactCardOptions &>(static_cast<const D &>(*this))->get_DesiredRemainingView(&value));
    return value;
}

template <typename D> void impl_IFullContactCardOptions<D>::DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference value) const
{
    check_hresult(static_cast<const IFullContactCardOptions &>(static_cast<const D &>(*this))->put_DesiredRemainingView(value));
}

template <typename D> void impl_IContactManagerStatics<D>::ShowContactCard(const Windows::ApplicationModel::Contacts::Contact & contact, const Windows::Foundation::Rect & selection) const
{
    check_hresult(static_cast<const IContactManagerStatics &>(static_cast<const D &>(*this))->abi_ShowContactCard(get(contact), get(selection)));
}

template <typename D> void impl_IContactManagerStatics<D>::ShowContactCard(const Windows::ApplicationModel::Contacts::Contact & contact, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const
{
    check_hresult(static_cast<const IContactManagerStatics &>(static_cast<const D &>(*this))->abi_ShowContactCardWithPlacement(get(contact), get(selection), preferredPlacement));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader impl_IContactManagerStatics<D>::ShowDelayLoadedContactCard(const Windows::ApplicationModel::Contacts::Contact & contact, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const
{
    Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader dataLoader { nullptr };
    check_hresult(static_cast<const IContactManagerStatics &>(static_cast<const D &>(*this))->abi_ShowDelayLoadedContactCard(get(contact), get(selection), preferredPlacement, put(dataLoader)));
    return dataLoader;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> impl_IContactManagerStatics2<D>::RequestStoreAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> store;
    check_hresult(static_cast<const IContactManagerStatics2 &>(static_cast<const D &>(*this))->abi_RequestStoreAsync(put(store)));
    return store;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> impl_IContactManagerStatics3<D>::ConvertContactToVCardAsync(const Windows::ApplicationModel::Contacts::Contact & contact) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> vCard;
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->abi_ConvertContactToVCardAsync(get(contact), put(vCard)));
    return vCard;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> impl_IContactManagerStatics3<D>::ConvertContactToVCardAsync(const Windows::ApplicationModel::Contacts::Contact & contact, uint32_t maxBytes) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> vCard;
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->abi_ConvertContactToVCardAsyncWithMaxBytes(get(contact), maxBytes, put(vCard)));
    return vCard;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> impl_IContactManagerStatics3<D>::ConvertVCardToContactAsync(const Windows::Storage::Streams::IRandomAccessStreamReference & vCard) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> contact;
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->abi_ConvertVCardToContactAsync(get(vCard), put(contact)));
    return contact;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> impl_IContactManagerStatics3<D>::RequestStoreAsync(Windows::ApplicationModel::Contacts::ContactStoreAccessType accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> store;
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->abi_RequestStoreAsyncWithAccessType(accessType, put(store)));
    return store;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore> impl_IContactManagerStatics3<D>::RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore> store;
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->abi_RequestAnnotationStoreAsync(accessType, put(store)));
    return store;
}

template <typename D> bool impl_IContactManagerStatics3<D>::IsShowContactCardSupported() const
{
    bool result {};
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->abi_IsShowContactCardSupported(&result));
    return result;
}

template <typename D> void impl_IContactManagerStatics3<D>::ShowContactCard(const Windows::ApplicationModel::Contacts::Contact & contact, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::ApplicationModel::Contacts::ContactCardOptions & contactCardOptions) const
{
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->abi_ShowContactCardWithOptions(get(contact), get(selection), preferredPlacement, get(contactCardOptions)));
}

template <typename D> bool impl_IContactManagerStatics3<D>::IsShowDelayLoadedContactCardSupported() const
{
    bool result {};
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->abi_IsShowDelayLoadedContactCardSupported(&result));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader impl_IContactManagerStatics3<D>::ShowDelayLoadedContactCard(const Windows::ApplicationModel::Contacts::Contact & contact, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::ApplicationModel::Contacts::ContactCardOptions & contactCardOptions) const
{
    Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader dataLoader { nullptr };
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->abi_ShowDelayLoadedContactCardWithOptions(get(contact), get(selection), preferredPlacement, get(contactCardOptions), put(dataLoader)));
    return dataLoader;
}

template <typename D> void impl_IContactManagerStatics3<D>::ShowFullContactCard(const Windows::ApplicationModel::Contacts::Contact & contact, const Windows::ApplicationModel::Contacts::FullContactCardOptions & fullContactCardOptions) const
{
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->abi_ShowFullContactCard(get(contact), get(fullContactCardOptions)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactNameOrder impl_IContactManagerStatics3<D>::SystemDisplayNameOrder() const
{
    Windows::ApplicationModel::Contacts::ContactNameOrder value {};
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->get_SystemDisplayNameOrder(&value));
    return value;
}

template <typename D> void impl_IContactManagerStatics3<D>::SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder value) const
{
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->put_SystemDisplayNameOrder(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactNameOrder impl_IContactManagerStatics3<D>::SystemSortOrder() const
{
    Windows::ApplicationModel::Contacts::ContactNameOrder value {};
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->get_SystemSortOrder(&value));
    return value;
}

template <typename D> void impl_IContactManagerStatics3<D>::SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder value) const
{
    check_hresult(static_cast<const IContactManagerStatics3 &>(static_cast<const D &>(*this))->put_SystemSortOrder(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactManagerForUser impl_IContactManagerStatics4<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::ApplicationModel::Contacts::ContactManagerForUser result { nullptr };
    check_hresult(static_cast<const IContactManagerStatics4 &>(static_cast<const D &>(*this))->abi_GetForUser(get(user), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> impl_IContactManagerForUser<D>::ConvertContactToVCardAsync(const Windows::ApplicationModel::Contacts::Contact & contact) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> result;
    check_hresult(static_cast<const IContactManagerForUser &>(static_cast<const D &>(*this))->abi_ConvertContactToVCardAsync(get(contact), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> impl_IContactManagerForUser<D>::ConvertContactToVCardAsync(const Windows::ApplicationModel::Contacts::Contact & contact, uint32_t maxBytes) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> result;
    check_hresult(static_cast<const IContactManagerForUser &>(static_cast<const D &>(*this))->abi_ConvertContactToVCardAsyncWithMaxBytes(get(contact), maxBytes, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> impl_IContactManagerForUser<D>::ConvertVCardToContactAsync(const Windows::Storage::Streams::IRandomAccessStreamReference & vCard) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> result;
    check_hresult(static_cast<const IContactManagerForUser &>(static_cast<const D &>(*this))->abi_ConvertVCardToContactAsync(get(vCard), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> impl_IContactManagerForUser<D>::RequestStoreAsync(Windows::ApplicationModel::Contacts::ContactStoreAccessType accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> result;
    check_hresult(static_cast<const IContactManagerForUser &>(static_cast<const D &>(*this))->abi_RequestStoreAsync(accessType, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore> impl_IContactManagerForUser<D>::RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore> result;
    check_hresult(static_cast<const IContactManagerForUser &>(static_cast<const D &>(*this))->abi_RequestAnnotationStoreAsync(accessType, put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactNameOrder impl_IContactManagerForUser<D>::SystemDisplayNameOrder() const
{
    Windows::ApplicationModel::Contacts::ContactNameOrder value {};
    check_hresult(static_cast<const IContactManagerForUser &>(static_cast<const D &>(*this))->get_SystemDisplayNameOrder(&value));
    return value;
}

template <typename D> void impl_IContactManagerForUser<D>::SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder value) const
{
    check_hresult(static_cast<const IContactManagerForUser &>(static_cast<const D &>(*this))->put_SystemDisplayNameOrder(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactNameOrder impl_IContactManagerForUser<D>::SystemSortOrder() const
{
    Windows::ApplicationModel::Contacts::ContactNameOrder value {};
    check_hresult(static_cast<const IContactManagerForUser &>(static_cast<const D &>(*this))->get_SystemSortOrder(&value));
    return value;
}

template <typename D> void impl_IContactManagerForUser<D>::SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder value) const
{
    check_hresult(static_cast<const IContactManagerForUser &>(static_cast<const D &>(*this))->put_SystemSortOrder(value));
}

template <typename D> Windows::System::User impl_IContactManagerForUser<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IContactManagerForUser &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> impl_IAggregateContactManager<D>::FindRawContactsAsync(const Windows::ApplicationModel::Contacts::Contact & contact) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> value;
    check_hresult(static_cast<const IAggregateContactManager &>(static_cast<const D &>(*this))->abi_FindRawContactsAsync(get(contact), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> impl_IAggregateContactManager<D>::TryLinkContactsAsync(const Windows::ApplicationModel::Contacts::Contact & primaryContact, const Windows::ApplicationModel::Contacts::Contact & secondaryContact) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> contact;
    check_hresult(static_cast<const IAggregateContactManager &>(static_cast<const D &>(*this))->abi_TryLinkContactsAsync(get(primaryContact), get(secondaryContact), put(contact)));
    return contact;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAggregateContactManager<D>::UnlinkRawContactAsync(const Windows::ApplicationModel::Contacts::Contact & contact) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IAggregateContactManager &>(static_cast<const D &>(*this))->abi_UnlinkRawContactAsync(get(contact), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAggregateContactManager<D>::TrySetPreferredSourceForPictureAsync(const Windows::ApplicationModel::Contacts::Contact & aggregateContact, const Windows::ApplicationModel::Contacts::Contact & rawContact) const
{
    Windows::Foundation::IAsyncOperation<bool> value;
    check_hresult(static_cast<const IAggregateContactManager &>(static_cast<const D &>(*this))->abi_TrySetPreferredSourceForPictureAsync(get(aggregateContact), get(rawContact), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAggregateContactManager2<D>::SetRemoteIdentificationInformationAsync(hstring_ref contactListId, hstring_ref remoteSourceId, hstring_ref accountId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IAggregateContactManager2 &>(static_cast<const D &>(*this))->abi_SetRemoteIdentificationInformationAsync(get(contactListId), get(remoteSourceId), get(accountId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> impl_IContactAnnotationStore<D>::FindContactIdsByEmailAsync(hstring_ref emailAddress) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> contactIds;
    check_hresult(static_cast<const IContactAnnotationStore &>(static_cast<const D &>(*this))->abi_FindContactIdsByEmailAsync(get(emailAddress), put(contactIds)));
    return contactIds;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> impl_IContactAnnotationStore<D>::FindContactIdsByPhoneNumberAsync(hstring_ref phoneNumber) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> contactIds;
    check_hresult(static_cast<const IContactAnnotationStore &>(static_cast<const D &>(*this))->abi_FindContactIdsByPhoneNumberAsync(get(phoneNumber), put(contactIds)));
    return contactIds;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> impl_IContactAnnotationStore<D>::FindAnnotationsForContactAsync(const Windows::ApplicationModel::Contacts::Contact & contact) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> annotations;
    check_hresult(static_cast<const IContactAnnotationStore &>(static_cast<const D &>(*this))->abi_FindAnnotationsForContactAsync(get(contact), put(annotations)));
    return annotations;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactAnnotationStore<D>::DisableAnnotationAsync(const Windows::ApplicationModel::Contacts::ContactAnnotation & annotation) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IContactAnnotationStore &>(static_cast<const D &>(*this))->abi_DisableAnnotationAsync(get(annotation), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> impl_IContactAnnotationStore<D>::CreateAnnotationListAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> value;
    check_hresult(static_cast<const IContactAnnotationStore &>(static_cast<const D &>(*this))->abi_CreateAnnotationListAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> impl_IContactAnnotationStore<D>::CreateAnnotationListAsync(hstring_ref userDataAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> value;
    check_hresult(static_cast<const IContactAnnotationStore &>(static_cast<const D &>(*this))->abi_CreateAnnotationListInAccountAsync(get(userDataAccountId), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> impl_IContactAnnotationStore<D>::GetAnnotationListAsync(hstring_ref annotationListId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationList> value;
    check_hresult(static_cast<const IContactAnnotationStore &>(static_cast<const D &>(*this))->abi_GetAnnotationListAsync(get(annotationListId), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>> impl_IContactAnnotationStore<D>::FindAnnotationListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>> lists;
    check_hresult(static_cast<const IContactAnnotationStore &>(static_cast<const D &>(*this))->abi_FindAnnotationListsAsync(put(lists)));
    return lists;
}

template <typename D> hstring impl_IContactAnnotationList<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IContactAnnotationList &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IContactAnnotationList<D>::ProviderPackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IContactAnnotationList &>(static_cast<const D &>(*this))->get_ProviderPackageFamilyName(put(value)));
    return value;
}

template <typename D> hstring impl_IContactAnnotationList<D>::UserDataAccountId() const
{
    hstring value;
    check_hresult(static_cast<const IContactAnnotationList &>(static_cast<const D &>(*this))->get_UserDataAccountId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactAnnotationList<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IContactAnnotationList &>(static_cast<const D &>(*this))->abi_DeleteAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IContactAnnotationList<D>::TrySaveAnnotationAsync(const Windows::ApplicationModel::Contacts::ContactAnnotation & annotation) const
{
    Windows::Foundation::IAsyncOperation<bool> ppResult;
    check_hresult(static_cast<const IContactAnnotationList &>(static_cast<const D &>(*this))->abi_TrySaveAnnotationAsync(get(annotation), put(ppResult)));
    return ppResult;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotation> impl_IContactAnnotationList<D>::GetAnnotationAsync(hstring_ref annotationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotation> annotation;
    check_hresult(static_cast<const IContactAnnotationList &>(static_cast<const D &>(*this))->abi_GetAnnotationAsync(get(annotationId), put(annotation)));
    return annotation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> impl_IContactAnnotationList<D>::FindAnnotationsByRemoteIdAsync(hstring_ref remoteId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> annotations;
    check_hresult(static_cast<const IContactAnnotationList &>(static_cast<const D &>(*this))->abi_FindAnnotationsByRemoteIdAsync(get(remoteId), put(annotations)));
    return annotations;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> impl_IContactAnnotationList<D>::FindAnnotationsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotation>> annotations;
    check_hresult(static_cast<const IContactAnnotationList &>(static_cast<const D &>(*this))->abi_FindAnnotationsAsync(put(annotations)));
    return annotations;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactAnnotationList<D>::DeleteAnnotationAsync(const Windows::ApplicationModel::Contacts::ContactAnnotation & annotation) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IContactAnnotationList &>(static_cast<const D &>(*this))->abi_DeleteAnnotationAsync(get(annotation), put(value)));
    return value;
}

template <typename D> hstring impl_IContactAnnotation<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IContactAnnotation &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IContactAnnotation<D>::AnnotationListId() const
{
    hstring value;
    check_hresult(static_cast<const IContactAnnotation &>(static_cast<const D &>(*this))->get_AnnotationListId(put(value)));
    return value;
}

template <typename D> hstring impl_IContactAnnotation<D>::ContactId() const
{
    hstring value;
    check_hresult(static_cast<const IContactAnnotation &>(static_cast<const D &>(*this))->get_ContactId(put(value)));
    return value;
}

template <typename D> void impl_IContactAnnotation<D>::ContactId(hstring_ref value) const
{
    check_hresult(static_cast<const IContactAnnotation &>(static_cast<const D &>(*this))->put_ContactId(get(value)));
}

template <typename D> hstring impl_IContactAnnotation<D>::RemoteId() const
{
    hstring value;
    check_hresult(static_cast<const IContactAnnotation &>(static_cast<const D &>(*this))->get_RemoteId(put(value)));
    return value;
}

template <typename D> void impl_IContactAnnotation<D>::RemoteId(hstring_ref value) const
{
    check_hresult(static_cast<const IContactAnnotation &>(static_cast<const D &>(*this))->put_RemoteId(get(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactAnnotationOperations impl_IContactAnnotation<D>::SupportedOperations() const
{
    Windows::ApplicationModel::Contacts::ContactAnnotationOperations value {};
    check_hresult(static_cast<const IContactAnnotation &>(static_cast<const D &>(*this))->get_SupportedOperations(&value));
    return value;
}

template <typename D> void impl_IContactAnnotation<D>::SupportedOperations(Windows::ApplicationModel::Contacts::ContactAnnotationOperations value) const
{
    check_hresult(static_cast<const IContactAnnotation &>(static_cast<const D &>(*this))->put_SupportedOperations(value));
}

template <typename D> bool impl_IContactAnnotation<D>::IsDisabled() const
{
    bool value {};
    check_hresult(static_cast<const IContactAnnotation &>(static_cast<const D &>(*this))->get_IsDisabled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IContactAnnotation<D>::ProviderProperties() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(static_cast<const IContactAnnotation &>(static_cast<const D &>(*this))->get_ProviderProperties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> impl_IContactStore<D>::FindContactsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> contacts;
    check_hresult(static_cast<const IContactStore &>(static_cast<const D &>(*this))->abi_FindContactsAsync(put(contacts)));
    return contacts;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> impl_IContactStore<D>::FindContactsAsync(hstring_ref searchText) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact>> contacts;
    check_hresult(static_cast<const IContactStore &>(static_cast<const D &>(*this))->abi_FindContactsWithSearchTextAsync(get(searchText), put(contacts)));
    return contacts;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> impl_IContactStore<D>::GetContactAsync(hstring_ref contactId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> contacts;
    check_hresult(static_cast<const IContactStore &>(static_cast<const D &>(*this))->abi_GetContactAsync(get(contactId), put(contacts)));
    return contacts;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactChangeTracker impl_IContactStore2<D>::ChangeTracker() const
{
    Windows::ApplicationModel::Contacts::ContactChangeTracker value { nullptr };
    check_hresult(static_cast<const IContactStore2 &>(static_cast<const D &>(*this))->get_ChangeTracker(put(value)));
    return value;
}

template <typename D> event_token impl_IContactStore2<D>::ContactChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactStore, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> & value) const
{
    event_token returnValue {};
    check_hresult(static_cast<const IContactStore2 &>(static_cast<const D &>(*this))->add_ContactChanged(get(value), &returnValue));
    return returnValue;
}

template <typename D> event_revoker<IContactStore2> impl_IContactStore2<D>::ContactChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactStore, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IContactStore2>(this, &ABI::Windows::ApplicationModel::Contacts::IContactStore2::remove_ContactChanged, ContactChanged(value));
}

template <typename D> void impl_IContactStore2<D>::ContactChanged(event_token value) const
{
    check_hresult(static_cast<const IContactStore2 &>(static_cast<const D &>(*this))->remove_ContactChanged(value));
}

template <typename D> Windows::ApplicationModel::Contacts::AggregateContactManager impl_IContactStore2<D>::AggregateContactManager() const
{
    Windows::ApplicationModel::Contacts::AggregateContactManager value { nullptr };
    check_hresult(static_cast<const IContactStore2 &>(static_cast<const D &>(*this))->get_AggregateContactManager(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>> impl_IContactStore2<D>::FindContactListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>> value;
    check_hresult(static_cast<const IContactStore2 &>(static_cast<const D &>(*this))->abi_FindContactListsAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> impl_IContactStore2<D>::GetContactListAsync(hstring_ref contactListId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> value;
    check_hresult(static_cast<const IContactStore2 &>(static_cast<const D &>(*this))->abi_GetContactListAsync(get(contactListId), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> impl_IContactStore2<D>::CreateContactListAsync(hstring_ref displayName) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> value;
    check_hresult(static_cast<const IContactStore2 &>(static_cast<const D &>(*this))->abi_CreateContactListAsync(get(displayName), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> impl_IContactStore2<D>::GetMeContactAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> meContact;
    check_hresult(static_cast<const IContactStore2 &>(static_cast<const D &>(*this))->abi_GetMeContactAsync(put(meContact)));
    return meContact;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactReader impl_IContactStore2<D>::GetContactReader() const
{
    Windows::ApplicationModel::Contacts::ContactReader value { nullptr };
    check_hresult(static_cast<const IContactStore2 &>(static_cast<const D &>(*this))->abi_GetContactReader(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactReader impl_IContactStore2<D>::GetContactReader(const Windows::ApplicationModel::Contacts::ContactQueryOptions & options) const
{
    Windows::ApplicationModel::Contacts::ContactReader value { nullptr };
    check_hresult(static_cast<const IContactStore2 &>(static_cast<const D &>(*this))->abi_GetContactReaderWithOptions(get(options), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> impl_IContactStore2<D>::CreateContactListAsync(hstring_ref displayName, hstring_ref userDataAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactList> value;
    check_hresult(static_cast<const IContactStore2 &>(static_cast<const D &>(*this))->abi_CreateContactListInAccountAsync(get(displayName), get(userDataAccountId), put(value)));
    return value;
}

template <typename D> hstring impl_IContactList<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IContactList<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_IContactList<D>::DisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->put_DisplayName(get(value)));
}

template <typename D> hstring impl_IContactList<D>::SourceDisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->get_SourceDisplayName(put(value)));
    return value;
}

template <typename D> bool impl_IContactList<D>::IsHidden() const
{
    bool value {};
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->get_IsHidden(&value));
    return value;
}

template <typename D> void impl_IContactList<D>::IsHidden(bool value) const
{
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->put_IsHidden(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess impl_IContactList<D>::OtherAppReadAccess() const
{
    Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess value {};
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->get_OtherAppReadAccess(&value));
    return value;
}

template <typename D> void impl_IContactList<D>::OtherAppReadAccess(Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess value) const
{
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->put_OtherAppReadAccess(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess impl_IContactList<D>::OtherAppWriteAccess() const
{
    Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess value {};
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->get_OtherAppWriteAccess(&value));
    return value;
}

template <typename D> void impl_IContactList<D>::OtherAppWriteAccess(Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess value) const
{
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->put_OtherAppWriteAccess(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactChangeTracker impl_IContactList<D>::ChangeTracker() const
{
    Windows::ApplicationModel::Contacts::ContactChangeTracker value { nullptr };
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->get_ChangeTracker(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactListSyncManager impl_IContactList<D>::SyncManager() const
{
    Windows::ApplicationModel::Contacts::ContactListSyncManager value { nullptr };
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->get_SyncManager(put(value)));
    return value;
}

template <typename D> bool impl_IContactList<D>::SupportsServerSearch() const
{
    bool value {};
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->get_SupportsServerSearch(&value));
    return value;
}

template <typename D> hstring impl_IContactList<D>::UserDataAccountId() const
{
    hstring value;
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->get_UserDataAccountId(put(value)));
    return value;
}

template <typename D> event_token impl_IContactList<D>::ContactChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactList, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> & value) const
{
    event_token returnValue {};
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->add_ContactChanged(get(value), &returnValue));
    return returnValue;
}

template <typename D> event_revoker<IContactList> impl_IContactList<D>::ContactChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactList, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IContactList>(this, &ABI::Windows::ApplicationModel::Contacts::IContactList::remove_ContactChanged, ContactChanged(value));
}

template <typename D> void impl_IContactList<D>::ContactChanged(event_token value) const
{
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->remove_ContactChanged(value));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactList<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction returnValue;
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->abi_SaveAsync(put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactList<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction returnValue;
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->abi_DeleteAsync(put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> impl_IContactList<D>::GetContactFromRemoteIdAsync(hstring_ref remoteId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> contact;
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->abi_GetContactFromRemoteIdAsync(get(remoteId), put(contact)));
    return contact;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> impl_IContactList<D>::GetMeContactAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> meContact;
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->abi_GetMeContactAsync(put(meContact)));
    return meContact;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactReader impl_IContactList<D>::GetContactReader() const
{
    Windows::ApplicationModel::Contacts::ContactReader value { nullptr };
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->abi_GetContactReader(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactReader impl_IContactList<D>::GetContactReader(const Windows::ApplicationModel::Contacts::ContactQueryOptions & options) const
{
    Windows::ApplicationModel::Contacts::ContactReader value { nullptr };
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->abi_GetContactReaderWithOptions(get(options), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactList<D>::SaveContactAsync(const Windows::ApplicationModel::Contacts::Contact & contact) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->abi_SaveContactAsync(get(contact), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactList<D>::DeleteContactAsync(const Windows::ApplicationModel::Contacts::Contact & contact) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->abi_DeleteContactAsync(get(contact), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> impl_IContactList<D>::GetContactAsync(hstring_ref contactId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> contacts;
    check_hresult(static_cast<const IContactList &>(static_cast<const D &>(*this))->abi_GetContactAsync(get(contactId), put(contacts)));
    return contacts;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactList2<D>::RegisterSyncManagerAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IContactList2 &>(static_cast<const D &>(*this))->abi_RegisterSyncManagerAsync(put(result)));
    return result;
}

template <typename D> void impl_IContactList2<D>::SupportsServerSearch(bool value) const
{
    check_hresult(static_cast<const IContactList2 &>(static_cast<const D &>(*this))->put_SupportsServerSearch(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactListSyncConstraints impl_IContactList2<D>::SyncConstraints() const
{
    Windows::ApplicationModel::Contacts::ContactListSyncConstraints value { nullptr };
    check_hresult(static_cast<const IContactList2 &>(static_cast<const D &>(*this))->get_SyncConstraints(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactListSyncStatus impl_IContactListSyncManager<D>::Status() const
{
    Windows::ApplicationModel::Contacts::ContactListSyncStatus value {};
    check_hresult(static_cast<const IContactListSyncManager &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IContactListSyncManager<D>::LastSuccessfulSyncTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IContactListSyncManager &>(static_cast<const D &>(*this))->get_LastSuccessfulSyncTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IContactListSyncManager<D>::LastAttemptedSyncTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IContactListSyncManager &>(static_cast<const D &>(*this))->get_LastAttemptedSyncTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IContactListSyncManager<D>::SyncAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IContactListSyncManager &>(static_cast<const D &>(*this))->abi_SyncAsync(put(result)));
    return result;
}

template <typename D> event_token impl_IContactListSyncManager<D>::SyncStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactListSyncManager, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IContactListSyncManager &>(static_cast<const D &>(*this))->add_SyncStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IContactListSyncManager> impl_IContactListSyncManager<D>::SyncStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactListSyncManager, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IContactListSyncManager>(this, &ABI::Windows::ApplicationModel::Contacts::IContactListSyncManager::remove_SyncStatusChanged, SyncStatusChanged(handler));
}

template <typename D> void impl_IContactListSyncManager<D>::SyncStatusChanged(event_token token) const
{
    check_hresult(static_cast<const IContactListSyncManager &>(static_cast<const D &>(*this))->remove_SyncStatusChanged(token));
}

template <typename D> void impl_IContactListSyncManager2<D>::Status(Windows::ApplicationModel::Contacts::ContactListSyncStatus value) const
{
    check_hresult(static_cast<const IContactListSyncManager2 &>(static_cast<const D &>(*this))->put_Status(value));
}

template <typename D> void impl_IContactListSyncManager2<D>::LastSuccessfulSyncTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const IContactListSyncManager2 &>(static_cast<const D &>(*this))->put_LastSuccessfulSyncTime(get(value)));
}

template <typename D> void impl_IContactListSyncManager2<D>::LastAttemptedSyncTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const IContactListSyncManager2 &>(static_cast<const D &>(*this))->put_LastAttemptedSyncTime(get(value)));
}

template <typename D> bool impl_IContactListSyncConstraints<D>::CanSyncDescriptions() const
{
    bool value {};
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_CanSyncDescriptions(&value));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::CanSyncDescriptions(bool value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_CanSyncDescriptions(value));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxHomePhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxHomePhoneNumbers(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxHomePhoneNumbers(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxHomePhoneNumbers(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxMobilePhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxMobilePhoneNumbers(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxMobilePhoneNumbers(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxMobilePhoneNumbers(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxWorkPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxWorkPhoneNumbers(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxWorkPhoneNumbers(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxWorkPhoneNumbers(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxOtherPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxOtherPhoneNumbers(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxOtherPhoneNumbers(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxOtherPhoneNumbers(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxPagerPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxPagerPhoneNumbers(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxPagerPhoneNumbers(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxPagerPhoneNumbers(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxBusinessFaxPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxBusinessFaxPhoneNumbers(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxBusinessFaxPhoneNumbers(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxBusinessFaxPhoneNumbers(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxHomeFaxPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxHomeFaxPhoneNumbers(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxHomeFaxPhoneNumbers(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxHomeFaxPhoneNumbers(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxCompanyPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxCompanyPhoneNumbers(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxCompanyPhoneNumbers(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxCompanyPhoneNumbers(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxAssistantPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxAssistantPhoneNumbers(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxAssistantPhoneNumbers(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxAssistantPhoneNumbers(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxRadioPhoneNumbers() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxRadioPhoneNumbers(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxRadioPhoneNumbers(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxRadioPhoneNumbers(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxPersonalEmailAddresses() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxPersonalEmailAddresses(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxPersonalEmailAddresses(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxPersonalEmailAddresses(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxWorkEmailAddresses() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxWorkEmailAddresses(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxWorkEmailAddresses(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxWorkEmailAddresses(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxOtherEmailAddresses() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxOtherEmailAddresses(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxOtherEmailAddresses(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxOtherEmailAddresses(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxHomeAddresses() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxHomeAddresses(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxHomeAddresses(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxHomeAddresses(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxWorkAddresses() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxWorkAddresses(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxWorkAddresses(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxWorkAddresses(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxOtherAddresses() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxOtherAddresses(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxOtherAddresses(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxOtherAddresses(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxBirthdayDates() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxBirthdayDates(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxBirthdayDates(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxBirthdayDates(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxAnniversaryDates() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxAnniversaryDates(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxAnniversaryDates(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxAnniversaryDates(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxOtherDates() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxOtherDates(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxOtherDates(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxOtherDates(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxOtherRelationships() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxOtherRelationships(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxOtherRelationships(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxOtherRelationships(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxSpouseRelationships() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxSpouseRelationships(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxSpouseRelationships(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxSpouseRelationships(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxPartnerRelationships() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxPartnerRelationships(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxPartnerRelationships(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxPartnerRelationships(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxSiblingRelationships() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxSiblingRelationships(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxSiblingRelationships(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxSiblingRelationships(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxParentRelationships() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxParentRelationships(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxParentRelationships(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxParentRelationships(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxChildRelationships() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxChildRelationships(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxChildRelationships(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxChildRelationships(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxJobInfo() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxJobInfo(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxJobInfo(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxJobInfo(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactListSyncConstraints<D>::MaxWebsites() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->get_MaxWebsites(put(value)));
    return value;
}

template <typename D> void impl_IContactListSyncConstraints<D>::MaxWebsites(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactListSyncConstraints &>(static_cast<const D &>(*this))->put_MaxWebsites(get(value)));
}

template <typename D> hstring impl_IContactConnectedServiceAccount<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IContactConnectedServiceAccount &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> void impl_IContactConnectedServiceAccount<D>::Id(hstring_ref value) const
{
    check_hresult(static_cast<const IContactConnectedServiceAccount &>(static_cast<const D &>(*this))->put_Id(get(value)));
}

template <typename D> hstring impl_IContactConnectedServiceAccount<D>::ServiceName() const
{
    hstring value;
    check_hresult(static_cast<const IContactConnectedServiceAccount &>(static_cast<const D &>(*this))->get_ServiceName(put(value)));
    return value;
}

template <typename D> void impl_IContactConnectedServiceAccount<D>::ServiceName(hstring_ref value) const
{
    check_hresult(static_cast<const IContactConnectedServiceAccount &>(static_cast<const D &>(*this))->put_ServiceName(get(value)));
}

template <typename D> hstring impl_IContactSignificantOther<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IContactSignificantOther &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> void impl_IContactSignificantOther<D>::Name(hstring_ref value) const
{
    check_hresult(static_cast<const IContactSignificantOther &>(static_cast<const D &>(*this))->put_Name(get(value)));
}

template <typename D> hstring impl_IContactSignificantOther<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IContactSignificantOther &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> void impl_IContactSignificantOther<D>::Description(hstring_ref value) const
{
    check_hresult(static_cast<const IContactSignificantOther &>(static_cast<const D &>(*this))->put_Description(get(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactRelationship impl_IContactSignificantOther2<D>::Relationship() const
{
    Windows::ApplicationModel::Contacts::ContactRelationship value {};
    check_hresult(static_cast<const IContactSignificantOther2 &>(static_cast<const D &>(*this))->get_Relationship(&value));
    return value;
}

template <typename D> void impl_IContactSignificantOther2<D>::Relationship(Windows::ApplicationModel::Contacts::ContactRelationship value) const
{
    check_hresult(static_cast<const IContactSignificantOther2 &>(static_cast<const D &>(*this))->put_Relationship(value));
}

template <typename D> Windows::Foundation::Uri impl_IContactWebsite<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IContactWebsite &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> void impl_IContactWebsite<D>::Uri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IContactWebsite &>(static_cast<const D &>(*this))->put_Uri(get(value)));
}

template <typename D> hstring impl_IContactWebsite<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IContactWebsite &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> void impl_IContactWebsite<D>::Description(hstring_ref value) const
{
    check_hresult(static_cast<const IContactWebsite &>(static_cast<const D &>(*this))->put_Description(get(value)));
}

template <typename D> hstring impl_IContactWebsite2<D>::RawValue() const
{
    hstring value;
    check_hresult(static_cast<const IContactWebsite2 &>(static_cast<const D &>(*this))->get_RawValue(put(value)));
    return value;
}

template <typename D> void impl_IContactWebsite2<D>::RawValue(hstring_ref value) const
{
    check_hresult(static_cast<const IContactWebsite2 &>(static_cast<const D &>(*this))->put_RawValue(get(value)));
}

template <typename D> hstring impl_IContactEmail<D>::Address() const
{
    hstring value;
    check_hresult(static_cast<const IContactEmail &>(static_cast<const D &>(*this))->get_Address(put(value)));
    return value;
}

template <typename D> void impl_IContactEmail<D>::Address(hstring_ref value) const
{
    check_hresult(static_cast<const IContactEmail &>(static_cast<const D &>(*this))->put_Address(get(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactEmailKind impl_IContactEmail<D>::Kind() const
{
    Windows::ApplicationModel::Contacts::ContactEmailKind value {};
    check_hresult(static_cast<const IContactEmail &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> void impl_IContactEmail<D>::Kind(Windows::ApplicationModel::Contacts::ContactEmailKind value) const
{
    check_hresult(static_cast<const IContactEmail &>(static_cast<const D &>(*this))->put_Kind(value));
}

template <typename D> hstring impl_IContactEmail<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IContactEmail &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> void impl_IContactEmail<D>::Description(hstring_ref value) const
{
    check_hresult(static_cast<const IContactEmail &>(static_cast<const D &>(*this))->put_Description(get(value)));
}

template <typename D> hstring impl_IContactPhone<D>::Number() const
{
    hstring value;
    check_hresult(static_cast<const IContactPhone &>(static_cast<const D &>(*this))->get_Number(put(value)));
    return value;
}

template <typename D> void impl_IContactPhone<D>::Number(hstring_ref value) const
{
    check_hresult(static_cast<const IContactPhone &>(static_cast<const D &>(*this))->put_Number(get(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactPhoneKind impl_IContactPhone<D>::Kind() const
{
    Windows::ApplicationModel::Contacts::ContactPhoneKind value {};
    check_hresult(static_cast<const IContactPhone &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> void impl_IContactPhone<D>::Kind(Windows::ApplicationModel::Contacts::ContactPhoneKind value) const
{
    check_hresult(static_cast<const IContactPhone &>(static_cast<const D &>(*this))->put_Kind(value));
}

template <typename D> hstring impl_IContactPhone<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IContactPhone &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> void impl_IContactPhone<D>::Description(hstring_ref value) const
{
    check_hresult(static_cast<const IContactPhone &>(static_cast<const D &>(*this))->put_Description(get(value)));
}

template <typename D> hstring impl_IContactAddress<D>::StreetAddress() const
{
    hstring value;
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->get_StreetAddress(put(value)));
    return value;
}

template <typename D> void impl_IContactAddress<D>::StreetAddress(hstring_ref value) const
{
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->put_StreetAddress(get(value)));
}

template <typename D> hstring impl_IContactAddress<D>::Locality() const
{
    hstring value;
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->get_Locality(put(value)));
    return value;
}

template <typename D> void impl_IContactAddress<D>::Locality(hstring_ref value) const
{
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->put_Locality(get(value)));
}

template <typename D> hstring impl_IContactAddress<D>::Region() const
{
    hstring value;
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->get_Region(put(value)));
    return value;
}

template <typename D> void impl_IContactAddress<D>::Region(hstring_ref value) const
{
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->put_Region(get(value)));
}

template <typename D> hstring impl_IContactAddress<D>::Country() const
{
    hstring value;
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->get_Country(put(value)));
    return value;
}

template <typename D> void impl_IContactAddress<D>::Country(hstring_ref value) const
{
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->put_Country(get(value)));
}

template <typename D> hstring impl_IContactAddress<D>::PostalCode() const
{
    hstring value;
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->get_PostalCode(put(value)));
    return value;
}

template <typename D> void impl_IContactAddress<D>::PostalCode(hstring_ref value) const
{
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->put_PostalCode(get(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactAddressKind impl_IContactAddress<D>::Kind() const
{
    Windows::ApplicationModel::Contacts::ContactAddressKind value {};
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> void impl_IContactAddress<D>::Kind(Windows::ApplicationModel::Contacts::ContactAddressKind value) const
{
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->put_Kind(value));
}

template <typename D> hstring impl_IContactAddress<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> void impl_IContactAddress<D>::Description(hstring_ref value) const
{
    check_hresult(static_cast<const IContactAddress &>(static_cast<const D &>(*this))->put_Description(get(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IContactDate<D>::Day() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IContactDate &>(static_cast<const D &>(*this))->get_Day(put(value)));
    return value;
}

template <typename D> void impl_IContactDate<D>::Day(const Windows::Foundation::IReference<uint32_t> & value) const
{
    check_hresult(static_cast<const IContactDate &>(static_cast<const D &>(*this))->put_Day(get(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IContactDate<D>::Month() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IContactDate &>(static_cast<const D &>(*this))->get_Month(put(value)));
    return value;
}

template <typename D> void impl_IContactDate<D>::Month(const Windows::Foundation::IReference<uint32_t> & value) const
{
    check_hresult(static_cast<const IContactDate &>(static_cast<const D &>(*this))->put_Month(get(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IContactDate<D>::Year() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IContactDate &>(static_cast<const D &>(*this))->get_Year(put(value)));
    return value;
}

template <typename D> void impl_IContactDate<D>::Year(const Windows::Foundation::IReference<int32_t> & value) const
{
    check_hresult(static_cast<const IContactDate &>(static_cast<const D &>(*this))->put_Year(get(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactDateKind impl_IContactDate<D>::Kind() const
{
    Windows::ApplicationModel::Contacts::ContactDateKind value {};
    check_hresult(static_cast<const IContactDate &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> void impl_IContactDate<D>::Kind(Windows::ApplicationModel::Contacts::ContactDateKind value) const
{
    check_hresult(static_cast<const IContactDate &>(static_cast<const D &>(*this))->put_Kind(value));
}

template <typename D> hstring impl_IContactDate<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IContactDate &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> void impl_IContactDate<D>::Description(hstring_ref value) const
{
    check_hresult(static_cast<const IContactDate &>(static_cast<const D &>(*this))->put_Description(get(value)));
}

template <typename D> hstring impl_IContactJobInfo<D>::CompanyName() const
{
    hstring value;
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->get_CompanyName(put(value)));
    return value;
}

template <typename D> void impl_IContactJobInfo<D>::CompanyName(hstring_ref value) const
{
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->put_CompanyName(get(value)));
}

template <typename D> hstring impl_IContactJobInfo<D>::CompanyYomiName() const
{
    hstring value;
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->get_CompanyYomiName(put(value)));
    return value;
}

template <typename D> void impl_IContactJobInfo<D>::CompanyYomiName(hstring_ref value) const
{
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->put_CompanyYomiName(get(value)));
}

template <typename D> hstring impl_IContactJobInfo<D>::Department() const
{
    hstring value;
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->get_Department(put(value)));
    return value;
}

template <typename D> void impl_IContactJobInfo<D>::Department(hstring_ref value) const
{
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->put_Department(get(value)));
}

template <typename D> hstring impl_IContactJobInfo<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IContactJobInfo<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> hstring impl_IContactJobInfo<D>::Manager() const
{
    hstring value;
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->get_Manager(put(value)));
    return value;
}

template <typename D> void impl_IContactJobInfo<D>::Manager(hstring_ref value) const
{
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->put_Manager(get(value)));
}

template <typename D> hstring impl_IContactJobInfo<D>::Office() const
{
    hstring value;
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->get_Office(put(value)));
    return value;
}

template <typename D> void impl_IContactJobInfo<D>::Office(hstring_ref value) const
{
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->put_Office(get(value)));
}

template <typename D> hstring impl_IContactJobInfo<D>::CompanyAddress() const
{
    hstring value;
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->get_CompanyAddress(put(value)));
    return value;
}

template <typename D> void impl_IContactJobInfo<D>::CompanyAddress(hstring_ref value) const
{
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->put_CompanyAddress(get(value)));
}

template <typename D> hstring impl_IContactJobInfo<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> void impl_IContactJobInfo<D>::Description(hstring_ref value) const
{
    check_hresult(static_cast<const IContactJobInfo &>(static_cast<const D &>(*this))->put_Description(get(value)));
}

template <typename D> hstring impl_IContact<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IContact &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> void impl_IContact<D>::Name(hstring_ref value) const
{
    check_hresult(static_cast<const IContact &>(static_cast<const D &>(*this))->put_Name(get(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IContact<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IContact &>(static_cast<const D &>(*this))->get_Thumbnail(put(value)));
    return value;
}

template <typename D> void impl_IContact<D>::Thumbnail(const Windows::Storage::Streams::IRandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IContact &>(static_cast<const D &>(*this))->put_Thumbnail(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::IContactField> impl_IContact<D>::Fields() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::IContactField> value;
    check_hresult(static_cast<const IContact &>(static_cast<const D &>(*this))->get_Fields(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactFieldType impl_IContactField<D>::Type() const
{
    Windows::ApplicationModel::Contacts::ContactFieldType value {};
    check_hresult(static_cast<const IContactField &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactFieldCategory impl_IContactField<D>::Category() const
{
    Windows::ApplicationModel::Contacts::ContactFieldCategory value {};
    check_hresult(static_cast<const IContactField &>(static_cast<const D &>(*this))->get_Category(&value));
    return value;
}

template <typename D> hstring impl_IContactField<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IContactField &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> hstring impl_IContactField<D>::Value() const
{
    hstring value;
    check_hresult(static_cast<const IContactField &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> hstring impl_IContactName<D>::FirstName() const
{
    hstring value;
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->get_FirstName(put(value)));
    return value;
}

template <typename D> void impl_IContactName<D>::FirstName(hstring_ref value) const
{
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->put_FirstName(get(value)));
}

template <typename D> hstring impl_IContactName<D>::LastName() const
{
    hstring value;
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->get_LastName(put(value)));
    return value;
}

template <typename D> void impl_IContactName<D>::LastName(hstring_ref value) const
{
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->put_LastName(get(value)));
}

template <typename D> hstring impl_IContactName<D>::MiddleName() const
{
    hstring value;
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->get_MiddleName(put(value)));
    return value;
}

template <typename D> void impl_IContactName<D>::MiddleName(hstring_ref value) const
{
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->put_MiddleName(get(value)));
}

template <typename D> hstring impl_IContactName<D>::YomiGivenName() const
{
    hstring value;
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->get_YomiGivenName(put(value)));
    return value;
}

template <typename D> void impl_IContactName<D>::YomiGivenName(hstring_ref value) const
{
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->put_YomiGivenName(get(value)));
}

template <typename D> hstring impl_IContactName<D>::YomiFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->get_YomiFamilyName(put(value)));
    return value;
}

template <typename D> void impl_IContactName<D>::YomiFamilyName(hstring_ref value) const
{
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->put_YomiFamilyName(get(value)));
}

template <typename D> hstring impl_IContactName<D>::HonorificNameSuffix() const
{
    hstring value;
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->get_HonorificNameSuffix(put(value)));
    return value;
}

template <typename D> void impl_IContactName<D>::HonorificNameSuffix(hstring_ref value) const
{
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->put_HonorificNameSuffix(get(value)));
}

template <typename D> hstring impl_IContactName<D>::HonorificNamePrefix() const
{
    hstring value;
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->get_HonorificNamePrefix(put(value)));
    return value;
}

template <typename D> void impl_IContactName<D>::HonorificNamePrefix(hstring_ref value) const
{
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->put_HonorificNamePrefix(get(value)));
}

template <typename D> hstring impl_IContactName<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IContactName<D>::YomiDisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IContactName &>(static_cast<const D &>(*this))->get_YomiDisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IContact2<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> void impl_IContact2<D>::Id(hstring_ref value) const
{
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->put_Id(get(value)));
}

template <typename D> hstring impl_IContact2<D>::Notes() const
{
    hstring value;
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->get_Notes(put(value)));
    return value;
}

template <typename D> void impl_IContact2<D>::Notes(hstring_ref value) const
{
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->put_Notes(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactPhone> impl_IContact2<D>::Phones() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactPhone> value;
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->get_Phones(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactEmail> impl_IContact2<D>::Emails() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactEmail> value;
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->get_Emails(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactAddress> impl_IContact2<D>::Addresses() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactAddress> value;
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->get_Addresses(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount> impl_IContact2<D>::ConnectedServiceAccounts() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount> value;
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->get_ConnectedServiceAccounts(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactDate> impl_IContact2<D>::ImportantDates() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactDate> value;
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->get_ImportantDates(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IContact2<D>::DataSuppliers() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->get_DataSuppliers(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactJobInfo> impl_IContact2<D>::JobInfo() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactJobInfo> value;
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->get_JobInfo(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactSignificantOther> impl_IContact2<D>::SignificantOthers() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactSignificantOther> value;
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->get_SignificantOthers(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactWebsite> impl_IContact2<D>::Websites() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactWebsite> value;
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->get_Websites(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet impl_IContact2<D>::ProviderProperties() const
{
    Windows::Foundation::Collections::IPropertySet value;
    check_hresult(static_cast<const IContact2 &>(static_cast<const D &>(*this))->get_ProviderProperties(put(value)));
    return value;
}

template <typename D> hstring impl_IContact3<D>::ContactListId() const
{
    hstring value;
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_ContactListId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IContact3<D>::DisplayPictureUserUpdateTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_DisplayPictureUserUpdateTime(put(value)));
    return value;
}

template <typename D> void impl_IContact3<D>::DisplayPictureUserUpdateTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->put_DisplayPictureUserUpdateTime(get(value)));
}

template <typename D> bool impl_IContact3<D>::IsMe() const
{
    bool value {};
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_IsMe(&value));
    return value;
}

template <typename D> hstring impl_IContact3<D>::AggregateId() const
{
    hstring value;
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_AggregateId(put(value)));
    return value;
}

template <typename D> hstring impl_IContact3<D>::RemoteId() const
{
    hstring value;
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_RemoteId(put(value)));
    return value;
}

template <typename D> void impl_IContact3<D>::RemoteId(hstring_ref value) const
{
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->put_RemoteId(get(value)));
}

template <typename D> hstring impl_IContact3<D>::RingToneToken() const
{
    hstring value;
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_RingToneToken(put(value)));
    return value;
}

template <typename D> void impl_IContact3<D>::RingToneToken(hstring_ref value) const
{
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->put_RingToneToken(get(value)));
}

template <typename D> bool impl_IContact3<D>::IsDisplayPictureManuallySet() const
{
    bool value {};
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_IsDisplayPictureManuallySet(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IContact3<D>::LargeDisplayPicture() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_LargeDisplayPicture(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IContact3<D>::SmallDisplayPicture() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_SmallDisplayPicture(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IContact3<D>::SourceDisplayPicture() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_SourceDisplayPicture(put(value)));
    return value;
}

template <typename D> void impl_IContact3<D>::SourceDisplayPicture(const Windows::Storage::Streams::IRandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->put_SourceDisplayPicture(get(value)));
}

template <typename D> hstring impl_IContact3<D>::TextToneToken() const
{
    hstring value;
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_TextToneToken(put(value)));
    return value;
}

template <typename D> void impl_IContact3<D>::TextToneToken(hstring_ref value) const
{
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->put_TextToneToken(get(value)));
}

template <typename D> bool impl_IContact3<D>::IsAggregate() const
{
    bool value {};
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_IsAggregate(&value));
    return value;
}

template <typename D> hstring impl_IContact3<D>::FullName() const
{
    hstring value;
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_FullName(put(value)));
    return value;
}

template <typename D> hstring impl_IContact3<D>::DisplayNameOverride() const
{
    hstring value;
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_DisplayNameOverride(put(value)));
    return value;
}

template <typename D> void impl_IContact3<D>::DisplayNameOverride(hstring_ref value) const
{
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->put_DisplayNameOverride(get(value)));
}

template <typename D> hstring impl_IContact3<D>::Nickname() const
{
    hstring value;
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_Nickname(put(value)));
    return value;
}

template <typename D> void impl_IContact3<D>::Nickname(hstring_ref value) const
{
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->put_Nickname(get(value)));
}

template <typename D> hstring impl_IContact3<D>::SortName() const
{
    hstring value;
    check_hresult(static_cast<const IContact3 &>(static_cast<const D &>(*this))->get_SortName(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactChangeType impl_IContactChange<D>::ChangeType() const
{
    Windows::ApplicationModel::Contacts::ContactChangeType value {};
    check_hresult(static_cast<const IContactChange &>(static_cast<const D &>(*this))->get_ChangeType(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact impl_IContactChange<D>::Contact() const
{
    Windows::ApplicationModel::Contacts::Contact value { nullptr };
    check_hresult(static_cast<const IContactChange &>(static_cast<const D &>(*this))->get_Contact(put(value)));
    return value;
}

template <typename D> void impl_IContactChangedDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IContactChangedDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> Windows::ApplicationModel::Contacts::ContactChangedDeferral impl_IContactChangedEventArgs<D>::GetDeferral() const
{
    Windows::ApplicationModel::Contacts::ContactChangedDeferral value { nullptr };
    check_hresult(static_cast<const IContactChangedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> void impl_IContactChangeReader<D>::AcceptChanges() const
{
    check_hresult(static_cast<const IContactChangeReader &>(static_cast<const D &>(*this))->abi_AcceptChanges());
}

template <typename D> void impl_IContactChangeReader<D>::AcceptChangesThrough(const Windows::ApplicationModel::Contacts::ContactChange & lastChangeToAccept) const
{
    check_hresult(static_cast<const IContactChangeReader &>(static_cast<const D &>(*this))->abi_AcceptChangesThrough(get(lastChangeToAccept)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactChange>> impl_IContactChangeReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactChange>> value;
    check_hresult(static_cast<const IContactChangeReader &>(static_cast<const D &>(*this))->abi_ReadBatchAsync(put(value)));
    return value;
}

template <typename D> void impl_IContactChangeTracker<D>::Enable() const
{
    check_hresult(static_cast<const IContactChangeTracker &>(static_cast<const D &>(*this))->abi_Enable());
}

template <typename D> Windows::ApplicationModel::Contacts::ContactChangeReader impl_IContactChangeTracker<D>::GetChangeReader() const
{
    Windows::ApplicationModel::Contacts::ContactChangeReader value { nullptr };
    check_hresult(static_cast<const IContactChangeTracker &>(static_cast<const D &>(*this))->abi_GetChangeReader(put(value)));
    return value;
}

template <typename D> void impl_IContactChangeTracker<D>::Reset() const
{
    check_hresult(static_cast<const IContactChangeTracker &>(static_cast<const D &>(*this))->abi_Reset());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactBatch> impl_IContactReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactBatch> value;
    check_hresult(static_cast<const IContactReader &>(static_cast<const D &>(*this))->abi_ReadBatchAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactMatchReason> impl_IContactReader<D>::GetMatchingPropertiesWithMatchReason(const Windows::ApplicationModel::Contacts::Contact & contact) const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactMatchReason> ppRetVal;
    check_hresult(static_cast<const IContactReader &>(static_cast<const D &>(*this))->abi_GetMatchingPropertiesWithMatchReason(get(contact), put(ppRetVal)));
    return ppRetVal;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQuerySearchFields impl_IContactQueryTextSearch<D>::Fields() const
{
    Windows::ApplicationModel::Contacts::ContactQuerySearchFields value {};
    check_hresult(static_cast<const IContactQueryTextSearch &>(static_cast<const D &>(*this))->get_Fields(&value));
    return value;
}

template <typename D> void impl_IContactQueryTextSearch<D>::Fields(Windows::ApplicationModel::Contacts::ContactQuerySearchFields value) const
{
    check_hresult(static_cast<const IContactQueryTextSearch &>(static_cast<const D &>(*this))->put_Fields(value));
}

template <typename D> hstring impl_IContactQueryTextSearch<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const IContactQueryTextSearch &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> void impl_IContactQueryTextSearch<D>::Text(hstring_ref value) const
{
    check_hresult(static_cast<const IContactQueryTextSearch &>(static_cast<const D &>(*this))->put_Text(get(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQuerySearchScope impl_IContactQueryTextSearch<D>::SearchScope() const
{
    Windows::ApplicationModel::Contacts::ContactQuerySearchScope value {};
    check_hresult(static_cast<const IContactQueryTextSearch &>(static_cast<const D &>(*this))->get_SearchScope(&value));
    return value;
}

template <typename D> void impl_IContactQueryTextSearch<D>::SearchScope(Windows::ApplicationModel::Contacts::ContactQuerySearchScope value) const
{
    check_hresult(static_cast<const IContactQueryTextSearch &>(static_cast<const D &>(*this))->put_SearchScope(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQueryOptions impl_IContactQueryOptionsFactory<D>::CreateWithText(hstring_ref text) const
{
    Windows::ApplicationModel::Contacts::ContactQueryOptions result { nullptr };
    check_hresult(static_cast<const IContactQueryOptionsFactory &>(static_cast<const D &>(*this))->abi_CreateWithText(get(text), put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQueryOptions impl_IContactQueryOptionsFactory<D>::CreateWithTextAndFields(hstring_ref text, Windows::ApplicationModel::Contacts::ContactQuerySearchFields fields) const
{
    Windows::ApplicationModel::Contacts::ContactQueryOptions result { nullptr };
    check_hresult(static_cast<const IContactQueryOptionsFactory &>(static_cast<const D &>(*this))->abi_CreateWithTextAndFields(get(text), fields, put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQueryTextSearch impl_IContactQueryOptions<D>::TextSearch() const
{
    Windows::ApplicationModel::Contacts::ContactQueryTextSearch value { nullptr };
    check_hresult(static_cast<const IContactQueryOptions &>(static_cast<const D &>(*this))->get_TextSearch(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IContactQueryOptions<D>::ContactListIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IContactQueryOptions &>(static_cast<const D &>(*this))->get_ContactListIds(put(value)));
    return value;
}

template <typename D> bool impl_IContactQueryOptions<D>::IncludeContactsFromHiddenLists() const
{
    bool value {};
    check_hresult(static_cast<const IContactQueryOptions &>(static_cast<const D &>(*this))->get_IncludeContactsFromHiddenLists(&value));
    return value;
}

template <typename D> void impl_IContactQueryOptions<D>::IncludeContactsFromHiddenLists(bool value) const
{
    check_hresult(static_cast<const IContactQueryOptions &>(static_cast<const D &>(*this))->put_IncludeContactsFromHiddenLists(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQueryDesiredFields impl_IContactQueryOptions<D>::DesiredFields() const
{
    Windows::ApplicationModel::Contacts::ContactQueryDesiredFields value {};
    check_hresult(static_cast<const IContactQueryOptions &>(static_cast<const D &>(*this))->get_DesiredFields(&value));
    return value;
}

template <typename D> void impl_IContactQueryOptions<D>::DesiredFields(Windows::ApplicationModel::Contacts::ContactQueryDesiredFields value) const
{
    check_hresult(static_cast<const IContactQueryOptions &>(static_cast<const D &>(*this))->put_DesiredFields(value));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactAnnotationOperations impl_IContactQueryOptions<D>::DesiredOperations() const
{
    Windows::ApplicationModel::Contacts::ContactAnnotationOperations value {};
    check_hresult(static_cast<const IContactQueryOptions &>(static_cast<const D &>(*this))->get_DesiredOperations(&value));
    return value;
}

template <typename D> void impl_IContactQueryOptions<D>::DesiredOperations(Windows::ApplicationModel::Contacts::ContactAnnotationOperations value) const
{
    check_hresult(static_cast<const IContactQueryOptions &>(static_cast<const D &>(*this))->put_DesiredOperations(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IContactQueryOptions<D>::AnnotationListIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IContactQueryOptions &>(static_cast<const D &>(*this))->get_AnnotationListIds(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact> impl_IContactBatch<D>::Contacts() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::Contact> value;
    check_hresult(static_cast<const IContactBatch &>(static_cast<const D &>(*this))->get_Contacts(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactBatchStatus impl_IContactBatch<D>::Status() const
{
    Windows::ApplicationModel::Contacts::ContactBatchStatus value {};
    check_hresult(static_cast<const IContactBatch &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactMatchReasonKind impl_IContactMatchReason<D>::Field() const
{
    Windows::ApplicationModel::Contacts::ContactMatchReasonKind value {};
    check_hresult(static_cast<const IContactMatchReason &>(static_cast<const D &>(*this))->get_Field(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> impl_IContactMatchReason<D>::Segments() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> value;
    check_hresult(static_cast<const IContactMatchReason &>(static_cast<const D &>(*this))->get_Segments(put(value)));
    return value;
}

template <typename D> hstring impl_IContactMatchReason<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const IContactMatchReason &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> hstring impl_IContactLaunchActionVerbsStatics<D>::Call() const
{
    hstring value;
    check_hresult(static_cast<const IContactLaunchActionVerbsStatics &>(static_cast<const D &>(*this))->get_Call(put(value)));
    return value;
}

template <typename D> hstring impl_IContactLaunchActionVerbsStatics<D>::Message() const
{
    hstring value;
    check_hresult(static_cast<const IContactLaunchActionVerbsStatics &>(static_cast<const D &>(*this))->get_Message(put(value)));
    return value;
}

template <typename D> hstring impl_IContactLaunchActionVerbsStatics<D>::Map() const
{
    hstring value;
    check_hresult(static_cast<const IContactLaunchActionVerbsStatics &>(static_cast<const D &>(*this))->get_Map(put(value)));
    return value;
}

template <typename D> hstring impl_IContactLaunchActionVerbsStatics<D>::Post() const
{
    hstring value;
    check_hresult(static_cast<const IContactLaunchActionVerbsStatics &>(static_cast<const D &>(*this))->get_Post(put(value)));
    return value;
}

template <typename D> hstring impl_IContactLaunchActionVerbsStatics<D>::VideoCall() const
{
    hstring value;
    check_hresult(static_cast<const IContactLaunchActionVerbsStatics &>(static_cast<const D &>(*this))->get_VideoCall(put(value)));
    return value;
}

template <typename D> hstring impl_IContactLocationField<D>::UnstructuredAddress() const
{
    hstring value;
    check_hresult(static_cast<const IContactLocationField &>(static_cast<const D &>(*this))->get_UnstructuredAddress(put(value)));
    return value;
}

template <typename D> hstring impl_IContactLocationField<D>::Street() const
{
    hstring value;
    check_hresult(static_cast<const IContactLocationField &>(static_cast<const D &>(*this))->get_Street(put(value)));
    return value;
}

template <typename D> hstring impl_IContactLocationField<D>::City() const
{
    hstring value;
    check_hresult(static_cast<const IContactLocationField &>(static_cast<const D &>(*this))->get_City(put(value)));
    return value;
}

template <typename D> hstring impl_IContactLocationField<D>::Region() const
{
    hstring value;
    check_hresult(static_cast<const IContactLocationField &>(static_cast<const D &>(*this))->get_Region(put(value)));
    return value;
}

template <typename D> hstring impl_IContactLocationField<D>::Country() const
{
    hstring value;
    check_hresult(static_cast<const IContactLocationField &>(static_cast<const D &>(*this))->get_Country(put(value)));
    return value;
}

template <typename D> hstring impl_IContactLocationField<D>::PostalCode() const
{
    hstring value;
    check_hresult(static_cast<const IContactLocationField &>(static_cast<const D &>(*this))->get_PostalCode(put(value)));
    return value;
}

template <typename D> hstring impl_IContactInstantMessageField<D>::UserName() const
{
    hstring value;
    check_hresult(static_cast<const IContactInstantMessageField &>(static_cast<const D &>(*this))->get_UserName(put(value)));
    return value;
}

template <typename D> hstring impl_IContactInstantMessageField<D>::Service() const
{
    hstring value;
    check_hresult(static_cast<const IContactInstantMessageField &>(static_cast<const D &>(*this))->get_Service(put(value)));
    return value;
}

template <typename D> hstring impl_IContactInstantMessageField<D>::DisplayText() const
{
    hstring value;
    check_hresult(static_cast<const IContactInstantMessageField &>(static_cast<const D &>(*this))->get_DisplayText(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IContactInstantMessageField<D>::LaunchUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IContactInstantMessageField &>(static_cast<const D &>(*this))->get_LaunchUri(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactFieldStatics<D>::Email() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactFieldStatics &>(static_cast<const D &>(*this))->get_Email(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactFieldStatics<D>::PhoneNumber() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactFieldStatics &>(static_cast<const D &>(*this))->get_PhoneNumber(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactFieldStatics<D>::Location() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactFieldStatics &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactFieldStatics<D>::InstantMessage() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactFieldStatics &>(static_cast<const D &>(*this))->get_InstantMessage(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactFieldType impl_IKnownContactFieldStatics<D>::ConvertNameToType(hstring_ref name) const
{
    Windows::ApplicationModel::Contacts::ContactFieldType type {};
    check_hresult(static_cast<const IKnownContactFieldStatics &>(static_cast<const D &>(*this))->abi_ConvertNameToType(get(name), &type));
    return type;
}

template <typename D> hstring impl_IKnownContactFieldStatics<D>::ConvertTypeToName(Windows::ApplicationModel::Contacts::ContactFieldType type) const
{
    hstring name;
    check_hresult(static_cast<const IKnownContactFieldStatics &>(static_cast<const D &>(*this))->abi_ConvertTypeToName(type, put(name)));
    return name;
}

template <typename D> hstring impl_IContactInformation<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> impl_IContactInformation<D>::GetThumbnailAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> operation;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->abi_GetThumbnailAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> impl_IContactInformation<D>::Emails() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> value;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->get_Emails(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> impl_IContactInformation<D>::PhoneNumbers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> value;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->get_PhoneNumbers(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactLocationField> impl_IContactInformation<D>::Locations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactLocationField> value;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->get_Locations(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactInstantMessageField> impl_IContactInformation<D>::InstantMessages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactInstantMessageField> value;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->get_InstantMessages(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> impl_IContactInformation<D>::CustomFields() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> value;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->get_CustomFields(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> impl_IContactInformation<D>::QueryCustomFields(hstring_ref customName) const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactField> value;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->abi_QueryCustomFields(get(customName), put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactField impl_IContactFieldFactory<D>::CreateField(hstring_ref value, Windows::ApplicationModel::Contacts::ContactFieldType type) const
{
    Windows::ApplicationModel::Contacts::ContactField field { nullptr };
    check_hresult(static_cast<const IContactFieldFactory &>(static_cast<const D &>(*this))->abi_CreateField_Default(get(value), type, put(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactField impl_IContactFieldFactory<D>::CreateField(hstring_ref value, Windows::ApplicationModel::Contacts::ContactFieldType type, Windows::ApplicationModel::Contacts::ContactFieldCategory category) const
{
    Windows::ApplicationModel::Contacts::ContactField field { nullptr };
    check_hresult(static_cast<const IContactFieldFactory &>(static_cast<const D &>(*this))->abi_CreateField_Category(get(value), type, category, put(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactField impl_IContactFieldFactory<D>::CreateField(hstring_ref name, hstring_ref value, Windows::ApplicationModel::Contacts::ContactFieldType type, Windows::ApplicationModel::Contacts::ContactFieldCategory category) const
{
    Windows::ApplicationModel::Contacts::ContactField field { nullptr };
    check_hresult(static_cast<const IContactFieldFactory &>(static_cast<const D &>(*this))->abi_CreateField_Custom(get(name), get(value), type, category, put(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactLocationField impl_IContactLocationFieldFactory<D>::CreateLocation(hstring_ref unstructuredAddress) const
{
    Windows::ApplicationModel::Contacts::ContactLocationField field { nullptr };
    check_hresult(static_cast<const IContactLocationFieldFactory &>(static_cast<const D &>(*this))->abi_CreateLocation_Default(get(unstructuredAddress), put(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactLocationField impl_IContactLocationFieldFactory<D>::CreateLocation(hstring_ref unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory category) const
{
    Windows::ApplicationModel::Contacts::ContactLocationField field { nullptr };
    check_hresult(static_cast<const IContactLocationFieldFactory &>(static_cast<const D &>(*this))->abi_CreateLocation_Category(get(unstructuredAddress), category, put(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactLocationField impl_IContactLocationFieldFactory<D>::CreateLocation(hstring_ref unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory category, hstring_ref street, hstring_ref city, hstring_ref region, hstring_ref country, hstring_ref postalCode) const
{
    Windows::ApplicationModel::Contacts::ContactLocationField field { nullptr };
    check_hresult(static_cast<const IContactLocationFieldFactory &>(static_cast<const D &>(*this))->abi_CreateLocation_All(get(unstructuredAddress), category, get(street), get(city), get(region), get(country), get(postalCode), put(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactInstantMessageField impl_IContactInstantMessageFieldFactory<D>::CreateInstantMessage(hstring_ref userName) const
{
    Windows::ApplicationModel::Contacts::ContactInstantMessageField field { nullptr };
    check_hresult(static_cast<const IContactInstantMessageFieldFactory &>(static_cast<const D &>(*this))->abi_CreateInstantMessage_Default(get(userName), put(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactInstantMessageField impl_IContactInstantMessageFieldFactory<D>::CreateInstantMessage(hstring_ref userName, Windows::ApplicationModel::Contacts::ContactFieldCategory category) const
{
    Windows::ApplicationModel::Contacts::ContactInstantMessageField field { nullptr };
    check_hresult(static_cast<const IContactInstantMessageFieldFactory &>(static_cast<const D &>(*this))->abi_CreateInstantMessage_Category(get(userName), category, put(field)));
    return field;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactInstantMessageField impl_IContactInstantMessageFieldFactory<D>::CreateInstantMessage(hstring_ref userName, Windows::ApplicationModel::Contacts::ContactFieldCategory category, hstring_ref service, hstring_ref displayText, const Windows::Foundation::Uri & verb) const
{
    Windows::ApplicationModel::Contacts::ContactInstantMessageField field { nullptr };
    check_hresult(static_cast<const IContactInstantMessageFieldFactory &>(static_cast<const D &>(*this))->abi_CreateInstantMessage_All(get(userName), category, get(service), get(displayText), get(verb), put(field)));
    return field;
}

template <typename D> hstring impl_IContactPicker<D>::CommitButtonText() const
{
    hstring value;
    check_hresult(static_cast<const IContactPicker &>(static_cast<const D &>(*this))->get_CommitButtonText(put(value)));
    return value;
}

template <typename D> void impl_IContactPicker<D>::CommitButtonText(hstring_ref value) const
{
    check_hresult(static_cast<const IContactPicker &>(static_cast<const D &>(*this))->put_CommitButtonText(get(value)));
}

template <typename D> Windows::ApplicationModel::Contacts::ContactSelectionMode impl_IContactPicker<D>::SelectionMode() const
{
    Windows::ApplicationModel::Contacts::ContactSelectionMode value {};
    check_hresult(static_cast<const IContactPicker &>(static_cast<const D &>(*this))->get_SelectionMode(&value));
    return value;
}

template <typename D> void impl_IContactPicker<D>::SelectionMode(Windows::ApplicationModel::Contacts::ContactSelectionMode value) const
{
    check_hresult(static_cast<const IContactPicker &>(static_cast<const D &>(*this))->put_SelectionMode(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IContactPicker<D>::DesiredFields() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IContactPicker &>(static_cast<const D &>(*this))->get_DesiredFields(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactInformation> impl_IContactPicker<D>::PickSingleContactAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactInformation> result;
    check_hresult(static_cast<const IContactPicker &>(static_cast<const D &>(*this))->abi_PickSingleContactAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactInformation>> impl_IContactPicker<D>::PickMultipleContactsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactInformation>> result;
    check_hresult(static_cast<const IContactPicker &>(static_cast<const D &>(*this))->abi_PickMultipleContactsAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Contacts::ContactFieldType> impl_IContactPicker2<D>::DesiredFieldsWithContactFieldType() const
{
    Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Contacts::ContactFieldType> value;
    check_hresult(static_cast<const IContactPicker2 &>(static_cast<const D &>(*this))->get_DesiredFieldsWithContactFieldType(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> impl_IContactPicker2<D>::PickContactAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> result;
    check_hresult(static_cast<const IContactPicker2 &>(static_cast<const D &>(*this))->abi_PickContactAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::Contact>> impl_IContactPicker2<D>::PickContactsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::Contact>> result;
    check_hresult(static_cast<const IContactPicker2 &>(static_cast<const D &>(*this))->abi_PickContactsAsync(put(result)));
    return result;
}

template <typename D> void impl_IContactCardDelayedDataLoader<D>::SetData(const Windows::ApplicationModel::Contacts::Contact & contact) const
{
    check_hresult(static_cast<const IContactCardDelayedDataLoader &>(static_cast<const D &>(*this))->abi_SetData(get(contact)));
}

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

inline ContactField::ContactField(hstring_ref value, Windows::ApplicationModel::Contacts::ContactFieldType type) :
    ContactField(get_activation_factory<ContactField, IContactFieldFactory>().CreateField(value, type))
{}

inline ContactField::ContactField(hstring_ref value, Windows::ApplicationModel::Contacts::ContactFieldType type, Windows::ApplicationModel::Contacts::ContactFieldCategory category) :
    ContactField(get_activation_factory<ContactField, IContactFieldFactory>().CreateField(value, type, category))
{}

inline ContactField::ContactField(hstring_ref name, hstring_ref value, Windows::ApplicationModel::Contacts::ContactFieldType type, Windows::ApplicationModel::Contacts::ContactFieldCategory category) :
    ContactField(get_activation_factory<ContactField, IContactFieldFactory>().CreateField(name, value, type, category))
{}

inline ContactFieldFactory::ContactFieldFactory() :
    ContactFieldFactory(activate_instance<ContactFieldFactory>())
{}

inline ContactInstantMessageField::ContactInstantMessageField(hstring_ref userName) :
    ContactInstantMessageField(get_activation_factory<ContactInstantMessageField, IContactInstantMessageFieldFactory>().CreateInstantMessage(userName))
{}

inline ContactInstantMessageField::ContactInstantMessageField(hstring_ref userName, Windows::ApplicationModel::Contacts::ContactFieldCategory category) :
    ContactInstantMessageField(get_activation_factory<ContactInstantMessageField, IContactInstantMessageFieldFactory>().CreateInstantMessage(userName, category))
{}

inline ContactInstantMessageField::ContactInstantMessageField(hstring_ref userName, Windows::ApplicationModel::Contacts::ContactFieldCategory category, hstring_ref service, hstring_ref displayText, const Windows::Foundation::Uri & verb) :
    ContactInstantMessageField(get_activation_factory<ContactInstantMessageField, IContactInstantMessageFieldFactory>().CreateInstantMessage(userName, category, service, displayText, verb))
{}

inline ContactJobInfo::ContactJobInfo() :
    ContactJobInfo(activate_instance<ContactJobInfo>())
{}

inline hstring ContactLaunchActionVerbs::Call()
{
    return get_activation_factory<ContactLaunchActionVerbs, IContactLaunchActionVerbsStatics>().Call();
}

inline hstring ContactLaunchActionVerbs::Message()
{
    return get_activation_factory<ContactLaunchActionVerbs, IContactLaunchActionVerbsStatics>().Message();
}

inline hstring ContactLaunchActionVerbs::Map()
{
    return get_activation_factory<ContactLaunchActionVerbs, IContactLaunchActionVerbsStatics>().Map();
}

inline hstring ContactLaunchActionVerbs::Post()
{
    return get_activation_factory<ContactLaunchActionVerbs, IContactLaunchActionVerbsStatics>().Post();
}

inline hstring ContactLaunchActionVerbs::VideoCall()
{
    return get_activation_factory<ContactLaunchActionVerbs, IContactLaunchActionVerbsStatics>().VideoCall();
}

inline ContactLocationField::ContactLocationField(hstring_ref unstructuredAddress) :
    ContactLocationField(get_activation_factory<ContactLocationField, IContactLocationFieldFactory>().CreateLocation(unstructuredAddress))
{}

inline ContactLocationField::ContactLocationField(hstring_ref unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory category) :
    ContactLocationField(get_activation_factory<ContactLocationField, IContactLocationFieldFactory>().CreateLocation(unstructuredAddress, category))
{}

inline ContactLocationField::ContactLocationField(hstring_ref unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory category, hstring_ref street, hstring_ref city, hstring_ref region, hstring_ref country, hstring_ref postalCode) :
    ContactLocationField(get_activation_factory<ContactLocationField, IContactLocationFieldFactory>().CreateLocation(unstructuredAddress, category, street, city, region, country, postalCode))
{}

inline void ContactManager::ShowContactCard(const Windows::ApplicationModel::Contacts::Contact & contact, const Windows::Foundation::Rect & selection)
{
    get_activation_factory<ContactManager, IContactManagerStatics>().ShowContactCard(contact, selection);
}

inline void ContactManager::ShowContactCard(const Windows::ApplicationModel::Contacts::Contact & contact, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement)
{
    get_activation_factory<ContactManager, IContactManagerStatics>().ShowContactCard(contact, selection, preferredPlacement);
}

inline Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader ContactManager::ShowDelayLoadedContactCard(const Windows::ApplicationModel::Contacts::Contact & contact, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement)
{
    return get_activation_factory<ContactManager, IContactManagerStatics>().ShowDelayLoadedContactCard(contact, selection, preferredPlacement);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> ContactManager::RequestStoreAsync()
{
    return get_activation_factory<ContactManager, IContactManagerStatics2>().RequestStoreAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> ContactManager::ConvertContactToVCardAsync(const Windows::ApplicationModel::Contacts::Contact & contact)
{
    return get_activation_factory<ContactManager, IContactManagerStatics3>().ConvertContactToVCardAsync(contact);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> ContactManager::ConvertContactToVCardAsync(const Windows::ApplicationModel::Contacts::Contact & contact, uint32_t maxBytes)
{
    return get_activation_factory<ContactManager, IContactManagerStatics3>().ConvertContactToVCardAsync(contact, maxBytes);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::Contact> ContactManager::ConvertVCardToContactAsync(const Windows::Storage::Streams::IRandomAccessStreamReference & vCard)
{
    return get_activation_factory<ContactManager, IContactManagerStatics3>().ConvertVCardToContactAsync(vCard);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactStore> ContactManager::RequestStoreAsync(Windows::ApplicationModel::Contacts::ContactStoreAccessType accessType)
{
    return get_activation_factory<ContactManager, IContactManagerStatics3>().RequestStoreAsync(accessType);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Contacts::ContactAnnotationStore> ContactManager::RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType accessType)
{
    return get_activation_factory<ContactManager, IContactManagerStatics3>().RequestAnnotationStoreAsync(accessType);
}

inline bool ContactManager::IsShowContactCardSupported()
{
    return get_activation_factory<ContactManager, IContactManagerStatics3>().IsShowContactCardSupported();
}

inline void ContactManager::ShowContactCard(const Windows::ApplicationModel::Contacts::Contact & contact, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::ApplicationModel::Contacts::ContactCardOptions & contactCardOptions)
{
    get_activation_factory<ContactManager, IContactManagerStatics3>().ShowContactCard(contact, selection, preferredPlacement, contactCardOptions);
}

inline bool ContactManager::IsShowDelayLoadedContactCardSupported()
{
    return get_activation_factory<ContactManager, IContactManagerStatics3>().IsShowDelayLoadedContactCardSupported();
}

inline Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader ContactManager::ShowDelayLoadedContactCard(const Windows::ApplicationModel::Contacts::Contact & contact, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::ApplicationModel::Contacts::ContactCardOptions & contactCardOptions)
{
    return get_activation_factory<ContactManager, IContactManagerStatics3>().ShowDelayLoadedContactCard(contact, selection, preferredPlacement, contactCardOptions);
}

inline void ContactManager::ShowFullContactCard(const Windows::ApplicationModel::Contacts::Contact & contact, const Windows::ApplicationModel::Contacts::FullContactCardOptions & fullContactCardOptions)
{
    get_activation_factory<ContactManager, IContactManagerStatics3>().ShowFullContactCard(contact, fullContactCardOptions);
}

inline Windows::ApplicationModel::Contacts::ContactNameOrder ContactManager::SystemDisplayNameOrder()
{
    return get_activation_factory<ContactManager, IContactManagerStatics3>().SystemDisplayNameOrder();
}

inline void ContactManager::SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder value)
{
    get_activation_factory<ContactManager, IContactManagerStatics3>().SystemDisplayNameOrder(value);
}

inline Windows::ApplicationModel::Contacts::ContactNameOrder ContactManager::SystemSortOrder()
{
    return get_activation_factory<ContactManager, IContactManagerStatics3>().SystemSortOrder();
}

inline void ContactManager::SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder value)
{
    get_activation_factory<ContactManager, IContactManagerStatics3>().SystemSortOrder(value);
}

inline Windows::ApplicationModel::Contacts::ContactManagerForUser ContactManager::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<ContactManager, IContactManagerStatics4>().GetForUser(user);
}

inline ContactPhone::ContactPhone() :
    ContactPhone(activate_instance<ContactPhone>())
{}

inline ContactPicker::ContactPicker() :
    ContactPicker(activate_instance<ContactPicker>())
{}

inline ContactQueryOptions::ContactQueryOptions() :
    ContactQueryOptions(activate_instance<ContactQueryOptions>())
{}

inline ContactQueryOptions::ContactQueryOptions(hstring_ref text) :
    ContactQueryOptions(get_activation_factory<ContactQueryOptions, IContactQueryOptionsFactory>().CreateWithText(text))
{}

inline ContactQueryOptions::ContactQueryOptions(hstring_ref text, Windows::ApplicationModel::Contacts::ContactQuerySearchFields fields) :
    ContactQueryOptions(get_activation_factory<ContactQueryOptions, IContactQueryOptionsFactory>().CreateWithTextAndFields(text, fields))
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
    return get_activation_factory<KnownContactField, IKnownContactFieldStatics>().Email();
}

inline hstring KnownContactField::PhoneNumber()
{
    return get_activation_factory<KnownContactField, IKnownContactFieldStatics>().PhoneNumber();
}

inline hstring KnownContactField::Location()
{
    return get_activation_factory<KnownContactField, IKnownContactFieldStatics>().Location();
}

inline hstring KnownContactField::InstantMessage()
{
    return get_activation_factory<KnownContactField, IKnownContactFieldStatics>().InstantMessage();
}

inline Windows::ApplicationModel::Contacts::ContactFieldType KnownContactField::ConvertNameToType(hstring_ref name)
{
    return get_activation_factory<KnownContactField, IKnownContactFieldStatics>().ConvertNameToType(name);
}

inline hstring KnownContactField::ConvertTypeToName(Windows::ApplicationModel::Contacts::ContactFieldType type)
{
    return get_activation_factory<KnownContactField, IKnownContactFieldStatics>().ConvertTypeToName(type);
}

}

}
