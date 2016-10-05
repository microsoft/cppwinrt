// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.Input.Inking.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Input.Inking.Core.3.h"
#include "Windows.UI.Input.Inking.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>
{
    HRESULT __stdcall add_PointerEntering(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerEntering(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerEntering(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerEntering(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerHovering(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerHovering(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerHovering(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerHovering(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerExiting(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerExiting(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerExiting(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerExiting(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerPressing(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerPressing(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerPressing(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerPressing(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerMoving(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerMoving(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerMoving(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerMoving(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerReleasing(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerReleasing(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerReleasing(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerReleasing(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerLost(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerLost(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerLost(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerLost(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InkPresenter(abi_arg_out<Windows::UI::Input::Inking::IInkPresenter> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InkPresenter());
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
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::UI::Input::Inking::IInkPresenter> inkPresenter, abi_arg_out<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> inkIndependentInputSource) noexcept override
    {
        try
        {
            *inkIndependentInputSource = detach(this->shim().Create(*reinterpret_cast<const Windows::UI::Input::Inking::InkPresenter *>(&inkPresenter)));
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
    HRESULT __stdcall get_NewInkPoints(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Input::Inking::InkPoint>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewInkPoints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_Disposition(Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Disposition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Disposition(Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition value) noexcept override
    {
        try
        {
            this->shim().Disposition(value);
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
    HRESULT __stdcall add_WetStrokeStarting(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().WetStrokeStarting(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeStarting(event_token cookie) noexcept override
    {
        try
        {
            this->shim().WetStrokeStarting(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_WetStrokeContinuing(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().WetStrokeContinuing(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeContinuing(event_token cookie) noexcept override
    {
        try
        {
            this->shim().WetStrokeContinuing(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_WetStrokeStopping(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().WetStrokeStopping(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeStopping(event_token cookie) noexcept override
    {
        try
        {
            this->shim().WetStrokeStopping(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_WetStrokeCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().WetStrokeCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeCompleted(event_token cookie) noexcept override
    {
        try
        {
            this->shim().WetStrokeCompleted(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_WetStrokeCanceled(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().WetStrokeCanceled(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeCanceled(event_token cookie) noexcept override
    {
        try
        {
            this->shim().WetStrokeCanceled(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InkPresenter(abi_arg_out<Windows::UI::Input::Inking::IInkPresenter> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InkPresenter());
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
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::UI::Input::Inking::IInkPresenter> inkPresenter, abi_arg_out<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> WetStrokeUpdateSource) noexcept override
    {
        try
        {
            *WetStrokeUpdateSource = detach(this->shim().Create(*reinterpret_cast<const Windows::UI::Input::Inking::InkPresenter *>(&inkPresenter)));
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

namespace Windows::UI::Input::Inking::Core {

template <typename D> event_token impl_ICoreInkIndependentInputSource<D>::PointerEntering(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->add_PointerEntering(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreInkIndependentInputSource> impl_ICoreInkIndependentInputSource<D>::PointerEntering(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreInkIndependentInputSource>(this, &ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource::remove_PointerEntering, PointerEntering(handler));
}

template <typename D> void impl_ICoreInkIndependentInputSource<D>::PointerEntering(event_token cookie) const
{
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->remove_PointerEntering(cookie));
}

template <typename D> event_token impl_ICoreInkIndependentInputSource<D>::PointerHovering(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->add_PointerHovering(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreInkIndependentInputSource> impl_ICoreInkIndependentInputSource<D>::PointerHovering(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreInkIndependentInputSource>(this, &ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource::remove_PointerHovering, PointerHovering(handler));
}

template <typename D> void impl_ICoreInkIndependentInputSource<D>::PointerHovering(event_token cookie) const
{
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->remove_PointerHovering(cookie));
}

template <typename D> event_token impl_ICoreInkIndependentInputSource<D>::PointerExiting(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->add_PointerExiting(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreInkIndependentInputSource> impl_ICoreInkIndependentInputSource<D>::PointerExiting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreInkIndependentInputSource>(this, &ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource::remove_PointerExiting, PointerExiting(handler));
}

template <typename D> void impl_ICoreInkIndependentInputSource<D>::PointerExiting(event_token cookie) const
{
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->remove_PointerExiting(cookie));
}

template <typename D> event_token impl_ICoreInkIndependentInputSource<D>::PointerPressing(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->add_PointerPressing(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreInkIndependentInputSource> impl_ICoreInkIndependentInputSource<D>::PointerPressing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreInkIndependentInputSource>(this, &ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource::remove_PointerPressing, PointerPressing(handler));
}

template <typename D> void impl_ICoreInkIndependentInputSource<D>::PointerPressing(event_token cookie) const
{
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->remove_PointerPressing(cookie));
}

template <typename D> event_token impl_ICoreInkIndependentInputSource<D>::PointerMoving(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->add_PointerMoving(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreInkIndependentInputSource> impl_ICoreInkIndependentInputSource<D>::PointerMoving(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreInkIndependentInputSource>(this, &ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource::remove_PointerMoving, PointerMoving(handler));
}

template <typename D> void impl_ICoreInkIndependentInputSource<D>::PointerMoving(event_token cookie) const
{
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->remove_PointerMoving(cookie));
}

template <typename D> event_token impl_ICoreInkIndependentInputSource<D>::PointerReleasing(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->add_PointerReleasing(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreInkIndependentInputSource> impl_ICoreInkIndependentInputSource<D>::PointerReleasing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreInkIndependentInputSource>(this, &ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource::remove_PointerReleasing, PointerReleasing(handler));
}

template <typename D> void impl_ICoreInkIndependentInputSource<D>::PointerReleasing(event_token cookie) const
{
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->remove_PointerReleasing(cookie));
}

template <typename D> event_token impl_ICoreInkIndependentInputSource<D>::PointerLost(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->add_PointerLost(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreInkIndependentInputSource> impl_ICoreInkIndependentInputSource<D>::PointerLost(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreInkIndependentInputSource>(this, &ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource::remove_PointerLost, PointerLost(handler));
}

template <typename D> void impl_ICoreInkIndependentInputSource<D>::PointerLost(event_token cookie) const
{
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->remove_PointerLost(cookie));
}

template <typename D> Windows::UI::Input::Inking::InkPresenter impl_ICoreInkIndependentInputSource<D>::InkPresenter() const
{
    Windows::UI::Input::Inking::InkPresenter value { nullptr };
    check_hresult(static_cast<const ICoreInkIndependentInputSource &>(static_cast<const D &>(*this))->get_InkPresenter(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource impl_ICoreInkIndependentInputSourceStatics<D>::Create(const Windows::UI::Input::Inking::InkPresenter & inkPresenter) const
{
    Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource inkIndependentInputSource { nullptr };
    check_hresult(static_cast<const ICoreInkIndependentInputSourceStatics &>(static_cast<const D &>(*this))->abi_Create(get(inkPresenter), put(inkIndependentInputSource)));
    return inkIndependentInputSource;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Input::Inking::InkPoint> impl_ICoreWetStrokeUpdateEventArgs<D>::NewInkPoints() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::Inking::InkPoint> value;
    check_hresult(static_cast<const ICoreWetStrokeUpdateEventArgs &>(static_cast<const D &>(*this))->get_NewInkPoints(put(value)));
    return value;
}

template <typename D> uint32_t impl_ICoreWetStrokeUpdateEventArgs<D>::PointerId() const
{
    uint32_t value {};
    check_hresult(static_cast<const ICoreWetStrokeUpdateEventArgs &>(static_cast<const D &>(*this))->get_PointerId(&value));
    return value;
}

template <typename D> Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition impl_ICoreWetStrokeUpdateEventArgs<D>::Disposition() const
{
    Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition value {};
    check_hresult(static_cast<const ICoreWetStrokeUpdateEventArgs &>(static_cast<const D &>(*this))->get_Disposition(&value));
    return value;
}

template <typename D> void impl_ICoreWetStrokeUpdateEventArgs<D>::Disposition(Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition value) const
{
    check_hresult(static_cast<const ICoreWetStrokeUpdateEventArgs &>(static_cast<const D &>(*this))->put_Disposition(value));
}

template <typename D> event_token impl_ICoreWetStrokeUpdateSource<D>::WetStrokeStarting(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreWetStrokeUpdateSource &>(static_cast<const D &>(*this))->add_WetStrokeStarting(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWetStrokeUpdateSource> impl_ICoreWetStrokeUpdateSource<D>::WetStrokeStarting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWetStrokeUpdateSource>(this, &ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource::remove_WetStrokeStarting, WetStrokeStarting(handler));
}

template <typename D> void impl_ICoreWetStrokeUpdateSource<D>::WetStrokeStarting(event_token cookie) const
{
    check_hresult(static_cast<const ICoreWetStrokeUpdateSource &>(static_cast<const D &>(*this))->remove_WetStrokeStarting(cookie));
}

template <typename D> event_token impl_ICoreWetStrokeUpdateSource<D>::WetStrokeContinuing(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreWetStrokeUpdateSource &>(static_cast<const D &>(*this))->add_WetStrokeContinuing(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWetStrokeUpdateSource> impl_ICoreWetStrokeUpdateSource<D>::WetStrokeContinuing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWetStrokeUpdateSource>(this, &ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource::remove_WetStrokeContinuing, WetStrokeContinuing(handler));
}

template <typename D> void impl_ICoreWetStrokeUpdateSource<D>::WetStrokeContinuing(event_token cookie) const
{
    check_hresult(static_cast<const ICoreWetStrokeUpdateSource &>(static_cast<const D &>(*this))->remove_WetStrokeContinuing(cookie));
}

template <typename D> event_token impl_ICoreWetStrokeUpdateSource<D>::WetStrokeStopping(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreWetStrokeUpdateSource &>(static_cast<const D &>(*this))->add_WetStrokeStopping(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWetStrokeUpdateSource> impl_ICoreWetStrokeUpdateSource<D>::WetStrokeStopping(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWetStrokeUpdateSource>(this, &ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource::remove_WetStrokeStopping, WetStrokeStopping(handler));
}

template <typename D> void impl_ICoreWetStrokeUpdateSource<D>::WetStrokeStopping(event_token cookie) const
{
    check_hresult(static_cast<const ICoreWetStrokeUpdateSource &>(static_cast<const D &>(*this))->remove_WetStrokeStopping(cookie));
}

template <typename D> event_token impl_ICoreWetStrokeUpdateSource<D>::WetStrokeCompleted(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreWetStrokeUpdateSource &>(static_cast<const D &>(*this))->add_WetStrokeCompleted(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWetStrokeUpdateSource> impl_ICoreWetStrokeUpdateSource<D>::WetStrokeCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWetStrokeUpdateSource>(this, &ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource::remove_WetStrokeCompleted, WetStrokeCompleted(handler));
}

template <typename D> void impl_ICoreWetStrokeUpdateSource<D>::WetStrokeCompleted(event_token cookie) const
{
    check_hresult(static_cast<const ICoreWetStrokeUpdateSource &>(static_cast<const D &>(*this))->remove_WetStrokeCompleted(cookie));
}

template <typename D> event_token impl_ICoreWetStrokeUpdateSource<D>::WetStrokeCanceled(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreWetStrokeUpdateSource &>(static_cast<const D &>(*this))->add_WetStrokeCanceled(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWetStrokeUpdateSource> impl_ICoreWetStrokeUpdateSource<D>::WetStrokeCanceled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWetStrokeUpdateSource>(this, &ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource::remove_WetStrokeCanceled, WetStrokeCanceled(handler));
}

template <typename D> void impl_ICoreWetStrokeUpdateSource<D>::WetStrokeCanceled(event_token cookie) const
{
    check_hresult(static_cast<const ICoreWetStrokeUpdateSource &>(static_cast<const D &>(*this))->remove_WetStrokeCanceled(cookie));
}

template <typename D> Windows::UI::Input::Inking::InkPresenter impl_ICoreWetStrokeUpdateSource<D>::InkPresenter() const
{
    Windows::UI::Input::Inking::InkPresenter value { nullptr };
    check_hresult(static_cast<const ICoreWetStrokeUpdateSource &>(static_cast<const D &>(*this))->get_InkPresenter(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource impl_ICoreWetStrokeUpdateSourceStatics<D>::Create(const Windows::UI::Input::Inking::InkPresenter & inkPresenter) const
{
    Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource WetStrokeUpdateSource { nullptr };
    check_hresult(static_cast<const ICoreWetStrokeUpdateSourceStatics &>(static_cast<const D &>(*this))->abi_Create(get(inkPresenter), put(WetStrokeUpdateSource)));
    return WetStrokeUpdateSource;
}

inline Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource CoreInkIndependentInputSource::Create(const Windows::UI::Input::Inking::InkPresenter & inkPresenter)
{
    return get_activation_factory<CoreInkIndependentInputSource, ICoreInkIndependentInputSourceStatics>().Create(inkPresenter);
}

inline Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource CoreWetStrokeUpdateSource::Create(const Windows::UI::Input::Inking::InkPresenter & inkPresenter)
{
    return get_activation_factory<CoreWetStrokeUpdateSource, ICoreWetStrokeUpdateSourceStatics>().Create(inkPresenter);
}

}

}
