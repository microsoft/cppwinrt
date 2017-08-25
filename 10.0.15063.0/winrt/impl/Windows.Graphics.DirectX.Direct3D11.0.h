// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX {

enum class DirectXPixelFormat;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11 {

enum class Direct3DBindings : unsigned
{
    VertexBuffer = 0x1,
    IndexBuffer = 0x2,
    ConstantBuffer = 0x4,
    ShaderResource = 0x8,
    StreamOutput = 0x10,
    RenderTarget = 0x20,
    DepthStencil = 0x40,
    UnorderedAccess = 0x80,
    Decoder = 0x200,
    VideoEncoder = 0x400,
};

DEFINE_ENUM_FLAG_OPERATORS(Direct3DBindings)

enum class Direct3DUsage
{
    Default = 0,
    Immutable = 1,
    Dynamic = 2,
    Staging = 3,
};

struct IDirect3DDevice;
struct IDirect3DSurface;
struct Direct3DMultisampleDescription;
struct Direct3DSurfaceDescription;

}

namespace winrt::impl {

template <> struct category<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>{ using type = interface_category; };
template <> struct category<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>{ using type = interface_category; };
template <> struct category<Windows::Graphics::DirectX::Direct3D11::Direct3DBindings>{ using type = enum_category; };
template <> struct category<Windows::Graphics::DirectX::Direct3D11::Direct3DUsage>{ using type = enum_category; };
template <> struct category<Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>{ using type = struct_category<int32_t,int32_t>; };
template <> struct category<Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>{ using type = struct_category<int32_t,int32_t,Windows::Graphics::DirectX::DirectXPixelFormat,Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>; };
template <> struct name<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>{ static constexpr auto & value{ L"Windows.Graphics.DirectX.Direct3D11.IDirect3DDevice" }; };
template <> struct name<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>{ static constexpr auto & value{ L"Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface" }; };
template <> struct name<Windows::Graphics::DirectX::Direct3D11::Direct3DBindings>{ static constexpr auto & value{ L"Windows.Graphics.DirectX.Direct3D11.Direct3DBindings" }; };
template <> struct name<Windows::Graphics::DirectX::Direct3D11::Direct3DUsage>{ static constexpr auto & value{ L"Windows.Graphics.DirectX.Direct3D11.Direct3DUsage" }; };
template <> struct name<Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>{ static constexpr auto & value{ L"Windows.Graphics.DirectX.Direct3D11.Direct3DMultisampleDescription" }; };
template <> struct name<Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>{ static constexpr auto & value{ L"Windows.Graphics.DirectX.Direct3D11.Direct3DSurfaceDescription" }; };
template <> struct guid<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>{ static constexpr GUID value{ 0xA37624AB,0x8D5F,0x4650,{ 0x9D,0x3E,0x9E,0xAE,0x3D,0x9B,0xC6,0x70 } }; };
template <> struct guid<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>{ static constexpr GUID value{ 0x0BF4A146,0x13C1,0x4694,{ 0xBE,0xE3,0x7A,0xBF,0x15,0xEA,0xF5,0x86 } }; };

template <typename D>
struct consume_Windows_Graphics_DirectX_Direct3D11_IDirect3DDevice
{
    void Trim() const;
};
template <> struct consume<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> { template <typename D> using type = consume_Windows_Graphics_DirectX_Direct3D11_IDirect3DDevice<D>; };

template <typename D>
struct consume_Windows_Graphics_DirectX_Direct3D11_IDirect3DSurface
{
    Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription Description() const;
};
template <> struct consume<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> { template <typename D> using type = consume_Windows_Graphics_DirectX_Direct3D11_IDirect3DSurface<D>; };

template <> struct abi<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Trim() = 0;
};};

template <> struct abi<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Description(abi_t<Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>* value) = 0;
};};

}
