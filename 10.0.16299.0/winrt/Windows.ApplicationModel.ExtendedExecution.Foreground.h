// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.ApplicationModel.ExtendedExecution.Foreground.2.h"
#include "winrt/Windows.ApplicationModel.ExtendedExecution.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedReason consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundRevokedEventArgs<D>::Reason() const noexcept
{
    Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedReason value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Description() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Description(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->put_Description(get_abi(value)));
}

template <typename D> event_token consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Revoked(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->add_Revoked(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession> consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Revoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession>(this, &abi_t<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession>::remove_Revoked, Revoked(handler));
}

template <typename D> void consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Revoked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->remove_Revoked(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult> consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::RequestExtensionAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->RequestExtensionAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Reason() const noexcept
{
    Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>::Reason(Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession)->put_Reason(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs> : produce_base<D, Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs>
{
    HRESULT __stdcall get_Reason(Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedReason* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reason());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession> : produce_base<D, Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession>
{
    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Description());
        return S_OK;
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Description(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall add_Revoked(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Revoked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Revoked(event_token token) noexcept final
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

    HRESULT __stdcall RequestExtensionAsync(::IUnknown** operation) noexcept final
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

    HRESULT __stdcall get_Reason(Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Reason());
        return S_OK;
    }

    HRESULT __stdcall put_Reason(Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Reason(*reinterpret_cast<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason const*>(&value));
        return S_OK;
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ExtendedExecution::Foreground {

inline ExtendedExecutionForegroundSession::ExtendedExecutionForegroundSession() :
    ExtendedExecutionForegroundSession(activate_instance<ExtendedExecutionForegroundSession>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession> {};

template<> struct hash<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundSession> {};

}

WINRT_WARNING_POP
