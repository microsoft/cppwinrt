// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Security.Authentication.OnlineId.3.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator> : produce_base<D, Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator>
{
    HRESULT __stdcall abi_AuthenticateUserAsync(abi_arg_in<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest> request, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity>> authenticationOperation) noexcept override
    {
        try
        {
            *authenticationOperation = detach(this->shim().AuthenticateUserAsync(*reinterpret_cast<const Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>(&request)));
            return S_OK;
        }
        catch (...)
        {
            *authenticationOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AuthenticateUserAsyncAdvanced(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest>> requests, Windows::Security::Authentication::OnlineId::CredentialPromptType credentialPromptType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity>> authenticationOperation) noexcept override
    {
        try
        {
            *authenticationOperation = detach(this->shim().AuthenticateUserAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> *>(&requests), credentialPromptType));
            return S_OK;
        }
        catch (...)
        {
            *authenticationOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SignOutUserAsync(abi_arg_out<Windows::Foundation::IAsyncAction> signOutUserOperation) noexcept override
    {
        try
        {
            *signOutUserOperation = detach(this->shim().SignOutUserAsync());
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
            *value = detach(this->shim().ApplicationId());
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
            *value = detach(this->shim().CanSignOut());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticatedSafeCustomerId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthenticatedSafeCustomerId());
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
    HRESULT __stdcall get_Value(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Request(abi_arg_out<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
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
            *value = detach(this->shim().ErrorCode());
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
    HRESULT __stdcall get_Service(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Service());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Policy(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Policy());
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
    HRESULT __stdcall abi_CreateOnlineIdServiceTicketRequest(abi_arg_in<hstring> service, abi_arg_in<hstring> policy, abi_arg_out<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest> onlineIdServiceTicketRequest) noexcept override
    {
        try
        {
            *onlineIdServiceTicketRequest = detach(this->shim().CreateOnlineIdServiceTicketRequest(*reinterpret_cast<const hstring *>(&service), *reinterpret_cast<const hstring *>(&policy)));
            return S_OK;
        }
        catch (...)
        {
            *onlineIdServiceTicketRequest = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateOnlineIdServiceTicketRequestAdvanced(abi_arg_in<hstring> service, abi_arg_out<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest> onlineIdServiceTicketRequest) noexcept override
    {
        try
        {
            *onlineIdServiceTicketRequest = detach(this->shim().CreateOnlineIdServiceTicketRequestAdvanced(*reinterpret_cast<const hstring *>(&service)));
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
struct produce<D, Windows::Security::Authentication::OnlineId::IUserIdentity> : produce_base<D, Windows::Security::Authentication::OnlineId::IUserIdentity>
{
    HRESULT __stdcall get_Tickets(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tickets());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SafeCustomerId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SafeCustomerId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignInName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SignInName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastName());
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
            *value = detach(this->shim().IsBetaAccount());
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
            *value = detach(this->shim().IsConfirmedPC());
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
    check_hresult(static_cast<const IOnlineIdServiceTicketRequest &>(static_cast<const D &>(*this))->get_Service(put(value)));
    return value;
}

template <typename D> hstring impl_IOnlineIdServiceTicketRequest<D>::Policy() const
{
    hstring value;
    check_hresult(static_cast<const IOnlineIdServiceTicketRequest &>(static_cast<const D &>(*this))->get_Policy(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest impl_IOnlineIdServiceTicketRequestFactory<D>::CreateOnlineIdServiceTicketRequest(hstring_ref service, hstring_ref policy) const
{
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest onlineIdServiceTicketRequest { nullptr };
    check_hresult(static_cast<const IOnlineIdServiceTicketRequestFactory &>(static_cast<const D &>(*this))->abi_CreateOnlineIdServiceTicketRequest(get(service), get(policy), put(onlineIdServiceTicketRequest)));
    return onlineIdServiceTicketRequest;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest impl_IOnlineIdServiceTicketRequestFactory<D>::CreateOnlineIdServiceTicketRequestAdvanced(hstring_ref service) const
{
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest onlineIdServiceTicketRequest { nullptr };
    check_hresult(static_cast<const IOnlineIdServiceTicketRequestFactory &>(static_cast<const D &>(*this))->abi_CreateOnlineIdServiceTicketRequestAdvanced(get(service), put(onlineIdServiceTicketRequest)));
    return onlineIdServiceTicketRequest;
}

template <typename D> hstring impl_IOnlineIdServiceTicket<D>::Value() const
{
    hstring value;
    check_hresult(static_cast<const IOnlineIdServiceTicket &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest impl_IOnlineIdServiceTicket<D>::Request() const
{
    Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest value { nullptr };
    check_hresult(static_cast<const IOnlineIdServiceTicket &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> int32_t impl_IOnlineIdServiceTicket<D>::ErrorCode() const
{
    int32_t value {};
    check_hresult(static_cast<const IOnlineIdServiceTicket &>(static_cast<const D &>(*this))->get_ErrorCode(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> impl_IUserIdentity<D>::Tickets() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> value;
    check_hresult(static_cast<const IUserIdentity &>(static_cast<const D &>(*this))->get_Tickets(put(value)));
    return value;
}

template <typename D> hstring impl_IUserIdentity<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IUserIdentity &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IUserIdentity<D>::SafeCustomerId() const
{
    hstring value;
    check_hresult(static_cast<const IUserIdentity &>(static_cast<const D &>(*this))->get_SafeCustomerId(put(value)));
    return value;
}

template <typename D> hstring impl_IUserIdentity<D>::SignInName() const
{
    hstring value;
    check_hresult(static_cast<const IUserIdentity &>(static_cast<const D &>(*this))->get_SignInName(put(value)));
    return value;
}

template <typename D> hstring impl_IUserIdentity<D>::FirstName() const
{
    hstring value;
    check_hresult(static_cast<const IUserIdentity &>(static_cast<const D &>(*this))->get_FirstName(put(value)));
    return value;
}

template <typename D> hstring impl_IUserIdentity<D>::LastName() const
{
    hstring value;
    check_hresult(static_cast<const IUserIdentity &>(static_cast<const D &>(*this))->get_LastName(put(value)));
    return value;
}

template <typename D> bool impl_IUserIdentity<D>::IsBetaAccount() const
{
    bool value {};
    check_hresult(static_cast<const IUserIdentity &>(static_cast<const D &>(*this))->get_IsBetaAccount(&value));
    return value;
}

template <typename D> bool impl_IUserIdentity<D>::IsConfirmedPC() const
{
    bool value {};
    check_hresult(static_cast<const IUserIdentity &>(static_cast<const D &>(*this))->get_IsConfirmedPC(&value));
    return value;
}

template <typename D> Windows::Security::Authentication::OnlineId::UserAuthenticationOperation impl_IOnlineIdAuthenticator<D>::AuthenticateUserAsync(const Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest & request) const
{
    Windows::Security::Authentication::OnlineId::UserAuthenticationOperation authenticationOperation { nullptr };
    check_hresult(static_cast<const IOnlineIdAuthenticator &>(static_cast<const D &>(*this))->abi_AuthenticateUserAsync(get(request), put(authenticationOperation)));
    return authenticationOperation;
}

template <typename D> Windows::Security::Authentication::OnlineId::UserAuthenticationOperation impl_IOnlineIdAuthenticator<D>::AuthenticateUserAsync(const Windows::Foundation::Collections::IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> & requests, Windows::Security::Authentication::OnlineId::CredentialPromptType credentialPromptType) const
{
    Windows::Security::Authentication::OnlineId::UserAuthenticationOperation authenticationOperation { nullptr };
    check_hresult(static_cast<const IOnlineIdAuthenticator &>(static_cast<const D &>(*this))->abi_AuthenticateUserAsyncAdvanced(get(requests), credentialPromptType, put(authenticationOperation)));
    return authenticationOperation;
}

template <typename D> Windows::Security::Authentication::OnlineId::SignOutUserOperation impl_IOnlineIdAuthenticator<D>::SignOutUserAsync() const
{
    Windows::Security::Authentication::OnlineId::SignOutUserOperation signOutUserOperation { nullptr };
    check_hresult(static_cast<const IOnlineIdAuthenticator &>(static_cast<const D &>(*this))->abi_SignOutUserAsync(put(signOutUserOperation)));
    return signOutUserOperation;
}

template <typename D> void impl_IOnlineIdAuthenticator<D>::ApplicationId(GUID value) const
{
    check_hresult(static_cast<const IOnlineIdAuthenticator &>(static_cast<const D &>(*this))->put_ApplicationId(value));
}

template <typename D> GUID impl_IOnlineIdAuthenticator<D>::ApplicationId() const
{
    GUID value {};
    check_hresult(static_cast<const IOnlineIdAuthenticator &>(static_cast<const D &>(*this))->get_ApplicationId(&value));
    return value;
}

template <typename D> bool impl_IOnlineIdAuthenticator<D>::CanSignOut() const
{
    bool value {};
    check_hresult(static_cast<const IOnlineIdAuthenticator &>(static_cast<const D &>(*this))->get_CanSignOut(&value));
    return value;
}

template <typename D> hstring impl_IOnlineIdAuthenticator<D>::AuthenticatedSafeCustomerId() const
{
    hstring value;
    check_hresult(static_cast<const IOnlineIdAuthenticator &>(static_cast<const D &>(*this))->get_AuthenticatedSafeCustomerId(put(value)));
    return value;
}

inline OnlineIdAuthenticator::OnlineIdAuthenticator() :
    OnlineIdAuthenticator(activate_instance<OnlineIdAuthenticator>())
{}

inline OnlineIdServiceTicketRequest::OnlineIdServiceTicketRequest(hstring_ref service, hstring_ref policy) :
    OnlineIdServiceTicketRequest(get_activation_factory<OnlineIdServiceTicketRequest, IOnlineIdServiceTicketRequestFactory>().CreateOnlineIdServiceTicketRequest(service, policy))
{}

inline OnlineIdServiceTicketRequest::OnlineIdServiceTicketRequest(hstring_ref service) :
    OnlineIdServiceTicketRequest(get_activation_factory<OnlineIdServiceTicketRequest, IOnlineIdServiceTicketRequestFactory>().CreateOnlineIdServiceTicketRequestAdvanced(service))
{}

}

}
