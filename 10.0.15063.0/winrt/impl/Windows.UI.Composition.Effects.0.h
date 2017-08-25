// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics::Effects {

struct IGraphicsEffectSource;

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Effects {

struct ISceneLightingEffect;
struct SceneLightingEffect;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Composition::Effects::ISceneLightingEffect>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Effects::SceneLightingEffect>{ using type = class_category; };
template <> struct name<Windows::UI::Composition::Effects::ISceneLightingEffect>{ static constexpr auto & value{ L"Windows.UI.Composition.Effects.ISceneLightingEffect" }; };
template <> struct name<Windows::UI::Composition::Effects::SceneLightingEffect>{ static constexpr auto & value{ L"Windows.UI.Composition.Effects.SceneLightingEffect" }; };
template <> struct guid<Windows::UI::Composition::Effects::ISceneLightingEffect>{ static constexpr GUID value{ 0x91BB5E52,0x95D1,0x4F8B,{ 0x9A,0x5A,0x64,0x08,0xB2,0x4B,0x8C,0x6A } }; };
template <> struct default_interface<Windows::UI::Composition::Effects::SceneLightingEffect>{ using type = Windows::UI::Composition::Effects::ISceneLightingEffect; };

template <typename D>
struct consume_Windows_UI_Composition_Effects_ISceneLightingEffect
{
    float AmbientAmount() const;
    void AmbientAmount(float value) const;
    float DiffuseAmount() const;
    void DiffuseAmount(float value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource NormalMapSource() const;
    void NormalMapSource(Windows::Graphics::Effects::IGraphicsEffectSource const& value) const;
    float SpecularAmount() const;
    void SpecularAmount(float value) const;
    float SpecularShine() const;
    void SpecularShine(float value) const;
};
template <> struct consume<Windows::UI::Composition::Effects::ISceneLightingEffect> { template <typename D> using type = consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>; };

template <> struct abi<Windows::UI::Composition::Effects::ISceneLightingEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AmbientAmount(float* value) = 0;
    virtual HRESULT __stdcall put_AmbientAmount(float value) = 0;
    virtual HRESULT __stdcall get_DiffuseAmount(float* value) = 0;
    virtual HRESULT __stdcall put_DiffuseAmount(float value) = 0;
    virtual HRESULT __stdcall get_NormalMapSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_NormalMapSource(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SpecularAmount(float* value) = 0;
    virtual HRESULT __stdcall put_SpecularAmount(float value) = 0;
    virtual HRESULT __stdcall get_SpecularShine(float* value) = 0;
    virtual HRESULT __stdcall put_SpecularShine(float value) = 0;
};};

}
