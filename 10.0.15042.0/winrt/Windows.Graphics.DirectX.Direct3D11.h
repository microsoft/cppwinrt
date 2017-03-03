// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Graphics.DirectX.Direct3D11.3.h"
#include "Windows.Graphics.DirectX.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> : produce_base<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>
{
    HRESULT __stdcall abi_Trim() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Trim();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> : produce_base<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>
{
    HRESULT __stdcall get_Description(impl::abi_arg_out<Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Graphics::DirectX::Direct3D11 {

template <typename D> void impl_IDirect3DDevice<D>::Trim() const
{
    check_hresult(WINRT_SHIM(IDirect3DDevice)->abi_Trim());
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription impl_IDirect3DSurface<D>::Description() const
{
    Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription value {};
    check_hresult(WINRT_SHIM(IDirect3DSurface)->get_Description(put_abi(value)));
    return value;
}

}

}

template<>
struct std::hash<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>
{
    size_t operator()(const winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>
{
    size_t operator()(const winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
