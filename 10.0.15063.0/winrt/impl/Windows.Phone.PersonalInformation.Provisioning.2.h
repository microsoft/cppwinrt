// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.PersonalInformation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Phone.PersonalInformation.Provisioning.1.h"

WINRT_EXPORT namespace winrt::Windows::Phone::PersonalInformation::Provisioning {

struct ContactPartnerProvisioningManager
{
    ContactPartnerProvisioningManager() = delete;
    static Windows::Foundation::IAsyncAction AssociateNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId);
    static Windows::Foundation::IAsyncAction ImportVcardToSystemAsync(Windows::Storage::Streams::IInputStream const& stream);
    static Windows::Foundation::IAsyncAction AssociateSocialNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId);
};

struct MessagePartnerProvisioningManager
{
    MessagePartnerProvisioningManager() = delete;
    static Windows::Foundation::IAsyncAction ImportSmsToSystemAsync(bool incoming, bool read, param::hstring const& body, param::hstring const& sender, param::async_vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime);
    static Windows::Foundation::IAsyncAction ImportMmsToSystemAsync(bool incoming, bool read, param::hstring const& subject, param::hstring const& sender, param::async_vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime, param::async_vector_view<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>> const& attachments);
};

}
