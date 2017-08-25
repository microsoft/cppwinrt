// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Phone.PersonalInformation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Phone.PersonalInformation.Provisioning.2.h"
#include "winrt/Windows.Phone.PersonalInformation.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics<D>::AssociateNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics)->AssociateNetworkAccountAsync(get_abi(store), get_abi(networkName), get_abi(networkAccountId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics<D>::ImportVcardToSystemAsync(Windows::Storage::Streams::IInputStream const& stream) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics)->ImportVcardToSystemAsync(get_abi(stream), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics2<D>::AssociateSocialNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2)->AssociateSocialNetworkAccountAsync(get_abi(store), get_abi(networkName), get_abi(networkAccountId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_Provisioning_IMessagePartnerProvisioningManagerStatics<D>::ImportSmsToSystemAsync(bool incoming, bool read, param::hstring const& body, param::hstring const& sender, param::async_vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics)->ImportSmsToSystemAsync(incoming, read, get_abi(body), get_abi(sender), get_abi(recipients), get_abi(deliveryTime), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Phone_PersonalInformation_Provisioning_IMessagePartnerProvisioningManagerStatics<D>::ImportMmsToSystemAsync(bool incoming, bool read, param::hstring const& subject, param::hstring const& sender, param::async_vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime, param::async_vector_view<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>> const& attachments) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics)->ImportMmsToSystemAsync(incoming, read, get_abi(subject), get_abi(sender), get_abi(recipients), get_abi(deliveryTime), get_abi(attachments), put_abi(action)));
    return action;
}

template <typename D>
struct produce<D, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics> : produce_base<D, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>
{
    HRESULT __stdcall AssociateNetworkAccountAsync(::IUnknown* store, HSTRING networkName, HSTRING networkAccountId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AssociateNetworkAccountAsync(*reinterpret_cast<Windows::Phone::PersonalInformation::ContactStore const*>(&store), *reinterpret_cast<hstring const*>(&networkName), *reinterpret_cast<hstring const*>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ImportVcardToSystemAsync(::IUnknown* stream, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ImportVcardToSystemAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&stream)));
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
    HRESULT __stdcall AssociateSocialNetworkAccountAsync(::IUnknown* store, HSTRING networkName, HSTRING networkAccountId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AssociateSocialNetworkAccountAsync(*reinterpret_cast<Windows::Phone::PersonalInformation::ContactStore const*>(&store), *reinterpret_cast<hstring const*>(&networkName), *reinterpret_cast<hstring const*>(&networkAccountId)));
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
    HRESULT __stdcall ImportSmsToSystemAsync(bool incoming, bool read, HSTRING body, HSTRING sender, ::IUnknown* recipients, abi_t<Windows::Foundation::DateTime> deliveryTime, ::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().ImportSmsToSystemAsync(incoming, read, *reinterpret_cast<hstring const*>(&body), *reinterpret_cast<hstring const*>(&sender), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&recipients), *reinterpret_cast<Windows::Foundation::DateTime const*>(&deliveryTime)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ImportMmsToSystemAsync(bool incoming, bool read, HSTRING subject, HSTRING sender, ::IUnknown* recipients, abi_t<Windows::Foundation::DateTime> deliveryTime, ::IUnknown* attachments, ::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().ImportMmsToSystemAsync(incoming, read, *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<hstring const*>(&sender), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&recipients), *reinterpret_cast<Windows::Foundation::DateTime const*>(&deliveryTime), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>> const*>(&attachments)));
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

WINRT_EXPORT namespace winrt::Windows::Phone::PersonalInformation::Provisioning {

inline Windows::Foundation::IAsyncAction ContactPartnerProvisioningManager::AssociateNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId)
{
    return get_activation_factory<ContactPartnerProvisioningManager, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>().AssociateNetworkAccountAsync(store, networkName, networkAccountId);
}

inline Windows::Foundation::IAsyncAction ContactPartnerProvisioningManager::ImportVcardToSystemAsync(Windows::Storage::Streams::IInputStream const& stream)
{
    return get_activation_factory<ContactPartnerProvisioningManager, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>().ImportVcardToSystemAsync(stream);
}

inline Windows::Foundation::IAsyncAction ContactPartnerProvisioningManager::AssociateSocialNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId)
{
    return get_activation_factory<ContactPartnerProvisioningManager, Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2>().AssociateSocialNetworkAccountAsync(store, networkName, networkAccountId);
}

inline Windows::Foundation::IAsyncAction MessagePartnerProvisioningManager::ImportSmsToSystemAsync(bool incoming, bool read, param::hstring const& body, param::hstring const& sender, param::async_vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime)
{
    return get_activation_factory<MessagePartnerProvisioningManager, Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>().ImportSmsToSystemAsync(incoming, read, body, sender, recipients, deliveryTime);
}

inline Windows::Foundation::IAsyncAction MessagePartnerProvisioningManager::ImportMmsToSystemAsync(bool incoming, bool read, param::hstring const& subject, param::hstring const& sender, param::async_vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime, param::async_vector_view<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>> const& attachments)
{
    return get_activation_factory<MessagePartnerProvisioningManager, Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>().ImportMmsToSystemAsync(incoming, read, subject, sender, recipients, deliveryTime, attachments);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager> {};

template<> struct hash<winrt::Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager> {};

}

WINRT_WARNING_POP
