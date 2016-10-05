// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Graphics.Effects.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Graphics::Effects {

template <typename D>
struct WINRT_EBO impl_IGraphicsEffect
{
    hstring Name() const;
    void Name(hstring_ref name) const;
};

template <typename D>
struct WINRT_EBO impl_IGraphicsEffectSource
{
};

struct IGraphicsEffect :
    Windows::IInspectable,
    impl::consume<IGraphicsEffect>,
    impl::require<IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IGraphicsEffect(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGraphicsEffect>(m_ptr); }
};

struct IGraphicsEffectSource :
    Windows::IInspectable,
    impl::consume<IGraphicsEffectSource>
{
    IGraphicsEffectSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGraphicsEffectSource>(m_ptr); }
};

}

}
