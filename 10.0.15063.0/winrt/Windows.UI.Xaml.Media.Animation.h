// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Animation.2.h"
#include "winrt/Windows.UI.Xaml.Media.h"

namespace winrt::impl {

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IBackEase<D>::Amplitude() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IBackEase)->get_Amplitude(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IBackEase<D>::Amplitude(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IBackEase)->put_Amplitude(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IBackEaseStatics<D>::AmplitudeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IBackEaseStatics)->get_AmplitudeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::Storyboard consume_Windows_UI_Xaml_Media_Animation_IBeginStoryboard<D>::Storyboard() const
{
    Windows::UI::Xaml::Media::Animation::Storyboard value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IBeginStoryboard)->get_Storyboard(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IBeginStoryboard<D>::Storyboard(Windows::UI::Xaml::Media::Animation::Storyboard const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IBeginStoryboard)->put_Storyboard(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IBeginStoryboardStatics<D>::StoryboardProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics)->get_StoryboardProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Media_Animation_IBounceEase<D>::Bounces() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IBounceEase)->get_Bounces(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IBounceEase<D>::Bounces(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IBounceEase)->put_Bounces(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IBounceEase<D>::Bounciness() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IBounceEase)->get_Bounciness(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IBounceEase<D>::Bounciness(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IBounceEase)->put_Bounciness(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IBounceEaseStatics<D>::BouncesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IBounceEaseStatics)->get_BouncesProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IBounceEaseStatics<D>::BouncinessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IBounceEaseStatics)->get_BouncinessProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_Xaml_Media_Animation_IColorAnimation<D>::From() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimation)->get_From(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IColorAnimation<D>::From(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimation)->put_From(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_Xaml_Media_Animation_IColorAnimation<D>::To() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimation)->get_To(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IColorAnimation<D>::To(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimation)->put_To(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_Xaml_Media_Animation_IColorAnimation<D>::By() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimation)->get_By(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IColorAnimation<D>::By(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimation)->put_By(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase consume_Windows_UI_Xaml_Media_Animation_IColorAnimation<D>::EasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimation)->get_EasingFunction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IColorAnimation<D>::EasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimation)->put_EasingFunction(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IColorAnimation<D>::EnableDependentAnimation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimation)->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IColorAnimation<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimation)->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IColorAnimationStatics<D>::FromProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimationStatics)->get_FromProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IColorAnimationStatics<D>::ToProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimationStatics)->get_ToProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IColorAnimationStatics<D>::ByProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimationStatics)->get_ByProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IColorAnimationStatics<D>::EasingFunctionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimationStatics)->get_EasingFunctionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IColorAnimationStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimationStatics)->get_EnableDependentAnimationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection consume_Windows_UI_Xaml_Media_Animation_IColorAnimationUsingKeyFrames<D>::KeyFrames() const
{
    Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames)->get_KeyFrames(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IColorAnimationUsingKeyFrames<D>::EnableDependentAnimation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames)->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IColorAnimationUsingKeyFrames<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames)->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IColorAnimationUsingKeyFramesStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics)->get_EnableDependentAnimationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrame<D>::Value() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorKeyFrame)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrame<D>::Value(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorKeyFrame)->put_Value(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeyTime consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrame<D>::KeyTime() const
{
    Windows::UI::Xaml::Media::Animation::KeyTime value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorKeyFrame)->get_KeyTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrame<D>::KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorKeyFrame)->put_KeyTime(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::ColorKeyFrame consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrameFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Animation::ColorKeyFrame instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrameStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics)->get_ValueProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrameStatics<D>::KeyTimeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics)->get_KeyTimeProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfo<D>::IsStaggeringEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo)->get_IsStaggeringEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfo<D>::IsStaggeringEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo)->put_IsStaggeringEnabled(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfoStatics<D>::IsStaggeringEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics)->get_IsStaggeringEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfoStatics<D>::IsStaggerElementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics)->get_IsStaggerElementProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfoStatics<D>::GetIsStaggerElement(Windows::UI::Xaml::UIElement const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics)->GetIsStaggerElement(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfoStatics<D>::SetIsStaggerElement(Windows::UI::Xaml::UIElement const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics)->SetIsStaggerElement(get_abi(element), value));
}

template <typename D> event_token consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation<D>::Completed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Animation::ConnectedAnimation, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimation)->add_Completed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Media::Animation::IConnectedAnimation> consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation<D>::Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Animation::ConnectedAnimation, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Media::Animation::IConnectedAnimation>(this, &abi_t<Windows::UI::Xaml::Media::Animation::IConnectedAnimation>::remove_Completed, Completed(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation<D>::Completed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimation)->remove_Completed(get_abi(token)));
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation<D>::TryStart(Windows::UI::Xaml::UIElement const& destination) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimation)->TryStart(get_abi(destination), &returnValue));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation<D>::Cancel() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimation)->Cancel());
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation2<D>::IsScaleAnimationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimation2)->get_IsScaleAnimationEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation2<D>::IsScaleAnimationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimation2)->put_IsScaleAnimationEnabled(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation2<D>::TryStart(Windows::UI::Xaml::UIElement const& destination, param::iterable<Windows::UI::Xaml::UIElement> const& coordinatedElements) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimation2)->TryStartWithCoordinatedElements(get_abi(destination), get_abi(coordinatedElements), &returnValue));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation2<D>::SetAnimationComponent(Windows::UI::Xaml::Media::Animation::ConnectedAnimationComponent const& component, Windows::UI::Composition::ICompositionAnimationBase const& animation) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimation2)->SetAnimationComponent(get_abi(component), get_abi(animation)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationService<D>::DefaultDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimationService)->get_DefaultDuration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationService<D>::DefaultDuration(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimationService)->put_DefaultDuration(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionEasingFunction consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationService<D>::DefaultEasingFunction() const
{
    Windows::UI::Composition::CompositionEasingFunction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimationService)->get_DefaultEasingFunction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationService<D>::DefaultEasingFunction(Windows::UI::Composition::CompositionEasingFunction const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimationService)->put_DefaultEasingFunction(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::ConnectedAnimation consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationService<D>::PrepareToAnimate(param::hstring const& key, Windows::UI::Xaml::UIElement const& source) const
{
    Windows::UI::Xaml::Media::Animation::ConnectedAnimation returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimationService)->PrepareToAnimate(get_abi(key), get_abi(source), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Animation::ConnectedAnimation consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationService<D>::GetAnimation(param::hstring const& key) const
{
    Windows::UI::Xaml::Media::Animation::ConnectedAnimation returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimationService)->GetAnimation(get_abi(key), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Animation::ConnectedAnimationService consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationServiceStatics<D>::GetForCurrentView() const
{
    Windows::UI::Xaml::Media::Animation::ConnectedAnimationService returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics)->GetForCurrentView(put_abi(returnValue)));
    return returnValue;
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransition<D>::HorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContentThemeTransition)->get_HorizontalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransition<D>::HorizontalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContentThemeTransition)->put_HorizontalOffset(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransition<D>::VerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContentThemeTransition)->get_VerticalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransition<D>::VerticalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContentThemeTransition)->put_VerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransitionStatics<D>::HorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics)->get_HorizontalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransitionStatics<D>::VerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics)->get_VerticalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfo<D>::ExitElement() const
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo)->get_ExitElement(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfo<D>::ExitElement(Windows::UI::Xaml::UIElement const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo)->put_ExitElement(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics<D>::ExitElementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics)->get_ExitElementProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics<D>::IsEntranceElementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics)->get_IsEntranceElementProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics<D>::GetIsEntranceElement(Windows::UI::Xaml::UIElement const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics)->GetIsEntranceElement(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics<D>::SetIsEntranceElement(Windows::UI::Xaml::UIElement const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics)->SetIsEntranceElement(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics<D>::IsExitElementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics)->get_IsExitElementProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics<D>::GetIsExitElement(Windows::UI::Xaml::UIElement const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics)->GetIsExitElement(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics<D>::SetIsExitElement(Windows::UI::Xaml::UIElement const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics)->SetIsExitElement(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics<D>::ExitElementContainerProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics)->get_ExitElementContainerProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics<D>::GetExitElementContainer(Windows::UI::Xaml::Controls::ListViewBase const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics)->GetExitElementContainer(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics<D>::SetExitElementContainer(Windows::UI::Xaml::Controls::ListViewBase const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics)->SetExitElementContainer(get_abi(element), value));
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation<D>::From() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimation)->get_From(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation<D>::From(optional<double> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimation)->put_From(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation<D>::To() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimation)->get_To(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation<D>::To(optional<double> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimation)->put_To(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation<D>::By() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimation)->get_By(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation<D>::By(optional<double> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimation)->put_By(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation<D>::EasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimation)->get_EasingFunction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation<D>::EasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimation)->put_EasingFunction(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation<D>::EnableDependentAnimation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimation)->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimation)->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationStatics<D>::FromProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics)->get_FromProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationStatics<D>::ToProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics)->get_ToProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationStatics<D>::ByProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics)->get_ByProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationStatics<D>::EasingFunctionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics)->get_EasingFunctionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics)->get_EnableDependentAnimationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationUsingKeyFrames<D>::KeyFrames() const
{
    Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames)->get_KeyFrames(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationUsingKeyFrames<D>::EnableDependentAnimation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames)->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationUsingKeyFrames<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames)->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationUsingKeyFramesStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics)->get_EnableDependentAnimationProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrame<D>::Value() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame)->get_Value(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrame<D>::Value(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame)->put_Value(value));
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeyTime consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrame<D>::KeyTime() const
{
    Windows::UI::Xaml::Media::Animation::KeyTime value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame)->get_KeyTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrame<D>::KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame)->put_KeyTime(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::DoubleKeyFrame consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrameFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Animation::DoubleKeyFrame instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrameStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics)->get_ValueProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrameStatics<D>::KeyTimeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics)->get_KeyTimeProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IDragItemThemeAnimation<D>::TargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation)->get_TargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDragItemThemeAnimation<D>::TargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation)->put_TargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDragItemThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics)->get_TargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimation<D>::TargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation)->get_TargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimation<D>::TargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation)->put_TargetName(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimation<D>::ToOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation)->get_ToOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimation<D>::ToOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation)->put_ToOffset(value));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::AnimationDirection consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimation<D>::Direction() const
{
    Windows::UI::Xaml::Controls::Primitives::AnimationDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimation<D>::Direction(Windows::UI::Xaml::Controls::Primitives::AnimationDirection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation)->put_Direction(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics)->get_TargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimationStatics<D>::ToOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics)->get_ToOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimationStatics<D>::DirectionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics)->get_DirectionProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimation<D>::EntranceTargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation)->get_EntranceTargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimation<D>::EntranceTargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation)->put_EntranceTargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimation<D>::EntranceTarget() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation)->get_EntranceTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimation<D>::EntranceTarget(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation)->put_EntranceTarget(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimation<D>::ExitTargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation)->get_ExitTargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimation<D>::ExitTargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation)->put_ExitTargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimation<D>::ExitTarget() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation)->get_ExitTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimation<D>::ExitTarget(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation)->put_ExitTarget(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimationStatics<D>::EntranceTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics)->get_EntranceTargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimationStatics<D>::EntranceTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics)->get_EntranceTargetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimationStatics<D>::ExitTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics)->get_ExitTargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimationStatics<D>::ExitTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics)->get_ExitTargetProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimation<D>::EntranceTargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation)->get_EntranceTargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimation<D>::EntranceTargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation)->put_EntranceTargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimation<D>::EntranceTarget() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation)->get_EntranceTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimation<D>::EntranceTarget(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation)->put_EntranceTarget(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimation<D>::ExitTargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation)->get_ExitTargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimation<D>::ExitTargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation)->put_ExitTargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimation<D>::ExitTarget() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation)->get_ExitTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimation<D>::ExitTarget(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation)->put_ExitTarget(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimationStatics<D>::EntranceTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics)->get_EntranceTargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimationStatics<D>::EntranceTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics)->get_EntranceTargetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimationStatics<D>::ExitTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics)->get_ExitTargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimationStatics<D>::ExitTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics)->get_ExitTargetProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IDropTargetItemThemeAnimation<D>::TargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation)->get_TargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IDropTargetItemThemeAnimation<D>::TargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation)->put_TargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IDropTargetItemThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics)->get_TargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase consume_Windows_UI_Xaml_Media_Animation_IEasingColorKeyFrame<D>::EasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame)->get_EasingFunction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IEasingColorKeyFrame<D>::EasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame)->put_EasingFunction(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IEasingColorKeyFrameStatics<D>::EasingFunctionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics)->get_EasingFunctionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase consume_Windows_UI_Xaml_Media_Animation_IEasingDoubleKeyFrame<D>::EasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame)->get_EasingFunction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IEasingDoubleKeyFrame<D>::EasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame)->put_EasingFunction(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IEasingDoubleKeyFrameStatics<D>::EasingFunctionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics)->get_EasingFunctionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingMode consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBase<D>::EasingMode() const
{
    Windows::UI::Xaml::Media::Animation::EasingMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase)->get_EasingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBase<D>::EasingMode(Windows::UI::Xaml::Media::Animation::EasingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase)->put_EasingMode(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBase<D>::Ease(double normalizedTime) const
{
    double returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase)->Ease(normalizedTime, &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBaseStatics<D>::EasingModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics)->get_EasingModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase consume_Windows_UI_Xaml_Media_Animation_IEasingPointKeyFrame<D>::EasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame)->get_EasingFunction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IEasingPointKeyFrame<D>::EasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame)->put_EasingFunction(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IEasingPointKeyFrameStatics<D>::EasingFunctionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics)->get_EasingFunctionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation consume_Windows_UI_Xaml_Media_Animation_IEdgeUIThemeTransition<D>::Edge() const
{
    Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition)->get_Edge(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IEdgeUIThemeTransition<D>::Edge(Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition)->put_Edge(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IEdgeUIThemeTransitionStatics<D>::EdgeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics)->get_EdgeProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Media_Animation_IElasticEase<D>::Oscillations() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IElasticEase)->get_Oscillations(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IElasticEase<D>::Oscillations(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IElasticEase)->put_Oscillations(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IElasticEase<D>::Springiness() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IElasticEase)->get_Springiness(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IElasticEase<D>::Springiness(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IElasticEase)->put_Springiness(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IElasticEaseStatics<D>::OscillationsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IElasticEaseStatics)->get_OscillationsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IElasticEaseStatics<D>::SpringinessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IElasticEaseStatics)->get_SpringinessProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IEntranceNavigationTransitionInfoStatics<D>::IsTargetElementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics)->get_IsTargetElementProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IEntranceNavigationTransitionInfoStatics<D>::GetIsTargetElement(Windows::UI::Xaml::UIElement const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics)->GetIsTargetElement(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IEntranceNavigationTransitionInfoStatics<D>::SetIsTargetElement(Windows::UI::Xaml::UIElement const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics)->SetIsTargetElement(get_abi(element), value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransition<D>::FromHorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition)->get_FromHorizontalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransition<D>::FromHorizontalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition)->put_FromHorizontalOffset(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransition<D>::FromVerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition)->get_FromVerticalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransition<D>::FromVerticalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition)->put_FromVerticalOffset(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransition<D>::IsStaggeringEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition)->get_IsStaggeringEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransition<D>::IsStaggeringEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition)->put_IsStaggeringEnabled(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransitionStatics<D>::FromHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics)->get_FromHorizontalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransitionStatics<D>::FromVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics)->get_FromVerticalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransitionStatics<D>::IsStaggeringEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics)->get_IsStaggeringEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IExponentialEase<D>::Exponent() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IExponentialEase)->get_Exponent(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IExponentialEase<D>::Exponent(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IExponentialEase)->put_Exponent(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IExponentialEaseStatics<D>::ExponentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics)->get_ExponentProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IFadeInThemeAnimation<D>::TargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation)->get_TargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IFadeInThemeAnimation<D>::TargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation)->put_TargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IFadeInThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics)->get_TargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IFadeOutThemeAnimation<D>::TargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation)->get_TargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IFadeOutThemeAnimation<D>::TargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation)->put_TargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IFadeOutThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics)->get_TargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_Animation_IKeySpline<D>::ControlPoint1() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IKeySpline)->get_ControlPoint1(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IKeySpline<D>::ControlPoint1(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IKeySpline)->put_ControlPoint1(get_abi(value)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_Animation_IKeySpline<D>::ControlPoint2() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IKeySpline)->get_ControlPoint2(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IKeySpline<D>::ControlPoint2(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IKeySpline)->put_ControlPoint2(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeyTime consume_Windows_UI_Xaml_Media_Animation_IKeyTimeHelperStatics<D>::FromTimeSpan(Windows::Foundation::TimeSpan const& timeSpan) const
{
    Windows::UI::Xaml::Media::Animation::KeyTime returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics)->FromTimeSpan(get_abi(timeSpan), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo consume_Windows_UI_Xaml_Media_Animation_INavigationThemeTransition<D>::DefaultNavigationTransitionInfo() const
{
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::INavigationThemeTransition)->get_DefaultNavigationTransitionInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_INavigationThemeTransition<D>::DefaultNavigationTransitionInfo(Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::INavigationThemeTransition)->put_DefaultNavigationTransitionInfo(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_INavigationThemeTransitionStatics<D>::DefaultNavigationTransitionInfoProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics)->get_DefaultNavigationTransitionInfoProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfoFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfoOverrides<D>::GetNavigationStateCore() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides)->GetNavigationStateCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfoOverrides<D>::SetNavigationStateCore(param::hstring const& navigationState) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides)->SetNavigationStateCore(get_abi(navigationState)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection consume_Windows_UI_Xaml_Media_Animation_IObjectAnimationUsingKeyFrames<D>::KeyFrames() const
{
    Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames)->get_KeyFrames(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IObjectAnimationUsingKeyFrames<D>::EnableDependentAnimation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames)->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IObjectAnimationUsingKeyFrames<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames)->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IObjectAnimationUsingKeyFramesStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics)->get_EnableDependentAnimationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrame<D>::Value() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IObjectKeyFrame)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrame<D>::Value(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IObjectKeyFrame)->put_Value(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeyTime consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrame<D>::KeyTime() const
{
    Windows::UI::Xaml::Media::Animation::KeyTime value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IObjectKeyFrame)->get_KeyTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrame<D>::KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IObjectKeyFrame)->put_KeyTime(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::ObjectKeyFrame consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrameFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Animation::ObjectKeyFrame instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrameStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics)->get_ValueProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrameStatics<D>::KeyTimeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics)->get_KeyTimeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation consume_Windows_UI_Xaml_Media_Animation_IPaneThemeTransition<D>::Edge() const
{
    Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPaneThemeTransition)->get_Edge(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPaneThemeTransition<D>::Edge(Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPaneThemeTransition)->put_Edge(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPaneThemeTransitionStatics<D>::EdgeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics)->get_EdgeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Point> consume_Windows_UI_Xaml_Media_Animation_IPointAnimation<D>::From() const
{
    Windows::Foundation::IReference<Windows::Foundation::Point> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimation)->get_From(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPointAnimation<D>::From(optional<Windows::Foundation::Point> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimation)->put_From(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Point> consume_Windows_UI_Xaml_Media_Animation_IPointAnimation<D>::To() const
{
    Windows::Foundation::IReference<Windows::Foundation::Point> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimation)->get_To(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPointAnimation<D>::To(optional<Windows::Foundation::Point> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimation)->put_To(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Point> consume_Windows_UI_Xaml_Media_Animation_IPointAnimation<D>::By() const
{
    Windows::Foundation::IReference<Windows::Foundation::Point> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimation)->get_By(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPointAnimation<D>::By(optional<Windows::Foundation::Point> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimation)->put_By(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase consume_Windows_UI_Xaml_Media_Animation_IPointAnimation<D>::EasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimation)->get_EasingFunction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPointAnimation<D>::EasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimation)->put_EasingFunction(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IPointAnimation<D>::EnableDependentAnimation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimation)->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPointAnimation<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimation)->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPointAnimationStatics<D>::FromProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimationStatics)->get_FromProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPointAnimationStatics<D>::ToProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimationStatics)->get_ToProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPointAnimationStatics<D>::ByProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimationStatics)->get_ByProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPointAnimationStatics<D>::EasingFunctionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimationStatics)->get_EasingFunctionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPointAnimationStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimationStatics)->get_EnableDependentAnimationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection consume_Windows_UI_Xaml_Media_Animation_IPointAnimationUsingKeyFrames<D>::KeyFrames() const
{
    Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames)->get_KeyFrames(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IPointAnimationUsingKeyFrames<D>::EnableDependentAnimation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames)->get_EnableDependentAnimation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPointAnimationUsingKeyFrames<D>::EnableDependentAnimation(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames)->put_EnableDependentAnimation(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPointAnimationUsingKeyFramesStatics<D>::EnableDependentAnimationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics)->get_EnableDependentAnimationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrame<D>::Value() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointKeyFrame)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrame<D>::Value(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointKeyFrame)->put_Value(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeyTime consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrame<D>::KeyTime() const
{
    Windows::UI::Xaml::Media::Animation::KeyTime value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointKeyFrame)->get_KeyTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrame<D>::KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointKeyFrame)->put_KeyTime(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::PointKeyFrame consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrameFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Animation::PointKeyFrame instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrameStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics)->get_ValueProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrameStatics<D>::KeyTimeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics)->get_KeyTimeProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IPointerDownThemeAnimation<D>::TargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation)->get_TargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPointerDownThemeAnimation<D>::TargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation)->put_TargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPointerDownThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics)->get_TargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IPointerUpThemeAnimation<D>::TargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation)->get_TargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPointerUpThemeAnimation<D>::TargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation)->put_TargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPointerUpThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics)->get_TargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimation<D>::TargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation)->get_TargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimation<D>::TargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation)->put_TargetName(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimation<D>::FromHorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation)->get_FromHorizontalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimation<D>::FromHorizontalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation)->put_FromHorizontalOffset(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimation<D>::FromVerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation)->get_FromVerticalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimation<D>::FromVerticalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation)->put_FromVerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics)->get_TargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimationStatics<D>::FromHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics)->get_FromHorizontalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimationStatics<D>::FromVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics)->get_FromVerticalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IPopOutThemeAnimation<D>::TargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation)->get_TargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPopOutThemeAnimation<D>::TargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation)->put_TargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPopOutThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics)->get_TargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransition<D>::FromHorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopupThemeTransition)->get_FromHorizontalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransition<D>::FromHorizontalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopupThemeTransition)->put_FromHorizontalOffset(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransition<D>::FromVerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopupThemeTransition)->get_FromVerticalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransition<D>::FromVerticalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopupThemeTransition)->put_FromVerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransitionStatics<D>::FromHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics)->get_FromHorizontalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransitionStatics<D>::FromVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics)->get_FromVerticalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IPowerEase<D>::Power() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPowerEase)->get_Power(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IPowerEase<D>::Power(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPowerEase)->put_Power(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IPowerEaseStatics<D>::PowerProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IPowerEaseStatics)->get_PowerProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::RepeatBehavior consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelperStatics<D>::Forever() const
{
    Windows::UI::Xaml::Media::Animation::RepeatBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics)->get_Forever(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::RepeatBehavior consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelperStatics<D>::FromCount(double count) const
{
    Windows::UI::Xaml::Media::Animation::RepeatBehavior returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics)->FromCount(count, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Animation::RepeatBehavior consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelperStatics<D>::FromDuration(Windows::Foundation::TimeSpan const& duration) const
{
    Windows::UI::Xaml::Media::Animation::RepeatBehavior returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics)->FromDuration(get_abi(duration), put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelperStatics<D>::GetHasCount(Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics)->GetHasCount(get_abi(target), &value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelperStatics<D>::GetHasDuration(Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics)->GetHasDuration(get_abi(target), &value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelperStatics<D>::Equals(Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target, Windows::UI::Xaml::Media::Animation::RepeatBehavior const& value) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics)->Equals(get_abi(target), get_abi(value), &returnValue));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimation<D>::TargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation)->get_TargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimation<D>::TargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation)->put_TargetName(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimation<D>::FromHorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation)->get_FromHorizontalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimation<D>::FromHorizontalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation)->put_FromHorizontalOffset(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimation<D>::FromVerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation)->get_FromVerticalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimation<D>::FromVerticalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation)->put_FromVerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics)->get_TargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimationStatics<D>::FromHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics)->get_FromHorizontalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimationStatics<D>::FromVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics)->get_FromVerticalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransition2<D>::IsStaggeringEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2)->get_IsStaggeringEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransition2<D>::IsStaggeringEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2)->put_IsStaggeringEnabled(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransitionStatics2<D>::IsStaggeringEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2)->get_IsStaggeringEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeySpline consume_Windows_UI_Xaml_Media_Animation_ISplineColorKeyFrame<D>::KeySpline() const
{
    Windows::UI::Xaml::Media::Animation::KeySpline value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame)->get_KeySpline(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplineColorKeyFrame<D>::KeySpline(Windows::UI::Xaml::Media::Animation::KeySpline const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame)->put_KeySpline(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplineColorKeyFrameStatics<D>::KeySplineProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics)->get_KeySplineProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeySpline consume_Windows_UI_Xaml_Media_Animation_ISplineDoubleKeyFrame<D>::KeySpline() const
{
    Windows::UI::Xaml::Media::Animation::KeySpline value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame)->get_KeySpline(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplineDoubleKeyFrame<D>::KeySpline(Windows::UI::Xaml::Media::Animation::KeySpline const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame)->put_KeySpline(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplineDoubleKeyFrameStatics<D>::KeySplineProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics)->get_KeySplineProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::KeySpline consume_Windows_UI_Xaml_Media_Animation_ISplinePointKeyFrame<D>::KeySpline() const
{
    Windows::UI::Xaml::Media::Animation::KeySpline value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame)->get_KeySpline(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplinePointKeyFrame<D>::KeySpline(Windows::UI::Xaml::Media::Animation::KeySpline const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame)->put_KeySpline(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplinePointKeyFrameStatics<D>::KeySplineProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics)->get_KeySplineProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::OpenedTargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->get_OpenedTargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::OpenedTargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->put_OpenedTargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::OpenedTarget() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->get_OpenedTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::OpenedTarget(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->put_OpenedTarget(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ClosedTargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->get_ClosedTargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ClosedTargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->put_ClosedTargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ClosedTarget() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->get_ClosedTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ClosedTarget(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->put_ClosedTarget(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ContentTargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->get_ContentTargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ContentTargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->put_ContentTargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ContentTarget() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->get_ContentTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ContentTarget(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->put_ContentTarget(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::OpenedLength() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->get_OpenedLength(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::OpenedLength(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->put_OpenedLength(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ClosedLength() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->get_ClosedLength(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ClosedLength(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->put_ClosedLength(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::OffsetFromCenter() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->get_OffsetFromCenter(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::OffsetFromCenter(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->put_OffsetFromCenter(value));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::AnimationDirection consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ContentTranslationDirection() const
{
    Windows::UI::Xaml::Controls::Primitives::AnimationDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->get_ContentTranslationDirection(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ContentTranslationDirection(Windows::UI::Xaml::Controls::Primitives::AnimationDirection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->put_ContentTranslationDirection(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ContentTranslationOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->get_ContentTranslationOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>::ContentTranslationOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation)->put_ContentTranslationOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics<D>::OpenedTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics)->get_OpenedTargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics<D>::OpenedTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics)->get_OpenedTargetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics<D>::ClosedTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics)->get_ClosedTargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics<D>::ClosedTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics)->get_ClosedTargetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics<D>::ContentTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics)->get_ContentTargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics<D>::ContentTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics)->get_ContentTargetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics<D>::OpenedLengthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics)->get_OpenedLengthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics<D>::ClosedLengthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics)->get_ClosedLengthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics<D>::OffsetFromCenterProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics)->get_OffsetFromCenterProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics<D>::ContentTranslationDirectionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics)->get_ContentTranslationDirectionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics<D>::ContentTranslationOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics)->get_ContentTranslationOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::OpenedTargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->get_OpenedTargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::OpenedTargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->put_OpenedTargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::OpenedTarget() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->get_OpenedTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::OpenedTarget(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->put_OpenedTarget(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ClosedTargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->get_ClosedTargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ClosedTargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->put_ClosedTargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ClosedTarget() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->get_ClosedTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ClosedTarget(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->put_ClosedTarget(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ContentTargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->get_ContentTargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ContentTargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->put_ContentTargetName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ContentTarget() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->get_ContentTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ContentTarget(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->put_ContentTarget(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::OpenedLength() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->get_OpenedLength(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::OpenedLength(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->put_OpenedLength(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ClosedLength() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->get_ClosedLength(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ClosedLength(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->put_ClosedLength(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::OffsetFromCenter() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->get_OffsetFromCenter(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::OffsetFromCenter(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->put_OffsetFromCenter(value));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::AnimationDirection consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ContentTranslationDirection() const
{
    Windows::UI::Xaml::Controls::Primitives::AnimationDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->get_ContentTranslationDirection(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ContentTranslationDirection(Windows::UI::Xaml::Controls::Primitives::AnimationDirection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->put_ContentTranslationDirection(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ContentTranslationOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->get_ContentTranslationOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>::ContentTranslationOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation)->put_ContentTranslationOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics<D>::OpenedTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics)->get_OpenedTargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics<D>::OpenedTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics)->get_OpenedTargetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics<D>::ClosedTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics)->get_ClosedTargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics<D>::ClosedTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics)->get_ClosedTargetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics<D>::ContentTargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics)->get_ContentTargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics<D>::ContentTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics)->get_ContentTargetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics<D>::OpenedLengthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics)->get_OpenedLengthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics<D>::ClosedLengthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics)->get_ClosedLengthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics<D>::OffsetFromCenterProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics)->get_OffsetFromCenterProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics<D>::ContentTranslationDirectionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics)->get_ContentTranslationDirectionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics<D>::ContentTranslationOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics)->get_ContentTranslationOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::TimelineCollection consume_Windows_UI_Xaml_Media_Animation_IStoryboard<D>::Children() const
{
    Windows::UI::Xaml::Media::Animation::TimelineCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboard)->get_Children(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IStoryboard<D>::Seek(Windows::Foundation::TimeSpan const& offset) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboard)->Seek(get_abi(offset)));
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IStoryboard<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboard)->Stop());
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IStoryboard<D>::Begin() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboard)->Begin());
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IStoryboard<D>::Pause() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboard)->Pause());
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IStoryboard<D>::Resume() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboard)->Resume());
}

template <typename D> Windows::UI::Xaml::Media::Animation::ClockState consume_Windows_UI_Xaml_Media_Animation_IStoryboard<D>::GetCurrentState() const
{
    Windows::UI::Xaml::Media::Animation::ClockState returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboard)->GetCurrentState(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Xaml_Media_Animation_IStoryboard<D>::GetCurrentTime() const
{
    Windows::Foundation::TimeSpan returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboard)->GetCurrentTime(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IStoryboard<D>::SeekAlignedToLastTick(Windows::Foundation::TimeSpan const& offset) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboard)->SeekAlignedToLastTick(get_abi(offset)));
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IStoryboard<D>::SkipToFill() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboard)->SkipToFill());
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IStoryboardStatics<D>::TargetPropertyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboardStatics)->get_TargetPropertyProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IStoryboardStatics<D>::GetTargetProperty(Windows::UI::Xaml::Media::Animation::Timeline const& element) const
{
    hstring path{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboardStatics)->GetTargetProperty(get_abi(element), put_abi(path)));
    return path;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IStoryboardStatics<D>::SetTargetProperty(Windows::UI::Xaml::Media::Animation::Timeline const& element, param::hstring const& path) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboardStatics)->SetTargetProperty(get_abi(element), get_abi(path)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_IStoryboardStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboardStatics)->get_TargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_IStoryboardStatics<D>::GetTargetName(Windows::UI::Xaml::Media::Animation::Timeline const& element) const
{
    hstring name{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboardStatics)->GetTargetName(get_abi(element), put_abi(name)));
    return name;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IStoryboardStatics<D>::SetTargetName(Windows::UI::Xaml::Media::Animation::Timeline const& element, param::hstring const& name) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboardStatics)->SetTargetName(get_abi(element), get_abi(name)));
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_IStoryboardStatics<D>::SetTarget(Windows::UI::Xaml::Media::Animation::Timeline const& timeline, Windows::UI::Xaml::DependencyObject const& target) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::IStoryboardStatics)->SetTarget(get_abi(timeline), get_abi(target)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimation<D>::TargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation)->get_TargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimation<D>::TargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation)->put_TargetName(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimation<D>::FromHorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation)->get_FromHorizontalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimation<D>::FromHorizontalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation)->put_FromHorizontalOffset(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimation<D>::FromVerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation)->get_FromVerticalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimation<D>::FromVerticalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation)->put_FromVerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics)->get_TargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimationStatics<D>::FromHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics)->get_FromHorizontalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimationStatics<D>::FromVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics)->get_FromVerticalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimation<D>::TargetName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation)->get_TargetName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimation<D>::TargetName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation)->put_TargetName(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimation<D>::ToHorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation)->get_ToHorizontalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimation<D>::ToHorizontalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation)->put_ToHorizontalOffset(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimation<D>::ToVerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation)->get_ToVerticalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimation<D>::ToVerticalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation)->put_ToVerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimationStatics<D>::TargetNameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics)->get_TargetNameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimationStatics<D>::ToHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics)->get_ToHorizontalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimationStatics<D>::ToVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics)->get_ToVerticalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::AutoReverse() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->get_AutoReverse(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::AutoReverse(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->put_AutoReverse(value));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::BeginTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->get_BeginTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::BeginTime(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->put_BeginTime(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Duration consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::Duration() const
{
    Windows::UI::Xaml::Duration value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::Duration(Windows::UI::Xaml::Duration const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->put_Duration(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::SpeedRatio() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->get_SpeedRatio(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::SpeedRatio(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->put_SpeedRatio(value));
}

template <typename D> Windows::UI::Xaml::Media::Animation::FillBehavior consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::FillBehavior() const
{
    Windows::UI::Xaml::Media::Animation::FillBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->get_FillBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::FillBehavior(Windows::UI::Xaml::Media::Animation::FillBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->put_FillBehavior(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::RepeatBehavior consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::RepeatBehavior() const
{
    Windows::UI::Xaml::Media::Animation::RepeatBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->get_RepeatBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::RepeatBehavior(Windows::UI::Xaml::Media::Animation::RepeatBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->put_RepeatBehavior(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::Completed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->add_Completed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Media::Animation::ITimeline> consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::Completed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Media::Animation::ITimeline>(this, &abi_t<Windows::UI::Xaml::Media::Animation::ITimeline>::remove_Completed, Completed(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>::Completed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimeline)->remove_Completed(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::Timeline consume_Windows_UI_Xaml_Media_Animation_ITimelineFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Animation::Timeline instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimelineFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Animation_ITimelineStatics<D>::AllowDependentAnimations() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimelineStatics)->get_AllowDependentAnimations(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Animation_ITimelineStatics<D>::AllowDependentAnimations(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimelineStatics)->put_AllowDependentAnimations(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ITimelineStatics<D>::AutoReverseProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimelineStatics)->get_AutoReverseProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ITimelineStatics<D>::BeginTimeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimelineStatics)->get_BeginTimeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ITimelineStatics<D>::DurationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimelineStatics)->get_DurationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ITimelineStatics<D>::SpeedRatioProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimelineStatics)->get_SpeedRatioProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ITimelineStatics<D>::FillBehaviorProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimelineStatics)->get_FillBehaviorProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Animation_ITimelineStatics<D>::RepeatBehaviorProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Animation::ITimelineStatics)->get_RepeatBehaviorProperty(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition> : produce_base<D, Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IBackEase> : produce_base<D, Windows::UI::Xaml::Media::Animation::IBackEase>
{
    HRESULT __stdcall get_Amplitude(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Amplitude());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_AmplitudeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AmplitudeProperty());
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
    HRESULT __stdcall get_Storyboard(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Storyboard());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Storyboard(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Storyboard(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::Storyboard const*>(&value));
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
    HRESULT __stdcall get_StoryboardProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StoryboardProperty());
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
    HRESULT __stdcall get_Bounces(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bounces());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Bounces(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bounciness(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bounciness());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_BouncesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BouncesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BouncinessProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BouncinessProperty());
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
    HRESULT __stdcall get_From(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_From(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().From(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_To(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_To(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().To(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_By(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().By());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_By(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().By(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EasingFunction(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingFunction(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EasingFunction(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::EasingFunctionBase const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimation());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_FromProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ByProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EasingFunctionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingFunctionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimationProperty());
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
    HRESULT __stdcall get_KeyFrames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyFrames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimation());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimationProperty());
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
    HRESULT __stdcall get_Value(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyTime(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::KeyTime const*>(&value));
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
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics>
{
    HRESULT __stdcall get_ValueProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ValueProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTimeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTimeProperty());
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
    HRESULT __stdcall get_IsStaggeringEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStaggeringEnabled());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_IsStaggeringEnabledProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStaggeringEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStaggerElementProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStaggerElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsStaggerElement(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetIsStaggerElement(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIsStaggerElement(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIsStaggerElement(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), value);
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
    HRESULT __stdcall add_Completed(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Completed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Animation::ConnectedAnimation, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryStart(::IUnknown* destination, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TryStart(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&destination)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Cancel() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
struct produce<D, Windows::UI::Xaml::Media::Animation::IConnectedAnimation2> : produce_base<D, Windows::UI::Xaml::Media::Animation::IConnectedAnimation2>
{
    HRESULT __stdcall get_IsScaleAnimationEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsScaleAnimationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsScaleAnimationEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsScaleAnimationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryStartWithCoordinatedElements(::IUnknown* destination, ::IUnknown* coordinatedElements, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TryStart(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&destination), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> const*>(&coordinatedElements)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAnimationComponent(abi_t<Windows::UI::Xaml::Media::Animation::ConnectedAnimationComponent> component, ::IUnknown* animation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAnimationComponent(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::ConnectedAnimationComponent const*>(&component), *reinterpret_cast<Windows::UI::Composition::ICompositionAnimationBase const*>(&animation));
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
    HRESULT __stdcall get_DefaultDuration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultDuration(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultDuration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultEasingFunction(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultEasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultEasingFunction(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultEasingFunction(*reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrepareToAnimate(HSTRING key, ::IUnknown* source, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().PrepareToAnimate(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&source)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAnimation(HSTRING key, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetAnimation(*reinterpret_cast<hstring const*>(&key)));
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
    HRESULT __stdcall GetForCurrentView(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetForCurrentView());
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
    HRESULT __stdcall get_HorizontalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HorizontalOffset());
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
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticalOffset());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_HorizontalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticalOffsetProperty());
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
    HRESULT __stdcall get_ExitElement(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitElement());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExitElement(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitElement(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&value));
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
    HRESULT __stdcall get_ExitElementProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEntranceElementProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEntranceElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsEntranceElement(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetIsEntranceElement(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIsEntranceElement(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIsEntranceElement(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsExitElementProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsExitElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsExitElement(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetIsExitElement(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIsExitElement(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIsExitElement(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitElementContainerProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitElementContainerProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetExitElementContainer(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetExitElementContainer(*reinterpret_cast<Windows::UI::Xaml::Controls::ListViewBase const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetExitElementContainer(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetExitElementContainer(*reinterpret_cast<Windows::UI::Xaml::Controls::ListViewBase const*>(&element), value);
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
    HRESULT __stdcall get_From(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_From(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().From(*reinterpret_cast<Windows::Foundation::IReference<double> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_To(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_To(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().To(*reinterpret_cast<Windows::Foundation::IReference<double> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_By(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().By());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_By(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().By(*reinterpret_cast<Windows::Foundation::IReference<double> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EasingFunction(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingFunction(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EasingFunction(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::EasingFunctionBase const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimation());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_FromProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ByProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EasingFunctionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingFunctionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimationProperty());
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
    HRESULT __stdcall get_KeyFrames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyFrames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimation());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimationProperty());
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
    HRESULT __stdcall get_Value(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyTime(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::KeyTime const*>(&value));
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
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics>
{
    HRESULT __stdcall get_ValueProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ValueProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTimeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTimeProperty());
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
    HRESULT __stdcall get_TargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetName(*reinterpret_cast<hstring const*>(&value));
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
    HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNameProperty());
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
    HRESULT __stdcall get_TargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToOffset());
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
            typename D::abi_guard guard(this->shim());
            this->shim().ToOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direction(abi_t<Windows::UI::Xaml::Controls::Primitives::AnimationDirection>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Direction(abi_t<Windows::UI::Xaml::Controls::Primitives::AnimationDirection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Direction(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::AnimationDirection const*>(&value));
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
    HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DirectionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DirectionProperty());
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
    HRESULT __stdcall get_EntranceTargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EntranceTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EntranceTargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EntranceTargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EntranceTarget(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EntranceTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EntranceTarget(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EntranceTarget(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExitTargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitTargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTarget(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExitTarget(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitTarget(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
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
    HRESULT __stdcall get_EntranceTargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EntranceTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EntranceTargetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EntranceTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTargetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitTargetProperty());
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
    HRESULT __stdcall get_EntranceTargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EntranceTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EntranceTargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EntranceTargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EntranceTarget(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EntranceTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EntranceTarget(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EntranceTarget(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExitTargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitTargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTarget(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExitTarget(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitTarget(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
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
    HRESULT __stdcall get_EntranceTargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EntranceTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EntranceTargetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EntranceTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitTargetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitTargetProperty());
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
    HRESULT __stdcall get_TargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetName(*reinterpret_cast<hstring const*>(&value));
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
    HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNameProperty());
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
    HRESULT __stdcall get_EasingFunction(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingFunction(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EasingFunction(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::EasingFunctionBase const*>(&value));
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
    HRESULT __stdcall get_EasingFunctionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingFunctionProperty());
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
    HRESULT __stdcall get_EasingFunction(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingFunction(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EasingFunction(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::EasingFunctionBase const*>(&value));
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
    HRESULT __stdcall get_EasingFunctionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingFunctionProperty());
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
    HRESULT __stdcall get_EasingMode(abi_t<Windows::UI::Xaml::Media::Animation::EasingMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingMode(abi_t<Windows::UI::Xaml::Media::Animation::EasingMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EasingMode(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::EasingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Ease(double normalizedTime, double* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Ease(normalizedTime));
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
    HRESULT __stdcall get_EasingModeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingModeProperty());
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
    HRESULT __stdcall get_EasingFunction(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingFunction(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EasingFunction(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::EasingFunctionBase const*>(&value));
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
    HRESULT __stdcall get_EasingFunctionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingFunctionProperty());
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
    HRESULT __stdcall get_Edge(abi_t<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Edge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Edge(abi_t<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Edge(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation const*>(&value));
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
    HRESULT __stdcall get_EdgeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EdgeProperty());
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
    HRESULT __stdcall get_Oscillations(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Oscillations());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Oscillations(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Springiness(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Springiness());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_OscillationsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OscillationsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpringinessProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpringinessProperty());
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
    HRESULT __stdcall get_IsTargetElementProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTargetElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsTargetElement(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetIsTargetElement(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIsTargetElement(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIsTargetElement(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), value);
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
    HRESULT __stdcall get_FromHorizontalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromHorizontalOffset());
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
            typename D::abi_guard guard(this->shim());
            this->shim().FromHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromVerticalOffset());
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
            typename D::abi_guard guard(this->shim());
            this->shim().FromVerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStaggeringEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStaggeringEnabled());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_FromHorizontalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromVerticalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStaggeringEnabledProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStaggeringEnabledProperty());
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
    HRESULT __stdcall get_Exponent(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Exponent());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_ExponentProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExponentProperty());
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
    HRESULT __stdcall get_TargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetName(*reinterpret_cast<hstring const*>(&value));
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
    HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNameProperty());
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
    HRESULT __stdcall get_TargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetName(*reinterpret_cast<hstring const*>(&value));
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
    HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNameProperty());
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
    HRESULT __stdcall get_ControlPoint1(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ControlPoint1());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ControlPoint1(abi_t<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ControlPoint1(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlPoint2(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ControlPoint2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ControlPoint2(abi_t<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ControlPoint2(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
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
    HRESULT __stdcall FromTimeSpan(abi_t<Windows::Foundation::TimeSpan> timeSpan, abi_t<Windows::UI::Xaml::Media::Animation::KeyTime>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FromTimeSpan(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeSpan)));
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
    HRESULT __stdcall get_DefaultNavigationTransitionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultNavigationTransitionInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultNavigationTransitionInfo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultNavigationTransitionInfo(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const*>(&value));
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
    HRESULT __stdcall get_DefaultNavigationTransitionInfoProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultNavigationTransitionInfoProperty());
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
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides> : produce_base<D, Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides>
{
    HRESULT __stdcall GetNavigationStateCore(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNavigationStateCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetNavigationStateCore(HSTRING navigationState) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetNavigationStateCore(*reinterpret_cast<hstring const*>(&navigationState));
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
    HRESULT __stdcall get_KeyFrames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyFrames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimation());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimationProperty());
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
    HRESULT __stdcall get_Value(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyTime(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::KeyTime const*>(&value));
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
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics>
{
    HRESULT __stdcall get_ValueProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ValueProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTimeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTimeProperty());
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
    HRESULT __stdcall get_Edge(abi_t<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Edge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Edge(abi_t<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Edge(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation const*>(&value));
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
    HRESULT __stdcall get_EdgeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EdgeProperty());
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
    HRESULT __stdcall get_From(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_From(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().From(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Point> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_To(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_To(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().To(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Point> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_By(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().By());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_By(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().By(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Point> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EasingFunction(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EasingFunction(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EasingFunction(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::EasingFunctionBase const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimation());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_FromProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ByProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EasingFunctionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EasingFunctionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimationProperty());
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
    HRESULT __stdcall get_KeyFrames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyFrames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnableDependentAnimation(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimation());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnableDependentAnimationProperty());
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
    HRESULT __stdcall get_Value(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_t<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyTime(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::KeyTime const*>(&value));
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
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics>
{
    HRESULT __stdcall get_ValueProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ValueProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTimeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTimeProperty());
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
    HRESULT __stdcall get_TargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetName(*reinterpret_cast<hstring const*>(&value));
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
    HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNameProperty());
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
    HRESULT __stdcall get_TargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetName(*reinterpret_cast<hstring const*>(&value));
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
    HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNameProperty());
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
    HRESULT __stdcall get_TargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromHorizontalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromHorizontalOffset());
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
            typename D::abi_guard guard(this->shim());
            this->shim().FromHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromVerticalOffset());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromHorizontalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromVerticalOffsetProperty());
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
    HRESULT __stdcall get_TargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetName(*reinterpret_cast<hstring const*>(&value));
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
    HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNameProperty());
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
    HRESULT __stdcall get_FromHorizontalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromHorizontalOffset());
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
            typename D::abi_guard guard(this->shim());
            this->shim().FromHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromVerticalOffset());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_FromHorizontalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromVerticalOffsetProperty());
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
    HRESULT __stdcall get_Power(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Power());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_PowerProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerProperty());
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
    HRESULT __stdcall get_Forever(abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Forever());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromCount(double count, abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FromCount(count));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromDuration(abi_t<Windows::Foundation::TimeSpan> duration, abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FromDuration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHasCount(abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior> target, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetHasCount(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::RepeatBehavior const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHasDuration(abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior> target, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetHasDuration(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::RepeatBehavior const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Equals(abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior> target, abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior> value, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Equals(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::RepeatBehavior const*>(&target), *reinterpret_cast<Windows::UI::Xaml::Media::Animation::RepeatBehavior const*>(&value)));
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
    HRESULT __stdcall get_TargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromHorizontalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromHorizontalOffset());
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
            typename D::abi_guard guard(this->shim());
            this->shim().FromHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromVerticalOffset());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromHorizontalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromVerticalOffsetProperty());
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
    HRESULT __stdcall get_IsStaggeringEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStaggeringEnabled());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_IsStaggeringEnabledProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStaggeringEnabledProperty());
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
    HRESULT __stdcall get_KeySpline(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeySpline());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeySpline(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeySpline(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::KeySpline const*>(&value));
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
    HRESULT __stdcall get_KeySplineProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeySplineProperty());
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
    HRESULT __stdcall get_KeySpline(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeySpline());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeySpline(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeySpline(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::KeySpline const*>(&value));
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
    HRESULT __stdcall get_KeySplineProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeySplineProperty());
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
    HRESULT __stdcall get_KeySpline(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeySpline());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeySpline(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeySpline(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::KeySpline const*>(&value));
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
    HRESULT __stdcall get_KeySplineProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeySplineProperty());
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
    HRESULT __stdcall get_OpenedTargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenedTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OpenedTargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OpenedTargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedTarget(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenedTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OpenedTarget(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OpenedTarget(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosedTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClosedTargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClosedTargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTarget(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosedTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClosedTarget(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClosedTarget(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentTargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTarget(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTarget(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentTarget(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedLength(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenedLength());
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
            typename D::abi_guard guard(this->shim());
            this->shim().OpenedLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedLength(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosedLength());
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
            typename D::abi_guard guard(this->shim());
            this->shim().ClosedLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetFromCenter(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OffsetFromCenter());
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
            typename D::abi_guard guard(this->shim());
            this->shim().OffsetFromCenter(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationDirection(abi_t<Windows::UI::Xaml::Controls::Primitives::AnimationDirection>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTranslationDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTranslationDirection(abi_t<Windows::UI::Xaml::Controls::Primitives::AnimationDirection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentTranslationDirection(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::AnimationDirection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTranslationOffset());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_OpenedTargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenedTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedTargetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenedTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosedTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTargetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosedTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTargetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedLengthProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenedLengthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedLengthProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosedLengthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetFromCenterProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OffsetFromCenterProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationDirectionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTranslationDirectionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTranslationOffsetProperty());
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
    HRESULT __stdcall get_OpenedTargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenedTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OpenedTargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OpenedTargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedTarget(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenedTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OpenedTarget(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OpenedTarget(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosedTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClosedTargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClosedTargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTarget(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosedTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClosedTarget(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClosedTarget(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentTargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTarget(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTarget());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTarget(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentTarget(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedLength(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenedLength());
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
            typename D::abi_guard guard(this->shim());
            this->shim().OpenedLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedLength(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosedLength());
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
            typename D::abi_guard guard(this->shim());
            this->shim().ClosedLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetFromCenter(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OffsetFromCenter());
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
            typename D::abi_guard guard(this->shim());
            this->shim().OffsetFromCenter(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationDirection(abi_t<Windows::UI::Xaml::Controls::Primitives::AnimationDirection>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTranslationDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTranslationDirection(abi_t<Windows::UI::Xaml::Controls::Primitives::AnimationDirection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentTranslationDirection(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::AnimationDirection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTranslationOffset());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_OpenedTargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenedTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedTargetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenedTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosedTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedTargetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosedTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTargetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenedLengthProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenedLengthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedLengthProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosedLengthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetFromCenterProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OffsetFromCenterProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationDirectionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTranslationDirectionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTranslationOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentTranslationOffsetProperty());
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
    HRESULT __stdcall get_Children(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Children());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Seek(abi_t<Windows::Foundation::TimeSpan> offset) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Seek(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&offset));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Begin() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Begin();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Pause() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Resume() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentState(abi_t<Windows::UI::Xaml::Media::Animation::ClockState>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetCurrentState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentTime(abi_t<Windows::Foundation::TimeSpan>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetCurrentTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SeekAlignedToLastTick(abi_t<Windows::Foundation::TimeSpan> offset) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SeekAlignedToLastTick(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&offset));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SkipToFill() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_TargetPropertyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetPropertyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTargetProperty(::IUnknown* element, HSTRING* path) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *path = detach_abi(this->shim().GetTargetProperty(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::Timeline const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *path = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetTargetProperty(::IUnknown* element, HSTRING path) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTargetProperty(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::Timeline const*>(&element), *reinterpret_cast<hstring const*>(&path));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTargetName(::IUnknown* element, HSTRING* name) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *name = detach_abi(this->shim().GetTargetName(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::Timeline const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *name = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetTargetName(::IUnknown* element, HSTRING name) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTargetName(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::Timeline const*>(&element), *reinterpret_cast<hstring const*>(&name));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetTarget(::IUnknown* timeline, ::IUnknown* target) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTarget(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::Timeline const*>(&timeline), *reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&target));
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
    HRESULT __stdcall get_TargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromHorizontalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromHorizontalOffset());
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
            typename D::abi_guard guard(this->shim());
            this->shim().FromHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromVerticalOffset());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromHorizontalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromVerticalOffsetProperty());
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
    HRESULT __stdcall get_TargetName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToHorizontalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToHorizontalOffset());
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
            typename D::abi_guard guard(this->shim());
            this->shim().ToHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToVerticalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToVerticalOffset());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToHorizontalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToVerticalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToVerticalOffsetProperty());
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
    HRESULT __stdcall get_AutoReverse(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoReverse());
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
            typename D::abi_guard guard(this->shim());
            this->shim().AutoReverse(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BeginTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BeginTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BeginTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_t<Windows::UI::Xaml::Duration>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Duration(abi_t<Windows::UI::Xaml::Duration> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<Windows::UI::Xaml::Duration const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpeedRatio(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpeedRatio());
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
            typename D::abi_guard guard(this->shim());
            this->shim().SpeedRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillBehavior(abi_t<Windows::UI::Xaml::Media::Animation::FillBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FillBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FillBehavior(abi_t<Windows::UI::Xaml::Media::Animation::FillBehavior> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillBehavior(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::FillBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RepeatBehavior(abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RepeatBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RepeatBehavior(abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RepeatBehavior(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::RepeatBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Completed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Animation::ITimelineStatics> : produce_base<D, Windows::UI::Xaml::Media::Animation::ITimelineStatics>
{
    HRESULT __stdcall get_AllowDependentAnimations(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowDependentAnimations());
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
            typename D::abi_guard guard(this->shim());
            this->shim().AllowDependentAnimations(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoReverseProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoReverseProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BeginTimeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BeginTimeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DurationProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DurationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpeedRatioProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpeedRatioProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillBehaviorProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FillBehaviorProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RepeatBehaviorProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RepeatBehaviorProperty());
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

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Animation {

inline AddDeleteThemeTransition::AddDeleteThemeTransition() :
    AddDeleteThemeTransition(activate_instance<AddDeleteThemeTransition>())
{}

inline BackEase::BackEase() :
    BackEase(activate_instance<BackEase>())
{}

inline Windows::UI::Xaml::DependencyProperty BackEase::AmplitudeProperty()
{
    return get_activation_factory<BackEase, Windows::UI::Xaml::Media::Animation::IBackEaseStatics>().AmplitudeProperty();
}

inline BeginStoryboard::BeginStoryboard() :
    BeginStoryboard(activate_instance<BeginStoryboard>())
{}

inline Windows::UI::Xaml::DependencyProperty BeginStoryboard::StoryboardProperty()
{
    return get_activation_factory<BeginStoryboard, Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics>().StoryboardProperty();
}

inline BounceEase::BounceEase() :
    BounceEase(activate_instance<BounceEase>())
{}

inline Windows::UI::Xaml::DependencyProperty BounceEase::BouncesProperty()
{
    return get_activation_factory<BounceEase, Windows::UI::Xaml::Media::Animation::IBounceEaseStatics>().BouncesProperty();
}

inline Windows::UI::Xaml::DependencyProperty BounceEase::BouncinessProperty()
{
    return get_activation_factory<BounceEase, Windows::UI::Xaml::Media::Animation::IBounceEaseStatics>().BouncinessProperty();
}

inline CircleEase::CircleEase() :
    CircleEase(activate_instance<CircleEase>())
{}

inline ColorAnimation::ColorAnimation() :
    ColorAnimation(activate_instance<ColorAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty ColorAnimation::FromProperty()
{
    return get_activation_factory<ColorAnimation, Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>().FromProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorAnimation::ToProperty()
{
    return get_activation_factory<ColorAnimation, Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>().ToProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorAnimation::ByProperty()
{
    return get_activation_factory<ColorAnimation, Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>().ByProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorAnimation::EasingFunctionProperty()
{
    return get_activation_factory<ColorAnimation, Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>().EasingFunctionProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorAnimation::EnableDependentAnimationProperty()
{
    return get_activation_factory<ColorAnimation, Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>().EnableDependentAnimationProperty();
}

inline ColorAnimationUsingKeyFrames::ColorAnimationUsingKeyFrames() :
    ColorAnimationUsingKeyFrames(activate_instance<ColorAnimationUsingKeyFrames>())
{}

inline Windows::UI::Xaml::DependencyProperty ColorAnimationUsingKeyFrames::EnableDependentAnimationProperty()
{
    return get_activation_factory<ColorAnimationUsingKeyFrames, Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics>().EnableDependentAnimationProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorKeyFrame::ValueProperty()
{
    return get_activation_factory<ColorKeyFrame, Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics>().ValueProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorKeyFrame::KeyTimeProperty()
{
    return get_activation_factory<ColorKeyFrame, Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics>().KeyTimeProperty();
}

inline ColorKeyFrameCollection::ColorKeyFrameCollection() :
    ColorKeyFrameCollection(activate_instance<ColorKeyFrameCollection>())
{}

inline CommonNavigationTransitionInfo::CommonNavigationTransitionInfo() :
    CommonNavigationTransitionInfo(activate_instance<CommonNavigationTransitionInfo>())
{}

inline Windows::UI::Xaml::DependencyProperty CommonNavigationTransitionInfo::IsStaggeringEnabledProperty()
{
    return get_activation_factory<CommonNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>().IsStaggeringEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty CommonNavigationTransitionInfo::IsStaggerElementProperty()
{
    return get_activation_factory<CommonNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>().IsStaggerElementProperty();
}

inline bool CommonNavigationTransitionInfo::GetIsStaggerElement(Windows::UI::Xaml::UIElement const& element)
{
    return get_activation_factory<CommonNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>().GetIsStaggerElement(element);
}

inline void CommonNavigationTransitionInfo::SetIsStaggerElement(Windows::UI::Xaml::UIElement const& element, bool value)
{
    get_activation_factory<CommonNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>().SetIsStaggerElement(element, value);
}

inline Windows::UI::Xaml::Media::Animation::ConnectedAnimationService ConnectedAnimationService::GetForCurrentView()
{
    return get_activation_factory<ConnectedAnimationService, Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics>().GetForCurrentView();
}

inline ContentThemeTransition::ContentThemeTransition() :
    ContentThemeTransition(activate_instance<ContentThemeTransition>())
{}

inline Windows::UI::Xaml::DependencyProperty ContentThemeTransition::HorizontalOffsetProperty()
{
    return get_activation_factory<ContentThemeTransition, Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics>().HorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty ContentThemeTransition::VerticalOffsetProperty()
{
    return get_activation_factory<ContentThemeTransition, Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics>().VerticalOffsetProperty();
}

inline ContinuumNavigationTransitionInfo::ContinuumNavigationTransitionInfo() :
    ContinuumNavigationTransitionInfo(activate_instance<ContinuumNavigationTransitionInfo>())
{}

inline Windows::UI::Xaml::DependencyProperty ContinuumNavigationTransitionInfo::ExitElementProperty()
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>().ExitElementProperty();
}

inline Windows::UI::Xaml::DependencyProperty ContinuumNavigationTransitionInfo::IsEntranceElementProperty()
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>().IsEntranceElementProperty();
}

inline bool ContinuumNavigationTransitionInfo::GetIsEntranceElement(Windows::UI::Xaml::UIElement const& element)
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>().GetIsEntranceElement(element);
}

inline void ContinuumNavigationTransitionInfo::SetIsEntranceElement(Windows::UI::Xaml::UIElement const& element, bool value)
{
    get_activation_factory<ContinuumNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>().SetIsEntranceElement(element, value);
}

inline Windows::UI::Xaml::DependencyProperty ContinuumNavigationTransitionInfo::IsExitElementProperty()
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>().IsExitElementProperty();
}

inline bool ContinuumNavigationTransitionInfo::GetIsExitElement(Windows::UI::Xaml::UIElement const& element)
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>().GetIsExitElement(element);
}

inline void ContinuumNavigationTransitionInfo::SetIsExitElement(Windows::UI::Xaml::UIElement const& element, bool value)
{
    get_activation_factory<ContinuumNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>().SetIsExitElement(element, value);
}

inline Windows::UI::Xaml::DependencyProperty ContinuumNavigationTransitionInfo::ExitElementContainerProperty()
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>().ExitElementContainerProperty();
}

inline bool ContinuumNavigationTransitionInfo::GetExitElementContainer(Windows::UI::Xaml::Controls::ListViewBase const& element)
{
    return get_activation_factory<ContinuumNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>().GetExitElementContainer(element);
}

inline void ContinuumNavigationTransitionInfo::SetExitElementContainer(Windows::UI::Xaml::Controls::ListViewBase const& element, bool value)
{
    get_activation_factory<ContinuumNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>().SetExitElementContainer(element, value);
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
    return get_activation_factory<DoubleAnimation, Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>().FromProperty();
}

inline Windows::UI::Xaml::DependencyProperty DoubleAnimation::ToProperty()
{
    return get_activation_factory<DoubleAnimation, Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>().ToProperty();
}

inline Windows::UI::Xaml::DependencyProperty DoubleAnimation::ByProperty()
{
    return get_activation_factory<DoubleAnimation, Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>().ByProperty();
}

inline Windows::UI::Xaml::DependencyProperty DoubleAnimation::EasingFunctionProperty()
{
    return get_activation_factory<DoubleAnimation, Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>().EasingFunctionProperty();
}

inline Windows::UI::Xaml::DependencyProperty DoubleAnimation::EnableDependentAnimationProperty()
{
    return get_activation_factory<DoubleAnimation, Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>().EnableDependentAnimationProperty();
}

inline DoubleAnimationUsingKeyFrames::DoubleAnimationUsingKeyFrames() :
    DoubleAnimationUsingKeyFrames(activate_instance<DoubleAnimationUsingKeyFrames>())
{}

inline Windows::UI::Xaml::DependencyProperty DoubleAnimationUsingKeyFrames::EnableDependentAnimationProperty()
{
    return get_activation_factory<DoubleAnimationUsingKeyFrames, Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics>().EnableDependentAnimationProperty();
}

inline Windows::UI::Xaml::DependencyProperty DoubleKeyFrame::ValueProperty()
{
    return get_activation_factory<DoubleKeyFrame, Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics>().ValueProperty();
}

inline Windows::UI::Xaml::DependencyProperty DoubleKeyFrame::KeyTimeProperty()
{
    return get_activation_factory<DoubleKeyFrame, Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics>().KeyTimeProperty();
}

inline DoubleKeyFrameCollection::DoubleKeyFrameCollection() :
    DoubleKeyFrameCollection(activate_instance<DoubleKeyFrameCollection>())
{}

inline DragItemThemeAnimation::DragItemThemeAnimation() :
    DragItemThemeAnimation(activate_instance<DragItemThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty DragItemThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<DragItemThemeAnimation, Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics>().TargetNameProperty();
}

inline DragOverThemeAnimation::DragOverThemeAnimation() :
    DragOverThemeAnimation(activate_instance<DragOverThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty DragOverThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<DragOverThemeAnimation, Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics>().TargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty DragOverThemeAnimation::ToOffsetProperty()
{
    return get_activation_factory<DragOverThemeAnimation, Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics>().ToOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty DragOverThemeAnimation::DirectionProperty()
{
    return get_activation_factory<DragOverThemeAnimation, Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics>().DirectionProperty();
}

inline DrillInNavigationTransitionInfo::DrillInNavigationTransitionInfo() :
    DrillInNavigationTransitionInfo(activate_instance<DrillInNavigationTransitionInfo>())
{}

inline DrillInThemeAnimation::DrillInThemeAnimation() :
    DrillInThemeAnimation(activate_instance<DrillInThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty DrillInThemeAnimation::EntranceTargetNameProperty()
{
    return get_activation_factory<DrillInThemeAnimation, Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>().EntranceTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty DrillInThemeAnimation::EntranceTargetProperty()
{
    return get_activation_factory<DrillInThemeAnimation, Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>().EntranceTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty DrillInThemeAnimation::ExitTargetNameProperty()
{
    return get_activation_factory<DrillInThemeAnimation, Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>().ExitTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty DrillInThemeAnimation::ExitTargetProperty()
{
    return get_activation_factory<DrillInThemeAnimation, Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>().ExitTargetProperty();
}

inline DrillOutThemeAnimation::DrillOutThemeAnimation() :
    DrillOutThemeAnimation(activate_instance<DrillOutThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty DrillOutThemeAnimation::EntranceTargetNameProperty()
{
    return get_activation_factory<DrillOutThemeAnimation, Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>().EntranceTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty DrillOutThemeAnimation::EntranceTargetProperty()
{
    return get_activation_factory<DrillOutThemeAnimation, Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>().EntranceTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty DrillOutThemeAnimation::ExitTargetNameProperty()
{
    return get_activation_factory<DrillOutThemeAnimation, Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>().ExitTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty DrillOutThemeAnimation::ExitTargetProperty()
{
    return get_activation_factory<DrillOutThemeAnimation, Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>().ExitTargetProperty();
}

inline DropTargetItemThemeAnimation::DropTargetItemThemeAnimation() :
    DropTargetItemThemeAnimation(activate_instance<DropTargetItemThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty DropTargetItemThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<DropTargetItemThemeAnimation, Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics>().TargetNameProperty();
}

inline EasingColorKeyFrame::EasingColorKeyFrame() :
    EasingColorKeyFrame(activate_instance<EasingColorKeyFrame>())
{}

inline Windows::UI::Xaml::DependencyProperty EasingColorKeyFrame::EasingFunctionProperty()
{
    return get_activation_factory<EasingColorKeyFrame, Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics>().EasingFunctionProperty();
}

inline EasingDoubleKeyFrame::EasingDoubleKeyFrame() :
    EasingDoubleKeyFrame(activate_instance<EasingDoubleKeyFrame>())
{}

inline Windows::UI::Xaml::DependencyProperty EasingDoubleKeyFrame::EasingFunctionProperty()
{
    return get_activation_factory<EasingDoubleKeyFrame, Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics>().EasingFunctionProperty();
}

inline Windows::UI::Xaml::DependencyProperty EasingFunctionBase::EasingModeProperty()
{
    return get_activation_factory<EasingFunctionBase, Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics>().EasingModeProperty();
}

inline EasingPointKeyFrame::EasingPointKeyFrame() :
    EasingPointKeyFrame(activate_instance<EasingPointKeyFrame>())
{}

inline Windows::UI::Xaml::DependencyProperty EasingPointKeyFrame::EasingFunctionProperty()
{
    return get_activation_factory<EasingPointKeyFrame, Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics>().EasingFunctionProperty();
}

inline EdgeUIThemeTransition::EdgeUIThemeTransition() :
    EdgeUIThemeTransition(activate_instance<EdgeUIThemeTransition>())
{}

inline Windows::UI::Xaml::DependencyProperty EdgeUIThemeTransition::EdgeProperty()
{
    return get_activation_factory<EdgeUIThemeTransition, Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics>().EdgeProperty();
}

inline ElasticEase::ElasticEase() :
    ElasticEase(activate_instance<ElasticEase>())
{}

inline Windows::UI::Xaml::DependencyProperty ElasticEase::OscillationsProperty()
{
    return get_activation_factory<ElasticEase, Windows::UI::Xaml::Media::Animation::IElasticEaseStatics>().OscillationsProperty();
}

inline Windows::UI::Xaml::DependencyProperty ElasticEase::SpringinessProperty()
{
    return get_activation_factory<ElasticEase, Windows::UI::Xaml::Media::Animation::IElasticEaseStatics>().SpringinessProperty();
}

inline EntranceNavigationTransitionInfo::EntranceNavigationTransitionInfo() :
    EntranceNavigationTransitionInfo(activate_instance<EntranceNavigationTransitionInfo>())
{}

inline Windows::UI::Xaml::DependencyProperty EntranceNavigationTransitionInfo::IsTargetElementProperty()
{
    return get_activation_factory<EntranceNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics>().IsTargetElementProperty();
}

inline bool EntranceNavigationTransitionInfo::GetIsTargetElement(Windows::UI::Xaml::UIElement const& element)
{
    return get_activation_factory<EntranceNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics>().GetIsTargetElement(element);
}

inline void EntranceNavigationTransitionInfo::SetIsTargetElement(Windows::UI::Xaml::UIElement const& element, bool value)
{
    get_activation_factory<EntranceNavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics>().SetIsTargetElement(element, value);
}

inline EntranceThemeTransition::EntranceThemeTransition() :
    EntranceThemeTransition(activate_instance<EntranceThemeTransition>())
{}

inline Windows::UI::Xaml::DependencyProperty EntranceThemeTransition::FromHorizontalOffsetProperty()
{
    return get_activation_factory<EntranceThemeTransition, Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics>().FromHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty EntranceThemeTransition::FromVerticalOffsetProperty()
{
    return get_activation_factory<EntranceThemeTransition, Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics>().FromVerticalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty EntranceThemeTransition::IsStaggeringEnabledProperty()
{
    return get_activation_factory<EntranceThemeTransition, Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics>().IsStaggeringEnabledProperty();
}

inline ExponentialEase::ExponentialEase() :
    ExponentialEase(activate_instance<ExponentialEase>())
{}

inline Windows::UI::Xaml::DependencyProperty ExponentialEase::ExponentProperty()
{
    return get_activation_factory<ExponentialEase, Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics>().ExponentProperty();
}

inline FadeInThemeAnimation::FadeInThemeAnimation() :
    FadeInThemeAnimation(activate_instance<FadeInThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty FadeInThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<FadeInThemeAnimation, Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics>().TargetNameProperty();
}

inline FadeOutThemeAnimation::FadeOutThemeAnimation() :
    FadeOutThemeAnimation(activate_instance<FadeOutThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty FadeOutThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<FadeOutThemeAnimation, Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics>().TargetNameProperty();
}

inline KeySpline::KeySpline() :
    KeySpline(activate_instance<KeySpline>())
{}

inline Windows::UI::Xaml::Media::Animation::KeyTime KeyTimeHelper::FromTimeSpan(Windows::Foundation::TimeSpan const& timeSpan)
{
    return get_activation_factory<KeyTimeHelper, Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics>().FromTimeSpan(timeSpan);
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
    return get_activation_factory<NavigationThemeTransition, Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics>().DefaultNavigationTransitionInfoProperty();
}

inline ObjectAnimationUsingKeyFrames::ObjectAnimationUsingKeyFrames() :
    ObjectAnimationUsingKeyFrames(activate_instance<ObjectAnimationUsingKeyFrames>())
{}

inline Windows::UI::Xaml::DependencyProperty ObjectAnimationUsingKeyFrames::EnableDependentAnimationProperty()
{
    return get_activation_factory<ObjectAnimationUsingKeyFrames, Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics>().EnableDependentAnimationProperty();
}

inline Windows::UI::Xaml::DependencyProperty ObjectKeyFrame::ValueProperty()
{
    return get_activation_factory<ObjectKeyFrame, Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics>().ValueProperty();
}

inline Windows::UI::Xaml::DependencyProperty ObjectKeyFrame::KeyTimeProperty()
{
    return get_activation_factory<ObjectKeyFrame, Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics>().KeyTimeProperty();
}

inline ObjectKeyFrameCollection::ObjectKeyFrameCollection() :
    ObjectKeyFrameCollection(activate_instance<ObjectKeyFrameCollection>())
{}

inline PaneThemeTransition::PaneThemeTransition() :
    PaneThemeTransition(activate_instance<PaneThemeTransition>())
{}

inline Windows::UI::Xaml::DependencyProperty PaneThemeTransition::EdgeProperty()
{
    return get_activation_factory<PaneThemeTransition, Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics>().EdgeProperty();
}

inline PointAnimation::PointAnimation() :
    PointAnimation(activate_instance<PointAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty PointAnimation::FromProperty()
{
    return get_activation_factory<PointAnimation, Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>().FromProperty();
}

inline Windows::UI::Xaml::DependencyProperty PointAnimation::ToProperty()
{
    return get_activation_factory<PointAnimation, Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>().ToProperty();
}

inline Windows::UI::Xaml::DependencyProperty PointAnimation::ByProperty()
{
    return get_activation_factory<PointAnimation, Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>().ByProperty();
}

inline Windows::UI::Xaml::DependencyProperty PointAnimation::EasingFunctionProperty()
{
    return get_activation_factory<PointAnimation, Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>().EasingFunctionProperty();
}

inline Windows::UI::Xaml::DependencyProperty PointAnimation::EnableDependentAnimationProperty()
{
    return get_activation_factory<PointAnimation, Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>().EnableDependentAnimationProperty();
}

inline PointAnimationUsingKeyFrames::PointAnimationUsingKeyFrames() :
    PointAnimationUsingKeyFrames(activate_instance<PointAnimationUsingKeyFrames>())
{}

inline Windows::UI::Xaml::DependencyProperty PointAnimationUsingKeyFrames::EnableDependentAnimationProperty()
{
    return get_activation_factory<PointAnimationUsingKeyFrames, Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics>().EnableDependentAnimationProperty();
}

inline Windows::UI::Xaml::DependencyProperty PointKeyFrame::ValueProperty()
{
    return get_activation_factory<PointKeyFrame, Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics>().ValueProperty();
}

inline Windows::UI::Xaml::DependencyProperty PointKeyFrame::KeyTimeProperty()
{
    return get_activation_factory<PointKeyFrame, Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics>().KeyTimeProperty();
}

inline PointKeyFrameCollection::PointKeyFrameCollection() :
    PointKeyFrameCollection(activate_instance<PointKeyFrameCollection>())
{}

inline PointerDownThemeAnimation::PointerDownThemeAnimation() :
    PointerDownThemeAnimation(activate_instance<PointerDownThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty PointerDownThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<PointerDownThemeAnimation, Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics>().TargetNameProperty();
}

inline PointerUpThemeAnimation::PointerUpThemeAnimation() :
    PointerUpThemeAnimation(activate_instance<PointerUpThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty PointerUpThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<PointerUpThemeAnimation, Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics>().TargetNameProperty();
}

inline PopInThemeAnimation::PopInThemeAnimation() :
    PopInThemeAnimation(activate_instance<PopInThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty PopInThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<PopInThemeAnimation, Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics>().TargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty PopInThemeAnimation::FromHorizontalOffsetProperty()
{
    return get_activation_factory<PopInThemeAnimation, Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics>().FromHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty PopInThemeAnimation::FromVerticalOffsetProperty()
{
    return get_activation_factory<PopInThemeAnimation, Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics>().FromVerticalOffsetProperty();
}

inline PopOutThemeAnimation::PopOutThemeAnimation() :
    PopOutThemeAnimation(activate_instance<PopOutThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty PopOutThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<PopOutThemeAnimation, Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics>().TargetNameProperty();
}

inline PopupThemeTransition::PopupThemeTransition() :
    PopupThemeTransition(activate_instance<PopupThemeTransition>())
{}

inline Windows::UI::Xaml::DependencyProperty PopupThemeTransition::FromHorizontalOffsetProperty()
{
    return get_activation_factory<PopupThemeTransition, Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics>().FromHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty PopupThemeTransition::FromVerticalOffsetProperty()
{
    return get_activation_factory<PopupThemeTransition, Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics>().FromVerticalOffsetProperty();
}

inline PowerEase::PowerEase() :
    PowerEase(activate_instance<PowerEase>())
{}

inline Windows::UI::Xaml::DependencyProperty PowerEase::PowerProperty()
{
    return get_activation_factory<PowerEase, Windows::UI::Xaml::Media::Animation::IPowerEaseStatics>().PowerProperty();
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
    return get_activation_factory<RepeatBehaviorHelper, Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>().Forever();
}

inline Windows::UI::Xaml::Media::Animation::RepeatBehavior RepeatBehaviorHelper::FromCount(double count)
{
    return get_activation_factory<RepeatBehaviorHelper, Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>().FromCount(count);
}

inline Windows::UI::Xaml::Media::Animation::RepeatBehavior RepeatBehaviorHelper::FromDuration(Windows::Foundation::TimeSpan const& duration)
{
    return get_activation_factory<RepeatBehaviorHelper, Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>().FromDuration(duration);
}

inline bool RepeatBehaviorHelper::GetHasCount(Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target)
{
    return get_activation_factory<RepeatBehaviorHelper, Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>().GetHasCount(target);
}

inline bool RepeatBehaviorHelper::GetHasDuration(Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target)
{
    return get_activation_factory<RepeatBehaviorHelper, Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>().GetHasDuration(target);
}

inline bool RepeatBehaviorHelper::Equals(Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target, Windows::UI::Xaml::Media::Animation::RepeatBehavior const& value)
{
    return get_activation_factory<RepeatBehaviorHelper, Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>().Equals(target, value);
}

inline RepositionThemeAnimation::RepositionThemeAnimation() :
    RepositionThemeAnimation(activate_instance<RepositionThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty RepositionThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<RepositionThemeAnimation, Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics>().TargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty RepositionThemeAnimation::FromHorizontalOffsetProperty()
{
    return get_activation_factory<RepositionThemeAnimation, Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics>().FromHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty RepositionThemeAnimation::FromVerticalOffsetProperty()
{
    return get_activation_factory<RepositionThemeAnimation, Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics>().FromVerticalOffsetProperty();
}

inline RepositionThemeTransition::RepositionThemeTransition() :
    RepositionThemeTransition(activate_instance<RepositionThemeTransition>())
{}

inline Windows::UI::Xaml::DependencyProperty RepositionThemeTransition::IsStaggeringEnabledProperty()
{
    return get_activation_factory<RepositionThemeTransition, Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2>().IsStaggeringEnabledProperty();
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
    return get_activation_factory<SplineColorKeyFrame, Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics>().KeySplineProperty();
}

inline SplineDoubleKeyFrame::SplineDoubleKeyFrame() :
    SplineDoubleKeyFrame(activate_instance<SplineDoubleKeyFrame>())
{}

inline Windows::UI::Xaml::DependencyProperty SplineDoubleKeyFrame::KeySplineProperty()
{
    return get_activation_factory<SplineDoubleKeyFrame, Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics>().KeySplineProperty();
}

inline SplinePointKeyFrame::SplinePointKeyFrame() :
    SplinePointKeyFrame(activate_instance<SplinePointKeyFrame>())
{}

inline Windows::UI::Xaml::DependencyProperty SplinePointKeyFrame::KeySplineProperty()
{
    return get_activation_factory<SplinePointKeyFrame, Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics>().KeySplineProperty();
}

inline SplitCloseThemeAnimation::SplitCloseThemeAnimation() :
    SplitCloseThemeAnimation(activate_instance<SplitCloseThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::OpenedTargetNameProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>().OpenedTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::OpenedTargetProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>().OpenedTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ClosedTargetNameProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>().ClosedTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ClosedTargetProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>().ClosedTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ContentTargetNameProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>().ContentTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ContentTargetProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>().ContentTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::OpenedLengthProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>().OpenedLengthProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ClosedLengthProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>().ClosedLengthProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::OffsetFromCenterProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>().OffsetFromCenterProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ContentTranslationDirectionProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>().ContentTranslationDirectionProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitCloseThemeAnimation::ContentTranslationOffsetProperty()
{
    return get_activation_factory<SplitCloseThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>().ContentTranslationOffsetProperty();
}

inline SplitOpenThemeAnimation::SplitOpenThemeAnimation() :
    SplitOpenThemeAnimation(activate_instance<SplitOpenThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::OpenedTargetNameProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>().OpenedTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::OpenedTargetProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>().OpenedTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ClosedTargetNameProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>().ClosedTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ClosedTargetProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>().ClosedTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ContentTargetNameProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>().ContentTargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ContentTargetProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>().ContentTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::OpenedLengthProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>().OpenedLengthProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ClosedLengthProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>().ClosedLengthProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::OffsetFromCenterProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>().OffsetFromCenterProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ContentTranslationDirectionProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>().ContentTranslationDirectionProperty();
}

inline Windows::UI::Xaml::DependencyProperty SplitOpenThemeAnimation::ContentTranslationOffsetProperty()
{
    return get_activation_factory<SplitOpenThemeAnimation, Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>().ContentTranslationOffsetProperty();
}

inline Storyboard::Storyboard() :
    Storyboard(activate_instance<Storyboard>())
{}

inline Windows::UI::Xaml::DependencyProperty Storyboard::TargetPropertyProperty()
{
    return get_activation_factory<Storyboard, Windows::UI::Xaml::Media::Animation::IStoryboardStatics>().TargetPropertyProperty();
}

inline hstring Storyboard::GetTargetProperty(Windows::UI::Xaml::Media::Animation::Timeline const& element)
{
    return get_activation_factory<Storyboard, Windows::UI::Xaml::Media::Animation::IStoryboardStatics>().GetTargetProperty(element);
}

inline void Storyboard::SetTargetProperty(Windows::UI::Xaml::Media::Animation::Timeline const& element, param::hstring const& path)
{
    get_activation_factory<Storyboard, Windows::UI::Xaml::Media::Animation::IStoryboardStatics>().SetTargetProperty(element, path);
}

inline Windows::UI::Xaml::DependencyProperty Storyboard::TargetNameProperty()
{
    return get_activation_factory<Storyboard, Windows::UI::Xaml::Media::Animation::IStoryboardStatics>().TargetNameProperty();
}

inline hstring Storyboard::GetTargetName(Windows::UI::Xaml::Media::Animation::Timeline const& element)
{
    return get_activation_factory<Storyboard, Windows::UI::Xaml::Media::Animation::IStoryboardStatics>().GetTargetName(element);
}

inline void Storyboard::SetTargetName(Windows::UI::Xaml::Media::Animation::Timeline const& element, param::hstring const& name)
{
    get_activation_factory<Storyboard, Windows::UI::Xaml::Media::Animation::IStoryboardStatics>().SetTargetName(element, name);
}

inline void Storyboard::SetTarget(Windows::UI::Xaml::Media::Animation::Timeline const& timeline, Windows::UI::Xaml::DependencyObject const& target)
{
    get_activation_factory<Storyboard, Windows::UI::Xaml::Media::Animation::IStoryboardStatics>().SetTarget(timeline, target);
}

inline SuppressNavigationTransitionInfo::SuppressNavigationTransitionInfo() :
    SuppressNavigationTransitionInfo(activate_instance<SuppressNavigationTransitionInfo>())
{}

inline SwipeBackThemeAnimation::SwipeBackThemeAnimation() :
    SwipeBackThemeAnimation(activate_instance<SwipeBackThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty SwipeBackThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<SwipeBackThemeAnimation, Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics>().TargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SwipeBackThemeAnimation::FromHorizontalOffsetProperty()
{
    return get_activation_factory<SwipeBackThemeAnimation, Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics>().FromHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SwipeBackThemeAnimation::FromVerticalOffsetProperty()
{
    return get_activation_factory<SwipeBackThemeAnimation, Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics>().FromVerticalOffsetProperty();
}

inline SwipeHintThemeAnimation::SwipeHintThemeAnimation() :
    SwipeHintThemeAnimation(activate_instance<SwipeHintThemeAnimation>())
{}

inline Windows::UI::Xaml::DependencyProperty SwipeHintThemeAnimation::TargetNameProperty()
{
    return get_activation_factory<SwipeHintThemeAnimation, Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics>().TargetNameProperty();
}

inline Windows::UI::Xaml::DependencyProperty SwipeHintThemeAnimation::ToHorizontalOffsetProperty()
{
    return get_activation_factory<SwipeHintThemeAnimation, Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics>().ToHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty SwipeHintThemeAnimation::ToVerticalOffsetProperty()
{
    return get_activation_factory<SwipeHintThemeAnimation, Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics>().ToVerticalOffsetProperty();
}

inline bool Timeline::AllowDependentAnimations()
{
    return get_activation_factory<Timeline, Windows::UI::Xaml::Media::Animation::ITimelineStatics>().AllowDependentAnimations();
}

inline void Timeline::AllowDependentAnimations(bool value)
{
    get_activation_factory<Timeline, Windows::UI::Xaml::Media::Animation::ITimelineStatics>().AllowDependentAnimations(value);
}

inline Windows::UI::Xaml::DependencyProperty Timeline::AutoReverseProperty()
{
    return get_activation_factory<Timeline, Windows::UI::Xaml::Media::Animation::ITimelineStatics>().AutoReverseProperty();
}

inline Windows::UI::Xaml::DependencyProperty Timeline::BeginTimeProperty()
{
    return get_activation_factory<Timeline, Windows::UI::Xaml::Media::Animation::ITimelineStatics>().BeginTimeProperty();
}

inline Windows::UI::Xaml::DependencyProperty Timeline::DurationProperty()
{
    return get_activation_factory<Timeline, Windows::UI::Xaml::Media::Animation::ITimelineStatics>().DurationProperty();
}

inline Windows::UI::Xaml::DependencyProperty Timeline::SpeedRatioProperty()
{
    return get_activation_factory<Timeline, Windows::UI::Xaml::Media::Animation::ITimelineStatics>().SpeedRatioProperty();
}

inline Windows::UI::Xaml::DependencyProperty Timeline::FillBehaviorProperty()
{
    return get_activation_factory<Timeline, Windows::UI::Xaml::Media::Animation::ITimelineStatics>().FillBehaviorProperty();
}

inline Windows::UI::Xaml::DependencyProperty Timeline::RepeatBehaviorProperty()
{
    return get_activation_factory<Timeline, Windows::UI::Xaml::Media::Animation::ITimelineStatics>().RepeatBehaviorProperty();
}

inline TimelineCollection::TimelineCollection() :
    TimelineCollection(activate_instance<TimelineCollection>())
{}

inline TransitionCollection::TransitionCollection() :
    TransitionCollection(activate_instance<TransitionCollection>())
{}

template <typename D> hstring INavigationTransitionInfoOverridesT<D>::GetNavigationStateCore() const
{
    return shim().template as<INavigationTransitionInfoOverrides>().GetNavigationStateCore();
}

template <typename D> void INavigationTransitionInfoOverridesT<D>::SetNavigationStateCore(param::hstring const& navigationState) const
{
    return shim().template as<INavigationTransitionInfoOverrides>().SetNavigationStateCore(navigationState);
}

template <typename D, typename ... Interfaces>
struct ColorKeyFrameT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Media::Animation::IColorKeyFrame, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = ColorKeyFrame;

protected:
    ColorKeyFrameT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::Animation::ColorKeyFrame, Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct DoubleKeyFrameT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = DoubleKeyFrame;

protected:
    DoubleKeyFrameT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::Animation::DoubleKeyFrame, Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct NavigationTransitionInfoT :
    implements<D, Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverridesT<D>
{
    using composable = NavigationTransitionInfo;

protected:
    NavigationTransitionInfoT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo, Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ObjectKeyFrameT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Media::Animation::IObjectKeyFrame, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = ObjectKeyFrame;

protected:
    ObjectKeyFrameT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::Animation::ObjectKeyFrame, Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct PointKeyFrameT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Media::Animation::IPointKeyFrame, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = PointKeyFrame;

protected:
    PointKeyFrameT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::Animation::PointKeyFrame, Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct TimelineT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Media::Animation::ITimeline, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = Timeline;

protected:
    TimelineT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::Animation::Timeline, Windows::UI::Xaml::Media::Animation::ITimelineFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IBackEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IBackEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IBackEaseStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IBackEaseStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboard> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboard> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IBounceEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IBounceEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IBounceEaseStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IBounceEaseStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ICircleEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ICircleEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationService> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ICubicEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ICubicEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IElasticEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IElasticEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IElasticEaseStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IElasticEaseStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IKeySpline> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IKeySpline> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelper> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPowerEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPowerEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IPowerEaseStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IPowerEaseStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IQuadraticEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IQuadraticEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IQuarticEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IQuarticEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IQuinticEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IQuinticEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IReorderThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IReorderThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISineEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISineEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IStoryboard> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IStoryboard> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::IStoryboardStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::IStoryboardStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ITimeline> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ITimeline> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ITimelineFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ITimelineFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ITimelineStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ITimelineStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ITransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ITransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ITransitionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ITransitionFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::AddDeleteThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::AddDeleteThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::BackEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::BackEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::BeginStoryboard> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::BeginStoryboard> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::BounceEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::BounceEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::CircleEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::CircleEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ColorAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ColorAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ColorAnimationUsingKeyFrames> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ColorAnimationUsingKeyFrames> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::CommonNavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::CommonNavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationService> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ContentThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ContentThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ContinuumNavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ContinuumNavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::CubicEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::CubicEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DiscreteColorKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DiscreteColorKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DiscreteDoubleKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DiscreteDoubleKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DiscreteObjectKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DiscreteObjectKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DiscretePointKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DiscretePointKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DoubleAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DoubleAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DoubleAnimationUsingKeyFrames> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DoubleAnimationUsingKeyFrames> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DragItemThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DragItemThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DragOverThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DragOverThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DrillInNavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DrillInNavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DrillInThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DrillInThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DrillOutThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DrillOutThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::DropTargetItemThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::DropTargetItemThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::EasingColorKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::EasingColorKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::EasingDoubleKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::EasingDoubleKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::EasingPointKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::EasingPointKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::EdgeUIThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::EdgeUIThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ElasticEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ElasticEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::EntranceNavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::EntranceNavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::EntranceThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::EntranceThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ExponentialEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ExponentialEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::FadeInThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::FadeInThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::FadeOutThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::FadeOutThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::KeySpline> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::KeySpline> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::KeyTimeHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::KeyTimeHelper> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::LinearColorKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::LinearColorKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::LinearDoubleKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::LinearDoubleKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::LinearPointKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::LinearPointKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::NavigationThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::NavigationThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ObjectAnimationUsingKeyFrames> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ObjectAnimationUsingKeyFrames> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::PaneThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::PaneThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::PointAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::PointAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::PointAnimationUsingKeyFrames> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::PointAnimationUsingKeyFrames> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::PointerDownThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::PointerDownThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::PointerUpThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::PointerUpThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::PopInThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::PopInThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::PopOutThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::PopOutThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::PopupThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::PopupThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::PowerEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::PowerEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::QuadraticEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::QuadraticEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::QuarticEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::QuarticEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::QuinticEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::QuinticEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::ReorderThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::ReorderThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::RepeatBehaviorHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::RepeatBehaviorHelper> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::RepositionThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::RepositionThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::RepositionThemeTransition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::RepositionThemeTransition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::SineEase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::SineEase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::SplineColorKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::SplineColorKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::SplineDoubleKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::SplineDoubleKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::SplinePointKeyFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::SplinePointKeyFrame> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::SplitCloseThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::SplitCloseThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::SplitOpenThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::SplitOpenThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::Storyboard> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::Storyboard> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::SuppressNavigationTransitionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::SuppressNavigationTransitionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::SwipeBackThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::SwipeBackThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::SwipeHintThemeAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::SwipeHintThemeAnimation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::Timeline> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::Timeline> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::TimelineCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::TimelineCollection> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::Transition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::Transition> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Animation::TransitionCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Animation::TransitionCollection> {};

}

WINRT_WARNING_POP
