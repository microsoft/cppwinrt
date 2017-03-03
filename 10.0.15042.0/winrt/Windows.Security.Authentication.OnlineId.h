// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.Security.Authentication.OnlineId.3.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator> : produce_base<D, Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator>
{
    HRESULT __stdcall abi_AuthenticateUserAsync(impl::abi_arg_in<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest> request, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity>> authenticationOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *authenticationOperation = detach_abi(this->shim().AuthenticateUserAsync(*reinterpret_cast<const Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>(&request)));
            return S_OK;
        }
        catch (...)
        {
            *authenticationOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AuthenticateUserAsyncAdvanced(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest>> requests, Windows::Security::Authentication::OnlineId::CredentialPromptType credentialPromptType, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity>> authenticationOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *authenticationOperation = detach_abi(this->shim().AuthenticateUserAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> *>(&requests), credentialPromptType));
            return S_OK;
        }
        catch (...)
        {
            *authenticationOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SignOutUserAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> signOutUserOperation) noexcept override
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

    HRESULT __stdcall put_ApplicationId(GUID value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplicationId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationId(GUID * value) noexcept override
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

    HRESULT __stdcall get_CanSignOut(bool * value) noexcept override
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

    HRESULT __stdcall get_AuthenticatedSafeCustomerId(impl::abi_arg_out<hstring> value) noexcept override
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
    HRESULT __stdcall get_Value(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Request(impl::abi_arg_out<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest> value) noexcept override
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

    HRESULT __stdcall get_ErrorCode(int32_t * value) noexcept override
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
    HRESULT __stdcall get_Service(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Policy(impl::abi_arg_out<hstring> value) noexcept override
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
    HRESULT __stdcall abi_CreateOnlineIdServiceTicketRequest(impl::abi_arg_in<hstring> service, impl::abi_arg_in<hstring> policy, impl::abi_arg_out<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest> onlineIdServiceTicketRequest) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *onlineIdServiceTicketRequest = detach_abi(this->shim().CreateOnlineIdServiceTicketRequest(*reinterpret_cast<const hstring *>(&service), *reinterpret_cast<const hstring *>(&policy)));
            return S_OK;
        }
        catch (...)
        {
            *onlineIdServiceTicketRequest = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateOnlineIdServiceTicketRequestAdvanced(impl::abi_arg_in<hstring> service, impl::abi_arg_out<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest> onlineIdServiceTicketRequest) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *onlineIdServiceTicketRequest = detach_abi(this->shim().CreateOnlineIdServiceTicketRequestAdvanced(*reinterpret_cast<const hstring *>(&service)));
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
    HRESULT __stdcall abi_GetTicketAsync(impl::abi_arg_in<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest> request, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetTicketAsync(*reinterpret_cast<const Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>(&request)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ApplicationId(GUID value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplicationId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationId(GUID * value) noexcept override
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

    HRESULT __stdcall get_User(impl::abi_arg_out<Windows::System::IUser> user) noexcept override
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
    HRESULT __stdcall get_Default(impl::abi_arg_out<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser> value) noexcept override
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

    HRESULT __stdcall abi_GetForUser(impl::abi_arg_in<Windows::System::IUser> user, impl::abi_arg_out<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
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
    HRESULT __stdcall get_Ticket(impl::abi_arg_out<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket> value) noexcept override
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

    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
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
    HRESULT __stdcall get_Identity(impl::abi_arg_out<Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity> value) noexcept override
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

    HRESULT __stdcall get_Status(Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketStatus * value) noexcept override
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

    HRESULT __stdcall get_ExtendedError(HRESULT * value) noexcept override
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
    HRESULT __stdcall get_Tickets(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket>> value) noexcept override
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

    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_SafeCustomerId(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_SignInName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_FirstName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_LastName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_IsBetaAccount(bool * value) noexcept override
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

    HRESULT __stdcall get_IsConfirmedPC(bool * value) noexcept override
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

namespace Windows::Security::Authentication::OnlineId {

template <typename D> hstring impl_IOnlineIdServiceTicketRequest<D>::Service() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IOnlineIdServiceTicketRequest)->get_Service(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IOnlineIdServiceTicketRequest<D>::Policy() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IOnlineIdServiceTicketRequest)->get_Policy(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest impl_IOnlineIdServiceTicketRequestFactory<D>::CreateOnlineIdServiceTicketRequest(hstring_view service, hstring_view policy) const
{
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest onlineIdServiceTicketRequest { nullptr };
    check_hresult(WINRT_SHIM(IOnlineIdServiceTicketRequestFactory)->abi_CreateOnlineIdServiceTicketRequest(get_abi(service), get_abi(policy), put_abi(onlineIdServiceTicketRequest)));
    return onlineIdServiceTicketRequest;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest impl_IOnlineIdServiceTicketRequestFactory<D>::CreateOnlineIdServiceTicketRequestAdvanced(hstring_view service) const
{
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest onlineIdServiceTicketRequest { nullptr };
    check_hresult(WINRT_SHIM(IOnlineIdServiceTicketRequestFactory)->abi_CreateOnlineIdServiceTicketRequestAdvanced(get_abi(service), put_abi(onlineIdServiceTicketRequest)));
    return onlineIdServiceTicketRequest;
}

template <typename D> hstring impl_IOnlineIdServiceTicket<D>::Value() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IOnlineIdServiceTicket)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest impl_IOnlineIdServiceTicket<D>::Request() const
{
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest value { nullptr };
    check_hresult(WINRT_SHIM(IOnlineIdServiceTicket)->get_Request(put_abi(value)));
    return value;
}

template <typename D> int32_t impl_IOnlineIdServiceTicket<D>::ErrorCode() const
{
    int32_t value {};
    check_hresult(WINRT_SHIM(IOnlineIdServiceTicket)->get_ErrorCode(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> impl_IUserIdentity<D>::Tickets() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> value;
    check_hresult(WINRT_SHIM(IUserIdentity)->get_Tickets(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserIdentity<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserIdentity)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserIdentity<D>::SafeCustomerId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserIdentity)->get_SafeCustomerId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserIdentity<D>::SignInName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserIdentity)->get_SignInName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserIdentity<D>::FirstName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserIdentity)->get_FirstName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserIdentity<D>::LastName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserIdentity)->get_LastName(put_abi(value)));
    return value;
}

template <typename D> bool impl_IUserIdentity<D>::IsBetaAccount() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IUserIdentity)->get_IsBetaAccount(&value));
    return value;
}

template <typename D> bool impl_IUserIdentity<D>::IsConfirmedPC() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IUserIdentity)->get_IsConfirmedPC(&value));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::UserAuthenticationOperation impl_IOnlineIdAuthenticator<D>::AuthenticateUserAsync(const Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest & request) const
{
    Windows::Security::Authentication::OnlineId::UserAuthenticationOperation authenticationOperation { nullptr };
    check_hresult(WINRT_SHIM(IOnlineIdAuthenticator)->abi_AuthenticateUserAsync(get_abi(request), put_abi(authenticationOperation)));
    return authenticationOperation;
}

template <typename D> Windows::Security::Authentication::OnlineId::UserAuthenticationOperation impl_IOnlineIdAuthenticator<D>::AuthenticateUserAsync(iterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> requests, Windows::Security::Authentication::OnlineId::CredentialPromptType credentialPromptType) const
{
    Windows::Security::Authentication::OnlineId::UserAuthenticationOperation authenticationOperation { nullptr };
    check_hresult(WINRT_SHIM(IOnlineIdAuthenticator)->abi_AuthenticateUserAsyncAdvanced(get_abi(requests), credentialPromptType, put_abi(authenticationOperation)));
    return authenticationOperation;
}

template <typename D> Windows::Security::Authentication::OnlineId::SignOutUserOperation impl_IOnlineIdAuthenticator<D>::SignOutUserAsync() const
{
    Windows::Security::Authentication::OnlineId::SignOutUserOperation signOutUserOperation { nullptr };
    check_hresult(WINRT_SHIM(IOnlineIdAuthenticator)->abi_SignOutUserAsync(put_abi(signOutUserOperation)));
    return signOutUserOperation;
}

template <typename D> void impl_IOnlineIdAuthenticator<D>::ApplicationId(GUID value) const
{
    check_hresult(WINRT_SHIM(IOnlineIdAuthenticator)->put_ApplicationId(value));
}

template <typename D> GUID impl_IOnlineIdAuthenticator<D>::ApplicationId() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IOnlineIdAuthenticator)->get_ApplicationId(&value));
    return value;
}

template <typename D> bool impl_IOnlineIdAuthenticator<D>::CanSignOut() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IOnlineIdAuthenticator)->get_CanSignOut(&value));
    return value;
}

template <typename D> hstring impl_IOnlineIdAuthenticator<D>::AuthenticatedSafeCustomerId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IOnlineIdAuthenticator)->get_AuthenticatedSafeCustomerId(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket impl_IOnlineIdSystemIdentity<D>::Ticket() const
{
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket value { nullptr };
    check_hresult(WINRT_SHIM(IOnlineIdSystemIdentity)->get_Ticket(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IOnlineIdSystemIdentity<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IOnlineIdSystemIdentity)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity impl_IOnlineIdSystemTicketResult<D>::Identity() const
{
    Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity value { nullptr };
    check_hresult(WINRT_SHIM(IOnlineIdSystemTicketResult)->get_Identity(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketStatus impl_IOnlineIdSystemTicketResult<D>::Status() const
{
    Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketStatus value {};
    check_hresult(WINRT_SHIM(IOnlineIdSystemTicketResult)->get_Status(&value));
    return value;
}

template <typename D> HRESULT impl_IOnlineIdSystemTicketResult<D>::ExtendedError() const
{
    HRESULT value {};
    check_hresult(WINRT_SHIM(IOnlineIdSystemTicketResult)->get_ExtendedError(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult> impl_IOnlineIdSystemAuthenticatorForUser<D>::GetTicketAsync(const Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest & request) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult> operation;
    check_hresult(WINRT_SHIM(IOnlineIdSystemAuthenticatorForUser)->abi_GetTicketAsync(get_abi(request), put_abi(operation)));
    return operation;
}

template <typename D> void impl_IOnlineIdSystemAuthenticatorForUser<D>::ApplicationId(GUID value) const
{
    check_hresult(WINRT_SHIM(IOnlineIdSystemAuthenticatorForUser)->put_ApplicationId(value));
}

template <typename D> GUID impl_IOnlineIdSystemAuthenticatorForUser<D>::ApplicationId() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IOnlineIdSystemAuthenticatorForUser)->get_ApplicationId(&value));
    return value;
}

template <typename D> Windows::System::User impl_IOnlineIdSystemAuthenticatorForUser<D>::User() const
{
    Windows::System::User user { nullptr };
    check_hresult(WINRT_SHIM(IOnlineIdSystemAuthenticatorForUser)->get_User(put_abi(user)));
    return user;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser impl_IOnlineIdSystemAuthenticatorStatics<D>::Default() const
{
    Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser value { nullptr };
    check_hresult(WINRT_SHIM(IOnlineIdSystemAuthenticatorStatics)->get_Default(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser impl_IOnlineIdSystemAuthenticatorStatics<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser value { nullptr };
    check_hresult(WINRT_SHIM(IOnlineIdSystemAuthenticatorStatics)->abi_GetForUser(get_abi(user), put_abi(value)));
    return value;
}

inline OnlineIdAuthenticator::OnlineIdAuthenticator() :
    OnlineIdAuthenticator(activate_instance<OnlineIdAuthenticator>())
{}

inline OnlineIdServiceTicketRequest::OnlineIdServiceTicketRequest(hstring_view service, hstring_view policy) :
    OnlineIdServiceTicketRequest(get_activation_factory<OnlineIdServiceTicketRequest, IOnlineIdServiceTicketRequestFactory>().CreateOnlineIdServiceTicketRequest(service, policy))
{}

inline OnlineIdServiceTicketRequest::OnlineIdServiceTicketRequest(hstring_view service) :
    OnlineIdServiceTicketRequest(get_activation_factory<OnlineIdServiceTicketRequest, IOnlineIdServiceTicketRequestFactory>().CreateOnlineIdServiceTicketRequestAdvanced(service))
{}

inline Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser OnlineIdSystemAuthenticator::Default()
{
    return get_activation_factory<OnlineIdSystemAuthenticator, IOnlineIdSystemAuthenticatorStatics>().Default();
}

inline Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser OnlineIdSystemAuthenticator::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<OnlineIdSystemAuthenticator, IOnlineIdSystemAuthenticatorStatics>().GetForUser(user);
}

}

}

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::IUserIdentity>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::IUserIdentity & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::OnlineIdAuthenticator>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::OnlineIdAuthenticator & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::SignOutUserOperation>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::SignOutUserOperation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::UserAuthenticationOperation>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::UserAuthenticationOperation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Security::Authentication::OnlineId::UserIdentity>
{
    size_t operator()(const winrt::Windows::Security::Authentication::OnlineId::UserIdentity & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
