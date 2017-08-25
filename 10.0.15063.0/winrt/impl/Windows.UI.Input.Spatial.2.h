// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Haptics.1.h"
#include "winrt/impl/Windows.Perception.1.h"
#include "winrt/impl/Windows.Perception.People.1.h"
#include "winrt/impl/Windows.Perception.Spatial.1.h"
#include "winrt/impl/Windows.UI.Input.Spatial.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Input::Spatial {

struct WINRT_EBO SpatialGestureRecognizer :
    Windows::UI::Input::Spatial::ISpatialGestureRecognizer
{
    SpatialGestureRecognizer(std::nullptr_t) noexcept {}
    SpatialGestureRecognizer(Windows::UI::Input::Spatial::SpatialGestureSettings const& settings);
};

struct WINRT_EBO SpatialHoldCanceledEventArgs :
    Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs
{
    SpatialHoldCanceledEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialHoldCompletedEventArgs :
    Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs
{
    SpatialHoldCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialHoldStartedEventArgs :
    Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs
{
    SpatialHoldStartedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialInteraction :
    Windows::UI::Input::Spatial::ISpatialInteraction
{
    SpatialInteraction(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialInteractionController :
    Windows::UI::Input::Spatial::ISpatialInteractionController
{
    SpatialInteractionController(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialInteractionControllerProperties :
    Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties
{
    SpatialInteractionControllerProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialInteractionDetectedEventArgs :
    Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs,
    impl::require<SpatialInteractionDetectedEventArgs, Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2>
{
    SpatialInteractionDetectedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialInteractionManager :
    Windows::UI::Input::Spatial::ISpatialInteractionManager
{
    SpatialInteractionManager(std::nullptr_t) noexcept {}
    static Windows::UI::Input::Spatial::SpatialInteractionManager GetForCurrentView();
};

struct WINRT_EBO SpatialInteractionSource :
    Windows::UI::Input::Spatial::ISpatialInteractionSource,
    impl::require<SpatialInteractionSource, Windows::UI::Input::Spatial::ISpatialInteractionSource2>
{
    SpatialInteractionSource(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialInteractionSourceEventArgs :
    Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs,
    impl::require<SpatialInteractionSourceEventArgs, Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2>
{
    SpatialInteractionSourceEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialInteractionSourceLocation :
    Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation,
    impl::require<SpatialInteractionSourceLocation, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2>
{
    SpatialInteractionSourceLocation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialInteractionSourceProperties :
    Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties
{
    SpatialInteractionSourceProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialInteractionSourceState :
    Windows::UI::Input::Spatial::ISpatialInteractionSourceState,
    impl::require<SpatialInteractionSourceState, Windows::UI::Input::Spatial::ISpatialInteractionSourceState2>
{
    SpatialInteractionSourceState(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialManipulationCanceledEventArgs :
    Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs
{
    SpatialManipulationCanceledEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialManipulationCompletedEventArgs :
    Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs
{
    SpatialManipulationCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialManipulationDelta :
    Windows::UI::Input::Spatial::ISpatialManipulationDelta
{
    SpatialManipulationDelta(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialManipulationStartedEventArgs :
    Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs
{
    SpatialManipulationStartedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialManipulationUpdatedEventArgs :
    Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs
{
    SpatialManipulationUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialNavigationCanceledEventArgs :
    Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs
{
    SpatialNavigationCanceledEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialNavigationCompletedEventArgs :
    Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs
{
    SpatialNavigationCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialNavigationStartedEventArgs :
    Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs
{
    SpatialNavigationStartedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialNavigationUpdatedEventArgs :
    Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs
{
    SpatialNavigationUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialPointerInteractionSourcePose :
    Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose
{
    SpatialPointerInteractionSourcePose(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialPointerPose :
    Windows::UI::Input::Spatial::ISpatialPointerPose,
    impl::require<SpatialPointerPose, Windows::UI::Input::Spatial::ISpatialPointerPose2>
{
    SpatialPointerPose(std::nullptr_t) noexcept {}
    static Windows::UI::Input::Spatial::SpatialPointerPose TryGetAtTimestamp(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::PerceptionTimestamp const& timestamp);
};

struct WINRT_EBO SpatialRecognitionEndedEventArgs :
    Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs
{
    SpatialRecognitionEndedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialRecognitionStartedEventArgs :
    Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs
{
    SpatialRecognitionStartedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialTappedEventArgs :
    Windows::UI::Input::Spatial::ISpatialTappedEventArgs
{
    SpatialTappedEventArgs(std::nullptr_t) noexcept {}
};

}
