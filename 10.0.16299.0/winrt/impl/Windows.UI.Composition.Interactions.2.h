// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Input.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.UI.Composition.Interactions.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Interactions {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Interactions {

struct WINRT_EBO CompositionConditionalValue :
    Windows::UI::Composition::Interactions::ICompositionConditionalValue,
    impl::base<CompositionConditionalValue, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionConditionalValue, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3>
{
    CompositionConditionalValue(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Interactions::CompositionConditionalValue Create(Windows::UI::Composition::Compositor const& compositor);
};

struct WINRT_EBO CompositionInteractionSourceCollection :
    Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection,
    impl::base<CompositionInteractionSourceCollection, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionInteractionSourceCollection, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3>
{
    CompositionInteractionSourceCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InteractionTracker :
    Windows::UI::Composition::Interactions::IInteractionTracker,
    impl::base<InteractionTracker, Windows::UI::Composition::CompositionObject>,
    impl::require<InteractionTracker, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::Interactions::IInteractionTracker2, Windows::UI::Composition::Interactions::IInteractionTracker3>
{
    InteractionTracker(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Interactions::InteractionTracker Create(Windows::UI::Composition::Compositor const& compositor);
    static Windows::UI::Composition::Interactions::InteractionTracker CreateWithOwner(Windows::UI::Composition::Compositor const& compositor, Windows::UI::Composition::Interactions::IInteractionTrackerOwner const& owner);
};

struct WINRT_EBO InteractionTrackerCustomAnimationStateEnteredArgs :
    Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs
{
    InteractionTrackerCustomAnimationStateEnteredArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InteractionTrackerIdleStateEnteredArgs :
    Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs
{
    InteractionTrackerIdleStateEnteredArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InteractionTrackerInertiaModifier :
    Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier,
    impl::base<InteractionTrackerInertiaModifier, Windows::UI::Composition::CompositionObject>,
    impl::require<InteractionTrackerInertiaModifier, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3>
{
    InteractionTrackerInertiaModifier(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InteractionTrackerInertiaMotion :
    Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion,
    impl::base<InteractionTrackerInertiaMotion, Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier, Windows::UI::Composition::CompositionObject>,
    impl::require<InteractionTrackerInertiaMotion, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
{
    InteractionTrackerInertiaMotion(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion Create(Windows::UI::Composition::Compositor const& compositor);
};

struct WINRT_EBO InteractionTrackerInertiaNaturalMotion :
    Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion,
    impl::base<InteractionTrackerInertiaNaturalMotion, Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier, Windows::UI::Composition::CompositionObject>,
    impl::require<InteractionTrackerInertiaNaturalMotion, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
{
    InteractionTrackerInertiaNaturalMotion(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion Create(Windows::UI::Composition::Compositor const& compositor);
};

struct WINRT_EBO InteractionTrackerInertiaRestingValue :
    Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue,
    impl::base<InteractionTrackerInertiaRestingValue, Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier, Windows::UI::Composition::CompositionObject>,
    impl::require<InteractionTrackerInertiaRestingValue, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
{
    InteractionTrackerInertiaRestingValue(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue Create(Windows::UI::Composition::Compositor const& compositor);
};

struct WINRT_EBO InteractionTrackerInertiaStateEnteredArgs :
    Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs
{
    InteractionTrackerInertiaStateEnteredArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InteractionTrackerInteractingStateEnteredArgs :
    Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs
{
    InteractionTrackerInteractingStateEnteredArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InteractionTrackerRequestIgnoredArgs :
    Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs
{
    InteractionTrackerRequestIgnoredArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InteractionTrackerValuesChangedArgs :
    Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs
{
    InteractionTrackerValuesChangedArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InteractionTrackerVector2InertiaModifier :
    Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier,
    impl::base<InteractionTrackerVector2InertiaModifier, Windows::UI::Composition::CompositionObject>,
    impl::require<InteractionTrackerVector2InertiaModifier, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3>
{
    InteractionTrackerVector2InertiaModifier(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InteractionTrackerVector2InertiaNaturalMotion :
    Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion,
    impl::base<InteractionTrackerVector2InertiaNaturalMotion, Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier, Windows::UI::Composition::CompositionObject>,
    impl::require<InteractionTrackerVector2InertiaNaturalMotion, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>
{
    InteractionTrackerVector2InertiaNaturalMotion(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion Create(Windows::UI::Composition::Compositor const& compositor);
};

struct WINRT_EBO VisualInteractionSource :
    Windows::UI::Composition::Interactions::IVisualInteractionSource,
    impl::base<VisualInteractionSource, Windows::UI::Composition::CompositionObject>,
    impl::require<VisualInteractionSource, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::Interactions::ICompositionInteractionSource, Windows::UI::Composition::Interactions::IVisualInteractionSource2>
{
    VisualInteractionSource(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Interactions::VisualInteractionSource Create(Windows::UI::Composition::Visual const& source);
};

}
