// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Input.0.h"
#include "Windows.Devices.Input.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.UI.Core.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Input {

struct ManipulationDelta
{
    Windows::Foundation::Point Translation;
    float Scale;
    float Rotation;
    float Expansion;
};

struct ManipulationVelocities
{
    Windows::Foundation::Point Linear;
    float Angular;
    float Expansion;
};

struct CrossSlideThresholds
{
    float SelectionStart;
    float SpeedBumpStart;
    float SpeedBumpEnd;
    float RearrangeStart;
};

}

namespace Windows::UI::Input {

using ManipulationDelta = ABI::Windows::UI::Input::ManipulationDelta;
using ManipulationVelocities = ABI::Windows::UI::Input::ManipulationVelocities;
using CrossSlideThresholds = ABI::Windows::UI::Input::CrossSlideThresholds;

}

namespace ABI::Windows::UI::Input {

struct __declspec(uuid("e9374738-6f88-41d9-8720-78e08e398349")) __declspec(novtable) ICrossSlidingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(winrt::Windows::Devices::Input::PointerDeviceType * value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall get_CrossSlidingState(winrt::Windows::UI::Input::CrossSlidingState * value) = 0;
};

struct __declspec(uuid("1c905384-083c-4bd3-b559-179cddeb33ec")) __declspec(novtable) IDraggingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(winrt::Windows::Devices::Input::PointerDeviceType * value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall get_DraggingState(winrt::Windows::UI::Input::DraggingState * value) = 0;
};

struct __declspec(uuid("580d5292-2ab1-49aa-a7f0-33bd3f8df9f1")) __declspec(novtable) IEdgeGesture : Windows::IInspectable
{
    virtual HRESULT __stdcall add_Starting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Starting(event_token token) = 0;
    virtual HRESULT __stdcall add_Completed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Completed(event_token token) = 0;
    virtual HRESULT __stdcall add_Canceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Canceled(event_token token) = 0;
};

struct __declspec(uuid("44fa4a24-2d09-42e1-8b5e-368208796a4c")) __declspec(novtable) IEdgeGestureEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Kind(winrt::Windows::UI::Input::EdgeGestureKind * value) = 0;
};

struct __declspec(uuid("bc6a8519-18ee-4043-9839-4fc584d60a14")) __declspec(novtable) IEdgeGestureStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::UI::Input::IEdgeGesture ** current) = 0;
};

struct __declspec(uuid("b47a37bf-3d6b-4f88-83e8-6dcb4012ffb0")) __declspec(novtable) IGestureRecognizer : Windows::IInspectable
{
    virtual HRESULT __stdcall get_GestureSettings(winrt::Windows::UI::Input::GestureSettings * value) = 0;
    virtual HRESULT __stdcall put_GestureSettings(winrt::Windows::UI::Input::GestureSettings value) = 0;
    virtual HRESULT __stdcall get_IsInertial(bool * value) = 0;
    virtual HRESULT __stdcall get_IsActive(bool * value) = 0;
    virtual HRESULT __stdcall get_ShowGestureFeedback(bool * value) = 0;
    virtual HRESULT __stdcall put_ShowGestureFeedback(bool value) = 0;
    virtual HRESULT __stdcall get_PivotCenter(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall put_PivotCenter(Windows::Foundation::Point value) = 0;
    virtual HRESULT __stdcall get_PivotRadius(float * value) = 0;
    virtual HRESULT __stdcall put_PivotRadius(float value) = 0;
    virtual HRESULT __stdcall get_InertiaTranslationDeceleration(float * value) = 0;
    virtual HRESULT __stdcall put_InertiaTranslationDeceleration(float value) = 0;
    virtual HRESULT __stdcall get_InertiaRotationDeceleration(float * value) = 0;
    virtual HRESULT __stdcall put_InertiaRotationDeceleration(float value) = 0;
    virtual HRESULT __stdcall get_InertiaExpansionDeceleration(float * value) = 0;
    virtual HRESULT __stdcall put_InertiaExpansionDeceleration(float value) = 0;
    virtual HRESULT __stdcall get_InertiaTranslationDisplacement(float * value) = 0;
    virtual HRESULT __stdcall put_InertiaTranslationDisplacement(float value) = 0;
    virtual HRESULT __stdcall get_InertiaRotationAngle(float * value) = 0;
    virtual HRESULT __stdcall put_InertiaRotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_InertiaExpansion(float * value) = 0;
    virtual HRESULT __stdcall put_InertiaExpansion(float value) = 0;
    virtual HRESULT __stdcall get_ManipulationExact(bool * value) = 0;
    virtual HRESULT __stdcall put_ManipulationExact(bool value) = 0;
    virtual HRESULT __stdcall get_CrossSlideThresholds(Windows::UI::Input::CrossSlideThresholds * value) = 0;
    virtual HRESULT __stdcall put_CrossSlideThresholds(Windows::UI::Input::CrossSlideThresholds value) = 0;
    virtual HRESULT __stdcall get_CrossSlideHorizontally(bool * value) = 0;
    virtual HRESULT __stdcall put_CrossSlideHorizontally(bool value) = 0;
    virtual HRESULT __stdcall get_CrossSlideExact(bool * value) = 0;
    virtual HRESULT __stdcall put_CrossSlideExact(bool value) = 0;
    virtual HRESULT __stdcall get_AutoProcessInertia(bool * value) = 0;
    virtual HRESULT __stdcall put_AutoProcessInertia(bool value) = 0;
    virtual HRESULT __stdcall get_MouseWheelParameters(Windows::UI::Input::IMouseWheelParameters ** value) = 0;
    virtual HRESULT __stdcall abi_CanBeDoubleTap(Windows::UI::Input::IPointerPoint * value, bool * canBeDoubleTap) = 0;
    virtual HRESULT __stdcall abi_ProcessDownEvent(Windows::UI::Input::IPointerPoint * value) = 0;
    virtual HRESULT __stdcall abi_ProcessMoveEvents(Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> * value) = 0;
    virtual HRESULT __stdcall abi_ProcessUpEvent(Windows::UI::Input::IPointerPoint * value) = 0;
    virtual HRESULT __stdcall abi_ProcessMouseWheelEvent(Windows::UI::Input::IPointerPoint * value, bool isShiftKeyDown, bool isControlKeyDown) = 0;
    virtual HRESULT __stdcall abi_ProcessInertia() = 0;
    virtual HRESULT __stdcall abi_CompleteGesture() = 0;
    virtual HRESULT __stdcall add_Tapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs> * handler, event_token * pCookie) = 0;
    virtual HRESULT __stdcall remove_Tapped(event_token cookie) = 0;
    virtual HRESULT __stdcall add_RightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs> * handler, event_token * pCookie) = 0;
    virtual HRESULT __stdcall remove_RightTapped(event_token cookie) = 0;
    virtual HRESULT __stdcall add_Holding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs> * handler, event_token * pCookie) = 0;
    virtual HRESULT __stdcall remove_Holding(event_token cookie) = 0;
    virtual HRESULT __stdcall add_Dragging(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs> * handler, event_token * pCookie) = 0;
    virtual HRESULT __stdcall remove_Dragging(event_token cookie) = 0;
    virtual HRESULT __stdcall add_ManipulationStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs> * handler, event_token * pCookie) = 0;
    virtual HRESULT __stdcall remove_ManipulationStarted(event_token cookie) = 0;
    virtual HRESULT __stdcall add_ManipulationUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs> * handler, event_token * pCookie) = 0;
    virtual HRESULT __stdcall remove_ManipulationUpdated(event_token cookie) = 0;
    virtual HRESULT __stdcall add_ManipulationInertiaStarting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs> * handler, event_token * pCookie) = 0;
    virtual HRESULT __stdcall remove_ManipulationInertiaStarting(event_token cookie) = 0;
    virtual HRESULT __stdcall add_ManipulationCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs> * handler, event_token * pCookie) = 0;
    virtual HRESULT __stdcall remove_ManipulationCompleted(event_token cookie) = 0;
    virtual HRESULT __stdcall add_CrossSliding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs> * handler, event_token * pCookie) = 0;
    virtual HRESULT __stdcall remove_CrossSliding(event_token cookie) = 0;
};

struct __declspec(uuid("2bf755c5-e799-41b4-bb40-242f40959b71")) __declspec(novtable) IHoldingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(winrt::Windows::Devices::Input::PointerDeviceType * value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall get_HoldingState(winrt::Windows::UI::Input::HoldingState * value) = 0;
};

struct __declspec(uuid("b4baf068-8f49-446c-8db5-8c0ffe85cc9e")) __declspec(novtable) IKeyboardDeliveryInterceptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsInterceptionEnabledWhenInForeground(bool * value) = 0;
    virtual HRESULT __stdcall put_IsInterceptionEnabledWhenInForeground(bool value) = 0;
    virtual HRESULT __stdcall add_KeyDown(Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_KeyDown(event_token token) = 0;
    virtual HRESULT __stdcall add_KeyUp(Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_KeyUp(event_token token) = 0;
};

struct __declspec(uuid("f9f63ba2-ceba-4755-8a7e-14c0ffecd239")) __declspec(novtable) IKeyboardDeliveryInterceptorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::UI::Input::IKeyboardDeliveryInterceptor ** keyboardDeliverySettings) = 0;
};

struct __declspec(uuid("b34ab22b-d19b-46ff-9f38-dec7754bb9e7")) __declspec(novtable) IManipulationCompletedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(winrt::Windows::Devices::Input::PointerDeviceType * value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall get_Cumulative(Windows::UI::Input::ManipulationDelta * value) = 0;
    virtual HRESULT __stdcall get_Velocities(Windows::UI::Input::ManipulationVelocities * value) = 0;
};

struct __declspec(uuid("dd37a898-26bf-467a-9ce5-ccf3fb11371e")) __declspec(novtable) IManipulationInertiaStartingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(winrt::Windows::Devices::Input::PointerDeviceType * value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall get_Delta(Windows::UI::Input::ManipulationDelta * value) = 0;
    virtual HRESULT __stdcall get_Cumulative(Windows::UI::Input::ManipulationDelta * value) = 0;
    virtual HRESULT __stdcall get_Velocities(Windows::UI::Input::ManipulationVelocities * value) = 0;
};

struct __declspec(uuid("ddec873e-cfce-4932-8c1d-3c3d011a34c0")) __declspec(novtable) IManipulationStartedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(winrt::Windows::Devices::Input::PointerDeviceType * value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall get_Cumulative(Windows::UI::Input::ManipulationDelta * value) = 0;
};

struct __declspec(uuid("cb354ce5-abb8-4f9f-b3ce-8181aa61ad82")) __declspec(novtable) IManipulationUpdatedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(winrt::Windows::Devices::Input::PointerDeviceType * value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall get_Delta(Windows::UI::Input::ManipulationDelta * value) = 0;
    virtual HRESULT __stdcall get_Cumulative(Windows::UI::Input::ManipulationDelta * value) = 0;
    virtual HRESULT __stdcall get_Velocities(Windows::UI::Input::ManipulationVelocities * value) = 0;
};

struct __declspec(uuid("ead0ca44-9ded-4037-8149-5e4cc2564468")) __declspec(novtable) IMouseWheelParameters : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CharTranslation(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall put_CharTranslation(Windows::Foundation::Point value) = 0;
    virtual HRESULT __stdcall get_DeltaScale(float * value) = 0;
    virtual HRESULT __stdcall put_DeltaScale(float value) = 0;
    virtual HRESULT __stdcall get_DeltaRotationAngle(float * value) = 0;
    virtual HRESULT __stdcall put_DeltaRotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_PageTranslation(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall put_PageTranslation(Windows::Foundation::Point value) = 0;
};

struct __declspec(uuid("e995317d-7296-42d9-8233-c5be73b74a4a")) __declspec(novtable) IPointerPoint : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PointerDevice(Windows::Devices::Input::IPointerDevice ** value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall get_RawPosition(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall get_PointerId(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_FrameId(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Timestamp(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_IsInContact(bool * value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::UI::Input::IPointerPointProperties ** value) = 0;
};

struct __declspec(uuid("c79d8a4b-c163-4ee7-803f-67ce79f9972d")) __declspec(novtable) IPointerPointProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Pressure(float * value) = 0;
    virtual HRESULT __stdcall get_IsInverted(bool * value) = 0;
    virtual HRESULT __stdcall get_IsEraser(bool * value) = 0;
    virtual HRESULT __stdcall get_Orientation(float * value) = 0;
    virtual HRESULT __stdcall get_XTilt(float * value) = 0;
    virtual HRESULT __stdcall get_YTilt(float * value) = 0;
    virtual HRESULT __stdcall get_Twist(float * value) = 0;
    virtual HRESULT __stdcall get_ContactRect(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall get_ContactRectRaw(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall get_TouchConfidence(bool * value) = 0;
    virtual HRESULT __stdcall get_IsLeftButtonPressed(bool * value) = 0;
    virtual HRESULT __stdcall get_IsRightButtonPressed(bool * value) = 0;
    virtual HRESULT __stdcall get_IsMiddleButtonPressed(bool * value) = 0;
    virtual HRESULT __stdcall get_MouseWheelDelta(int32_t * value) = 0;
    virtual HRESULT __stdcall get_IsHorizontalMouseWheel(bool * value) = 0;
    virtual HRESULT __stdcall get_IsPrimary(bool * value) = 0;
    virtual HRESULT __stdcall get_IsInRange(bool * value) = 0;
    virtual HRESULT __stdcall get_IsCanceled(bool * value) = 0;
    virtual HRESULT __stdcall get_IsBarrelButtonPressed(bool * value) = 0;
    virtual HRESULT __stdcall get_IsXButton1Pressed(bool * value) = 0;
    virtual HRESULT __stdcall get_IsXButton2Pressed(bool * value) = 0;
    virtual HRESULT __stdcall get_PointerUpdateKind(winrt::Windows::UI::Input::PointerUpdateKind * value) = 0;
    virtual HRESULT __stdcall abi_HasUsage(uint32_t usagePage, uint32_t usageId, bool * value) = 0;
    virtual HRESULT __stdcall abi_GetUsageValue(uint32_t usagePage, uint32_t usageId, int32_t * value) = 0;
};

struct __declspec(uuid("22c3433a-c83b-41c0-a296-5e232d64d6af")) __declspec(novtable) IPointerPointProperties2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ZDistance(Windows::Foundation::IReference<float> ** value) = 0;
};

struct __declspec(uuid("a506638d-2a1a-413e-bc75-9f38381cc069")) __declspec(novtable) IPointerPointStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetCurrentPoint(uint32_t pointerId, Windows::UI::Input::IPointerPoint ** pointerPoint) = 0;
    virtual HRESULT __stdcall abi_GetIntermediatePoints(uint32_t pointerId, Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> ** pointerPoints) = 0;
    virtual HRESULT __stdcall abi_GetCurrentPointTransformed(uint32_t pointerId, Windows::UI::Input::IPointerPointTransform * transform, Windows::UI::Input::IPointerPoint ** pointerPoint) = 0;
    virtual HRESULT __stdcall abi_GetIntermediatePointsTransformed(uint32_t pointerId, Windows::UI::Input::IPointerPointTransform * transform, Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> ** pointerPoints) = 0;
};

struct __declspec(uuid("4d5fe14f-b87c-4028-bc9c-59e9947fb056")) __declspec(novtable) IPointerPointTransform : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Inverse(Windows::UI::Input::IPointerPointTransform ** value) = 0;
    virtual HRESULT __stdcall abi_TryTransform(Windows::Foundation::Point inPoint, Windows::Foundation::Point * outPoint, bool * returnValue) = 0;
    virtual HRESULT __stdcall abi_TransformBounds(Windows::Foundation::Rect rect, Windows::Foundation::Rect * returnValue) = 0;
};

struct __declspec(uuid("4d1e6461-84f7-499d-bd91-2a36e2b7aaa2")) __declspec(novtable) IPointerVisualizationSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall put_IsContactFeedbackEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsContactFeedbackEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsBarrelButtonFeedbackEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsBarrelButtonFeedbackEnabled(bool * value) = 0;
};

struct __declspec(uuid("68870edb-165b-4214-b4f3-584eca8c8a69")) __declspec(novtable) IPointerVisualizationSettingsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::UI::Input::IPointerVisualizationSettings ** visualizationSettings) = 0;
};

struct __declspec(uuid("3055d1c8-df51-43d4-b23b-0e1037467a09")) __declspec(novtable) IRadialController : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Menu(Windows::UI::Input::IRadialControllerMenu ** value) = 0;
    virtual HRESULT __stdcall get_RotationResolutionInDegrees(double * value) = 0;
    virtual HRESULT __stdcall put_RotationResolutionInDegrees(double value) = 0;
    virtual HRESULT __stdcall get_UseAutomaticHapticFeedback(bool * value) = 0;
    virtual HRESULT __stdcall put_UseAutomaticHapticFeedback(bool value) = 0;
    virtual HRESULT __stdcall add_ScreenContactStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_ScreenContactStarted(event_token cookie) = 0;
    virtual HRESULT __stdcall add_ScreenContactEnded(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_ScreenContactEnded(event_token cookie) = 0;
    virtual HRESULT __stdcall add_ScreenContactContinued(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_ScreenContactContinued(event_token cookie) = 0;
    virtual HRESULT __stdcall add_ControlLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_ControlLost(event_token cookie) = 0;
    virtual HRESULT __stdcall add_RotationChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RotationChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_ButtonClicked(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ButtonClicked(event_token token) = 0;
    virtual HRESULT __stdcall add_ControlAcquired(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_ControlAcquired(event_token cookie) = 0;
};

struct __declspec(uuid("206aa438-e651-11e5-bf62-2c27d7404e85")) __declspec(novtable) IRadialControllerButtonClickedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Contact(Windows::UI::Input::IRadialControllerScreenContact ** value) = 0;
};

struct __declspec(uuid("a6b79ecb-6a52-4430-910c-56370a9d6b42")) __declspec(novtable) IRadialControllerConfiguration : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetDefaultMenuItems(Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Input::RadialControllerSystemMenuItemKind> * buttons) = 0;
    virtual HRESULT __stdcall abi_ResetToDefaultMenuItems() = 0;
    virtual HRESULT __stdcall abi_TrySelectDefaultMenuItem(winrt::Windows::UI::Input::RadialControllerSystemMenuItemKind type, bool * result) = 0;
};

struct __declspec(uuid("79b6b0e5-069a-4486-a99d-8db772b9642f")) __declspec(novtable) IRadialControllerConfigurationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::UI::Input::IRadialControllerConfiguration ** configuration) = 0;
};

struct __declspec(uuid("206aa439-e651-11e5-bf62-2c27d7404e85")) __declspec(novtable) IRadialControllerControlAcquiredEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Contact(Windows::UI::Input::IRadialControllerScreenContact ** value) = 0;
};

struct __declspec(uuid("8506b35d-f640-4412-aba0-bad077e5ea8a")) __declspec(novtable) IRadialControllerMenu : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Items(Windows::Foundation::Collections::IVector<Windows::UI::Input::RadialControllerMenuItem> ** value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsEnabled(bool value) = 0;
    virtual HRESULT __stdcall abi_GetSelectedMenuItem(Windows::UI::Input::IRadialControllerMenuItem ** result) = 0;
    virtual HRESULT __stdcall abi_SelectMenuItem(Windows::UI::Input::IRadialControllerMenuItem * menuItem) = 0;
    virtual HRESULT __stdcall abi_TrySelectPreviouslySelectedMenuItem(bool * result) = 0;
};

struct __declspec(uuid("c80fc98d-ad0b-4c9c-8f2f-136a2373a6ba")) __declspec(novtable) IRadialControllerMenuItem : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DisplayText(hstring * value) = 0;
    virtual HRESULT __stdcall get_Tag(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_Tag(Windows::IInspectable * value) = 0;
    virtual HRESULT __stdcall add_Invoked(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Invoked(event_token token) = 0;
};

struct __declspec(uuid("249e0887-d842-4524-9df8-e0d647edc887")) __declspec(novtable) IRadialControllerMenuItemStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromIcon(hstring displayText, Windows::Storage::Streams::IRandomAccessStreamReference * icon, Windows::UI::Input::IRadialControllerMenuItem ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFromKnownIcon(hstring displayText, winrt::Windows::UI::Input::RadialControllerMenuKnownIcon value, Windows::UI::Input::IRadialControllerMenuItem ** result) = 0;
};

struct __declspec(uuid("206aa435-e651-11e5-bf62-2c27d7404e85")) __declspec(novtable) IRadialControllerRotationChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RotationDeltaInDegrees(double * value) = 0;
    virtual HRESULT __stdcall get_Contact(Windows::UI::Input::IRadialControllerScreenContact ** value) = 0;
};

struct __declspec(uuid("206aa434-e651-11e5-bf62-2c27d7404e85")) __declspec(novtable) IRadialControllerScreenContact : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Bounds(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point * value) = 0;
};

struct __declspec(uuid("206aa437-e651-11e5-bf62-2c27d7404e85")) __declspec(novtable) IRadialControllerScreenContactContinuedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Contact(Windows::UI::Input::IRadialControllerScreenContact ** value) = 0;
};

struct __declspec(uuid("206aa436-e651-11e5-bf62-2c27d7404e85")) __declspec(novtable) IRadialControllerScreenContactStartedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Contact(Windows::UI::Input::IRadialControllerScreenContact ** value) = 0;
};

struct __declspec(uuid("faded0b7-b84c-4894-87aa-8f25aa5f288b")) __declspec(novtable) IRadialControllerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IsSupported(bool * result) = 0;
    virtual HRESULT __stdcall abi_CreateForCurrentView(Windows::UI::Input::IRadialController ** result) = 0;
};

struct __declspec(uuid("4cbf40bd-af7a-4a36-9476-b1dce141709a")) __declspec(novtable) IRightTappedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(winrt::Windows::Devices::Input::PointerDeviceType * value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point * value) = 0;
};

struct __declspec(uuid("cfa126e4-253a-4c3c-953b-395c37aed309")) __declspec(novtable) ITappedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(winrt::Windows::Devices::Input::PointerDeviceType * value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall get_TapCount(uint32_t * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Input::CrossSlidingEventArgs> { using default_interface = Windows::UI::Input::ICrossSlidingEventArgs; };
template <> struct traits<Windows::UI::Input::DraggingEventArgs> { using default_interface = Windows::UI::Input::IDraggingEventArgs; };
template <> struct traits<Windows::UI::Input::EdgeGesture> { using default_interface = Windows::UI::Input::IEdgeGesture; };
template <> struct traits<Windows::UI::Input::EdgeGestureEventArgs> { using default_interface = Windows::UI::Input::IEdgeGestureEventArgs; };
template <> struct traits<Windows::UI::Input::GestureRecognizer> { using default_interface = Windows::UI::Input::IGestureRecognizer; };
template <> struct traits<Windows::UI::Input::HoldingEventArgs> { using default_interface = Windows::UI::Input::IHoldingEventArgs; };
template <> struct traits<Windows::UI::Input::KeyboardDeliveryInterceptor> { using default_interface = Windows::UI::Input::IKeyboardDeliveryInterceptor; };
template <> struct traits<Windows::UI::Input::ManipulationCompletedEventArgs> { using default_interface = Windows::UI::Input::IManipulationCompletedEventArgs; };
template <> struct traits<Windows::UI::Input::ManipulationInertiaStartingEventArgs> { using default_interface = Windows::UI::Input::IManipulationInertiaStartingEventArgs; };
template <> struct traits<Windows::UI::Input::ManipulationStartedEventArgs> { using default_interface = Windows::UI::Input::IManipulationStartedEventArgs; };
template <> struct traits<Windows::UI::Input::ManipulationUpdatedEventArgs> { using default_interface = Windows::UI::Input::IManipulationUpdatedEventArgs; };
template <> struct traits<Windows::UI::Input::MouseWheelParameters> { using default_interface = Windows::UI::Input::IMouseWheelParameters; };
template <> struct traits<Windows::UI::Input::PointerPoint> { using default_interface = Windows::UI::Input::IPointerPoint; };
template <> struct traits<Windows::UI::Input::PointerPointProperties> { using default_interface = Windows::UI::Input::IPointerPointProperties; };
template <> struct traits<Windows::UI::Input::PointerVisualizationSettings> { using default_interface = Windows::UI::Input::IPointerVisualizationSettings; };
template <> struct traits<Windows::UI::Input::RadialController> { using default_interface = Windows::UI::Input::IRadialController; };
template <> struct traits<Windows::UI::Input::RadialControllerButtonClickedEventArgs> { using default_interface = Windows::UI::Input::IRadialControllerButtonClickedEventArgs; };
template <> struct traits<Windows::UI::Input::RadialControllerConfiguration> { using default_interface = Windows::UI::Input::IRadialControllerConfiguration; };
template <> struct traits<Windows::UI::Input::RadialControllerControlAcquiredEventArgs> { using default_interface = Windows::UI::Input::IRadialControllerControlAcquiredEventArgs; };
template <> struct traits<Windows::UI::Input::RadialControllerMenu> { using default_interface = Windows::UI::Input::IRadialControllerMenu; };
template <> struct traits<Windows::UI::Input::RadialControllerMenuItem> { using default_interface = Windows::UI::Input::IRadialControllerMenuItem; };
template <> struct traits<Windows::UI::Input::RadialControllerRotationChangedEventArgs> { using default_interface = Windows::UI::Input::IRadialControllerRotationChangedEventArgs; };
template <> struct traits<Windows::UI::Input::RadialControllerScreenContact> { using default_interface = Windows::UI::Input::IRadialControllerScreenContact; };
template <> struct traits<Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> { using default_interface = Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs; };
template <> struct traits<Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> { using default_interface = Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs; };
template <> struct traits<Windows::UI::Input::RightTappedEventArgs> { using default_interface = Windows::UI::Input::IRightTappedEventArgs; };
template <> struct traits<Windows::UI::Input::TappedEventArgs> { using default_interface = Windows::UI::Input::ITappedEventArgs; };

}

namespace Windows::UI::Input {

template <typename T> struct impl_ICrossSlidingEventArgs;
template <typename T> struct impl_IDraggingEventArgs;
template <typename T> struct impl_IEdgeGesture;
template <typename T> struct impl_IEdgeGestureEventArgs;
template <typename T> struct impl_IEdgeGestureStatics;
template <typename T> struct impl_IGestureRecognizer;
template <typename T> struct impl_IHoldingEventArgs;
template <typename T> struct impl_IKeyboardDeliveryInterceptor;
template <typename T> struct impl_IKeyboardDeliveryInterceptorStatics;
template <typename T> struct impl_IManipulationCompletedEventArgs;
template <typename T> struct impl_IManipulationInertiaStartingEventArgs;
template <typename T> struct impl_IManipulationStartedEventArgs;
template <typename T> struct impl_IManipulationUpdatedEventArgs;
template <typename T> struct impl_IMouseWheelParameters;
template <typename T> struct impl_IPointerPoint;
template <typename T> struct impl_IPointerPointProperties;
template <typename T> struct impl_IPointerPointProperties2;
template <typename T> struct impl_IPointerPointStatics;
template <typename T> struct impl_IPointerPointTransform;
template <typename T> struct impl_IPointerVisualizationSettings;
template <typename T> struct impl_IPointerVisualizationSettingsStatics;
template <typename T> struct impl_IRadialController;
template <typename T> struct impl_IRadialControllerButtonClickedEventArgs;
template <typename T> struct impl_IRadialControllerConfiguration;
template <typename T> struct impl_IRadialControllerConfigurationStatics;
template <typename T> struct impl_IRadialControllerControlAcquiredEventArgs;
template <typename T> struct impl_IRadialControllerMenu;
template <typename T> struct impl_IRadialControllerMenuItem;
template <typename T> struct impl_IRadialControllerMenuItemStatics;
template <typename T> struct impl_IRadialControllerRotationChangedEventArgs;
template <typename T> struct impl_IRadialControllerScreenContact;
template <typename T> struct impl_IRadialControllerScreenContactContinuedEventArgs;
template <typename T> struct impl_IRadialControllerScreenContactStartedEventArgs;
template <typename T> struct impl_IRadialControllerStatics;
template <typename T> struct impl_IRightTappedEventArgs;
template <typename T> struct impl_ITappedEventArgs;

}

namespace impl {

template <> struct traits<Windows::UI::Input::ICrossSlidingEventArgs>
{
    using abi = ABI::Windows::UI::Input::ICrossSlidingEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_ICrossSlidingEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::IDraggingEventArgs>
{
    using abi = ABI::Windows::UI::Input::IDraggingEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_IDraggingEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::IEdgeGesture>
{
    using abi = ABI::Windows::UI::Input::IEdgeGesture;
    template <typename D> using consume = Windows::UI::Input::impl_IEdgeGesture<D>;
};

template <> struct traits<Windows::UI::Input::IEdgeGestureEventArgs>
{
    using abi = ABI::Windows::UI::Input::IEdgeGestureEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_IEdgeGestureEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::IEdgeGestureStatics>
{
    using abi = ABI::Windows::UI::Input::IEdgeGestureStatics;
    template <typename D> using consume = Windows::UI::Input::impl_IEdgeGestureStatics<D>;
};

template <> struct traits<Windows::UI::Input::IGestureRecognizer>
{
    using abi = ABI::Windows::UI::Input::IGestureRecognizer;
    template <typename D> using consume = Windows::UI::Input::impl_IGestureRecognizer<D>;
};

template <> struct traits<Windows::UI::Input::IHoldingEventArgs>
{
    using abi = ABI::Windows::UI::Input::IHoldingEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_IHoldingEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::IKeyboardDeliveryInterceptor>
{
    using abi = ABI::Windows::UI::Input::IKeyboardDeliveryInterceptor;
    template <typename D> using consume = Windows::UI::Input::impl_IKeyboardDeliveryInterceptor<D>;
};

template <> struct traits<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>
{
    using abi = ABI::Windows::UI::Input::IKeyboardDeliveryInterceptorStatics;
    template <typename D> using consume = Windows::UI::Input::impl_IKeyboardDeliveryInterceptorStatics<D>;
};

template <> struct traits<Windows::UI::Input::IManipulationCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Input::IManipulationCompletedEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_IManipulationCompletedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::IManipulationInertiaStartingEventArgs>
{
    using abi = ABI::Windows::UI::Input::IManipulationInertiaStartingEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_IManipulationInertiaStartingEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::IManipulationStartedEventArgs>
{
    using abi = ABI::Windows::UI::Input::IManipulationStartedEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_IManipulationStartedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::IManipulationUpdatedEventArgs>
{
    using abi = ABI::Windows::UI::Input::IManipulationUpdatedEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_IManipulationUpdatedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::IMouseWheelParameters>
{
    using abi = ABI::Windows::UI::Input::IMouseWheelParameters;
    template <typename D> using consume = Windows::UI::Input::impl_IMouseWheelParameters<D>;
};

template <> struct traits<Windows::UI::Input::IPointerPoint>
{
    using abi = ABI::Windows::UI::Input::IPointerPoint;
    template <typename D> using consume = Windows::UI::Input::impl_IPointerPoint<D>;
};

template <> struct traits<Windows::UI::Input::IPointerPointProperties>
{
    using abi = ABI::Windows::UI::Input::IPointerPointProperties;
    template <typename D> using consume = Windows::UI::Input::impl_IPointerPointProperties<D>;
};

template <> struct traits<Windows::UI::Input::IPointerPointProperties2>
{
    using abi = ABI::Windows::UI::Input::IPointerPointProperties2;
    template <typename D> using consume = Windows::UI::Input::impl_IPointerPointProperties2<D>;
};

template <> struct traits<Windows::UI::Input::IPointerPointStatics>
{
    using abi = ABI::Windows::UI::Input::IPointerPointStatics;
    template <typename D> using consume = Windows::UI::Input::impl_IPointerPointStatics<D>;
};

template <> struct traits<Windows::UI::Input::IPointerPointTransform>
{
    using abi = ABI::Windows::UI::Input::IPointerPointTransform;
    template <typename D> using consume = Windows::UI::Input::impl_IPointerPointTransform<D>;
};

template <> struct traits<Windows::UI::Input::IPointerVisualizationSettings>
{
    using abi = ABI::Windows::UI::Input::IPointerVisualizationSettings;
    template <typename D> using consume = Windows::UI::Input::impl_IPointerVisualizationSettings<D>;
};

template <> struct traits<Windows::UI::Input::IPointerVisualizationSettingsStatics>
{
    using abi = ABI::Windows::UI::Input::IPointerVisualizationSettingsStatics;
    template <typename D> using consume = Windows::UI::Input::impl_IPointerVisualizationSettingsStatics<D>;
};

template <> struct traits<Windows::UI::Input::IRadialController>
{
    using abi = ABI::Windows::UI::Input::IRadialController;
    template <typename D> using consume = Windows::UI::Input::impl_IRadialController<D>;
};

template <> struct traits<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>
{
    using abi = ABI::Windows::UI::Input::IRadialControllerButtonClickedEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_IRadialControllerButtonClickedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::IRadialControllerConfiguration>
{
    using abi = ABI::Windows::UI::Input::IRadialControllerConfiguration;
    template <typename D> using consume = Windows::UI::Input::impl_IRadialControllerConfiguration<D>;
};

template <> struct traits<Windows::UI::Input::IRadialControllerConfigurationStatics>
{
    using abi = ABI::Windows::UI::Input::IRadialControllerConfigurationStatics;
    template <typename D> using consume = Windows::UI::Input::impl_IRadialControllerConfigurationStatics<D>;
};

template <> struct traits<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>
{
    using abi = ABI::Windows::UI::Input::IRadialControllerControlAcquiredEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_IRadialControllerControlAcquiredEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::IRadialControllerMenu>
{
    using abi = ABI::Windows::UI::Input::IRadialControllerMenu;
    template <typename D> using consume = Windows::UI::Input::impl_IRadialControllerMenu<D>;
};

template <> struct traits<Windows::UI::Input::IRadialControllerMenuItem>
{
    using abi = ABI::Windows::UI::Input::IRadialControllerMenuItem;
    template <typename D> using consume = Windows::UI::Input::impl_IRadialControllerMenuItem<D>;
};

template <> struct traits<Windows::UI::Input::IRadialControllerMenuItemStatics>
{
    using abi = ABI::Windows::UI::Input::IRadialControllerMenuItemStatics;
    template <typename D> using consume = Windows::UI::Input::impl_IRadialControllerMenuItemStatics<D>;
};

template <> struct traits<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>
{
    using abi = ABI::Windows::UI::Input::IRadialControllerRotationChangedEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_IRadialControllerRotationChangedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::IRadialControllerScreenContact>
{
    using abi = ABI::Windows::UI::Input::IRadialControllerScreenContact;
    template <typename D> using consume = Windows::UI::Input::impl_IRadialControllerScreenContact<D>;
};

template <> struct traits<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>
{
    using abi = ABI::Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_IRadialControllerScreenContactContinuedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>
{
    using abi = ABI::Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_IRadialControllerScreenContactStartedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::IRadialControllerStatics>
{
    using abi = ABI::Windows::UI::Input::IRadialControllerStatics;
    template <typename D> using consume = Windows::UI::Input::impl_IRadialControllerStatics<D>;
};

template <> struct traits<Windows::UI::Input::IRightTappedEventArgs>
{
    using abi = ABI::Windows::UI::Input::IRightTappedEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_IRightTappedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::ITappedEventArgs>
{
    using abi = ABI::Windows::UI::Input::ITappedEventArgs;
    template <typename D> using consume = Windows::UI::Input::impl_ITappedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::CrossSlidingEventArgs>
{
    using abi = ABI::Windows::UI::Input::CrossSlidingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.CrossSlidingEventArgs"; }
};

template <> struct traits<Windows::UI::Input::DraggingEventArgs>
{
    using abi = ABI::Windows::UI::Input::DraggingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.DraggingEventArgs"; }
};

template <> struct traits<Windows::UI::Input::EdgeGesture>
{
    using abi = ABI::Windows::UI::Input::EdgeGesture;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.EdgeGesture"; }
};

template <> struct traits<Windows::UI::Input::EdgeGestureEventArgs>
{
    using abi = ABI::Windows::UI::Input::EdgeGestureEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.EdgeGestureEventArgs"; }
};

template <> struct traits<Windows::UI::Input::GestureRecognizer>
{
    using abi = ABI::Windows::UI::Input::GestureRecognizer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.GestureRecognizer"; }
};

template <> struct traits<Windows::UI::Input::HoldingEventArgs>
{
    using abi = ABI::Windows::UI::Input::HoldingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.HoldingEventArgs"; }
};

template <> struct traits<Windows::UI::Input::KeyboardDeliveryInterceptor>
{
    using abi = ABI::Windows::UI::Input::KeyboardDeliveryInterceptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.KeyboardDeliveryInterceptor"; }
};

template <> struct traits<Windows::UI::Input::ManipulationCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Input::ManipulationCompletedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.ManipulationCompletedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::ManipulationInertiaStartingEventArgs>
{
    using abi = ABI::Windows::UI::Input::ManipulationInertiaStartingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.ManipulationInertiaStartingEventArgs"; }
};

template <> struct traits<Windows::UI::Input::ManipulationStartedEventArgs>
{
    using abi = ABI::Windows::UI::Input::ManipulationStartedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.ManipulationStartedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::ManipulationUpdatedEventArgs>
{
    using abi = ABI::Windows::UI::Input::ManipulationUpdatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.ManipulationUpdatedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::MouseWheelParameters>
{
    using abi = ABI::Windows::UI::Input::MouseWheelParameters;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.MouseWheelParameters"; }
};

template <> struct traits<Windows::UI::Input::PointerPoint>
{
    using abi = ABI::Windows::UI::Input::PointerPoint;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.PointerPoint"; }
};

template <> struct traits<Windows::UI::Input::PointerPointProperties>
{
    using abi = ABI::Windows::UI::Input::PointerPointProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.PointerPointProperties"; }
};

template <> struct traits<Windows::UI::Input::PointerVisualizationSettings>
{
    using abi = ABI::Windows::UI::Input::PointerVisualizationSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.PointerVisualizationSettings"; }
};

template <> struct traits<Windows::UI::Input::RadialController>
{
    using abi = ABI::Windows::UI::Input::RadialController;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.RadialController"; }
};

template <> struct traits<Windows::UI::Input::RadialControllerButtonClickedEventArgs>
{
    using abi = ABI::Windows::UI::Input::RadialControllerButtonClickedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.RadialControllerButtonClickedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::RadialControllerConfiguration>
{
    using abi = ABI::Windows::UI::Input::RadialControllerConfiguration;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.RadialControllerConfiguration"; }
};

template <> struct traits<Windows::UI::Input::RadialControllerControlAcquiredEventArgs>
{
    using abi = ABI::Windows::UI::Input::RadialControllerControlAcquiredEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.RadialControllerControlAcquiredEventArgs"; }
};

template <> struct traits<Windows::UI::Input::RadialControllerMenu>
{
    using abi = ABI::Windows::UI::Input::RadialControllerMenu;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.RadialControllerMenu"; }
};

template <> struct traits<Windows::UI::Input::RadialControllerMenuItem>
{
    using abi = ABI::Windows::UI::Input::RadialControllerMenuItem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.RadialControllerMenuItem"; }
};

template <> struct traits<Windows::UI::Input::RadialControllerRotationChangedEventArgs>
{
    using abi = ABI::Windows::UI::Input::RadialControllerRotationChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.RadialControllerRotationChangedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::RadialControllerScreenContact>
{
    using abi = ABI::Windows::UI::Input::RadialControllerScreenContact;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.RadialControllerScreenContact"; }
};

template <> struct traits<Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs>
{
    using abi = ABI::Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::RadialControllerScreenContactStartedEventArgs>
{
    using abi = ABI::Windows::UI::Input::RadialControllerScreenContactStartedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.RadialControllerScreenContactStartedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::RightTappedEventArgs>
{
    using abi = ABI::Windows::UI::Input::RightTappedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.RightTappedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::TappedEventArgs>
{
    using abi = ABI::Windows::UI::Input::TappedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.TappedEventArgs"; }
};

}

}
