// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Phone::PersonalInformation {

struct ContactStore;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IInputStream;

}

WINRT_EXPORT namespace winrt::Windows::Phone::PersonalInformation::Provisioning {

struct IContactPartnerProvisioningManagerStatics;
struct IContactPartnerProvisioningManagerStatics2;
struct IMessagePartnerProvisioningManagerStatics;
struct ContactPartnerProvisioningManager;
struct MessagePartnerProvisioningManager;

}

namespace winrt::impl {

template <> struct category<Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager>{ using type = class_category; };
template <> struct category<Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager>{ using type = class_category; };
template <> struct name<Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.Provisioning.IContactPartnerProvisioningManagerStatics" }; };
template <> struct name<Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.Provisioning.IContactPartnerProvisioningManagerStatics2" }; };
template <> struct name<Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.Provisioning.IMessagePartnerProvisioningManagerStatics" }; };
template <> struct name<Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.Provisioning.ContactPartnerProvisioningManager" }; };
template <> struct name<Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager>{ static constexpr auto & value{ L"Windows.Phone.PersonalInformation.Provisioning.MessagePartnerProvisioningManager" }; };
template <> struct guid<Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>{ static constexpr GUID value{ 0xC0D79A21,0x01AF,0x4FD3,{ 0x98,0xCD,0xB3,0xD6,0x56,0xDE,0x15,0xF4 } }; };
template <> struct guid<Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2>{ static constexpr GUID value{ 0xC26155F7,0x55ED,0x475D,{ 0x93,0x34,0xC5,0xD4,0x84,0xC3,0x0F,0x1A } }; };
template <> struct guid<Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>{ static constexpr GUID value{ 0x8A1B0850,0x73C5,0x457C,{ 0xBC,0x59,0xED,0x7D,0x61,0x5C,0x05,0xA4 } }; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics
{
    Windows::Foundation::IAsyncAction AssociateNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId) const;
    Windows::Foundation::IAsyncAction ImportVcardToSystemAsync(Windows::Storage::Streams::IInputStream const& stream) const;
};
template <> struct consume<Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics2
{
    Windows::Foundation::IAsyncAction AssociateSocialNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId) const;
};
template <> struct consume<Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics2<D>; };

template <typename D>
struct consume_Windows_Phone_PersonalInformation_Provisioning_IMessagePartnerProvisioningManagerStatics
{
    Windows::Foundation::IAsyncAction ImportSmsToSystemAsync(bool incoming, bool read, param::hstring const& body, param::hstring const& sender, param::async_vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime) const;
    Windows::Foundation::IAsyncAction ImportMmsToSystemAsync(bool incoming, bool read, param::hstring const& subject, param::hstring const& sender, param::async_vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime, param::async_vector_view<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>> const& attachments) const;
};
template <> struct consume<Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics> { template <typename D> using type = consume_Windows_Phone_PersonalInformation_Provisioning_IMessagePartnerProvisioningManagerStatics<D>; };

template <> struct abi<Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AssociateNetworkAccountAsync(::IUnknown* store, HSTRING networkName, HSTRING networkAccountId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ImportVcardToSystemAsync(::IUnknown* stream, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AssociateSocialNetworkAccountAsync(::IUnknown* store, HSTRING networkName, HSTRING networkAccountId, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ImportSmsToSystemAsync(bool incoming, bool read, HSTRING body, HSTRING sender, ::IUnknown* recipients, abi_t<Windows::Foundation::DateTime> deliveryTime, ::IUnknown** action) = 0;
    virtual HRESULT __stdcall ImportMmsToSystemAsync(bool incoming, bool read, HSTRING subject, HSTRING sender, ::IUnknown* recipients, abi_t<Windows::Foundation::DateTime> deliveryTime, ::IUnknown* attachments, ::IUnknown** action) = 0;
};};

}
