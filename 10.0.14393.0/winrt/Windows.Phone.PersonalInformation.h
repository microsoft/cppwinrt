// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Phone.PersonalInformation.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::IContactAddress> : produce_base<D, Windows::Phone::PersonalInformation::IContactAddress>
{
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
};

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::IContactChangeRecord> : produce_base<D, Windows::Phone::PersonalInformation::IContactChangeRecord>
{
    HRESULT __stdcall get_ChangeType(Windows::Phone::PersonalInformation::ContactChangeType * value) noexcept override
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

    HRESULT __stdcall get_RevisionNumber(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RevisionNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::IContactInformation> : produce_base<D, Windows::Phone::PersonalInformation::IContactInformation>
{
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

    HRESULT __stdcall get_FamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FamilyName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().FamilyName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GivenName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GivenName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GivenName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().GivenName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HonorificPrefix(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HonorificPrefix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HonorificPrefix(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().HonorificPrefix(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HonorificSuffix(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HonorificSuffix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HonorificSuffix(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().HonorificSuffix(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDisplayPictureAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetDisplayPictureAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDisplayPictureAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> stream, abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            *action = detach(this->shim().SetDisplayPictureAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayPicture(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayPicture());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPropertiesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ToVcardAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ToVcardAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ToVcardWithOptionsAsync(Windows::Phone::PersonalInformation::VCardFormat format, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ToVcardAsync(format));
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
    HRESULT __stdcall get_DisplayPictureDate(abi_arg_out<Windows::Foundation::DateTime> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().DisplayPictureDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayPictureDate(abi_arg_in<Windows::Foundation::DateTime> returnValue) noexcept override
    {
        try
        {
            this->shim().DisplayPictureDate(*reinterpret_cast<const Windows::Foundation::DateTime *>(&returnValue));
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
    HRESULT __stdcall abi_ParseVcardAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> vcard, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactInformation>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ParseVcardAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&vcard)));
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

    HRESULT __stdcall get_OrderBy(Windows::Phone::PersonalInformation::ContactQueryResultOrdering * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OrderBy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OrderBy(Windows::Phone::PersonalInformation::ContactQueryResultOrdering value) noexcept override
    {
        try
        {
            this->shim().OrderBy(value);
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
    HRESULT __stdcall abi_GetContactCountAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetContactCountAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetContactsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::StoredContact>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetContactsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetContactsAsyncInRange(uint32_t startIndex, uint32_t maxNumberOfItems, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::StoredContact>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetContactsAsync(startIndex, maxNumberOfItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentQueryOptions(abi_arg_out<Windows::Phone::PersonalInformation::IContactQueryOptions> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetCurrentQueryOptions());
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
    HRESULT __stdcall abi_FindContactByRemoteIdAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindContactByRemoteIdAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindContactByIdAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindContactByIdAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteContactAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DeleteContactAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateContactQueryDefault(abi_arg_out<Windows::Phone::PersonalInformation::IContactQueryResult> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateContactQuery());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateContactQueryWithOptions(abi_arg_in<Windows::Phone::PersonalInformation::IContactQueryOptions> options, abi_arg_out<Windows::Phone::PersonalInformation::IContactQueryResult> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateContactQuery(*reinterpret_cast<const Windows::Phone::PersonalInformation::ContactQueryOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RevisionNumber(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RevisionNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetChangesAsync(uint64_t baseRevisionNumber, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::ContactChangeRecord>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetChangesAsync(baseRevisionNumber));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadExtendedPropertiesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LoadExtendedPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveExtendedPropertiesAsync(abi_arg_in<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> data, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SaveExtendedPropertiesAsync(*reinterpret_cast<const Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> *>(&data)));
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
    HRESULT __stdcall abi_CreateMeContactAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateMeContactAsync(*reinterpret_cast<const hstring *>(&id)));
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
    HRESULT __stdcall abi_CreateOrOpenAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateOrOpenAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateOrOpenWithOptionsAsync(Windows::Phone::PersonalInformation::ContactStoreSystemAccessMode access, Windows::Phone::PersonalInformation::ContactStoreApplicationAccessMode sharing, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateOrOpenAsync(access, sharing));
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

    HRESULT __stdcall get_FamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GivenName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GivenName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HonorificPrefix(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HonorificPrefix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HonorificSuffix(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HonorificSuffix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdditionalName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AdditionalName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_OtherAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OtherAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_WorkAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WorkAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WorkTelephone(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WorkTelephone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JobTitle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().JobTitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Birthdate(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Birthdate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Anniversary(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Anniversary());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Telephone(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Telephone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MobileTelephone(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MobileTelephone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Url(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Url());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_WorkFax(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WorkFax());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Children(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Children());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignificantOther(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SignificantOther());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_CompanyTelephone(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CompanyTelephone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HomeFax(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HomeFax());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateTelephone(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlternateTelephone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_OfficeLocation(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OfficeLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WorkEmail(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WorkEmail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_YomiCompanyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().YomiCompanyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherEmail(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OtherEmail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateMobileTelephone(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlternateMobileTelephone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateWorkTelephone(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlternateWorkTelephone());
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
    HRESULT __stdcall get_Store(abi_arg_out<Windows::Phone::PersonalInformation::IContactStore> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Store());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall abi_GetExtendedPropertiesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetExtendedPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReplaceExistingContactAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ReplaceExistingContactAsync(*reinterpret_cast<const hstring *>(&id)));
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
    HRESULT __stdcall abi_CreateStoredContact(abi_arg_in<Windows::Phone::PersonalInformation::IContactStore> store, abi_arg_out<Windows::Phone::PersonalInformation::IStoredContact> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateStoredContact(*reinterpret_cast<const Windows::Phone::PersonalInformation::ContactStore *>(&store)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateStoredContactFromInformation(abi_arg_in<Windows::Phone::PersonalInformation::IContactStore> store, abi_arg_in<Windows::Phone::PersonalInformation::IContactInformation> contact, abi_arg_out<Windows::Phone::PersonalInformation::IStoredContact> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateStoredContactFromInformation(*reinterpret_cast<const Windows::Phone::PersonalInformation::ContactStore *>(&store), *reinterpret_cast<const Windows::Phone::PersonalInformation::ContactInformation *>(&contact)));
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

namespace Windows::Phone::PersonalInformation {

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

template <typename D> hstring impl_IContactInformation<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_IContactInformation<D>::DisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->put_DisplayName(get(value)));
}

template <typename D> hstring impl_IContactInformation<D>::FamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->get_FamilyName(put(value)));
    return value;
}

template <typename D> void impl_IContactInformation<D>::FamilyName(hstring_ref value) const
{
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->put_FamilyName(get(value)));
}

template <typename D> hstring impl_IContactInformation<D>::GivenName() const
{
    hstring value;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->get_GivenName(put(value)));
    return value;
}

template <typename D> void impl_IContactInformation<D>::GivenName(hstring_ref value) const
{
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->put_GivenName(get(value)));
}

template <typename D> hstring impl_IContactInformation<D>::HonorificPrefix() const
{
    hstring value;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->get_HonorificPrefix(put(value)));
    return value;
}

template <typename D> void impl_IContactInformation<D>::HonorificPrefix(hstring_ref value) const
{
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->put_HonorificPrefix(get(value)));
}

template <typename D> hstring impl_IContactInformation<D>::HonorificSuffix() const
{
    hstring value;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->get_HonorificSuffix(put(value)));
    return value;
}

template <typename D> void impl_IContactInformation<D>::HonorificSuffix(hstring_ref value) const
{
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->put_HonorificSuffix(get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> impl_IContactInformation<D>::GetDisplayPictureAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> operation;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->abi_GetDisplayPictureAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactInformation<D>::SetDisplayPictureAsync(const Windows::Storage::Streams::IInputStream & stream) const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->abi_SetDisplayPictureAsync(get(stream), put(action)));
    return action;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IContactInformation<D>::DisplayPicture() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->get_DisplayPicture(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>> impl_IContactInformation<D>::GetPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>> operation;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->abi_GetPropertiesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> impl_IContactInformation<D>::ToVcardAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> operation;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->abi_ToVcardAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> impl_IContactInformation<D>::ToVcardAsync(Windows::Phone::PersonalInformation::VCardFormat format) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> operation;
    check_hresult(static_cast<const IContactInformation &>(static_cast<const D &>(*this))->abi_ToVcardWithOptionsAsync(format, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::DateTime impl_IContactInformation2<D>::DisplayPictureDate() const
{
    Windows::Foundation::DateTime returnValue {};
    check_hresult(static_cast<const IContactInformation2 &>(static_cast<const D &>(*this))->get_DisplayPictureDate(put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IContactInformation2<D>::DisplayPictureDate(const Windows::Foundation::DateTime & returnValue) const
{
    check_hresult(static_cast<const IContactInformation2 &>(static_cast<const D &>(*this))->put_DisplayPictureDate(get(returnValue)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactInformation> impl_IContactInformationStatics<D>::ParseVcardAsync(const Windows::Storage::Streams::IInputStream & vcard) const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactInformation> operation;
    check_hresult(static_cast<const IContactInformationStatics &>(static_cast<const D &>(*this))->abi_ParseVcardAsync(get(vcard), put(operation)));
    return operation;
}

template <typename D> Windows::Phone::PersonalInformation::ContactStore impl_IStoredContact<D>::Store() const
{
    Windows::Phone::PersonalInformation::ContactStore value { nullptr };
    check_hresult(static_cast<const IStoredContact &>(static_cast<const D &>(*this))->get_Store(put(value)));
    return value;
}

template <typename D> hstring impl_IStoredContact<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IStoredContact &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IStoredContact<D>::RemoteId() const
{
    hstring value;
    check_hresult(static_cast<const IStoredContact &>(static_cast<const D &>(*this))->get_RemoteId(put(value)));
    return value;
}

template <typename D> void impl_IStoredContact<D>::RemoteId(hstring_ref value) const
{
    check_hresult(static_cast<const IStoredContact &>(static_cast<const D &>(*this))->put_RemoteId(get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>> impl_IStoredContact<D>::GetExtendedPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>> operation;
    check_hresult(static_cast<const IStoredContact &>(static_cast<const D &>(*this))->abi_GetExtendedPropertiesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStoredContact<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IStoredContact &>(static_cast<const D &>(*this))->abi_SaveAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStoredContact<D>::ReplaceExistingContactAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IStoredContact &>(static_cast<const D &>(*this))->abi_ReplaceExistingContactAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Phone::PersonalInformation::StoredContact impl_IStoredContactFactory<D>::CreateStoredContact(const Windows::Phone::PersonalInformation::ContactStore & store) const
{
    Windows::Phone::PersonalInformation::StoredContact result { nullptr };
    check_hresult(static_cast<const IStoredContactFactory &>(static_cast<const D &>(*this))->abi_CreateStoredContact(get(store), put(result)));
    return result;
}

template <typename D> Windows::Phone::PersonalInformation::StoredContact impl_IStoredContactFactory<D>::CreateStoredContactFromInformation(const Windows::Phone::PersonalInformation::ContactStore & store, const Windows::Phone::PersonalInformation::ContactInformation & contact) const
{
    Windows::Phone::PersonalInformation::StoredContact result { nullptr };
    check_hresult(static_cast<const IStoredContactFactory &>(static_cast<const D &>(*this))->abi_CreateStoredContactFromInformation(get(store), get(contact), put(result)));
    return result;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::FamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_FamilyName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::GivenName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_GivenName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::HonorificPrefix() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_HonorificPrefix(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::HonorificSuffix() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_HonorificSuffix(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::AdditionalName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_AdditionalName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::Address() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_Address(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::OtherAddress() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_OtherAddress(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::Email() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_Email(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::WorkAddress() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_WorkAddress(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::WorkTelephone() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_WorkTelephone(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::JobTitle() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_JobTitle(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::Birthdate() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_Birthdate(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::Anniversary() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_Anniversary(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::Telephone() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_Telephone(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::MobileTelephone() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_MobileTelephone(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::Url() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_Url(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::Notes() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_Notes(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::WorkFax() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_WorkFax(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::Children() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_Children(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::SignificantOther() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_SignificantOther(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::CompanyName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_CompanyName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::CompanyTelephone() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_CompanyTelephone(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::HomeFax() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_HomeFax(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::AlternateTelephone() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_AlternateTelephone(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::Manager() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_Manager(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::Nickname() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_Nickname(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::OfficeLocation() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_OfficeLocation(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::WorkEmail() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_WorkEmail(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::YomiGivenName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_YomiGivenName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::YomiFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_YomiFamilyName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::YomiCompanyName() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_YomiCompanyName(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::OtherEmail() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_OtherEmail(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::AlternateMobileTelephone() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_AlternateMobileTelephone(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownContactPropertiesStatics<D>::AlternateWorkTelephone() const
{
    hstring value;
    check_hresult(static_cast<const IKnownContactPropertiesStatics &>(static_cast<const D &>(*this))->get_AlternateWorkTelephone(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> impl_IContactQueryResult<D>::GetContactCountAsync() const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation;
    check_hresult(static_cast<const IContactQueryResult &>(static_cast<const D &>(*this))->abi_GetContactCountAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::StoredContact>> impl_IContactQueryResult<D>::GetContactsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::StoredContact>> operation;
    check_hresult(static_cast<const IContactQueryResult &>(static_cast<const D &>(*this))->abi_GetContactsAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::StoredContact>> impl_IContactQueryResult<D>::GetContactsAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::StoredContact>> operation;
    check_hresult(static_cast<const IContactQueryResult &>(static_cast<const D &>(*this))->abi_GetContactsAsyncInRange(startIndex, maxNumberOfItems, put(operation)));
    return operation;
}

template <typename D> Windows::Phone::PersonalInformation::ContactQueryOptions impl_IContactQueryResult<D>::GetCurrentQueryOptions() const
{
    Windows::Phone::PersonalInformation::ContactQueryOptions value { nullptr };
    check_hresult(static_cast<const IContactQueryResult &>(static_cast<const D &>(*this))->abi_GetCurrentQueryOptions(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IContactQueryOptions<D>::DesiredFields() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IContactQueryOptions &>(static_cast<const D &>(*this))->get_DesiredFields(put(value)));
    return value;
}

template <typename D> Windows::Phone::PersonalInformation::ContactQueryResultOrdering impl_IContactQueryOptions<D>::OrderBy() const
{
    Windows::Phone::PersonalInformation::ContactQueryResultOrdering value {};
    check_hresult(static_cast<const IContactQueryOptions &>(static_cast<const D &>(*this))->get_OrderBy(&value));
    return value;
}

template <typename D> void impl_IContactQueryOptions<D>::OrderBy(Windows::Phone::PersonalInformation::ContactQueryResultOrdering value) const
{
    check_hresult(static_cast<const IContactQueryOptions &>(static_cast<const D &>(*this))->put_OrderBy(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> impl_IContactStore<D>::FindContactByRemoteIdAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> operation;
    check_hresult(static_cast<const IContactStore &>(static_cast<const D &>(*this))->abi_FindContactByRemoteIdAsync(get(id), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> impl_IContactStore<D>::FindContactByIdAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> operation;
    check_hresult(static_cast<const IContactStore &>(static_cast<const D &>(*this))->abi_FindContactByIdAsync(get(id), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactStore<D>::DeleteContactAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IContactStore &>(static_cast<const D &>(*this))->abi_DeleteContactAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Phone::PersonalInformation::ContactQueryResult impl_IContactStore<D>::CreateContactQuery() const
{
    Windows::Phone::PersonalInformation::ContactQueryResult result { nullptr };
    check_hresult(static_cast<const IContactStore &>(static_cast<const D &>(*this))->abi_CreateContactQueryDefault(put(result)));
    return result;
}

template <typename D> Windows::Phone::PersonalInformation::ContactQueryResult impl_IContactStore<D>::CreateContactQuery(const Windows::Phone::PersonalInformation::ContactQueryOptions & options) const
{
    Windows::Phone::PersonalInformation::ContactQueryResult result { nullptr };
    check_hresult(static_cast<const IContactStore &>(static_cast<const D &>(*this))->abi_CreateContactQueryWithOptions(get(options), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactStore<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IContactStore &>(static_cast<const D &>(*this))->abi_DeleteAsync(put(result)));
    return result;
}

template <typename D> uint64_t impl_IContactStore<D>::RevisionNumber() const
{
    uint64_t value {};
    check_hresult(static_cast<const IContactStore &>(static_cast<const D &>(*this))->get_RevisionNumber(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::ContactChangeRecord>> impl_IContactStore<D>::GetChangesAsync(uint64_t baseRevisionNumber) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Phone::PersonalInformation::ContactChangeRecord>> operation;
    check_hresult(static_cast<const IContactStore &>(static_cast<const D &>(*this))->abi_GetChangesAsync(baseRevisionNumber, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>> impl_IContactStore<D>::LoadExtendedPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>> operation;
    check_hresult(static_cast<const IContactStore &>(static_cast<const D &>(*this))->abi_LoadExtendedPropertiesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactStore<D>::SaveExtendedPropertiesAsync(const Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> & data) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IContactStore &>(static_cast<const D &>(*this))->abi_SaveExtendedPropertiesAsync(get(data), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> impl_IContactStore2<D>::CreateMeContactAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::StoredContact> operation;
    check_hresult(static_cast<const IContactStore2 &>(static_cast<const D &>(*this))->abi_CreateMeContactAsync(get(id), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> impl_IContactStoreStatics<D>::CreateOrOpenAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> operation;
    check_hresult(static_cast<const IContactStoreStatics &>(static_cast<const D &>(*this))->abi_CreateOrOpenAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> impl_IContactStoreStatics<D>::CreateOrOpenAsync(Windows::Phone::PersonalInformation::ContactStoreSystemAccessMode access, Windows::Phone::PersonalInformation::ContactStoreApplicationAccessMode sharing) const
{
    Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> operation;
    check_hresult(static_cast<const IContactStoreStatics &>(static_cast<const D &>(*this))->abi_CreateOrOpenWithOptionsAsync(access, sharing, put(operation)));
    return operation;
}

template <typename D> Windows::Phone::PersonalInformation::ContactChangeType impl_IContactChangeRecord<D>::ChangeType() const
{
    Windows::Phone::PersonalInformation::ContactChangeType value {};
    check_hresult(static_cast<const IContactChangeRecord &>(static_cast<const D &>(*this))->get_ChangeType(&value));
    return value;
}

template <typename D> uint64_t impl_IContactChangeRecord<D>::RevisionNumber() const
{
    uint64_t value {};
    check_hresult(static_cast<const IContactChangeRecord &>(static_cast<const D &>(*this))->get_RevisionNumber(&value));
    return value;
}

template <typename D> hstring impl_IContactChangeRecord<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IContactChangeRecord &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IContactChangeRecord<D>::RemoteId() const
{
    hstring value;
    check_hresult(static_cast<const IContactChangeRecord &>(static_cast<const D &>(*this))->get_RemoteId(put(value)));
    return value;
}

inline ContactAddress::ContactAddress() :
    ContactAddress(activate_instance<ContactAddress>())
{}

inline ContactInformation::ContactInformation() :
    ContactInformation(activate_instance<ContactInformation>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactInformation> ContactInformation::ParseVcardAsync(const Windows::Storage::Streams::IInputStream & vcard)
{
    return get_activation_factory<ContactInformation, IContactInformationStatics>().ParseVcardAsync(vcard);
}

inline ContactQueryOptions::ContactQueryOptions() :
    ContactQueryOptions(activate_instance<ContactQueryOptions>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> ContactStore::CreateOrOpenAsync()
{
    return get_activation_factory<ContactStore, IContactStoreStatics>().CreateOrOpenAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Phone::PersonalInformation::ContactStore> ContactStore::CreateOrOpenAsync(Windows::Phone::PersonalInformation::ContactStoreSystemAccessMode access, Windows::Phone::PersonalInformation::ContactStoreApplicationAccessMode sharing)
{
    return get_activation_factory<ContactStore, IContactStoreStatics>().CreateOrOpenAsync(access, sharing);
}

inline hstring KnownContactProperties::DisplayName()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().DisplayName();
}

inline hstring KnownContactProperties::FamilyName()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().FamilyName();
}

inline hstring KnownContactProperties::GivenName()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().GivenName();
}

inline hstring KnownContactProperties::HonorificPrefix()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().HonorificPrefix();
}

inline hstring KnownContactProperties::HonorificSuffix()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().HonorificSuffix();
}

inline hstring KnownContactProperties::AdditionalName()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().AdditionalName();
}

inline hstring KnownContactProperties::Address()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().Address();
}

inline hstring KnownContactProperties::OtherAddress()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().OtherAddress();
}

inline hstring KnownContactProperties::Email()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().Email();
}

inline hstring KnownContactProperties::WorkAddress()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().WorkAddress();
}

inline hstring KnownContactProperties::WorkTelephone()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().WorkTelephone();
}

inline hstring KnownContactProperties::JobTitle()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().JobTitle();
}

inline hstring KnownContactProperties::Birthdate()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().Birthdate();
}

inline hstring KnownContactProperties::Anniversary()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().Anniversary();
}

inline hstring KnownContactProperties::Telephone()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().Telephone();
}

inline hstring KnownContactProperties::MobileTelephone()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().MobileTelephone();
}

inline hstring KnownContactProperties::Url()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().Url();
}

inline hstring KnownContactProperties::Notes()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().Notes();
}

inline hstring KnownContactProperties::WorkFax()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().WorkFax();
}

inline hstring KnownContactProperties::Children()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().Children();
}

inline hstring KnownContactProperties::SignificantOther()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().SignificantOther();
}

inline hstring KnownContactProperties::CompanyName()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().CompanyName();
}

inline hstring KnownContactProperties::CompanyTelephone()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().CompanyTelephone();
}

inline hstring KnownContactProperties::HomeFax()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().HomeFax();
}

inline hstring KnownContactProperties::AlternateTelephone()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().AlternateTelephone();
}

inline hstring KnownContactProperties::Manager()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().Manager();
}

inline hstring KnownContactProperties::Nickname()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().Nickname();
}

inline hstring KnownContactProperties::OfficeLocation()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().OfficeLocation();
}

inline hstring KnownContactProperties::WorkEmail()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().WorkEmail();
}

inline hstring KnownContactProperties::YomiGivenName()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().YomiGivenName();
}

inline hstring KnownContactProperties::YomiFamilyName()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().YomiFamilyName();
}

inline hstring KnownContactProperties::YomiCompanyName()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().YomiCompanyName();
}

inline hstring KnownContactProperties::OtherEmail()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().OtherEmail();
}

inline hstring KnownContactProperties::AlternateMobileTelephone()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().AlternateMobileTelephone();
}

inline hstring KnownContactProperties::AlternateWorkTelephone()
{
    return get_activation_factory<KnownContactProperties, IKnownContactPropertiesStatics>().AlternateWorkTelephone();
}

inline StoredContact::StoredContact(const Windows::Phone::PersonalInformation::ContactStore & store) :
    StoredContact(get_activation_factory<StoredContact, IStoredContactFactory>().CreateStoredContact(store))
{}

inline StoredContact::StoredContact(const Windows::Phone::PersonalInformation::ContactStore & store, const Windows::Phone::PersonalInformation::ContactInformation & contact) :
    StoredContact(get_activation_factory<StoredContact, IStoredContactFactory>().CreateStoredContactFromInformation(store, contact))
{}

}

}
