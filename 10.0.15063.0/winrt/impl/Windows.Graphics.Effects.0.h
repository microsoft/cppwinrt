// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics::Effects {

struct IGraphicsEffect;
struct IGraphicsEffectSource;

}

namespace winrt::impl {

template <> struct category<Windows::Graphics::Effects::IGraphicsEffect>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Effects::IGraphicsEffectSource>{ using type = interface_category; };
template <> struct name<Windows::Graphics::Effects::IGraphicsEffect>{ static constexpr auto & value{ L"Windows.Graphics.Effects.IGraphicsEffect" }; };
template <> struct name<Windows::Graphics::Effects::IGraphicsEffectSource>{ static constexpr auto & value{ L"Windows.Graphics.Effects.IGraphicsEffectSource" }; };
template <> struct guid<Windows::Graphics::Effects::IGraphicsEffect>{ static constexpr GUID value{ 0xCB51C0CE,0x8FE6,0x4636,{ 0xB2,0x02,0x86,0x1F,0xAA,0x07,0xD8,0xF3 } }; };
template <> struct guid<Windows::Graphics::Effects::IGraphicsEffectSource>{ static constexpr GUID value{ 0x2D8F9DDC,0x4339,0x4EB9,{ 0x92,0x16,0xF9,0xDE,0xB7,0x56,0x58,0xA2 } }; };

template <typename D>
struct consume_Windows_Graphics_Effects_IGraphicsEffect
{
    hstring Name() const;
    void Name(param::hstring const& name) const;
};
template <> struct consume<Windows::Graphics::Effects::IGraphicsEffect> { template <typename D> using type = consume_Windows_Graphics_Effects_IGraphicsEffect<D>; };

template <typename D>
struct consume_Windows_Graphics_Effects_IGraphicsEffectSource
{
};
template <> struct consume<Windows::Graphics::Effects::IGraphicsEffectSource> { template <typename D> using type = consume_Windows_Graphics_Effects_IGraphicsEffectSource<D>; };

template <> struct abi<Windows::Graphics::Effects::IGraphicsEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* name) = 0;
    virtual HRESULT __stdcall put_Name(HSTRING name) = 0;
};};

template <> struct abi<Windows::Graphics::Effects::IGraphicsEffectSource>{ struct type : ::IInspectable
{
};};

}
