// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.3.h"
#include "internal/Windows.UI.Xaml.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Xaml.Controls.Primitives.3.h"
#include "internal/Windows.UI.Composition.3.h"
#include "internal/Windows.UI.Xaml.Controls.3.h"
#include "internal/Windows.UI.Xaml.Media.Animation.3.h"
#include "Windows.UI.Xaml.Media.h"
#include "Windows.Foundation.Collections.h"
#include "internal/Windows.UI.Xaml.Media.Animation.4.h"
#include "internal/Windows.UI.Xaml.Media.Animation.5.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition> : produce_base<D, Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IBackEase> : produce_base<D, Windows::UI::Xaml::Media::Animation::IBackEase>
{
    HRESULT __stdcall get_Amplitude(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Amplitude());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Amplitude(double value) noexcept override
    {
        try
        {
            this->shim().Amplitude(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IBackEaseStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IBackEaseStatics>
{
    HRESULT __stdcall get_AmplitudeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AmplitudeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IBeginStoryboard> : produce_base<D, Windows::UI::Xaml::Media::Animation::IBeginStoryboard>
{
    HRESULT __stdcall get_Storyboard(abi_arg_out<Windows::UI::Xaml::Media::Animation::IStoryboard> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Storyboard());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Storyboard(abi_arg_in<Windows::UI::Xaml::Media::Animation::IStoryboard> value) noexcept override
    {
        try
        {
            this->shim().Storyboard(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::Storyboard *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics>
{
    HRESULT __stdcall get_StoryboardProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StoryboardProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IBounceEase> : produce_base<D, Windows::UI::Xaml::Media::Animation::IBounceEase>
{
    HRESULT __stdcall get_Bounces(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bounces());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Bounces(int32_t value) noexcept override
    {
        try
        {
            this->shim().Bounces(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bounciness(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bounciness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Bounciness(double value) noexcept override
    {
        try
        {
            this->shim().Bounciness(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IBounceEaseStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IBounceEaseStatics>
{
    HRESULT __stdcall get_BouncesProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BouncesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BouncinessProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BouncinessProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ICircleEase> : produce_base<D, Windows::UI::Xaml::Media::Animation::ICircleEase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IColorAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IColorAnimation>
{
    HRESULT __stdcall get_From(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_From(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            this->shim().From(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_To(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_To(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            this->shim().To(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_By(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().By());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_By(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            this->shim().By(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EasingFunction(abi_arg_out<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingFunction(abi_arg_in<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            this->shim().EasingFunction(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::EasingFunctionBase *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnableDependentAnimation(bool value) noexcept override
    {
        try
        {
            this->shim().EnableDependentAnimation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IColorAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>
{
    HRESULT __stdcall get_FromProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ToProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ByProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EasingFunctionProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingFunctionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimationProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames> : produce_base<D, Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames>
{
    HRESULT __stdcall get_KeyFrames(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::ColorKeyFrame>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyFrames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnableDependentAnimation(bool value) noexcept override
    {
        try
        {
            this->shim().EnableDependentAnimation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics>
{
    HRESULT __stdcall get_EnableDependentAnimationProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IColorKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::IColorKeyFrame>
{
    HRESULT __stdcall get_Value(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTime(abi_arg_out<Windows::UI::Xaml::Media::Animation::KeyTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTime(abi_arg_in<Windows::UI::Xaml::Media::Animation::KeyTime> value) noexcept override
    {
        try
        {
            this->shim().KeyTime(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::KeyTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory> : produce_base<D, Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Media::Animation::IColorKeyFrame> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics>
{
    HRESULT __stdcall get_ValueProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ValueProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTimeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyTimeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo> : produce_base<D, Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo>
{
    HRESULT __stdcall get_IsStaggeringEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsStaggeringEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsStaggeringEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsStaggeringEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>
{
    HRESULT __stdcall get_IsStaggeringEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsStaggeringEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStaggerElementProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsStaggerElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsStaggerElement(abi_arg_in<Windows::UI::Xaml::IUIElement> element, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIsStaggerElement(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetIsStaggerElement(abi_arg_in<Windows::UI::Xaml::IUIElement> element, bool value) noexcept override
    {
        try
        {
            this->shim().SetIsStaggerElement(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IConnectedAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IConnectedAnimation>
{
    HRESULT __stdcall add_Completed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Animation::ConnectedAnimation, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Completed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Animation::ConnectedAnimation, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token token) noexcept override
    {
        try
        {
            this->shim().Completed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryStart(abi_arg_in<Windows::UI::Xaml::IUIElement> destination, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TryStart(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&destination)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Cancel() noexcept override
    {
        try
        {
            this->shim().Cancel();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IConnectedAnimationService> : produce_base<D, Windows::UI::Xaml::Media::Animation::IConnectedAnimationService>
{
    HRESULT __stdcall get_DefaultDuration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultDuration(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().DefaultDuration(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultEasingFunction(abi_arg_out<Windows::UI::Composition::ICompositionEasingFunction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultEasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultEasingFunction(abi_arg_in<Windows::UI::Composition::ICompositionEasingFunction> value) noexcept override
    {
        try
        {
            this->shim().DefaultEasingFunction(*reinterpret_cast<const Windows::UI::Composition::CompositionEasingFunction *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareToAnimate(abi_arg_in<hstring> key, abi_arg_in<Windows::UI::Xaml::IUIElement> source, abi_arg_out<Windows::UI::Xaml::Media::Animation::IConnectedAnimation> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().PrepareToAnimate(*reinterpret_cast<const hstring *>(&key), *reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&source)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAnimation(abi_arg_in<hstring> key, abi_arg_out<Windows::UI::Xaml::Media::Animation::IConnectedAnimation> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetAnimation(*reinterpret_cast<const hstring *>(&key)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::UI::Xaml::Media::Animation::IConnectedAnimationService> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IContentThemeTransition> : produce_base<D, Windows::UI::Xaml::Media::Animation::IContentThemeTransition>
{
    HRESULT __stdcall get_HorizontalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalOffset(double value) noexcept override
    {
        try
        {
            this->shim().HorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalOffset(double value) noexcept override
    {
        try
        {
            this->shim().VerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics>
{
    HRESULT __stdcall get_HorizontalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo> : produce_base<D, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo>
{
    HRESULT __stdcall get_ExitElement(abi_arg_out<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitElement());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExitElement(abi_arg_in<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            this->shim().ExitElement(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>
{
    HRESULT __stdcall get_ExitElementProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEntranceElementProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEntranceElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsEntranceElement(abi_arg_in<Windows::UI::Xaml::IUIElement> element, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIsEntranceElement(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetIsEntranceElement(abi_arg_in<Windows::UI::Xaml::IUIElement> element, bool value) noexcept override
    {
        try
        {
            this->shim().SetIsEntranceElement(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsExitElementProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsExitElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsExitElement(abi_arg_in<Windows::UI::Xaml::IUIElement> element, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIsExitElement(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetIsExitElement(abi_arg_in<Windows::UI::Xaml::IUIElement> element, bool value) noexcept override
    {
        try
        {
            this->shim().SetIsExitElement(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitElementContainerProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitElementContainerProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetExitElementContainer(abi_arg_in<Windows::UI::Xaml::Controls::IListViewBase> element, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetExitElementContainer(*reinterpret_cast<const Windows::UI::Xaml::Controls::ListViewBase *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetExitElementContainer(abi_arg_in<Windows::UI::Xaml::Controls::IListViewBase> element, bool value) noexcept override
    {
        try
        {
            this->shim().SetExitElementContainer(*reinterpret_cast<const Windows::UI::Xaml::Controls::ListViewBase *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ICubicEase> : produce_base<D, Windows::UI::Xaml::Media::Animation::ICubicEase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDoubleAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDoubleAnimation>
{
    HRESULT __stdcall get_From(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_From(abi_arg_in<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            this->shim().From(*reinterpret_cast<const Windows::Foundation::IReference<double> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_To(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_To(abi_arg_in<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            this->shim().To(*reinterpret_cast<const Windows::Foundation::IReference<double> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_By(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().By());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_By(abi_arg_in<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            this->shim().By(*reinterpret_cast<const Windows::Foundation::IReference<double> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EasingFunction(abi_arg_out<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingFunction(abi_arg_in<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            this->shim().EasingFunction(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::EasingFunctionBase *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnableDependentAnimation(bool value) noexcept override
    {
        try
        {
            this->shim().EnableDependentAnimation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>
{
    HRESULT __stdcall get_FromProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ToProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ByProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EasingFunctionProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingFunctionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimationProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames>
{
    HRESULT __stdcall get_KeyFrames(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::DoubleKeyFrame>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyFrames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnableDependentAnimation(bool value) noexcept override
    {
        try
        {
            this->shim().EnableDependentAnimation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics>
{
    HRESULT __stdcall get_EnableDependentAnimationProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame>
{
    HRESULT __stdcall get_Value(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(double value) noexcept override
    {
        try
        {
            this->shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTime(abi_arg_out<Windows::UI::Xaml::Media::Animation::KeyTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTime(abi_arg_in<Windows::UI::Xaml::Media::Animation::KeyTime> value) noexcept override
    {
        try
        {
            this->shim().KeyTime(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::KeyTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics>
{
    HRESULT __stdcall get_ValueProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ValueProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTimeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyTimeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation>
{
    HRESULT __stdcall get_TargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics>
{
    HRESULT __stdcall get_TargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation>
{
    HRESULT __stdcall get_TargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ToOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ToOffset(double value) noexcept override
    {
        try
        {
            this->shim().ToOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direction(Windows::UI::Xaml::Controls::Primitives::AnimationDirection * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Direction(Windows::UI::Xaml::Controls::Primitives::AnimationDirection value) noexcept override
    {
        try
        {
            this->shim().Direction(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics>
{
    HRESULT __stdcall get_TargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ToOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DirectionProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DirectionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation>
{
    HRESULT __stdcall get_EntranceTargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EntranceTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EntranceTargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().EntranceTargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EntranceTarget(abi_arg_out<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EntranceTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EntranceTarget(abi_arg_in<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            this->shim().EntranceTarget(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExitTargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ExitTargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTarget(abi_arg_out<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExitTarget(abi_arg_in<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            this->shim().ExitTarget(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>
{
    HRESULT __stdcall get_EntranceTargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EntranceTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EntranceTargetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EntranceTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTargetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation>
{
    HRESULT __stdcall get_EntranceTargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EntranceTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EntranceTargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().EntranceTargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EntranceTarget(abi_arg_out<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EntranceTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EntranceTarget(abi_arg_in<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            this->shim().EntranceTarget(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExitTargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ExitTargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTarget(abi_arg_out<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExitTarget(abi_arg_in<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            this->shim().ExitTarget(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>
{
    HRESULT __stdcall get_EntranceTargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EntranceTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EntranceTargetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EntranceTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTargetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation>
{
    HRESULT __stdcall get_TargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics>
{
    HRESULT __stdcall get_TargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame>
{
    HRESULT __stdcall get_EasingFunction(abi_arg_out<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingFunction(abi_arg_in<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            this->shim().EasingFunction(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::EasingFunctionBase *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics>
{
    HRESULT __stdcall get_EasingFunctionProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingFunctionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame>
{
    HRESULT __stdcall get_EasingFunction(abi_arg_out<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingFunction(abi_arg_in<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            this->shim().EasingFunction(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::EasingFunctionBase *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics>
{
    HRESULT __stdcall get_EasingFunctionProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingFunctionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEasingFunctionBase>
{
    HRESULT __stdcall get_EasingMode(Windows::UI::Xaml::Media::Animation::EasingMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingMode(Windows::UI::Xaml::Media::Animation::EasingMode value) noexcept override
    {
        try
        {
            this->shim().EasingMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Ease(double normalizedTime, double * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Ease(normalizedTime));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics>
{
    HRESULT __stdcall get_EasingModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame>
{
    HRESULT __stdcall get_EasingFunction(abi_arg_out<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingFunction(abi_arg_in<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            this->shim().EasingFunction(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::EasingFunctionBase *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics>
{
    HRESULT __stdcall get_EasingFunctionProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingFunctionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition>
{
    HRESULT __stdcall get_Edge(Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Edge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Edge(Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation value) noexcept override
    {
        try
        {
            this->shim().Edge(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics>
{
    HRESULT __stdcall get_EdgeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EdgeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IElasticEase> : produce_base<D, Windows::UI::Xaml::Media::Animation::IElasticEase>
{
    HRESULT __stdcall get_Oscillations(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Oscillations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Oscillations(int32_t value) noexcept override
    {
        try
        {
            this->shim().Oscillations(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Springiness(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Springiness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Springiness(double value) noexcept override
    {
        try
        {
            this->shim().Springiness(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IElasticEaseStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IElasticEaseStatics>
{
    HRESULT __stdcall get_OscillationsProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OscillationsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpringinessProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SpringinessProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics>
{
    HRESULT __stdcall get_IsTargetElementProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTargetElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsTargetElement(abi_arg_in<Windows::UI::Xaml::IUIElement> element, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIsTargetElement(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetIsTargetElement(abi_arg_in<Windows::UI::Xaml::IUIElement> element, bool value) noexcept override
    {
        try
        {
            this->shim().SetIsTargetElement(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition>
{
    HRESULT __stdcall get_FromHorizontalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromHorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FromHorizontalOffset(double value) noexcept override
    {
        try
        {
            this->shim().FromHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromVerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FromVerticalOffset(double value) noexcept override
    {
        try
        {
            this->shim().FromVerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStaggeringEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsStaggeringEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsStaggeringEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsStaggeringEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics>
{
    HRESULT __stdcall get_FromHorizontalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromVerticalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStaggeringEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsStaggeringEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IExponentialEase> : produce_base<D, Windows::UI::Xaml::Media::Animation::IExponentialEase>
{
    HRESULT __stdcall get_Exponent(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Exponent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Exponent(double value) noexcept override
    {
        try
        {
            this->shim().Exponent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics>
{
    HRESULT __stdcall get_ExponentProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExponentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation>
{
    HRESULT __stdcall get_TargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics>
{
    HRESULT __stdcall get_TargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation>
{
    HRESULT __stdcall get_TargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics>
{
    HRESULT __stdcall get_TargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IKeySpline> : produce_base<D, Windows::UI::Xaml::Media::Animation::IKeySpline>
{
    HRESULT __stdcall get_ControlPoint1(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ControlPoint1());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ControlPoint1(abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            this->shim().ControlPoint1(*reinterpret_cast<const Windows::Foundation::Point *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlPoint2(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ControlPoint2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ControlPoint2(abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            this->shim().ControlPoint2(*reinterpret_cast<const Windows::Foundation::Point *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IKeyTimeHelper> : produce_base<D, Windows::UI::Xaml::Media::Animation::IKeyTimeHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics>
{
    HRESULT __stdcall abi_FromTimeSpan(abi_arg_in<Windows::Foundation::TimeSpan> timeSpan, abi_arg_out<Windows::UI::Xaml::Media::Animation::KeyTime> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromTimeSpan(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&timeSpan)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::INavigationThemeTransition> : produce_base<D, Windows::UI::Xaml::Media::Animation::INavigationThemeTransition>
{
    HRESULT __stdcall get_DefaultNavigationTransitionInfo(abi_arg_out<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultNavigationTransitionInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultNavigationTransitionInfo(abi_arg_in<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo> value) noexcept override
    {
        try
        {
            this->shim().DefaultNavigationTransitionInfo(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics>
{
    HRESULT __stdcall get_DefaultNavigationTransitionInfoProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultNavigationTransitionInfoProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo> : produce_base<D, Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory> : produce_base<D, Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides> : produce_base<D, Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides>
{
    HRESULT __stdcall abi_GetNavigationStateCore(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNavigationStateCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetNavigationStateCore(abi_arg_in<hstring> navigationState) noexcept override
    {
        try
        {
            this->shim().SetNavigationStateCore(*reinterpret_cast<const hstring *>(&navigationState));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames> : produce_base<D, Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames>
{
    HRESULT __stdcall get_KeyFrames(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::ObjectKeyFrame>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyFrames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnableDependentAnimation(bool value) noexcept override
    {
        try
        {
            this->shim().EnableDependentAnimation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics>
{
    HRESULT __stdcall get_EnableDependentAnimationProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IObjectKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::IObjectKeyFrame>
{
    HRESULT __stdcall get_Value(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTime(abi_arg_out<Windows::UI::Xaml::Media::Animation::KeyTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTime(abi_arg_in<Windows::UI::Xaml::Media::Animation::KeyTime> value) noexcept override
    {
        try
        {
            this->shim().KeyTime(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::KeyTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory> : produce_base<D, Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Media::Animation::IObjectKeyFrame> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics>
{
    HRESULT __stdcall get_ValueProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ValueProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTimeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyTimeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPaneThemeTransition> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPaneThemeTransition>
{
    HRESULT __stdcall get_Edge(Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Edge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Edge(Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation value) noexcept override
    {
        try
        {
            this->shim().Edge(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics>
{
    HRESULT __stdcall get_EdgeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EdgeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPointAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPointAnimation>
{
    HRESULT __stdcall get_From(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_From(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            this->shim().From(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::Point> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_To(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_To(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            this->shim().To(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::Point> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_By(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().By());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_By(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            this->shim().By(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::Point> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EasingFunction(abi_arg_out<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingFunction(abi_arg_in<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            this->shim().EasingFunction(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::EasingFunctionBase *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnableDependentAnimation(bool value) noexcept override
    {
        try
        {
            this->shim().EnableDependentAnimation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPointAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>
{
    HRESULT __stdcall get_FromProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ToProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ByProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EasingFunctionProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EasingFunctionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimationProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames>
{
    HRESULT __stdcall get_KeyFrames(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::PointKeyFrame>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyFrames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnableDependentAnimation(bool value) noexcept override
    {
        try
        {
            this->shim().EnableDependentAnimation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics>
{
    HRESULT __stdcall get_EnableDependentAnimationProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableDependentAnimationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPointKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPointKeyFrame>
{
    HRESULT __stdcall get_Value(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const Windows::Foundation::Point *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTime(abi_arg_out<Windows::UI::Xaml::Media::Animation::KeyTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTime(abi_arg_in<Windows::UI::Xaml::Media::Animation::KeyTime> value) noexcept override
    {
        try
        {
            this->shim().KeyTime(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::KeyTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Media::Animation::IPointKeyFrame> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics>
{
    HRESULT __stdcall get_ValueProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ValueProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTimeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyTimeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation>
{
    HRESULT __stdcall get_TargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics>
{
    HRESULT __stdcall get_TargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation>
{
    HRESULT __stdcall get_TargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics>
{
    HRESULT __stdcall get_TargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation>
{
    HRESULT __stdcall get_TargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromHorizontalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromHorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FromHorizontalOffset(double value) noexcept override
    {
        try
        {
            this->shim().FromHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromVerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FromVerticalOffset(double value) noexcept override
    {
        try
        {
            this->shim().FromVerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics>
{
    HRESULT __stdcall get_TargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromHorizontalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromVerticalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation>
{
    HRESULT __stdcall get_TargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics>
{
    HRESULT __stdcall get_TargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPopupThemeTransition> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPopupThemeTransition>
{
    HRESULT __stdcall get_FromHorizontalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromHorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FromHorizontalOffset(double value) noexcept override
    {
        try
        {
            this->shim().FromHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromVerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FromVerticalOffset(double value) noexcept override
    {
        try
        {
            this->shim().FromVerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics>
{
    HRESULT __stdcall get_FromHorizontalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromVerticalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPowerEase> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPowerEase>
{
    HRESULT __stdcall get_Power(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Power());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Power(double value) noexcept override
    {
        try
        {
            this->shim().Power(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPowerEaseStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPowerEaseStatics>
{
    HRESULT __stdcall get_PowerProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PowerProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IQuadraticEase> : produce_base<D, Windows::UI::Xaml::Media::Animation::IQuadraticEase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IQuarticEase> : produce_base<D, Windows::UI::Xaml::Media::Animation::IQuarticEase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IQuinticEase> : produce_base<D, Windows::UI::Xaml::Media::Animation::IQuinticEase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IReorderThemeTransition> : produce_base<D, Windows::UI::Xaml::Media::Animation::IReorderThemeTransition>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper> : produce_base<D, Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>
{
    HRESULT __stdcall get_Forever(abi_arg_out<Windows::UI::Xaml::Media::Animation::RepeatBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Forever());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromCount(double count, abi_arg_out<Windows::UI::Xaml::Media::Animation::RepeatBehavior> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromCount(count));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromDuration(abi_arg_in<Windows::Foundation::TimeSpan> duration, abi_arg_out<Windows::UI::Xaml::Media::Animation::RepeatBehavior> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromDuration(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&duration)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetHasCount(abi_arg_in<Windows::UI::Xaml::Media::Animation::RepeatBehavior> target, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetHasCount(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::RepeatBehavior *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetHasDuration(abi_arg_in<Windows::UI::Xaml::Media::Animation::RepeatBehavior> target, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetHasDuration(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::RepeatBehavior *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Equals(abi_arg_in<Windows::UI::Xaml::Media::Animation::RepeatBehavior> target, abi_arg_in<Windows::UI::Xaml::Media::Animation::RepeatBehavior> value, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Equals(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::RepeatBehavior *>(&target), *reinterpret_cast<const Windows::UI::Xaml::Media::Animation::RepeatBehavior *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation>
{
    HRESULT __stdcall get_TargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromHorizontalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromHorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FromHorizontalOffset(double value) noexcept override
    {
        try
        {
            this->shim().FromHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromVerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FromVerticalOffset(double value) noexcept override
    {
        try
        {
            this->shim().FromVerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics>
{
    HRESULT __stdcall get_TargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromHorizontalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromVerticalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition> : produce_base<D, Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2> : produce_base<D, Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2>
{
    HRESULT __stdcall get_IsStaggeringEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsStaggeringEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsStaggeringEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsStaggeringEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2> : produce_base<D, Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2>
{
    HRESULT __stdcall get_IsStaggeringEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsStaggeringEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISineEase> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISineEase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame>
{
    HRESULT __stdcall get_KeySpline(abi_arg_out<Windows::UI::Xaml::Media::Animation::IKeySpline> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeySpline());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeySpline(abi_arg_in<Windows::UI::Xaml::Media::Animation::IKeySpline> value) noexcept override
    {
        try
        {
            this->shim().KeySpline(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::KeySpline *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics>
{
    HRESULT __stdcall get_KeySplineProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeySplineProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame>
{
    HRESULT __stdcall get_KeySpline(abi_arg_out<Windows::UI::Xaml::Media::Animation::IKeySpline> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeySpline());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeySpline(abi_arg_in<Windows::UI::Xaml::Media::Animation::IKeySpline> value) noexcept override
    {
        try
        {
            this->shim().KeySpline(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::KeySpline *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics>
{
    HRESULT __stdcall get_KeySplineProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeySplineProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame>
{
    HRESULT __stdcall get_KeySpline(abi_arg_out<Windows::UI::Xaml::Media::Animation::IKeySpline> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeySpline());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeySpline(abi_arg_in<Windows::UI::Xaml::Media::Animation::IKeySpline> value) noexcept override
    {
        try
        {
            this->shim().KeySpline(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::KeySpline *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics>
{
    HRESULT __stdcall get_KeySplineProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeySplineProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation>
{
    HRESULT __stdcall get_OpenedTargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenedTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OpenedTargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().OpenedTargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedTarget(abi_arg_out<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenedTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OpenedTarget(abi_arg_in<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            this->shim().OpenedTarget(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClosedTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClosedTargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ClosedTargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTarget(abi_arg_out<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClosedTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClosedTarget(abi_arg_in<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            this->shim().ClosedTarget(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ContentTargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTarget(abi_arg_out<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTarget(abi_arg_in<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            this->shim().ContentTarget(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedLength(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenedLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OpenedLength(double value) noexcept override
    {
        try
        {
            this->shim().OpenedLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedLength(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClosedLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClosedLength(double value) noexcept override
    {
        try
        {
            this->shim().ClosedLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetFromCenter(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OffsetFromCenter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OffsetFromCenter(double value) noexcept override
    {
        try
        {
            this->shim().OffsetFromCenter(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationDirection(Windows::UI::Xaml::Controls::Primitives::AnimationDirection * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTranslationDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTranslationDirection(Windows::UI::Xaml::Controls::Primitives::AnimationDirection value) noexcept override
    {
        try
        {
            this->shim().ContentTranslationDirection(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTranslationOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTranslationOffset(double value) noexcept override
    {
        try
        {
            this->shim().ContentTranslationOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>
{
    HRESULT __stdcall get_OpenedTargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenedTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedTargetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenedTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClosedTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTargetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClosedTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTargetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedLengthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenedLengthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedLengthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClosedLengthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetFromCenterProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OffsetFromCenterProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationDirectionProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTranslationDirectionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTranslationOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation>
{
    HRESULT __stdcall get_OpenedTargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenedTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OpenedTargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().OpenedTargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedTarget(abi_arg_out<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenedTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OpenedTarget(abi_arg_in<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            this->shim().OpenedTarget(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClosedTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClosedTargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ClosedTargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTarget(abi_arg_out<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClosedTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClosedTarget(abi_arg_in<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            this->shim().ClosedTarget(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ContentTargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTarget(abi_arg_out<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTarget(abi_arg_in<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            this->shim().ContentTarget(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedLength(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenedLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OpenedLength(double value) noexcept override
    {
        try
        {
            this->shim().OpenedLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedLength(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClosedLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClosedLength(double value) noexcept override
    {
        try
        {
            this->shim().ClosedLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetFromCenter(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OffsetFromCenter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OffsetFromCenter(double value) noexcept override
    {
        try
        {
            this->shim().OffsetFromCenter(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationDirection(Windows::UI::Xaml::Controls::Primitives::AnimationDirection * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTranslationDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTranslationDirection(Windows::UI::Xaml::Controls::Primitives::AnimationDirection value) noexcept override
    {
        try
        {
            this->shim().ContentTranslationDirection(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTranslationOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTranslationOffset(double value) noexcept override
    {
        try
        {
            this->shim().ContentTranslationOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>
{
    HRESULT __stdcall get_OpenedTargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenedTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedTargetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenedTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClosedTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTargetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClosedTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTargetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedLengthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenedLengthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedLengthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClosedLengthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetFromCenterProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OffsetFromCenterProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationDirectionProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTranslationDirectionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTranslationOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IStoryboard> : produce_base<D, Windows::UI::Xaml::Media::Animation::IStoryboard>
{
    HRESULT __stdcall get_Children(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Timeline>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Children());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Seek(abi_arg_in<Windows::Foundation::TimeSpan> offset) noexcept override
    {
        try
        {
            this->shim().Seek(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&offset));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Begin() noexcept override
    {
        try
        {
            this->shim().Begin();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Pause() noexcept override
    {
        try
        {
            this->shim().Pause();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Resume() noexcept override
    {
        try
        {
            this->shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentState(Windows::UI::Xaml::Media::Animation::ClockState * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetCurrentState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentTime(abi_arg_out<Windows::Foundation::TimeSpan> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetCurrentTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SeekAlignedToLastTick(abi_arg_in<Windows::Foundation::TimeSpan> offset) noexcept override
    {
        try
        {
            this->shim().SeekAlignedToLastTick(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&offset));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SkipToFill() noexcept override
    {
        try
        {
            this->shim().SkipToFill();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IStoryboardStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IStoryboardStatics>
{
    HRESULT __stdcall get_TargetPropertyProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetPropertyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTargetProperty(abi_arg_in<Windows::UI::Xaml::Media::Animation::ITimeline> element, abi_arg_out<hstring> path) noexcept override
    {
        try
        {
            *path = detach(this->shim().GetTargetProperty(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::Timeline *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *path = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetTargetProperty(abi_arg_in<Windows::UI::Xaml::Media::Animation::ITimeline> element, abi_arg_in<hstring> path) noexcept override
    {
        try
        {
            this->shim().SetTargetProperty(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::Timeline *>(&element), *reinterpret_cast<const hstring *>(&path));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTargetName(abi_arg_in<Windows::UI::Xaml::Media::Animation::ITimeline> element, abi_arg_out<hstring> name) noexcept override
    {
        try
        {
            *name = detach(this->shim().GetTargetName(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::Timeline *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *name = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetTargetName(abi_arg_in<Windows::UI::Xaml::Media::Animation::ITimeline> element, abi_arg_in<hstring> name) noexcept override
    {
        try
        {
            this->shim().SetTargetName(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::Timeline *>(&element), *reinterpret_cast<const hstring *>(&name));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetTarget(abi_arg_in<Windows::UI::Xaml::Media::Animation::ITimeline> timeline, abi_arg_in<Windows::UI::Xaml::IDependencyObject> target) noexcept override
    {
        try
        {
            this->shim().SetTarget(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::Timeline *>(&timeline), *reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&target));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation>
{
    HRESULT __stdcall get_TargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromHorizontalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromHorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FromHorizontalOffset(double value) noexcept override
    {
        try
        {
            this->shim().FromHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromVerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FromVerticalOffset(double value) noexcept override
    {
        try
        {
            this->shim().FromVerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics>
{
    HRESULT __stdcall get_TargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromHorizontalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromVerticalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation>
{
    HRESULT __stdcall get_TargetName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToHorizontalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ToHorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ToHorizontalOffset(double value) noexcept override
    {
        try
        {
            this->shim().ToHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToVerticalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ToVerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ToVerticalOffset(double value) noexcept override
    {
        try
        {
            this->shim().ToVerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics>
{
    HRESULT __stdcall get_TargetNameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToHorizontalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ToHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToVerticalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ToVerticalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ITimeline> : produce_base<D, Windows::UI::Xaml::Media::Animation::ITimeline>
{
    HRESULT __stdcall get_AutoReverse(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoReverse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoReverse(bool value) noexcept override
    {
        try
        {
            this->shim().AutoReverse(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BeginTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BeginTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BeginTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            this->shim().BeginTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_arg_out<Windows::UI::Xaml::Duration> value) noexcept override
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

    HRESULT __stdcall put_Duration(abi_arg_in<Windows::UI::Xaml::Duration> value) noexcept override
    {
        try
        {
            this->shim().Duration(*reinterpret_cast<const Windows::UI::Xaml::Duration *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpeedRatio(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SpeedRatio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpeedRatio(double value) noexcept override
    {
        try
        {
            this->shim().SpeedRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillBehavior(Windows::UI::Xaml::Media::Animation::FillBehavior * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FillBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FillBehavior(Windows::UI::Xaml::Media::Animation::FillBehavior value) noexcept override
    {
        try
        {
            this->shim().FillBehavior(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RepeatBehavior(abi_arg_out<Windows::UI::Xaml::Media::Animation::RepeatBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RepeatBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RepeatBehavior(abi_arg_in<Windows::UI::Xaml::Media::Animation::RepeatBehavior> value) noexcept override
    {
        try
        {
            this->shim().RepeatBehavior(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::RepeatBehavior *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Completed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token token) noexcept override
    {
        try
        {
            this->shim().Completed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ITimelineFactory> : produce_base<D, Windows::UI::Xaml::Media::Animation::ITimelineFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Media::Animation::ITimeline> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ITimelineStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::ITimelineStatics>
{
    HRESULT __stdcall get_AllowDependentAnimations(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowDependentAnimations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowDependentAnimations(bool value) noexcept override
    {
        try
        {
            this->shim().AllowDependentAnimations(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoReverseProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoReverseProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BeginTimeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BeginTimeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DurationProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DurationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpeedRatioProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SpeedRatioProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillBehaviorProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FillBehaviorProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RepeatBehaviorProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RepeatBehaviorProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ITransition> : produce_base<D, Windows::UI::Xaml::Media::Animation::ITransition>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ITransitionFactory> : produce_base<D, Windows::UI::Xaml::Media::Animation::ITransitionFactory>
{};

}

namespace Windows::UI::Xaml::Media::Animation {

template <typename D> Windows::UI::Xaml::Media::Animation::KeyTime impl_IKeyTimeHelperStatics<D>::FromTimeSpan(const Windows::Foundation::TimeSpan & timeSpan) const
{
    Windows::UI::Xaml::Media::Animation::KeyTime returnValue {};
    check_hresult(static_cast<const IKeyTimeHelperStatics &>(static_cast<const D &>(*this))->abi_FromTimeSpan(get(timeSpan), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Animation::RepeatBehavior impl_IRepeatBehaviorHelperStatics<D>::Forever() const
{
    Windows::UI::Xaml::Media::Animation::RepeatBehavior value {};
    check_hresult(static_cast<const IRepeatBehaviorHelperStatics &>(static_cast<const D &>(*this))->get_Forever(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::RepeatBehavior impl_IRepeatBehaviorHelperStatics<D>::FromCount(double count) const
{
    Windows::UI::Xaml::Media::Animation::RepeatBehavior returnValue {};
    check_hresult(static_cast<const IRepeatBehaviorHelperStatics &>(static_cast<const D &>(*this))->abi_FromCount(count, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Animation::RepeatBehavior impl_IRepeatBehaviorHelperStatics<D>::FromDuration(const Windows::Foundation::TimeSpan & duration) const
{
    Windows::UI::Xaml::Media::Animation::RepeatBehavior returnValue {};
    check_hresult(static_cast<const IRepeatBehaviorHelperStatics &>(static_cast<const D &>(*this))->abi_FromDuration(get(duration), put(returnValue)));
    return returnValue;
}

template <typename D> bool impl_IRepeatBehaviorHelperStatics<D>::GetHasCount(const Windows::UI::Xaml::Media::Animation::RepeatBehavior & target) const
{
    bool value {};
    check_hresult(static_cast<const IRepeatBehaviorHelperStatics &>(static_cast<const D &>(*this))->abi_GetHasCount(get(target), &value));
    return value;
}

template <typename D> bool impl_IRepeatBehaviorHelperStatics<D>::GetHasDuration(const Windows::UI::Xaml::Media::Animation::RepeatBehavior & target) const
{
    bool value {};
    check_hresult(static_cast<const IRepeatBehaviorHelperStatics &>(static_cast<const D &>(*this))->abi_GetHasDuration(get(target), &value));
    return value;
}

template <typename D> bool impl_IRepeatBehaviorHelperStatics<D>::Equals(const Windows::UI::Xaml::Media::Animation::RepeatBehavior & target, const Windows::UI::Xaml::Media::Animation::RepeatBehavior & value) const
{
    bool returnValue {};
    check_hresult(static_cast<const IRepeatBehaviorHelperStatics &>(static_cast<const D &>(*this))->abi_Equals(get(target), get(value), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Color impl_IColorKeyFrame<D>::Value() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorKeyFrame &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IColorKeyFrame<D>::Value(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IColorKeyFrame &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeyTime impl_IColorKeyFrame<D>::KeyTime() const
{
    Windows::UI::Xaml::Media::Animation::KeyTime value {};
    check_hresult(static_cast<const IColorKeyFrame &>(static_cast<const D &>(*this))->get_KeyTime(put(value)));
    return value;
}

template <typename D> void impl_IColorKeyFrame<D>::KeyTime(const Windows::UI::Xaml::Media::Animation::KeyTime & value) const
{
    check_hresult(static_cast<const IColorKeyFrame &>(static_cast<const D &>(*this))->put_KeyTime(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IColorKeyFrameStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IColorKeyFrameStatics &>(static_cast<const D &>(*this))->get_ValueProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IColorKeyFrameStatics<D>::KeyTimeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IColorKeyFrameStatics &>(static_cast<const D &>(*this))->get_KeyTimeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::ColorKeyFrame impl_IColorKeyFrameFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Media::Animation::ColorKeyFrame instance { nullptr };
    check_hresult(static_cast<const IColorKeyFrameFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> double impl_IDoubleKeyFrame<D>::Value() const
{
    double value {};
    check_hresult(static_cast<const IDoubleKeyFrame &>(static_cast<const D &>(*this))->get_Value(&value));
    return value;
}

template <typename D> void impl_IDoubleKeyFrame<D>::Value(double value) const
{
    check_hresult(static_cast<const IDoubleKeyFrame &>(static_cast<const D &>(*this))->put_Value(value));
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeyTime impl_IDoubleKeyFrame<D>::KeyTime() const
{
    Windows::UI::Xaml::Media::Animation::KeyTime value {};
    check_hresult(static_cast<const IDoubleKeyFrame &>(static_cast<const D &>(*this))->get_KeyTime(put(value)));
    return value;
}

template <typename D> void impl_IDoubleKeyFrame<D>::KeyTime(const Windows::UI::Xaml::Media::Animation::KeyTime & value) const
{
    check_hresult(static_cast<const IDoubleKeyFrame &>(static_cast<const D &>(*this))->put_KeyTime(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDoubleKeyFrameStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDoubleKeyFrameStatics &>(static_cast<const D &>(*this))->get_ValueProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDoubleKeyFrameStatics<D>::KeyTimeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDoubleKeyFrameStatics &>(static_cast<const D &>(*this))->get_KeyTimeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::DoubleKeyFrame impl_IDoubleKeyFrameFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Media::Animation::DoubleKeyFrame instance { nullptr };
    check_hresult(static_cast<const IDoubleKeyFrameFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingMode impl_IEasingFunctionBase<D>::EasingMode() const
{
    Windows::UI::Xaml::Media::Animation::EasingMode value {};
    check_hresult(static_cast<const IEasingFunctionBase &>(static_cast<const D &>(*this))->get_EasingMode(&value));
    return value;
}

template <typename D> void impl_IEasingFunctionBase<D>::EasingMode(Windows::UI::Xaml::Media::Animation::EasingMode value) const
{
    check_hresult(static_cast<const IEasingFunctionBase &>(static_cast<const D &>(*this))->put_EasingMode(value));
}

template <typename D> double impl_IEasingFunctionBase<D>::Ease(double normalizedTime) const
{
    double returnValue {};
    check_hresult(static_cast<const IEasingFunctionBase &>(static_cast<const D &>(*this))->abi_Ease(normalizedTime, &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IEasingFunctionBaseStatics<D>::EasingModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IEasingFunctionBaseStatics &>(static_cast<const D &>(*this))->get_EasingModeProperty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IKeySpline<D>::ControlPoint1() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IKeySpline &>(static_cast<const D &>(*this))->get_ControlPoint1(put(value)));
    return value;
}

template <typename D> void impl_IKeySpline<D>::ControlPoint1(const Windows::Foundation::Point & value) const
{
    check_hresult(static_cast<const IKeySpline &>(static_cast<const D &>(*this))->put_ControlPoint1(get(value)));
}

template <typename D> Windows::Foundation::Point impl_IKeySpline<D>::ControlPoint2() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IKeySpline &>(static_cast<const D &>(*this))->get_ControlPoint2(put(value)));
    return value;
}

template <typename D> void impl_IKeySpline<D>::ControlPoint2(const Windows::Foundation::Point & value) const
{
    check_hresult(static_cast<const IKeySpline &>(static_cast<const D &>(*this))->put_ControlPoint2(get(value)));
}

template <typename D> hstring impl_INavigationTransitionInfoOverrides<D>::GetNavigationStateCore() const
{
    hstring returnValue;
    check_hresult(static_cast<const INavigationTransitionInfoOverrides &>(static_cast<const D &>(*this))->abi_GetNavigationStateCore(put(returnValue)));
    return returnValue;
}

template <typename D> void impl_INavigationTransitionInfoOverrides<D>::SetNavigationStateCore(hstring_ref navigationState) const
{
    check_hresult(static_cast<const INavigationTransitionInfoOverrides &>(static_cast<const D &>(*this))->abi_SetNavigationStateCore(get(navigationState)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo impl_INavigationTransitionInfoFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo instance { nullptr };
    check_hresult(static_cast<const INavigationTransitionInfoFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::IInspectable impl_IObjectKeyFrame<D>::Value() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IObjectKeyFrame &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IObjectKeyFrame<D>::Value(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IObjectKeyFrame &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeyTime impl_IObjectKeyFrame<D>::KeyTime() const
{
    Windows::UI::Xaml::Media::Animation::KeyTime value {};
    check_hresult(static_cast<const IObjectKeyFrame &>(static_cast<const D &>(*this))->get_KeyTime(put(value)));
    return value;
}

template <typename D> void impl_IObjectKeyFrame<D>::KeyTime(const Windows::UI::Xaml::Media::Animation::KeyTime & value) const
{
    check_hresult(static_cast<const IObjectKeyFrame &>(static_cast<const D &>(*this))->put_KeyTime(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IObjectKeyFrameStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IObjectKeyFrameStatics &>(static_cast<const D &>(*this))->get_ValueProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IObjectKeyFrameStatics<D>::KeyTimeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IObjectKeyFrameStatics &>(static_cast<const D &>(*this))->get_KeyTimeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::ObjectKeyFrame impl_IObjectKeyFrameFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Media::Animation::ObjectKeyFrame instance { nullptr };
    check_hresult(static_cast<const IObjectKeyFrameFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Point impl_IPointKeyFrame<D>::Value() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IPointKeyFrame &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IPointKeyFrame<D>::Value(const Windows::Foundation::Point & value) const
{
    check_hresult(static_cast<const IPointKeyFrame &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeyTime impl_IPointKeyFrame<D>::KeyTime() const
{
    Windows::UI::Xaml::Media::Animation::KeyTime value {};
    check_hresult(static_cast<const IPointKeyFrame &>(static_cast<const D &>(*this))->get_KeyTime(put(value)));
    return value;
}

template <typename D> void impl_IPointKeyFrame<D>::KeyTime(const Windows::UI::Xaml::Media::Animation::KeyTime & value) const
{
    check_hresult(static_cast<const IPointKeyFrame &>(static_cast<const D &>(*this))->put_KeyTime(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPointKeyFrameStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPointKeyFrameStatics &>(static_cast<const D &>(*this))->get_ValueProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPointKeyFrameStatics<D>::KeyTimeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPointKeyFrameStatics &>(static_cast<const D &>(*this))->get_KeyTimeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::PointKeyFrame impl_IPointKeyFrameFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Media::Animation::PointKeyFrame instance { nullptr };
    check_hresult(static_cast<const IPointKeyFrameFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> bool impl_ITimeline<D>::AutoReverse() const
{
    bool value {};
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->get_AutoReverse(&value));
    return value;
}

template <typename D> void impl_ITimeline<D>::AutoReverse(bool value) const
{
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->put_AutoReverse(value));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_ITimeline<D>::BeginTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->get_BeginTime(put(value)));
    return value;
}

template <typename D> void impl_ITimeline<D>::BeginTime(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const
{
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->put_BeginTime(get(value)));
}

template <typename D> Windows::UI::Xaml::Duration impl_ITimeline<D>::Duration() const
{
    Windows::UI::Xaml::Duration value {};
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->get_Duration(put(value)));
    return value;
}

template <typename D> void impl_ITimeline<D>::Duration(const Windows::UI::Xaml::Duration & value) const
{
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->put_Duration(get(value)));
}

template <typename D> double impl_ITimeline<D>::SpeedRatio() const
{
    double value {};
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->get_SpeedRatio(&value));
    return value;
}

template <typename D> void impl_ITimeline<D>::SpeedRatio(double value) const
{
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->put_SpeedRatio(value));
}

template <typename D> Windows::UI::Xaml::Media::Animation::FillBehavior impl_ITimeline<D>::FillBehavior() const
{
    Windows::UI::Xaml::Media::Animation::FillBehavior value {};
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->get_FillBehavior(&value));
    return value;
}

template <typename D> void impl_ITimeline<D>::FillBehavior(Windows::UI::Xaml::Media::Animation::FillBehavior value) const
{
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->put_FillBehavior(value));
}

template <typename D> Windows::UI::Xaml::Media::Animation::RepeatBehavior impl_ITimeline<D>::RepeatBehavior() const
{
    Windows::UI::Xaml::Media::Animation::RepeatBehavior value {};
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->get_RepeatBehavior(put(value)));
    return value;
}

template <typename D> void impl_ITimeline<D>::RepeatBehavior(const Windows::UI::Xaml::Media::Animation::RepeatBehavior & value) const
{
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->put_RepeatBehavior(get(value)));
}

template <typename D> event_token impl_ITimeline<D>::Completed(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->add_Completed(get(value), &token));
    return token;
}

template <typename D> event_revoker<ITimeline> impl_ITimeline<D>::Completed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, ITimeline>(this, &ABI::Windows::UI::Xaml::Media::Animation::ITimeline::remove_Completed, Completed(value));
}

template <typename D> void impl_ITimeline<D>::Completed(event_token token) const
{
    check_hresult(static_cast<const ITimeline &>(static_cast<const D &>(*this))->remove_Completed(token));
}

template <typename D> bool impl_ITimelineStatics<D>::AllowDependentAnimations() const
{
    bool value {};
    check_hresult(static_cast<const ITimelineStatics &>(static_cast<const D &>(*this))->get_AllowDependentAnimations(&value));
    return value;
}

template <typename D> void impl_ITimelineStatics<D>::AllowDependentAnimations(bool value) const
{
    check_hresult(static_cast<const ITimelineStatics &>(static_cast<const D &>(*this))->put_AllowDependentAnimations(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ITimelineStatics<D>::AutoReverseProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ITimelineStatics &>(static_cast<const D &>(*this))->get_AutoReverseProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ITimelineStatics<D>::BeginTimeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ITimelineStatics &>(static_cast<const D &>(*this))->get_BeginTimeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ITimelineStatics<D>::DurationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ITimelineStatics &>(static_cast<const D &>(*this))->get_DurationProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ITimelineStatics<D>::SpeedRatioProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ITimelineStatics &>(static_cast<const D &>(*this))->get_SpeedRatioProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ITimelineStatics<D>::FillBehaviorProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ITimelineStatics &>(static_cast<const D &>(*this))->get_FillBehaviorProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ITimelineStatics<D>::RepeatBehaviorProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ITimelineStatics &>(static_cast<const D &>(*this))->get_RepeatBehaviorProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::Timeline impl_ITimelineFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Media::Animation::Timeline instance { nullptr };
    check_hresult(static_cast<const ITimelineFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> double impl_IBackEase<D>::Amplitude() const
{
    double value {};
    check_hresult(static_cast<const IBackEase &>(static_cast<const D &>(*this))->get_Amplitude(&value));
    return value;
}

template <typename D> void impl_IBackEase<D>::Amplitude(double value) const
{
    check_hresult(static_cast<const IBackEase &>(static_cast<const D &>(*this))->put_Amplitude(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBackEaseStatics<D>::AmplitudeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IBackEaseStatics &>(static_cast<const D &>(*this))->get_AmplitudeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::Storyboard impl_IBeginStoryboard<D>::Storyboard() const
{
    Windows::UI::Xaml::Media::Animation::Storyboard value { nullptr };
    check_hresult(static_cast<const IBeginStoryboard &>(static_cast<const D &>(*this))->get_Storyboard(put(value)));
    return value;
}

template <typename D> void impl_IBeginStoryboard<D>::Storyboard(const Windows::UI::Xaml::Media::Animation::Storyboard & value) const
{
    check_hresult(static_cast<const IBeginStoryboard &>(static_cast<const D &>(*this))->put_Storyboard(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBeginStoryboardStatics<D>::StoryboardProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IBeginStoryboardStatics &>(static_cast<const D &>(*this))->get_StoryboardProperty(put(value)));
    return value;
}

template <typename D> int32_t impl_IBounceEase<D>::Bounces() const
{
    int32_t value {};
    check_hresult(static_cast<const IBounceEase &>(static_cast<const D &>(*this))->get_Bounces(&value));
    return value;
}

template <typename D> void impl_IBounceEase<D>::Bounces(int32_t value) const
{
    check_hresult(static_cast<const IBounceEase &>(static_cast<const D &>(*this))->put_Bounces(value));
}

template <typename D> double impl_IBounceEase<D>::Bounciness() const
{
    double value {};
    check_hresult(static_cast<const IBounceEase &>(static_cast<const D &>(*this))->get_Bounciness(&value));
    return value;
}

template <typename D> void impl_IBounceEase<D>::Bounciness(double value) const
{
    check_hresult(static_cast<const IBounceEase &>(static_cast<const D &>(*this))->put_Bounciness(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBounceEaseStatics<D>::BouncesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IBounceEaseStatics &>(static_cast<const D &>(*this))->get_BouncesProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IBounceEaseStatics<D>::BouncinessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IBounceEaseStatics &>(static_cast<const D &>(*this))->get_BouncinessProperty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IColorAnimation<D>::From() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(static_cast<const IColorAnimation &>(static_cast<const D &>(*this))->get_From(put(value)));
    return value;
}

template <typename D> void impl_IColorAnimation<D>::From(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(static_cast<const IColorAnimation &>(static_cast<const D &>(*this))->put_From(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IColorAnimation<D>::To() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(static_cast<const IColorAnimation &>(static_cast<const D &>(*this))->get_To(put(value)));
    return value;
}

template <typename D> void impl_IColorAnimation<D>::To(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(static_cast<const IColorAnimation &>(static_cast<const D &>(*this))->put_To(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IColorAnimation<D>::By() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(static_cast<const IColorAnimation &>(static_cast<const D &>(*this))->get_By(put(value)));
    return value;
}

template <typename D> void impl_IColorAnimation<D>::By(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(static_cast<const IColorAnimation &>(static_cast<const D &>(*this))->put_By(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase impl_IColorAnimation<D>::EasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value { nullptr };
    check_hresult(static_cast<const IColorAnimation &>(static_cast<const D &>(*this))->get_EasingFunction(put(value)));
    return value;
}

template <typename D> void impl_IColorAnimation<D>::EasingFunction(const Windows::UI::Xaml::Media::Animation::EasingFunctionBase & value) const
{
    check_hresult(static_cast<const IColorAnimation &>(static_cast<const D &>(*this))->put_EasingFunction(get(value)));
}

template <typename D> bool impl_IColorAnimation<D>::EnableDependentAnimation() const
{
    bool value {};
    check_hresult(static_cast<const IColorAnimation &>(static_cast<const D &>(*this))->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void impl_IColorAnimation<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(static_cast<const IColorAnimation &>(static_cast<const D &>(*this))->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IColorAnimationStatics<D>::FromProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IColorAnimationStatics &>(static_cast<const D &>(*this))->get_FromProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IColorAnimationStatics<D>::ToProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IColorAnimationStatics &>(static_cast<const D &>(*this))->get_ToProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IColorAnimationStatics<D>::ByProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IColorAnimationStatics &>(static_cast<const D &>(*this))->get_ByProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IColorAnimationStatics<D>::EasingFunctionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IColorAnimationStatics &>(static_cast<const D &>(*this))->get_EasingFunctionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IColorAnimationStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IColorAnimationStatics &>(static_cast<const D &>(*this))->get_EnableDependentAnimationProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection impl_IColorAnimationUsingKeyFrames<D>::KeyFrames() const
{
    Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection value { nullptr };
    check_hresult(static_cast<const IColorAnimationUsingKeyFrames &>(static_cast<const D &>(*this))->get_KeyFrames(put(value)));
    return value;
}

template <typename D> bool impl_IColorAnimationUsingKeyFrames<D>::EnableDependentAnimation() const
{
    bool value {};
    check_hresult(static_cast<const IColorAnimationUsingKeyFrames &>(static_cast<const D &>(*this))->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void impl_IColorAnimationUsingKeyFrames<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(static_cast<const IColorAnimationUsingKeyFrames &>(static_cast<const D &>(*this))->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IColorAnimationUsingKeyFramesStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IColorAnimationUsingKeyFramesStatics &>(static_cast<const D &>(*this))->get_EnableDependentAnimationProperty(put(value)));
    return value;
}

template <typename D> double impl_IContentThemeTransition<D>::HorizontalOffset() const
{
    double value {};
    check_hresult(static_cast<const IContentThemeTransition &>(static_cast<const D &>(*this))->get_HorizontalOffset(&value));
    return value;
}

template <typename D> void impl_IContentThemeTransition<D>::HorizontalOffset(double value) const
{
    check_hresult(static_cast<const IContentThemeTransition &>(static_cast<const D &>(*this))->put_HorizontalOffset(value));
}

template <typename D> double impl_IContentThemeTransition<D>::VerticalOffset() const
{
    double value {};
    check_hresult(static_cast<const IContentThemeTransition &>(static_cast<const D &>(*this))->get_VerticalOffset(&value));
    return value;
}

template <typename D> void impl_IContentThemeTransition<D>::VerticalOffset(double value) const
{
    check_hresult(static_cast<const IContentThemeTransition &>(static_cast<const D &>(*this))->put_VerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IContentThemeTransitionStatics<D>::HorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IContentThemeTransitionStatics &>(static_cast<const D &>(*this))->get_HorizontalOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IContentThemeTransitionStatics<D>::VerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IContentThemeTransitionStatics &>(static_cast<const D &>(*this))->get_VerticalOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_IDoubleAnimation<D>::From() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IDoubleAnimation &>(static_cast<const D &>(*this))->get_From(put(value)));
    return value;
}

template <typename D> void impl_IDoubleAnimation<D>::From(const Windows::Foundation::IReference<double> & value) const
{
    check_hresult(static_cast<const IDoubleAnimation &>(static_cast<const D &>(*this))->put_From(get(value)));
}

template <typename D> Windows::Foundation::IReference<double> impl_IDoubleAnimation<D>::To() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IDoubleAnimation &>(static_cast<const D &>(*this))->get_To(put(value)));
    return value;
}

template <typename D> void impl_IDoubleAnimation<D>::To(const Windows::Foundation::IReference<double> & value) const
{
    check_hresult(static_cast<const IDoubleAnimation &>(static_cast<const D &>(*this))->put_To(get(value)));
}

template <typename D> Windows::Foundation::IReference<double> impl_IDoubleAnimation<D>::By() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IDoubleAnimation &>(static_cast<const D &>(*this))->get_By(put(value)));
    return value;
}

template <typename D> void impl_IDoubleAnimation<D>::By(const Windows::Foundation::IReference<double> & value) const
{
    check_hresult(static_cast<const IDoubleAnimation &>(static_cast<const D &>(*this))->put_By(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase impl_IDoubleAnimation<D>::EasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value { nullptr };
    check_hresult(static_cast<const IDoubleAnimation &>(static_cast<const D &>(*this))->get_EasingFunction(put(value)));
    return value;
}

template <typename D> void impl_IDoubleAnimation<D>::EasingFunction(const Windows::UI::Xaml::Media::Animation::EasingFunctionBase & value) const
{
    check_hresult(static_cast<const IDoubleAnimation &>(static_cast<const D &>(*this))->put_EasingFunction(get(value)));
}

template <typename D> bool impl_IDoubleAnimation<D>::EnableDependentAnimation() const
{
    bool value {};
    check_hresult(static_cast<const IDoubleAnimation &>(static_cast<const D &>(*this))->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void impl_IDoubleAnimation<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(static_cast<const IDoubleAnimation &>(static_cast<const D &>(*this))->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDoubleAnimationStatics<D>::FromProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDoubleAnimationStatics &>(static_cast<const D &>(*this))->get_FromProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDoubleAnimationStatics<D>::ToProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDoubleAnimationStatics &>(static_cast<const D &>(*this))->get_ToProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDoubleAnimationStatics<D>::ByProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDoubleAnimationStatics &>(static_cast<const D &>(*this))->get_ByProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDoubleAnimationStatics<D>::EasingFunctionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDoubleAnimationStatics &>(static_cast<const D &>(*this))->get_EasingFunctionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDoubleAnimationStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDoubleAnimationStatics &>(static_cast<const D &>(*this))->get_EnableDependentAnimationProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection impl_IDoubleAnimationUsingKeyFrames<D>::KeyFrames() const
{
    Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection value { nullptr };
    check_hresult(static_cast<const IDoubleAnimationUsingKeyFrames &>(static_cast<const D &>(*this))->get_KeyFrames(put(value)));
    return value;
}

template <typename D> bool impl_IDoubleAnimationUsingKeyFrames<D>::EnableDependentAnimation() const
{
    bool value {};
    check_hresult(static_cast<const IDoubleAnimationUsingKeyFrames &>(static_cast<const D &>(*this))->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void impl_IDoubleAnimationUsingKeyFrames<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(static_cast<const IDoubleAnimationUsingKeyFrames &>(static_cast<const D &>(*this))->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDoubleAnimationUsingKeyFramesStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDoubleAnimationUsingKeyFramesStatics &>(static_cast<const D &>(*this))->get_EnableDependentAnimationProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IDragItemThemeAnimation<D>::TargetName() const
{
    hstring value;
    check_hresult(static_cast<const IDragItemThemeAnimation &>(static_cast<const D &>(*this))->get_TargetName(put(value)));
    return value;
}

template <typename D> void impl_IDragItemThemeAnimation<D>::TargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IDragItemThemeAnimation &>(static_cast<const D &>(*this))->put_TargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDragItemThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDragItemThemeAnimationStatics &>(static_cast<const D &>(*this))->get_TargetNameProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IDragOverThemeAnimation<D>::TargetName() const
{
    hstring value;
    check_hresult(static_cast<const IDragOverThemeAnimation &>(static_cast<const D &>(*this))->get_TargetName(put(value)));
    return value;
}

template <typename D> void impl_IDragOverThemeAnimation<D>::TargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IDragOverThemeAnimation &>(static_cast<const D &>(*this))->put_TargetName(get(value)));
}

template <typename D> double impl_IDragOverThemeAnimation<D>::ToOffset() const
{
    double value {};
    check_hresult(static_cast<const IDragOverThemeAnimation &>(static_cast<const D &>(*this))->get_ToOffset(&value));
    return value;
}

template <typename D> void impl_IDragOverThemeAnimation<D>::ToOffset(double value) const
{
    check_hresult(static_cast<const IDragOverThemeAnimation &>(static_cast<const D &>(*this))->put_ToOffset(value));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::AnimationDirection impl_IDragOverThemeAnimation<D>::Direction() const
{
    Windows::UI::Xaml::Controls::Primitives::AnimationDirection value {};
    check_hresult(static_cast<const IDragOverThemeAnimation &>(static_cast<const D &>(*this))->get_Direction(&value));
    return value;
}

template <typename D> void impl_IDragOverThemeAnimation<D>::Direction(Windows::UI::Xaml::Controls::Primitives::AnimationDirection value) const
{
    check_hresult(static_cast<const IDragOverThemeAnimation &>(static_cast<const D &>(*this))->put_Direction(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDragOverThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDragOverThemeAnimationStatics &>(static_cast<const D &>(*this))->get_TargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDragOverThemeAnimationStatics<D>::ToOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDragOverThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ToOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDragOverThemeAnimationStatics<D>::DirectionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDragOverThemeAnimationStatics &>(static_cast<const D &>(*this))->get_DirectionProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IDrillInThemeAnimation<D>::EntranceTargetName() const
{
    hstring value;
    check_hresult(static_cast<const IDrillInThemeAnimation &>(static_cast<const D &>(*this))->get_EntranceTargetName(put(value)));
    return value;
}

template <typename D> void impl_IDrillInThemeAnimation<D>::EntranceTargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IDrillInThemeAnimation &>(static_cast<const D &>(*this))->put_EntranceTargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_IDrillInThemeAnimation<D>::EntranceTarget() const
{
    Windows::UI::Xaml::DependencyObject value { nullptr };
    check_hresult(static_cast<const IDrillInThemeAnimation &>(static_cast<const D &>(*this))->get_EntranceTarget(put(value)));
    return value;
}

template <typename D> void impl_IDrillInThemeAnimation<D>::EntranceTarget(const Windows::UI::Xaml::DependencyObject & value) const
{
    check_hresult(static_cast<const IDrillInThemeAnimation &>(static_cast<const D &>(*this))->put_EntranceTarget(get(value)));
}

template <typename D> hstring impl_IDrillInThemeAnimation<D>::ExitTargetName() const
{
    hstring value;
    check_hresult(static_cast<const IDrillInThemeAnimation &>(static_cast<const D &>(*this))->get_ExitTargetName(put(value)));
    return value;
}

template <typename D> void impl_IDrillInThemeAnimation<D>::ExitTargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IDrillInThemeAnimation &>(static_cast<const D &>(*this))->put_ExitTargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_IDrillInThemeAnimation<D>::ExitTarget() const
{
    Windows::UI::Xaml::DependencyObject value { nullptr };
    check_hresult(static_cast<const IDrillInThemeAnimation &>(static_cast<const D &>(*this))->get_ExitTarget(put(value)));
    return value;
}

template <typename D> void impl_IDrillInThemeAnimation<D>::ExitTarget(const Windows::UI::Xaml::DependencyObject & value) const
{
    check_hresult(static_cast<const IDrillInThemeAnimation &>(static_cast<const D &>(*this))->put_ExitTarget(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDrillInThemeAnimationStatics<D>::EntranceTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDrillInThemeAnimationStatics &>(static_cast<const D &>(*this))->get_EntranceTargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDrillInThemeAnimationStatics<D>::EntranceTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDrillInThemeAnimationStatics &>(static_cast<const D &>(*this))->get_EntranceTargetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDrillInThemeAnimationStatics<D>::ExitTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDrillInThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ExitTargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDrillInThemeAnimationStatics<D>::ExitTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDrillInThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ExitTargetProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IDrillOutThemeAnimation<D>::EntranceTargetName() const
{
    hstring value;
    check_hresult(static_cast<const IDrillOutThemeAnimation &>(static_cast<const D &>(*this))->get_EntranceTargetName(put(value)));
    return value;
}

template <typename D> void impl_IDrillOutThemeAnimation<D>::EntranceTargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IDrillOutThemeAnimation &>(static_cast<const D &>(*this))->put_EntranceTargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_IDrillOutThemeAnimation<D>::EntranceTarget() const
{
    Windows::UI::Xaml::DependencyObject value { nullptr };
    check_hresult(static_cast<const IDrillOutThemeAnimation &>(static_cast<const D &>(*this))->get_EntranceTarget(put(value)));
    return value;
}

template <typename D> void impl_IDrillOutThemeAnimation<D>::EntranceTarget(const Windows::UI::Xaml::DependencyObject & value) const
{
    check_hresult(static_cast<const IDrillOutThemeAnimation &>(static_cast<const D &>(*this))->put_EntranceTarget(get(value)));
}

template <typename D> hstring impl_IDrillOutThemeAnimation<D>::ExitTargetName() const
{
    hstring value;
    check_hresult(static_cast<const IDrillOutThemeAnimation &>(static_cast<const D &>(*this))->get_ExitTargetName(put(value)));
    return value;
}

template <typename D> void impl_IDrillOutThemeAnimation<D>::ExitTargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IDrillOutThemeAnimation &>(static_cast<const D &>(*this))->put_ExitTargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_IDrillOutThemeAnimation<D>::ExitTarget() const
{
    Windows::UI::Xaml::DependencyObject value { nullptr };
    check_hresult(static_cast<const IDrillOutThemeAnimation &>(static_cast<const D &>(*this))->get_ExitTarget(put(value)));
    return value;
}

template <typename D> void impl_IDrillOutThemeAnimation<D>::ExitTarget(const Windows::UI::Xaml::DependencyObject & value) const
{
    check_hresult(static_cast<const IDrillOutThemeAnimation &>(static_cast<const D &>(*this))->put_ExitTarget(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDrillOutThemeAnimationStatics<D>::EntranceTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDrillOutThemeAnimationStatics &>(static_cast<const D &>(*this))->get_EntranceTargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDrillOutThemeAnimationStatics<D>::EntranceTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDrillOutThemeAnimationStatics &>(static_cast<const D &>(*this))->get_EntranceTargetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDrillOutThemeAnimationStatics<D>::ExitTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDrillOutThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ExitTargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDrillOutThemeAnimationStatics<D>::ExitTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDrillOutThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ExitTargetProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IDropTargetItemThemeAnimation<D>::TargetName() const
{
    hstring value;
    check_hresult(static_cast<const IDropTargetItemThemeAnimation &>(static_cast<const D &>(*this))->get_TargetName(put(value)));
    return value;
}

template <typename D> void impl_IDropTargetItemThemeAnimation<D>::TargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IDropTargetItemThemeAnimation &>(static_cast<const D &>(*this))->put_TargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDropTargetItemThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDropTargetItemThemeAnimationStatics &>(static_cast<const D &>(*this))->get_TargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase impl_IEasingColorKeyFrame<D>::EasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value { nullptr };
    check_hresult(static_cast<const IEasingColorKeyFrame &>(static_cast<const D &>(*this))->get_EasingFunction(put(value)));
    return value;
}

template <typename D> void impl_IEasingColorKeyFrame<D>::EasingFunction(const Windows::UI::Xaml::Media::Animation::EasingFunctionBase & value) const
{
    check_hresult(static_cast<const IEasingColorKeyFrame &>(static_cast<const D &>(*this))->put_EasingFunction(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IEasingColorKeyFrameStatics<D>::EasingFunctionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IEasingColorKeyFrameStatics &>(static_cast<const D &>(*this))->get_EasingFunctionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase impl_IEasingDoubleKeyFrame<D>::EasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value { nullptr };
    check_hresult(static_cast<const IEasingDoubleKeyFrame &>(static_cast<const D &>(*this))->get_EasingFunction(put(value)));
    return value;
}

template <typename D> void impl_IEasingDoubleKeyFrame<D>::EasingFunction(const Windows::UI::Xaml::Media::Animation::EasingFunctionBase & value) const
{
    check_hresult(static_cast<const IEasingDoubleKeyFrame &>(static_cast<const D &>(*this))->put_EasingFunction(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IEasingDoubleKeyFrameStatics<D>::EasingFunctionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IEasingDoubleKeyFrameStatics &>(static_cast<const D &>(*this))->get_EasingFunctionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase impl_IEasingPointKeyFrame<D>::EasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value { nullptr };
    check_hresult(static_cast<const IEasingPointKeyFrame &>(static_cast<const D &>(*this))->get_EasingFunction(put(value)));
    return value;
}

template <typename D> void impl_IEasingPointKeyFrame<D>::EasingFunction(const Windows::UI::Xaml::Media::Animation::EasingFunctionBase & value) const
{
    check_hresult(static_cast<const IEasingPointKeyFrame &>(static_cast<const D &>(*this))->put_EasingFunction(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IEasingPointKeyFrameStatics<D>::EasingFunctionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IEasingPointKeyFrameStatics &>(static_cast<const D &>(*this))->get_EasingFunctionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation impl_IEdgeUIThemeTransition<D>::Edge() const
{
    Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation value {};
    check_hresult(static_cast<const IEdgeUIThemeTransition &>(static_cast<const D &>(*this))->get_Edge(&value));
    return value;
}

template <typename D> void impl_IEdgeUIThemeTransition<D>::Edge(Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation value) const
{
    check_hresult(static_cast<const IEdgeUIThemeTransition &>(static_cast<const D &>(*this))->put_Edge(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IEdgeUIThemeTransitionStatics<D>::EdgeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IEdgeUIThemeTransitionStatics &>(static_cast<const D &>(*this))->get_EdgeProperty(put(value)));
    return value;
}

template <typename D> int32_t impl_IElasticEase<D>::Oscillations() const
{
    int32_t value {};
    check_hresult(static_cast<const IElasticEase &>(static_cast<const D &>(*this))->get_Oscillations(&value));
    return value;
}

template <typename D> void impl_IElasticEase<D>::Oscillations(int32_t value) const
{
    check_hresult(static_cast<const IElasticEase &>(static_cast<const D &>(*this))->put_Oscillations(value));
}

template <typename D> double impl_IElasticEase<D>::Springiness() const
{
    double value {};
    check_hresult(static_cast<const IElasticEase &>(static_cast<const D &>(*this))->get_Springiness(&value));
    return value;
}

template <typename D> void impl_IElasticEase<D>::Springiness(double value) const
{
    check_hresult(static_cast<const IElasticEase &>(static_cast<const D &>(*this))->put_Springiness(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IElasticEaseStatics<D>::OscillationsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IElasticEaseStatics &>(static_cast<const D &>(*this))->get_OscillationsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IElasticEaseStatics<D>::SpringinessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IElasticEaseStatics &>(static_cast<const D &>(*this))->get_SpringinessProperty(put(value)));
    return value;
}

template <typename D> double impl_IEntranceThemeTransition<D>::FromHorizontalOffset() const
{
    double value {};
    check_hresult(static_cast<const IEntranceThemeTransition &>(static_cast<const D &>(*this))->get_FromHorizontalOffset(&value));
    return value;
}

template <typename D> void impl_IEntranceThemeTransition<D>::FromHorizontalOffset(double value) const
{
    check_hresult(static_cast<const IEntranceThemeTransition &>(static_cast<const D &>(*this))->put_FromHorizontalOffset(value));
}

template <typename D> double impl_IEntranceThemeTransition<D>::FromVerticalOffset() const
{
    double value {};
    check_hresult(static_cast<const IEntranceThemeTransition &>(static_cast<const D &>(*this))->get_FromVerticalOffset(&value));
    return value;
}

template <typename D> void impl_IEntranceThemeTransition<D>::FromVerticalOffset(double value) const
{
    check_hresult(static_cast<const IEntranceThemeTransition &>(static_cast<const D &>(*this))->put_FromVerticalOffset(value));
}

template <typename D> bool impl_IEntranceThemeTransition<D>::IsStaggeringEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IEntranceThemeTransition &>(static_cast<const D &>(*this))->get_IsStaggeringEnabled(&value));
    return value;
}

template <typename D> void impl_IEntranceThemeTransition<D>::IsStaggeringEnabled(bool value) const
{
    check_hresult(static_cast<const IEntranceThemeTransition &>(static_cast<const D &>(*this))->put_IsStaggeringEnabled(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IEntranceThemeTransitionStatics<D>::FromHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IEntranceThemeTransitionStatics &>(static_cast<const D &>(*this))->get_FromHorizontalOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IEntranceThemeTransitionStatics<D>::FromVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IEntranceThemeTransitionStatics &>(static_cast<const D &>(*this))->get_FromVerticalOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IEntranceThemeTransitionStatics<D>::IsStaggeringEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IEntranceThemeTransitionStatics &>(static_cast<const D &>(*this))->get_IsStaggeringEnabledProperty(put(value)));
    return value;
}

template <typename D> double impl_IExponentialEase<D>::Exponent() const
{
    double value {};
    check_hresult(static_cast<const IExponentialEase &>(static_cast<const D &>(*this))->get_Exponent(&value));
    return value;
}

template <typename D> void impl_IExponentialEase<D>::Exponent(double value) const
{
    check_hresult(static_cast<const IExponentialEase &>(static_cast<const D &>(*this))->put_Exponent(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IExponentialEaseStatics<D>::ExponentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IExponentialEaseStatics &>(static_cast<const D &>(*this))->get_ExponentProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IFadeInThemeAnimation<D>::TargetName() const
{
    hstring value;
    check_hresult(static_cast<const IFadeInThemeAnimation &>(static_cast<const D &>(*this))->get_TargetName(put(value)));
    return value;
}

template <typename D> void impl_IFadeInThemeAnimation<D>::TargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IFadeInThemeAnimation &>(static_cast<const D &>(*this))->put_TargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFadeInThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFadeInThemeAnimationStatics &>(static_cast<const D &>(*this))->get_TargetNameProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IFadeOutThemeAnimation<D>::TargetName() const
{
    hstring value;
    check_hresult(static_cast<const IFadeOutThemeAnimation &>(static_cast<const D &>(*this))->get_TargetName(put(value)));
    return value;
}

template <typename D> void impl_IFadeOutThemeAnimation<D>::TargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IFadeOutThemeAnimation &>(static_cast<const D &>(*this))->put_TargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFadeOutThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFadeOutThemeAnimationStatics &>(static_cast<const D &>(*this))->get_TargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection impl_IObjectAnimationUsingKeyFrames<D>::KeyFrames() const
{
    Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection value { nullptr };
    check_hresult(static_cast<const IObjectAnimationUsingKeyFrames &>(static_cast<const D &>(*this))->get_KeyFrames(put(value)));
    return value;
}

template <typename D> bool impl_IObjectAnimationUsingKeyFrames<D>::EnableDependentAnimation() const
{
    bool value {};
    check_hresult(static_cast<const IObjectAnimationUsingKeyFrames &>(static_cast<const D &>(*this))->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void impl_IObjectAnimationUsingKeyFrames<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(static_cast<const IObjectAnimationUsingKeyFrames &>(static_cast<const D &>(*this))->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IObjectAnimationUsingKeyFramesStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IObjectAnimationUsingKeyFramesStatics &>(static_cast<const D &>(*this))->get_EnableDependentAnimationProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation impl_IPaneThemeTransition<D>::Edge() const
{
    Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation value {};
    check_hresult(static_cast<const IPaneThemeTransition &>(static_cast<const D &>(*this))->get_Edge(&value));
    return value;
}

template <typename D> void impl_IPaneThemeTransition<D>::Edge(Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation value) const
{
    check_hresult(static_cast<const IPaneThemeTransition &>(static_cast<const D &>(*this))->put_Edge(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPaneThemeTransitionStatics<D>::EdgeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPaneThemeTransitionStatics &>(static_cast<const D &>(*this))->get_EdgeProperty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Point> impl_IPointAnimation<D>::From() const
{
    Windows::Foundation::IReference<Windows::Foundation::Point> value;
    check_hresult(static_cast<const IPointAnimation &>(static_cast<const D &>(*this))->get_From(put(value)));
    return value;
}

template <typename D> void impl_IPointAnimation<D>::From(const Windows::Foundation::IReference<Windows::Foundation::Point> & value) const
{
    check_hresult(static_cast<const IPointAnimation &>(static_cast<const D &>(*this))->put_From(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Point> impl_IPointAnimation<D>::To() const
{
    Windows::Foundation::IReference<Windows::Foundation::Point> value;
    check_hresult(static_cast<const IPointAnimation &>(static_cast<const D &>(*this))->get_To(put(value)));
    return value;
}

template <typename D> void impl_IPointAnimation<D>::To(const Windows::Foundation::IReference<Windows::Foundation::Point> & value) const
{
    check_hresult(static_cast<const IPointAnimation &>(static_cast<const D &>(*this))->put_To(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Point> impl_IPointAnimation<D>::By() const
{
    Windows::Foundation::IReference<Windows::Foundation::Point> value;
    check_hresult(static_cast<const IPointAnimation &>(static_cast<const D &>(*this))->get_By(put(value)));
    return value;
}

template <typename D> void impl_IPointAnimation<D>::By(const Windows::Foundation::IReference<Windows::Foundation::Point> & value) const
{
    check_hresult(static_cast<const IPointAnimation &>(static_cast<const D &>(*this))->put_By(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase impl_IPointAnimation<D>::EasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value { nullptr };
    check_hresult(static_cast<const IPointAnimation &>(static_cast<const D &>(*this))->get_EasingFunction(put(value)));
    return value;
}

template <typename D> void impl_IPointAnimation<D>::EasingFunction(const Windows::UI::Xaml::Media::Animation::EasingFunctionBase & value) const
{
    check_hresult(static_cast<const IPointAnimation &>(static_cast<const D &>(*this))->put_EasingFunction(get(value)));
}

template <typename D> bool impl_IPointAnimation<D>::EnableDependentAnimation() const
{
    bool value {};
    check_hresult(static_cast<const IPointAnimation &>(static_cast<const D &>(*this))->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void impl_IPointAnimation<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(static_cast<const IPointAnimation &>(static_cast<const D &>(*this))->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPointAnimationStatics<D>::FromProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPointAnimationStatics &>(static_cast<const D &>(*this))->get_FromProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPointAnimationStatics<D>::ToProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPointAnimationStatics &>(static_cast<const D &>(*this))->get_ToProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPointAnimationStatics<D>::ByProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPointAnimationStatics &>(static_cast<const D &>(*this))->get_ByProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPointAnimationStatics<D>::EasingFunctionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPointAnimationStatics &>(static_cast<const D &>(*this))->get_EasingFunctionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPointAnimationStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPointAnimationStatics &>(static_cast<const D &>(*this))->get_EnableDependentAnimationProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection impl_IPointAnimationUsingKeyFrames<D>::KeyFrames() const
{
    Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection value { nullptr };
    check_hresult(static_cast<const IPointAnimationUsingKeyFrames &>(static_cast<const D &>(*this))->get_KeyFrames(put(value)));
    return value;
}

template <typename D> bool impl_IPointAnimationUsingKeyFrames<D>::EnableDependentAnimation() const
{
    bool value {};
    check_hresult(static_cast<const IPointAnimationUsingKeyFrames &>(static_cast<const D &>(*this))->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void impl_IPointAnimationUsingKeyFrames<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(static_cast<const IPointAnimationUsingKeyFrames &>(static_cast<const D &>(*this))->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPointAnimationUsingKeyFramesStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPointAnimationUsingKeyFramesStatics &>(static_cast<const D &>(*this))->get_EnableDependentAnimationProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IPointerDownThemeAnimation<D>::TargetName() const
{
    hstring value;
    check_hresult(static_cast<const IPointerDownThemeAnimation &>(static_cast<const D &>(*this))->get_TargetName(put(value)));
    return value;
}

template <typename D> void impl_IPointerDownThemeAnimation<D>::TargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IPointerDownThemeAnimation &>(static_cast<const D &>(*this))->put_TargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPointerDownThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPointerDownThemeAnimationStatics &>(static_cast<const D &>(*this))->get_TargetNameProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IPointerUpThemeAnimation<D>::TargetName() const
{
    hstring value;
    check_hresult(static_cast<const IPointerUpThemeAnimation &>(static_cast<const D &>(*this))->get_TargetName(put(value)));
    return value;
}

template <typename D> void impl_IPointerUpThemeAnimation<D>::TargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IPointerUpThemeAnimation &>(static_cast<const D &>(*this))->put_TargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPointerUpThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPointerUpThemeAnimationStatics &>(static_cast<const D &>(*this))->get_TargetNameProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IPopInThemeAnimation<D>::TargetName() const
{
    hstring value;
    check_hresult(static_cast<const IPopInThemeAnimation &>(static_cast<const D &>(*this))->get_TargetName(put(value)));
    return value;
}

template <typename D> void impl_IPopInThemeAnimation<D>::TargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IPopInThemeAnimation &>(static_cast<const D &>(*this))->put_TargetName(get(value)));
}

template <typename D> double impl_IPopInThemeAnimation<D>::FromHorizontalOffset() const
{
    double value {};
    check_hresult(static_cast<const IPopInThemeAnimation &>(static_cast<const D &>(*this))->get_FromHorizontalOffset(&value));
    return value;
}

template <typename D> void impl_IPopInThemeAnimation<D>::FromHorizontalOffset(double value) const
{
    check_hresult(static_cast<const IPopInThemeAnimation &>(static_cast<const D &>(*this))->put_FromHorizontalOffset(value));
}

template <typename D> double impl_IPopInThemeAnimation<D>::FromVerticalOffset() const
{
    double value {};
    check_hresult(static_cast<const IPopInThemeAnimation &>(static_cast<const D &>(*this))->get_FromVerticalOffset(&value));
    return value;
}

template <typename D> void impl_IPopInThemeAnimation<D>::FromVerticalOffset(double value) const
{
    check_hresult(static_cast<const IPopInThemeAnimation &>(static_cast<const D &>(*this))->put_FromVerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPopInThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPopInThemeAnimationStatics &>(static_cast<const D &>(*this))->get_TargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPopInThemeAnimationStatics<D>::FromHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPopInThemeAnimationStatics &>(static_cast<const D &>(*this))->get_FromHorizontalOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPopInThemeAnimationStatics<D>::FromVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPopInThemeAnimationStatics &>(static_cast<const D &>(*this))->get_FromVerticalOffsetProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IPopOutThemeAnimation<D>::TargetName() const
{
    hstring value;
    check_hresult(static_cast<const IPopOutThemeAnimation &>(static_cast<const D &>(*this))->get_TargetName(put(value)));
    return value;
}

template <typename D> void impl_IPopOutThemeAnimation<D>::TargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IPopOutThemeAnimation &>(static_cast<const D &>(*this))->put_TargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPopOutThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPopOutThemeAnimationStatics &>(static_cast<const D &>(*this))->get_TargetNameProperty(put(value)));
    return value;
}

template <typename D> double impl_IPopupThemeTransition<D>::FromHorizontalOffset() const
{
    double value {};
    check_hresult(static_cast<const IPopupThemeTransition &>(static_cast<const D &>(*this))->get_FromHorizontalOffset(&value));
    return value;
}

template <typename D> void impl_IPopupThemeTransition<D>::FromHorizontalOffset(double value) const
{
    check_hresult(static_cast<const IPopupThemeTransition &>(static_cast<const D &>(*this))->put_FromHorizontalOffset(value));
}

template <typename D> double impl_IPopupThemeTransition<D>::FromVerticalOffset() const
{
    double value {};
    check_hresult(static_cast<const IPopupThemeTransition &>(static_cast<const D &>(*this))->get_FromVerticalOffset(&value));
    return value;
}

template <typename D> void impl_IPopupThemeTransition<D>::FromVerticalOffset(double value) const
{
    check_hresult(static_cast<const IPopupThemeTransition &>(static_cast<const D &>(*this))->put_FromVerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPopupThemeTransitionStatics<D>::FromHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPopupThemeTransitionStatics &>(static_cast<const D &>(*this))->get_FromHorizontalOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPopupThemeTransitionStatics<D>::FromVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPopupThemeTransitionStatics &>(static_cast<const D &>(*this))->get_FromVerticalOffsetProperty(put(value)));
    return value;
}

template <typename D> double impl_IPowerEase<D>::Power() const
{
    double value {};
    check_hresult(static_cast<const IPowerEase &>(static_cast<const D &>(*this))->get_Power(&value));
    return value;
}

template <typename D> void impl_IPowerEase<D>::Power(double value) const
{
    check_hresult(static_cast<const IPowerEase &>(static_cast<const D &>(*this))->put_Power(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPowerEaseStatics<D>::PowerProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPowerEaseStatics &>(static_cast<const D &>(*this))->get_PowerProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IRepositionThemeAnimation<D>::TargetName() const
{
    hstring value;
    check_hresult(static_cast<const IRepositionThemeAnimation &>(static_cast<const D &>(*this))->get_TargetName(put(value)));
    return value;
}

template <typename D> void impl_IRepositionThemeAnimation<D>::TargetName(hstring_ref value) const
{
    check_hresult(static_cast<const IRepositionThemeAnimation &>(static_cast<const D &>(*this))->put_TargetName(get(value)));
}

template <typename D> double impl_IRepositionThemeAnimation<D>::FromHorizontalOffset() const
{
    double value {};
    check_hresult(static_cast<const IRepositionThemeAnimation &>(static_cast<const D &>(*this))->get_FromHorizontalOffset(&value));
    return value;
}

template <typename D> void impl_IRepositionThemeAnimation<D>::FromHorizontalOffset(double value) const
{
    check_hresult(static_cast<const IRepositionThemeAnimation &>(static_cast<const D &>(*this))->put_FromHorizontalOffset(value));
}

template <typename D> double impl_IRepositionThemeAnimation<D>::FromVerticalOffset() const
{
    double value {};
    check_hresult(static_cast<const IRepositionThemeAnimation &>(static_cast<const D &>(*this))->get_FromVerticalOffset(&value));
    return value;
}

template <typename D> void impl_IRepositionThemeAnimation<D>::FromVerticalOffset(double value) const
{
    check_hresult(static_cast<const IRepositionThemeAnimation &>(static_cast<const D &>(*this))->put_FromVerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRepositionThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IRepositionThemeAnimationStatics &>(static_cast<const D &>(*this))->get_TargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRepositionThemeAnimationStatics<D>::FromHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IRepositionThemeAnimationStatics &>(static_cast<const D &>(*this))->get_FromHorizontalOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRepositionThemeAnimationStatics<D>::FromVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IRepositionThemeAnimationStatics &>(static_cast<const D &>(*this))->get_FromVerticalOffsetProperty(put(value)));
    return value;
}

template <typename D> bool impl_IRepositionThemeTransition2<D>::IsStaggeringEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IRepositionThemeTransition2 &>(static_cast<const D &>(*this))->get_IsStaggeringEnabled(&value));
    return value;
}

template <typename D> void impl_IRepositionThemeTransition2<D>::IsStaggeringEnabled(bool value) const
{
    check_hresult(static_cast<const IRepositionThemeTransition2 &>(static_cast<const D &>(*this))->put_IsStaggeringEnabled(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRepositionThemeTransitionStatics2<D>::IsStaggeringEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IRepositionThemeTransitionStatics2 &>(static_cast<const D &>(*this))->get_IsStaggeringEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeySpline impl_ISplineColorKeyFrame<D>::KeySpline() const
{
    Windows::UI::Xaml::Media::Animation::KeySpline value { nullptr };
    check_hresult(static_cast<const ISplineColorKeyFrame &>(static_cast<const D &>(*this))->get_KeySpline(put(value)));
    return value;
}

template <typename D> void impl_ISplineColorKeyFrame<D>::KeySpline(const Windows::UI::Xaml::Media::Animation::KeySpline & value) const
{
    check_hresult(static_cast<const ISplineColorKeyFrame &>(static_cast<const D &>(*this))->put_KeySpline(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplineColorKeyFrameStatics<D>::KeySplineProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplineColorKeyFrameStatics &>(static_cast<const D &>(*this))->get_KeySplineProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeySpline impl_ISplineDoubleKeyFrame<D>::KeySpline() const
{
    Windows::UI::Xaml::Media::Animation::KeySpline value { nullptr };
    check_hresult(static_cast<const ISplineDoubleKeyFrame &>(static_cast<const D &>(*this))->get_KeySpline(put(value)));
    return value;
}

template <typename D> void impl_ISplineDoubleKeyFrame<D>::KeySpline(const Windows::UI::Xaml::Media::Animation::KeySpline & value) const
{
    check_hresult(static_cast<const ISplineDoubleKeyFrame &>(static_cast<const D &>(*this))->put_KeySpline(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplineDoubleKeyFrameStatics<D>::KeySplineProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplineDoubleKeyFrameStatics &>(static_cast<const D &>(*this))->get_KeySplineProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeySpline impl_ISplinePointKeyFrame<D>::KeySpline() const
{
    Windows::UI::Xaml::Media::Animation::KeySpline value { nullptr };
    check_hresult(static_cast<const ISplinePointKeyFrame &>(static_cast<const D &>(*this))->get_KeySpline(put(value)));
    return value;
}

template <typename D> void impl_ISplinePointKeyFrame<D>::KeySpline(const Windows::UI::Xaml::Media::Animation::KeySpline & value) const
{
    check_hresult(static_cast<const ISplinePointKeyFrame &>(static_cast<const D &>(*this))->put_KeySpline(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplinePointKeyFrameStatics<D>::KeySplineProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplinePointKeyFrameStatics &>(static_cast<const D &>(*this))->get_KeySplineProperty(put(value)));
    return value;
}

template <typename D> hstring impl_ISplitCloseThemeAnimation<D>::OpenedTargetName() const
{
    hstring value;
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->get_OpenedTargetName(put(value)));
    return value;
}

template <typename D> void impl_ISplitCloseThemeAnimation<D>::OpenedTargetName(hstring_ref value) const
{
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->put_OpenedTargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_ISplitCloseThemeAnimation<D>::OpenedTarget() const
{
    Windows::UI::Xaml::DependencyObject value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->get_OpenedTarget(put(value)));
    return value;
}

template <typename D> void impl_ISplitCloseThemeAnimation<D>::OpenedTarget(const Windows::UI::Xaml::DependencyObject & value) const
{
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->put_OpenedTarget(get(value)));
}

template <typename D> hstring impl_ISplitCloseThemeAnimation<D>::ClosedTargetName() const
{
    hstring value;
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->get_ClosedTargetName(put(value)));
    return value;
}

template <typename D> void impl_ISplitCloseThemeAnimation<D>::ClosedTargetName(hstring_ref value) const
{
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->put_ClosedTargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_ISplitCloseThemeAnimation<D>::ClosedTarget() const
{
    Windows::UI::Xaml::DependencyObject value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->get_ClosedTarget(put(value)));
    return value;
}

template <typename D> void impl_ISplitCloseThemeAnimation<D>::ClosedTarget(const Windows::UI::Xaml::DependencyObject & value) const
{
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->put_ClosedTarget(get(value)));
}

template <typename D> hstring impl_ISplitCloseThemeAnimation<D>::ContentTargetName() const
{
    hstring value;
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->get_ContentTargetName(put(value)));
    return value;
}

template <typename D> void impl_ISplitCloseThemeAnimation<D>::ContentTargetName(hstring_ref value) const
{
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->put_ContentTargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_ISplitCloseThemeAnimation<D>::ContentTarget() const
{
    Windows::UI::Xaml::DependencyObject value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->get_ContentTarget(put(value)));
    return value;
}

template <typename D> void impl_ISplitCloseThemeAnimation<D>::ContentTarget(const Windows::UI::Xaml::DependencyObject & value) const
{
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->put_ContentTarget(get(value)));
}

template <typename D> double impl_ISplitCloseThemeAnimation<D>::OpenedLength() const
{
    double value {};
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->get_OpenedLength(&value));
    return value;
}

template <typename D> void impl_ISplitCloseThemeAnimation<D>::OpenedLength(double value) const
{
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->put_OpenedLength(value));
}

template <typename D> double impl_ISplitCloseThemeAnimation<D>::ClosedLength() const
{
    double value {};
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->get_ClosedLength(&value));
    return value;
}

template <typename D> void impl_ISplitCloseThemeAnimation<D>::ClosedLength(double value) const
{
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->put_ClosedLength(value));
}

template <typename D> double impl_ISplitCloseThemeAnimation<D>::OffsetFromCenter() const
{
    double value {};
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->get_OffsetFromCenter(&value));
    return value;
}

template <typename D> void impl_ISplitCloseThemeAnimation<D>::OffsetFromCenter(double value) const
{
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->put_OffsetFromCenter(value));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::AnimationDirection impl_ISplitCloseThemeAnimation<D>::ContentTranslationDirection() const
{
    Windows::UI::Xaml::Controls::Primitives::AnimationDirection value {};
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->get_ContentTranslationDirection(&value));
    return value;
}

template <typename D> void impl_ISplitCloseThemeAnimation<D>::ContentTranslationDirection(Windows::UI::Xaml::Controls::Primitives::AnimationDirection value) const
{
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->put_ContentTranslationDirection(value));
}

template <typename D> double impl_ISplitCloseThemeAnimation<D>::ContentTranslationOffset() const
{
    double value {};
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->get_ContentTranslationOffset(&value));
    return value;
}

template <typename D> void impl_ISplitCloseThemeAnimation<D>::ContentTranslationOffset(double value) const
{
    check_hresult(static_cast<const ISplitCloseThemeAnimation &>(static_cast<const D &>(*this))->put_ContentTranslationOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitCloseThemeAnimationStatics<D>::OpenedTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimationStatics &>(static_cast<const D &>(*this))->get_OpenedTargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitCloseThemeAnimationStatics<D>::OpenedTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimationStatics &>(static_cast<const D &>(*this))->get_OpenedTargetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitCloseThemeAnimationStatics<D>::ClosedTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ClosedTargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitCloseThemeAnimationStatics<D>::ClosedTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ClosedTargetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitCloseThemeAnimationStatics<D>::ContentTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ContentTargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitCloseThemeAnimationStatics<D>::ContentTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ContentTargetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitCloseThemeAnimationStatics<D>::OpenedLengthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimationStatics &>(static_cast<const D &>(*this))->get_OpenedLengthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitCloseThemeAnimationStatics<D>::ClosedLengthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ClosedLengthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitCloseThemeAnimationStatics<D>::OffsetFromCenterProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimationStatics &>(static_cast<const D &>(*this))->get_OffsetFromCenterProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitCloseThemeAnimationStatics<D>::ContentTranslationDirectionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ContentTranslationDirectionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitCloseThemeAnimationStatics<D>::ContentTranslationOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitCloseThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ContentTranslationOffsetProperty(put(value)));
    return value;
}

template <typename D> hstring impl_ISplitOpenThemeAnimation<D>::OpenedTargetName() const
{
    hstring value;
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->get_OpenedTargetName(put(value)));
    return value;
}

template <typename D> void impl_ISplitOpenThemeAnimation<D>::OpenedTargetName(hstring_ref value) const
{
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->put_OpenedTargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_ISplitOpenThemeAnimation<D>::OpenedTarget() const
{
    Windows::UI::Xaml::DependencyObject value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->get_OpenedTarget(put(value)));
    return value;
}

template <typename D> void impl_ISplitOpenThemeAnimation<D>::OpenedTarget(const Windows::UI::Xaml::DependencyObject & value) const
{
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->put_OpenedTarget(get(value)));
}

template <typename D> hstring impl_ISplitOpenThemeAnimation<D>::ClosedTargetName() const
{
    hstring value;
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->get_ClosedTargetName(put(value)));
    return value;
}

template <typename D> void impl_ISplitOpenThemeAnimation<D>::ClosedTargetName(hstring_ref value) const
{
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->put_ClosedTargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_ISplitOpenThemeAnimation<D>::ClosedTarget() const
{
    Windows::UI::Xaml::DependencyObject value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->get_ClosedTarget(put(value)));
    return value;
}

template <typename D> void impl_ISplitOpenThemeAnimation<D>::ClosedTarget(const Windows::UI::Xaml::DependencyObject & value) const
{
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->put_ClosedTarget(get(value)));
}

template <typename D> hstring impl_ISplitOpenThemeAnimation<D>::ContentTargetName() const
{
    hstring value;
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->get_ContentTargetName(put(value)));
    return value;
}

template <typename D> void impl_ISplitOpenThemeAnimation<D>::ContentTargetName(hstring_ref value) const
{
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->put_ContentTargetName(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_ISplitOpenThemeAnimation<D>::ContentTarget() const
{
    Windows::UI::Xaml::DependencyObject value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->get_ContentTarget(put(value)));
    return value;
}

template <typename D> void impl_ISplitOpenThemeAnimation<D>::ContentTarget(const Windows::UI::Xaml::DependencyObject & value) const
{
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->put_ContentTarget(get(value)));
}

template <typename D> double impl_ISplitOpenThemeAnimation<D>::OpenedLength() const
{
    double value {};
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->get_OpenedLength(&value));
    return value;
}

template <typename D> void impl_ISplitOpenThemeAnimation<D>::OpenedLength(double value) const
{
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->put_OpenedLength(value));
}

template <typename D> double impl_ISplitOpenThemeAnimation<D>::ClosedLength() const
{
    double value {};
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->get_ClosedLength(&value));
    return value;
}

template <typename D> void impl_ISplitOpenThemeAnimation<D>::ClosedLength(double value) const
{
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->put_ClosedLength(value));
}

template <typename D> double impl_ISplitOpenThemeAnimation<D>::OffsetFromCenter() const
{
    double value {};
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->get_OffsetFromCenter(&value));
    return value;
}

template <typename D> void impl_ISplitOpenThemeAnimation<D>::OffsetFromCenter(double value) const
{
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->put_OffsetFromCenter(value));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::AnimationDirection impl_ISplitOpenThemeAnimation<D>::ContentTranslationDirection() const
{
    Windows::UI::Xaml::Controls::Primitives::AnimationDirection value {};
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->get_ContentTranslationDirection(&value));
    return value;
}

template <typename D> void impl_ISplitOpenThemeAnimation<D>::ContentTranslationDirection(Windows::UI::Xaml::Controls::Primitives::AnimationDirection value) const
{
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->put_ContentTranslationDirection(value));
}

template <typename D> double impl_ISplitOpenThemeAnimation<D>::ContentTranslationOffset() const
{
    double value {};
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->get_ContentTranslationOffset(&value));
    return value;
}

template <typename D> void impl_ISplitOpenThemeAnimation<D>::ContentTranslationOffset(double value) const
{
    check_hresult(static_cast<const ISplitOpenThemeAnimation &>(static_cast<const D &>(*this))->put_ContentTranslationOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitOpenThemeAnimationStatics<D>::OpenedTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimationStatics &>(static_cast<const D &>(*this))->get_OpenedTargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitOpenThemeAnimationStatics<D>::OpenedTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimationStatics &>(static_cast<const D &>(*this))->get_OpenedTargetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitOpenThemeAnimationStatics<D>::ClosedTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ClosedTargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitOpenThemeAnimationStatics<D>::ClosedTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ClosedTargetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitOpenThemeAnimationStatics<D>::ContentTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ContentTargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitOpenThemeAnimationStatics<D>::ContentTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ContentTargetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitOpenThemeAnimationStatics<D>::OpenedLengthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimationStatics &>(static_cast<const D &>(*this))->get_OpenedLengthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitOpenThemeAnimationStatics<D>::ClosedLengthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ClosedLengthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitOpenThemeAnimationStatics<D>::OffsetFromCenterProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimationStatics &>(static_cast<const D &>(*this))->get_OffsetFromCenterProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitOpenThemeAnimationStatics<D>::ContentTranslationDirectionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ContentTranslationDirectionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISplitOpenThemeAnimationStatics<D>::ContentTranslationOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISplitOpenThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ContentTranslationOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::TimelineCollection impl_IStoryboard<D>::Children() const
{
    Windows::UI::Xaml::Media::Animation::TimelineCollection value { nullptr };
    check_hresult(static_cast<const IStoryboard &>(static_cast<const D &>(*this))->get_Children(put(value)));
    return value;
}

template <typename D> void impl_IStoryboard<D>::Seek(const Windows::Foundation::TimeSpan & offset) const
{
    check_hresult(static_cast<const IStoryboard &>(static_cast<const D &>(*this))->abi_Seek(get(offset)));
}

template <typename D> void impl_IStoryboard<D>::Stop() const
{
    check_hresult(static_cast<const IStoryboard &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> void impl_IStoryboard<D>::Begin() const
{
    check_hresult(static_cast<const IStoryboard &>(static_cast<const D &>(*this))->abi_Begin());
}

template <typename D> void impl_IStoryboard<D>::Pause() const
{
    check_hresult(static_cast<const IStoryboard &>(static_cast<const D &>(*this))->abi_Pause());
}

template <typename D> void impl_IStoryboard<D>::Resume() const
{
    check_hresult(static_cast<const IStoryboard &>(static_cast<const D &>(*this))->abi_Resume());
}

template <typename D> Windows::UI::Xaml::Media::Animation::ClockState impl_IStoryboard<D>::GetCurrentState() const
{
    Windows::UI::Xaml::Media::Animation::ClockState returnValue {};
    check_hresult(static_cast<const IStoryboard &>(static_cast<const D &>(*this))->abi_GetCurrentState(&returnValue));
    return returnValue;
}

template <typename D> Windows::Foundation::TimeSpan impl_IStoryboard<D>::GetCurrentTime() const
{
    Windows::Foundation::TimeSpan returnValue {};
    check_hresult(static_cast<const IStoryboard &>(static_cast<const D &>(*this))->abi_GetCurrentTime(put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IStoryboard<D>::SeekAlignedToLastTick(const Windows::Foundation::TimeSpan & offset) const
{
    check_hresult(static_cast<const IStoryboard &>(static_cast<const D &>(*this))->abi_SeekAlignedToLastTick(get(offset)));
}

template <typename D> void impl_IStoryboard<D>::SkipToFill() const
{
    check_hresult(static_cast<const IStoryboard &>(static_cast<const D &>(*this))->abi_SkipToFill());
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IStoryboardStatics<D>::TargetPropertyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IStoryboardStatics &>(static_cast<const D &>(*this))->get_TargetPropertyProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IStoryboardStatics<D>::GetTargetProperty(const Windows::UI::Xaml::Media::Animation::Timeline & element) const
{
    hstring path;
    check_hresult(static_cast<const IStoryboardStatics &>(static_cast<const D &>(*this))->abi_GetTargetProperty(get(element), put(path)));
    return path;
}

template <typename D> void impl_IStoryboardStatics<D>::SetTargetProperty(const Windows::UI::Xaml::Media::Animation::Timeline & element, hstring_ref path) const
{
    check_hresult(static_cast<const IStoryboardStatics &>(static_cast<const D &>(*this))->abi_SetTargetProperty(get(element), get(path)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IStoryboardStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IStoryboardStatics &>(static_cast<const D &>(*this))->get_TargetNameProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IStoryboardStatics<D>::GetTargetName(const Windows::UI::Xaml::Media::Animation::Timeline & element) const
{
    hstring name;
    check_hresult(static_cast<const IStoryboardStatics &>(static_cast<const D &>(*this))->abi_GetTargetName(get(element), put(name)));
    return name;
}

template <typename D> void impl_IStoryboardStatics<D>::SetTargetName(const Windows::UI::Xaml::Media::Animation::Timeline & element, hstring_ref name) const
{
    check_hresult(static_cast<const IStoryboardStatics &>(static_cast<const D &>(*this))->abi_SetTargetName(get(element), get(name)));
}

template <typename D> void impl_IStoryboardStatics<D>::SetTarget(const Windows::UI::Xaml::Media::Animation::Timeline & timeline, const Windows::UI::Xaml::DependencyObject & target) const
{
    check_hresult(static_cast<const IStoryboardStatics &>(static_cast<const D &>(*this))->abi_SetTarget(get(timeline), get(target)));
}

template <typename D> hstring impl_ISwipeBackThemeAnimation<D>::TargetName() const
{
    hstring value;
    check_hresult(static_cast<const ISwipeBackThemeAnimation &>(static_cast<const D &>(*this))->get_TargetName(put(value)));
    return value;
}

template <typename D> void impl_ISwipeBackThemeAnimation<D>::TargetName(hstring_ref value) const
{
    check_hresult(static_cast<const ISwipeBackThemeAnimation &>(static_cast<const D &>(*this))->put_TargetName(get(value)));
}

template <typename D> double impl_ISwipeBackThemeAnimation<D>::FromHorizontalOffset() const
{
    double value {};
    check_hresult(static_cast<const ISwipeBackThemeAnimation &>(static_cast<const D &>(*this))->get_FromHorizontalOffset(&value));
    return value;
}

template <typename D> void impl_ISwipeBackThemeAnimation<D>::FromHorizontalOffset(double value) const
{
    check_hresult(static_cast<const ISwipeBackThemeAnimation &>(static_cast<const D &>(*this))->put_FromHorizontalOffset(value));
}

template <typename D> double impl_ISwipeBackThemeAnimation<D>::FromVerticalOffset() const
{
    double value {};
    check_hresult(static_cast<const ISwipeBackThemeAnimation &>(static_cast<const D &>(*this))->get_FromVerticalOffset(&value));
    return value;
}

template <typename D> void impl_ISwipeBackThemeAnimation<D>::FromVerticalOffset(double value) const
{
    check_hresult(static_cast<const ISwipeBackThemeAnimation &>(static_cast<const D &>(*this))->put_FromVerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISwipeBackThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISwipeBackThemeAnimationStatics &>(static_cast<const D &>(*this))->get_TargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISwipeBackThemeAnimationStatics<D>::FromHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISwipeBackThemeAnimationStatics &>(static_cast<const D &>(*this))->get_FromHorizontalOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISwipeBackThemeAnimationStatics<D>::FromVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISwipeBackThemeAnimationStatics &>(static_cast<const D &>(*this))->get_FromVerticalOffsetProperty(put(value)));
    return value;
}

template <typename D> hstring impl_ISwipeHintThemeAnimation<D>::TargetName() const
{
    hstring value;
    check_hresult(static_cast<const ISwipeHintThemeAnimation &>(static_cast<const D &>(*this))->get_TargetName(put(value)));
    return value;
}

template <typename D> void impl_ISwipeHintThemeAnimation<D>::TargetName(hstring_ref value) const
{
    check_hresult(static_cast<const ISwipeHintThemeAnimation &>(static_cast<const D &>(*this))->put_TargetName(get(value)));
}

template <typename D> double impl_ISwipeHintThemeAnimation<D>::ToHorizontalOffset() const
{
    double value {};
    check_hresult(static_cast<const ISwipeHintThemeAnimation &>(static_cast<const D &>(*this))->get_ToHorizontalOffset(&value));
    return value;
}

template <typename D> void impl_ISwipeHintThemeAnimation<D>::ToHorizontalOffset(double value) const
{
    check_hresult(static_cast<const ISwipeHintThemeAnimation &>(static_cast<const D &>(*this))->put_ToHorizontalOffset(value));
}

template <typename D> double impl_ISwipeHintThemeAnimation<D>::ToVerticalOffset() const
{
    double value {};
    check_hresult(static_cast<const ISwipeHintThemeAnimation &>(static_cast<const D &>(*this))->get_ToVerticalOffset(&value));
    return value;
}

template <typename D> void impl_ISwipeHintThemeAnimation<D>::ToVerticalOffset(double value) const
{
    check_hresult(static_cast<const ISwipeHintThemeAnimation &>(static_cast<const D &>(*this))->put_ToVerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISwipeHintThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISwipeHintThemeAnimationStatics &>(static_cast<const D &>(*this))->get_TargetNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISwipeHintThemeAnimationStatics<D>::ToHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISwipeHintThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ToHorizontalOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISwipeHintThemeAnimationStatics<D>::ToVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISwipeHintThemeAnimationStatics &>(static_cast<const D &>(*this))->get_ToVerticalOffsetProperty(put(value)));
    return value;
}

template <typename D> event_token impl_IConnectedAnimation<D>::Completed(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Animation::ConnectedAnimation, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IConnectedAnimation &>(static_cast<const D &>(*this))->add_Completed(get(value), &token));
    return token;
}

template <typename D> event_revoker<IConnectedAnimation> impl_IConnectedAnimation<D>::Completed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Animation::ConnectedAnimation, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IConnectedAnimation>(this, &ABI::Windows::UI::Xaml::Media::Animation::IConnectedAnimation::remove_Completed, Completed(value));
}

template <typename D> void impl_IConnectedAnimation<D>::Completed(event_token token) const
{
    check_hresult(static_cast<const IConnectedAnimation &>(static_cast<const D &>(*this))->remove_Completed(token));
}

template <typename D> bool impl_IConnectedAnimation<D>::TryStart(const Windows::UI::Xaml::UIElement & destination) const
{
    bool returnValue {};
    check_hresult(static_cast<const IConnectedAnimation &>(static_cast<const D &>(*this))->abi_TryStart(get(destination), &returnValue));
    return returnValue;
}

template <typename D> void impl_IConnectedAnimation<D>::Cancel() const
{
    check_hresult(static_cast<const IConnectedAnimation &>(static_cast<const D &>(*this))->abi_Cancel());
}

template <typename D> Windows::Foundation::TimeSpan impl_IConnectedAnimationService<D>::DefaultDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IConnectedAnimationService &>(static_cast<const D &>(*this))->get_DefaultDuration(put(value)));
    return value;
}

template <typename D> void impl_IConnectedAnimationService<D>::DefaultDuration(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IConnectedAnimationService &>(static_cast<const D &>(*this))->put_DefaultDuration(get(value)));
}

template <typename D> Windows::UI::Composition::CompositionEasingFunction impl_IConnectedAnimationService<D>::DefaultEasingFunction() const
{
    Windows::UI::Composition::CompositionEasingFunction value { nullptr };
    check_hresult(static_cast<const IConnectedAnimationService &>(static_cast<const D &>(*this))->get_DefaultEasingFunction(put(value)));
    return value;
}

template <typename D> void impl_IConnectedAnimationService<D>::DefaultEasingFunction(const Windows::UI::Composition::CompositionEasingFunction & value) const
{
    check_hresult(static_cast<const IConnectedAnimationService &>(static_cast<const D &>(*this))->put_DefaultEasingFunction(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::ConnectedAnimation impl_IConnectedAnimationService<D>::PrepareToAnimate(hstring_ref key, const Windows::UI::Xaml::UIElement & source) const
{
    Windows::UI::Xaml::Media::Animation::ConnectedAnimation returnValue { nullptr };
    check_hresult(static_cast<const IConnectedAnimationService &>(static_cast<const D &>(*this))->abi_PrepareToAnimate(get(key), get(source), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Animation::ConnectedAnimation impl_IConnectedAnimationService<D>::GetAnimation(hstring_ref key) const
{
    Windows::UI::Xaml::Media::Animation::ConnectedAnimation returnValue { nullptr };
    check_hresult(static_cast<const IConnectedAnimationService &>(static_cast<const D &>(*this))->abi_GetAnimation(get(key), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Animation::ConnectedAnimationService impl_IConnectedAnimationServiceStatics<D>::GetForCurrentView() const
{
    Windows::UI::Xaml::Media::Animation::ConnectedAnimationService returnValue { nullptr };
    check_hresult(static_cast<const IConnectedAnimationServiceStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(returnValue)));
    return returnValue;
}

template <typename D> bool impl_ICommonNavigationTransitionInfo<D>::IsStaggeringEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ICommonNavigationTransitionInfo &>(static_cast<const D &>(*this))->get_IsStaggeringEnabled(&value));
    return value;
}

template <typename D> void impl_ICommonNavigationTransitionInfo<D>::IsStaggeringEnabled(bool value) const
{
    check_hresult(static_cast<const ICommonNavigationTransitionInfo &>(static_cast<const D &>(*this))->put_IsStaggeringEnabled(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICommonNavigationTransitionInfoStatics<D>::IsStaggeringEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICommonNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->get_IsStaggeringEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICommonNavigationTransitionInfoStatics<D>::IsStaggerElementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICommonNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->get_IsStaggerElementProperty(put(value)));
    return value;
}

template <typename D> bool impl_ICommonNavigationTransitionInfoStatics<D>::GetIsStaggerElement(const Windows::UI::Xaml::UIElement & element) const
{
    bool value {};
    check_hresult(static_cast<const ICommonNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->abi_GetIsStaggerElement(get(element), &value));
    return value;
}

template <typename D> void impl_ICommonNavigationTransitionInfoStatics<D>::SetIsStaggerElement(const Windows::UI::Xaml::UIElement & element, bool value) const
{
    check_hresult(static_cast<const ICommonNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->abi_SetIsStaggerElement(get(element), value));
}

template <typename D> Windows::UI::Xaml::UIElement impl_IContinuumNavigationTransitionInfo<D>::ExitElement() const
{
    Windows::UI::Xaml::UIElement value { nullptr };
    check_hresult(static_cast<const IContinuumNavigationTransitionInfo &>(static_cast<const D &>(*this))->get_ExitElement(put(value)));
    return value;
}

template <typename D> void impl_IContinuumNavigationTransitionInfo<D>::ExitElement(const Windows::UI::Xaml::UIElement & value) const
{
    check_hresult(static_cast<const IContinuumNavigationTransitionInfo &>(static_cast<const D &>(*this))->put_ExitElement(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IContinuumNavigationTransitionInfoStatics<D>::ExitElementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IContinuumNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->get_ExitElementProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IContinuumNavigationTransitionInfoStatics<D>::IsEntranceElementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IContinuumNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->get_IsEntranceElementProperty(put(value)));
    return value;
}

template <typename D> bool impl_IContinuumNavigationTransitionInfoStatics<D>::GetIsEntranceElement(const Windows::UI::Xaml::UIElement & element) const
{
    bool value {};
    check_hresult(static_cast<const IContinuumNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->abi_GetIsEntranceElement(get(element), &value));
    return value;
}

template <typename D> void impl_IContinuumNavigationTransitionInfoStatics<D>::SetIsEntranceElement(const Windows::UI::Xaml::UIElement & element, bool value) const
{
    check_hresult(static_cast<const IContinuumNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->abi_SetIsEntranceElement(get(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IContinuumNavigationTransitionInfoStatics<D>::IsExitElementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IContinuumNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->get_IsExitElementProperty(put(value)));
    return value;
}

template <typename D> bool impl_IContinuumNavigationTransitionInfoStatics<D>::GetIsExitElement(const Windows::UI::Xaml::UIElement & element) const
{
    bool value {};
    check_hresult(static_cast<const IContinuumNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->abi_GetIsExitElement(get(element), &value));
    return value;
}

template <typename D> void impl_IContinuumNavigationTransitionInfoStatics<D>::SetIsExitElement(const Windows::UI::Xaml::UIElement & element, bool value) const
{
    check_hresult(static_cast<const IContinuumNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->abi_SetIsExitElement(get(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IContinuumNavigationTransitionInfoStatics<D>::ExitElementContainerProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IContinuumNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->get_ExitElementContainerProperty(put(value)));
    return value;
}

template <typename D> bool impl_IContinuumNavigationTransitionInfoStatics<D>::GetExitElementContainer(const Windows::UI::Xaml::Controls::ListViewBase & element) const
{
    bool value {};
    check_hresult(static_cast<const IContinuumNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->abi_GetExitElementContainer(get(element), &value));
    return value;
}

template <typename D> void impl_IContinuumNavigationTransitionInfoStatics<D>::SetExitElementContainer(const Windows::UI::Xaml::Controls::ListViewBase & element, bool value) const
{
    check_hresult(static_cast<const IContinuumNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->abi_SetExitElementContainer(get(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IEntranceNavigationTransitionInfoStatics<D>::IsTargetElementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IEntranceNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->get_IsTargetElementProperty(put(value)));
    return value;
}

template <typename D> bool impl_IEntranceNavigationTransitionInfoStatics<D>::GetIsTargetElement(const Windows::UI::Xaml::UIElement & element) const
{
    bool value {};
    check_hresult(static_cast<const IEntranceNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->abi_GetIsTargetElement(get(element), &value));
    return value;
}

template <typename D> void impl_IEntranceNavigationTransitionInfoStatics<D>::SetIsTargetElement(const Windows::UI::Xaml::UIElement & element, bool value) const
{
    check_hresult(static_cast<const IEntranceNavigationTransitionInfoStatics &>(static_cast<const D &>(*this))->abi_SetIsTargetElement(get(element), value));
}

template <typename D> Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo impl_INavigationThemeTransition<D>::DefaultNavigationTransitionInfo() const
{
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo value { nullptr };
    check_hresult(static_cast<const INavigationThemeTransition &>(static_cast<const D &>(*this))->get_DefaultNavigationTransitionInfo(put(value)));
    return value;
}

template <typename D> void impl_INavigationThemeTransition<D>::DefaultNavigationTransitionInfo(const Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo & value) const
{
    check_hresult(static_cast<const INavigationThemeTransition &>(static_cast<const D &>(*this))->put_DefaultNavigationTransitionInfo(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_INavigationThemeTransitionStatics<D>::DefaultNavigationTransitionInfoProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const INavigationThemeTransitionStatics &>(static_cast<const D &>(*this))->get_DefaultNavigationTransitionInfoProperty(put(value)));
    return value;
}

inline AddDeleteThemeTransition::AddDeleteThemeTransition() :
    AddDeleteThemeTransition(activate_instance<AddDeleteThemeTransition>())
{}

inline BackEase::BackEase() :
    BackEase(activate_instance<BackEase>())
{}

inline Windows::UI::Xaml::DependencyProperty BackEase::AmplitudeProperty()
{
    return get_activation_factory<BackEase, IBackEaseStatics>().AmplitudeProperty();
}

inline BeginStoryboard::BeginStoryboard() :
    BeginStoryboard(activate_instance<BeginStoryboard>())
{}

inline Windows::UI::Xaml::DependencyProperty BeginStoryboard::StoryboardProperty()
{
    return get_activation_factory<BeginStoryboard, IBeginStoryboardStatics>().StoryboardProperty();
}

inline BounceEase::BounceEase() :
    BounceEase(activate_instance<BounceEase>())
{}

inline Windows::UI::Xaml::DependencyProperty BounceEase::BouncesProperty()
{
    return get_activation_factory<BounceEase, IBounceEaseStatics>().BouncesProperty();
}

inline Windows::UI::Xaml::DependencyProperty BounceEase::BouncinessProperty()
{
    return get_activation_factory<BounceEase, IBounceEaseStatics>().BouncinessProperty();
}

inline CircleEase::CircleEase() :
    CircleEase(activate_instance<CircleEase>())
{}

inline ColorAnimation::ColorAnimation() :
    ColorAnimation(activate_instance<ColorAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty ColorAnimation::FromProperty()
{
    return get_activation_factory<ColorAnimation, IColorAnimationStatics>().FromProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorAnimation::ToProperty()
{
    return get_activation_factory<ColorAnimation, IColorAnimationStatics>().ToProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorAnimation::ByProperty()
{
    return get_activation_factory<ColorAnimation, IColorAnimationStatics>().ByProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorAnimation::EasingFunctionProperty()
{
    return get_activation_factory<ColorAnimation, IColorAnimationStatics>().EasingFunctionProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorAnimation::EnableDependentAnimationProperty()
{
    return get_activation_factory<ColorAnimation, IColorAnimationStatics>().EnableDependentAnimationProperty();
}

inline ColorAnimationUsingKeyFrames::ColorAnimationUsingKeyFrames() :
    ColorAnimationUsingKeyFrames(activate_instance<ColorAnimationUsingKeyFrames>())
{}

inline Windows::UI::Xaml::DependencyProperty ColorAnimationUsingKeyFrames::EnableDependentAnimationProperty()
{
    return get_activation_factory<ColorAnimationUsingKeyFrames, IColorAnimationUsingKeyFramesStatics>().EnableDependentAnimationProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorKeyFrame::ValueProperty()
{
    return get_activation_factory<ColorKeyFrame, IColorKeyFrameStatics>().ValueProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorKeyFrame::KeyTimeProperty()
{
    return get_activation_factory<ColorKeyFrame, IColorKeyFrameStatics>().KeyTimeProperty();
}

inline ColorKeyFrameCollection::ColorKeyFrameCollection() :
    ColorKeyFrameCollection(activate_instance<ColorKeyFrameCollection>())
{}

inline CommonNavigationTransitionInfo::CommonNavigationTransitionInfo() :
    CommonNavigationTransitionInfo(activate_instance<CommonNavigationTransitionInfo>())
{}

inline Windows::UI::Xaml::DependencyProperty CommonNavigationTransitionInfo::IsStaggeringEnabledProperty()
{
    return get_activation_factory<CommonNavigationTransitionInfo, ICommonNavigationTransitionInfoStatics>().IsStaggeringEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty CommonNavigationTransitionInfo::IsStaggerElementProperty()
{
    return get_activation_factory<CommonNavigationTransitionInfo, ICommonNavigationTransitionInfoStatics>().IsStaggerElementProperty();
}

inline bool CommonNavigationTransitionInfo::GetIsStaggerElement(const Windows::UI::Xaml::UIElement & element)
{
    return get_activation_factory<CommonNavigationTransitionInfo, ICommonNavigationTransitionInfoStatics>().GetIsStaggerElement(element);
}

inline void CommonNavigationTransitionInfo::SetIsStaggerElement(const Windows::UI::Xaml::UIElement & element, bool value)
{
    get_activation_factory<CommonNavigationTransitionInfo, ICommonNavigationTransitionInfoStatics>().SetIsStaggerElement(element, value);
}

inline Windows::UI::Xaml::Media::Animation::ConnectedAnimationService ConnectedAnimationService::GetForCurrentView()
{
    return get_activation_factory<ConnectedAnimationService, IConnectedAnimationServiceStatics>().GetForCurrentView();
}

inline ContentThemeTransition::ContentThemeTransition() :
    ContentThemeTransition(activate_instance<ContentThemeTransition>())
{}

inline Windows::UI::Xaml::DependencyProperty ContentThemeTransition::HorizontalOffsetProperty()
{
    return get_activation_factory<ContentThemeTransition, IContentThemeTransitionStatics>().HorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty ContentThemeTransition::VerticalOffsetProperty()
{
    return get_activation_factory<ContentThemeTransition, IContentThemeTransitionStatics>().VerticalOffsetProperty();
}

inline ContinuumNavigationTransitionInfo::ContinuumNavigationTransitionInfo() :
    ContinuumNavigationTransitionInfo(activate_instance<ContinuumNavigationTransitionInfo>())
{}

inline Windows::UI::Xaml::DependencyProperty ContinuumNavigationTransitionInfo::ExitElementProperty()
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, IContinuumNavigationTransitionInfoStatics>().ExitElementProperty();
}

inline Windows::UI::Xaml::DependencyProperty ContinuumNavigationTransitionInfo::IsEntranceElementProperty()
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, IContinuumNavigationTransitionInfoStatics>().IsEntranceElementProperty();
}

inline bool ContinuumNavigationTransitionInfo::GetIsEntranceElement(const Windows::UI::Xaml::UIElement & element)
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, IContinuumNavigationTransitionInfoStatics>().GetIsEntranceElement(element);
}

inline void ContinuumNavigationTransitionInfo::SetIsEntranceElement(const Windows::UI::Xaml::UIElement & element, bool value)
{
    get_activation_factory<ContinuumNavigationTransitionInfo, IContinuumNavigationTransitionInfoStatics>().SetIsEntranceElement(element, value);
}

inline Windows::UI::Xaml::DependencyProperty ContinuumNavigationTransitionInfo::IsExitElementProperty()
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, IContinuumNavigationTransitionInfoStatics>().IsExitElementProperty();
}

inline bool ContinuumNavigationTransitionInfo::GetIsExitElement(const Windows::UI::Xaml::UIElement & element)
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, IContinuumNavigationTransitionInfoStatics>().GetIsExitElement(element);
}

inline void ContinuumNavigationTransitionInfo::SetIsExitElement(const Windows::UI::Xaml::UIElement & element, bool value)
{
    get_activation_factory<ContinuumNavigationTransitionInfo, IContinuumNavigationTransitionInfoStatics>().SetIsExitElement(element, value);
}

inline Windows::UI::Xaml::DependencyProperty ContinuumNavigationTransitionInfo::ExitElementContainerProperty()
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, IContinuumNavigationTransitionInfoStatics>().ExitElementContainerProperty();
}

inline bool ContinuumNavigationTransitionInfo::GetExitElementContainer(const Windows::UI::Xaml::Controls::ListViewBase & element)
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, IContinuumNavigationTransitionInfoStatics>().GetExitElementContainer(element);
}

inline void ContinuumNavigationTransitionInfo::SetExitElementContainer(const Windows::UI::Xaml::Controls::ListViewBase & element, bool value)
{
    get_activation_factory<ContinuumNavigationTransitionInfo, IContinuumNavigationTransitionInfoStatics>().SetExitElementContainer(element, value);
}

inline CubicEase::CubicEase() :
    CubicEase(activate_instance<CubicEase>())
{}

inline DiscreteColorKeyFrame::DiscreteColorKeyFrame() :
    DiscreteColorKeyFrame(activate_instance<DiscreteColorKeyFrame>())
{}

inline DiscreteDoubleKeyFrame::DiscreteDoubleKeyFrame() :
    DiscreteDoubleKeyFrame(activate_instance<DiscreteDoubleKeyFrame>())
{}

inline DiscreteObjectKeyFrame::DiscreteObjectKeyFrame() :
    DiscreteObjectKeyFrame(activate_instance<DiscreteObjectKeyFrame>())
{}

inline DiscretePointKeyFrame::DiscretePointKeyFrame() :
    DiscretePointKeyFrame(activate_instance<DiscretePointKeyFrame>())
{}

inline DoubleAnimation::DoubleAnimation() :
    DoubleAnimation(activate_instance<DoubleAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty DoubleAnimation::FromProperty()
{
    return get_activation_factory<DoubleAnimation, IDoubleAnimationStatics>().FromProperty();
}

inline Windows::UI::Xaml::DependencyProperty DoubleAnimation::ToProperty()
{
    return get_activation_factory<DoubleAnimation, IDoubleAnimationStatics>().ToProperty();
}

inline Windows::UI::Xaml::DependencyProperty DoubleAnimation::ByProperty()
{
    return get_activation_factory<DoubleAnimation, IDoubleAnimationStatics>().ByProperty();
}

inline Windows::UI::Xaml::DependencyProperty DoubleAnimation::EasingFunctionProperty()
{
    return get_activation_factory<DoubleAnimation, IDoubleAnimationStatics>().EasingFunctionProperty();
}

inline Windows::UI::Xaml::DependencyProperty DoubleAnimation::EnableDependentAnimationProperty()
{
    return get_activation_factory<DoubleAnimation, IDoubleAnimationStatics>().EnableDependentAnimationProperty();
}

inline DoubleAnimationUsingKeyFrames::DoubleAnimationUsingKeyFrames() :
    DoubleAnimationUsingKeyFrames(activate_instance<DoubleAnimationUsingKeyFrames>())
{}

inline Windows::UI::Xaml::DependencyProperty DoubleAnimationUsingKeyFrames::EnableDependentAnimationProperty()
{
    return get_activation_factory<DoubleAnimationUsingKeyFrames, IDoubleAnimationUsingKeyFramesStatics>().EnableDependentAnimationProperty();
}

inline Windows::UI::Xaml::DependencyProperty DoubleKeyFrame::ValueProperty()
{
    return get_activation_factory<DoubleKeyFrame, IDoubleKeyFrameStatics>().ValueProperty();
}

inline Windows::UI::Xaml::DependencyProperty DoubleKeyFrame::KeyTimeProperty()
{
    return get_activation_factory<DoubleKeyFrame, IDoubleKeyFrameStatics>().KeyTimeProperty();
}

inline DoubleKeyFrameCollection::DoubleKeyFrameCollection() :
    DoubleKeyFrameCollection(activate_instance<DoubleKeyFrameCollection>())
{}

inline DragItemThemeAnimation::DragItemThemeAnimation() :
    DragItemThemeAnimation(activate_instance<DragItemThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty DragItemThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<DragItemThemeAnimation, IDragItemThemeAnimationStatics>().TargetNameProperty();
}

inline DragOverThemeAnimation::DragOverThemeAnimation() :
    DragOverThemeAnimation(activate_instance<DragOverThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty DragOverThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<DragOverThemeAnimation, IDragOverThemeAnimationStatics>().TargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty DragOverThemeAnimation::ToOffsetProperty()
{
    return get_activation_factory<DragOverThemeAnimation, IDragOverThemeAnimationStatics>().ToOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty DragOverThemeAnimation::DirectionProperty()
{
    return get_activation_factory<DragOverThemeAnimation, IDragOverThemeAnimationStatics>().DirectionProperty();
}

inline DrillInNavigationTransitionInfo::DrillInNavigationTransitionInfo() :
    DrillInNavigationTransitionInfo(activate_instance<DrillInNavigationTransitionInfo>())
{}

inline DrillInThemeAnimation::DrillInThemeAnimation() :
    DrillInThemeAnimation(activate_instance<DrillInThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty DrillInThemeAnimation::EntranceTargetNameProperty()
{
    return get_activation_factory<DrillInThemeAnimation, IDrillInThemeAnimationStatics>().EntranceTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty DrillInThemeAnimation::EntranceTargetProperty()
{
    return get_activation_factory<DrillInThemeAnimation, IDrillInThemeAnimationStatics>().EntranceTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty DrillInThemeAnimation::ExitTargetNameProperty()
{
    return get_activation_factory<DrillInThemeAnimation, IDrillInThemeAnimationStatics>().ExitTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty DrillInThemeAnimation::ExitTargetProperty()
{
    return get_activation_factory<DrillInThemeAnimation, IDrillInThemeAnimationStatics>().ExitTargetProperty();
}

inline DrillOutThemeAnimation::DrillOutThemeAnimation() :
    DrillOutThemeAnimation(activate_instance<DrillOutThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty DrillOutThemeAnimation::EntranceTargetNameProperty()
{
    return get_activation_factory<DrillOutThemeAnimation, IDrillOutThemeAnimationStatics>().EntranceTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty DrillOutThemeAnimation::EntranceTargetProperty()
{
    return get_activation_factory<DrillOutThemeAnimation, IDrillOutThemeAnimationStatics>().EntranceTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty DrillOutThemeAnimation::ExitTargetNameProperty()
{
    return get_activation_factory<DrillOutThemeAnimation, IDrillOutThemeAnimationStatics>().ExitTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty DrillOutThemeAnimation::ExitTargetProperty()
{
    return get_activation_factory<DrillOutThemeAnimation, IDrillOutThemeAnimationStatics>().ExitTargetProperty();
}

inline DropTargetItemThemeAnimation::DropTargetItemThemeAnimation() :
    DropTargetItemThemeAnimation(activate_instance<DropTargetItemThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty DropTargetItemThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<DropTargetItemThemeAnimation, IDropTargetItemThemeAnimationStatics>().TargetNameProperty();
}

inline EasingColorKeyFrame::EasingColorKeyFrame() :
    EasingColorKeyFrame(activate_instance<EasingColorKeyFrame>())
{}

inline Windows::UI::Xaml::DependencyProperty EasingColorKeyFrame::EasingFunctionProperty()
{
    return get_activation_factory<EasingColorKeyFrame, IEasingColorKeyFrameStatics>().EasingFunctionProperty();
}

inline EasingDoubleKeyFrame::EasingDoubleKeyFrame() :
    EasingDoubleKeyFrame(activate_instance<EasingDoubleKeyFrame>())
{}

inline Windows::UI::Xaml::DependencyProperty EasingDoubleKeyFrame::EasingFunctionProperty()
{
    return get_activation_factory<EasingDoubleKeyFrame, IEasingDoubleKeyFrameStatics>().EasingFunctionProperty();
}

inline Windows::UI::Xaml::DependencyProperty EasingFunctionBase::EasingModeProperty()
{
    return get_activation_factory<EasingFunctionBase, IEasingFunctionBaseStatics>().EasingModeProperty();
}

inline EasingPointKeyFrame::EasingPointKeyFrame() :
    EasingPointKeyFrame(activate_instance<EasingPointKeyFrame>())
{}

inline Windows::UI::Xaml::DependencyProperty EasingPointKeyFrame::EasingFunctionProperty()
{
    return get_activation_factory<EasingPointKeyFrame, IEasingPointKeyFrameStatics>().EasingFunctionProperty();
}

inline EdgeUIThemeTransition::EdgeUIThemeTransition() :
    EdgeUIThemeTransition(activate_instance<EdgeUIThemeTransition>())
{}

inline Windows::UI::Xaml::DependencyProperty EdgeUIThemeTransition::EdgeProperty()
{
    return get_activation_factory<EdgeUIThemeTransition, IEdgeUIThemeTransitionStatics>().EdgeProperty();
}

inline ElasticEase::ElasticEase() :
    ElasticEase(activate_instance<ElasticEase>())
{}

inline Windows::UI::Xaml::DependencyProperty ElasticEase::OscillationsProperty()
{
    return get_activation_factory<ElasticEase, IElasticEaseStatics>().OscillationsProperty();
}

inline Windows::UI::Xaml::DependencyProperty ElasticEase::SpringinessProperty()
{
    return get_activation_factory<ElasticEase, IElasticEaseStatics>().SpringinessProperty();
}

inline EntranceNavigationTransitionInfo::EntranceNavigationTransitionInfo() :
    EntranceNavigationTransitionInfo(activate_instance<EntranceNavigationTransitionInfo>())
{}

inline Windows::UI::Xaml::DependencyProperty EntranceNavigationTransitionInfo::IsTargetElementProperty()
{
    return get_activation_factory<EntranceNavigationTransitionInfo, IEntranceNavigationTransitionInfoStatics>().IsTargetElementProperty();
}

inline bool EntranceNavigationTransitionInfo::GetIsTargetElement(const Windows::UI::Xaml::UIElement & element)
{
    return get_activation_factory<EntranceNavigationTransitionInfo, IEntranceNavigationTransitionInfoStatics>().GetIsTargetElement(element);
}

inline void EntranceNavigationTransitionInfo::SetIsTargetElement(const Windows::UI::Xaml::UIElement & element, bool value)
{
    get_activation_factory<EntranceNavigationTransitionInfo, IEntranceNavigationTransitionInfoStatics>().SetIsTargetElement(element, value);
}

inline EntranceThemeTransition::EntranceThemeTransition() :
    EntranceThemeTransition(activate_instance<EntranceThemeTransition>())
{}

inline Windows::UI::Xaml::DependencyProperty EntranceThemeTransition::FromHorizontalOffsetProperty()
{
    return get_activation_factory<EntranceThemeTransition, IEntranceThemeTransitionStatics>().FromHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty EntranceThemeTransition::FromVerticalOffsetProperty()
{
    return get_activation_factory<EntranceThemeTransition, IEntranceThemeTransitionStatics>().FromVerticalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty EntranceThemeTransition::IsStaggeringEnabledProperty()
{
    return get_activation_factory<EntranceThemeTransition, IEntranceThemeTransitionStatics>().IsStaggeringEnabledProperty();
}

inline ExponentialEase::ExponentialEase() :
    ExponentialEase(activate_instance<ExponentialEase>())
{}

inline Windows::UI::Xaml::DependencyProperty ExponentialEase::ExponentProperty()
{
    return get_activation_factory<ExponentialEase, IExponentialEaseStatics>().ExponentProperty();
}

inline FadeInThemeAnimation::FadeInThemeAnimation() :
    FadeInThemeAnimation(activate_instance<FadeInThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty FadeInThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<FadeInThemeAnimation, IFadeInThemeAnimationStatics>().TargetNameProperty();
}

inline FadeOutThemeAnimation::FadeOutThemeAnimation() :
    FadeOutThemeAnimation(activate_instance<FadeOutThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty FadeOutThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<FadeOutThemeAnimation, IFadeOutThemeAnimationStatics>().TargetNameProperty();
}

inline KeySpline::KeySpline() :
    KeySpline(activate_instance<KeySpline>())
{}

inline Windows::UI::Xaml::Media::Animation::KeyTime KeyTimeHelper::FromTimeSpan(const Windows::Foundation::TimeSpan & timeSpan)
{
    return get_activation_factory<KeyTimeHelper, IKeyTimeHelperStatics>().FromTimeSpan(timeSpan);
}

inline LinearColorKeyFrame::LinearColorKeyFrame() :
    LinearColorKeyFrame(activate_instance<LinearColorKeyFrame>())
{}

inline LinearDoubleKeyFrame::LinearDoubleKeyFrame() :
    LinearDoubleKeyFrame(activate_instance<LinearDoubleKeyFrame>())
{}

inline LinearPointKeyFrame::LinearPointKeyFrame() :
    LinearPointKeyFrame(activate_instance<LinearPointKeyFrame>())
{}

inline NavigationThemeTransition::NavigationThemeTransition() :
    NavigationThemeTransition(activate_instance<NavigationThemeTransition>())
{}

inline Windows::UI::Xaml::DependencyProperty NavigationThemeTransition::DefaultNavigationTransitionInfoProperty()
{
    return get_activation_factory<NavigationThemeTransition, INavigationThemeTransitionStatics>().DefaultNavigationTransitionInfoProperty();
}

inline ObjectAnimationUsingKeyFrames::ObjectAnimationUsingKeyFrames() :
    ObjectAnimationUsingKeyFrames(activate_instance<ObjectAnimationUsingKeyFrames>())
{}

inline Windows::UI::Xaml::DependencyProperty ObjectAnimationUsingKeyFrames::EnableDependentAnimationProperty()
{
    return get_activation_factory<ObjectAnimationUsingKeyFrames, IObjectAnimationUsingKeyFramesStatics>().EnableDependentAnimationProperty();
}

inline Windows::UI::Xaml::DependencyProperty ObjectKeyFrame::ValueProperty()
{
    return get_activation_factory<ObjectKeyFrame, IObjectKeyFrameStatics>().ValueProperty();
}

inline Windows::UI::Xaml::DependencyProperty ObjectKeyFrame::KeyTimeProperty()
{
    return get_activation_factory<ObjectKeyFrame, IObjectKeyFrameStatics>().KeyTimeProperty();
}

inline ObjectKeyFrameCollection::ObjectKeyFrameCollection() :
    ObjectKeyFrameCollection(activate_instance<ObjectKeyFrameCollection>())
{}

inline PaneThemeTransition::PaneThemeTransition() :
    PaneThemeTransition(activate_instance<PaneThemeTransition>())
{}

inline Windows::UI::Xaml::DependencyProperty PaneThemeTransition::EdgeProperty()
{
    return get_activation_factory<PaneThemeTransition, IPaneThemeTransitionStatics>().EdgeProperty();
}

inline PointAnimation::PointAnimation() :
    PointAnimation(activate_instance<PointAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty PointAnimation::FromProperty()
{
    return get_activation_factory<PointAnimation, IPointAnimationStatics>().FromProperty();
}

inline Windows::UI::Xaml::DependencyProperty PointAnimation::ToProperty()
{
    return get_activation_factory<PointAnimation, IPointAnimationStatics>().ToProperty();
}

inline Windows::UI::Xaml::DependencyProperty PointAnimation::ByProperty()
{
    return get_activation_factory<PointAnimation, IPointAnimationStatics>().ByProperty();
}

inline Windows::UI::Xaml::DependencyProperty PointAnimation::EasingFunctionProperty()
{
    return get_activation_factory<PointAnimation, IPointAnimationStatics>().EasingFunctionProperty();
}

inline Windows::UI::Xaml::DependencyProperty PointAnimation::EnableDependentAnimationProperty()
{
    return get_activation_factory<PointAnimation, IPointAnimationStatics>().EnableDependentAnimationProperty();
}

inline PointAnimationUsingKeyFrames::PointAnimationUsingKeyFrames() :
    PointAnimationUsingKeyFrames(activate_instance<PointAnimationUsingKeyFrames>())
{}

inline Windows::UI::Xaml::DependencyProperty PointAnimationUsingKeyFrames::EnableDependentAnimationProperty()
{
    return get_activation_factory<PointAnimationUsingKeyFrames, IPointAnimationUsingKeyFramesStatics>().EnableDependentAnimationProperty();
}

inline Windows::UI::Xaml::DependencyProperty PointKeyFrame::ValueProperty()
{
    return get_activation_factory<PointKeyFrame, IPointKeyFrameStatics>().ValueProperty();
}

inline Windows::UI::Xaml::DependencyProperty PointKeyFrame::KeyTimeProperty()
{
    return get_activation_factory<PointKeyFrame, IPointKeyFrameStatics>().KeyTimeProperty();
}

inline PointKeyFrameCollection::PointKeyFrameCollection() :
    PointKeyFrameCollection(activate_instance<PointKeyFrameCollection>())
{}

inline PointerDownThemeAnimation::PointerDownThemeAnimation() :
    PointerDownThemeAnimation(activate_instance<PointerDownThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty PointerDownThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<PointerDownThemeAnimation, IPointerDownThemeAnimationStatics>().TargetNameProperty();
}

inline PointerUpThemeAnimation::PointerUpThemeAnimation() :
    PointerUpThemeAnimation(activate_instance<PointerUpThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty PointerUpThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<PointerUpThemeAnimation, IPointerUpThemeAnimationStatics>().TargetNameProperty();
}

inline PopInThemeAnimation::PopInThemeAnimation() :
    PopInThemeAnimation(activate_instance<PopInThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty PopInThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<PopInThemeAnimation, IPopInThemeAnimationStatics>().TargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty PopInThemeAnimation::FromHorizontalOffsetProperty()
{
    return get_activation_factory<PopInThemeAnimation, IPopInThemeAnimationStatics>().FromHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty PopInThemeAnimation::FromVerticalOffsetProperty()
{
    return get_activation_factory<PopInThemeAnimation, IPopInThemeAnimationStatics>().FromVerticalOffsetProperty();
}

inline PopOutThemeAnimation::PopOutThemeAnimation() :
    PopOutThemeAnimation(activate_instance<PopOutThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty PopOutThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<PopOutThemeAnimation, IPopOutThemeAnimationStatics>().TargetNameProperty();
}

inline PopupThemeTransition::PopupThemeTransition() :
    PopupThemeTransition(activate_instance<PopupThemeTransition>())
{}

inline Windows::UI::Xaml::DependencyProperty PopupThemeTransition::FromHorizontalOffsetProperty()
{
    return get_activation_factory<PopupThemeTransition, IPopupThemeTransitionStatics>().FromHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty PopupThemeTransition::FromVerticalOffsetProperty()
{
    return get_activation_factory<PopupThemeTransition, IPopupThemeTransitionStatics>().FromVerticalOffsetProperty();
}

inline PowerEase::PowerEase() :
    PowerEase(activate_instance<PowerEase>())
{}

inline Windows::UI::Xaml::DependencyProperty PowerEase::PowerProperty()
{
    return get_activation_factory<PowerEase, IPowerEaseStatics>().PowerProperty();
}

inline QuadraticEase::QuadraticEase() :
    QuadraticEase(activate_instance<QuadraticEase>())
{}

inline QuarticEase::QuarticEase() :
    QuarticEase(activate_instance<QuarticEase>())
{}

inline QuinticEase::QuinticEase() :
    QuinticEase(activate_instance<QuinticEase>())
{}

inline ReorderThemeTransition::ReorderThemeTransition() :
    ReorderThemeTransition(activate_instance<ReorderThemeTransition>())
{}

inline Windows::UI::Xaml::Media::Animation::RepeatBehavior RepeatBehaviorHelper::Forever()
{
    return get_activation_factory<RepeatBehaviorHelper, IRepeatBehaviorHelperStatics>().Forever();
}

inline Windows::UI::Xaml::Media::Animation::RepeatBehavior RepeatBehaviorHelper::FromCount(double count)
{
    return get_activation_factory<RepeatBehaviorHelper, IRepeatBehaviorHelperStatics>().FromCount(count);
}

inline Windows::UI::Xaml::Media::Animation::RepeatBehavior RepeatBehaviorHelper::FromDuration(const Windows::Foundation::TimeSpan & duration)
{
    return get_activation_factory<RepeatBehaviorHelper, IRepeatBehaviorHelperStatics>().FromDuration(duration);
}

inline bool RepeatBehaviorHelper::GetHasCount(const Windows::UI::Xaml::Media::Animation::RepeatBehavior & target)
{
    return get_activation_factory<RepeatBehaviorHelper, IRepeatBehaviorHelperStatics>().GetHasCount(target);
}

inline bool RepeatBehaviorHelper::GetHasDuration(const Windows::UI::Xaml::Media::Animation::RepeatBehavior & target)
{
    return get_activation_factory<RepeatBehaviorHelper, IRepeatBehaviorHelperStatics>().GetHasDuration(target);
}

inline bool RepeatBehaviorHelper::Equals(const Windows::UI::Xaml::Media::Animation::RepeatBehavior & target, const Windows::UI::Xaml::Media::Animation::RepeatBehavior & value)
{
    return get_activation_factory<RepeatBehaviorHelper, IRepeatBehaviorHelperStatics>().Equals(target, value);
}

inline RepositionThemeAnimation::RepositionThemeAnimation() :
    RepositionThemeAnimation(activate_instance<RepositionThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty RepositionThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<RepositionThemeAnimation, IRepositionThemeAnimationStatics>().TargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty RepositionThemeAnimation::FromHorizontalOffsetProperty()
{
    return get_activation_factory<RepositionThemeAnimation, IRepositionThemeAnimationStatics>().FromHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty RepositionThemeAnimation::FromVerticalOffsetProperty()
{
    return get_activation_factory<RepositionThemeAnimation, IRepositionThemeAnimationStatics>().FromVerticalOffsetProperty();
}

inline RepositionThemeTransition::RepositionThemeTransition() :
    RepositionThemeTransition(activate_instance<RepositionThemeTransition>())
{}

inline Windows::UI::Xaml::DependencyProperty RepositionThemeTransition::IsStaggeringEnabledProperty()
{
    return get_activation_factory<RepositionThemeTransition, IRepositionThemeTransitionStatics2>().IsStaggeringEnabledProperty();
}

inline SineEase::SineEase() :
    SineEase(activate_instance<SineEase>())
{}

inline SlideNavigationTransitionInfo::SlideNavigationTransitionInfo() :
    SlideNavigationTransitionInfo(activate_instance<SlideNavigationTransitionInfo>())
{}

inline SplineColorKeyFrame::SplineColorKeyFrame() :
    SplineColorKeyFrame(activate_instance<SplineColorKeyFrame>())
{}

inline Windows::UI::Xaml::DependencyProperty SplineColorKeyFrame::KeySplineProperty()
{
    return get_activation_factory<SplineColorKeyFrame, ISplineColorKeyFrameStatics>().KeySplineProperty();
}

inline SplineDoubleKeyFrame::SplineDoubleKeyFrame() :
    SplineDoubleKeyFrame(activate_instance<SplineDoubleKeyFrame>())
{}

inline Windows::UI::Xaml::DependencyProperty SplineDoubleKeyFrame::KeySplineProperty()
{
    return get_activation_factory<SplineDoubleKeyFrame, ISplineDoubleKeyFrameStatics>().KeySplineProperty();
}

inline SplinePointKeyFrame::SplinePointKeyFrame() :
    SplinePointKeyFrame(activate_instance<SplinePointKeyFrame>())
{}

inline Windows::UI::Xaml::DependencyProperty SplinePointKeyFrame::KeySplineProperty()
{
    return get_activation_factory<SplinePointKeyFrame, ISplinePointKeyFrameStatics>().KeySplineProperty();
}

inline SplitCloseThemeAnimation::SplitCloseThemeAnimation() :
    SplitCloseThemeAnimation(activate_instance<SplitCloseThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::OpenedTargetNameProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, ISplitCloseThemeAnimationStatics>().OpenedTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::OpenedTargetProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, ISplitCloseThemeAnimationStatics>().OpenedTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ClosedTargetNameProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, ISplitCloseThemeAnimationStatics>().ClosedTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ClosedTargetProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, ISplitCloseThemeAnimationStatics>().ClosedTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ContentTargetNameProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, ISplitCloseThemeAnimationStatics>().ContentTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ContentTargetProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, ISplitCloseThemeAnimationStatics>().ContentTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::OpenedLengthProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, ISplitCloseThemeAnimationStatics>().OpenedLengthProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ClosedLengthProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, ISplitCloseThemeAnimationStatics>().ClosedLengthProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::OffsetFromCenterProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, ISplitCloseThemeAnimationStatics>().OffsetFromCenterProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ContentTranslationDirectionProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, ISplitCloseThemeAnimationStatics>().ContentTranslationDirectionProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ContentTranslationOffsetProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, ISplitCloseThemeAnimationStatics>().ContentTranslationOffsetProperty();
}

inline SplitOpenThemeAnimation::SplitOpenThemeAnimation() :
    SplitOpenThemeAnimation(activate_instance<SplitOpenThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::OpenedTargetNameProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, ISplitOpenThemeAnimationStatics>().OpenedTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::OpenedTargetProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, ISplitOpenThemeAnimationStatics>().OpenedTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ClosedTargetNameProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, ISplitOpenThemeAnimationStatics>().ClosedTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ClosedTargetProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, ISplitOpenThemeAnimationStatics>().ClosedTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ContentTargetNameProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, ISplitOpenThemeAnimationStatics>().ContentTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ContentTargetProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, ISplitOpenThemeAnimationStatics>().ContentTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::OpenedLengthProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, ISplitOpenThemeAnimationStatics>().OpenedLengthProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ClosedLengthProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, ISplitOpenThemeAnimationStatics>().ClosedLengthProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::OffsetFromCenterProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, ISplitOpenThemeAnimationStatics>().OffsetFromCenterProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ContentTranslationDirectionProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, ISplitOpenThemeAnimationStatics>().ContentTranslationDirectionProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ContentTranslationOffsetProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, ISplitOpenThemeAnimationStatics>().ContentTranslationOffsetProperty();
}

inline Storyboard::Storyboard() :
    Storyboard(activate_instance<Storyboard>())
{}

inline Windows::UI::Xaml::DependencyProperty Storyboard::TargetPropertyProperty()
{
    return get_activation_factory<Storyboard, IStoryboardStatics>().TargetPropertyProperty();
}

inline hstring Storyboard::GetTargetProperty(const Windows::UI::Xaml::Media::Animation::Timeline & element)
{
    return get_activation_factory<Storyboard, IStoryboardStatics>().GetTargetProperty(element);
}

inline void Storyboard::SetTargetProperty(const Windows::UI::Xaml::Media::Animation::Timeline & element, hstring_ref path)
{
    get_activation_factory<Storyboard, IStoryboardStatics>().SetTargetProperty(element, path);
}

inline Windows::UI::Xaml::DependencyProperty Storyboard::TargetNameProperty()
{
    return get_activation_factory<Storyboard, IStoryboardStatics>().TargetNameProperty();
}

inline hstring Storyboard::GetTargetName(const Windows::UI::Xaml::Media::Animation::Timeline & element)
{
    return get_activation_factory<Storyboard, IStoryboardStatics>().GetTargetName(element);
}

inline void Storyboard::SetTargetName(const Windows::UI::Xaml::Media::Animation::Timeline & element, hstring_ref name)
{
    get_activation_factory<Storyboard, IStoryboardStatics>().SetTargetName(element, name);
}

inline void Storyboard::SetTarget(const Windows::UI::Xaml::Media::Animation::Timeline & timeline, const Windows::UI::Xaml::DependencyObject & target)
{
    get_activation_factory<Storyboard, IStoryboardStatics>().SetTarget(timeline, target);
}

inline SuppressNavigationTransitionInfo::SuppressNavigationTransitionInfo() :
    SuppressNavigationTransitionInfo(activate_instance<SuppressNavigationTransitionInfo>())
{}

inline SwipeBackThemeAnimation::SwipeBackThemeAnimation() :
    SwipeBackThemeAnimation(activate_instance<SwipeBackThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty SwipeBackThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<SwipeBackThemeAnimation, ISwipeBackThemeAnimationStatics>().TargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SwipeBackThemeAnimation::FromHorizontalOffsetProperty()
{
    return get_activation_factory<SwipeBackThemeAnimation, ISwipeBackThemeAnimationStatics>().FromHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SwipeBackThemeAnimation::FromVerticalOffsetProperty()
{
    return get_activation_factory<SwipeBackThemeAnimation, ISwipeBackThemeAnimationStatics>().FromVerticalOffsetProperty();
}

inline SwipeHintThemeAnimation::SwipeHintThemeAnimation() :
    SwipeHintThemeAnimation(activate_instance<SwipeHintThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty SwipeHintThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<SwipeHintThemeAnimation, ISwipeHintThemeAnimationStatics>().TargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SwipeHintThemeAnimation::ToHorizontalOffsetProperty()
{
    return get_activation_factory<SwipeHintThemeAnimation, ISwipeHintThemeAnimationStatics>().ToHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SwipeHintThemeAnimation::ToVerticalOffsetProperty()
{
    return get_activation_factory<SwipeHintThemeAnimation, ISwipeHintThemeAnimationStatics>().ToVerticalOffsetProperty();
}

inline bool Timeline::AllowDependentAnimations()
{
    return get_activation_factory<Timeline, ITimelineStatics>().AllowDependentAnimations();
}

inline void Timeline::AllowDependentAnimations(bool value)
{
    get_activation_factory<Timeline, ITimelineStatics>().AllowDependentAnimations(value);
}

inline Windows::UI::Xaml::DependencyProperty Timeline::AutoReverseProperty()
{
    return get_activation_factory<Timeline, ITimelineStatics>().AutoReverseProperty();
}

inline Windows::UI::Xaml::DependencyProperty Timeline::BeginTimeProperty()
{
    return get_activation_factory<Timeline, ITimelineStatics>().BeginTimeProperty();
}

inline Windows::UI::Xaml::DependencyProperty Timeline::DurationProperty()
{
    return get_activation_factory<Timeline, ITimelineStatics>().DurationProperty();
}

inline Windows::UI::Xaml::DependencyProperty Timeline::SpeedRatioProperty()
{
    return get_activation_factory<Timeline, ITimelineStatics>().SpeedRatioProperty();
}

inline Windows::UI::Xaml::DependencyProperty Timeline::FillBehaviorProperty()
{
    return get_activation_factory<Timeline, ITimelineStatics>().FillBehaviorProperty();
}

inline Windows::UI::Xaml::DependencyProperty Timeline::RepeatBehaviorProperty()
{
    return get_activation_factory<Timeline, ITimelineStatics>().RepeatBehaviorProperty();
}

inline TimelineCollection::TimelineCollection() :
    TimelineCollection(activate_instance<TimelineCollection>())
{}

inline TransitionCollection::TransitionCollection() :
    TransitionCollection(activate_instance<TransitionCollection>())
{}

}

}
