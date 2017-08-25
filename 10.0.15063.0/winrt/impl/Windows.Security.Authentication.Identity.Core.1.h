// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Security.Authentication.Identity.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity::Core {

struct WINRT_EBO IMicrosoftAccountMultiFactorAuthenticationManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMicrosoftAccountMultiFactorAuthenticationManager>
{
    IMicrosoftAccountMultiFactorAuthenticationManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMicrosoftAccountMultiFactorAuthenticatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMicrosoftAccountMultiFactorAuthenticatorStatics>
{
    IMicrosoftAccountMultiFactorAuthenticatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMicrosoftAccountMultiFactorGetSessionsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMicrosoftAccountMultiFactorGetSessionsResult>
{
    IMicrosoftAccountMultiFactorGetSessionsResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMicrosoftAccountMultiFactorOneTimeCodedInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMicrosoftAccountMultiFactorOneTimeCodedInfo>
{
    IMicrosoftAccountMultiFactorOneTimeCodedInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMicrosoftAccountMultiFactorSessionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMicrosoftAccountMultiFactorSessionInfo>
{
    IMicrosoftAccountMultiFactorSessionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>
{
    IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(std::nullptr_t = nullptr) noexcept {}
};

}
