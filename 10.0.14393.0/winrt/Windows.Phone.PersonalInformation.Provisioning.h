// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Phone.PersonalInformation.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Phone.PersonalInformation.Provisioning.3.h"
#include "Windows.Phone.PersonalInformation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics> : produce_base<D, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>
{
    HRESULT __stdcall abi_AssociateNetworkAccountAsync(abi_arg_in<Windows::Phone::PersonalInformation::IContactStore> store, abi_arg_in<hstring> networkName, abi_arg_in<hstring> networkAccountId, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().AssociateNetworkAccountAsync(*reinterpret_cast<const Windows::Phone::PersonalInformation::ContactStore *>(&store), *reinterpret_cast<const hstring *>(&networkName), *reinterpret_cast<const hstring *>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ImportVcardToSystemAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> stream, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ImportVcardToSystemAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&stream)));
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
struct produce<D, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2> : produce_base<D, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2>
{
    HRESULT __stdcall abi_AssociateSocialNetworkAccountAsync(abi_arg_in<Windows::Phone::PersonalInformation::IContactStore> store, abi_arg_in<hstring> networkName, abi_arg_in<hstring> networkAccountId, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().AssociateSocialNetworkAccountAsync(*reinterpret_cast<const Windows::Phone::PersonalInformation::ContactStore *>(&store), *reinterpret_cast<const hstring *>(&networkName), *reinterpret_cast<const hstring *>(&networkAccountId)));
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
struct produce<D, Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics> : produce_base<D, Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>
{
    HRESULT __stdcall abi_ImportSmsToSystemAsync(bool incoming, bool read, abi_arg_in<hstring> body, abi_arg_in<hstring> sender, abi_arg_in<Windows::Foundation::Collections::IVectorView<hstring>> recipients, abi_arg_in<Windows::Foundation::DateTime> deliveryTime, abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            *action = detach(this->shim().ImportSmsToSystemAsync(incoming, read, *reinterpret_cast<const hstring *>(&body), *reinterpret_cast<const hstring *>(&sender), *reinterpret_cast<const Windows::Foundation::Collections::IVectorView<hstring> *>(&recipients), *reinterpret_cast<const Windows::Foundation::DateTime *>(&deliveryTime)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ImportMmsToSystemAsync(bool incoming, bool read, abi_arg_in<hstring> subject, abi_arg_in<hstring> sender, abi_arg_in<Windows::Foundation::Collections::IVectorView<hstring>> recipients, abi_arg_in<Windows::Foundation::DateTime> deliveryTime, abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>>> attachments, abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            *action = detach(this->shim().ImportMmsToSystemAsync(incoming, read, *reinterpret_cast<const hstring *>(&subject), *reinterpret_cast<const hstring *>(&sender), *reinterpret_cast<const Windows::Foundation::Collections::IVectorView<hstring> *>(&recipients), *reinterpret_cast<const Windows::Foundation::DateTime *>(&deliveryTime), *reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> *>(&attachments)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Phone::PersonalInformation::Provisioning {

template <typename D> Windows::Foundation::IAsyncAction impl_IContactPartnerProvisioningManagerStatics<D>::AssociateNetworkAccountAsync(const Windows::Phone::PersonalInformation::ContactStore & store, hstring_ref networkName, hstring_ref networkAccountId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IContactPartnerProvisioningManagerStatics &>(static_cast<const D &>(*this))->abi_AssociateNetworkAccountAsync(get(store), get(networkName), get(networkAccountId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactPartnerProvisioningManagerStatics<D>::ImportVcardToSystemAsync(const Windows::Storage::Streams::IInputStream & stream) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IContactPartnerProvisioningManagerStatics &>(static_cast<const D &>(*this))->abi_ImportVcardToSystemAsync(get(stream), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactPartnerProvisioningManagerStatics2<D>::AssociateSocialNetworkAccountAsync(const Windows::Phone::PersonalInformation::ContactStore & store, hstring_ref networkName, hstring_ref networkAccountId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IContactPartnerProvisioningManagerStatics2 &>(static_cast<const D &>(*this))->abi_AssociateSocialNetworkAccountAsync(get(store), get(networkName), get(networkAccountId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMessagePartnerProvisioningManagerStatics<D>::ImportSmsToSystemAsync(bool incoming, bool read, hstring_ref body, hstring_ref sender, const Windows::Foundation::Collections::IVectorView<hstring> & recipients, const Windows::Foundation::DateTime & deliveryTime) const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(static_cast<const IMessagePartnerProvisioningManagerStatics &>(static_cast<const D &>(*this))->abi_ImportSmsToSystemAsync(incoming, read, get(body), get(sender), get(recipients), get(deliveryTime), put(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMessagePartnerProvisioningManagerStatics<D>::ImportMmsToSystemAsync(bool incoming, bool read, hstring_ref subject, hstring_ref sender, const Windows::Foundation::Collections::IVectorView<hstring> & recipients, const Windows::Foundation::DateTime & deliveryTime, const Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> & attachments) const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(static_cast<const IMessagePartnerProvisioningManagerStatics &>(static_cast<const D &>(*this))->abi_ImportMmsToSystemAsync(incoming, read, get(subject), get(sender), get(recipients), get(deliveryTime), get(attachments), put(action)));
    return action;
}

inline Windows::Foundation::IAsyncAction ContactPartnerProvisioningManager::AssociateNetworkAccountAsync(const Windows::Phone::PersonalInformation::ContactStore & store, hstring_ref networkName, hstring_ref networkAccountId)
{
    return get_activation_factory<ContactPartnerProvisioningManager, IContactPartnerProvisioningManagerStatics>().AssociateNetworkAccountAsync(store, networkName, networkAccountId);
}

inline Windows::Foundation::IAsyncAction ContactPartnerProvisioningManager::ImportVcardToSystemAsync(const Windows::Storage::Streams::IInputStream & stream)
{
    return get_activation_factory<ContactPartnerProvisioningManager, IContactPartnerProvisioningManagerStatics>().ImportVcardToSystemAsync(stream);
}

inline Windows::Foundation::IAsyncAction ContactPartnerProvisioningManager::AssociateSocialNetworkAccountAsync(const Windows::Phone::PersonalInformation::ContactStore & store, hstring_ref networkName, hstring_ref networkAccountId)
{
    return get_activation_factory<ContactPartnerProvisioningManager, IContactPartnerProvisioningManagerStatics2>().AssociateSocialNetworkAccountAsync(store, networkName, networkAccountId);
}

inline Windows::Foundation::IAsyncAction MessagePartnerProvisioningManager::ImportSmsToSystemAsync(bool incoming, bool read, hstring_ref body, hstring_ref sender, const Windows::Foundation::Collections::IVectorView<hstring> & recipients, const Windows::Foundation::DateTime & deliveryTime)
{
    return get_activation_factory<MessagePartnerProvisioningManager, IMessagePartnerProvisioningManagerStatics>().ImportSmsToSystemAsync(incoming, read, body, sender, recipients, deliveryTime);
}

inline Windows::Foundation::IAsyncAction MessagePartnerProvisioningManager::ImportMmsToSystemAsync(bool incoming, bool read, hstring_ref subject, hstring_ref sender, const Windows::Foundation::Collections::IVectorView<hstring> & recipients, const Windows::Foundation::DateTime & deliveryTime, const Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> & attachments)
{
    return get_activation_factory<MessagePartnerProvisioningManager, IMessagePartnerProvisioningManagerStatics>().ImportMmsToSystemAsync(incoming, read, subject, sender, recipients, deliveryTime, attachments);
}

}

}
