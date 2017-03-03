// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Security.Authentication.OnlineId.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.System.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Authentication::OnlineId {

struct __declspec(uuid("a003f58a-29ab-4817-b884-d7516dad18b9")) __declspec(novtable) IOnlineIdAuthenticator : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_AuthenticateUserAsync(Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest * request, Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity> ** authenticationOperation) = 0;
    virtual HRESULT __stdcall abi_AuthenticateUserAsyncAdvanced(Windows::Foundation::Collections::IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> * requests, winrt::Windows::Security::Authentication::OnlineId::CredentialPromptType credentialPromptType, Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity> ** authenticationOperation) = 0;
    virtual HRESULT __stdcall abi_SignOutUserAsync(Windows::Foundation::IAsyncAction ** signOutUserOperation) = 0;
    virtual HRESULT __stdcall put_ApplicationId(GUID value) = 0;
    virtual HRESULT __stdcall get_ApplicationId(GUID * value) = 0;
    virtual HRESULT __stdcall get_CanSignOut(bool * value) = 0;
    virtual HRESULT __stdcall get_AuthenticatedSafeCustomerId(hstring * value) = 0;
};

struct __declspec(uuid("c95c547f-d781-4a94-acb8-c59874238c26")) __declspec(novtable) IOnlineIdServiceTicket : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Value(hstring * value) = 0;
    virtual HRESULT __stdcall get_Request(Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest ** value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(int32_t * value) = 0;
};

struct __declspec(uuid("297445d3-fb63-4135-8909-4e354c061466")) __declspec(novtable) IOnlineIdServiceTicketRequest : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Service(hstring * value) = 0;
    virtual HRESULT __stdcall get_Policy(hstring * value) = 0;
};

struct __declspec(uuid("bebb0a08-9e73-4077-9614-08614c0bc245")) __declspec(novtable) IOnlineIdServiceTicketRequestFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_CreateOnlineIdServiceTicketRequest(hstring service, hstring policy, Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest ** onlineIdServiceTicketRequest) = 0;
    virtual HRESULT __stdcall abi_CreateOnlineIdServiceTicketRequestAdvanced(hstring service, Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest ** onlineIdServiceTicketRequest) = 0;
};

struct __declspec(uuid("5798befb-1de4-4186-a2e6-b563f86aaf44")) __declspec(novtable) IOnlineIdSystemAuthenticatorForUser : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetTicketAsync(Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest * request, Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult> ** operation) = 0;
    virtual HRESULT __stdcall put_ApplicationId(GUID value) = 0;
    virtual HRESULT __stdcall get_ApplicationId(GUID * value) = 0;
    virtual HRESULT __stdcall get_User(Windows::System::IUser ** user) = 0;
};

struct __declspec(uuid("85047792-f634-41e3-96a4-5164e902c740")) __declspec(novtable) IOnlineIdSystemAuthenticatorStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Default(Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser ** value) = 0;
    virtual HRESULT __stdcall abi_GetForUser(Windows::System::IUser * user, Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser ** value) = 0;
};

struct __declspec(uuid("743cd20d-b6ca-434d-8124-53ea12685307")) __declspec(novtable) IOnlineIdSystemIdentity : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Ticket(Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket ** value) = 0;
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
};

struct __declspec(uuid("db0a5ff8-b098-4acd-9d13-9e640652b5b6")) __declspec(novtable) IOnlineIdSystemTicketResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Identity(Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity ** value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketStatus * value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
};

struct __declspec(uuid("2146d9cd-0742-4be3-8a1c-7c7ae679aa88")) __declspec(novtable) IUserIdentity : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Tickets(Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> ** value) = 0;
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_SafeCustomerId(hstring * value) = 0;
    virtual HRESULT __stdcall get_SignInName(hstring * value) = 0;
    virtual HRESULT __stdcall get_FirstName(hstring * value) = 0;
    virtual HRESULT __stdcall get_LastName(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsBetaAccount(bool * value) = 0;
    virtual HRESULT __stdcall get_IsConfirmedPC(bool * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Security::Authentication::OnlineId::OnlineIdAuthenticator> { using default_interface = Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator; };
template <> struct traits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> { using default_interface = Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket; };
template <> struct traits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> { using default_interface = Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest; };
template <> struct traits<Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser> { using default_interface = Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser; };
template <> struct traits<Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity> { using default_interface = Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity; };
template <> struct traits<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult> { using default_interface = Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult; };
template <> struct traits<Windows::Security::Authentication::OnlineId::SignOutUserOperation> { using default_interface = Windows::Foundation::IAsyncAction; };
template <> struct traits<Windows::Security::Authentication::OnlineId::UserAuthenticationOperation> { using default_interface = Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity>; };
template <> struct traits<Windows::Security::Authentication::OnlineId::UserIdentity> { using default_interface = Windows::Security::Authentication::OnlineId::IUserIdentity; };

}

namespace Windows::Security::Authentication::OnlineId {

template <typename D>
struct WINRT_EBO impl_IOnlineIdAuthenticator
{
    Windows::Security::Authentication::OnlineId::UserAuthenticationOperation AuthenticateUserAsync(const Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest & request) const;
    Windows::Security::Authentication::OnlineId::UserAuthenticationOperation AuthenticateUserAsync(iterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> requests, Windows::Security::Authentication::OnlineId::CredentialPromptType credentialPromptType) const;
    Windows::Security::Authentication::OnlineId::SignOutUserOperation SignOutUserAsync() const;
    void ApplicationId(GUID value) const;
    GUID ApplicationId() const;
    bool CanSignOut() const;
    hstring AuthenticatedSafeCustomerId() const;
};

template <typename D>
struct WINRT_EBO impl_IOnlineIdServiceTicket
{
    hstring Value() const;
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest Request() const;
    int32_t ErrorCode() const;
};

template <typename D>
struct WINRT_EBO impl_IOnlineIdServiceTicketRequest
{
    hstring Service() const;
    hstring Policy() const;
};

template <typename D>
struct WINRT_EBO impl_IOnlineIdServiceTicketRequestFactory
{
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest CreateOnlineIdServiceTicketRequest(hstring_view service, hstring_view policy) const;
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest CreateOnlineIdServiceTicketRequestAdvanced(hstring_view service) const;
};

template <typename D>
struct WINRT_EBO impl_IOnlineIdSystemAuthenticatorForUser
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult> GetTicketAsync(const Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest & request) const;
    void ApplicationId(GUID value) const;
    GUID ApplicationId() const;
    Windows::System::User User() const;
};

template <typename D>
struct WINRT_EBO impl_IOnlineIdSystemAuthenticatorStatics
{
    Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser Default() const;
    Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser GetForUser(const Windows::System::User & user) const;
};

template <typename D>
struct WINRT_EBO impl_IOnlineIdSystemIdentity
{
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket Ticket() const;
    hstring Id() const;
};

template <typename D>
struct WINRT_EBO impl_IOnlineIdSystemTicketResult
{
    Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity Identity() const;
    Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketStatus Status() const;
    HRESULT ExtendedError() const;
};

template <typename D>
struct WINRT_EBO impl_IUserIdentity
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> Tickets() const;
    hstring Id() const;
    hstring SafeCustomerId() const;
    hstring SignInName() const;
    hstring FirstName() const;
    hstring LastName() const;
    bool IsBetaAccount() const;
    bool IsConfirmedPC() const;
};

}

namespace impl {

template <> struct traits<Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator;
    template <typename D> using consume = Windows::Security::Authentication::OnlineId::impl_IOnlineIdAuthenticator<D>;
};

template <> struct traits<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket;
    template <typename D> using consume = Windows::Security::Authentication::OnlineId::impl_IOnlineIdServiceTicket<D>;
};

template <> struct traits<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest;
    template <typename D> using consume = Windows::Security::Authentication::OnlineId::impl_IOnlineIdServiceTicketRequest<D>;
};

template <> struct traits<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory;
    template <typename D> using consume = Windows::Security::Authentication::OnlineId::impl_IOnlineIdServiceTicketRequestFactory<D>;
};

template <> struct traits<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser;
    template <typename D> using consume = Windows::Security::Authentication::OnlineId::impl_IOnlineIdSystemAuthenticatorForUser<D>;
};

template <> struct traits<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics;
    template <typename D> using consume = Windows::Security::Authentication::OnlineId::impl_IOnlineIdSystemAuthenticatorStatics<D>;
};

template <> struct traits<Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity;
    template <typename D> using consume = Windows::Security::Authentication::OnlineId::impl_IOnlineIdSystemIdentity<D>;
};

template <> struct traits<Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult;
    template <typename D> using consume = Windows::Security::Authentication::OnlineId::impl_IOnlineIdSystemTicketResult<D>;
};

template <> struct traits<Windows::Security::Authentication::OnlineId::IUserIdentity>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::IUserIdentity;
    template <typename D> using consume = Windows::Security::Authentication::OnlineId::impl_IUserIdentity<D>;
};

template <> struct traits<Windows::Security::Authentication::OnlineId::OnlineIdAuthenticator>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::OnlineIdAuthenticator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.OnlineId.OnlineIdAuthenticator"; }
};

template <> struct traits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicket"; }
};

template <> struct traits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest"; }
};

template <> struct traits<Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticator>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.OnlineId.OnlineIdSystemAuthenticator"; }
};

template <> struct traits<Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.OnlineId.OnlineIdSystemAuthenticatorForUser"; }
};

template <> struct traits<Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.OnlineId.OnlineIdSystemIdentity"; }
};

template <> struct traits<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.OnlineId.OnlineIdSystemTicketResult"; }
};

template <> struct traits<Windows::Security::Authentication::OnlineId::SignOutUserOperation>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::SignOutUserOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.OnlineId.SignOutUserOperation"; }
};

template <> struct traits<Windows::Security::Authentication::OnlineId::UserAuthenticationOperation>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::UserAuthenticationOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.OnlineId.UserAuthenticationOperation"; }
};

template <> struct traits<Windows::Security::Authentication::OnlineId::UserIdentity>
{
    using abi = ABI::Windows::Security::Authentication::OnlineId::UserIdentity;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.OnlineId.UserIdentity"; }
};

}

}
