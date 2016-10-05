// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.ExtendedExecution.3.h"
#include "Windows.ApplicationModel.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs> : produce_base<D, Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs>
{
    HRESULT __stdcall get_Reason(Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason * value) noexcept override
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
struct produce<D, Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession> : produce_base<D, Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>
{
    HRESULT __stdcall get_Reason(Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason * value) noexcept override
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

    HRESULT __stdcall put_Reason(Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason value) noexcept override
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

    HRESULT __stdcall get_PercentProgress(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PercentProgress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PercentProgress(uint32_t value) noexcept override
    {
        try
        {
            this->shim().PercentProgress(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Revoked(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Revoked(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> *>(&handler)));
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

    HRESULT __stdcall abi_RequestExtensionAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult>> operation) noexcept override
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
};

}

namespace Windows::ApplicationModel::ExtendedExecution {

template <typename D> Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason impl_IExtendedExecutionRevokedEventArgs<D>::Reason() const
{
    Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason value {};
    check_hresult(static_cast<const IExtendedExecutionRevokedEventArgs &>(static_cast<const D &>(*this))->get_Reason(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason impl_IExtendedExecutionSession<D>::Reason() const
{
    Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason value {};
    check_hresult(static_cast<const IExtendedExecutionSession &>(static_cast<const D &>(*this))->get_Reason(&value));
    return value;
}

template <typename D> void impl_IExtendedExecutionSession<D>::Reason(Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason value) const
{
    check_hresult(static_cast<const IExtendedExecutionSession &>(static_cast<const D &>(*this))->put_Reason(value));
}

template <typename D> hstring impl_IExtendedExecutionSession<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IExtendedExecutionSession &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> void impl_IExtendedExecutionSession<D>::Description(hstring_ref value) const
{
    check_hresult(static_cast<const IExtendedExecutionSession &>(static_cast<const D &>(*this))->put_Description(get(value)));
}

template <typename D> uint32_t impl_IExtendedExecutionSession<D>::PercentProgress() const
{
    uint32_t value {};
    check_hresult(static_cast<const IExtendedExecutionSession &>(static_cast<const D &>(*this))->get_PercentProgress(&value));
    return value;
}

template <typename D> void impl_IExtendedExecutionSession<D>::PercentProgress(uint32_t value) const
{
    check_hresult(static_cast<const IExtendedExecutionSession &>(static_cast<const D &>(*this))->put_PercentProgress(value));
}

template <typename D> event_token impl_IExtendedExecutionSession<D>::Revoked(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IExtendedExecutionSession &>(static_cast<const D &>(*this))->add_Revoked(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IExtendedExecutionSession> impl_IExtendedExecutionSession<D>::Revoked(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IExtendedExecutionSession>(this, &ABI::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession::remove_Revoked, Revoked(handler));
}

template <typename D> void impl_IExtendedExecutionSession<D>::Revoked(event_token token) const
{
    check_hresult(static_cast<const IExtendedExecutionSession &>(static_cast<const D &>(*this))->remove_Revoked(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> impl_IExtendedExecutionSession<D>::RequestExtensionAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> operation;
    check_hresult(static_cast<const IExtendedExecutionSession &>(static_cast<const D &>(*this))->abi_RequestExtensionAsync(put(operation)));
    return operation;
}

inline ExtendedExecutionSession::ExtendedExecutionSession() :
    ExtendedExecutionSession(activate_instance<ExtendedExecutionSession>())
{}

}

}
