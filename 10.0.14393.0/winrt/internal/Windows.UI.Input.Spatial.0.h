// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Input::Spatial {

struct ISpatialGestureRecognizer;
struct ISpatialGestureRecognizerFactory;
struct ISpatialHoldCanceledEventArgs;
struct ISpatialHoldCompletedEventArgs;
struct ISpatialHoldStartedEventArgs;
struct ISpatialInteraction;
struct ISpatialInteractionDetectedEventArgs;
struct ISpatialInteractionManager;
struct ISpatialInteractionManagerStatics;
struct ISpatialInteractionSource;
struct ISpatialInteractionSourceEventArgs;
struct ISpatialInteractionSourceLocation;
struct ISpatialInteractionSourceLocation2;
struct ISpatialInteractionSourceProperties;
struct ISpatialInteractionSourceState;
struct ISpatialManipulationCanceledEventArgs;
struct ISpatialManipulationCompletedEventArgs;
struct ISpatialManipulationDelta;
struct ISpatialManipulationStartedEventArgs;
struct ISpatialManipulationUpdatedEventArgs;
struct ISpatialNavigationCanceledEventArgs;
struct ISpatialNavigationCompletedEventArgs;
struct ISpatialNavigationStartedEventArgs;
struct ISpatialNavigationUpdatedEventArgs;
struct ISpatialPointerPose;
struct ISpatialPointerPoseStatics;
struct ISpatialRecognitionEndedEventArgs;
struct ISpatialRecognitionStartedEventArgs;
struct ISpatialTappedEventArgs;
struct SpatialGestureRecognizer;
struct SpatialHoldCanceledEventArgs;
struct SpatialHoldCompletedEventArgs;
struct SpatialHoldStartedEventArgs;
struct SpatialInteraction;
struct SpatialInteractionDetectedEventArgs;
struct SpatialInteractionManager;
struct SpatialInteractionSource;
struct SpatialInteractionSourceEventArgs;
struct SpatialInteractionSourceLocation;
struct SpatialInteractionSourceProperties;
struct SpatialInteractionSourceState;
struct SpatialManipulationCanceledEventArgs;
struct SpatialManipulationCompletedEventArgs;
struct SpatialManipulationDelta;
struct SpatialManipulationStartedEventArgs;
struct SpatialManipulationUpdatedEventArgs;
struct SpatialNavigationCanceledEventArgs;
struct SpatialNavigationCompletedEventArgs;
struct SpatialNavigationStartedEventArgs;
struct SpatialNavigationUpdatedEventArgs;
struct SpatialPointerPose;
struct SpatialRecognitionEndedEventArgs;
struct SpatialRecognitionStartedEventArgs;
struct SpatialTappedEventArgs;

}

namespace Windows::UI::Input::Spatial {

struct ISpatialGestureRecognizer;
struct ISpatialGestureRecognizerFactory;
struct ISpatialHoldCanceledEventArgs;
struct ISpatialHoldCompletedEventArgs;
struct ISpatialHoldStartedEventArgs;
struct ISpatialInteraction;
struct ISpatialInteractionDetectedEventArgs;
struct ISpatialInteractionManager;
struct ISpatialInteractionManagerStatics;
struct ISpatialInteractionSource;
struct ISpatialInteractionSourceEventArgs;
struct ISpatialInteractionSourceLocation;
struct ISpatialInteractionSourceLocation2;
struct ISpatialInteractionSourceProperties;
struct ISpatialInteractionSourceState;
struct ISpatialManipulationCanceledEventArgs;
struct ISpatialManipulationCompletedEventArgs;
struct ISpatialManipulationDelta;
struct ISpatialManipulationStartedEventArgs;
struct ISpatialManipulationUpdatedEventArgs;
struct ISpatialNavigationCanceledEventArgs;
struct ISpatialNavigationCompletedEventArgs;
struct ISpatialNavigationStartedEventArgs;
struct ISpatialNavigationUpdatedEventArgs;
struct ISpatialPointerPose;
struct ISpatialPointerPoseStatics;
struct ISpatialRecognitionEndedEventArgs;
struct ISpatialRecognitionStartedEventArgs;
struct ISpatialTappedEventArgs;
struct SpatialGestureRecognizer;
struct SpatialHoldCanceledEventArgs;
struct SpatialHoldCompletedEventArgs;
struct SpatialHoldStartedEventArgs;
struct SpatialInteraction;
struct SpatialInteractionDetectedEventArgs;
struct SpatialInteractionManager;
struct SpatialInteractionSource;
struct SpatialInteractionSourceEventArgs;
struct SpatialInteractionSourceLocation;
struct SpatialInteractionSourceProperties;
struct SpatialInteractionSourceState;
struct SpatialManipulationCanceledEventArgs;
struct SpatialManipulationCompletedEventArgs;
struct SpatialManipulationDelta;
struct SpatialManipulationStartedEventArgs;
struct SpatialManipulationUpdatedEventArgs;
struct SpatialNavigationCanceledEventArgs;
struct SpatialNavigationCompletedEventArgs;
struct SpatialNavigationStartedEventArgs;
struct SpatialNavigationUpdatedEventArgs;
struct SpatialPointerPose;
struct SpatialRecognitionEndedEventArgs;
struct SpatialRecognitionStartedEventArgs;
struct SpatialTappedEventArgs;

}

namespace Windows::UI::Input::Spatial {

enum class SpatialGestureSettings : unsigned
{
    None = 0x0,
    Tap = 0x1,
    DoubleTap = 0x2,
    Hold = 0x4,
    ManipulationTranslate = 0x8,
    NavigationX = 0x10,
    NavigationY = 0x20,
    NavigationZ = 0x40,
    NavigationRailsX = 0x80,
    NavigationRailsY = 0x100,
    NavigationRailsZ = 0x200,
};

DEFINE_ENUM_FLAG_OPERATORS(SpatialGestureSettings)

enum class SpatialInteractionSourceKind
{
    Other = 0,
    Hand = 1,
    Voice = 2,
    Controller = 3,
};

}

}
