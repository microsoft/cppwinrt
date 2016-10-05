// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Perception.Spatial.3.h"
#include "internal/Windows.Perception.3.h"
#include "internal/Windows.Perception.People.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Input.Spatial.3.h"
#include "Windows.UI.Input.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer> : produce_base<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>
{
    HRESULT __stdcall add_RecognitionStarted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RecognitionStarted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecognitionStarted(event_token token) noexcept override
    {
        try
        {
            this->shim().RecognitionStarted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecognitionEnded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RecognitionEnded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecognitionEnded(event_token token) noexcept override
    {
        try
        {
            this->shim().RecognitionEnded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Tapped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialTappedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Tapped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialTappedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Tapped(event_token token) noexcept override
    {
        try
        {
            this->shim().Tapped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HoldStarted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().HoldStarted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HoldStarted(event_token token) noexcept override
    {
        try
        {
            this->shim().HoldStarted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HoldCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().HoldCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HoldCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().HoldCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HoldCanceled(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().HoldCanceled(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HoldCanceled(event_token token) noexcept override
    {
        try
        {
            this->shim().HoldCanceled(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationStarted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ManipulationStarted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationStarted(event_token token) noexcept override
    {
        try
        {
            this->shim().ManipulationStarted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationUpdated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ManipulationUpdated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationUpdated(event_token token) noexcept override
    {
        try
        {
            this->shim().ManipulationUpdated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ManipulationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().ManipulationCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationCanceled(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ManipulationCanceled(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationCanceled(event_token token) noexcept override
    {
        try
        {
            this->shim().ManipulationCanceled(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationStarted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().NavigationStarted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationStarted(event_token token) noexcept override
    {
        try
        {
            this->shim().NavigationStarted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationUpdated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().NavigationUpdated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationUpdated(event_token token) noexcept override
    {
        try
        {
            this->shim().NavigationUpdated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().NavigationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().NavigationCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationCanceled(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().NavigationCanceled(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationCanceled(event_token token) noexcept override
    {
        try
        {
            this->shim().NavigationCanceled(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CaptureInteraction(abi_arg_in<Windows::UI::Input::Spatial::ISpatialInteraction> interaction) noexcept override
    {
        try
        {
            this->shim().CaptureInteraction(*reinterpret_cast<const Windows::UI::Input::Spatial::SpatialInteraction *>(&interaction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CancelPendingGestures() noexcept override
    {
        try
        {
            this->shim().CancelPendingGestures();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetGestureSettings(Windows::UI::Input::Spatial::SpatialGestureSettings settings, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TrySetGestureSettings(settings));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GestureSettings(Windows::UI::Input::Spatial::SpatialGestureSettings * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GestureSettings());
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
    HRESULT __stdcall abi_Create(Windows::UI::Input::Spatial::SpatialGestureSettings settings, abi_arg_out<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Create(settings));
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetPointerPose(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::UI::Input::Spatial::ISpatialPointerPose> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetPointerPose(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
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
    HRESULT __stdcall get_SourceState(abi_arg_out<Windows::UI::Input::Spatial::ISpatialInteractionSourceState> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceState());
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetPointerPose(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::UI::Input::Spatial::ISpatialPointerPose> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetPointerPose(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Interaction(abi_arg_out<Windows::UI::Input::Spatial::ISpatialInteraction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Interaction());
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
    HRESULT __stdcall add_SourceDetected(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SourceDetected(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceDetected(event_token token) noexcept override
    {
        try
        {
            this->shim().SourceDetected(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceLost(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SourceLost(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceLost(event_token token) noexcept override
    {
        try
        {
            this->shim().SourceLost(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceUpdated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SourceUpdated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceUpdated(event_token token) noexcept override
    {
        try
        {
            this->shim().SourceUpdated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourcePressed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SourcePressed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourcePressed(event_token token) noexcept override
    {
        try
        {
            this->shim().SourcePressed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceReleased(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SourceReleased(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceReleased(event_token token) noexcept override
    {
        try
        {
            this->shim().SourceReleased(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_InteractionDetected(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().InteractionDetected(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_InteractionDetected(event_token token) noexcept override
    {
        try
        {
            this->shim().InteractionDetected(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDetectedSourcesAtTimestamp(abi_arg_in<Windows::Perception::IPerceptionTimestamp> timeStamp, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Spatial::SpatialInteractionSourceState>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDetectedSourcesAtTimestamp(*reinterpret_cast<const Windows::Perception::PerceptionTimestamp *>(&timeStamp)));
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
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::UI::Input::Spatial::ISpatialInteractionManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetForCurrentView());
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
    HRESULT __stdcall get_Id(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs>
{
    HRESULT __stdcall get_State(abi_arg_out<Windows::UI::Input::Spatial::ISpatialInteractionSourceState> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().State());
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
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation>
{
    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Velocity(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Velocity());
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
    HRESULT __stdcall get_Orientation(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Numerics::quaternion>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orientation());
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
    HRESULT __stdcall abi_TryGetSourceLossMitigationDirection(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetSourceLossMitigationDirection(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceLossRisk(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceLossRisk());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetLocation(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetLocation(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
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
    HRESULT __stdcall get_Source(abi_arg_out<Windows::UI::Input::Spatial::ISpatialInteractionSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPressed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Perception::IPerceptionTimestamp> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetPointerPose(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::UI::Input::Spatial::ISpatialPointerPose> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetPointerPose(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetCumulativeDelta(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::UI::Input::Spatial::ISpatialManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetCumulativeDelta(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
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
    HRESULT __stdcall get_Translation(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Translation());
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetPointerPose(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::UI::Input::Spatial::ISpatialPointerPose> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetPointerPose(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetCumulativeDelta(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::UI::Input::Spatial::ISpatialManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetCumulativeDelta(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedOffset(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NormalizedOffset());
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetPointerPose(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::UI::Input::Spatial::ISpatialPointerPose> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetPointerPose(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNavigatingX(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsNavigatingX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNavigatingY(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsNavigatingY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNavigatingZ(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsNavigatingZ());
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedOffset(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NormalizedOffset());
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
    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Perception::IPerceptionTimestamp> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Head(abi_arg_out<Windows::Perception::People::IHeadPose> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Head());
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
    HRESULT __stdcall abi_TryGetAtTimestamp(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_in<Windows::Perception::IPerceptionTimestamp> timestamp, abi_arg_out<Windows::UI::Input::Spatial::ISpatialPointerPose> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetAtTimestamp(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem), *reinterpret_cast<const Windows::Perception::PerceptionTimestamp *>(&timestamp)));
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetPointerPose(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::UI::Input::Spatial::ISpatialPointerPose> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetPointerPose(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsGesturePossible(Windows::UI::Input::Spatial::SpatialGestureSettings gesture, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsGesturePossible(gesture));
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
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetPointerPose(abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::UI::Input::Spatial::ISpatialPointerPose> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetPointerPose(*reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TapCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TapCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Input::Spatial {

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> impl_ISpatialInteractionSourceLocation<D>::Position() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value;
    check_hresult(static_cast<const ISpatialInteractionSourceLocation &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> impl_ISpatialInteractionSourceLocation<D>::Velocity() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value;
    check_hresult(static_cast<const ISpatialInteractionSourceLocation &>(static_cast<const D &>(*this))->get_Velocity(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::quaternion> impl_ISpatialInteractionSourceLocation2<D>::Orientation() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::quaternion> value;
    check_hresult(static_cast<const ISpatialInteractionSourceLocation2 &>(static_cast<const D &>(*this))->get_Orientation(put(value)));
    return value;
}

template <typename D> uint32_t impl_ISpatialInteractionSource<D>::Id() const
{
    uint32_t value {};
    check_hresult(static_cast<const ISpatialInteractionSource &>(static_cast<const D &>(*this))->get_Id(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialInteractionSource<D>::Kind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialInteractionSource &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> impl_ISpatialInteractionSourceProperties<D>::TryGetSourceLossMitigationDirection(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value;
    check_hresult(static_cast<const ISpatialInteractionSourceProperties &>(static_cast<const D &>(*this))->abi_TryGetSourceLossMitigationDirection(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> double impl_ISpatialInteractionSourceProperties<D>::SourceLossRisk() const
{
    double value {};
    check_hresult(static_cast<const ISpatialInteractionSourceProperties &>(static_cast<const D &>(*this))->get_SourceLossRisk(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceLocation impl_ISpatialInteractionSourceProperties<D>::TryGetLocation(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceLocation value { nullptr };
    check_hresult(static_cast<const ISpatialInteractionSourceProperties &>(static_cast<const D &>(*this))->abi_TryGetLocation(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> Windows::Perception::PerceptionTimestamp impl_ISpatialPointerPose<D>::Timestamp() const
{
    Windows::Perception::PerceptionTimestamp value { nullptr };
    check_hresult(static_cast<const ISpatialPointerPose &>(static_cast<const D &>(*this))->get_Timestamp(put(value)));
    return value;
}

template <typename D> Windows::Perception::People::HeadPose impl_ISpatialPointerPose<D>::Head() const
{
    Windows::Perception::People::HeadPose value { nullptr };
    check_hresult(static_cast<const ISpatialPointerPose &>(static_cast<const D &>(*this))->get_Head(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose impl_ISpatialPointerPoseStatics<D>::TryGetAtTimestamp(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::PerceptionTimestamp & timestamp) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value { nullptr };
    check_hresult(static_cast<const ISpatialPointerPoseStatics &>(static_cast<const D &>(*this))->abi_TryGetAtTimestamp(get(coordinateSystem), get(timestamp), put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSource impl_ISpatialInteractionSourceState<D>::Source() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSource value { nullptr };
    check_hresult(static_cast<const ISpatialInteractionSourceState &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceProperties impl_ISpatialInteractionSourceState<D>::Properties() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceProperties value { nullptr };
    check_hresult(static_cast<const ISpatialInteractionSourceState &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> bool impl_ISpatialInteractionSourceState<D>::IsPressed() const
{
    bool value {};
    check_hresult(static_cast<const ISpatialInteractionSourceState &>(static_cast<const D &>(*this))->get_IsPressed(&value));
    return value;
}

template <typename D> Windows::Perception::PerceptionTimestamp impl_ISpatialInteractionSourceState<D>::Timestamp() const
{
    Windows::Perception::PerceptionTimestamp value { nullptr };
    check_hresult(static_cast<const ISpatialInteractionSourceState &>(static_cast<const D &>(*this))->get_Timestamp(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose impl_ISpatialInteractionSourceState<D>::TryGetPointerPose(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value { nullptr };
    check_hresult(static_cast<const ISpatialInteractionSourceState &>(static_cast<const D &>(*this))->abi_TryGetPointerPose(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialRecognitionStartedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialRecognitionStartedEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose impl_ISpatialRecognitionStartedEventArgs<D>::TryGetPointerPose(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value { nullptr };
    check_hresult(static_cast<const ISpatialRecognitionStartedEventArgs &>(static_cast<const D &>(*this))->abi_TryGetPointerPose(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> bool impl_ISpatialRecognitionStartedEventArgs<D>::IsGesturePossible(Windows::UI::Input::Spatial::SpatialGestureSettings gesture) const
{
    bool value {};
    check_hresult(static_cast<const ISpatialRecognitionStartedEventArgs &>(static_cast<const D &>(*this))->abi_IsGesturePossible(gesture, &value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialRecognitionEndedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialRecognitionEndedEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialTappedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialTappedEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose impl_ISpatialTappedEventArgs<D>::TryGetPointerPose(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value { nullptr };
    check_hresult(static_cast<const ISpatialTappedEventArgs &>(static_cast<const D &>(*this))->abi_TryGetPointerPose(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> uint32_t impl_ISpatialTappedEventArgs<D>::TapCount() const
{
    uint32_t value {};
    check_hresult(static_cast<const ISpatialTappedEventArgs &>(static_cast<const D &>(*this))->get_TapCount(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialHoldStartedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialHoldStartedEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose impl_ISpatialHoldStartedEventArgs<D>::TryGetPointerPose(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value { nullptr };
    check_hresult(static_cast<const ISpatialHoldStartedEventArgs &>(static_cast<const D &>(*this))->abi_TryGetPointerPose(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialHoldCompletedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialHoldCompletedEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialHoldCanceledEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialHoldCanceledEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_ISpatialManipulationDelta<D>::Translation() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const ISpatialManipulationDelta &>(static_cast<const D &>(*this))->get_Translation(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialManipulationStartedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialManipulationStartedEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose impl_ISpatialManipulationStartedEventArgs<D>::TryGetPointerPose(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value { nullptr };
    check_hresult(static_cast<const ISpatialManipulationStartedEventArgs &>(static_cast<const D &>(*this))->abi_TryGetPointerPose(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialManipulationUpdatedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialManipulationUpdatedEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialManipulationDelta impl_ISpatialManipulationUpdatedEventArgs<D>::TryGetCumulativeDelta(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialManipulationDelta value { nullptr };
    check_hresult(static_cast<const ISpatialManipulationUpdatedEventArgs &>(static_cast<const D &>(*this))->abi_TryGetCumulativeDelta(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialManipulationCompletedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialManipulationCompletedEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialManipulationDelta impl_ISpatialManipulationCompletedEventArgs<D>::TryGetCumulativeDelta(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialManipulationDelta value { nullptr };
    check_hresult(static_cast<const ISpatialManipulationCompletedEventArgs &>(static_cast<const D &>(*this))->abi_TryGetCumulativeDelta(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialManipulationCanceledEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialManipulationCanceledEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialNavigationStartedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialNavigationStartedEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose impl_ISpatialNavigationStartedEventArgs<D>::TryGetPointerPose(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value { nullptr };
    check_hresult(static_cast<const ISpatialNavigationStartedEventArgs &>(static_cast<const D &>(*this))->abi_TryGetPointerPose(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> bool impl_ISpatialNavigationStartedEventArgs<D>::IsNavigatingX() const
{
    bool value {};
    check_hresult(static_cast<const ISpatialNavigationStartedEventArgs &>(static_cast<const D &>(*this))->get_IsNavigatingX(&value));
    return value;
}

template <typename D> bool impl_ISpatialNavigationStartedEventArgs<D>::IsNavigatingY() const
{
    bool value {};
    check_hresult(static_cast<const ISpatialNavigationStartedEventArgs &>(static_cast<const D &>(*this))->get_IsNavigatingY(&value));
    return value;
}

template <typename D> bool impl_ISpatialNavigationStartedEventArgs<D>::IsNavigatingZ() const
{
    bool value {};
    check_hresult(static_cast<const ISpatialNavigationStartedEventArgs &>(static_cast<const D &>(*this))->get_IsNavigatingZ(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialNavigationUpdatedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialNavigationUpdatedEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_ISpatialNavigationUpdatedEventArgs<D>::NormalizedOffset() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const ISpatialNavigationUpdatedEventArgs &>(static_cast<const D &>(*this))->get_NormalizedOffset(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialNavigationCompletedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialNavigationCompletedEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_ISpatialNavigationCompletedEventArgs<D>::NormalizedOffset() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const ISpatialNavigationCompletedEventArgs &>(static_cast<const D &>(*this))->get_NormalizedOffset(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialNavigationCanceledEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialNavigationCanceledEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceState impl_ISpatialInteraction<D>::SourceState() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceState value { nullptr };
    check_hresult(static_cast<const ISpatialInteraction &>(static_cast<const D &>(*this))->get_SourceState(put(value)));
    return value;
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::RecognitionStarted(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_RecognitionStarted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::RecognitionStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_RecognitionStarted, RecognitionStarted(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::RecognitionStarted(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_RecognitionStarted(token));
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::RecognitionEnded(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_RecognitionEnded(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::RecognitionEnded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_RecognitionEnded, RecognitionEnded(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::RecognitionEnded(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_RecognitionEnded(token));
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::Tapped(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialTappedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_Tapped(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::Tapped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialTappedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_Tapped, Tapped(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::Tapped(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_Tapped(token));
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::HoldStarted(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_HoldStarted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::HoldStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_HoldStarted, HoldStarted(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::HoldStarted(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_HoldStarted(token));
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::HoldCompleted(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_HoldCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::HoldCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_HoldCompleted, HoldCompleted(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::HoldCompleted(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_HoldCompleted(token));
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::HoldCanceled(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_HoldCanceled(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::HoldCanceled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_HoldCanceled, HoldCanceled(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::HoldCanceled(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_HoldCanceled(token));
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::ManipulationStarted(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_ManipulationStarted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::ManipulationStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_ManipulationStarted, ManipulationStarted(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::ManipulationStarted(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_ManipulationStarted(token));
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::ManipulationUpdated(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_ManipulationUpdated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::ManipulationUpdated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_ManipulationUpdated, ManipulationUpdated(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::ManipulationUpdated(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_ManipulationUpdated(token));
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::ManipulationCompleted(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_ManipulationCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::ManipulationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_ManipulationCompleted, ManipulationCompleted(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::ManipulationCompleted(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_ManipulationCompleted(token));
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::ManipulationCanceled(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_ManipulationCanceled(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::ManipulationCanceled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_ManipulationCanceled, ManipulationCanceled(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::ManipulationCanceled(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_ManipulationCanceled(token));
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::NavigationStarted(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_NavigationStarted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::NavigationStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_NavigationStarted, NavigationStarted(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::NavigationStarted(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_NavigationStarted(token));
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::NavigationUpdated(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_NavigationUpdated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::NavigationUpdated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_NavigationUpdated, NavigationUpdated(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::NavigationUpdated(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_NavigationUpdated(token));
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::NavigationCompleted(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_NavigationCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::NavigationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_NavigationCompleted, NavigationCompleted(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::NavigationCompleted(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_NavigationCompleted(token));
}

template <typename D> event_token impl_ISpatialGestureRecognizer<D>::NavigationCanceled(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->add_NavigationCanceled(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialGestureRecognizer> impl_ISpatialGestureRecognizer<D>::NavigationCanceled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialGestureRecognizer>(this, &ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer::remove_NavigationCanceled, NavigationCanceled(handler));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::NavigationCanceled(event_token token) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->remove_NavigationCanceled(token));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::CaptureInteraction(const Windows::UI::Input::Spatial::SpatialInteraction & interaction) const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->abi_CaptureInteraction(get(interaction)));
}

template <typename D> void impl_ISpatialGestureRecognizer<D>::CancelPendingGestures() const
{
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->abi_CancelPendingGestures());
}

template <typename D> bool impl_ISpatialGestureRecognizer<D>::TrySetGestureSettings(Windows::UI::Input::Spatial::SpatialGestureSettings settings) const
{
    bool succeeded {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->abi_TrySetGestureSettings(settings, &succeeded));
    return succeeded;
}

template <typename D> Windows::UI::Input::Spatial::SpatialGestureSettings impl_ISpatialGestureRecognizer<D>::GestureSettings() const
{
    Windows::UI::Input::Spatial::SpatialGestureSettings value {};
    check_hresult(static_cast<const ISpatialGestureRecognizer &>(static_cast<const D &>(*this))->get_GestureSettings(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialGestureRecognizer impl_ISpatialGestureRecognizerFactory<D>::Create(Windows::UI::Input::Spatial::SpatialGestureSettings settings) const
{
    Windows::UI::Input::Spatial::SpatialGestureRecognizer value { nullptr };
    check_hresult(static_cast<const ISpatialGestureRecognizerFactory &>(static_cast<const D &>(*this))->abi_Create(settings, put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind impl_ISpatialInteractionDetectedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value {};
    check_hresult(static_cast<const ISpatialInteractionDetectedEventArgs &>(static_cast<const D &>(*this))->get_InteractionSourceKind(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose impl_ISpatialInteractionDetectedEventArgs<D>::TryGetPointerPose(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value { nullptr };
    check_hresult(static_cast<const ISpatialInteractionDetectedEventArgs &>(static_cast<const D &>(*this))->abi_TryGetPointerPose(get(coordinateSystem), put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteraction impl_ISpatialInteractionDetectedEventArgs<D>::Interaction() const
{
    Windows::UI::Input::Spatial::SpatialInteraction value { nullptr };
    check_hresult(static_cast<const ISpatialInteractionDetectedEventArgs &>(static_cast<const D &>(*this))->get_Interaction(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceState impl_ISpatialInteractionSourceEventArgs<D>::State() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceState value { nullptr };
    check_hresult(static_cast<const ISpatialInteractionSourceEventArgs &>(static_cast<const D &>(*this))->get_State(put(value)));
    return value;
}

template <typename D> event_token impl_ISpatialInteractionManager<D>::SourceDetected(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialInteractionManager &>(static_cast<const D &>(*this))->add_SourceDetected(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialInteractionManager> impl_ISpatialInteractionManager<D>::SourceDetected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialInteractionManager>(this, &ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager::remove_SourceDetected, SourceDetected(handler));
}

template <typename D> void impl_ISpatialInteractionManager<D>::SourceDetected(event_token token) const
{
    check_hresult(static_cast<const ISpatialInteractionManager &>(static_cast<const D &>(*this))->remove_SourceDetected(token));
}

template <typename D> event_token impl_ISpatialInteractionManager<D>::SourceLost(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialInteractionManager &>(static_cast<const D &>(*this))->add_SourceLost(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialInteractionManager> impl_ISpatialInteractionManager<D>::SourceLost(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialInteractionManager>(this, &ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager::remove_SourceLost, SourceLost(handler));
}

template <typename D> void impl_ISpatialInteractionManager<D>::SourceLost(event_token token) const
{
    check_hresult(static_cast<const ISpatialInteractionManager &>(static_cast<const D &>(*this))->remove_SourceLost(token));
}

template <typename D> event_token impl_ISpatialInteractionManager<D>::SourceUpdated(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialInteractionManager &>(static_cast<const D &>(*this))->add_SourceUpdated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialInteractionManager> impl_ISpatialInteractionManager<D>::SourceUpdated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialInteractionManager>(this, &ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager::remove_SourceUpdated, SourceUpdated(handler));
}

template <typename D> void impl_ISpatialInteractionManager<D>::SourceUpdated(event_token token) const
{
    check_hresult(static_cast<const ISpatialInteractionManager &>(static_cast<const D &>(*this))->remove_SourceUpdated(token));
}

template <typename D> event_token impl_ISpatialInteractionManager<D>::SourcePressed(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialInteractionManager &>(static_cast<const D &>(*this))->add_SourcePressed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialInteractionManager> impl_ISpatialInteractionManager<D>::SourcePressed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialInteractionManager>(this, &ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager::remove_SourcePressed, SourcePressed(handler));
}

template <typename D> void impl_ISpatialInteractionManager<D>::SourcePressed(event_token token) const
{
    check_hresult(static_cast<const ISpatialInteractionManager &>(static_cast<const D &>(*this))->remove_SourcePressed(token));
}

template <typename D> event_token impl_ISpatialInteractionManager<D>::SourceReleased(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialInteractionManager &>(static_cast<const D &>(*this))->add_SourceReleased(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialInteractionManager> impl_ISpatialInteractionManager<D>::SourceReleased(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialInteractionManager>(this, &ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager::remove_SourceReleased, SourceReleased(handler));
}

template <typename D> void impl_ISpatialInteractionManager<D>::SourceReleased(event_token token) const
{
    check_hresult(static_cast<const ISpatialInteractionManager &>(static_cast<const D &>(*this))->remove_SourceReleased(token));
}

template <typename D> event_token impl_ISpatialInteractionManager<D>::InteractionDetected(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISpatialInteractionManager &>(static_cast<const D &>(*this))->add_InteractionDetected(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISpatialInteractionManager> impl_ISpatialInteractionManager<D>::InteractionDetected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISpatialInteractionManager>(this, &ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager::remove_InteractionDetected, InteractionDetected(handler));
}

template <typename D> void impl_ISpatialInteractionManager<D>::InteractionDetected(event_token token) const
{
    check_hresult(static_cast<const ISpatialInteractionManager &>(static_cast<const D &>(*this))->remove_InteractionDetected(token));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Spatial::SpatialInteractionSourceState> impl_ISpatialInteractionManager<D>::GetDetectedSourcesAtTimestamp(const Windows::Perception::PerceptionTimestamp & timeStamp) const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Spatial::SpatialInteractionSourceState> value;
    check_hresult(static_cast<const ISpatialInteractionManager &>(static_cast<const D &>(*this))->abi_GetDetectedSourcesAtTimestamp(get(timeStamp), put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionManager impl_ISpatialInteractionManagerStatics<D>::GetForCurrentView() const
{
    Windows::UI::Input::Spatial::SpatialInteractionManager value { nullptr };
    check_hresult(static_cast<const ISpatialInteractionManagerStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(value)));
    return value;
}

inline SpatialGestureRecognizer::SpatialGestureRecognizer(Windows::UI::Input::Spatial::SpatialGestureSettings settings) :
    SpatialGestureRecognizer(get_activation_factory<SpatialGestureRecognizer, ISpatialGestureRecognizerFactory>().Create(settings))
{}

inline Windows::UI::Input::Spatial::SpatialInteractionManager SpatialInteractionManager::GetForCurrentView()
{
    return get_activation_factory<SpatialInteractionManager, ISpatialInteractionManagerStatics>().GetForCurrentView();
}

inline Windows::UI::Input::Spatial::SpatialPointerPose SpatialPointerPose::TryGetAtTimestamp(const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem, const Windows::Perception::PerceptionTimestamp & timestamp)
{
    return get_activation_factory<SpatialPointerPose, ISpatialPointerPoseStatics>().TryGetAtTimestamp(coordinateSystem, timestamp);
}

}

}
