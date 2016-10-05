// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Graphics.Effects.3.h"
#include "internal/Windows.UI.Composition.Effects.3.h"
#include "Windows.UI.Composition.h"
#include "Windows.Graphics.Effects.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Composition::Effects::ISceneLightingEffect> : produce_base<D, Windows::UI::Composition::Effects::ISceneLightingEffect>
{
    HRESULT __stdcall get_AmbientAmount(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AmbientAmount());
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
            this->shim().AmbientAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DiffuseAmount(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DiffuseAmount());
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
            this->shim().DiffuseAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalMapSource(abi_arg_out<Windows::Graphics::Effects::IGraphicsEffectSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NormalMapSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NormalMapSource(abi_arg_in<Windows::Graphics::Effects::IGraphicsEffectSource> value) noexcept override
    {
        try
        {
            this->shim().NormalMapSource(*reinterpret_cast<const Windows::Graphics::Effects::IGraphicsEffectSource *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpecularAmount(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SpecularAmount());
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
            this->shim().SpecularAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpecularShine(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SpecularShine());
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

namespace Windows::UI::Composition::Effects {

template <typename D> float impl_ISceneLightingEffect<D>::AmbientAmount() const
{
    float value {};
    check_hresult(static_cast<const ISceneLightingEffect &>(static_cast<const D &>(*this))->get_AmbientAmount(&value));
    return value;
}

template <typename D> void impl_ISceneLightingEffect<D>::AmbientAmount(float value) const
{
    check_hresult(static_cast<const ISceneLightingEffect &>(static_cast<const D &>(*this))->put_AmbientAmount(value));
}

template <typename D> float impl_ISceneLightingEffect<D>::DiffuseAmount() const
{
    float value {};
    check_hresult(static_cast<const ISceneLightingEffect &>(static_cast<const D &>(*this))->get_DiffuseAmount(&value));
    return value;
}

template <typename D> void impl_ISceneLightingEffect<D>::DiffuseAmount(float value) const
{
    check_hresult(static_cast<const ISceneLightingEffect &>(static_cast<const D &>(*this))->put_DiffuseAmount(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource impl_ISceneLightingEffect<D>::NormalMapSource() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource value;
    check_hresult(static_cast<const ISceneLightingEffect &>(static_cast<const D &>(*this))->get_NormalMapSource(put(value)));
    return value;
}

template <typename D> void impl_ISceneLightingEffect<D>::NormalMapSource(const Windows::Graphics::Effects::IGraphicsEffectSource & value) const
{
    check_hresult(static_cast<const ISceneLightingEffect &>(static_cast<const D &>(*this))->put_NormalMapSource(get(value)));
}

template <typename D> float impl_ISceneLightingEffect<D>::SpecularAmount() const
{
    float value {};
    check_hresult(static_cast<const ISceneLightingEffect &>(static_cast<const D &>(*this))->get_SpecularAmount(&value));
    return value;
}

template <typename D> void impl_ISceneLightingEffect<D>::SpecularAmount(float value) const
{
    check_hresult(static_cast<const ISceneLightingEffect &>(static_cast<const D &>(*this))->put_SpecularAmount(value));
}

template <typename D> float impl_ISceneLightingEffect<D>::SpecularShine() const
{
    float value {};
    check_hresult(static_cast<const ISceneLightingEffect &>(static_cast<const D &>(*this))->get_SpecularShine(&value));
    return value;
}

template <typename D> void impl_ISceneLightingEffect<D>::SpecularShine(float value) const
{
    check_hresult(static_cast<const ISceneLightingEffect &>(static_cast<const D &>(*this))->put_SpecularShine(value));
}

inline SceneLightingEffect::SceneLightingEffect() :
    SceneLightingEffect(activate_instance<SceneLightingEffect>())
{}

}

}
