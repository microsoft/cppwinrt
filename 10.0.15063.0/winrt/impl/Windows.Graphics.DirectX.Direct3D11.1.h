// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.DirectX.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.0.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11 {

struct WINRT_EBO IDirect3DDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDirect3DDevice>,
    impl::require<IDirect3DDevice, Windows::Foundation::IClosable>
{
    IDirect3DDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDirect3DSurface :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDirect3DSurface>,
    impl::require<IDirect3DSurface, Windows::Foundation::IClosable>
{
    IDirect3DSurface(std::nullptr_t = nullptr) noexcept {}
};

}
