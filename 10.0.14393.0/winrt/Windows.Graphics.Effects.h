// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Graphics.Effects.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Graphics::Effects::IGraphicsEffect> : produce_base<D, Windows::Graphics::Effects::IGraphicsEffect>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> name) noexcept override
    {
        try
        {
            *name = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *name = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(abi_arg_in<hstring> name) noexcept override
    {
        try
        {
            this->shim().Name(*reinterpret_cast<const hstring *>(&name));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Effects::IGraphicsEffectSource> : produce_base<D, Windows::Graphics::Effects::IGraphicsEffectSource>
{};

}

namespace Windows::Graphics::Effects {

template <typename D> hstring impl_IGraphicsEffect<D>::Name() const
{
    hstring name;
    check_hresult(static_cast<const IGraphicsEffect &>(static_cast<const D &>(*this))->get_Name(put(name)));
    return name;
}

template <typename D> void impl_IGraphicsEffect<D>::Name(hstring_ref name) const
{
    check_hresult(static_cast<const IGraphicsEffect &>(static_cast<const D &>(*this))->put_Name(get(name)));
}

}

}
