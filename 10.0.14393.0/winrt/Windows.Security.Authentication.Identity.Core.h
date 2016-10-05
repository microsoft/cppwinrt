// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Security.Authentication.Identity.Core.3.h"
#include "Windows.Security.Authentication.Identity.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager>
{
    HRESULT __stdcall abi_GetOneTimePassCodeAsync(abi_arg_in<hstring> userAccountId, uint32_t codeLength, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().GetOneTimePassCodeAsync(*reinterpret_cast<const hstring *>(&userAccountId), codeLength));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddDeviceAsync(abi_arg_in<hstring> userAccountId, abi_arg_in<hstring> authenticationToken, abi_arg_in<hstring> wnsChannelId, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().AddDeviceAsync(*reinterpret_cast<const hstring *>(&userAccountId), *reinterpret_cast<const hstring *>(&authenticationToken), *reinterpret_cast<const hstring *>(&wnsChannelId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveDeviceAsync(abi_arg_in<hstring> userAccountId, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().RemoveDeviceAsync(*reinterpret_cast<const hstring *>(&userAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateWnsChannelAsync(abi_arg_in<hstring> userAccountId, abi_arg_in<hstring> channelUri, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().UpdateWnsChannelAsync(*reinterpret_cast<const hstring *>(&userAccountId), *reinterpret_cast<const hstring *>(&channelUri)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSessionsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> userAccountIdList, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().GetSessionsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&userAccountIdList)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSessionsAndUnregisteredAccountsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> userAccountIdList, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().GetSessionsAndUnregisteredAccountsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&userAccountIdList)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ApproveSessionUsingAuthSessionInfoAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus sessionAuthentictionStatus, abi_arg_in<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo> authenticationSessionInfo, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().ApproveSessionAsync(sessionAuthentictionStatus, *reinterpret_cast<const Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo *>(&authenticationSessionInfo)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ApproveSessionAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus sessionAuthentictionStatus, abi_arg_in<hstring> userAccountId, abi_arg_in<hstring> sessionId, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType sessionAuthenticationType, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().ApproveSessionAsync(sessionAuthentictionStatus, *reinterpret_cast<const hstring *>(&userAccountId), *reinterpret_cast<const hstring *>(&sessionId), sessionAuthenticationType));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DenySessionUsingAuthSessionInfoAsync(abi_arg_in<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo> authenticationSessionInfo, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().DenySessionAsync(*reinterpret_cast<const Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo *>(&authenticationSessionInfo)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DenySessionAsync(abi_arg_in<hstring> userAccountId, abi_arg_in<hstring> sessionId, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType sessionAuthenticationType, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().DenySessionAsync(*reinterpret_cast<const hstring *>(&userAccountId), *reinterpret_cast<const hstring *>(&sessionId), sessionAuthenticationType));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics>
{
    HRESULT __stdcall get_Current(abi_arg_out<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Current());
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
struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult>
{
    HRESULT __stdcall get_Sessions(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sessions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceResponse(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceResponse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo>
{
    HRESULT __stdcall get_Code(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Code());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeInterval(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimeInterval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeToLive(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimeToLive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceResponse(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceResponse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo>
{
    HRESULT __stdcall get_UserAccountId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplaySessionId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplaySessionId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApprovalStatus(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ApprovalStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationType(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthenticationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpirationTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>
{
    HRESULT __stdcall get_Sessions(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sessions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnregisteredAccounts(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnregisteredAccounts());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceResponse(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceResponse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Security::Authentication::Identity::Core {

template <typename D> hstring impl_IMicrosoftAccountMultiFactorSessionInfo<D>::UserAccountId() const
{
    hstring value;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorSessionInfo &>(static_cast<const D &>(*this))->get_UserAccountId(put(value)));
    return value;
}

template <typename D> hstring impl_IMicrosoftAccountMultiFactorSessionInfo<D>::SessionId() const
{
    hstring value;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorSessionInfo &>(static_cast<const D &>(*this))->get_SessionId(put(value)));
    return value;
}

template <typename D> hstring impl_IMicrosoftAccountMultiFactorSessionInfo<D>::DisplaySessionId() const
{
    hstring value;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorSessionInfo &>(static_cast<const D &>(*this))->get_DisplaySessionId(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus impl_IMicrosoftAccountMultiFactorSessionInfo<D>::ApprovalStatus() const
{
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus value {};
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorSessionInfo &>(static_cast<const D &>(*this))->get_ApprovalStatus(&value));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType impl_IMicrosoftAccountMultiFactorSessionInfo<D>::AuthenticationType() const
{
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType value {};
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorSessionInfo &>(static_cast<const D &>(*this))->get_AuthenticationType(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IMicrosoftAccountMultiFactorSessionInfo<D>::RequestTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorSessionInfo &>(static_cast<const D &>(*this))->get_RequestTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IMicrosoftAccountMultiFactorSessionInfo<D>::ExpirationTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorSessionInfo &>(static_cast<const D &>(*this))->get_ExpirationTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> impl_IMicrosoftAccountMultiFactorGetSessionsResult<D>::Sessions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> value;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorGetSessionsResult &>(static_cast<const D &>(*this))->get_Sessions(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse impl_IMicrosoftAccountMultiFactorGetSessionsResult<D>::ServiceResponse() const
{
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse value {};
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorGetSessionsResult &>(static_cast<const D &>(*this))->get_ServiceResponse(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> impl_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo<D>::Sessions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> value;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo &>(static_cast<const D &>(*this))->get_Sessions(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo<D>::UnregisteredAccounts() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo &>(static_cast<const D &>(*this))->get_UnregisteredAccounts(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse impl_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo<D>::ServiceResponse() const
{
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse value {};
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo &>(static_cast<const D &>(*this))->get_ServiceResponse(&value));
    return value;
}

template <typename D> hstring impl_IMicrosoftAccountMultiFactorOneTimeCodedInfo<D>::Code() const
{
    hstring value;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorOneTimeCodedInfo &>(static_cast<const D &>(*this))->get_Code(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMicrosoftAccountMultiFactorOneTimeCodedInfo<D>::TimeInterval() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorOneTimeCodedInfo &>(static_cast<const D &>(*this))->get_TimeInterval(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMicrosoftAccountMultiFactorOneTimeCodedInfo<D>::TimeToLive() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorOneTimeCodedInfo &>(static_cast<const D &>(*this))->get_TimeToLive(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse impl_IMicrosoftAccountMultiFactorOneTimeCodedInfo<D>::ServiceResponse() const
{
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse value {};
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorOneTimeCodedInfo &>(static_cast<const D &>(*this))->get_ServiceResponse(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo> impl_IMicrosoftAccountMultiFactorAuthenticationManager<D>::GetOneTimePassCodeAsync(hstring_ref userAccountId, uint32_t codeLength) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo> asyncOperation;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorAuthenticationManager &>(static_cast<const D &>(*this))->abi_GetOneTimePassCodeAsync(get(userAccountId), codeLength, put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> impl_IMicrosoftAccountMultiFactorAuthenticationManager<D>::AddDeviceAsync(hstring_ref userAccountId, hstring_ref authenticationToken, hstring_ref wnsChannelId) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorAuthenticationManager &>(static_cast<const D &>(*this))->abi_AddDeviceAsync(get(userAccountId), get(authenticationToken), get(wnsChannelId), put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> impl_IMicrosoftAccountMultiFactorAuthenticationManager<D>::RemoveDeviceAsync(hstring_ref userAccountId) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorAuthenticationManager &>(static_cast<const D &>(*this))->abi_RemoveDeviceAsync(get(userAccountId), put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> impl_IMicrosoftAccountMultiFactorAuthenticationManager<D>::UpdateWnsChannelAsync(hstring_ref userAccountId, hstring_ref channelUri) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorAuthenticationManager &>(static_cast<const D &>(*this))->abi_UpdateWnsChannelAsync(get(userAccountId), get(channelUri), put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult> impl_IMicrosoftAccountMultiFactorAuthenticationManager<D>::GetSessionsAsync(const Windows::Foundation::Collections::IIterable<hstring> & userAccountIdList) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult> asyncOperation;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorAuthenticationManager &>(static_cast<const D &>(*this))->abi_GetSessionsAsync(get(userAccountIdList), put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> impl_IMicrosoftAccountMultiFactorAuthenticationManager<D>::GetSessionsAndUnregisteredAccountsAsync(const Windows::Foundation::Collections::IIterable<hstring> & userAccountIdList) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> asyncOperation;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorAuthenticationManager &>(static_cast<const D &>(*this))->abi_GetSessionsAndUnregisteredAccountsAsync(get(userAccountIdList), put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> impl_IMicrosoftAccountMultiFactorAuthenticationManager<D>::ApproveSessionAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus sessionAuthentictionStatus, const Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo & authenticationSessionInfo) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorAuthenticationManager &>(static_cast<const D &>(*this))->abi_ApproveSessionUsingAuthSessionInfoAsync(sessionAuthentictionStatus, get(authenticationSessionInfo), put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> impl_IMicrosoftAccountMultiFactorAuthenticationManager<D>::ApproveSessionAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus sessionAuthentictionStatus, hstring_ref userAccountId, hstring_ref sessionId, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType sessionAuthenticationType) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorAuthenticationManager &>(static_cast<const D &>(*this))->abi_ApproveSessionAsync(sessionAuthentictionStatus, get(userAccountId), get(sessionId), sessionAuthenticationType, put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> impl_IMicrosoftAccountMultiFactorAuthenticationManager<D>::DenySessionAsync(const Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo & authenticationSessionInfo) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorAuthenticationManager &>(static_cast<const D &>(*this))->abi_DenySessionUsingAuthSessionInfoAsync(get(authenticationSessionInfo), put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> impl_IMicrosoftAccountMultiFactorAuthenticationManager<D>::DenySessionAsync(hstring_ref userAccountId, hstring_ref sessionId, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType sessionAuthenticationType) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation;
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorAuthenticationManager &>(static_cast<const D &>(*this))->abi_DenySessionAsync(get(userAccountId), get(sessionId), sessionAuthenticationType, put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager impl_IMicrosoftAccountMultiFactorAuthenticatorStatics<D>::Current() const
{
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager value { nullptr };
    check_hresult(static_cast<const IMicrosoftAccountMultiFactorAuthenticatorStatics &>(static_cast<const D &>(*this))->get_Current(put(value)));
    return value;
}

inline Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager MicrosoftAccountMultiFactorAuthenticationManager::Current()
{
    return get_activation_factory<MicrosoftAccountMultiFactorAuthenticationManager, IMicrosoftAccountMultiFactorAuthenticatorStatics>().Current();
}

}

}
