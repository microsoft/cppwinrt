// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Security.Authentication.OnlineId.1.h"

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::OnlineId {

struct WINRT_EBO OnlineIdAuthenticator :
    Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator
{
    OnlineIdAuthenticator(std::nullptr_t) noexcept {}
    OnlineIdAuthenticator();
};

struct WINRT_EBO OnlineIdServiceTicket :
    Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket
{
    OnlineIdServiceTicket(std::nullptr_t) noexcept {}
};

struct WINRT_EBO OnlineIdServiceTicketRequest :
    Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest
{
    OnlineIdServiceTicketRequest(std::nullptr_t) noexcept {}
    OnlineIdServiceTicketRequest(param::hstring const& service, param::hstring const& policy);
    OnlineIdServiceTicketRequest(param::hstring const& service);
};

struct OnlineIdSystemAuthenticator
{
    OnlineIdSystemAuthenticator() = delete;
    static Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser Default();
    static Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser GetForUser(Windows::System::User const& user);
};

struct WINRT_EBO OnlineIdSystemAuthenticatorForUser :
    Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser
{
    OnlineIdSystemAuthenticatorForUser(std::nullptr_t) noexcept {}
};

struct WINRT_EBO OnlineIdSystemIdentity :
    Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity
{
    OnlineIdSystemIdentity(std::nullptr_t) noexcept {}
};

struct WINRT_EBO OnlineIdSystemTicketResult :
    Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult
{
    OnlineIdSystemTicketResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SignOutUserOperation :
    Windows::Foundation::IAsyncAction
{
    SignOutUserOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserAuthenticationOperation :
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity>
{
    UserAuthenticationOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserIdentity :
    Windows::Security::Authentication::OnlineId::IUserIdentity
{
    UserIdentity(std::nullptr_t) noexcept {}
};

}
