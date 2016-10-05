// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Core.AnimationMetrics.3.h"
#include "Windows.UI.Core.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Core::AnimationMetrics::IAnimationDescription> : produce_base<D, Windows::UI::Core::AnimationMetrics::IAnimationDescription>
{
    HRESULT __stdcall get_Animations(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Core::AnimationMetrics::IPropertyAnimation>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Animations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StaggerDelay(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StaggerDelay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StaggerDelayFactor(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StaggerDelayFactor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DelayLimit(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DelayLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZOrder(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZOrder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory> : produce_base<D, Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory>
{
    HRESULT __stdcall abi_CreateInstance(Windows::UI::Core::AnimationMetrics::AnimationEffect effect, Windows::UI::Core::AnimationMetrics::AnimationEffectTarget target, abi_arg_out<Windows::UI::Core::AnimationMetrics::IAnimationDescription> animation) noexcept override
    {
        try
        {
            *animation = detach(this->shim().CreateInstance(effect, target));
            return S_OK;
        }
        catch (...)
        {
            *animation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::AnimationMetrics::IOpacityAnimation> : produce_base<D, Windows::UI::Core::AnimationMetrics::IOpacityAnimation>
{
    HRESULT __stdcall get_InitialOpacity(abi_arg_out<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InitialOpacity());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FinalOpacity(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FinalOpacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::AnimationMetrics::IPropertyAnimation> : produce_base<D, Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
{
    HRESULT __stdcall get_Type(Windows::UI::Core::AnimationMetrics::PropertyAnimationType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delay(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Delay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Control1(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Control1());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Control2(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Control2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::AnimationMetrics::IScaleAnimation> : produce_base<D, Windows::UI::Core::AnimationMetrics::IScaleAnimation>
{
    HRESULT __stdcall get_InitialScaleX(abi_arg_out<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InitialScaleX());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InitialScaleY(abi_arg_out<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InitialScaleY());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FinalScaleX(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FinalScaleX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FinalScaleY(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FinalScaleY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedOrigin(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NormalizedOrigin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Core::AnimationMetrics {

template <typename D> Windows::UI::Core::AnimationMetrics::PropertyAnimationType impl_IPropertyAnimation<D>::Type() const
{
    Windows::UI::Core::AnimationMetrics::PropertyAnimationType value {};
    check_hresult(static_cast<const IPropertyAnimation &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPropertyAnimation<D>::Delay() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPropertyAnimation &>(static_cast<const D &>(*this))->get_Delay(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPropertyAnimation<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPropertyAnimation &>(static_cast<const D &>(*this))->get_Duration(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IPropertyAnimation<D>::Control1() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IPropertyAnimation &>(static_cast<const D &>(*this))->get_Control1(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IPropertyAnimation<D>::Control2() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IPropertyAnimation &>(static_cast<const D &>(*this))->get_Control2(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> impl_IScaleAnimation<D>::InitialScaleX() const
{
    Windows::Foundation::IReference<float> value;
    check_hresult(static_cast<const IScaleAnimation &>(static_cast<const D &>(*this))->get_InitialScaleX(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> impl_IScaleAnimation<D>::InitialScaleY() const
{
    Windows::Foundation::IReference<float> value;
    check_hresult(static_cast<const IScaleAnimation &>(static_cast<const D &>(*this))->get_InitialScaleY(put(value)));
    return value;
}

template <typename D> float impl_IScaleAnimation<D>::FinalScaleX() const
{
    float value {};
    check_hresult(static_cast<const IScaleAnimation &>(static_cast<const D &>(*this))->get_FinalScaleX(&value));
    return value;
}

template <typename D> float impl_IScaleAnimation<D>::FinalScaleY() const
{
    float value {};
    check_hresult(static_cast<const IScaleAnimation &>(static_cast<const D &>(*this))->get_FinalScaleY(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IScaleAnimation<D>::NormalizedOrigin() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IScaleAnimation &>(static_cast<const D &>(*this))->get_NormalizedOrigin(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> impl_IOpacityAnimation<D>::InitialOpacity() const
{
    Windows::Foundation::IReference<float> value;
    check_hresult(static_cast<const IOpacityAnimation &>(static_cast<const D &>(*this))->get_InitialOpacity(put(value)));
    return value;
}

template <typename D> float impl_IOpacityAnimation<D>::FinalOpacity() const
{
    float value {};
    check_hresult(static_cast<const IOpacityAnimation &>(static_cast<const D &>(*this))->get_FinalOpacity(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Core::AnimationMetrics::IPropertyAnimation> impl_IAnimationDescription<D>::Animations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Core::AnimationMetrics::IPropertyAnimation> value;
    check_hresult(static_cast<const IAnimationDescription &>(static_cast<const D &>(*this))->get_Animations(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IAnimationDescription<D>::StaggerDelay() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IAnimationDescription &>(static_cast<const D &>(*this))->get_StaggerDelay(put(value)));
    return value;
}

template <typename D> float impl_IAnimationDescription<D>::StaggerDelayFactor() const
{
    float value {};
    check_hresult(static_cast<const IAnimationDescription &>(static_cast<const D &>(*this))->get_StaggerDelayFactor(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IAnimationDescription<D>::DelayLimit() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IAnimationDescription &>(static_cast<const D &>(*this))->get_DelayLimit(put(value)));
    return value;
}

template <typename D> int32_t impl_IAnimationDescription<D>::ZOrder() const
{
    int32_t value {};
    check_hresult(static_cast<const IAnimationDescription &>(static_cast<const D &>(*this))->get_ZOrder(&value));
    return value;
}

template <typename D> Windows::UI::Core::AnimationMetrics::AnimationDescription impl_IAnimationDescriptionFactory<D>::CreateInstance(Windows::UI::Core::AnimationMetrics::AnimationEffect effect, Windows::UI::Core::AnimationMetrics::AnimationEffectTarget target) const
{
    Windows::UI::Core::AnimationMetrics::AnimationDescription animation { nullptr };
    check_hresult(static_cast<const IAnimationDescriptionFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(effect, target, put(animation)));
    return animation;
}

inline AnimationDescription::AnimationDescription(Windows::UI::Core::AnimationMetrics::AnimationEffect effect, Windows::UI::Core::AnimationMetrics::AnimationEffectTarget target) :
    AnimationDescription(get_activation_factory<AnimationDescription, IAnimationDescriptionFactory>().CreateInstance(effect, target))
{}

}

}
