// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.UI.Input.Inking.2.h"
#include "winrt/impl/Windows.UI.Input.Inking.Core.2.h"
#include "winrt/Windows.UI.Input.Inking.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerEntering(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerEntering(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerEntering(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerEntering, PointerEntering(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerEntering(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerEntering(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerHovering(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerHovering(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerHovering(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerHovering, PointerHovering(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerHovering(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerHovering(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerExiting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerExiting(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerExiting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerExiting, PointerExiting(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerExiting(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerExiting(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerPressing(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerPressing(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerPressing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerPressing, PointerPressing(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerPressing(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerPressing(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerMoving(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerMoving(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerMoving(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerMoving, PointerMoving(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerMoving(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerMoving(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerReleasing(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerReleasing(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerReleasing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerReleasing, PointerReleasing(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerReleasing(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerReleasing(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerLost(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerLost, PointerLost(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerLost(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerLost(get_abi(cookie)));
}

template <typename D> Windows::UI::Input::Inking::InkPresenter consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::InkPresenter() const
{
    Windows::UI::Input::Inking::InkPresenter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->get_InkPresenter(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSourceStatics<D>::Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const
{
    Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource inkIndependentInputSource{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics)->Create(get_abi(inkPresenter), put_abi(inkIndependentInputSource)));
    return inkIndependentInputSource;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Input::Inking::InkPoint> consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs<D>::NewInkPoints() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::Inking::InkPoint> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs)->get_NewInkPoints(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs<D>::PointerId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs)->get_PointerId(&value));
    return value;
}

template <typename D> Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs<D>::Disposition() const
{
    Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs)->get_Disposition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs<D>::Disposition(Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs)->put_Disposition(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeStarting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->add_WetStrokeStarting(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeStarting, WetStrokeStarting(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeStarting(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->remove_WetStrokeStarting(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeContinuing(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->add_WetStrokeContinuing(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeContinuing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeContinuing, WetStrokeContinuing(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeContinuing(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->remove_WetStrokeContinuing(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeStopping(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->add_WetStrokeStopping(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeStopping(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeStopping, WetStrokeStopping(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeStopping(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->remove_WetStrokeStopping(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->add_WetStrokeCompleted(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeCompleted, WetStrokeCompleted(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeCompleted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->remove_WetStrokeCompleted(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->add_WetStrokeCanceled(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeCanceled, WetStrokeCanceled(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeCanceled(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->remove_WetStrokeCanceled(get_abi(cookie)));
}

template <typename D> Windows::UI::Input::Inking::InkPresenter consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::InkPresenter() const
{
    Windows::UI::Input::Inking::InkPresenter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->get_InkPresenter(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSourceStatics<D>::Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const
{
    Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource WetStrokeUpdateSource{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics)->Create(get_abi(inkPresenter), put_abi(WetStrokeUpdateSource)));
    return WetStrokeUpdateSource;
}

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>
{
    HRESULT __stdcall add_PointerEntering(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerEntering(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerEntering(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerEntering(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerHovering(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerHovering(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerHovering(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerHovering(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerExiting(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerExiting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerExiting(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerExiting(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerPressing(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerPressing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerPressing(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerPressing(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerMoving(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerMoving(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerMoving(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerMoving(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerReleasing(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerReleasing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerReleasing(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerReleasing(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerLost(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().PointerLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerLost(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerLost(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InkPresenter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InkPresenter());
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
struct produce<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>
{
    HRESULT __stdcall Create(::IUnknown* inkPresenter, ::IUnknown** inkIndependentInputSource) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *inkIndependentInputSource = detach_abi(this->shim().Create(*reinterpret_cast<Windows::UI::Input::Inking::InkPresenter const*>(&inkPresenter)));
            return S_OK;
        }
        catch (...)
        {
            *inkIndependentInputSource = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>
{
    HRESULT __stdcall get_NewInkPoints(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewInkPoints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_Disposition(abi_t<Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Disposition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Disposition(abi_t<Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disposition(*reinterpret_cast<Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>
{
    HRESULT __stdcall add_WetStrokeStarting(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().WetStrokeStarting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeStarting(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetStrokeStarting(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_WetStrokeContinuing(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().WetStrokeContinuing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeContinuing(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetStrokeContinuing(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_WetStrokeStopping(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().WetStrokeStopping(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeStopping(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetStrokeStopping(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_WetStrokeCompleted(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().WetStrokeCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeCompleted(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetStrokeCompleted(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_WetStrokeCanceled(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().WetStrokeCanceled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeCanceled(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetStrokeCanceled(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InkPresenter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InkPresenter());
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
struct produce<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>
{
    HRESULT __stdcall Create(::IUnknown* inkPresenter, ::IUnknown** WetStrokeUpdateSource) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *WetStrokeUpdateSource = detach_abi(this->shim().Create(*reinterpret_cast<Windows::UI::Input::Inking::InkPresenter const*>(&inkPresenter)));
            return S_OK;
        }
        catch (...)
        {
            *WetStrokeUpdateSource = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Core {

inline Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource CoreInkIndependentInputSource::Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter)
{
    return get_activation_factory<CoreInkIndependentInputSource, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>().Create(inkPresenter);
}

inline Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource CoreWetStrokeUpdateSource::Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter)
{
    return get_activation_factory<CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>().Create(inkPresenter);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> {};

template<> struct hash<winrt::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics> {};

template<> struct hash<winrt::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> {};

template<> struct hash<winrt::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics> {};

template<> struct hash<winrt::Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource> {};

template<> struct hash<winrt::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> {};

template<> struct hash<winrt::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource> {};

}

WINRT_WARNING_POP
