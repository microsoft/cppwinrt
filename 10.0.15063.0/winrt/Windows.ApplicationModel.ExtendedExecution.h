// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.ApplicationModel.ExtendedExecution.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionRevokedEventArgs<D>::Reason() const
{
    Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession<D>::Reason() const
{
    Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession<D>::Reason(Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession)->put_Reason(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession)->put_Description(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession<D>::PercentProgress() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession)->get_PercentProgress(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession<D>::PercentProgress(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession)->put_PercentProgress(value));
}

template <typename D> event_token consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession<D>::Revoked(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession)->add_Revoked(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession> consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession<D>::Revoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>(this, &abi_t<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>::remove_Revoked, Revoked(handler));
}

template <typename D> void consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession<D>::Revoked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession)->remove_Revoked(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession<D>::RequestExtensionAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession)->RequestExtensionAsync(put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs> : produce_base<D, Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs>
{
    HRESULT __stdcall get_Reason(abi_t<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Reason());
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
    HRESULT __stdcall get_Reason(abi_t<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Reason(abi_t<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reason(*reinterpret_cast<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PercentProgress(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PercentProgress());
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
            typename D::abi_guard guard(this->shim());
            this->shim().PercentProgress(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Revoked(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Revoked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Revoked(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Revoked(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestExtensionAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestExtensionAsync());
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

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ExtendedExecution {

inline ExtendedExecutionSession::ExtendedExecutionSession() :
    ExtendedExecutionSession(activate_instance<ExtendedExecutionSession>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession> {};

template<> struct hash<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession> {};

}

WINRT_WARNING_POP
