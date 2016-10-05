// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Composition.Effects.0.h"
#include "Windows.Graphics.Effects.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Composition::Effects {

struct __declspec(uuid("91bb5e52-95d1-4f8b-9a5a-6408b24b8c6a")) __declspec(novtable) ISceneLightingEffect : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AmbientAmount(float * value) = 0;
    virtual HRESULT __stdcall put_AmbientAmount(float value) = 0;
    virtual HRESULT __stdcall get_DiffuseAmount(float * value) = 0;
    virtual HRESULT __stdcall put_DiffuseAmount(float value) = 0;
    virtual HRESULT __stdcall get_NormalMapSource(Windows::Graphics::Effects::IGraphicsEffectSource ** value) = 0;
    virtual HRESULT __stdcall put_NormalMapSource(Windows::Graphics::Effects::IGraphicsEffectSource * value) = 0;
    virtual HRESULT __stdcall get_SpecularAmount(float * value) = 0;
    virtual HRESULT __stdcall put_SpecularAmount(float value) = 0;
    virtual HRESULT __stdcall get_SpecularShine(float * value) = 0;
    virtual HRESULT __stdcall put_SpecularShine(float value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Composition::Effects::SceneLightingEffect> { using default_interface = Windows::UI::Composition::Effects::ISceneLightingEffect; };

}

namespace Windows::UI::Composition::Effects {

template <typename T> struct impl_ISceneLightingEffect;

}

namespace impl {

template <> struct traits<Windows::UI::Composition::Effects::ISceneLightingEffect>
{
    using abi = ABI::Windows::UI::Composition::Effects::ISceneLightingEffect;
    template <typename D> using consume = Windows::UI::Composition::Effects::impl_ISceneLightingEffect<D>;
};

template <> struct traits<Windows::UI::Composition::Effects::SceneLightingEffect>
{
    using abi = ABI::Windows::UI::Composition::Effects::SceneLightingEffect;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.Effects.SceneLightingEffect"; }
};

}

}
