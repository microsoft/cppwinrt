// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.DirectX.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11 {

struct Direct3DMultisampleDescription
{
    int32_t Count;
    int32_t Quality;
};

struct Direct3DSurfaceDescription
{
    int32_t Width;
    int32_t Height;
    Windows::Graphics::DirectX::DirectXPixelFormat Format;
    Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription MultisampleDescription;
};

}
