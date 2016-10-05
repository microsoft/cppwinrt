// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.ExtendedExecution.Foreground.3.h"
#include "Windows.ApplicationModel.ExtendedExecution.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs> : produce_base<D, Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs>
{
    HRESULT __stdcall get_Reason(Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedReason * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession> : produce_base<D, Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession>
{
    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Description(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Revoked(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Revoked(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Revoked(event_token token) noexcept override
    {
        try
        {
            this->shim().Revoked(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestExtensionAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestExtensionAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Reason(Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Reason(Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason value) noexcept override
    {
        try
        {
            this->shim().Reason(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::ExtendedExecution::Foreground {

template <typename D> Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedReason impl_IExtendedExecutionForegroundRevokedEventArgs<D>::Reason() const
{
    Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedReason value {};
    check_hresult(static_cast<const IExtendedExecutionForegroundRevokedEventArgs &>(static_cast<const D &>(*this))->get_Reason(&value));
    return value;
}

template <typename D> hstring impl_IExtendedExecutionForegroundSession<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IExtendedExecutionForegroundSession &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> void impl_IExtendedExecutionForegroundSession<D>::Description(hstring_ref value) const
{
    check_hresult(static_cast<const IExtendedExecutionForegroundSession &>(static_cast<const D &>(*this))->put_Description(get(value)));
}

template <typename D> event_token impl_IExtendedExecutionForegroundSession<D>::Revoked(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IExtendedExecutionForegroundSession &>(static_cast<const D &>(*this))->add_Revoked(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IExtendedExecutionForegroundSession> impl_IExtendedExecutionForegroundSession<D>::Revoked(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IExtendedExecutionForegroundSession>(this, &ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession::remove_Revoked, Revoked(handler));
}

template <typename D> void impl_IExtendedExecutionForegroundSession<D>::Revoked(event_token token) const
{
    check_hresult(static_cast<const IExtendedExecutionForegroundSession &>(static_cast<const D &>(*this))->remove_Revoked(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult> impl_IExtendedExecutionForegroundSession<D>::RequestExtensionAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult> operation;
    check_hresult(static_cast<const IExtendedExecutionForegroundSession &>(static_cast<const D &>(*this))->abi_RequestExtensionAsync(put(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason impl_IExtendedExecutionForegroundSession<D>::Reason() const
{
    Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason value {};
    check_hresult(static_cast<const IExtendedExecutionForegroundSession &>(static_cast<const D &>(*this))->get_Reason(&value));
    return value;
}

template <typename D> void impl_IExtendedExecutionForegroundSession<D>::Reason(Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason value) const
{
    check_hresult(static_cast<const IExtendedExecutionForegroundSession &>(static_cast<const D &>(*this))->put_Reason(value));
}

inline ExtendedExecutionForegroundSession::ExtendedExecutionForegroundSession() :
    ExtendedExecutionForegroundSession(activate_instance<ExtendedExecutionForegroundSession>())
{}

}

}
