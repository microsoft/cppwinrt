// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Effects.1.h"
#include "winrt/impl/Windows.UI.Composition.Effects.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Effects {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Effects {

struct WINRT_EBO SceneLightingEffect :
    Windows::UI::Composition::Effects::ISceneLightingEffect,
    impl::require<SceneLightingEffect, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource, Windows::UI::Composition::Effects::ISceneLightingEffect2>
{
    SceneLightingEffect(std::nullptr_t) noexcept {}
    SceneLightingEffect();
};

}
