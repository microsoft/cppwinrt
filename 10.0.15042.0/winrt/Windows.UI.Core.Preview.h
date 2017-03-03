// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.Core.Preview.3.h"
#include "Windows.UI.Core.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs> : produce_base<D, Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::Preview::ISystemNavigationManagerPreview> : produce_base<D, Windows::UI::Core::Preview::ISystemNavigationManagerPreview>
{
    HRESULT __stdcall add_CloseRequested(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CloseRequested(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CloseRequested(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CloseRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics> : produce_base<D, Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(impl::abi_arg_out<Windows::UI::Core::Preview::ISystemNavigationManagerPreview> loader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loader = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *loader = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Core::Preview {

template <typename D> event_token impl_ISystemNavigationManagerPreview<D>::CloseRequested(const Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(ISystemNavigationManagerPreview)->add_CloseRequested(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<ISystemNavigationManagerPreview> impl_ISystemNavigationManagerPreview<D>::CloseRequested(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISystemNavigationManagerPreview>(this, &ABI::Windows::UI::Core::Preview::ISystemNavigationManagerPreview::remove_CloseRequested, CloseRequested(handler));
}

template <typename D> void impl_ISystemNavigationManagerPreview<D>::CloseRequested(event_token token) const
{
    check_hresult(WINRT_SHIM(ISystemNavigationManagerPreview)->remove_CloseRequested(token));
}

template <typename D> Windows::UI::Core::Preview::SystemNavigationManagerPreview impl_ISystemNavigationManagerPreviewStatics<D>::GetForCurrentView() const
{
    Windows::UI::Core::Preview::SystemNavigationManagerPreview loader { nullptr };
    check_hresult(WINRT_SHIM(ISystemNavigationManagerPreviewStatics)->abi_GetForCurrentView(put_abi(loader)));
    return loader;
}

template <typename D> bool impl_ISystemNavigationCloseRequestedPreviewEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ISystemNavigationCloseRequestedPreviewEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void impl_ISystemNavigationCloseRequestedPreviewEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(ISystemNavigationCloseRequestedPreviewEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral impl_ISystemNavigationCloseRequestedPreviewEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result { nullptr };
    check_hresult(WINRT_SHIM(ISystemNavigationCloseRequestedPreviewEventArgs)->abi_GetDeferral(put_abi(result)));
    return result;
}

inline Windows::UI::Core::Preview::SystemNavigationManagerPreview SystemNavigationManagerPreview::GetForCurrentView()
{
    return get_activation_factory<SystemNavigationManagerPreview, ISystemNavigationManagerPreviewStatics>().GetForCurrentView();
}

}

}

template<>
struct std::hash<winrt::Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs>
{
    size_t operator()(const winrt::Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Core::Preview::ISystemNavigationManagerPreview>
{
    size_t operator()(const winrt::Windows::UI::Core::Preview::ISystemNavigationManagerPreview & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>
{
    size_t operator()(const winrt::Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs>
{
    size_t operator()(const winrt::Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Core::Preview::SystemNavigationManagerPreview>
{
    size_t operator()(const winrt::Windows::UI::Core::Preview::SystemNavigationManagerPreview & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
