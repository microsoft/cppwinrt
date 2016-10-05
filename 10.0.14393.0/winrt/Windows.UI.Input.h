// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Devices.Input.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.UI.Input.3.h"
#include "Windows.UI.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Input::ICrossSlidingEventArgs> : produce_base<D, Windows::UI::Input::ICrossSlidingEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CrossSlidingState(Windows::UI::Input::CrossSlidingState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CrossSlidingState());
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
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DraggingState(Windows::UI::Input::DraggingState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DraggingState());
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
    HRESULT __stdcall add_Starting(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Starting(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Starting(event_token token) noexcept override
    {
        try
        {
            this->shim().Starting(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Completed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token token) noexcept override
    {
        try
        {
            this->shim().Completed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Canceled(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Canceled(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Canceled(event_token token) noexcept override
    {
        try
        {
            this->shim().Canceled(token);
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
    HRESULT __stdcall get_Kind(Windows::UI::Input::EdgeGestureKind * value) noexcept override
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
struct produce<D, Windows::UI::Input::IEdgeGestureStatics> : produce_base<D, Windows::UI::Input::IEdgeGestureStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::UI::Input::IEdgeGesture> current) noexcept override
    {
        try
        {
            *current = detach(this->shim().GetForCurrentView());
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
    HRESULT __stdcall get_GestureSettings(Windows::UI::Input::GestureSettings * value) noexcept override
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

    HRESULT __stdcall put_GestureSettings(Windows::UI::Input::GestureSettings value) noexcept override
    {
        try
        {
            this->shim().GestureSettings(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInertial(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInertial());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsActive(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowGestureFeedback(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShowGestureFeedback());
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
            this->shim().ShowGestureFeedback(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PivotCenter(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PivotCenter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PivotCenter(abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            this->shim().PivotCenter(*reinterpret_cast<const Windows::Foundation::Point *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PivotRadius(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PivotRadius());
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
            this->shim().PivotRadius(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InertiaTranslationDeceleration(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InertiaTranslationDeceleration());
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
            this->shim().InertiaTranslationDeceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InertiaRotationDeceleration(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InertiaRotationDeceleration());
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
            this->shim().InertiaRotationDeceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InertiaExpansionDeceleration(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InertiaExpansionDeceleration());
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
            this->shim().InertiaExpansionDeceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InertiaTranslationDisplacement(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InertiaTranslationDisplacement());
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
            this->shim().InertiaTranslationDisplacement(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InertiaRotationAngle(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InertiaRotationAngle());
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
            this->shim().InertiaRotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InertiaExpansion(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InertiaExpansion());
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
            this->shim().InertiaExpansion(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationExact(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ManipulationExact());
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
            this->shim().ManipulationExact(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CrossSlideThresholds(abi_arg_out<Windows::UI::Input::CrossSlideThresholds> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CrossSlideThresholds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CrossSlideThresholds(abi_arg_in<Windows::UI::Input::CrossSlideThresholds> value) noexcept override
    {
        try
        {
            this->shim().CrossSlideThresholds(*reinterpret_cast<const Windows::UI::Input::CrossSlideThresholds *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CrossSlideHorizontally(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CrossSlideHorizontally());
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
            this->shim().CrossSlideHorizontally(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CrossSlideExact(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CrossSlideExact());
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
            this->shim().CrossSlideExact(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoProcessInertia(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoProcessInertia());
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
            this->shim().AutoProcessInertia(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MouseWheelParameters(abi_arg_out<Windows::UI::Input::IMouseWheelParameters> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MouseWheelParameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CanBeDoubleTap(abi_arg_in<Windows::UI::Input::IPointerPoint> value, bool * canBeDoubleTap) noexcept override
    {
        try
        {
            *canBeDoubleTap = detach(this->shim().CanBeDoubleTap(*reinterpret_cast<const Windows::UI::Input::PointerPoint *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProcessDownEvent(abi_arg_in<Windows::UI::Input::IPointerPoint> value) noexcept override
    {
        try
        {
            this->shim().ProcessDownEvent(*reinterpret_cast<const Windows::UI::Input::PointerPoint *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProcessMoveEvents(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint>> value) noexcept override
    {
        try
        {
            this->shim().ProcessMoveEvents(*reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProcessUpEvent(abi_arg_in<Windows::UI::Input::IPointerPoint> value) noexcept override
    {
        try
        {
            this->shim().ProcessUpEvent(*reinterpret_cast<const Windows::UI::Input::PointerPoint *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProcessMouseWheelEvent(abi_arg_in<Windows::UI::Input::IPointerPoint> value, bool isShiftKeyDown, bool isControlKeyDown) noexcept override
    {
        try
        {
            this->shim().ProcessMouseWheelEvent(*reinterpret_cast<const Windows::UI::Input::PointerPoint *>(&value), isShiftKeyDown, isControlKeyDown);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProcessInertia() noexcept override
    {
        try
        {
            this->shim().ProcessInertia();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CompleteGesture() noexcept override
    {
        try
        {
            this->shim().CompleteGesture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Tapped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(this->shim().Tapped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Tapped(event_token cookie) noexcept override
    {
        try
        {
            this->shim().Tapped(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RightTapped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(this->shim().RightTapped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RightTapped(event_token cookie) noexcept override
    {
        try
        {
            this->shim().RightTapped(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Holding(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(this->shim().Holding(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Holding(event_token cookie) noexcept override
    {
        try
        {
            this->shim().Holding(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Dragging(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(this->shim().Dragging(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Dragging(event_token cookie) noexcept override
    {
        try
        {
            this->shim().Dragging(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationStarted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(this->shim().ManipulationStarted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationStarted(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ManipulationStarted(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationUpdated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(this->shim().ManipulationUpdated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationUpdated(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ManipulationUpdated(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationInertiaStarting(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(this->shim().ManipulationInertiaStarting(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationInertiaStarting(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ManipulationInertiaStarting(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(this->shim().ManipulationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationCompleted(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ManipulationCompleted(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CrossSliding(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(this->shim().CrossSliding(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CrossSliding(event_token cookie) noexcept override
    {
        try
        {
            this->shim().CrossSliding(cookie);
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
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HoldingState(Windows::UI::Input::HoldingState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HoldingState());
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
    HRESULT __stdcall get_IsInterceptionEnabledWhenInForeground(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInterceptionEnabledWhenInForeground());
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
            this->shim().IsInterceptionEnabledWhenInForeground(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyDown(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().KeyDown(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyDown(event_token token) noexcept override
    {
        try
        {
            this->shim().KeyDown(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyUp(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().KeyUp(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyUp(event_token token) noexcept override
    {
        try
        {
            this->shim().KeyUp(token);
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
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::UI::Input::IKeyboardDeliveryInterceptor> keyboardDeliverySettings) noexcept override
    {
        try
        {
            *keyboardDeliverySettings = detach(this->shim().GetForCurrentView());
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
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(abi_arg_out<Windows::UI::Input::ManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Velocities(abi_arg_out<Windows::UI::Input::ManipulationVelocities> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Velocities());
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
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delta(abi_arg_out<Windows::UI::Input::ManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Delta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(abi_arg_out<Windows::UI::Input::ManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Velocities(abi_arg_out<Windows::UI::Input::ManipulationVelocities> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Velocities());
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
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(abi_arg_out<Windows::UI::Input::ManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cumulative());
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
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delta(abi_arg_out<Windows::UI::Input::ManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Delta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(abi_arg_out<Windows::UI::Input::ManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Velocities(abi_arg_out<Windows::UI::Input::ManipulationVelocities> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Velocities());
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
    HRESULT __stdcall get_CharTranslation(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CharTranslation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CharTranslation(abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            this->shim().CharTranslation(*reinterpret_cast<const Windows::Foundation::Point *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeltaScale(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeltaScale());
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
            this->shim().DeltaScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeltaRotationAngle(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeltaRotationAngle());
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
            this->shim().DeltaRotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageTranslation(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PageTranslation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PageTranslation(abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            this->shim().PageTranslation(*reinterpret_cast<const Windows::Foundation::Point *>(&value));
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
    HRESULT __stdcall get_PointerDevice(abi_arg_out<Windows::Devices::Input::IPointerDevice> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDevice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawPosition(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RawPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInContact(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInContact());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::UI::Input::IPointerPointProperties> value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::UI::Input::IPointerPointProperties> : produce_base<D, Windows::UI::Input::IPointerPointProperties>
{
    HRESULT __stdcall get_Pressure(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInverted(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInverted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEraser(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEraser());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XTilt(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().XTilt());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YTilt(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().YTilt());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Twist(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Twist());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactRect(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContactRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactRectRaw(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContactRectRaw());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TouchConfidence(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TouchConfidence());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsLeftButtonPressed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsLeftButtonPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRightButtonPressed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRightButtonPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMiddleButtonPressed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsMiddleButtonPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MouseWheelDelta(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MouseWheelDelta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHorizontalMouseWheel(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsHorizontalMouseWheel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPrimary(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPrimary());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInRange(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInRange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBarrelButtonPressed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsBarrelButtonPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsXButton1Pressed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsXButton1Pressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsXButton2Pressed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsXButton2Pressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerUpdateKind(Windows::UI::Input::PointerUpdateKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerUpdateKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_HasUsage(uint32_t usagePage, uint32_t usageId, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasUsage(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUsageValue(uint32_t usagePage, uint32_t usageId, int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetUsageValue(usagePage, usageId));
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
    HRESULT __stdcall get_ZDistance(abi_arg_out<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZDistance());
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
    HRESULT __stdcall abi_GetCurrentPoint(uint32_t pointerId, abi_arg_out<Windows::UI::Input::IPointerPoint> pointerPoint) noexcept override
    {
        try
        {
            *pointerPoint = detach(this->shim().GetCurrentPoint(pointerId));
            return S_OK;
        }
        catch (...)
        {
            *pointerPoint = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIntermediatePoints(uint32_t pointerId, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint>> pointerPoints) noexcept override
    {
        try
        {
            *pointerPoints = detach(this->shim().GetIntermediatePoints(pointerId));
            return S_OK;
        }
        catch (...)
        {
            *pointerPoints = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentPointTransformed(uint32_t pointerId, abi_arg_in<Windows::UI::Input::IPointerPointTransform> transform, abi_arg_out<Windows::UI::Input::IPointerPoint> pointerPoint) noexcept override
    {
        try
        {
            *pointerPoint = detach(this->shim().GetCurrentPoint(pointerId, *reinterpret_cast<const Windows::UI::Input::IPointerPointTransform *>(&transform)));
            return S_OK;
        }
        catch (...)
        {
            *pointerPoint = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIntermediatePointsTransformed(uint32_t pointerId, abi_arg_in<Windows::UI::Input::IPointerPointTransform> transform, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint>> pointerPoints) noexcept override
    {
        try
        {
            *pointerPoints = detach(this->shim().GetIntermediatePoints(pointerId, *reinterpret_cast<const Windows::UI::Input::IPointerPointTransform *>(&transform)));
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
    HRESULT __stdcall get_Inverse(abi_arg_out<Windows::UI::Input::IPointerPointTransform> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Inverse());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryTransform(abi_arg_in<Windows::Foundation::Point> inPoint, abi_arg_out<Windows::Foundation::Point> outPoint, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TryTransform(*reinterpret_cast<const Windows::Foundation::Point *>(&inPoint), *outPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TransformBounds(abi_arg_in<Windows::Foundation::Rect> rect, abi_arg_out<Windows::Foundation::Rect> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TransformBounds(*reinterpret_cast<const Windows::Foundation::Rect *>(&rect)));
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
            this->shim().IsContactFeedbackEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsContactFeedbackEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsContactFeedbackEnabled());
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
            this->shim().IsBarrelButtonFeedbackEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBarrelButtonFeedbackEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsBarrelButtonFeedbackEnabled());
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
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::UI::Input::IPointerVisualizationSettings> visualizationSettings) noexcept override
    {
        try
        {
            *visualizationSettings = detach(this->shim().GetForCurrentView());
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
    HRESULT __stdcall get_Menu(abi_arg_out<Windows::UI::Input::IRadialControllerMenu> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Menu());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationResolutionInDegrees(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationResolutionInDegrees());
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
            this->shim().RotationResolutionInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UseAutomaticHapticFeedback(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UseAutomaticHapticFeedback());
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
            this->shim().UseAutomaticHapticFeedback(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ScreenContactStarted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().ScreenContactStarted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ScreenContactStarted(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ScreenContactStarted(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ScreenContactEnded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().ScreenContactEnded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ScreenContactEnded(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ScreenContactEnded(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ScreenContactContinued(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().ScreenContactContinued(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ScreenContactContinued(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ScreenContactContinued(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ControlLost(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().ControlLost(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ControlLost(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ControlLost(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RotationChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RotationChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RotationChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().RotationChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ButtonClicked(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ButtonClicked(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ButtonClicked(event_token token) noexcept override
    {
        try
        {
            this->shim().ButtonClicked(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ControlAcquired(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().ControlAcquired(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ControlAcquired(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ControlAcquired(cookie);
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
    HRESULT __stdcall get_Contact(abi_arg_out<Windows::UI::Input::IRadialControllerScreenContact> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contact());
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
    HRESULT __stdcall abi_SetDefaultMenuItems(abi_arg_in<Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Input::RadialControllerSystemMenuItemKind>> buttons) noexcept override
    {
        try
        {
            this->shim().SetDefaultMenuItems(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Input::RadialControllerSystemMenuItemKind> *>(&buttons));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResetToDefaultMenuItems() noexcept override
    {
        try
        {
            this->shim().ResetToDefaultMenuItems();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySelectDefaultMenuItem(Windows::UI::Input::RadialControllerSystemMenuItemKind type, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TrySelectDefaultMenuItem(type));
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
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::UI::Input::IRadialControllerConfiguration> configuration) noexcept override
    {
        try
        {
            *configuration = detach(this->shim().GetForCurrentView());
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
    HRESULT __stdcall get_Contact(abi_arg_out<Windows::UI::Input::IRadialControllerScreenContact> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contact());
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
    HRESULT __stdcall get_Items(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Input::RadialControllerMenuItem>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEnabled());
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
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSelectedMenuItem(abi_arg_out<Windows::UI::Input::IRadialControllerMenuItem> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetSelectedMenuItem());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SelectMenuItem(abi_arg_in<Windows::UI::Input::IRadialControllerMenuItem> menuItem) noexcept override
    {
        try
        {
            this->shim().SelectMenuItem(*reinterpret_cast<const Windows::UI::Input::RadialControllerMenuItem *>(&menuItem));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySelectPreviouslySelectedMenuItem(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TrySelectPreviouslySelectedMenuItem());
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
    HRESULT __stdcall get_DisplayText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().Tag(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Invoked(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Invoked(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Invoked(event_token token) noexcept override
    {
        try
        {
            this->shim().Invoked(token);
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
    HRESULT __stdcall abi_CreateFromIcon(abi_arg_in<hstring> displayText, abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> icon, abi_arg_out<Windows::UI::Input::IRadialControllerMenuItem> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateFromIcon(*reinterpret_cast<const hstring *>(&displayText), *reinterpret_cast<const Windows::Storage::Streams::RandomAccessStreamReference *>(&icon)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromKnownIcon(abi_arg_in<hstring> displayText, Windows::UI::Input::RadialControllerMenuKnownIcon value, abi_arg_out<Windows::UI::Input::IRadialControllerMenuItem> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateFromKnownIcon(*reinterpret_cast<const hstring *>(&displayText), value));
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
    HRESULT __stdcall get_RotationDeltaInDegrees(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationDeltaInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(abi_arg_out<Windows::UI::Input::IRadialControllerScreenContact> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contact());
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
    HRESULT __stdcall get_Bounds(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
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
    HRESULT __stdcall get_Contact(abi_arg_out<Windows::UI::Input::IRadialControllerScreenContact> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contact());
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
    HRESULT __stdcall get_Contact(abi_arg_out<Windows::UI::Input::IRadialControllerScreenContact> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contact());
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
    HRESULT __stdcall abi_IsSupported(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateForCurrentView(abi_arg_out<Windows::UI::Input::IRadialController> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateForCurrentView());
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
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
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
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
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

namespace Windows::UI::Input {

template <typename D> Windows::UI::Input::EdgeGestureKind impl_IEdgeGestureEventArgs<D>::Kind() const
{
    Windows::UI::Input::EdgeGestureKind value {};
    check_hresult(static_cast<const IEdgeGestureEventArgs &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> Windows::UI::Input::EdgeGesture impl_IEdgeGestureStatics<D>::GetForCurrentView() const
{
    Windows::UI::Input::EdgeGesture current { nullptr };
    check_hresult(static_cast<const IEdgeGestureStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(current)));
    return current;
}

template <typename D> event_token impl_IEdgeGesture<D>::Starting(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IEdgeGesture &>(static_cast<const D &>(*this))->add_Starting(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEdgeGesture> impl_IEdgeGesture<D>::Starting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEdgeGesture>(this, &ABI::Windows::UI::Input::IEdgeGesture::remove_Starting, Starting(handler));
}

template <typename D> void impl_IEdgeGesture<D>::Starting(event_token token) const
{
    check_hresult(static_cast<const IEdgeGesture &>(static_cast<const D &>(*this))->remove_Starting(token));
}

template <typename D> event_token impl_IEdgeGesture<D>::Completed(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IEdgeGesture &>(static_cast<const D &>(*this))->add_Completed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEdgeGesture> impl_IEdgeGesture<D>::Completed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEdgeGesture>(this, &ABI::Windows::UI::Input::IEdgeGesture::remove_Completed, Completed(handler));
}

template <typename D> void impl_IEdgeGesture<D>::Completed(event_token token) const
{
    check_hresult(static_cast<const IEdgeGesture &>(static_cast<const D &>(*this))->remove_Completed(token));
}

template <typename D> event_token impl_IEdgeGesture<D>::Canceled(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IEdgeGesture &>(static_cast<const D &>(*this))->add_Canceled(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEdgeGesture> impl_IEdgeGesture<D>::Canceled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEdgeGesture>(this, &ABI::Windows::UI::Input::IEdgeGesture::remove_Canceled, Canceled(handler));
}

template <typename D> void impl_IEdgeGesture<D>::Canceled(event_token token) const
{
    check_hresult(static_cast<const IEdgeGesture &>(static_cast<const D &>(*this))->remove_Canceled(token));
}

template <typename D> bool impl_IKeyboardDeliveryInterceptor<D>::IsInterceptionEnabledWhenInForeground() const
{
    bool value {};
    check_hresult(static_cast<const IKeyboardDeliveryInterceptor &>(static_cast<const D &>(*this))->get_IsInterceptionEnabledWhenInForeground(&value));
    return value;
}

template <typename D> void impl_IKeyboardDeliveryInterceptor<D>::IsInterceptionEnabledWhenInForeground(bool value) const
{
    check_hresult(static_cast<const IKeyboardDeliveryInterceptor &>(static_cast<const D &>(*this))->put_IsInterceptionEnabledWhenInForeground(value));
}

template <typename D> event_token impl_IKeyboardDeliveryInterceptor<D>::KeyDown(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IKeyboardDeliveryInterceptor &>(static_cast<const D &>(*this))->add_KeyDown(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IKeyboardDeliveryInterceptor> impl_IKeyboardDeliveryInterceptor<D>::KeyDown(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IKeyboardDeliveryInterceptor>(this, &ABI::Windows::UI::Input::IKeyboardDeliveryInterceptor::remove_KeyDown, KeyDown(handler));
}

template <typename D> void impl_IKeyboardDeliveryInterceptor<D>::KeyDown(event_token token) const
{
    check_hresult(static_cast<const IKeyboardDeliveryInterceptor &>(static_cast<const D &>(*this))->remove_KeyDown(token));
}

template <typename D> event_token impl_IKeyboardDeliveryInterceptor<D>::KeyUp(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IKeyboardDeliveryInterceptor &>(static_cast<const D &>(*this))->add_KeyUp(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IKeyboardDeliveryInterceptor> impl_IKeyboardDeliveryInterceptor<D>::KeyUp(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IKeyboardDeliveryInterceptor>(this, &ABI::Windows::UI::Input::IKeyboardDeliveryInterceptor::remove_KeyUp, KeyUp(handler));
}

template <typename D> void impl_IKeyboardDeliveryInterceptor<D>::KeyUp(event_token token) const
{
    check_hresult(static_cast<const IKeyboardDeliveryInterceptor &>(static_cast<const D &>(*this))->remove_KeyUp(token));
}

template <typename D> Windows::UI::Input::KeyboardDeliveryInterceptor impl_IKeyboardDeliveryInterceptorStatics<D>::GetForCurrentView() const
{
    Windows::UI::Input::KeyboardDeliveryInterceptor keyboardDeliverySettings { nullptr };
    check_hresult(static_cast<const IKeyboardDeliveryInterceptorStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(keyboardDeliverySettings)));
    return keyboardDeliverySettings;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_ITappedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const ITappedEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_ITappedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const ITappedEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> uint32_t impl_ITappedEventArgs<D>::TapCount() const
{
    uint32_t value {};
    check_hresult(static_cast<const ITappedEventArgs &>(static_cast<const D &>(*this))->get_TapCount(&value));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IRightTappedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IRightTappedEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IRightTappedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IRightTappedEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IHoldingEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IHoldingEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IHoldingEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IHoldingEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::HoldingState impl_IHoldingEventArgs<D>::HoldingState() const
{
    Windows::UI::Input::HoldingState value {};
    check_hresult(static_cast<const IHoldingEventArgs &>(static_cast<const D &>(*this))->get_HoldingState(&value));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IDraggingEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IDraggingEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IDraggingEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IDraggingEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::DraggingState impl_IDraggingEventArgs<D>::DraggingState() const
{
    Windows::UI::Input::DraggingState value {};
    check_hresult(static_cast<const IDraggingEventArgs &>(static_cast<const D &>(*this))->get_DraggingState(&value));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IManipulationStartedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IManipulationStartedEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IManipulationStartedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IManipulationStartedEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta impl_IManipulationStartedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value {};
    check_hresult(static_cast<const IManipulationStartedEventArgs &>(static_cast<const D &>(*this))->get_Cumulative(put(value)));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IManipulationUpdatedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IManipulationUpdatedEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IManipulationUpdatedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IManipulationUpdatedEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta impl_IManipulationUpdatedEventArgs<D>::Delta() const
{
    Windows::UI::Input::ManipulationDelta value {};
    check_hresult(static_cast<const IManipulationUpdatedEventArgs &>(static_cast<const D &>(*this))->get_Delta(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta impl_IManipulationUpdatedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value {};
    check_hresult(static_cast<const IManipulationUpdatedEventArgs &>(static_cast<const D &>(*this))->get_Cumulative(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationVelocities impl_IManipulationUpdatedEventArgs<D>::Velocities() const
{
    Windows::UI::Input::ManipulationVelocities value {};
    check_hresult(static_cast<const IManipulationUpdatedEventArgs &>(static_cast<const D &>(*this))->get_Velocities(put(value)));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IManipulationInertiaStartingEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IManipulationInertiaStartingEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IManipulationInertiaStartingEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IManipulationInertiaStartingEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta impl_IManipulationInertiaStartingEventArgs<D>::Delta() const
{
    Windows::UI::Input::ManipulationDelta value {};
    check_hresult(static_cast<const IManipulationInertiaStartingEventArgs &>(static_cast<const D &>(*this))->get_Delta(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta impl_IManipulationInertiaStartingEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value {};
    check_hresult(static_cast<const IManipulationInertiaStartingEventArgs &>(static_cast<const D &>(*this))->get_Cumulative(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationVelocities impl_IManipulationInertiaStartingEventArgs<D>::Velocities() const
{
    Windows::UI::Input::ManipulationVelocities value {};
    check_hresult(static_cast<const IManipulationInertiaStartingEventArgs &>(static_cast<const D &>(*this))->get_Velocities(put(value)));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IManipulationCompletedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IManipulationCompletedEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IManipulationCompletedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IManipulationCompletedEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta impl_IManipulationCompletedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value {};
    check_hresult(static_cast<const IManipulationCompletedEventArgs &>(static_cast<const D &>(*this))->get_Cumulative(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationVelocities impl_IManipulationCompletedEventArgs<D>::Velocities() const
{
    Windows::UI::Input::ManipulationVelocities value {};
    check_hresult(static_cast<const IManipulationCompletedEventArgs &>(static_cast<const D &>(*this))->get_Velocities(put(value)));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_ICrossSlidingEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const ICrossSlidingEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_ICrossSlidingEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const ICrossSlidingEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::CrossSlidingState impl_ICrossSlidingEventArgs<D>::CrossSlidingState() const
{
    Windows::UI::Input::CrossSlidingState value {};
    check_hresult(static_cast<const ICrossSlidingEventArgs &>(static_cast<const D &>(*this))->get_CrossSlidingState(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IMouseWheelParameters<D>::CharTranslation() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IMouseWheelParameters &>(static_cast<const D &>(*this))->get_CharTranslation(put(value)));
    return value;
}

template <typename D> void impl_IMouseWheelParameters<D>::CharTranslation(const Windows::Foundation::Point & value) const
{
    check_hresult(static_cast<const IMouseWheelParameters &>(static_cast<const D &>(*this))->put_CharTranslation(get(value)));
}

template <typename D> float impl_IMouseWheelParameters<D>::DeltaScale() const
{
    float value {};
    check_hresult(static_cast<const IMouseWheelParameters &>(static_cast<const D &>(*this))->get_DeltaScale(&value));
    return value;
}

template <typename D> void impl_IMouseWheelParameters<D>::DeltaScale(float value) const
{
    check_hresult(static_cast<const IMouseWheelParameters &>(static_cast<const D &>(*this))->put_DeltaScale(value));
}

template <typename D> float impl_IMouseWheelParameters<D>::DeltaRotationAngle() const
{
    float value {};
    check_hresult(static_cast<const IMouseWheelParameters &>(static_cast<const D &>(*this))->get_DeltaRotationAngle(&value));
    return value;
}

template <typename D> void impl_IMouseWheelParameters<D>::DeltaRotationAngle(float value) const
{
    check_hresult(static_cast<const IMouseWheelParameters &>(static_cast<const D &>(*this))->put_DeltaRotationAngle(value));
}

template <typename D> Windows::Foundation::Point impl_IMouseWheelParameters<D>::PageTranslation() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IMouseWheelParameters &>(static_cast<const D &>(*this))->get_PageTranslation(put(value)));
    return value;
}

template <typename D> void impl_IMouseWheelParameters<D>::PageTranslation(const Windows::Foundation::Point & value) const
{
    check_hresult(static_cast<const IMouseWheelParameters &>(static_cast<const D &>(*this))->put_PageTranslation(get(value)));
}

template <typename D> Windows::UI::Input::GestureSettings impl_IGestureRecognizer<D>::GestureSettings() const
{
    Windows::UI::Input::GestureSettings value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_GestureSettings(&value));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::GestureSettings(Windows::UI::Input::GestureSettings value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_GestureSettings(value));
}

template <typename D> bool impl_IGestureRecognizer<D>::IsInertial() const
{
    bool value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_IsInertial(&value));
    return value;
}

template <typename D> bool impl_IGestureRecognizer<D>::IsActive() const
{
    bool value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_IsActive(&value));
    return value;
}

template <typename D> bool impl_IGestureRecognizer<D>::ShowGestureFeedback() const
{
    bool value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_ShowGestureFeedback(&value));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::ShowGestureFeedback(bool value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_ShowGestureFeedback(value));
}

template <typename D> Windows::Foundation::Point impl_IGestureRecognizer<D>::PivotCenter() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_PivotCenter(put(value)));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::PivotCenter(const Windows::Foundation::Point & value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_PivotCenter(get(value)));
}

template <typename D> float impl_IGestureRecognizer<D>::PivotRadius() const
{
    float value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_PivotRadius(&value));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::PivotRadius(float value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_PivotRadius(value));
}

template <typename D> float impl_IGestureRecognizer<D>::InertiaTranslationDeceleration() const
{
    float value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_InertiaTranslationDeceleration(&value));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::InertiaTranslationDeceleration(float value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_InertiaTranslationDeceleration(value));
}

template <typename D> float impl_IGestureRecognizer<D>::InertiaRotationDeceleration() const
{
    float value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_InertiaRotationDeceleration(&value));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::InertiaRotationDeceleration(float value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_InertiaRotationDeceleration(value));
}

template <typename D> float impl_IGestureRecognizer<D>::InertiaExpansionDeceleration() const
{
    float value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_InertiaExpansionDeceleration(&value));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::InertiaExpansionDeceleration(float value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_InertiaExpansionDeceleration(value));
}

template <typename D> float impl_IGestureRecognizer<D>::InertiaTranslationDisplacement() const
{
    float value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_InertiaTranslationDisplacement(&value));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::InertiaTranslationDisplacement(float value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_InertiaTranslationDisplacement(value));
}

template <typename D> float impl_IGestureRecognizer<D>::InertiaRotationAngle() const
{
    float value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_InertiaRotationAngle(&value));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::InertiaRotationAngle(float value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_InertiaRotationAngle(value));
}

template <typename D> float impl_IGestureRecognizer<D>::InertiaExpansion() const
{
    float value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_InertiaExpansion(&value));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::InertiaExpansion(float value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_InertiaExpansion(value));
}

template <typename D> bool impl_IGestureRecognizer<D>::ManipulationExact() const
{
    bool value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_ManipulationExact(&value));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::ManipulationExact(bool value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_ManipulationExact(value));
}

template <typename D> Windows::UI::Input::CrossSlideThresholds impl_IGestureRecognizer<D>::CrossSlideThresholds() const
{
    Windows::UI::Input::CrossSlideThresholds value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_CrossSlideThresholds(put(value)));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::CrossSlideThresholds(const Windows::UI::Input::CrossSlideThresholds & value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_CrossSlideThresholds(get(value)));
}

template <typename D> bool impl_IGestureRecognizer<D>::CrossSlideHorizontally() const
{
    bool value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_CrossSlideHorizontally(&value));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::CrossSlideHorizontally(bool value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_CrossSlideHorizontally(value));
}

template <typename D> bool impl_IGestureRecognizer<D>::CrossSlideExact() const
{
    bool value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_CrossSlideExact(&value));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::CrossSlideExact(bool value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_CrossSlideExact(value));
}

template <typename D> bool impl_IGestureRecognizer<D>::AutoProcessInertia() const
{
    bool value {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_AutoProcessInertia(&value));
    return value;
}

template <typename D> void impl_IGestureRecognizer<D>::AutoProcessInertia(bool value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->put_AutoProcessInertia(value));
}

template <typename D> Windows::UI::Input::MouseWheelParameters impl_IGestureRecognizer<D>::MouseWheelParameters() const
{
    Windows::UI::Input::MouseWheelParameters value { nullptr };
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->get_MouseWheelParameters(put(value)));
    return value;
}

template <typename D> bool impl_IGestureRecognizer<D>::CanBeDoubleTap(const Windows::UI::Input::PointerPoint & value) const
{
    bool canBeDoubleTap {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->abi_CanBeDoubleTap(get(value), &canBeDoubleTap));
    return canBeDoubleTap;
}

template <typename D> void impl_IGestureRecognizer<D>::ProcessDownEvent(const Windows::UI::Input::PointerPoint & value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->abi_ProcessDownEvent(get(value)));
}

template <typename D> void impl_IGestureRecognizer<D>::ProcessMoveEvents(const Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> & value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->abi_ProcessMoveEvents(get(value)));
}

template <typename D> void impl_IGestureRecognizer<D>::ProcessUpEvent(const Windows::UI::Input::PointerPoint & value) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->abi_ProcessUpEvent(get(value)));
}

template <typename D> void impl_IGestureRecognizer<D>::ProcessMouseWheelEvent(const Windows::UI::Input::PointerPoint & value, bool isShiftKeyDown, bool isControlKeyDown) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->abi_ProcessMouseWheelEvent(get(value), isShiftKeyDown, isControlKeyDown));
}

template <typename D> void impl_IGestureRecognizer<D>::ProcessInertia() const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->abi_ProcessInertia());
}

template <typename D> void impl_IGestureRecognizer<D>::CompleteGesture() const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->abi_CompleteGesture());
}

template <typename D> event_token impl_IGestureRecognizer<D>::Tapped(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->add_Tapped(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<IGestureRecognizer> impl_IGestureRecognizer<D>::Tapped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGestureRecognizer>(this, &ABI::Windows::UI::Input::IGestureRecognizer::remove_Tapped, Tapped(handler));
}

template <typename D> void impl_IGestureRecognizer<D>::Tapped(event_token cookie) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->remove_Tapped(cookie));
}

template <typename D> event_token impl_IGestureRecognizer<D>::RightTapped(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->add_RightTapped(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<IGestureRecognizer> impl_IGestureRecognizer<D>::RightTapped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGestureRecognizer>(this, &ABI::Windows::UI::Input::IGestureRecognizer::remove_RightTapped, RightTapped(handler));
}

template <typename D> void impl_IGestureRecognizer<D>::RightTapped(event_token cookie) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->remove_RightTapped(cookie));
}

template <typename D> event_token impl_IGestureRecognizer<D>::Holding(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->add_Holding(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<IGestureRecognizer> impl_IGestureRecognizer<D>::Holding(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGestureRecognizer>(this, &ABI::Windows::UI::Input::IGestureRecognizer::remove_Holding, Holding(handler));
}

template <typename D> void impl_IGestureRecognizer<D>::Holding(event_token cookie) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->remove_Holding(cookie));
}

template <typename D> event_token impl_IGestureRecognizer<D>::Dragging(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->add_Dragging(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<IGestureRecognizer> impl_IGestureRecognizer<D>::Dragging(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGestureRecognizer>(this, &ABI::Windows::UI::Input::IGestureRecognizer::remove_Dragging, Dragging(handler));
}

template <typename D> void impl_IGestureRecognizer<D>::Dragging(event_token cookie) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->remove_Dragging(cookie));
}

template <typename D> event_token impl_IGestureRecognizer<D>::ManipulationStarted(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->add_ManipulationStarted(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<IGestureRecognizer> impl_IGestureRecognizer<D>::ManipulationStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGestureRecognizer>(this, &ABI::Windows::UI::Input::IGestureRecognizer::remove_ManipulationStarted, ManipulationStarted(handler));
}

template <typename D> void impl_IGestureRecognizer<D>::ManipulationStarted(event_token cookie) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->remove_ManipulationStarted(cookie));
}

template <typename D> event_token impl_IGestureRecognizer<D>::ManipulationUpdated(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->add_ManipulationUpdated(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<IGestureRecognizer> impl_IGestureRecognizer<D>::ManipulationUpdated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGestureRecognizer>(this, &ABI::Windows::UI::Input::IGestureRecognizer::remove_ManipulationUpdated, ManipulationUpdated(handler));
}

template <typename D> void impl_IGestureRecognizer<D>::ManipulationUpdated(event_token cookie) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->remove_ManipulationUpdated(cookie));
}

template <typename D> event_token impl_IGestureRecognizer<D>::ManipulationInertiaStarting(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->add_ManipulationInertiaStarting(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<IGestureRecognizer> impl_IGestureRecognizer<D>::ManipulationInertiaStarting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGestureRecognizer>(this, &ABI::Windows::UI::Input::IGestureRecognizer::remove_ManipulationInertiaStarting, ManipulationInertiaStarting(handler));
}

template <typename D> void impl_IGestureRecognizer<D>::ManipulationInertiaStarting(event_token cookie) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->remove_ManipulationInertiaStarting(cookie));
}

template <typename D> event_token impl_IGestureRecognizer<D>::ManipulationCompleted(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->add_ManipulationCompleted(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<IGestureRecognizer> impl_IGestureRecognizer<D>::ManipulationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGestureRecognizer>(this, &ABI::Windows::UI::Input::IGestureRecognizer::remove_ManipulationCompleted, ManipulationCompleted(handler));
}

template <typename D> void impl_IGestureRecognizer<D>::ManipulationCompleted(event_token cookie) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->remove_ManipulationCompleted(cookie));
}

template <typename D> event_token impl_IGestureRecognizer<D>::CrossSliding(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->add_CrossSliding(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<IGestureRecognizer> impl_IGestureRecognizer<D>::CrossSliding(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGestureRecognizer>(this, &ABI::Windows::UI::Input::IGestureRecognizer::remove_CrossSliding, CrossSliding(handler));
}

template <typename D> void impl_IGestureRecognizer<D>::CrossSliding(event_token cookie) const
{
    check_hresult(static_cast<const IGestureRecognizer &>(static_cast<const D &>(*this))->remove_CrossSliding(cookie));
}

template <typename D> Windows::UI::Input::PointerPoint impl_IPointerPointStatics<D>::GetCurrentPoint(uint32_t pointerId) const
{
    Windows::UI::Input::PointerPoint pointerPoint { nullptr };
    check_hresult(static_cast<const IPointerPointStatics &>(static_cast<const D &>(*this))->abi_GetCurrentPoint(pointerId, put(pointerPoint)));
    return pointerPoint;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> impl_IPointerPointStatics<D>::GetIntermediatePoints(uint32_t pointerId) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> pointerPoints;
    check_hresult(static_cast<const IPointerPointStatics &>(static_cast<const D &>(*this))->abi_GetIntermediatePoints(pointerId, put(pointerPoints)));
    return pointerPoints;
}

template <typename D> Windows::UI::Input::PointerPoint impl_IPointerPointStatics<D>::GetCurrentPoint(uint32_t pointerId, const Windows::UI::Input::IPointerPointTransform & transform) const
{
    Windows::UI::Input::PointerPoint pointerPoint { nullptr };
    check_hresult(static_cast<const IPointerPointStatics &>(static_cast<const D &>(*this))->abi_GetCurrentPointTransformed(pointerId, get(transform), put(pointerPoint)));
    return pointerPoint;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> impl_IPointerPointStatics<D>::GetIntermediatePoints(uint32_t pointerId, const Windows::UI::Input::IPointerPointTransform & transform) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> pointerPoints;
    check_hresult(static_cast<const IPointerPointStatics &>(static_cast<const D &>(*this))->abi_GetIntermediatePointsTransformed(pointerId, get(transform), put(pointerPoints)));
    return pointerPoints;
}

template <typename D> Windows::UI::Input::IPointerPointTransform impl_IPointerPointTransform<D>::Inverse() const
{
    Windows::UI::Input::IPointerPointTransform value;
    check_hresult(static_cast<const IPointerPointTransform &>(static_cast<const D &>(*this))->get_Inverse(put(value)));
    return value;
}

template <typename D> bool impl_IPointerPointTransform<D>::TryTransform(const Windows::Foundation::Point & inPoint, Windows::Foundation::Point & outPoint) const
{
    bool returnValue {};
    check_hresult(static_cast<const IPointerPointTransform &>(static_cast<const D &>(*this))->abi_TryTransform(get(inPoint), put(outPoint), &returnValue));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect impl_IPointerPointTransform<D>::TransformBounds(const Windows::Foundation::Rect & rect) const
{
    Windows::Foundation::Rect returnValue {};
    check_hresult(static_cast<const IPointerPointTransform &>(static_cast<const D &>(*this))->abi_TransformBounds(get(rect), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Devices::Input::PointerDevice impl_IPointerPoint<D>::PointerDevice() const
{
    Windows::Devices::Input::PointerDevice value { nullptr };
    check_hresult(static_cast<const IPointerPoint &>(static_cast<const D &>(*this))->get_PointerDevice(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IPointerPoint<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IPointerPoint &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IPointerPoint<D>::RawPosition() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IPointerPoint &>(static_cast<const D &>(*this))->get_RawPosition(put(value)));
    return value;
}

template <typename D> uint32_t impl_IPointerPoint<D>::PointerId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPointerPoint &>(static_cast<const D &>(*this))->get_PointerId(&value));
    return value;
}

template <typename D> uint32_t impl_IPointerPoint<D>::FrameId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPointerPoint &>(static_cast<const D &>(*this))->get_FrameId(&value));
    return value;
}

template <typename D> uint64_t impl_IPointerPoint<D>::Timestamp() const
{
    uint64_t value {};
    check_hresult(static_cast<const IPointerPoint &>(static_cast<const D &>(*this))->get_Timestamp(&value));
    return value;
}

template <typename D> bool impl_IPointerPoint<D>::IsInContact() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPoint &>(static_cast<const D &>(*this))->get_IsInContact(&value));
    return value;
}

template <typename D> Windows::UI::Input::PointerPointProperties impl_IPointerPoint<D>::Properties() const
{
    Windows::UI::Input::PointerPointProperties value { nullptr };
    check_hresult(static_cast<const IPointerPoint &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> float impl_IPointerPointProperties<D>::Pressure() const
{
    float value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_Pressure(&value));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::IsInverted() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_IsInverted(&value));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::IsEraser() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_IsEraser(&value));
    return value;
}

template <typename D> float impl_IPointerPointProperties<D>::Orientation() const
{
    float value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_Orientation(&value));
    return value;
}

template <typename D> float impl_IPointerPointProperties<D>::XTilt() const
{
    float value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_XTilt(&value));
    return value;
}

template <typename D> float impl_IPointerPointProperties<D>::YTilt() const
{
    float value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_YTilt(&value));
    return value;
}

template <typename D> float impl_IPointerPointProperties<D>::Twist() const
{
    float value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_Twist(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IPointerPointProperties<D>::ContactRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_ContactRect(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IPointerPointProperties<D>::ContactRectRaw() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_ContactRectRaw(put(value)));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::TouchConfidence() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_TouchConfidence(&value));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::IsLeftButtonPressed() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_IsLeftButtonPressed(&value));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::IsRightButtonPressed() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_IsRightButtonPressed(&value));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::IsMiddleButtonPressed() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_IsMiddleButtonPressed(&value));
    return value;
}

template <typename D> int32_t impl_IPointerPointProperties<D>::MouseWheelDelta() const
{
    int32_t value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_MouseWheelDelta(&value));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::IsHorizontalMouseWheel() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_IsHorizontalMouseWheel(&value));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::IsPrimary() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_IsPrimary(&value));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::IsInRange() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_IsInRange(&value));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::IsCanceled() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_IsCanceled(&value));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::IsBarrelButtonPressed() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_IsBarrelButtonPressed(&value));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::IsXButton1Pressed() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_IsXButton1Pressed(&value));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::IsXButton2Pressed() const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_IsXButton2Pressed(&value));
    return value;
}

template <typename D> Windows::UI::Input::PointerUpdateKind impl_IPointerPointProperties<D>::PointerUpdateKind() const
{
    Windows::UI::Input::PointerUpdateKind value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->get_PointerUpdateKind(&value));
    return value;
}

template <typename D> bool impl_IPointerPointProperties<D>::HasUsage(uint32_t usagePage, uint32_t usageId) const
{
    bool value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->abi_HasUsage(usagePage, usageId, &value));
    return value;
}

template <typename D> int32_t impl_IPointerPointProperties<D>::GetUsageValue(uint32_t usagePage, uint32_t usageId) const
{
    int32_t value {};
    check_hresult(static_cast<const IPointerPointProperties &>(static_cast<const D &>(*this))->abi_GetUsageValue(usagePage, usageId, &value));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> impl_IPointerPointProperties2<D>::ZDistance() const
{
    Windows::Foundation::IReference<float> value;
    check_hresult(static_cast<const IPointerPointProperties2 &>(static_cast<const D &>(*this))->get_ZDistance(put(value)));
    return value;
}

template <typename D> void impl_IPointerVisualizationSettings<D>::IsContactFeedbackEnabled(bool value) const
{
    check_hresult(static_cast<const IPointerVisualizationSettings &>(static_cast<const D &>(*this))->put_IsContactFeedbackEnabled(value));
}

template <typename D> bool impl_IPointerVisualizationSettings<D>::IsContactFeedbackEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IPointerVisualizationSettings &>(static_cast<const D &>(*this))->get_IsContactFeedbackEnabled(&value));
    return value;
}

template <typename D> void impl_IPointerVisualizationSettings<D>::IsBarrelButtonFeedbackEnabled(bool value) const
{
    check_hresult(static_cast<const IPointerVisualizationSettings &>(static_cast<const D &>(*this))->put_IsBarrelButtonFeedbackEnabled(value));
}

template <typename D> bool impl_IPointerVisualizationSettings<D>::IsBarrelButtonFeedbackEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IPointerVisualizationSettings &>(static_cast<const D &>(*this))->get_IsBarrelButtonFeedbackEnabled(&value));
    return value;
}

template <typename D> Windows::UI::Input::PointerVisualizationSettings impl_IPointerVisualizationSettingsStatics<D>::GetForCurrentView() const
{
    Windows::UI::Input::PointerVisualizationSettings visualizationSettings { nullptr };
    check_hresult(static_cast<const IPointerVisualizationSettingsStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(visualizationSettings)));
    return visualizationSettings;
}

template <typename D> Windows::Foundation::Rect impl_IRadialControllerScreenContact<D>::Bounds() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IRadialControllerScreenContact &>(static_cast<const D &>(*this))->get_Bounds(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IRadialControllerScreenContact<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IRadialControllerScreenContact &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> double impl_IRadialControllerRotationChangedEventArgs<D>::RotationDeltaInDegrees() const
{
    double value {};
    check_hresult(static_cast<const IRadialControllerRotationChangedEventArgs &>(static_cast<const D &>(*this))->get_RotationDeltaInDegrees(&value));
    return value;
}

template <typename D> Windows::UI::Input::RadialControllerScreenContact impl_IRadialControllerRotationChangedEventArgs<D>::Contact() const
{
    Windows::UI::Input::RadialControllerScreenContact value { nullptr };
    check_hresult(static_cast<const IRadialControllerRotationChangedEventArgs &>(static_cast<const D &>(*this))->get_Contact(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::RadialControllerScreenContact impl_IRadialControllerScreenContactStartedEventArgs<D>::Contact() const
{
    Windows::UI::Input::RadialControllerScreenContact value { nullptr };
    check_hresult(static_cast<const IRadialControllerScreenContactStartedEventArgs &>(static_cast<const D &>(*this))->get_Contact(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::RadialControllerScreenContact impl_IRadialControllerScreenContactContinuedEventArgs<D>::Contact() const
{
    Windows::UI::Input::RadialControllerScreenContact value { nullptr };
    check_hresult(static_cast<const IRadialControllerScreenContactContinuedEventArgs &>(static_cast<const D &>(*this))->get_Contact(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::RadialControllerScreenContact impl_IRadialControllerButtonClickedEventArgs<D>::Contact() const
{
    Windows::UI::Input::RadialControllerScreenContact value { nullptr };
    check_hresult(static_cast<const IRadialControllerButtonClickedEventArgs &>(static_cast<const D &>(*this))->get_Contact(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::RadialControllerScreenContact impl_IRadialControllerControlAcquiredEventArgs<D>::Contact() const
{
    Windows::UI::Input::RadialControllerScreenContact value { nullptr };
    check_hresult(static_cast<const IRadialControllerControlAcquiredEventArgs &>(static_cast<const D &>(*this))->get_Contact(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::RadialControllerMenu impl_IRadialController<D>::Menu() const
{
    Windows::UI::Input::RadialControllerMenu value { nullptr };
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->get_Menu(put(value)));
    return value;
}

template <typename D> double impl_IRadialController<D>::RotationResolutionInDegrees() const
{
    double value {};
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->get_RotationResolutionInDegrees(&value));
    return value;
}

template <typename D> void impl_IRadialController<D>::RotationResolutionInDegrees(double value) const
{
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->put_RotationResolutionInDegrees(value));
}

template <typename D> bool impl_IRadialController<D>::UseAutomaticHapticFeedback() const
{
    bool value {};
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->get_UseAutomaticHapticFeedback(&value));
    return value;
}

template <typename D> void impl_IRadialController<D>::UseAutomaticHapticFeedback(bool value) const
{
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->put_UseAutomaticHapticFeedback(value));
}

template <typename D> event_token impl_IRadialController<D>::ScreenContactStarted(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->add_ScreenContactStarted(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IRadialController> impl_IRadialController<D>::ScreenContactStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRadialController>(this, &ABI::Windows::UI::Input::IRadialController::remove_ScreenContactStarted, ScreenContactStarted(handler));
}

template <typename D> void impl_IRadialController<D>::ScreenContactStarted(event_token cookie) const
{
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->remove_ScreenContactStarted(cookie));
}

template <typename D> event_token impl_IRadialController<D>::ScreenContactEnded(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->add_ScreenContactEnded(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IRadialController> impl_IRadialController<D>::ScreenContactEnded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IRadialController>(this, &ABI::Windows::UI::Input::IRadialController::remove_ScreenContactEnded, ScreenContactEnded(handler));
}

template <typename D> void impl_IRadialController<D>::ScreenContactEnded(event_token cookie) const
{
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->remove_ScreenContactEnded(cookie));
}

template <typename D> event_token impl_IRadialController<D>::ScreenContactContinued(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->add_ScreenContactContinued(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IRadialController> impl_IRadialController<D>::ScreenContactContinued(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRadialController>(this, &ABI::Windows::UI::Input::IRadialController::remove_ScreenContactContinued, ScreenContactContinued(handler));
}

template <typename D> void impl_IRadialController<D>::ScreenContactContinued(event_token cookie) const
{
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->remove_ScreenContactContinued(cookie));
}

template <typename D> event_token impl_IRadialController<D>::ControlLost(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->add_ControlLost(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IRadialController> impl_IRadialController<D>::ControlLost(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IRadialController>(this, &ABI::Windows::UI::Input::IRadialController::remove_ControlLost, ControlLost(handler));
}

template <typename D> void impl_IRadialController<D>::ControlLost(event_token cookie) const
{
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->remove_ControlLost(cookie));
}

template <typename D> event_token impl_IRadialController<D>::RotationChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->add_RotationChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IRadialController> impl_IRadialController<D>::RotationChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRadialController>(this, &ABI::Windows::UI::Input::IRadialController::remove_RotationChanged, RotationChanged(handler));
}

template <typename D> void impl_IRadialController<D>::RotationChanged(event_token token) const
{
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->remove_RotationChanged(token));
}

template <typename D> event_token impl_IRadialController<D>::ButtonClicked(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->add_ButtonClicked(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IRadialController> impl_IRadialController<D>::ButtonClicked(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRadialController>(this, &ABI::Windows::UI::Input::IRadialController::remove_ButtonClicked, ButtonClicked(handler));
}

template <typename D> void impl_IRadialController<D>::ButtonClicked(event_token token) const
{
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->remove_ButtonClicked(token));
}

template <typename D> event_token impl_IRadialController<D>::ControlAcquired(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->add_ControlAcquired(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IRadialController> impl_IRadialController<D>::ControlAcquired(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRadialController>(this, &ABI::Windows::UI::Input::IRadialController::remove_ControlAcquired, ControlAcquired(handler));
}

template <typename D> void impl_IRadialController<D>::ControlAcquired(event_token cookie) const
{
    check_hresult(static_cast<const IRadialController &>(static_cast<const D &>(*this))->remove_ControlAcquired(cookie));
}

template <typename D> bool impl_IRadialControllerStatics<D>::IsSupported() const
{
    bool result {};
    check_hresult(static_cast<const IRadialControllerStatics &>(static_cast<const D &>(*this))->abi_IsSupported(&result));
    return result;
}

template <typename D> Windows::UI::Input::RadialController impl_IRadialControllerStatics<D>::CreateForCurrentView() const
{
    Windows::UI::Input::RadialController result { nullptr };
    check_hresult(static_cast<const IRadialControllerStatics &>(static_cast<const D &>(*this))->abi_CreateForCurrentView(put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Input::RadialControllerMenuItem> impl_IRadialControllerMenu<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::RadialControllerMenuItem> value;
    check_hresult(static_cast<const IRadialControllerMenu &>(static_cast<const D &>(*this))->get_Items(put(value)));
    return value;
}

template <typename D> bool impl_IRadialControllerMenu<D>::IsEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IRadialControllerMenu &>(static_cast<const D &>(*this))->get_IsEnabled(&value));
    return value;
}

template <typename D> void impl_IRadialControllerMenu<D>::IsEnabled(bool value) const
{
    check_hresult(static_cast<const IRadialControllerMenu &>(static_cast<const D &>(*this))->put_IsEnabled(value));
}

template <typename D> Windows::UI::Input::RadialControllerMenuItem impl_IRadialControllerMenu<D>::GetSelectedMenuItem() const
{
    Windows::UI::Input::RadialControllerMenuItem result { nullptr };
    check_hresult(static_cast<const IRadialControllerMenu &>(static_cast<const D &>(*this))->abi_GetSelectedMenuItem(put(result)));
    return result;
}

template <typename D> void impl_IRadialControllerMenu<D>::SelectMenuItem(const Windows::UI::Input::RadialControllerMenuItem & menuItem) const
{
    check_hresult(static_cast<const IRadialControllerMenu &>(static_cast<const D &>(*this))->abi_SelectMenuItem(get(menuItem)));
}

template <typename D> bool impl_IRadialControllerMenu<D>::TrySelectPreviouslySelectedMenuItem() const
{
    bool result {};
    check_hresult(static_cast<const IRadialControllerMenu &>(static_cast<const D &>(*this))->abi_TrySelectPreviouslySelectedMenuItem(&result));
    return result;
}

template <typename D> Windows::UI::Input::RadialControllerMenuItem impl_IRadialControllerMenuItemStatics<D>::CreateFromIcon(hstring_ref displayText, const Windows::Storage::Streams::RandomAccessStreamReference & icon) const
{
    Windows::UI::Input::RadialControllerMenuItem result { nullptr };
    check_hresult(static_cast<const IRadialControllerMenuItemStatics &>(static_cast<const D &>(*this))->abi_CreateFromIcon(get(displayText), get(icon), put(result)));
    return result;
}

template <typename D> Windows::UI::Input::RadialControllerMenuItem impl_IRadialControllerMenuItemStatics<D>::CreateFromKnownIcon(hstring_ref displayText, Windows::UI::Input::RadialControllerMenuKnownIcon value) const
{
    Windows::UI::Input::RadialControllerMenuItem result { nullptr };
    check_hresult(static_cast<const IRadialControllerMenuItemStatics &>(static_cast<const D &>(*this))->abi_CreateFromKnownIcon(get(displayText), value, put(result)));
    return result;
}

template <typename D> hstring impl_IRadialControllerMenuItem<D>::DisplayText() const
{
    hstring value;
    check_hresult(static_cast<const IRadialControllerMenuItem &>(static_cast<const D &>(*this))->get_DisplayText(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IRadialControllerMenuItem<D>::Tag() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IRadialControllerMenuItem &>(static_cast<const D &>(*this))->get_Tag(put(value)));
    return value;
}

template <typename D> void impl_IRadialControllerMenuItem<D>::Tag(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IRadialControllerMenuItem &>(static_cast<const D &>(*this))->put_Tag(get(value)));
}

template <typename D> event_token impl_IRadialControllerMenuItem<D>::Invoked(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IRadialControllerMenuItem &>(static_cast<const D &>(*this))->add_Invoked(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IRadialControllerMenuItem> impl_IRadialControllerMenuItem<D>::Invoked(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IRadialControllerMenuItem>(this, &ABI::Windows::UI::Input::IRadialControllerMenuItem::remove_Invoked, Invoked(handler));
}

template <typename D> void impl_IRadialControllerMenuItem<D>::Invoked(event_token token) const
{
    check_hresult(static_cast<const IRadialControllerMenuItem &>(static_cast<const D &>(*this))->remove_Invoked(token));
}

template <typename D> void impl_IRadialControllerConfiguration<D>::SetDefaultMenuItems(const Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Input::RadialControllerSystemMenuItemKind> & buttons) const
{
    check_hresult(static_cast<const IRadialControllerConfiguration &>(static_cast<const D &>(*this))->abi_SetDefaultMenuItems(get(buttons)));
}

template <typename D> void impl_IRadialControllerConfiguration<D>::ResetToDefaultMenuItems() const
{
    check_hresult(static_cast<const IRadialControllerConfiguration &>(static_cast<const D &>(*this))->abi_ResetToDefaultMenuItems());
}

template <typename D> bool impl_IRadialControllerConfiguration<D>::TrySelectDefaultMenuItem(Windows::UI::Input::RadialControllerSystemMenuItemKind type) const
{
    bool result {};
    check_hresult(static_cast<const IRadialControllerConfiguration &>(static_cast<const D &>(*this))->abi_TrySelectDefaultMenuItem(type, &result));
    return result;
}

template <typename D> Windows::UI::Input::RadialControllerConfiguration impl_IRadialControllerConfigurationStatics<D>::GetForCurrentView() const
{
    Windows::UI::Input::RadialControllerConfiguration configuration { nullptr };
    check_hresult(static_cast<const IRadialControllerConfigurationStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(configuration)));
    return configuration;
}

inline Windows::UI::Input::EdgeGesture EdgeGesture::GetForCurrentView()
{
    return get_activation_factory<EdgeGesture, IEdgeGestureStatics>().GetForCurrentView();
}

inline GestureRecognizer::GestureRecognizer() :
    GestureRecognizer(activate_instance<GestureRecognizer>())
{}

inline Windows::UI::Input::KeyboardDeliveryInterceptor KeyboardDeliveryInterceptor::GetForCurrentView()
{
    return get_activation_factory<KeyboardDeliveryInterceptor, IKeyboardDeliveryInterceptorStatics>().GetForCurrentView();
}

inline Windows::UI::Input::PointerPoint PointerPoint::GetCurrentPoint(uint32_t pointerId)
{
    return get_activation_factory<PointerPoint, IPointerPointStatics>().GetCurrentPoint(pointerId);
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> PointerPoint::GetIntermediatePoints(uint32_t pointerId)
{
    return get_activation_factory<PointerPoint, IPointerPointStatics>().GetIntermediatePoints(pointerId);
}

inline Windows::UI::Input::PointerPoint PointerPoint::GetCurrentPoint(uint32_t pointerId, const Windows::UI::Input::IPointerPointTransform & transform)
{
    return get_activation_factory<PointerPoint, IPointerPointStatics>().GetCurrentPoint(pointerId, transform);
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> PointerPoint::GetIntermediatePoints(uint32_t pointerId, const Windows::UI::Input::IPointerPointTransform & transform)
{
    return get_activation_factory<PointerPoint, IPointerPointStatics>().GetIntermediatePoints(pointerId, transform);
}

inline Windows::UI::Input::PointerVisualizationSettings PointerVisualizationSettings::GetForCurrentView()
{
    return get_activation_factory<PointerVisualizationSettings, IPointerVisualizationSettingsStatics>().GetForCurrentView();
}

inline bool RadialController::IsSupported()
{
    return get_activation_factory<RadialController, IRadialControllerStatics>().IsSupported();
}

inline Windows::UI::Input::RadialController RadialController::CreateForCurrentView()
{
    return get_activation_factory<RadialController, IRadialControllerStatics>().CreateForCurrentView();
}

inline Windows::UI::Input::RadialControllerConfiguration RadialControllerConfiguration::GetForCurrentView()
{
    return get_activation_factory<RadialControllerConfiguration, IRadialControllerConfigurationStatics>().GetForCurrentView();
}

inline Windows::UI::Input::RadialControllerMenuItem RadialControllerMenuItem::CreateFromIcon(hstring_ref displayText, const Windows::Storage::Streams::RandomAccessStreamReference & icon)
{
    return get_activation_factory<RadialControllerMenuItem, IRadialControllerMenuItemStatics>().CreateFromIcon(displayText, icon);
}

inline Windows::UI::Input::RadialControllerMenuItem RadialControllerMenuItem::CreateFromKnownIcon(hstring_ref displayText, Windows::UI::Input::RadialControllerMenuKnownIcon value)
{
    return get_activation_factory<RadialControllerMenuItem, IRadialControllerMenuItemStatics>().CreateFromKnownIcon(displayText, value);
}

}

}
