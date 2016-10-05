// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Security.Authentication.OnlineId.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_45f03233_e7a8_5ade_9ff3_0b8a1c6ba76b
#define WINRT_GENERIC_45f03233_e7a8_5ade_9ff3_0b8a1c6ba76b
template <> struct __declspec(uuid("45f03233-e7a8-5ade-9ff3-0b8a1c6ba76b")) __declspec(novtable) IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> : impl_IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> {};
#endif

#ifndef WINRT_GENERIC_cb72d686_9516_520d_a274_fa4cd1762cb2
#define WINRT_GENERIC_cb72d686_9516_520d_a274_fa4cd1762cb2
template <> struct __declspec(uuid("cb72d686-9516-520d-a274-fa4cd1762cb2")) __declspec(novtable) IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> : impl_IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_b8cc25e1_409f_57f4_bbe4_3b95b74b86c8
#define WINRT_GENERIC_b8cc25e1_409f_57f4_bbe4_3b95b74b86c8
template <> struct __declspec(uuid("b8cc25e1-409f-57f4-bbe4-3b95b74b86c8")) __declspec(novtable) IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity> : impl_IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_039feee7_0882_50e2_bc3f_4fac7e8c2769
#define WINRT_GENERIC_039feee7_0882_50e2_bc3f_4fac7e8c2769
template <> struct __declspec(uuid("039feee7-0882-50e2-bc3f-4fac7e8c2769")) __declspec(novtable) IIterator<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> : impl_IIterator<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> {};
#endif

#ifndef WINRT_GENERIC_809d1314_97ab_5544_9891_ddcdfadd1dbb
#define WINRT_GENERIC_809d1314_97ab_5544_9891_ddcdfadd1dbb
template <> struct __declspec(uuid("809d1314-97ab-5544-9891-ddcdfadd1dbb")) __declspec(novtable) IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> : impl_IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> {};
#endif

#ifndef WINRT_GENERIC_b6a5c8e4_6e3c_5c37_92cf_cf9f1c383335
#define WINRT_GENERIC_b6a5c8e4_6e3c_5c37_92cf_cf9f1c383335
template <> struct __declspec(uuid("b6a5c8e4-6e3c-5c37-92cf-cf9f1c383335")) __declspec(novtable) IIterator<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> : impl_IIterator<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cded76fd_7841_52a0_a771_76cd751d13cd
#define WINRT_GENERIC_cded76fd_7841_52a0_a771_76cd751d13cd
template <> struct __declspec(uuid("cded76fd-7841-52a0-a771-76cd751d13cd")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Security::Authentication::OnlineId::UserIdentity> : impl_AsyncOperationCompletedHandler<Windows::Security::Authentication::OnlineId::UserIdentity> {};
#endif


}

namespace Windows::Security::Authentication::OnlineId {

template <typename D>
struct WINRT_EBO impl_IOnlineIdAuthenticator
{
    Windows::Security::Authentication::OnlineId::UserAuthenticationOperation AuthenticateUserAsync(const Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest & request) const;
    Windows::Security::Authentication::OnlineId::UserAuthenticationOperation AuthenticateUserAsync(const Windows::Foundation::Collections::IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> & requests, Windows::Security::Authentication::OnlineId::CredentialPromptType credentialPromptType) const;
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
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest CreateOnlineIdServiceTicketRequest(hstring_ref service, hstring_ref policy) const;
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest CreateOnlineIdServiceTicketRequestAdvanced(hstring_ref service) const;
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

struct IOnlineIdAuthenticator :
    Windows::IInspectable,
    impl::consume<IOnlineIdAuthenticator>
{
    IOnlineIdAuthenticator(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IOnlineIdAuthenticator>(m_ptr); }
};

struct IOnlineIdServiceTicket :
    Windows::IInspectable,
    impl::consume<IOnlineIdServiceTicket>
{
    IOnlineIdServiceTicket(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IOnlineIdServiceTicket>(m_ptr); }
};

struct IOnlineIdServiceTicketRequest :
    Windows::IInspectable,
    impl::consume<IOnlineIdServiceTicketRequest>
{
    IOnlineIdServiceTicketRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IOnlineIdServiceTicketRequest>(m_ptr); }
};

struct IOnlineIdServiceTicketRequestFactory :
    Windows::IInspectable,
    impl::consume<IOnlineIdServiceTicketRequestFactory>
{
    IOnlineIdServiceTicketRequestFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IOnlineIdServiceTicketRequestFactory>(m_ptr); }
};

struct IUserIdentity :
    Windows::IInspectable,
    impl::consume<IUserIdentity>
{
    IUserIdentity(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUserIdentity>(m_ptr); }
};

}

}
