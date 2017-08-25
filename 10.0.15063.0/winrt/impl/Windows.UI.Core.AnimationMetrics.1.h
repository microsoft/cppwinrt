// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Core.AnimationMetrics.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Core::AnimationMetrics {

struct WINRT_EBO IAnimationDescription :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAnimationDescription>
{
    IAnimationDescription(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAnimationDescriptionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAnimationDescriptionFactory>
{
    IAnimationDescriptionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOpacityAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOpacityAnimation>,
    impl::require<IOpacityAnimation, Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
{
    IOpacityAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPropertyAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPropertyAnimation>
{
    IPropertyAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScaleAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScaleAnimation>,
    impl::require<IScaleAnimation, Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
{
    IScaleAnimation(std::nullptr_t = nullptr) noexcept {}
};

}
