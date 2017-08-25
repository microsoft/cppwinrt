// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Haptics.0.h"
#include "winrt/impl/Windows.Perception.0.h"
#include "winrt/impl/Windows.Perception.People.0.h"
#include "winrt/impl/Windows.Perception.Spatial.0.h"
#include "winrt/impl/Windows.UI.Input.Spatial.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Input::Spatial {

struct WINRT_EBO ISpatialGestureRecognizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialGestureRecognizer>
{
    ISpatialGestureRecognizer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialGestureRecognizerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialGestureRecognizerFactory>
{
    ISpatialGestureRecognizerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialHoldCanceledEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialHoldCanceledEventArgs>
{
    ISpatialHoldCanceledEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialHoldCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialHoldCompletedEventArgs>
{
    ISpatialHoldCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialHoldStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialHoldStartedEventArgs>
{
    ISpatialHoldStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteraction :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteraction>
{
    ISpatialInteraction(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionController :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionController>
{
    ISpatialInteractionController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionControllerProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionControllerProperties>
{
    ISpatialInteractionControllerProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionDetectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionDetectedEventArgs>
{
    ISpatialInteractionDetectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionDetectedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionDetectedEventArgs2>,
    impl::require<ISpatialInteractionDetectedEventArgs2, Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs>
{
    ISpatialInteractionDetectedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionManager>
{
    ISpatialInteractionManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionManagerStatics>
{
    ISpatialInteractionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSource>
{
    ISpatialInteractionSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSource2>,
    impl::require<ISpatialInteractionSource2, Windows::UI::Input::Spatial::ISpatialInteractionSource>
{
    ISpatialInteractionSource2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionSourceEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceEventArgs>
{
    ISpatialInteractionSourceEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionSourceEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceEventArgs2>,
    impl::require<ISpatialInteractionSourceEventArgs2, Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs>
{
    ISpatialInteractionSourceEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionSourceLocation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceLocation>
{
    ISpatialInteractionSourceLocation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionSourceLocation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceLocation2>
{
    ISpatialInteractionSourceLocation2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionSourceProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceProperties>
{
    ISpatialInteractionSourceProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionSourceState :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceState>
{
    ISpatialInteractionSourceState(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialInteractionSourceState2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialInteractionSourceState2>,
    impl::require<ISpatialInteractionSourceState2, Windows::UI::Input::Spatial::ISpatialInteractionSourceState>
{
    ISpatialInteractionSourceState2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialManipulationCanceledEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialManipulationCanceledEventArgs>
{
    ISpatialManipulationCanceledEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialManipulationCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialManipulationCompletedEventArgs>
{
    ISpatialManipulationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialManipulationDelta :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialManipulationDelta>
{
    ISpatialManipulationDelta(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialManipulationStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialManipulationStartedEventArgs>
{
    ISpatialManipulationStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialManipulationUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialManipulationUpdatedEventArgs>
{
    ISpatialManipulationUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialNavigationCanceledEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialNavigationCanceledEventArgs>
{
    ISpatialNavigationCanceledEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialNavigationCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialNavigationCompletedEventArgs>
{
    ISpatialNavigationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialNavigationStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialNavigationStartedEventArgs>
{
    ISpatialNavigationStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialNavigationUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialNavigationUpdatedEventArgs>
{
    ISpatialNavigationUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialPointerInteractionSourcePose :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialPointerInteractionSourcePose>
{
    ISpatialPointerInteractionSourcePose(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialPointerPose :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialPointerPose>
{
    ISpatialPointerPose(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialPointerPose2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialPointerPose2>,
    impl::require<ISpatialPointerPose2, Windows::UI::Input::Spatial::ISpatialPointerPose>
{
    ISpatialPointerPose2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialPointerPoseStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialPointerPoseStatics>
{
    ISpatialPointerPoseStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialRecognitionEndedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialRecognitionEndedEventArgs>
{
    ISpatialRecognitionEndedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialRecognitionStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialRecognitionStartedEventArgs>
{
    ISpatialRecognitionStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialTappedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialTappedEventArgs>
{
    ISpatialTappedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
