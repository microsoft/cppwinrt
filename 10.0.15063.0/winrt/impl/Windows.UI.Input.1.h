// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Haptics.0.h"
#include "winrt/impl/Windows.Devices.Input.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.Core.0.h"
#include "winrt/impl/Windows.UI.Input.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Input {

struct WINRT_EBO ICrossSlidingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICrossSlidingEventArgs>
{
    ICrossSlidingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDraggingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDraggingEventArgs>
{
    IDraggingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEdgeGesture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEdgeGesture>
{
    IEdgeGesture(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEdgeGestureEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEdgeGestureEventArgs>
{
    IEdgeGestureEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEdgeGestureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEdgeGestureStatics>
{
    IEdgeGestureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGestureRecognizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGestureRecognizer>
{
    IGestureRecognizer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHoldingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHoldingEventArgs>
{
    IHoldingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyboardDeliveryInterceptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyboardDeliveryInterceptor>
{
    IKeyboardDeliveryInterceptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyboardDeliveryInterceptorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyboardDeliveryInterceptorStatics>
{
    IKeyboardDeliveryInterceptorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IManipulationCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationCompletedEventArgs>
{
    IManipulationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IManipulationInertiaStartingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationInertiaStartingEventArgs>
{
    IManipulationInertiaStartingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IManipulationStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationStartedEventArgs>
{
    IManipulationStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IManipulationUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationUpdatedEventArgs>
{
    IManipulationUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMouseWheelParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMouseWheelParameters>
{
    IMouseWheelParameters(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPointerPoint :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerPoint>
{
    IPointerPoint(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPointerPointProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerPointProperties>
{
    IPointerPointProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPointerPointProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerPointProperties2>
{
    IPointerPointProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPointerPointStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerPointStatics>
{
    IPointerPointStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPointerPointTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerPointTransform>
{
    IPointerPointTransform(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPointerVisualizationSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerVisualizationSettings>
{
    IPointerVisualizationSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPointerVisualizationSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerVisualizationSettingsStatics>
{
    IPointerVisualizationSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialController>
{
    IRadialController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialController2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialController2>
{
    IRadialController2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerButtonClickedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerButtonClickedEventArgs>
{
    IRadialControllerButtonClickedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerButtonClickedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerButtonClickedEventArgs2>
{
    IRadialControllerButtonClickedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerButtonHoldingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerButtonHoldingEventArgs>
{
    IRadialControllerButtonHoldingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerButtonPressedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerButtonPressedEventArgs>
{
    IRadialControllerButtonPressedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerButtonReleasedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerButtonReleasedEventArgs>
{
    IRadialControllerButtonReleasedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerConfiguration>
{
    IRadialControllerConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerConfiguration2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerConfiguration2>
{
    IRadialControllerConfiguration2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerConfigurationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerConfigurationStatics>
{
    IRadialControllerConfigurationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerControlAcquiredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerControlAcquiredEventArgs>
{
    IRadialControllerControlAcquiredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerControlAcquiredEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerControlAcquiredEventArgs2>
{
    IRadialControllerControlAcquiredEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerMenu :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerMenu>
{
    IRadialControllerMenu(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerMenuItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerMenuItem>
{
    IRadialControllerMenuItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerMenuItemStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerMenuItemStatics>
{
    IRadialControllerMenuItemStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerMenuItemStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerMenuItemStatics2>
{
    IRadialControllerMenuItemStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerRotationChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerRotationChangedEventArgs>
{
    IRadialControllerRotationChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerRotationChangedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerRotationChangedEventArgs2>
{
    IRadialControllerRotationChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerScreenContact :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerScreenContact>
{
    IRadialControllerScreenContact(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerScreenContactContinuedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerScreenContactContinuedEventArgs>
{
    IRadialControllerScreenContactContinuedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerScreenContactContinuedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerScreenContactContinuedEventArgs2>
{
    IRadialControllerScreenContactContinuedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerScreenContactEndedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerScreenContactEndedEventArgs>
{
    IRadialControllerScreenContactEndedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerScreenContactStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerScreenContactStartedEventArgs>
{
    IRadialControllerScreenContactStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerScreenContactStartedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerScreenContactStartedEventArgs2>
{
    IRadialControllerScreenContactStartedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerStatics>
{
    IRadialControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRightTappedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRightTappedEventArgs>
{
    IRightTappedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITappedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITappedEventArgs>
{
    ITappedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
