// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Effects.0.h"
#include "winrt/impl/Windows.UI.Composition.Effects.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Effects {

struct WINRT_EBO ISceneLightingEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISceneLightingEffect>
{
    ISceneLightingEffect(std::nullptr_t = nullptr) noexcept {}
};

}
