// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Effects.0.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Effects {

struct WINRT_EBO IGraphicsEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGraphicsEffect>,
    impl::require<IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IGraphicsEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGraphicsEffectSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGraphicsEffectSource>
{
    IGraphicsEffectSource(std::nullptr_t = nullptr) noexcept {}
};

}
