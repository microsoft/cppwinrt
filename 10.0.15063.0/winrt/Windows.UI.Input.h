// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Haptics.2.h"
#include "winrt/impl/Windows.Devices.Input.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.UI.Input.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Input_ICrossSlidingEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::ICrossSlidingEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_ICrossSlidingEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::ICrossSlidingEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::CrossSlidingState consume_Windows_UI_Input_ICrossSlidingEventArgs<D>::CrossSlidingState() const
{
    Windows::UI::Input::CrossSlidingState value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::ICrossSlidingEventArgs)->get_CrossSlidingState(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Input_IDraggingEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IDraggingEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_IDraggingEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IDraggingEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::DraggingState consume_Windows_UI_Input_IDraggingEventArgs<D>::DraggingState() const
{
    Windows::UI::Input::DraggingState value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IDraggingEventArgs)->get_DraggingState(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Input_IEdgeGesture<D>::Starting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IEdgeGesture)->add_Starting(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::IEdgeGesture> consume_Windows_UI_Input_IEdgeGesture<D>::Starting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IEdgeGesture>(this, &abi_t<Windows::UI::Input::IEdgeGesture>::remove_Starting, Starting(handler));
}

template <typename D> void consume_Windows_UI_Input_IEdgeGesture<D>::Starting(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IEdgeGesture)->remove_Starting(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_IEdgeGesture<D>::Completed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IEdgeGesture)->add_Completed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::IEdgeGesture> consume_Windows_UI_Input_IEdgeGesture<D>::Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IEdgeGesture>(this, &abi_t<Windows::UI::Input::IEdgeGesture>::remove_Completed, Completed(handler));
}

template <typename D> void consume_Windows_UI_Input_IEdgeGesture<D>::Completed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IEdgeGesture)->remove_Completed(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_IEdgeGesture<D>::Canceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IEdgeGesture)->add_Canceled(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::IEdgeGesture> consume_Windows_UI_Input_IEdgeGesture<D>::Canceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IEdgeGesture>(this, &abi_t<Windows::UI::Input::IEdgeGesture>::remove_Canceled, Canceled(handler));
}

template <typename D> void consume_Windows_UI_Input_IEdgeGesture<D>::Canceled(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IEdgeGesture)->remove_Canceled(get_abi(token)));
}

template <typename D> Windows::UI::Input::EdgeGestureKind consume_Windows_UI_Input_IEdgeGestureEventArgs<D>::Kind() const
{
    Windows::UI::Input::EdgeGestureKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IEdgeGestureEventArgs)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::EdgeGesture consume_Windows_UI_Input_IEdgeGestureStatics<D>::GetForCurrentView() const
{
    Windows::UI::Input::EdgeGesture current{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IEdgeGestureStatics)->GetForCurrentView(put_abi(current)));
    return current;
}

template <typename D> Windows::UI::Input::GestureSettings consume_Windows_UI_Input_IGestureRecognizer<D>::GestureSettings() const
{
    Windows::UI::Input::GestureSettings value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_GestureSettings(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::GestureSettings(Windows::UI::Input::GestureSettings const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_GestureSettings(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Input_IGestureRecognizer<D>::IsInertial() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_IsInertial(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IGestureRecognizer<D>::IsActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_IsActive(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IGestureRecognizer<D>::ShowGestureFeedback() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_ShowGestureFeedback(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::ShowGestureFeedback(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_ShowGestureFeedback(value));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_IGestureRecognizer<D>::PivotCenter() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_PivotCenter(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::PivotCenter(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_PivotCenter(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Input_IGestureRecognizer<D>::PivotRadius() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_PivotRadius(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::PivotRadius(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_PivotRadius(value));
}

template <typename D> float consume_Windows_UI_Input_IGestureRecognizer<D>::InertiaTranslationDeceleration() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_InertiaTranslationDeceleration(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::InertiaTranslationDeceleration(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_InertiaTranslationDeceleration(value));
}

template <typename D> float consume_Windows_UI_Input_IGestureRecognizer<D>::InertiaRotationDeceleration() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_InertiaRotationDeceleration(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::InertiaRotationDeceleration(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_InertiaRotationDeceleration(value));
}

template <typename D> float consume_Windows_UI_Input_IGestureRecognizer<D>::InertiaExpansionDeceleration() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_InertiaExpansionDeceleration(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::InertiaExpansionDeceleration(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_InertiaExpansionDeceleration(value));
}

template <typename D> float consume_Windows_UI_Input_IGestureRecognizer<D>::InertiaTranslationDisplacement() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_InertiaTranslationDisplacement(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::InertiaTranslationDisplacement(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_InertiaTranslationDisplacement(value));
}

template <typename D> float consume_Windows_UI_Input_IGestureRecognizer<D>::InertiaRotationAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_InertiaRotationAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::InertiaRotationAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_InertiaRotationAngle(value));
}

template <typename D> float consume_Windows_UI_Input_IGestureRecognizer<D>::InertiaExpansion() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_InertiaExpansion(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::InertiaExpansion(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_InertiaExpansion(value));
}

template <typename D> bool consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationExact() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_ManipulationExact(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationExact(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_ManipulationExact(value));
}

template <typename D> Windows::UI::Input::CrossSlideThresholds consume_Windows_UI_Input_IGestureRecognizer<D>::CrossSlideThresholds() const
{
    Windows::UI::Input::CrossSlideThresholds value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_CrossSlideThresholds(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::CrossSlideThresholds(Windows::UI::Input::CrossSlideThresholds const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_CrossSlideThresholds(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Input_IGestureRecognizer<D>::CrossSlideHorizontally() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_CrossSlideHorizontally(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::CrossSlideHorizontally(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_CrossSlideHorizontally(value));
}

template <typename D> bool consume_Windows_UI_Input_IGestureRecognizer<D>::CrossSlideExact() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_CrossSlideExact(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::CrossSlideExact(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_CrossSlideExact(value));
}

template <typename D> bool consume_Windows_UI_Input_IGestureRecognizer<D>::AutoProcessInertia() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_AutoProcessInertia(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::AutoProcessInertia(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->put_AutoProcessInertia(value));
}

template <typename D> Windows::UI::Input::MouseWheelParameters consume_Windows_UI_Input_IGestureRecognizer<D>::MouseWheelParameters() const
{
    Windows::UI::Input::MouseWheelParameters value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->get_MouseWheelParameters(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IGestureRecognizer<D>::CanBeDoubleTap(Windows::UI::Input::PointerPoint const& value) const
{
    bool canBeDoubleTap{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->CanBeDoubleTap(get_abi(value), &canBeDoubleTap));
    return canBeDoubleTap;
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::ProcessDownEvent(Windows::UI::Input::PointerPoint const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->ProcessDownEvent(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::ProcessMoveEvents(param::vector<Windows::UI::Input::PointerPoint> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->ProcessMoveEvents(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::ProcessUpEvent(Windows::UI::Input::PointerPoint const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->ProcessUpEvent(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::ProcessMouseWheelEvent(Windows::UI::Input::PointerPoint const& value, bool isShiftKeyDown, bool isControlKeyDown) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->ProcessMouseWheelEvent(get_abi(value), isShiftKeyDown, isControlKeyDown));
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::ProcessInertia() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->ProcessInertia());
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::CompleteGesture() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->CompleteGesture());
}

template <typename D> event_token consume_Windows_UI_Input_IGestureRecognizer<D>::Tapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->add_Tapped(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Input::IGestureRecognizer> consume_Windows_UI_Input_IGestureRecognizer<D>::Tapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IGestureRecognizer>(this, &abi_t<Windows::UI::Input::IGestureRecognizer>::remove_Tapped, Tapped(handler));
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::Tapped(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->remove_Tapped(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_IGestureRecognizer<D>::RightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->add_RightTapped(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Input::IGestureRecognizer> consume_Windows_UI_Input_IGestureRecognizer<D>::RightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IGestureRecognizer>(this, &abi_t<Windows::UI::Input::IGestureRecognizer>::remove_RightTapped, RightTapped(handler));
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::RightTapped(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->remove_RightTapped(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_IGestureRecognizer<D>::Holding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->add_Holding(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Input::IGestureRecognizer> consume_Windows_UI_Input_IGestureRecognizer<D>::Holding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IGestureRecognizer>(this, &abi_t<Windows::UI::Input::IGestureRecognizer>::remove_Holding, Holding(handler));
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::Holding(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->remove_Holding(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_IGestureRecognizer<D>::Dragging(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->add_Dragging(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Input::IGestureRecognizer> consume_Windows_UI_Input_IGestureRecognizer<D>::Dragging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IGestureRecognizer>(this, &abi_t<Windows::UI::Input::IGestureRecognizer>::remove_Dragging, Dragging(handler));
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::Dragging(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->remove_Dragging(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->add_ManipulationStarted(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Input::IGestureRecognizer> consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IGestureRecognizer>(this, &abi_t<Windows::UI::Input::IGestureRecognizer>::remove_ManipulationStarted, ManipulationStarted(handler));
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationStarted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->remove_ManipulationStarted(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->add_ManipulationUpdated(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Input::IGestureRecognizer> consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IGestureRecognizer>(this, &abi_t<Windows::UI::Input::IGestureRecognizer>::remove_ManipulationUpdated, ManipulationUpdated(handler));
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationUpdated(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->remove_ManipulationUpdated(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationInertiaStarting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->add_ManipulationInertiaStarting(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Input::IGestureRecognizer> consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationInertiaStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IGestureRecognizer>(this, &abi_t<Windows::UI::Input::IGestureRecognizer>::remove_ManipulationInertiaStarting, ManipulationInertiaStarting(handler));
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationInertiaStarting(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->remove_ManipulationInertiaStarting(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->add_ManipulationCompleted(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Input::IGestureRecognizer> consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IGestureRecognizer>(this, &abi_t<Windows::UI::Input::IGestureRecognizer>::remove_ManipulationCompleted, ManipulationCompleted(handler));
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::ManipulationCompleted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->remove_ManipulationCompleted(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_IGestureRecognizer<D>::CrossSliding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs> const& handler) const
{
    event_token pCookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->add_CrossSliding(get_abi(handler), put_abi(pCookie)));
    return pCookie;
}

template <typename D> event_revoker<Windows::UI::Input::IGestureRecognizer> consume_Windows_UI_Input_IGestureRecognizer<D>::CrossSliding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IGestureRecognizer>(this, &abi_t<Windows::UI::Input::IGestureRecognizer>::remove_CrossSliding, CrossSliding(handler));
}

template <typename D> void consume_Windows_UI_Input_IGestureRecognizer<D>::CrossSliding(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IGestureRecognizer)->remove_CrossSliding(get_abi(cookie)));
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Input_IHoldingEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IHoldingEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_IHoldingEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IHoldingEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::HoldingState consume_Windows_UI_Input_IHoldingEventArgs<D>::HoldingState() const
{
    Windows::UI::Input::HoldingState value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IHoldingEventArgs)->get_HoldingState(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IKeyboardDeliveryInterceptor<D>::IsInterceptionEnabledWhenInForeground() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IKeyboardDeliveryInterceptor)->get_IsInterceptionEnabledWhenInForeground(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IKeyboardDeliveryInterceptor<D>::IsInterceptionEnabledWhenInForeground(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IKeyboardDeliveryInterceptor)->put_IsInterceptionEnabledWhenInForeground(value));
}

template <typename D> event_token consume_Windows_UI_Input_IKeyboardDeliveryInterceptor<D>::KeyDown(Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IKeyboardDeliveryInterceptor)->add_KeyDown(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::IKeyboardDeliveryInterceptor> consume_Windows_UI_Input_IKeyboardDeliveryInterceptor<D>::KeyDown(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IKeyboardDeliveryInterceptor>(this, &abi_t<Windows::UI::Input::IKeyboardDeliveryInterceptor>::remove_KeyDown, KeyDown(handler));
}

template <typename D> void consume_Windows_UI_Input_IKeyboardDeliveryInterceptor<D>::KeyDown(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IKeyboardDeliveryInterceptor)->remove_KeyDown(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_IKeyboardDeliveryInterceptor<D>::KeyUp(Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IKeyboardDeliveryInterceptor)->add_KeyUp(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::IKeyboardDeliveryInterceptor> consume_Windows_UI_Input_IKeyboardDeliveryInterceptor<D>::KeyUp(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IKeyboardDeliveryInterceptor>(this, &abi_t<Windows::UI::Input::IKeyboardDeliveryInterceptor>::remove_KeyUp, KeyUp(handler));
}

template <typename D> void consume_Windows_UI_Input_IKeyboardDeliveryInterceptor<D>::KeyUp(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IKeyboardDeliveryInterceptor)->remove_KeyUp(get_abi(token)));
}

template <typename D> Windows::UI::Input::KeyboardDeliveryInterceptor consume_Windows_UI_Input_IKeyboardDeliveryInterceptorStatics<D>::GetForCurrentView() const
{
    Windows::UI::Input::KeyboardDeliveryInterceptor keyboardDeliverySettings{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IKeyboardDeliveryInterceptorStatics)->GetForCurrentView(put_abi(keyboardDeliverySettings)));
    return keyboardDeliverySettings;
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Input_IManipulationCompletedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationCompletedEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_IManipulationCompletedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationCompletedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta consume_Windows_UI_Input_IManipulationCompletedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationCompletedEventArgs)->get_Cumulative(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationVelocities consume_Windows_UI_Input_IManipulationCompletedEventArgs<D>::Velocities() const
{
    Windows::UI::Input::ManipulationVelocities value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationCompletedEventArgs)->get_Velocities(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Input_IManipulationInertiaStartingEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationInertiaStartingEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_IManipulationInertiaStartingEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationInertiaStartingEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta consume_Windows_UI_Input_IManipulationInertiaStartingEventArgs<D>::Delta() const
{
    Windows::UI::Input::ManipulationDelta value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationInertiaStartingEventArgs)->get_Delta(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta consume_Windows_UI_Input_IManipulationInertiaStartingEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationInertiaStartingEventArgs)->get_Cumulative(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationVelocities consume_Windows_UI_Input_IManipulationInertiaStartingEventArgs<D>::Velocities() const
{
    Windows::UI::Input::ManipulationVelocities value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationInertiaStartingEventArgs)->get_Velocities(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Input_IManipulationStartedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationStartedEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_IManipulationStartedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationStartedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta consume_Windows_UI_Input_IManipulationStartedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationStartedEventArgs)->get_Cumulative(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Input_IManipulationUpdatedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationUpdatedEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_IManipulationUpdatedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationUpdatedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta consume_Windows_UI_Input_IManipulationUpdatedEventArgs<D>::Delta() const
{
    Windows::UI::Input::ManipulationDelta value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationUpdatedEventArgs)->get_Delta(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta consume_Windows_UI_Input_IManipulationUpdatedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationUpdatedEventArgs)->get_Cumulative(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationVelocities consume_Windows_UI_Input_IManipulationUpdatedEventArgs<D>::Velocities() const
{
    Windows::UI::Input::ManipulationVelocities value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IManipulationUpdatedEventArgs)->get_Velocities(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_IMouseWheelParameters<D>::CharTranslation() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IMouseWheelParameters)->get_CharTranslation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IMouseWheelParameters<D>::CharTranslation(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IMouseWheelParameters)->put_CharTranslation(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Input_IMouseWheelParameters<D>::DeltaScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IMouseWheelParameters)->get_DeltaScale(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IMouseWheelParameters<D>::DeltaScale(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IMouseWheelParameters)->put_DeltaScale(value));
}

template <typename D> float consume_Windows_UI_Input_IMouseWheelParameters<D>::DeltaRotationAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IMouseWheelParameters)->get_DeltaRotationAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IMouseWheelParameters<D>::DeltaRotationAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IMouseWheelParameters)->put_DeltaRotationAngle(value));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_IMouseWheelParameters<D>::PageTranslation() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IMouseWheelParameters)->get_PageTranslation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IMouseWheelParameters<D>::PageTranslation(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IMouseWheelParameters)->put_PageTranslation(get_abi(value)));
}

template <typename D> Windows::Devices::Input::PointerDevice consume_Windows_UI_Input_IPointerPoint<D>::PointerDevice() const
{
    Windows::Devices::Input::PointerDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPoint)->get_PointerDevice(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_IPointerPoint<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPoint)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_IPointerPoint<D>::RawPosition() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPoint)->get_RawPosition(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Input_IPointerPoint<D>::PointerId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPoint)->get_PointerId(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Input_IPointerPoint<D>::FrameId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPoint)->get_FrameId(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_UI_Input_IPointerPoint<D>::Timestamp() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPoint)->get_Timestamp(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPoint<D>::IsInContact() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPoint)->get_IsInContact(&value));
    return value;
}

template <typename D> Windows::UI::Input::PointerPointProperties consume_Windows_UI_Input_IPointerPoint<D>::Properties() const
{
    Windows::UI::Input::PointerPointProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPoint)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Input_IPointerPointProperties<D>::Pressure() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_Pressure(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::IsInverted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_IsInverted(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::IsEraser() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_IsEraser(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Input_IPointerPointProperties<D>::Orientation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_Orientation(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Input_IPointerPointProperties<D>::XTilt() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_XTilt(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Input_IPointerPointProperties<D>::YTilt() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_YTilt(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Input_IPointerPointProperties<D>::Twist() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_Twist(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_IPointerPointProperties<D>::ContactRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_ContactRect(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_IPointerPointProperties<D>::ContactRectRaw() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_ContactRectRaw(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::TouchConfidence() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_TouchConfidence(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::IsLeftButtonPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_IsLeftButtonPressed(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::IsRightButtonPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_IsRightButtonPressed(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::IsMiddleButtonPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_IsMiddleButtonPressed(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Input_IPointerPointProperties<D>::MouseWheelDelta() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_MouseWheelDelta(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::IsHorizontalMouseWheel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_IsHorizontalMouseWheel(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::IsPrimary() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_IsPrimary(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::IsInRange() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_IsInRange(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::IsCanceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_IsCanceled(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::IsBarrelButtonPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_IsBarrelButtonPressed(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::IsXButton1Pressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_IsXButton1Pressed(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::IsXButton2Pressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_IsXButton2Pressed(&value));
    return value;
}

template <typename D> Windows::UI::Input::PointerUpdateKind consume_Windows_UI_Input_IPointerPointProperties<D>::PointerUpdateKind() const
{
    Windows::UI::Input::PointerUpdateKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->get_PointerUpdateKind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointProperties<D>::HasUsage(uint32_t usagePage, uint32_t usageId) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->HasUsage(usagePage, usageId, &value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Input_IPointerPointProperties<D>::GetUsageValue(uint32_t usagePage, uint32_t usageId) const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties)->GetUsageValue(usagePage, usageId, &value));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_UI_Input_IPointerPointProperties2<D>::ZDistance() const
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointProperties2)->get_ZDistance(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::PointerPoint consume_Windows_UI_Input_IPointerPointStatics<D>::GetCurrentPoint(uint32_t pointerId) const
{
    Windows::UI::Input::PointerPoint pointerPoint{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointStatics)->GetCurrentPoint(pointerId, put_abi(pointerPoint)));
    return pointerPoint;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> consume_Windows_UI_Input_IPointerPointStatics<D>::GetIntermediatePoints(uint32_t pointerId) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> pointerPoints{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointStatics)->GetIntermediatePoints(pointerId, put_abi(pointerPoints)));
    return pointerPoints;
}

template <typename D> Windows::UI::Input::PointerPoint consume_Windows_UI_Input_IPointerPointStatics<D>::GetCurrentPoint(uint32_t pointerId, Windows::UI::Input::IPointerPointTransform const& transform) const
{
    Windows::UI::Input::PointerPoint pointerPoint{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointStatics)->GetCurrentPointTransformed(pointerId, get_abi(transform), put_abi(pointerPoint)));
    return pointerPoint;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> consume_Windows_UI_Input_IPointerPointStatics<D>::GetIntermediatePoints(uint32_t pointerId, Windows::UI::Input::IPointerPointTransform const& transform) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> pointerPoints{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointStatics)->GetIntermediatePointsTransformed(pointerId, get_abi(transform), put_abi(pointerPoints)));
    return pointerPoints;
}

template <typename D> Windows::UI::Input::IPointerPointTransform consume_Windows_UI_Input_IPointerPointTransform<D>::Inverse() const
{
    Windows::UI::Input::IPointerPointTransform value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointTransform)->get_Inverse(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IPointerPointTransform<D>::TryTransform(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointTransform)->TryTransform(get_abi(inPoint), put_abi(outPoint), &returnValue));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_IPointerPointTransform<D>::TransformBounds(Windows::Foundation::Rect const& rect) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerPointTransform)->TransformBounds(get_abi(rect), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Input_IPointerVisualizationSettings<D>::IsContactFeedbackEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerVisualizationSettings)->put_IsContactFeedbackEnabled(value));
}

template <typename D> bool consume_Windows_UI_Input_IPointerVisualizationSettings<D>::IsContactFeedbackEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerVisualizationSettings)->get_IsContactFeedbackEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IPointerVisualizationSettings<D>::IsBarrelButtonFeedbackEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerVisualizationSettings)->put_IsBarrelButtonFeedbackEnabled(value));
}

template <typename D> bool consume_Windows_UI_Input_IPointerVisualizationSettings<D>::IsBarrelButtonFeedbackEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerVisualizationSettings)->get_IsBarrelButtonFeedbackEnabled(&value));
    return value;
}

template <typename D> Windows::UI::Input::PointerVisualizationSettings consume_Windows_UI_Input_IPointerVisualizationSettingsStatics<D>::GetForCurrentView() const
{
    Windows::UI::Input::PointerVisualizationSettings visualizationSettings{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IPointerVisualizationSettingsStatics)->GetForCurrentView(put_abi(visualizationSettings)));
    return visualizationSettings;
}

template <typename D> Windows::UI::Input::RadialControllerMenu consume_Windows_UI_Input_IRadialController<D>::Menu() const
{
    Windows::UI::Input::RadialControllerMenu value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->get_Menu(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Input_IRadialController<D>::RotationResolutionInDegrees() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->get_RotationResolutionInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IRadialController<D>::RotationResolutionInDegrees(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->put_RotationResolutionInDegrees(value));
}

template <typename D> bool consume_Windows_UI_Input_IRadialController<D>::UseAutomaticHapticFeedback() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->get_UseAutomaticHapticFeedback(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IRadialController<D>::UseAutomaticHapticFeedback(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->put_UseAutomaticHapticFeedback(value));
}

template <typename D> event_token consume_Windows_UI_Input_IRadialController<D>::ScreenContactStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->add_ScreenContactStarted(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::IRadialController> consume_Windows_UI_Input_IRadialController<D>::ScreenContactStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IRadialController>(this, &abi_t<Windows::UI::Input::IRadialController>::remove_ScreenContactStarted, ScreenContactStarted(handler));
}

template <typename D> void consume_Windows_UI_Input_IRadialController<D>::ScreenContactStarted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->remove_ScreenContactStarted(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_IRadialController<D>::ScreenContactEnded(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->add_ScreenContactEnded(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::IRadialController> consume_Windows_UI_Input_IRadialController<D>::ScreenContactEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IRadialController>(this, &abi_t<Windows::UI::Input::IRadialController>::remove_ScreenContactEnded, ScreenContactEnded(handler));
}

template <typename D> void consume_Windows_UI_Input_IRadialController<D>::ScreenContactEnded(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->remove_ScreenContactEnded(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_IRadialController<D>::ScreenContactContinued(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->add_ScreenContactContinued(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::IRadialController> consume_Windows_UI_Input_IRadialController<D>::ScreenContactContinued(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IRadialController>(this, &abi_t<Windows::UI::Input::IRadialController>::remove_ScreenContactContinued, ScreenContactContinued(handler));
}

template <typename D> void consume_Windows_UI_Input_IRadialController<D>::ScreenContactContinued(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->remove_ScreenContactContinued(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_IRadialController<D>::ControlLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->add_ControlLost(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::IRadialController> consume_Windows_UI_Input_IRadialController<D>::ControlLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IRadialController>(this, &abi_t<Windows::UI::Input::IRadialController>::remove_ControlLost, ControlLost(handler));
}

template <typename D> void consume_Windows_UI_Input_IRadialController<D>::ControlLost(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->remove_ControlLost(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_IRadialController<D>::RotationChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->add_RotationChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::IRadialController> consume_Windows_UI_Input_IRadialController<D>::RotationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IRadialController>(this, &abi_t<Windows::UI::Input::IRadialController>::remove_RotationChanged, RotationChanged(handler));
}

template <typename D> void consume_Windows_UI_Input_IRadialController<D>::RotationChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->remove_RotationChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_IRadialController<D>::ButtonClicked(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->add_ButtonClicked(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::IRadialController> consume_Windows_UI_Input_IRadialController<D>::ButtonClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IRadialController>(this, &abi_t<Windows::UI::Input::IRadialController>::remove_ButtonClicked, ButtonClicked(handler));
}

template <typename D> void consume_Windows_UI_Input_IRadialController<D>::ButtonClicked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->remove_ButtonClicked(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_IRadialController<D>::ControlAcquired(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->add_ControlAcquired(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::IRadialController> consume_Windows_UI_Input_IRadialController<D>::ControlAcquired(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IRadialController>(this, &abi_t<Windows::UI::Input::IRadialController>::remove_ControlAcquired, ControlAcquired(handler));
}

template <typename D> void consume_Windows_UI_Input_IRadialController<D>::ControlAcquired(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController)->remove_ControlAcquired(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_IRadialController2<D>::ButtonPressed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonPressedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController2)->add_ButtonPressed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::IRadialController2> consume_Windows_UI_Input_IRadialController2<D>::ButtonPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonPressedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IRadialController2>(this, &abi_t<Windows::UI::Input::IRadialController2>::remove_ButtonPressed, ButtonPressed(handler));
}

template <typename D> void consume_Windows_UI_Input_IRadialController2<D>::ButtonPressed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController2)->remove_ButtonPressed(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_IRadialController2<D>::ButtonHolding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonHoldingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController2)->add_ButtonHolding(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::IRadialController2> consume_Windows_UI_Input_IRadialController2<D>::ButtonHolding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonHoldingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IRadialController2>(this, &abi_t<Windows::UI::Input::IRadialController2>::remove_ButtonHolding, ButtonHolding(handler));
}

template <typename D> void consume_Windows_UI_Input_IRadialController2<D>::ButtonHolding(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController2)->remove_ButtonHolding(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_IRadialController2<D>::ButtonReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonReleasedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController2)->add_ButtonReleased(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::IRadialController2> consume_Windows_UI_Input_IRadialController2<D>::ButtonReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonReleasedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IRadialController2>(this, &abi_t<Windows::UI::Input::IRadialController2>::remove_ButtonReleased, ButtonReleased(handler));
}

template <typename D> void consume_Windows_UI_Input_IRadialController2<D>::ButtonReleased(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialController2)->remove_ButtonReleased(get_abi(token)));
}

template <typename D> Windows::UI::Input::RadialControllerScreenContact consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs<D>::Contact() const
{
    Windows::UI::Input::RadialControllerScreenContact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerButtonClickedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Haptics::SimpleHapticsController consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs2<D>::SimpleHapticsController() const
{
    Windows::Devices::Haptics::SimpleHapticsController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerButtonClickedEventArgs2)->get_SimpleHapticsController(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::RadialControllerScreenContact consume_Windows_UI_Input_IRadialControllerButtonHoldingEventArgs<D>::Contact() const
{
    Windows::UI::Input::RadialControllerScreenContact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerButtonHoldingEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Haptics::SimpleHapticsController consume_Windows_UI_Input_IRadialControllerButtonHoldingEventArgs<D>::SimpleHapticsController() const
{
    Windows::Devices::Haptics::SimpleHapticsController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerButtonHoldingEventArgs)->get_SimpleHapticsController(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::RadialControllerScreenContact consume_Windows_UI_Input_IRadialControllerButtonPressedEventArgs<D>::Contact() const
{
    Windows::UI::Input::RadialControllerScreenContact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerButtonPressedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Haptics::SimpleHapticsController consume_Windows_UI_Input_IRadialControllerButtonPressedEventArgs<D>::SimpleHapticsController() const
{
    Windows::Devices::Haptics::SimpleHapticsController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerButtonPressedEventArgs)->get_SimpleHapticsController(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::RadialControllerScreenContact consume_Windows_UI_Input_IRadialControllerButtonReleasedEventArgs<D>::Contact() const
{
    Windows::UI::Input::RadialControllerScreenContact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerButtonReleasedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Haptics::SimpleHapticsController consume_Windows_UI_Input_IRadialControllerButtonReleasedEventArgs<D>::SimpleHapticsController() const
{
    Windows::Devices::Haptics::SimpleHapticsController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerButtonReleasedEventArgs)->get_SimpleHapticsController(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IRadialControllerConfiguration<D>::SetDefaultMenuItems(param::iterable<Windows::UI::Input::RadialControllerSystemMenuItemKind> const& buttons) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerConfiguration)->SetDefaultMenuItems(get_abi(buttons)));
}

template <typename D> void consume_Windows_UI_Input_IRadialControllerConfiguration<D>::ResetToDefaultMenuItems() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerConfiguration)->ResetToDefaultMenuItems());
}

template <typename D> bool consume_Windows_UI_Input_IRadialControllerConfiguration<D>::TrySelectDefaultMenuItem(Windows::UI::Input::RadialControllerSystemMenuItemKind const& type) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerConfiguration)->TrySelectDefaultMenuItem(get_abi(type), &result));
    return result;
}

template <typename D> void consume_Windows_UI_Input_IRadialControllerConfiguration2<D>::ActiveControllerWhenMenuIsSuppressed(Windows::UI::Input::RadialController const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerConfiguration2)->put_ActiveControllerWhenMenuIsSuppressed(get_abi(value)));
}

template <typename D> Windows::UI::Input::RadialController consume_Windows_UI_Input_IRadialControllerConfiguration2<D>::ActiveControllerWhenMenuIsSuppressed() const
{
    Windows::UI::Input::RadialController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerConfiguration2)->get_ActiveControllerWhenMenuIsSuppressed(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IRadialControllerConfiguration2<D>::IsMenuSuppressed(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerConfiguration2)->put_IsMenuSuppressed(value));
}

template <typename D> bool consume_Windows_UI_Input_IRadialControllerConfiguration2<D>::IsMenuSuppressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerConfiguration2)->get_IsMenuSuppressed(&value));
    return value;
}

template <typename D> Windows::UI::Input::RadialControllerConfiguration consume_Windows_UI_Input_IRadialControllerConfigurationStatics<D>::GetForCurrentView() const
{
    Windows::UI::Input::RadialControllerConfiguration configuration{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerConfigurationStatics)->GetForCurrentView(put_abi(configuration)));
    return configuration;
}

template <typename D> Windows::UI::Input::RadialControllerScreenContact consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs<D>::Contact() const
{
    Windows::UI::Input::RadialControllerScreenContact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerControlAcquiredEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs2<D>::IsButtonPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2)->get_IsButtonPressed(&value));
    return value;
}

template <typename D> Windows::Devices::Haptics::SimpleHapticsController consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs2<D>::SimpleHapticsController() const
{
    Windows::Devices::Haptics::SimpleHapticsController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2)->get_SimpleHapticsController(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Input::RadialControllerMenuItem> consume_Windows_UI_Input_IRadialControllerMenu<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::RadialControllerMenuItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenu)->get_Items(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IRadialControllerMenu<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenu)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IRadialControllerMenu<D>::IsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenu)->put_IsEnabled(value));
}

template <typename D> Windows::UI::Input::RadialControllerMenuItem consume_Windows_UI_Input_IRadialControllerMenu<D>::GetSelectedMenuItem() const
{
    Windows::UI::Input::RadialControllerMenuItem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenu)->GetSelectedMenuItem(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Input_IRadialControllerMenu<D>::SelectMenuItem(Windows::UI::Input::RadialControllerMenuItem const& menuItem) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenu)->SelectMenuItem(get_abi(menuItem)));
}

template <typename D> bool consume_Windows_UI_Input_IRadialControllerMenu<D>::TrySelectPreviouslySelectedMenuItem() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenu)->TrySelectPreviouslySelectedMenuItem(&result));
    return result;
}

template <typename D> hstring consume_Windows_UI_Input_IRadialControllerMenuItem<D>::DisplayText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenuItem)->get_DisplayText(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Input_IRadialControllerMenuItem<D>::Tag() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenuItem)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_IRadialControllerMenuItem<D>::Tag(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenuItem)->put_Tag(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Input_IRadialControllerMenuItem<D>::Invoked(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenuItem)->add_Invoked(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::IRadialControllerMenuItem> consume_Windows_UI_Input_IRadialControllerMenuItem<D>::Invoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::IRadialControllerMenuItem>(this, &abi_t<Windows::UI::Input::IRadialControllerMenuItem>::remove_Invoked, Invoked(handler));
}

template <typename D> void consume_Windows_UI_Input_IRadialControllerMenuItem<D>::Invoked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenuItem)->remove_Invoked(get_abi(token)));
}

template <typename D> Windows::UI::Input::RadialControllerMenuItem consume_Windows_UI_Input_IRadialControllerMenuItemStatics<D>::CreateFromIcon(param::hstring const& displayText, Windows::Storage::Streams::RandomAccessStreamReference const& icon) const
{
    Windows::UI::Input::RadialControllerMenuItem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenuItemStatics)->CreateFromIcon(get_abi(displayText), get_abi(icon), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Input::RadialControllerMenuItem consume_Windows_UI_Input_IRadialControllerMenuItemStatics<D>::CreateFromKnownIcon(param::hstring const& displayText, Windows::UI::Input::RadialControllerMenuKnownIcon const& value) const
{
    Windows::UI::Input::RadialControllerMenuItem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenuItemStatics)->CreateFromKnownIcon(get_abi(displayText), get_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Input::RadialControllerMenuItem consume_Windows_UI_Input_IRadialControllerMenuItemStatics2<D>::CreateFromFontGlyph(param::hstring const& displayText, param::hstring const& glyph, param::hstring const& fontFamily) const
{
    Windows::UI::Input::RadialControllerMenuItem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenuItemStatics2)->CreateFromFontGlyph(get_abi(displayText), get_abi(glyph), get_abi(fontFamily), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Input::RadialControllerMenuItem consume_Windows_UI_Input_IRadialControllerMenuItemStatics2<D>::CreateFromFontGlyph(param::hstring const& displayText, param::hstring const& glyph, param::hstring const& fontFamily, Windows::Foundation::Uri const& fontUri) const
{
    Windows::UI::Input::RadialControllerMenuItem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerMenuItemStatics2)->CreateFromFontGlyphWithUri(get_abi(displayText), get_abi(glyph), get_abi(fontFamily), get_abi(fontUri), put_abi(result)));
    return result;
}

template <typename D> double consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs<D>::RotationDeltaInDegrees() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerRotationChangedEventArgs)->get_RotationDeltaInDegrees(&value));
    return value;
}

template <typename D> Windows::UI::Input::RadialControllerScreenContact consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs<D>::Contact() const
{
    Windows::UI::Input::RadialControllerScreenContact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerRotationChangedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs2<D>::IsButtonPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerRotationChangedEventArgs2)->get_IsButtonPressed(&value));
    return value;
}

template <typename D> Windows::Devices::Haptics::SimpleHapticsController consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs2<D>::SimpleHapticsController() const
{
    Windows::Devices::Haptics::SimpleHapticsController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerRotationChangedEventArgs2)->get_SimpleHapticsController(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_IRadialControllerScreenContact<D>::Bounds() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerScreenContact)->get_Bounds(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_IRadialControllerScreenContact<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerScreenContact)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::RadialControllerScreenContact consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs<D>::Contact() const
{
    Windows::UI::Input::RadialControllerScreenContact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs2<D>::IsButtonPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2)->get_IsButtonPressed(&value));
    return value;
}

template <typename D> Windows::Devices::Haptics::SimpleHapticsController consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs2<D>::SimpleHapticsController() const
{
    Windows::Devices::Haptics::SimpleHapticsController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2)->get_SimpleHapticsController(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IRadialControllerScreenContactEndedEventArgs<D>::IsButtonPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs)->get_IsButtonPressed(&value));
    return value;
}

template <typename D> Windows::Devices::Haptics::SimpleHapticsController consume_Windows_UI_Input_IRadialControllerScreenContactEndedEventArgs<D>::SimpleHapticsController() const
{
    Windows::Devices::Haptics::SimpleHapticsController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs)->get_SimpleHapticsController(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::RadialControllerScreenContact consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs<D>::Contact() const
{
    Windows::UI::Input::RadialControllerScreenContact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs2<D>::IsButtonPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2)->get_IsButtonPressed(&value));
    return value;
}

template <typename D> Windows::Devices::Haptics::SimpleHapticsController consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs2<D>::SimpleHapticsController() const
{
    Windows::Devices::Haptics::SimpleHapticsController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2)->get_SimpleHapticsController(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_IRadialControllerStatics<D>::IsSupported() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerStatics)->IsSupported(&result));
    return result;
}

template <typename D> Windows::UI::Input::RadialController consume_Windows_UI_Input_IRadialControllerStatics<D>::CreateForCurrentView() const
{
    Windows::UI::Input::RadialController result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRadialControllerStatics)->CreateForCurrentView(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Input_IRightTappedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRightTappedEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_IRightTappedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::IRightTappedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Input_ITappedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::ITappedEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_ITappedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::ITappedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Input_ITappedEventArgs<D>::TapCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::ITappedEventArgs)->get_TapCount(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::Input::ICrossSlidingEventArgs> : produce_base<D, Windows::UI::Input::ICrossSlidingEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CrossSlidingState(abi_t<Windows::UI::Input::CrossSlidingState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CrossSlidingState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IDraggingEventArgs> : produce_base<D, Windows::UI::Input::IDraggingEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DraggingState(abi_t<Windows::UI::Input::DraggingState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DraggingState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IEdgeGesture> : produce_base<D, Windows::UI::Input::IEdgeGesture>
{
    HRESULT __stdcall add_Starting(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Starting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Starting(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Starting(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Completed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Canceled(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Canceled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Canceled(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Canceled(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IEdgeGestureEventArgs> : produce_base<D, Windows::UI::Input::IEdgeGestureEventArgs>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::UI::Input::EdgeGestureKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IEdgeGestureStatics> : produce_base<D, Windows::UI::Input::IEdgeGestureStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** current) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *current = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *current = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IGestureRecognizer> : produce_base<D, Windows::UI::Input::IGestureRecognizer>
{
    HRESULT __stdcall get_GestureSettings(abi_t<Windows::UI::Input::GestureSettings>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GestureSettings());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GestureSettings(abi_t<Windows::UI::Input::GestureSettings> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GestureSettings(*reinterpret_cast<Windows::UI::Input::GestureSettings const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInertial(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInertial());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsActive(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowGestureFeedback(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShowGestureFeedback());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShowGestureFeedback(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowGestureFeedback(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PivotCenter(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PivotCenter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PivotCenter(abi_t<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PivotCenter(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PivotRadius(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PivotRadius());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PivotRadius(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PivotRadius(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InertiaTranslationDeceleration(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InertiaTranslationDeceleration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InertiaTranslationDeceleration(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InertiaTranslationDeceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InertiaRotationDeceleration(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InertiaRotationDeceleration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InertiaRotationDeceleration(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InertiaRotationDeceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InertiaExpansionDeceleration(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InertiaExpansionDeceleration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InertiaExpansionDeceleration(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InertiaExpansionDeceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InertiaTranslationDisplacement(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InertiaTranslationDisplacement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InertiaTranslationDisplacement(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InertiaTranslationDisplacement(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InertiaRotationAngle(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InertiaRotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InertiaRotationAngle(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InertiaRotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InertiaExpansion(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InertiaExpansion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InertiaExpansion(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InertiaExpansion(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationExact(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ManipulationExact());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ManipulationExact(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationExact(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CrossSlideThresholds(abi_t<Windows::UI::Input::CrossSlideThresholds>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CrossSlideThresholds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CrossSlideThresholds(abi_t<Windows::UI::Input::CrossSlideThresholds> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CrossSlideThresholds(*reinterpret_cast<Windows::UI::Input::CrossSlideThresholds const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CrossSlideHorizontally(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CrossSlideHorizontally());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CrossSlideHorizontally(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CrossSlideHorizontally(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CrossSlideExact(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CrossSlideExact());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CrossSlideExact(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CrossSlideExact(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoProcessInertia(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoProcessInertia());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoProcessInertia(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoProcessInertia(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MouseWheelParameters(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MouseWheelParameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CanBeDoubleTap(::IUnknown* value, bool* canBeDoubleTap) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canBeDoubleTap = detach_abi(this->shim().CanBeDoubleTap(*reinterpret_cast<Windows::UI::Input::PointerPoint const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ProcessDownEvent(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessDownEvent(*reinterpret_cast<Windows::UI::Input::PointerPoint const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ProcessMoveEvents(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessMoveEvents(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ProcessUpEvent(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessUpEvent(*reinterpret_cast<Windows::UI::Input::PointerPoint const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ProcessMouseWheelEvent(::IUnknown* value, bool isShiftKeyDown, bool isControlKeyDown) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessMouseWheelEvent(*reinterpret_cast<Windows::UI::Input::PointerPoint const*>(&value), isShiftKeyDown, isControlKeyDown);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ProcessInertia() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessInertia();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CompleteGesture() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompleteGesture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Tapped(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().Tapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Tapped(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tapped(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RightTapped(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().RightTapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RightTapped(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightTapped(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Holding(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().Holding(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Holding(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Holding(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Dragging(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().Dragging(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Dragging(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Dragging(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationStarted(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().ManipulationStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationStarted(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationStarted(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationUpdated(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().ManipulationUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationUpdated(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationUpdated(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationInertiaStarting(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().ManipulationInertiaStarting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationInertiaStarting(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationInertiaStarting(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationCompleted(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().ManipulationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationCompleted(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationCompleted(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CrossSliding(::IUnknown* handler, abi_t<event_token>* pCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pCookie = detach_abi(this->shim().CrossSliding(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CrossSliding(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CrossSliding(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IHoldingEventArgs> : produce_base<D, Windows::UI::Input::IHoldingEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HoldingState(abi_t<Windows::UI::Input::HoldingState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HoldingState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IKeyboardDeliveryInterceptor> : produce_base<D, Windows::UI::Input::IKeyboardDeliveryInterceptor>
{
    HRESULT __stdcall get_IsInterceptionEnabledWhenInForeground(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInterceptionEnabledWhenInForeground());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInterceptionEnabledWhenInForeground(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInterceptionEnabledWhenInForeground(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyDown(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().KeyDown(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyDown(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyDown(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyUp(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().KeyUp(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyUp(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyUp(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IKeyboardDeliveryInterceptorStatics> : produce_base<D, Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** keyboardDeliverySettings) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *keyboardDeliverySettings = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *keyboardDeliverySettings = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IManipulationCompletedEventArgs> : produce_base<D, Windows::UI::Input::IManipulationCompletedEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(abi_t<Windows::UI::Input::ManipulationDelta>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Velocities(abi_t<Windows::UI::Input::ManipulationVelocities>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Velocities());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IManipulationInertiaStartingEventArgs> : produce_base<D, Windows::UI::Input::IManipulationInertiaStartingEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delta(abi_t<Windows::UI::Input::ManipulationDelta>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Delta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(abi_t<Windows::UI::Input::ManipulationDelta>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Velocities(abi_t<Windows::UI::Input::ManipulationVelocities>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Velocities());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IManipulationStartedEventArgs> : produce_base<D, Windows::UI::Input::IManipulationStartedEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(abi_t<Windows::UI::Input::ManipulationDelta>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IManipulationUpdatedEventArgs> : produce_base<D, Windows::UI::Input::IManipulationUpdatedEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delta(abi_t<Windows::UI::Input::ManipulationDelta>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Delta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(abi_t<Windows::UI::Input::ManipulationDelta>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Velocities(abi_t<Windows::UI::Input::ManipulationVelocities>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Velocities());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IMouseWheelParameters> : produce_base<D, Windows::UI::Input::IMouseWheelParameters>
{
    HRESULT __stdcall get_CharTranslation(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharTranslation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CharTranslation(abi_t<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharTranslation(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeltaScale(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeltaScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DeltaScale(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeltaScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeltaRotationAngle(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeltaRotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DeltaRotationAngle(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeltaRotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageTranslation(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PageTranslation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PageTranslation(abi_t<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageTranslation(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IPointerPoint> : produce_base<D, Windows::UI::Input::IPointerPoint>
{
    HRESULT __stdcall get_PointerDevice(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerDevice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawPosition(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RawPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInContact(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInContact());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IPointerPointProperties> : produce_base<D, Windows::UI::Input::IPointerPointProperties>
{
    HRESULT __stdcall get_Pressure(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInverted(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInverted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEraser(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEraser());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XTilt(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XTilt());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YTilt(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().YTilt());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Twist(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Twist());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactRect(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContactRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactRectRaw(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContactRectRaw());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TouchConfidence(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TouchConfidence());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsLeftButtonPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsLeftButtonPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRightButtonPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRightButtonPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMiddleButtonPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMiddleButtonPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MouseWheelDelta(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MouseWheelDelta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHorizontalMouseWheel(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsHorizontalMouseWheel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPrimary(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPrimary());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInRange(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInRange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBarrelButtonPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBarrelButtonPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsXButton1Pressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsXButton1Pressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsXButton2Pressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsXButton2Pressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerUpdateKind(abi_t<Windows::UI::Input::PointerUpdateKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerUpdateKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HasUsage(uint32_t usagePage, uint32_t usageId, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasUsage(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUsageValue(uint32_t usagePage, uint32_t usageId, int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetUsageValue(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IPointerPointProperties2> : produce_base<D, Windows::UI::Input::IPointerPointProperties2>
{
    HRESULT __stdcall get_ZDistance(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZDistance());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IPointerPointStatics> : produce_base<D, Windows::UI::Input::IPointerPointStatics>
{
    HRESULT __stdcall GetCurrentPoint(uint32_t pointerId, ::IUnknown** pointerPoint) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pointerPoint = detach_abi(this->shim().GetCurrentPoint(pointerId));
            return S_OK;
        }
        catch (...)
        {
            *pointerPoint = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIntermediatePoints(uint32_t pointerId, ::IUnknown** pointerPoints) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pointerPoints = detach_abi(this->shim().GetIntermediatePoints(pointerId));
            return S_OK;
        }
        catch (...)
        {
            *pointerPoints = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentPointTransformed(uint32_t pointerId, ::IUnknown* transform, ::IUnknown** pointerPoint) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pointerPoint = detach_abi(this->shim().GetCurrentPoint(pointerId, *reinterpret_cast<Windows::UI::Input::IPointerPointTransform const*>(&transform)));
            return S_OK;
        }
        catch (...)
        {
            *pointerPoint = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIntermediatePointsTransformed(uint32_t pointerId, ::IUnknown* transform, ::IUnknown** pointerPoints) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pointerPoints = detach_abi(this->shim().GetIntermediatePoints(pointerId, *reinterpret_cast<Windows::UI::Input::IPointerPointTransform const*>(&transform)));
            return S_OK;
        }
        catch (...)
        {
            *pointerPoints = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IPointerPointTransform> : produce_base<D, Windows::UI::Input::IPointerPointTransform>
{
    HRESULT __stdcall get_Inverse(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Inverse());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryTransform(abi_t<Windows::Foundation::Point> inPoint, abi_t<Windows::Foundation::Point>* outPoint, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TryTransform(*reinterpret_cast<Windows::Foundation::Point const*>(&inPoint), *reinterpret_cast<Windows::Foundation::Point*>(outPoint)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TransformBounds(abi_t<Windows::Foundation::Rect> rect, abi_t<Windows::Foundation::Rect>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().TransformBounds(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IPointerVisualizationSettings> : produce_base<D, Windows::UI::Input::IPointerVisualizationSettings>
{
    HRESULT __stdcall put_IsContactFeedbackEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsContactFeedbackEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsContactFeedbackEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsContactFeedbackEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsBarrelButtonFeedbackEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsBarrelButtonFeedbackEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBarrelButtonFeedbackEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBarrelButtonFeedbackEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IPointerVisualizationSettingsStatics> : produce_base<D, Windows::UI::Input::IPointerVisualizationSettingsStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** visualizationSettings) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *visualizationSettings = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *visualizationSettings = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialController> : produce_base<D, Windows::UI::Input::IRadialController>
{
    HRESULT __stdcall get_Menu(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Menu());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationResolutionInDegrees(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationResolutionInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationResolutionInDegrees(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationResolutionInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UseAutomaticHapticFeedback(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UseAutomaticHapticFeedback());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UseAutomaticHapticFeedback(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UseAutomaticHapticFeedback(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ScreenContactStarted(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().ScreenContactStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ScreenContactStarted(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScreenContactStarted(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ScreenContactEnded(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().ScreenContactEnded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ScreenContactEnded(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScreenContactEnded(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ScreenContactContinued(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().ScreenContactContinued(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ScreenContactContinued(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScreenContactContinued(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ControlLost(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().ControlLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ControlLost(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ControlLost(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RotationChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RotationChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RotationChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ButtonClicked(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ButtonClicked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ButtonClicked(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ButtonClicked(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ControlAcquired(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().ControlAcquired(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ControlAcquired(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ControlAcquired(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialController2> : produce_base<D, Windows::UI::Input::IRadialController2>
{
    HRESULT __stdcall add_ButtonPressed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ButtonPressed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonPressedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ButtonPressed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ButtonPressed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ButtonHolding(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ButtonHolding(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonHoldingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ButtonHolding(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ButtonHolding(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ButtonReleased(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ButtonReleased(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonReleasedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ButtonReleased(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ButtonReleased(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerButtonClickedEventArgs> : produce_base<D, Windows::UI::Input::IRadialControllerButtonClickedEventArgs>
{
    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerButtonClickedEventArgs2> : produce_base<D, Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>
{
    HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SimpleHapticsController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerButtonHoldingEventArgs> : produce_base<D, Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>
{
    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SimpleHapticsController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerButtonPressedEventArgs> : produce_base<D, Windows::UI::Input::IRadialControllerButtonPressedEventArgs>
{
    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SimpleHapticsController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerButtonReleasedEventArgs> : produce_base<D, Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>
{
    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SimpleHapticsController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerConfiguration> : produce_base<D, Windows::UI::Input::IRadialControllerConfiguration>
{
    HRESULT __stdcall SetDefaultMenuItems(::IUnknown* buttons) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDefaultMenuItems(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::RadialControllerSystemMenuItemKind> const*>(&buttons));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResetToDefaultMenuItems() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResetToDefaultMenuItems();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySelectDefaultMenuItem(abi_t<Windows::UI::Input::RadialControllerSystemMenuItemKind> type, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TrySelectDefaultMenuItem(*reinterpret_cast<Windows::UI::Input::RadialControllerSystemMenuItemKind const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerConfiguration2> : produce_base<D, Windows::UI::Input::IRadialControllerConfiguration2>
{
    HRESULT __stdcall put_ActiveControllerWhenMenuIsSuppressed(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActiveControllerWhenMenuIsSuppressed(*reinterpret_cast<Windows::UI::Input::RadialController const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActiveControllerWhenMenuIsSuppressed(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActiveControllerWhenMenuIsSuppressed());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsMenuSuppressed(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsMenuSuppressed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMenuSuppressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMenuSuppressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerConfigurationStatics> : produce_base<D, Windows::UI::Input::IRadialControllerConfigurationStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** configuration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *configuration = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *configuration = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerControlAcquiredEventArgs> : produce_base<D, Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>
{
    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2> : produce_base<D, Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>
{
    HRESULT __stdcall get_IsButtonPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsButtonPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SimpleHapticsController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerMenu> : produce_base<D, Windows::UI::Input::IRadialControllerMenu>
{
    HRESULT __stdcall get_Items(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSelectedMenuItem(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSelectedMenuItem());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SelectMenuItem(::IUnknown* menuItem) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectMenuItem(*reinterpret_cast<Windows::UI::Input::RadialControllerMenuItem const*>(&menuItem));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySelectPreviouslySelectedMenuItem(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TrySelectPreviouslySelectedMenuItem());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerMenuItem> : produce_base<D, Windows::UI::Input::IRadialControllerMenuItem>
{
    HRESULT __stdcall get_DisplayText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Invoked(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Invoked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Invoked(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Invoked(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerMenuItemStatics> : produce_base<D, Windows::UI::Input::IRadialControllerMenuItemStatics>
{
    HRESULT __stdcall CreateFromIcon(HSTRING displayText, ::IUnknown* icon, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFromIcon(*reinterpret_cast<hstring const*>(&displayText), *reinterpret_cast<Windows::Storage::Streams::RandomAccessStreamReference const*>(&icon)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromKnownIcon(HSTRING displayText, abi_t<Windows::UI::Input::RadialControllerMenuKnownIcon> value, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFromKnownIcon(*reinterpret_cast<hstring const*>(&displayText), *reinterpret_cast<Windows::UI::Input::RadialControllerMenuKnownIcon const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerMenuItemStatics2> : produce_base<D, Windows::UI::Input::IRadialControllerMenuItemStatics2>
{
    HRESULT __stdcall CreateFromFontGlyph(HSTRING displayText, HSTRING glyph, HSTRING fontFamily, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFromFontGlyph(*reinterpret_cast<hstring const*>(&displayText), *reinterpret_cast<hstring const*>(&glyph), *reinterpret_cast<hstring const*>(&fontFamily)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromFontGlyphWithUri(HSTRING displayText, HSTRING glyph, HSTRING fontFamily, ::IUnknown* fontUri, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFromFontGlyph(*reinterpret_cast<hstring const*>(&displayText), *reinterpret_cast<hstring const*>(&glyph), *reinterpret_cast<hstring const*>(&fontFamily), *reinterpret_cast<Windows::Foundation::Uri const*>(&fontUri)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerRotationChangedEventArgs> : produce_base<D, Windows::UI::Input::IRadialControllerRotationChangedEventArgs>
{
    HRESULT __stdcall get_RotationDeltaInDegrees(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationDeltaInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerRotationChangedEventArgs2> : produce_base<D, Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>
{
    HRESULT __stdcall get_IsButtonPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsButtonPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SimpleHapticsController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerScreenContact> : produce_base<D, Windows::UI::Input::IRadialControllerScreenContact>
{
    HRESULT __stdcall get_Bounds(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs> : produce_base<D, Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>
{
    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2> : produce_base<D, Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>
{
    HRESULT __stdcall get_IsButtonPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsButtonPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SimpleHapticsController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs> : produce_base<D, Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>
{
    HRESULT __stdcall get_IsButtonPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsButtonPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SimpleHapticsController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs> : produce_base<D, Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>
{
    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2> : produce_base<D, Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>
{
    HRESULT __stdcall get_IsButtonPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsButtonPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SimpleHapticsController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRadialControllerStatics> : produce_base<D, Windows::UI::Input::IRadialControllerStatics>
{
    HRESULT __stdcall IsSupported(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateForCurrentView(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::IRightTappedEventArgs> : produce_base<D, Windows::UI::Input::IRightTappedEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::ITappedEventArgs> : produce_base<D, Windows::UI::Input::ITappedEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TapCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TapCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Input {

inline Windows::UI::Input::EdgeGesture EdgeGesture::GetForCurrentView()
{
    return get_activation_factory<EdgeGesture, Windows::UI::Input::IEdgeGestureStatics>().GetForCurrentView();
}

inline GestureRecognizer::GestureRecognizer() :
    GestureRecognizer(activate_instance<GestureRecognizer>())
{}

inline Windows::UI::Input::KeyboardDeliveryInterceptor KeyboardDeliveryInterceptor::GetForCurrentView()
{
    return get_activation_factory<KeyboardDeliveryInterceptor, Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>().GetForCurrentView();
}

inline Windows::UI::Input::PointerPoint PointerPoint::GetCurrentPoint(uint32_t pointerId)
{
    return get_activation_factory<PointerPoint, Windows::UI::Input::IPointerPointStatics>().GetCurrentPoint(pointerId);
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> PointerPoint::GetIntermediatePoints(uint32_t pointerId)
{
    return get_activation_factory<PointerPoint, Windows::UI::Input::IPointerPointStatics>().GetIntermediatePoints(pointerId);
}

inline Windows::UI::Input::PointerPoint PointerPoint::GetCurrentPoint(uint32_t pointerId, Windows::UI::Input::IPointerPointTransform const& transform)
{
    return get_activation_factory<PointerPoint, Windows::UI::Input::IPointerPointStatics>().GetCurrentPoint(pointerId, transform);
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> PointerPoint::GetIntermediatePoints(uint32_t pointerId, Windows::UI::Input::IPointerPointTransform const& transform)
{
    return get_activation_factory<PointerPoint, Windows::UI::Input::IPointerPointStatics>().GetIntermediatePoints(pointerId, transform);
}

inline Windows::UI::Input::PointerVisualizationSettings PointerVisualizationSettings::GetForCurrentView()
{
    return get_activation_factory<PointerVisualizationSettings, Windows::UI::Input::IPointerVisualizationSettingsStatics>().GetForCurrentView();
}

inline bool RadialController::IsSupported()
{
    return get_activation_factory<RadialController, Windows::UI::Input::IRadialControllerStatics>().IsSupported();
}

inline Windows::UI::Input::RadialController RadialController::CreateForCurrentView()
{
    return get_activation_factory<RadialController, Windows::UI::Input::IRadialControllerStatics>().CreateForCurrentView();
}

inline Windows::UI::Input::RadialControllerConfiguration RadialControllerConfiguration::GetForCurrentView()
{
    return get_activation_factory<RadialControllerConfiguration, Windows::UI::Input::IRadialControllerConfigurationStatics>().GetForCurrentView();
}

inline Windows::UI::Input::RadialControllerMenuItem RadialControllerMenuItem::CreateFromIcon(param::hstring const& displayText, Windows::Storage::Streams::RandomAccessStreamReference const& icon)
{
    return get_activation_factory<RadialControllerMenuItem, Windows::UI::Input::IRadialControllerMenuItemStatics>().CreateFromIcon(displayText, icon);
}

inline Windows::UI::Input::RadialControllerMenuItem RadialControllerMenuItem::CreateFromKnownIcon(param::hstring const& displayText, Windows::UI::Input::RadialControllerMenuKnownIcon const& value)
{
    return get_activation_factory<RadialControllerMenuItem, Windows::UI::Input::IRadialControllerMenuItemStatics>().CreateFromKnownIcon(displayText, value);
}

inline Windows::UI::Input::RadialControllerMenuItem RadialControllerMenuItem::CreateFromFontGlyph(param::hstring const& displayText, param::hstring const& glyph, param::hstring const& fontFamily)
{
    return get_activation_factory<RadialControllerMenuItem, Windows::UI::Input::IRadialControllerMenuItemStatics2>().CreateFromFontGlyph(displayText, glyph, fontFamily);
}

inline Windows::UI::Input::RadialControllerMenuItem RadialControllerMenuItem::CreateFromFontGlyph(param::hstring const& displayText, param::hstring const& glyph, param::hstring const& fontFamily, Windows::Foundation::Uri const& fontUri)
{
    return get_activation_factory<RadialControllerMenuItem, Windows::UI::Input::IRadialControllerMenuItemStatics2>().CreateFromFontGlyph(displayText, glyph, fontFamily, fontUri);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Input::ICrossSlidingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::ICrossSlidingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IDraggingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IDraggingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IEdgeGesture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IEdgeGesture> {};

template<> struct hash<winrt::Windows::UI::Input::IEdgeGestureEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IEdgeGestureEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IEdgeGestureStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IEdgeGestureStatics> {};

template<> struct hash<winrt::Windows::UI::Input::IGestureRecognizer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IGestureRecognizer> {};

template<> struct hash<winrt::Windows::UI::Input::IHoldingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IHoldingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IKeyboardDeliveryInterceptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IKeyboardDeliveryInterceptor> {};

template<> struct hash<winrt::Windows::UI::Input::IKeyboardDeliveryInterceptorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IKeyboardDeliveryInterceptorStatics> {};

template<> struct hash<winrt::Windows::UI::Input::IManipulationCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IManipulationCompletedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IManipulationInertiaStartingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IManipulationInertiaStartingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IManipulationStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IManipulationStartedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IManipulationUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IManipulationUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IMouseWheelParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IMouseWheelParameters> {};

template<> struct hash<winrt::Windows::UI::Input::IPointerPoint> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IPointerPoint> {};

template<> struct hash<winrt::Windows::UI::Input::IPointerPointProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IPointerPointProperties> {};

template<> struct hash<winrt::Windows::UI::Input::IPointerPointProperties2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IPointerPointProperties2> {};

template<> struct hash<winrt::Windows::UI::Input::IPointerPointStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IPointerPointStatics> {};

template<> struct hash<winrt::Windows::UI::Input::IPointerPointTransform> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IPointerPointTransform> {};

template<> struct hash<winrt::Windows::UI::Input::IPointerVisualizationSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IPointerVisualizationSettings> {};

template<> struct hash<winrt::Windows::UI::Input::IPointerVisualizationSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IPointerVisualizationSettingsStatics> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialController> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialController2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialController2> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerButtonClickedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerButtonClickedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerButtonClickedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerButtonClickedEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerButtonHoldingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerButtonHoldingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerButtonPressedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerButtonPressedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerButtonReleasedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerButtonReleasedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerConfiguration> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerConfiguration2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerConfiguration2> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerConfigurationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerConfigurationStatics> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerControlAcquiredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerControlAcquiredEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerMenu> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerMenu> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerMenuItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerMenuItem> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerMenuItemStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerMenuItemStatics> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerMenuItemStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerMenuItemStatics2> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerRotationChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerRotationChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerRotationChangedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerRotationChangedEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerScreenContact> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerScreenContact> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Input::IRadialControllerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRadialControllerStatics> {};

template<> struct hash<winrt::Windows::UI::Input::IRightTappedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::IRightTappedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::ITappedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::ITappedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::CrossSlidingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::CrossSlidingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::DraggingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::DraggingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::EdgeGesture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::EdgeGesture> {};

template<> struct hash<winrt::Windows::UI::Input::EdgeGestureEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::EdgeGestureEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::GestureRecognizer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::GestureRecognizer> {};

template<> struct hash<winrt::Windows::UI::Input::HoldingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::HoldingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::KeyboardDeliveryInterceptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::KeyboardDeliveryInterceptor> {};

template<> struct hash<winrt::Windows::UI::Input::ManipulationCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::ManipulationCompletedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::ManipulationInertiaStartingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::ManipulationInertiaStartingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::ManipulationStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::ManipulationStartedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::ManipulationUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::ManipulationUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::MouseWheelParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::MouseWheelParameters> {};

template<> struct hash<winrt::Windows::UI::Input::PointerPoint> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::PointerPoint> {};

template<> struct hash<winrt::Windows::UI::Input::PointerPointProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::PointerPointProperties> {};

template<> struct hash<winrt::Windows::UI::Input::PointerVisualizationSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::PointerVisualizationSettings> {};

template<> struct hash<winrt::Windows::UI::Input::RadialController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialController> {};

template<> struct hash<winrt::Windows::UI::Input::RadialControllerButtonClickedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialControllerButtonClickedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::RadialControllerButtonHoldingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialControllerButtonHoldingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::RadialControllerButtonPressedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialControllerButtonPressedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::RadialControllerButtonReleasedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialControllerButtonReleasedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::RadialControllerConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialControllerConfiguration> {};

template<> struct hash<winrt::Windows::UI::Input::RadialControllerControlAcquiredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialControllerControlAcquiredEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::RadialControllerMenu> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialControllerMenu> {};

template<> struct hash<winrt::Windows::UI::Input::RadialControllerMenuItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialControllerMenuItem> {};

template<> struct hash<winrt::Windows::UI::Input::RadialControllerRotationChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialControllerRotationChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::RadialControllerScreenContact> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialControllerScreenContact> {};

template<> struct hash<winrt::Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::RadialControllerScreenContactEndedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialControllerScreenContactEndedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::RightTappedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::RightTappedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::TappedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::TappedEventArgs> {};

}

WINRT_WARNING_POP
