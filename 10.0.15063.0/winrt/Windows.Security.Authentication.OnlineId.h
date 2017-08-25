// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Security.Authentication.OnlineId.2.h"

namespace winrt::impl {

template <typename D> Windows::Security::Authentication::OnlineId::UserAuthenticationOperation consume_Windows_Security_Authentication_OnlineId_IOnlineIdAuthenticator<D>::AuthenticateUserAsync(Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest const& request) const
{
    Windows::Security::Authentication::OnlineId::UserAuthenticationOperation authenticationOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator)->AuthenticateUserAsync(get_abi(request), put_abi(authenticationOperation)));
    return authenticationOperation;
}

template <typename D> Windows::Security::Authentication::OnlineId::UserAuthenticationOperation consume_Windows_Security_Authentication_OnlineId_IOnlineIdAuthenticator<D>::AuthenticateUserAsync(param::async_iterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> const& requests, Windows::Security::Authentication::OnlineId::CredentialPromptType const& credentialPromptType) const
{
    Windows::Security::Authentication::OnlineId::UserAuthenticationOperation authenticationOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator)->AuthenticateUserAsyncAdvanced(get_abi(requests), get_abi(credentialPromptType), put_abi(authenticationOperation)));
    return authenticationOperation;
}

template <typename D> Windows::Security::Authentication::OnlineId::SignOutUserOperation consume_Windows_Security_Authentication_OnlineId_IOnlineIdAuthenticator<D>::SignOutUserAsync() const
{
    Windows::Security::Authentication::OnlineId::SignOutUserOperation signOutUserOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator)->SignOutUserAsync(put_abi(signOutUserOperation)));
    return signOutUserOperation;
}

template <typename D> void consume_Windows_Security_Authentication_OnlineId_IOnlineIdAuthenticator<D>::ApplicationId(GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator)->put_ApplicationId(get_abi(value)));
}

template <typename D> GUID consume_Windows_Security_Authentication_OnlineId_IOnlineIdAuthenticator<D>::ApplicationId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator)->get_ApplicationId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Security_Authentication_OnlineId_IOnlineIdAuthenticator<D>::CanSignOut() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator)->get_CanSignOut(&value));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_OnlineId_IOnlineIdAuthenticator<D>::AuthenticatedSafeCustomerId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator)->get_AuthenticatedSafeCustomerId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicket<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicket<D>::Request() const
{
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket)->get_Request(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicket<D>::ErrorCode() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket)->get_ErrorCode(&value));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequest<D>::Service() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest)->get_Service(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequest<D>::Policy() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest)->get_Policy(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequestFactory<D>::CreateOnlineIdServiceTicketRequest(param::hstring const& service, param::hstring const& policy) const
{
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest onlineIdServiceTicketRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory)->CreateOnlineIdServiceTicketRequest(get_abi(service), get_abi(policy), put_abi(onlineIdServiceTicketRequest)));
    return onlineIdServiceTicketRequest;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequestFactory<D>::CreateOnlineIdServiceTicketRequestAdvanced(param::hstring const& service) const
{
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest onlineIdServiceTicketRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory)->CreateOnlineIdServiceTicketRequestAdvanced(get_abi(service), put_abi(onlineIdServiceTicketRequest)));
    return onlineIdServiceTicketRequest;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult> consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorForUser<D>::GetTicketAsync(Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest const& request) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser)->GetTicketAsync(get_abi(request), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorForUser<D>::ApplicationId(GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser)->put_ApplicationId(get_abi(value)));
}

template <typename D> GUID consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorForUser<D>::ApplicationId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser)->get_ApplicationId(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorForUser<D>::User() const
{
    Windows::System::User user{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser)->get_User(put_abi(user)));
    return user;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorStatics<D>::Default() const
{
    Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics)->get_Default(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorStatics<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics)->GetForUser(get_abi(user), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemIdentity<D>::Ticket() const
{
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity)->get_Ticket(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemIdentity<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemTicketResult<D>::Identity() const
{
    Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult)->get_Identity(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketStatus consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemTicketResult<D>::Status() const
{
    Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemTicketResult<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> consume_Windows_Security_Authentication_OnlineId_IUserIdentity<D>::Tickets() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IUserIdentity)->get_Tickets(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_OnlineId_IUserIdentity<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IUserIdentity)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_OnlineId_IUserIdentity<D>::SafeCustomerId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IUserIdentity)->get_SafeCustomerId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_OnlineId_IUserIdentity<D>::SignInName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IUserIdentity)->get_SignInName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_OnlineId_IUserIdentity<D>::FirstName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IUserIdentity)->get_FirstName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_OnlineId_IUserIdentity<D>::LastName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IUserIdentity)->get_LastName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Security_Authentication_OnlineId_IUserIdentity<D>::IsBetaAccount() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IUserIdentity)->get_IsBetaAccount(&value));
    return value;
}

template <typename D> bool consume_Windows_Security_Authentication_OnlineId_IUserIdentity<D>::IsConfirmedPC() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::OnlineId::IUserIdentity)->get_IsConfirmedPC(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator> : produce_base<D, Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator>
{
    HRESULT __stdcall AuthenticateUserAsync(::IUnknown* request, ::IUnknown** authenticationOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *authenticationOperation = detach_abi(this->shim().AuthenticateUserAsync(*reinterpret_cast<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest const*>(&request)));
            return S_OK;
        }
        catch (...)
        {
            *authenticationOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AuthenticateUserAsyncAdvanced(::IUnknown* requests, abi_t<Windows::Security::Authentication::OnlineId::CredentialPromptType> credentialPromptType, ::IUnknown** authenticationOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *authenticationOperation = detach_abi(this->shim().AuthenticateUserAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> const*>(&requests), *reinterpret_cast<Windows::Security::Authentication::OnlineId::CredentialPromptType const*>(&credentialPromptType)));
            return S_OK;
        }
        catch (...)
        {
            *authenticationOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SignOutUserAsync(::IUnknown** signOutUserOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *signOutUserOperation = detach_abi(this->shim().SignOutUserAsync());
            return S_OK;
        }
        catch (...)
        {
            *signOutUserOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ApplicationId(abi_t<GUID> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplicationId(*reinterpret_cast<GUID const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanSignOut(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanSignOut());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticatedSafeCustomerId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AuthenticatedSafeCustomerId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket> : produce_base<D, Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket>
{
    HRESULT __stdcall get_Value(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest> : produce_base<D, Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>
{
    HRESULT __stdcall get_Service(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Service());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Policy(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Policy());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory> : produce_base<D, Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory>
{
    HRESULT __stdcall CreateOnlineIdServiceTicketRequest(HSTRING service, HSTRING policy, ::IUnknown** onlineIdServiceTicketRequest) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *onlineIdServiceTicketRequest = detach_abi(this->shim().CreateOnlineIdServiceTicketRequest(*reinterpret_cast<hstring const*>(&service), *reinterpret_cast<hstring const*>(&policy)));
            return S_OK;
        }
        catch (...)
        {
            *onlineIdServiceTicketRequest = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateOnlineIdServiceTicketRequestAdvanced(HSTRING service, ::IUnknown** onlineIdServiceTicketRequest) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *onlineIdServiceTicketRequest = detach_abi(this->shim().CreateOnlineIdServiceTicketRequestAdvanced(*reinterpret_cast<hstring const*>(&service)));
            return S_OK;
        }
        catch (...)
        {
            *onlineIdServiceTicketRequest = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser> : produce_base<D, Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser>
{
    HRESULT __stdcall GetTicketAsync(::IUnknown* request, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetTicketAsync(*reinterpret_cast<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest const*>(&request)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ApplicationId(abi_t<GUID> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplicationId(*reinterpret_cast<GUID const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** user) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *user = detach_abi(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            *user = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics> : produce_base<D, Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics>
{
    HRESULT __stdcall get_Default(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Default());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity> : produce_base<D, Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity>
{
    HRESULT __stdcall get_Ticket(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ticket());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult> : produce_base<D, Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult>
{
    HRESULT __stdcall get_Identity(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Identity());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::OnlineId::IUserIdentity> : produce_base<D, Windows::Security::Authentication::OnlineId::IUserIdentity>
{
    HRESULT __stdcall get_Tickets(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tickets());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SafeCustomerId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SafeCustomerId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignInName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignInName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBetaAccount(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBetaAccount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsConfirmedPC(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsConfirmedPC());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::OnlineId {

inline OnlineIdAuthenticator::OnlineIdAuthenticator() :
    OnlineIdAuthenticator(activate_instance<OnlineIdAuthenticator>())
{}

inline OnlineIdServiceTicketRequest::OnlineIdServiceTicketRequest(param::hstring const& service, param::hstring const& policy) :
    OnlineIdServiceTicketRequest(get_activation_factory<OnlineIdServiceTicketRequest, Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory>().CreateOnlineIdServiceTicketRequest(service, policy))
{}

inline OnlineIdServiceTicketRequest::OnlineIdServiceTicketRequest(param::hstring const& service) :
    OnlineIdServiceTicketRequest(get_activation_factory<OnlineIdServiceTicketRequest, Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory>().CreateOnlineIdServiceTicketRequestAdvanced(service))
{}

inline Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser OnlineIdSystemAuthenticator::Default()
{
    return get_activation_factory<OnlineIdSystemAuthenticator, Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics>().Default();
}

inline Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser OnlineIdSystemAuthenticator::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<OnlineIdSystemAuthenticator, Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics>().GetForUser(user);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::IUserIdentity> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::IUserIdentity> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::OnlineIdAuthenticator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::OnlineIdAuthenticator> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticator> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::SignOutUserOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::SignOutUserOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::UserAuthenticationOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::UserAuthenticationOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::OnlineId::UserIdentity> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::OnlineId::UserIdentity> {};

}

WINRT_WARNING_POP
