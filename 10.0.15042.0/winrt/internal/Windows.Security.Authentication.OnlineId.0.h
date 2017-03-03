// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Authentication::OnlineId {

struct IOnlineIdAuthenticator;
struct IOnlineIdServiceTicket;
struct IOnlineIdServiceTicketRequest;
struct IOnlineIdServiceTicketRequestFactory;
struct IOnlineIdSystemAuthenticatorForUser;
struct IOnlineIdSystemAuthenticatorStatics;
struct IOnlineIdSystemIdentity;
struct IOnlineIdSystemTicketResult;
struct IUserIdentity;
struct OnlineIdAuthenticator;
struct OnlineIdServiceTicket;
struct OnlineIdServiceTicketRequest;
struct OnlineIdSystemAuthenticatorForUser;
struct OnlineIdSystemIdentity;
struct OnlineIdSystemTicketResult;
struct SignOutUserOperation;
struct UserAuthenticationOperation;
struct UserIdentity;

}

namespace Windows::Security::Authentication::OnlineId {

struct IOnlineIdAuthenticator;
struct IOnlineIdServiceTicket;
struct IOnlineIdServiceTicketRequest;
struct IOnlineIdServiceTicketRequestFactory;
struct IOnlineIdSystemAuthenticatorForUser;
struct IOnlineIdSystemAuthenticatorStatics;
struct IOnlineIdSystemIdentity;
struct IOnlineIdSystemTicketResult;
struct IUserIdentity;
struct OnlineIdAuthenticator;
struct OnlineIdServiceTicket;
struct OnlineIdServiceTicketRequest;
struct OnlineIdSystemAuthenticator;
struct OnlineIdSystemAuthenticatorForUser;
struct OnlineIdSystemIdentity;
struct OnlineIdSystemTicketResult;
struct SignOutUserOperation;
struct UserAuthenticationOperation;
struct UserIdentity;

}

namespace Windows::Security::Authentication::OnlineId {

template <typename T> struct impl_IOnlineIdAuthenticator;
template <typename T> struct impl_IOnlineIdServiceTicket;
template <typename T> struct impl_IOnlineIdServiceTicketRequest;
template <typename T> struct impl_IOnlineIdServiceTicketRequestFactory;
template <typename T> struct impl_IOnlineIdSystemAuthenticatorForUser;
template <typename T> struct impl_IOnlineIdSystemAuthenticatorStatics;
template <typename T> struct impl_IOnlineIdSystemIdentity;
template <typename T> struct impl_IOnlineIdSystemTicketResult;
template <typename T> struct impl_IUserIdentity;

}

namespace Windows::Security::Authentication::OnlineId {

enum class CredentialPromptType
{
    PromptIfNeeded = 0,
    RetypeCredentials = 1,
    DoNotPrompt = 2,
};

enum class OnlineIdSystemTicketStatus
{
    Success = 0,
    Error = 1,
    ServiceConnectionError = 2,
};

}

}
