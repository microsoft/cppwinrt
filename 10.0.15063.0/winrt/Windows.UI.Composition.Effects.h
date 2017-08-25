// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Graphics.Effects.2.h"
#include "winrt/impl/Windows.UI.Composition.Effects.2.h"
#include "winrt/Windows.UI.Composition.h"

namespace winrt::impl {

template <typename D> float consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::AmbientAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_AmbientAmount(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::AmbientAmount(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_AmbientAmount(value));
}

template <typename D> float consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::DiffuseAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_DiffuseAmount(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::DiffuseAmount(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_DiffuseAmount(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::NormalMapSource() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_NormalMapSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::NormalMapSource(Windows::Graphics::Effects::IGraphicsEffectSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_NormalMapSource(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::SpecularAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_SpecularAmount(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::SpecularAmount(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_SpecularAmount(value));
}

template <typename D> float consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::SpecularShine() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_SpecularShine(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::SpecularShine(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_SpecularShine(value));
}

template <typename D>
struct produce<D, Windows::UI::Composition::Effects::ISceneLightingEffect> : produce_base<D, Windows::UI::Composition::Effects::ISceneLightingEffect>
{
    HRESULT __stdcall get_AmbientAmount(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AmbientAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AmbientAmount(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AmbientAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DiffuseAmount(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DiffuseAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DiffuseAmount(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DiffuseAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalMapSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NormalMapSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NormalMapSource(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NormalMapSource(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpecularAmount(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpecularAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpecularAmount(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpecularAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpecularShine(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpecularShine());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpecularShine(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpecularShine(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Effects {

inline SceneLightingEffect::SceneLightingEffect() :
    SceneLightingEffect(activate_instance<SceneLightingEffect>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Composition::Effects::ISceneLightingEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Effects::ISceneLightingEffect> {};

template<> struct hash<winrt::Windows::UI::Composition::Effects::SceneLightingEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Effects::SceneLightingEffect> {};

}

WINRT_WARNING_POP
