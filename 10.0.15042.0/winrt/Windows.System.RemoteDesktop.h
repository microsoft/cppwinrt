// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.System.RemoteDesktop.3.h"
#include "Windows.System.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::System::RemoteDesktop::IInteractiveSessionStatics> : produce_base<D, Windows::System::RemoteDesktop::IInteractiveSessionStatics>
{
    HRESULT __stdcall get_IsRemote(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRemote());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::System::RemoteDesktop {

template <typename D> bool impl_IInteractiveSessionStatics<D>::IsRemote() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IInteractiveSessionStatics)->get_IsRemote(&value));
    return value;
}

inline bool InteractiveSession::IsRemote()
{
    return get_activation_factory<InteractiveSession, IInteractiveSessionStatics>().IsRemote();
}

}

}

template<>
struct std::hash<winrt::Windows::System::RemoteDesktop::IInteractiveSessionStatics>
{
    size_t operator()(const winrt::Windows::System::RemoteDesktop::IInteractiveSessionStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
