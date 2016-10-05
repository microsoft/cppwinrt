// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Graphics.DirectX.Direct3D11.1.h"
#include "Windows.Graphics.DirectX.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Graphics::DirectX::Direct3D11 {

template <typename D>
struct WINRT_EBO impl_IDirect3DDevice
{
    void Trim() const;
};

template <typename D>
struct WINRT_EBO impl_IDirect3DSurface
{
    Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription Description() const;
};

struct IDirect3DDevice :
    Windows::IInspectable,
    impl::consume<IDirect3DDevice>,
    impl::require<IDirect3DDevice, Windows::Foundation::IClosable>
{
    IDirect3DDevice(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDirect3DDevice>(m_ptr); }
};

struct IDirect3DSurface :
    Windows::IInspectable,
    impl::consume<IDirect3DSurface>,
    impl::require<IDirect3DSurface, Windows::Foundation::IClosable>
{
    IDirect3DSurface(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDirect3DSurface>(m_ptr); }
};

}

}
