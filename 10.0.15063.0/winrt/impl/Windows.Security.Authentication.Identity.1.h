// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Security.Authentication.Identity.0.h"

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity {

struct WINRT_EBO IEnterpriseKeyCredentialRegistrationInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnterpriseKeyCredentialRegistrationInfo>
{
    IEnterpriseKeyCredentialRegistrationInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEnterpriseKeyCredentialRegistrationManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnterpriseKeyCredentialRegistrationManager>
{
    IEnterpriseKeyCredentialRegistrationManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEnterpriseKeyCredentialRegistrationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnterpriseKeyCredentialRegistrationManagerStatics>
{
    IEnterpriseKeyCredentialRegistrationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
