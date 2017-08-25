// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Composition.0.h"
#include "winrt/impl/Windows.UI.Input.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.UI.Composition.Interactions.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Interactions {

struct WINRT_EBO ICompositionConditionalValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionConditionalValue>
{
    ICompositionConditionalValue(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionConditionalValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionConditionalValueStatics>
{
    ICompositionConditionalValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionInteractionSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionInteractionSource>
{
    ICompositionInteractionSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionInteractionSourceCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionInteractionSourceCollection>,
    impl::require<ICompositionInteractionSourceCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::ICompositionInteractionSource>>
{
    ICompositionInteractionSourceCollection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTracker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTracker>
{
    IInteractionTracker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTracker2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTracker2>
{
    IInteractionTracker2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerCustomAnimationStateEnteredArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerCustomAnimationStateEnteredArgs>
{
    IInteractionTrackerCustomAnimationStateEnteredArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerIdleStateEnteredArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerIdleStateEnteredArgs>
{
    IInteractionTrackerIdleStateEnteredArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerInertiaModifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaModifier>
{
    IInteractionTrackerInertiaModifier(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerInertiaModifierFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaModifierFactory>
{
    IInteractionTrackerInertiaModifierFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerInertiaMotion :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaMotion>
{
    IInteractionTrackerInertiaMotion(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerInertiaMotionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaMotionStatics>
{
    IInteractionTrackerInertiaMotionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerInertiaRestingValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaRestingValue>
{
    IInteractionTrackerInertiaRestingValue(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerInertiaRestingValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaRestingValueStatics>
{
    IInteractionTrackerInertiaRestingValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerInertiaStateEnteredArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaStateEnteredArgs>
{
    IInteractionTrackerInertiaStateEnteredArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerInteractingStateEnteredArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInteractingStateEnteredArgs>
{
    IInteractionTrackerInteractingStateEnteredArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerOwner :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerOwner>
{
    IInteractionTrackerOwner(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerRequestIgnoredArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerRequestIgnoredArgs>
{
    IInteractionTrackerRequestIgnoredArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerStatics>
{
    IInteractionTrackerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInteractionTrackerValuesChangedArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerValuesChangedArgs>
{
    IInteractionTrackerValuesChangedArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisualInteractionSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualInteractionSource>
{
    IVisualInteractionSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisualInteractionSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualInteractionSource2>
{
    IVisualInteractionSource2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisualInteractionSourceObjectFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualInteractionSourceObjectFactory>
{
    IVisualInteractionSourceObjectFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisualInteractionSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualInteractionSourceStatics>
{
    IVisualInteractionSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

}
