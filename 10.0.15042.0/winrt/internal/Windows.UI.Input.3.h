// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Input.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Input {

struct WINRT_EBO CrossSlidingEventArgs :
    Windows::UI::Input::ICrossSlidingEventArgs
{
    CrossSlidingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DraggingEventArgs :
    Windows::UI::Input::IDraggingEventArgs
{
    DraggingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EdgeGesture :
    Windows::UI::Input::IEdgeGesture
{
    EdgeGesture(std::nullptr_t) noexcept {}
    static Windows::UI::Input::EdgeGesture GetForCurrentView();
};

struct WINRT_EBO EdgeGestureEventArgs :
    Windows::UI::Input::IEdgeGestureEventArgs
{
    EdgeGestureEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GestureRecognizer :
    Windows::UI::Input::IGestureRecognizer
{
    GestureRecognizer(std::nullptr_t) noexcept {}
    GestureRecognizer();
};

struct WINRT_EBO HoldingEventArgs :
    Windows::UI::Input::IHoldingEventArgs
{
    HoldingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO KeyboardDeliveryInterceptor :
    Windows::UI::Input::IKeyboardDeliveryInterceptor
{
    KeyboardDeliveryInterceptor(std::nullptr_t) noexcept {}
    static Windows::UI::Input::KeyboardDeliveryInterceptor GetForCurrentView();
};

struct WINRT_EBO ManipulationCompletedEventArgs :
    Windows::UI::Input::IManipulationCompletedEventArgs
{
    ManipulationCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ManipulationInertiaStartingEventArgs :
    Windows::UI::Input::IManipulationInertiaStartingEventArgs
{
    ManipulationInertiaStartingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ManipulationStartedEventArgs :
    Windows::UI::Input::IManipulationStartedEventArgs
{
    ManipulationStartedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ManipulationUpdatedEventArgs :
    Windows::UI::Input::IManipulationUpdatedEventArgs
{
    ManipulationUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MouseWheelParameters :
    Windows::UI::Input::IMouseWheelParameters
{
    MouseWheelParameters(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PointerPoint :
    Windows::UI::Input::IPointerPoint
{
    PointerPoint(std::nullptr_t) noexcept {}
    static Windows::UI::Input::PointerPoint GetCurrentPoint(uint32_t pointerId);
    static Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> GetIntermediatePoints(uint32_t pointerId);
    static Windows::UI::Input::PointerPoint GetCurrentPoint(uint32_t pointerId, const Windows::UI::Input::IPointerPointTransform & transform);
    static Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> GetIntermediatePoints(uint32_t pointerId, const Windows::UI::Input::IPointerPointTransform & transform);
};

struct WINRT_EBO PointerPointProperties :
    Windows::UI::Input::IPointerPointProperties,
    impl::require<PointerPointProperties, Windows::UI::Input::IPointerPointProperties2>
{
    PointerPointProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PointerVisualizationSettings :
    Windows::UI::Input::IPointerVisualizationSettings
{
    PointerVisualizationSettings(std::nullptr_t) noexcept {}
    static Windows::UI::Input::PointerVisualizationSettings GetForCurrentView();
};

struct WINRT_EBO RadialController :
    Windows::UI::Input::IRadialController,
    impl::require<RadialController, Windows::UI::Input::IRadialController2>
{
    RadialController(std::nullptr_t) noexcept {}
    static bool IsSupported();
    static Windows::UI::Input::RadialController CreateForCurrentView();
};

struct WINRT_EBO RadialControllerButtonClickedEventArgs :
    Windows::UI::Input::IRadialControllerButtonClickedEventArgs,
    impl::require<RadialControllerButtonClickedEventArgs, Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>
{
    RadialControllerButtonClickedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RadialControllerButtonHoldingEventArgs :
    Windows::UI::Input::IRadialControllerButtonHoldingEventArgs
{
    RadialControllerButtonHoldingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RadialControllerButtonPressedEventArgs :
    Windows::UI::Input::IRadialControllerButtonPressedEventArgs
{
    RadialControllerButtonPressedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RadialControllerButtonReleasedEventArgs :
    Windows::UI::Input::IRadialControllerButtonReleasedEventArgs
{
    RadialControllerButtonReleasedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RadialControllerConfiguration :
    Windows::UI::Input::IRadialControllerConfiguration,
    impl::require<RadialControllerConfiguration, Windows::UI::Input::IRadialControllerConfiguration2>
{
    RadialControllerConfiguration(std::nullptr_t) noexcept {}
    static Windows::UI::Input::RadialControllerConfiguration GetForCurrentView();
};

struct WINRT_EBO RadialControllerControlAcquiredEventArgs :
    Windows::UI::Input::IRadialControllerControlAcquiredEventArgs,
    impl::require<RadialControllerControlAcquiredEventArgs, Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>
{
    RadialControllerControlAcquiredEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RadialControllerMenu :
    Windows::UI::Input::IRadialControllerMenu
{
    RadialControllerMenu(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RadialControllerMenuItem :
    Windows::UI::Input::IRadialControllerMenuItem
{
    RadialControllerMenuItem(std::nullptr_t) noexcept {}
    static Windows::UI::Input::RadialControllerMenuItem CreateFromIcon(hstring_view displayText, const Windows::Storage::Streams::RandomAccessStreamReference & icon);
    static Windows::UI::Input::RadialControllerMenuItem CreateFromKnownIcon(hstring_view displayText, Windows::UI::Input::RadialControllerMenuKnownIcon value);
    static Windows::UI::Input::RadialControllerMenuItem CreateFromFontGlyph(hstring_view displayText, hstring_view glyph, hstring_view fontFamily);
    static Windows::UI::Input::RadialControllerMenuItem CreateFromFontGlyph(hstring_view displayText, hstring_view glyph, hstring_view fontFamily, const Windows::Foundation::Uri & fontUri);
};

struct WINRT_EBO RadialControllerRotationChangedEventArgs :
    Windows::UI::Input::IRadialControllerRotationChangedEventArgs,
    impl::require<RadialControllerRotationChangedEventArgs, Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>
{
    RadialControllerRotationChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RadialControllerScreenContact :
    Windows::UI::Input::IRadialControllerScreenContact
{
    RadialControllerScreenContact(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RadialControllerScreenContactContinuedEventArgs :
    Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs,
    impl::require<RadialControllerScreenContactContinuedEventArgs, Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>
{
    RadialControllerScreenContactContinuedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RadialControllerScreenContactEndedEventArgs :
    Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs
{
    RadialControllerScreenContactEndedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RadialControllerScreenContactStartedEventArgs :
    Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs,
    impl::require<RadialControllerScreenContactStartedEventArgs, Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>
{
    RadialControllerScreenContactStartedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RightTappedEventArgs :
    Windows::UI::Input::IRightTappedEventArgs
{
    RightTappedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TappedEventArgs :
    Windows::UI::Input::ITappedEventArgs
{
    TappedEventArgs(std::nullptr_t) noexcept {}
};

}

}
