// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Haptics.2.h"
#include "winrt/impl/Windows.Perception.2.h"
#include "winrt/impl/Windows.Perception.People.2.h"
#include "winrt/impl/Windows.Perception.Spatial.2.h"
#include "winrt/impl/Windows.UI.Input.Spatial.2.h"
#include "winrt/Windows.UI.Input.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::RecognitionStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_RecognitionStarted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::RecognitionStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_RecognitionStarted, RecognitionStarted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::RecognitionStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_RecognitionStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::RecognitionEnded(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_RecognitionEnded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::RecognitionEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_RecognitionEnded, RecognitionEnded(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::RecognitionEnded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_RecognitionEnded(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::Tapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialTappedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_Tapped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::Tapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialTappedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_Tapped, Tapped(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::Tapped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_Tapped(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_HoldStarted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_HoldStarted, HoldStarted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_HoldStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_HoldCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_HoldCompleted, HoldCompleted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_HoldCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_HoldCanceled(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_HoldCanceled, HoldCanceled(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldCanceled(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_HoldCanceled(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_ManipulationStarted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_ManipulationStarted, ManipulationStarted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_ManipulationStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_ManipulationUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_ManipulationUpdated, ManipulationUpdated(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_ManipulationUpdated(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_ManipulationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_ManipulationCompleted, ManipulationCompleted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_ManipulationCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_ManipulationCanceled(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_ManipulationCanceled, ManipulationCanceled(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationCanceled(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_ManipulationCanceled(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_NavigationStarted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_NavigationStarted, NavigationStarted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_NavigationStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_NavigationUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_NavigationUpdated, NavigationUpdated(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_NavigationUpdated(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_NavigationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_NavigationCompleted, NavigationCompleted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_NavigationCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_NavigationCanceled(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_NavigationCanceled, NavigationCanceled(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationCanceled(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_NavigationCanceled(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::CaptureInteraction(Windows::UI::Input::Spatial::SpatialInteraction const& interaction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->CaptureInteraction(get_abi(interaction)));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::CancelPendingGestures() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->CancelPendingGestures());
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::TrySetGestureSettings(Windows::UI::Input::Spatial::SpatialGestureSettings const& settings) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->TrySetGestureSettings(get_abi(settings), &succeeded));
    return succeeded;
}

template <typename D> Windows::UI::Input::Spatial::SpatialGestureSettings consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::GestureSettings() const
{
    Windows::UI::Input::Spatial::SpatialGestureSettings value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->get_GestureSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialGestureRecognizer consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizerFactory<D>::Create(Windows::UI::Input::Spatial::SpatialGestureSettings const& settings) const
{
    Windows::UI::Input::Spatial::SpatialGestureRecognizer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory)->Create(get_abi(settings), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialHoldCanceledEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialHoldCompletedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialHoldStartedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialHoldStartedEventArgs<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceState consume_Windows_UI_Input_Spatial_ISpatialInteraction<D>::SourceState() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceState value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteraction)->get_SourceState(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionController<D>::HasTouchpad() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController)->get_HasTouchpad(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionController<D>::HasThumbstick() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController)->get_HasThumbstick(&value));
    return value;
}

template <typename D> Windows::Devices::Haptics::SimpleHapticsController consume_Windows_UI_Input_Spatial_ISpatialInteractionController<D>::SimpleHapticsController() const
{
    Windows::Devices::Haptics::SimpleHapticsController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController)->get_SimpleHapticsController(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_UI_Input_Spatial_ISpatialInteractionController<D>::VendorId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController)->get_VendorId(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_UI_Input_Spatial_ISpatialInteractionController<D>::ProductId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController)->get_ProductId(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_UI_Input_Spatial_ISpatialInteractionController<D>::Version() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController)->get_Version(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::IsTouchpadTouched() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_IsTouchpadTouched(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::IsTouchpadPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_IsTouchpadPressed(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::IsThumbstickPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_IsThumbstickPressed(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::ThumbstickX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_ThumbstickX(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::ThumbstickY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_ThumbstickY(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::TouchpadX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_TouchpadX(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::TouchpadY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_TouchpadY(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteraction consume_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs<D>::Interaction() const
{
    Windows::UI::Input::Spatial::SpatialInteraction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs)->get_Interaction(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSource consume_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs2<D>::InteractionSource() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2)->get_InteractionSource(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceDetected(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->add_SourceDetected(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourceDetected, SourceDetected(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceDetected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->remove_SourceDetected(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->add_SourceLost(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourceLost, SourceLost(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceLost(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->remove_SourceLost(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->add_SourceUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourceUpdated, SourceUpdated(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->remove_SourceUpdated(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourcePressed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->add_SourcePressed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourcePressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourcePressed, SourcePressed(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourcePressed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->remove_SourcePressed(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->add_SourceReleased(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourceReleased, SourceReleased(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceReleased(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->remove_SourceReleased(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::InteractionDetected(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->add_InteractionDetected(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::InteractionDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_InteractionDetected, InteractionDetected(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::InteractionDetected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->remove_InteractionDetected(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Spatial::SpatialInteractionSourceState> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::GetDetectedSourcesAtTimestamp(Windows::Perception::PerceptionTimestamp const& timeStamp) const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Spatial::SpatialInteractionSourceState> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->GetDetectedSourcesAtTimestamp(get_abi(timeStamp), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionManager consume_Windows_UI_Input_Spatial_ISpatialInteractionManagerStatics<D>::GetForCurrentView() const
{
    Windows::UI::Input::Spatial::SpatialInteractionManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics)->GetForCurrentView(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Input_Spatial_ISpatialInteractionSource<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource)->get_Id(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialInteractionSource<D>::Kind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSource2<D>::IsPointingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource2)->get_IsPointingSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSource2<D>::IsMenuSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource2)->get_IsMenuSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSource2<D>::IsGraspSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource2)->get_IsGraspSupported(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionController consume_Windows_UI_Input_Spatial_ISpatialInteractionSource2<D>::Controller() const
{
    Windows::UI::Input::Spatial::SpatialInteractionController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource2)->get_Controller(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceState consume_Windows_UI_Input_Spatial_ISpatialInteractionSource2<D>::TryGetStateAtTimestamp(Windows::Perception::PerceptionTimestamp const& timestamp) const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceState value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource2)->TryGetStateAtTimestamp(get_abi(timestamp), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceState consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs<D>::State() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceState value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionPressKind consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs2<D>::PressKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionPressKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2)->get_PressKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation<D>::Position() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation<D>::Velocity() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation)->get_Velocity(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::quaternion> consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation2<D>::Orientation() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::quaternion> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceProperties<D>::TryGetSourceLossMitigationDirection(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties)->TryGetSourceLossMitigationDirection(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceProperties<D>::SourceLossRisk() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties)->get_SourceLossRisk(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceLocation consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceProperties<D>::TryGetLocation(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceLocation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties)->TryGetLocation(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSource consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState<D>::Source() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState)->get_Source(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceProperties consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState<D>::Properties() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState<D>::IsPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState)->get_IsPressed(&value));
    return value;
}

template <typename D> Windows::Perception::PerceptionTimestamp consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState<D>::Timestamp() const
{
    Windows::Perception::PerceptionTimestamp value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2<D>::IsSelectPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState2)->get_IsSelectPressed(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2<D>::IsMenuPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState2)->get_IsMenuPressed(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2<D>::IsGrasped() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState2)->get_IsGrasped(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2<D>::SelectPressedValue() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState2)->get_SelectPressedValue(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionControllerProperties consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2<D>::ControllerProperties() const
{
    Windows::UI::Input::Spatial::SpatialInteractionControllerProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState2)->get_ControllerProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialManipulationCanceledEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialManipulationCompletedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialManipulationDelta consume_Windows_UI_Input_Spatial_ISpatialManipulationCompletedEventArgs<D>::TryGetCumulativeDelta(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialManipulationDelta value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs)->TryGetCumulativeDelta(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Input_Spatial_ISpatialManipulationDelta<D>::Translation() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationDelta)->get_Translation(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialManipulationStartedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialManipulationStartedEventArgs<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialManipulationUpdatedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialManipulationDelta consume_Windows_UI_Input_Spatial_ISpatialManipulationUpdatedEventArgs<D>::TryGetCumulativeDelta(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialManipulationDelta value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs)->TryGetCumulativeDelta(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialNavigationCanceledEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialNavigationCompletedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Input_Spatial_ISpatialNavigationCompletedEventArgs<D>::NormalizedOffset() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs)->get_NormalizedOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs<D>::IsNavigatingX() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs)->get_IsNavigatingX(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs<D>::IsNavigatingY() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs)->get_IsNavigatingY(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs<D>::IsNavigatingZ() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs)->get_IsNavigatingZ(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialNavigationUpdatedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Input_Spatial_ISpatialNavigationUpdatedEventArgs<D>::NormalizedOffset() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs)->get_NormalizedOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose<D>::ForwardDirection() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose)->get_ForwardDirection(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose<D>::UpDirection() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose)->get_UpDirection(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::PerceptionTimestamp consume_Windows_UI_Input_Spatial_ISpatialPointerPose<D>::Timestamp() const
{
    Windows::Perception::PerceptionTimestamp value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerPose)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::People::HeadPose consume_Windows_UI_Input_Spatial_ISpatialPointerPose<D>::Head() const
{
    Windows::Perception::People::HeadPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerPose)->get_Head(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose consume_Windows_UI_Input_Spatial_ISpatialPointerPose2<D>::TryGetInteractionSourcePose(Windows::UI::Input::Spatial::SpatialInteractionSource const& source) const
{
    Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerPose2)->TryGetInteractionSourcePose(get_abi(source), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialPointerPoseStatics<D>::TryGetAtTimestamp(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::PerceptionTimestamp const& timestamp) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerPoseStatics)->TryGetAtTimestamp(get_abi(coordinateSystem), get_abi(timestamp), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialRecognitionEndedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialRecognitionStartedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialRecognitionStartedEventArgs<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialRecognitionStartedEventArgs<D>::IsGesturePossible(Windows::UI::Input::Spatial::SpatialGestureSettings const& gesture) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs)->IsGesturePossible(get_abi(gesture), &value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialTappedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialTappedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialTappedEventArgs<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialTappedEventArgs)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Input_Spatial_ISpatialTappedEventArgs<D>::TapCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialTappedEventArgs)->get_TapCount(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer> : produce_base<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>
{
    HRESULT __stdcall add_RecognitionStarted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RecognitionStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecognitionStarted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecognitionStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecognitionEnded(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RecognitionEnded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecognitionEnded(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecognitionEnded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Tapped(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Tapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialTappedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Tapped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tapped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HoldStarted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().HoldStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HoldStarted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HoldStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HoldCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().HoldCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HoldCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HoldCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HoldCanceled(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().HoldCanceled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HoldCanceled(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HoldCanceled(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationStarted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ManipulationStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationStarted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationUpdated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ManipulationUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationUpdated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ManipulationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationCanceled(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ManipulationCanceled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationCanceled(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationCanceled(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationStarted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().NavigationStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationStarted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigationStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationUpdated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().NavigationUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationUpdated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigationUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().NavigationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationCanceled(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().NavigationCanceled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationCanceled(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigationCanceled(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CaptureInteraction(::IUnknown* interaction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaptureInteraction(*reinterpret_cast<Windows::UI::Input::Spatial::SpatialInteraction const*>(&interaction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CancelPendingGestures() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CancelPendingGestures();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetGestureSettings(abi_t<Windows::UI::Input::Spatial::SpatialGestureSettings> settings, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TrySetGestureSettings(*reinterpret_cast<Windows::UI::Input::Spatial::SpatialGestureSettings const*>(&settings)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GestureSettings(abi_t<Windows::UI::Input::Spatial::SpatialGestureSettings>* value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory> : produce_base<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory>
{
    HRESULT __stdcall Create(abi_t<Windows::UI::Input::Spatial::SpatialGestureSettings> settings, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::UI::Input::Spatial::SpatialGestureSettings const*>(&settings)));
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetPointerPose(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteraction> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteraction>
{
    HRESULT __stdcall get_SourceState(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceState());
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionController> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionController>
{
    HRESULT __stdcall get_HasTouchpad(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasTouchpad());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasThumbstick(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasThumbstick());
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

    HRESULT __stdcall get_VendorId(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VendorId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProductId(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProductId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Version(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties>
{
    HRESULT __stdcall get_IsTouchpadTouched(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTouchpadTouched());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTouchpadPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTouchpadPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsThumbstickPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsThumbstickPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThumbstickX(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ThumbstickX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThumbstickY(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ThumbstickY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TouchpadX(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TouchpadX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TouchpadY(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TouchpadY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetPointerPose(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Interaction(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Interaction());
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2>
{
    HRESULT __stdcall get_InteractionSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSource());
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionManager> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>
{
    HRESULT __stdcall add_SourceDetected(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceDetected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceDetected(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceDetected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceLost(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceLost(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceLost(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceUpdated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceUpdated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourcePressed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourcePressed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourcePressed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourcePressed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceReleased(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceReleased(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceReleased(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceReleased(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_InteractionDetected(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().InteractionDetected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_InteractionDetected(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InteractionDetected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDetectedSourcesAtTimestamp(::IUnknown* timeStamp, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDetectedSourcesAtTimestamp(*reinterpret_cast<Windows::Perception::PerceptionTimestamp const*>(&timeStamp)));
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForCurrentView());
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSource> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSource>
{
    HRESULT __stdcall get_Id(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSource2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSource2>
{
    HRESULT __stdcall get_IsPointingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPointingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMenuSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMenuSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGraspSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsGraspSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Controller(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Controller());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetStateAtTimestamp(::IUnknown* timestamp, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetStateAtTimestamp(*reinterpret_cast<Windows::Perception::PerceptionTimestamp const*>(&timestamp)));
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs>
{
    HRESULT __stdcall get_State(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2>
{
    HRESULT __stdcall get_PressKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionPressKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PressKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation>
{
    HRESULT __stdcall get_Position(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Velocity(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Velocity());
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2>
{
    HRESULT __stdcall get_Orientation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Orientation());
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties>
{
    HRESULT __stdcall TryGetSourceLossMitigationDirection(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetSourceLossMitigationDirection(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceLossRisk(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceLossRisk());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetLocation(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetLocation(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceState> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceState>
{
    HRESULT __stdcall get_Source(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_IsPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetPointerPose(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceState2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceState2>
{
    HRESULT __stdcall get_IsSelectPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSelectPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMenuPressed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMenuPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGrasped(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsGrasped());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectPressedValue(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectPressedValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControllerProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ControllerProperties());
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetCumulativeDelta(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetCumulativeDelta(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialManipulationDelta> : produce_base<D, Windows::UI::Input::Spatial::ISpatialManipulationDelta>
{
    HRESULT __stdcall get_Translation(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Translation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetPointerPose(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetCumulativeDelta(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetCumulativeDelta(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedOffset(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NormalizedOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetPointerPose(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNavigatingX(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsNavigatingX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNavigatingY(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsNavigatingY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNavigatingZ(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsNavigatingZ());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedOffset(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NormalizedOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose> : produce_base<D, Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
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

    HRESULT __stdcall get_ForwardDirection(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForwardDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpDirection(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UpDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialPointerPose> : produce_base<D, Windows::UI::Input::Spatial::ISpatialPointerPose>
{
    HRESULT __stdcall get_Timestamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Head(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Head());
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialPointerPose2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialPointerPose2>
{
    HRESULT __stdcall TryGetInteractionSourcePose(::IUnknown* source, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetInteractionSourcePose(*reinterpret_cast<Windows::UI::Input::Spatial::SpatialInteractionSource const*>(&source)));
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialPointerPoseStatics> : produce_base<D, Windows::UI::Input::Spatial::ISpatialPointerPoseStatics>
{
    HRESULT __stdcall TryGetAtTimestamp(::IUnknown* coordinateSystem, ::IUnknown* timestamp, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetAtTimestamp(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Perception::PerceptionTimestamp const*>(&timestamp)));
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetPointerPose(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsGesturePossible(abi_t<Windows::UI::Input::Spatial::SpatialGestureSettings> gesture, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsGesturePossible(*reinterpret_cast<Windows::UI::Input::Spatial::SpatialGestureSettings const*>(&gesture)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialTappedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialTappedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(abi_t<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetPointerPose(::IUnknown* coordinateSystem, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

WINRT_EXPORT namespace winrt::Windows::UI::Input::Spatial {

inline SpatialGestureRecognizer::SpatialGestureRecognizer(Windows::UI::Input::Spatial::SpatialGestureSettings const& settings) :
    SpatialGestureRecognizer(get_activation_factory<SpatialGestureRecognizer, Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory>().Create(settings))
{}

inline Windows::UI::Input::Spatial::SpatialInteractionManager SpatialInteractionManager::GetForCurrentView()
{
    return get_activation_factory<SpatialInteractionManager, Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics>().GetForCurrentView();
}

inline Windows::UI::Input::Spatial::SpatialPointerPose SpatialPointerPose::TryGetAtTimestamp(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::PerceptionTimestamp const& timestamp)
{
    return get_activation_factory<SpatialPointerPose, Windows::UI::Input::Spatial::ISpatialPointerPoseStatics>().TryGetAtTimestamp(coordinateSystem, timestamp);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialGestureRecognizer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialGestureRecognizer> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteraction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteraction> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionController> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionManager> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource2> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceState> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceState> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceState2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceState2> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialManipulationDelta> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialManipulationDelta> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialPointerPose> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialPointerPose> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialPointerPose2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialPointerPose2> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialPointerPoseStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialPointerPoseStatics> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialTappedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::ISpatialTappedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialGestureRecognizer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialGestureRecognizer> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteraction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialInteraction> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialInteractionController> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionControllerProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialInteractionControllerProperties> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialInteractionManager> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialInteractionSource> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceLocation> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceProperties> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceState> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceState> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialManipulationDelta> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialManipulationDelta> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialPointerPose> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialPointerPose> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialTappedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Spatial::SpatialTappedEventArgs> {};

}

WINRT_WARNING_POP
