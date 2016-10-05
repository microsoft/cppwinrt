// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

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
            *value = detach(this->shim().IsRemote());
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
    check_hresult(static_cast<const IInteractiveSessionStatics &>(static_cast<const D &>(*this))->get_IsRemote(&value));
    return value;
}

inline bool InteractiveSession::IsRemote()
{
    return get_activation_factory<InteractiveSession, IInteractiveSessionStatics>().IsRemote();
}

}

}
