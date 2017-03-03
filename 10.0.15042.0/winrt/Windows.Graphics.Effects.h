// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Graphics.Effects.3.h"
#include "Windows.Graphics.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Graphics::Effects::IGraphicsEffect> : produce_base<D, Windows::Graphics::Effects::IGraphicsEffect>
{
    HRESULT __stdcall get_Name(impl::abi_arg_out<hstring> name) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *name = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *name = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(impl::abi_arg_in<hstring> name) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    check_hresult(WINRT_SHIM(IGraphicsEffect)->get_Name(put_abi(name)));
    return name;
}

template <typename D> void impl_IGraphicsEffect<D>::Name(hstring_view name) const
{
    check_hresult(WINRT_SHIM(IGraphicsEffect)->put_Name(get_abi(name)));
}

}

}

template<>
struct std::hash<winrt::Windows::Graphics::Effects::IGraphicsEffect>
{
    size_t operator()(const winrt::Windows::Graphics::Effects::IGraphicsEffect & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Effects::IGraphicsEffectSource>
{
    size_t operator()(const winrt::Windows::Graphics::Effects::IGraphicsEffectSource & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
