// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.PersonalInformation.Provisioning.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Phone::PersonalInformation::Provisioning {

struct ContactPartnerProvisioningManager
{
    ContactPartnerProvisioningManager() = delete;
    static Windows::Foundation::IAsyncAction AssociateNetworkAccountAsync(const Windows::Phone::PersonalInformation::ContactStore & store, hstring_ref networkName, hstring_ref networkAccountId);
    static Windows::Foundation::IAsyncAction ImportVcardToSystemAsync(const Windows::Storage::Streams::IInputStream & stream);
    static Windows::Foundation::IAsyncAction AssociateSocialNetworkAccountAsync(const Windows::Phone::PersonalInformation::ContactStore & store, hstring_ref networkName, hstring_ref networkAccountId);
};

struct MessagePartnerProvisioningManager
{
    MessagePartnerProvisioningManager() = delete;
    static Windows::Foundation::IAsyncAction ImportSmsToSystemAsync(bool incoming, bool read, hstring_ref body, hstring_ref sender, const Windows::Foundation::Collections::IVectorView<hstring> & recipients, const Windows::Foundation::DateTime & deliveryTime);
    static Windows::Foundation::IAsyncAction ImportMmsToSystemAsync(bool incoming, bool read, hstring_ref subject, hstring_ref sender, const Windows::Foundation::Collections::IVectorView<hstring> & recipients, const Windows::Foundation::DateTime & deliveryTime, const Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> & attachments);
};

}

}
