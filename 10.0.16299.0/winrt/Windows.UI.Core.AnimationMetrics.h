// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Core.AnimationMetrics.2.h"
#include "winrt/Windows.UI.Core.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Core::AnimationMetrics::IPropertyAnimation> consume_Windows_UI_Core_AnimationMetrics_IAnimationDescription<D>::Animations() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Core::AnimationMetrics::IPropertyAnimation> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IAnimationDescription)->get_Animations(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Core_AnimationMetrics_IAnimationDescription<D>::StaggerDelay() const noexcept
{
    Windows::Foundation::TimeSpan value{};
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IAnimationDescription)->get_StaggerDelay(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Core_AnimationMetrics_IAnimationDescription<D>::StaggerDelayFactor() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IAnimationDescription)->get_StaggerDelayFactor(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Core_AnimationMetrics_IAnimationDescription<D>::DelayLimit() const noexcept
{
    Windows::Foundation::TimeSpan value{};
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IAnimationDescription)->get_DelayLimit(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Core_AnimationMetrics_IAnimationDescription<D>::ZOrder() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IAnimationDescription)->get_ZOrder(&value));
    return value;
}

template <typename D> Windows::UI::Core::AnimationMetrics::AnimationDescription consume_Windows_UI_Core_AnimationMetrics_IAnimationDescriptionFactory<D>::CreateInstance(Windows::UI::Core::AnimationMetrics::AnimationEffect const& effect, Windows::UI::Core::AnimationMetrics::AnimationEffectTarget const& target) const
{
    Windows::UI::Core::AnimationMetrics::AnimationDescription animation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory)->CreateInstance(get_abi(effect), get_abi(target), put_abi(animation)));
    return animation;
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_UI_Core_AnimationMetrics_IOpacityAnimation<D>::InitialOpacity() const noexcept
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IOpacityAnimation)->get_InitialOpacity(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Core_AnimationMetrics_IOpacityAnimation<D>::FinalOpacity() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IOpacityAnimation)->get_FinalOpacity(&value));
    return value;
}

template <typename D> Windows::UI::Core::AnimationMetrics::PropertyAnimationType consume_Windows_UI_Core_AnimationMetrics_IPropertyAnimation<D>::Type() const noexcept
{
    Windows::UI::Core::AnimationMetrics::PropertyAnimationType value{};
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IPropertyAnimation)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Core_AnimationMetrics_IPropertyAnimation<D>::Delay() const noexcept
{
    Windows::Foundation::TimeSpan value{};
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IPropertyAnimation)->get_Delay(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Core_AnimationMetrics_IPropertyAnimation<D>::Duration() const noexcept
{
    Windows::Foundation::TimeSpan value{};
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IPropertyAnimation)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Core_AnimationMetrics_IPropertyAnimation<D>::Control1() const noexcept
{
    Windows::Foundation::Point value{};
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IPropertyAnimation)->get_Control1(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Core_AnimationMetrics_IPropertyAnimation<D>::Control2() const noexcept
{
    Windows::Foundation::Point value{};
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IPropertyAnimation)->get_Control2(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_UI_Core_AnimationMetrics_IScaleAnimation<D>::InitialScaleX() const noexcept
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IScaleAnimation)->get_InitialScaleX(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_UI_Core_AnimationMetrics_IScaleAnimation<D>::InitialScaleY() const noexcept
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IScaleAnimation)->get_InitialScaleY(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Core_AnimationMetrics_IScaleAnimation<D>::FinalScaleX() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IScaleAnimation)->get_FinalScaleX(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Core_AnimationMetrics_IScaleAnimation<D>::FinalScaleY() const noexcept
{
    float value{};
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IScaleAnimation)->get_FinalScaleY(&value));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Core_AnimationMetrics_IScaleAnimation<D>::NormalizedOrigin() const noexcept
{
    Windows::Foundation::Point value{};
    check_terminate(WINRT_SHIM(Windows::UI::Core::AnimationMetrics::IScaleAnimation)->get_NormalizedOrigin(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::Core::AnimationMetrics::IAnimationDescription> : produce_base<D, Windows::UI::Core::AnimationMetrics::IAnimationDescription>
{
    HRESULT __stdcall get_Animations(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Animations());
        return S_OK;
    }

    HRESULT __stdcall get_StaggerDelay(Windows::Foundation::TimeSpan* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().StaggerDelay());
        return S_OK;
    }

    HRESULT __stdcall get_StaggerDelayFactor(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().StaggerDelayFactor());
        return S_OK;
    }

    HRESULT __stdcall get_DelayLimit(Windows::Foundation::TimeSpan* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DelayLimit());
        return S_OK;
    }

    HRESULT __stdcall get_ZOrder(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ZOrder());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory> : produce_base<D, Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory>
{
    HRESULT __stdcall CreateInstance(Windows::UI::Core::AnimationMetrics::AnimationEffect effect, Windows::UI::Core::AnimationMetrics::AnimationEffectTarget target, ::IUnknown** animation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *animation = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::UI::Core::AnimationMetrics::AnimationEffect const*>(&effect), *reinterpret_cast<Windows::UI::Core::AnimationMetrics::AnimationEffectTarget const*>(&target)));
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
    HRESULT __stdcall get_InitialOpacity(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().InitialOpacity());
        return S_OK;
    }

    HRESULT __stdcall get_FinalOpacity(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FinalOpacity());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::AnimationMetrics::IPropertyAnimation> : produce_base<D, Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
{
    HRESULT __stdcall get_Type(Windows::UI::Core::AnimationMetrics::PropertyAnimationType* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Type());
        return S_OK;
    }

    HRESULT __stdcall get_Delay(Windows::Foundation::TimeSpan* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Delay());
        return S_OK;
    }

    HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Duration());
        return S_OK;
    }

    HRESULT __stdcall get_Control1(Windows::Foundation::Point* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Control1());
        return S_OK;
    }

    HRESULT __stdcall get_Control2(Windows::Foundation::Point* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Control2());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::AnimationMetrics::IScaleAnimation> : produce_base<D, Windows::UI::Core::AnimationMetrics::IScaleAnimation>
{
    HRESULT __stdcall get_InitialScaleX(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().InitialScaleX());
        return S_OK;
    }

    HRESULT __stdcall get_InitialScaleY(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().InitialScaleY());
        return S_OK;
    }

    HRESULT __stdcall get_FinalScaleX(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FinalScaleX());
        return S_OK;
    }

    HRESULT __stdcall get_FinalScaleY(float* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FinalScaleY());
        return S_OK;
    }

    HRESULT __stdcall get_NormalizedOrigin(Windows::Foundation::Point* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NormalizedOrigin());
        return S_OK;
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Core::AnimationMetrics {

inline AnimationDescription::AnimationDescription(Windows::UI::Core::AnimationMetrics::AnimationEffect const& effect, Windows::UI::Core::AnimationMetrics::AnimationEffectTarget const& target) :
    AnimationDescription(get_activation_factory<AnimationDescription, Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory>().CreateInstance(effect, target))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Core::AnimationMetrics::IAnimationDescription> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::AnimationMetrics::IAnimationDescription> {};

template<> struct hash<winrt::Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory> {};

template<> struct hash<winrt::Windows::UI::Core::AnimationMetrics::IOpacityAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::AnimationMetrics::IOpacityAnimation> {};

template<> struct hash<winrt::Windows::UI::Core::AnimationMetrics::IPropertyAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::AnimationMetrics::IPropertyAnimation> {};

template<> struct hash<winrt::Windows::UI::Core::AnimationMetrics::IScaleAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::AnimationMetrics::IScaleAnimation> {};

template<> struct hash<winrt::Windows::UI::Core::AnimationMetrics::AnimationDescription> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::AnimationMetrics::AnimationDescription> {};

template<> struct hash<winrt::Windows::UI::Core::AnimationMetrics::OpacityAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::AnimationMetrics::OpacityAnimation> {};

template<> struct hash<winrt::Windows::UI::Core::AnimationMetrics::PropertyAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::AnimationMetrics::PropertyAnimation> {};

template<> struct hash<winrt::Windows::UI::Core::AnimationMetrics::ScaleAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::AnimationMetrics::ScaleAnimation> {};

template<> struct hash<winrt::Windows::UI::Core::AnimationMetrics::TranslationAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Core::AnimationMetrics::TranslationAnimation> {};

}

WINRT_WARNING_POP
