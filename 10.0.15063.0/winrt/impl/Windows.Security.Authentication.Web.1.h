// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Security.Authentication.Web.0.h"

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web {

struct WINRT_EBO IWebAuthenticationBrokerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAuthenticationBrokerStatics>
{
    IWebAuthenticationBrokerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAuthenticationBrokerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAuthenticationBrokerStatics2>
{
    IWebAuthenticationBrokerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAuthenticationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAuthenticationResult>
{
    IWebAuthenticationResult(std::nullptr_t = nullptr) noexcept {}
};

}
