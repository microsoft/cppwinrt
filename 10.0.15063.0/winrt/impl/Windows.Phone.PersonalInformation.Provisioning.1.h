// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.PersonalInformation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Phone.PersonalInformation.Provisioning.0.h"

WINRT_EXPORT namespace winrt::Windows::Phone::PersonalInformation::Provisioning {

struct WINRT_EBO IContactPartnerProvisioningManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPartnerProvisioningManagerStatics>
{
    IContactPartnerProvisioningManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactPartnerProvisioningManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPartnerProvisioningManagerStatics2>
{
    IContactPartnerProvisioningManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMessagePartnerProvisioningManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMessagePartnerProvisioningManagerStatics>
{
    IMessagePartnerProvisioningManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
