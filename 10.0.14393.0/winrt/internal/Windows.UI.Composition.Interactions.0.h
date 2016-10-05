// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Composition::Interactions {

struct ICompositionInteractionSource;
struct ICompositionInteractionSourceCollection;
struct IInteractionTracker;
struct IInteractionTrackerCustomAnimationStateEnteredArgs;
struct IInteractionTrackerIdleStateEnteredArgs;
struct IInteractionTrackerInertiaModifier;
struct IInteractionTrackerInertiaModifierFactory;
struct IInteractionTrackerInertiaMotion;
struct IInteractionTrackerInertiaMotionStatics;
struct IInteractionTrackerInertiaRestingValue;
struct IInteractionTrackerInertiaRestingValueStatics;
struct IInteractionTrackerInertiaStateEnteredArgs;
struct IInteractionTrackerInteractingStateEnteredArgs;
struct IInteractionTrackerOwner;
struct IInteractionTrackerRequestIgnoredArgs;
struct IInteractionTrackerStatics;
struct IInteractionTrackerValuesChangedArgs;
struct IVisualInteractionSource;
struct IVisualInteractionSourceStatics;
struct CompositionInteractionSourceCollection;
struct InteractionTracker;
struct InteractionTrackerCustomAnimationStateEnteredArgs;
struct InteractionTrackerIdleStateEnteredArgs;
struct InteractionTrackerInertiaModifier;
struct InteractionTrackerInertiaMotion;
struct InteractionTrackerInertiaRestingValue;
struct InteractionTrackerInertiaStateEnteredArgs;
struct InteractionTrackerInteractingStateEnteredArgs;
struct InteractionTrackerRequestIgnoredArgs;
struct InteractionTrackerValuesChangedArgs;
struct VisualInteractionSource;

}

namespace Windows::UI::Composition::Interactions {

struct ICompositionInteractionSource;
struct ICompositionInteractionSourceCollection;
struct IInteractionTracker;
struct IInteractionTrackerCustomAnimationStateEnteredArgs;
struct IInteractionTrackerIdleStateEnteredArgs;
struct IInteractionTrackerInertiaModifier;
struct IInteractionTrackerInertiaModifierFactory;
struct IInteractionTrackerInertiaMotion;
struct IInteractionTrackerInertiaMotionStatics;
struct IInteractionTrackerInertiaRestingValue;
struct IInteractionTrackerInertiaRestingValueStatics;
struct IInteractionTrackerInertiaStateEnteredArgs;
struct IInteractionTrackerInteractingStateEnteredArgs;
struct IInteractionTrackerOwner;
struct IInteractionTrackerRequestIgnoredArgs;
struct IInteractionTrackerStatics;
struct IInteractionTrackerValuesChangedArgs;
struct IVisualInteractionSource;
struct IVisualInteractionSourceStatics;
struct CompositionInteractionSourceCollection;
struct InteractionTracker;
struct InteractionTrackerCustomAnimationStateEnteredArgs;
struct InteractionTrackerIdleStateEnteredArgs;
struct InteractionTrackerInertiaModifier;
struct InteractionTrackerInertiaMotion;
struct InteractionTrackerInertiaRestingValue;
struct InteractionTrackerInertiaStateEnteredArgs;
struct InteractionTrackerInteractingStateEnteredArgs;
struct InteractionTrackerRequestIgnoredArgs;
struct InteractionTrackerValuesChangedArgs;
struct VisualInteractionSource;

}

namespace Windows::UI::Composition::Interactions {

enum class InteractionChainingMode
{
    Auto = 0,
    Always = 1,
    Never = 2,
};

enum class InteractionSourceMode
{
    Disabled = 0,
    EnabledWithInertia = 1,
    EnabledWithoutInertia = 2,
};

enum class VisualInteractionSourceRedirectionMode
{
    Off = 0,
    CapableTouchpadOnly = 1,
};

}

}
