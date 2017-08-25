// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.Security.Authentication.OnlineId.0.h"

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::OnlineId {

struct WINRT_EBO IOnlineIdAuthenticator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdAuthenticator>
{
    IOnlineIdAuthenticator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOnlineIdServiceTicket :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdServiceTicket>
{
    IOnlineIdServiceTicket(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOnlineIdServiceTicketRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdServiceTicketRequest>
{
    IOnlineIdServiceTicketRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOnlineIdServiceTicketRequestFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdServiceTicketRequestFactory>
{
    IOnlineIdServiceTicketRequestFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOnlineIdSystemAuthenticatorForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdSystemAuthenticatorForUser>
{
    IOnlineIdSystemAuthenticatorForUser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOnlineIdSystemAuthenticatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdSystemAuthenticatorStatics>
{
    IOnlineIdSystemAuthenticatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOnlineIdSystemIdentity :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdSystemIdentity>
{
    IOnlineIdSystemIdentity(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOnlineIdSystemTicketResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdSystemTicketResult>
{
    IOnlineIdSystemTicketResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserIdentity :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserIdentity>
{
    IUserIdentity(std::nullptr_t = nullptr) noexcept {}
};

}
