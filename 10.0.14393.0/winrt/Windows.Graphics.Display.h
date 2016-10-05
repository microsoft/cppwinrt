// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Graphics.Display.3.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Graphics::Display {

template <typename L> DisplayPropertiesEventHandler::DisplayPropertiesEventHandler(L lambda) :
    DisplayPropertiesEventHandler(impl::make_delegate<impl_DisplayPropertiesEventHandler<L>, DisplayPropertiesEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> DisplayPropertiesEventHandler::DisplayPropertiesEventHandler(F * function) :
    DisplayPropertiesEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DisplayPropertiesEventHandler::DisplayPropertiesEventHandler(O * object, M method) :
    DisplayPropertiesEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DisplayPropertiesEventHandler::operator()(const Windows::IInspectable & sender) const
{
    check_hresult((*this)->abi_Invoke(get(sender)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayInformation> : produce_base<D, Windows::Graphics::Display::IDisplayInformation>
{
    HRESULT __stdcall get_CurrentOrientation(Windows::Graphics::Display::DisplayOrientations * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NativeOrientation(Windows::Graphics::Display::DisplayOrientations * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NativeOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OrientationChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().OrientationChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OrientationChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().OrientationChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolutionScale(Windows::Graphics::Display::ResolutionScale * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResolutionScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogicalDpi(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LogicalDpi());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawDpiX(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RawDpiX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawDpiY(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RawDpiY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DpiChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DpiChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DpiChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().DpiChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StereoEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StereoEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StereoEnabledChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().StereoEnabledChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StereoEnabledChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().StereoEnabledChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetColorProfileAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().GetColorProfileAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ColorProfileChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ColorProfileChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ColorProfileChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ColorProfileChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayInformation2> : produce_base<D, Windows::Graphics::Display::IDisplayInformation2>
{
    HRESULT __stdcall get_RawPixelsPerViewPixel(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RawPixelsPerViewPixel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayInformation3> : produce_base<D, Windows::Graphics::Display::IDisplayInformation3>
{
    HRESULT __stdcall get_DiagonalSizeInInches(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DiagonalSizeInInches());
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
struct produce<D, Windows::Graphics::Display::IDisplayInformation4> : produce_base<D, Windows::Graphics::Display::IDisplayInformation4>
{
    HRESULT __stdcall get_ScreenWidthInRawPixels(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScreenWidthInRawPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScreenHeightInRawPixels(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScreenHeightInRawPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayInformationStatics> : produce_base<D, Windows::Graphics::Display::IDisplayInformationStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::Graphics::Display::IDisplayInformation> current) noexcept override
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

    HRESULT __stdcall get_AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoRotationPreferences());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations value) noexcept override
    {
        try
        {
            this->shim().AutoRotationPreferences(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DisplayContentsInvalidated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DisplayContentsInvalidated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DisplayContentsInvalidated(event_token token) noexcept override
    {
        try
        {
            this->shim().DisplayContentsInvalidated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayPropertiesStatics> : produce_base<D, Windows::Graphics::Display::IDisplayPropertiesStatics>
{
    HRESULT __stdcall get_CurrentOrientation(Windows::Graphics::Display::DisplayOrientations * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NativeOrientation(Windows::Graphics::Display::DisplayOrientations * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NativeOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoRotationPreferences());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations value) noexcept override
    {
        try
        {
            this->shim().AutoRotationPreferences(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OrientationChanged(abi_arg_in<Windows::Graphics::Display::DisplayPropertiesEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().OrientationChanged(*reinterpret_cast<const Windows::Graphics::Display::DisplayPropertiesEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OrientationChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().OrientationChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolutionScale(Windows::Graphics::Display::ResolutionScale * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResolutionScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogicalDpi(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LogicalDpi());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LogicalDpiChanged(abi_arg_in<Windows::Graphics::Display::DisplayPropertiesEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().LogicalDpiChanged(*reinterpret_cast<const Windows::Graphics::Display::DisplayPropertiesEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LogicalDpiChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().LogicalDpiChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StereoEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StereoEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StereoEnabledChanged(abi_arg_in<Windows::Graphics::Display::DisplayPropertiesEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().StereoEnabledChanged(*reinterpret_cast<const Windows::Graphics::Display::DisplayPropertiesEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StereoEnabledChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().StereoEnabledChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetColorProfileAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().GetColorProfileAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ColorProfileChanged(abi_arg_in<Windows::Graphics::Display::DisplayPropertiesEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ColorProfileChanged(*reinterpret_cast<const Windows::Graphics::Display::DisplayPropertiesEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ColorProfileChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ColorProfileChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DisplayContentsInvalidated(abi_arg_in<Windows::Graphics::Display::DisplayPropertiesEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DisplayContentsInvalidated(*reinterpret_cast<const Windows::Graphics::Display::DisplayPropertiesEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DisplayContentsInvalidated(event_token token) noexcept override
    {
        try
        {
            this->shim().DisplayContentsInvalidated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Graphics::Display {

template <typename D> Windows::Graphics::Display::DisplayInformation impl_IDisplayInformationStatics<D>::GetForCurrentView() const
{
    Windows::Graphics::Display::DisplayInformation current { nullptr };
    check_hresult(static_cast<const IDisplayInformationStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(current)));
    return current;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations impl_IDisplayInformationStatics<D>::AutoRotationPreferences() const
{
    Windows::Graphics::Display::DisplayOrientations value {};
    check_hresult(static_cast<const IDisplayInformationStatics &>(static_cast<const D &>(*this))->get_AutoRotationPreferences(&value));
    return value;
}

template <typename D> void impl_IDisplayInformationStatics<D>::AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations value) const
{
    check_hresult(static_cast<const IDisplayInformationStatics &>(static_cast<const D &>(*this))->put_AutoRotationPreferences(value));
}

template <typename D> event_token impl_IDisplayInformationStatics<D>::DisplayContentsInvalidated(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IDisplayInformationStatics &>(static_cast<const D &>(*this))->add_DisplayContentsInvalidated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IDisplayInformationStatics> impl_IDisplayInformationStatics<D>::DisplayContentsInvalidated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IDisplayInformationStatics>(this, &ABI::Windows::Graphics::Display::IDisplayInformationStatics::remove_DisplayContentsInvalidated, DisplayContentsInvalidated(handler));
}

template <typename D> void impl_IDisplayInformationStatics<D>::DisplayContentsInvalidated(event_token token) const
{
    check_hresult(static_cast<const IDisplayInformationStatics &>(static_cast<const D &>(*this))->remove_DisplayContentsInvalidated(token));
}

template <typename D> Windows::Graphics::Display::DisplayOrientations impl_IDisplayInformation<D>::CurrentOrientation() const
{
    Windows::Graphics::Display::DisplayOrientations value {};
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->get_CurrentOrientation(&value));
    return value;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations impl_IDisplayInformation<D>::NativeOrientation() const
{
    Windows::Graphics::Display::DisplayOrientations value {};
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->get_NativeOrientation(&value));
    return value;
}

template <typename D> event_token impl_IDisplayInformation<D>::OrientationChanged(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->add_OrientationChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IDisplayInformation> impl_IDisplayInformation<D>::OrientationChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IDisplayInformation>(this, &ABI::Windows::Graphics::Display::IDisplayInformation::remove_OrientationChanged, OrientationChanged(handler));
}

template <typename D> void impl_IDisplayInformation<D>::OrientationChanged(event_token token) const
{
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->remove_OrientationChanged(token));
}

template <typename D> Windows::Graphics::Display::ResolutionScale impl_IDisplayInformation<D>::ResolutionScale() const
{
    Windows::Graphics::Display::ResolutionScale value {};
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->get_ResolutionScale(&value));
    return value;
}

template <typename D> float impl_IDisplayInformation<D>::LogicalDpi() const
{
    float value {};
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->get_LogicalDpi(&value));
    return value;
}

template <typename D> float impl_IDisplayInformation<D>::RawDpiX() const
{
    float value {};
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->get_RawDpiX(&value));
    return value;
}

template <typename D> float impl_IDisplayInformation<D>::RawDpiY() const
{
    float value {};
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->get_RawDpiY(&value));
    return value;
}

template <typename D> event_token impl_IDisplayInformation<D>::DpiChanged(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->add_DpiChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IDisplayInformation> impl_IDisplayInformation<D>::DpiChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IDisplayInformation>(this, &ABI::Windows::Graphics::Display::IDisplayInformation::remove_DpiChanged, DpiChanged(handler));
}

template <typename D> void impl_IDisplayInformation<D>::DpiChanged(event_token token) const
{
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->remove_DpiChanged(token));
}

template <typename D> bool impl_IDisplayInformation<D>::StereoEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->get_StereoEnabled(&value));
    return value;
}

template <typename D> event_token impl_IDisplayInformation<D>::StereoEnabledChanged(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->add_StereoEnabledChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IDisplayInformation> impl_IDisplayInformation<D>::StereoEnabledChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IDisplayInformation>(this, &ABI::Windows::Graphics::Display::IDisplayInformation::remove_StereoEnabledChanged, StereoEnabledChanged(handler));
}

template <typename D> void impl_IDisplayInformation<D>::StereoEnabledChanged(event_token token) const
{
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->remove_StereoEnabledChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> impl_IDisplayInformation<D>::GetColorProfileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> asyncInfo;
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->abi_GetColorProfileAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> event_token impl_IDisplayInformation<D>::ColorProfileChanged(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->add_ColorProfileChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IDisplayInformation> impl_IDisplayInformation<D>::ColorProfileChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IDisplayInformation>(this, &ABI::Windows::Graphics::Display::IDisplayInformation::remove_ColorProfileChanged, ColorProfileChanged(handler));
}

template <typename D> void impl_IDisplayInformation<D>::ColorProfileChanged(event_token token) const
{
    check_hresult(static_cast<const IDisplayInformation &>(static_cast<const D &>(*this))->remove_ColorProfileChanged(token));
}

template <typename D> double impl_IDisplayInformation2<D>::RawPixelsPerViewPixel() const
{
    double value {};
    check_hresult(static_cast<const IDisplayInformation2 &>(static_cast<const D &>(*this))->get_RawPixelsPerViewPixel(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_IDisplayInformation3<D>::DiagonalSizeInInches() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IDisplayInformation3 &>(static_cast<const D &>(*this))->get_DiagonalSizeInInches(put(value)));
    return value;
}

template <typename D> uint32_t impl_IDisplayInformation4<D>::ScreenWidthInRawPixels() const
{
    uint32_t value {};
    check_hresult(static_cast<const IDisplayInformation4 &>(static_cast<const D &>(*this))->get_ScreenWidthInRawPixels(&value));
    return value;
}

template <typename D> uint32_t impl_IDisplayInformation4<D>::ScreenHeightInRawPixels() const
{
    uint32_t value {};
    check_hresult(static_cast<const IDisplayInformation4 &>(static_cast<const D &>(*this))->get_ScreenHeightInRawPixels(&value));
    return value;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations impl_IDisplayPropertiesStatics<D>::CurrentOrientation() const
{
    Windows::Graphics::Display::DisplayOrientations value {};
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->get_CurrentOrientation(&value));
    return value;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations impl_IDisplayPropertiesStatics<D>::NativeOrientation() const
{
    Windows::Graphics::Display::DisplayOrientations value {};
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->get_NativeOrientation(&value));
    return value;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations impl_IDisplayPropertiesStatics<D>::AutoRotationPreferences() const
{
    Windows::Graphics::Display::DisplayOrientations value {};
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->get_AutoRotationPreferences(&value));
    return value;
}

template <typename D> void impl_IDisplayPropertiesStatics<D>::AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations value) const
{
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->put_AutoRotationPreferences(value));
}

template <typename D> event_token impl_IDisplayPropertiesStatics<D>::OrientationChanged(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->add_OrientationChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IDisplayPropertiesStatics> impl_IDisplayPropertiesStatics<D>::OrientationChanged(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler) const
{
    return impl::make_event_revoker<D, IDisplayPropertiesStatics>(this, &ABI::Windows::Graphics::Display::IDisplayPropertiesStatics::remove_OrientationChanged, OrientationChanged(handler));
}

template <typename D> void impl_IDisplayPropertiesStatics<D>::OrientationChanged(event_token token) const
{
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->remove_OrientationChanged(token));
}

template <typename D> Windows::Graphics::Display::ResolutionScale impl_IDisplayPropertiesStatics<D>::ResolutionScale() const
{
    Windows::Graphics::Display::ResolutionScale value {};
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->get_ResolutionScale(&value));
    return value;
}

template <typename D> float impl_IDisplayPropertiesStatics<D>::LogicalDpi() const
{
    float value {};
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->get_LogicalDpi(&value));
    return value;
}

template <typename D> event_token impl_IDisplayPropertiesStatics<D>::LogicalDpiChanged(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->add_LogicalDpiChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IDisplayPropertiesStatics> impl_IDisplayPropertiesStatics<D>::LogicalDpiChanged(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler) const
{
    return impl::make_event_revoker<D, IDisplayPropertiesStatics>(this, &ABI::Windows::Graphics::Display::IDisplayPropertiesStatics::remove_LogicalDpiChanged, LogicalDpiChanged(handler));
}

template <typename D> void impl_IDisplayPropertiesStatics<D>::LogicalDpiChanged(event_token token) const
{
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->remove_LogicalDpiChanged(token));
}

template <typename D> bool impl_IDisplayPropertiesStatics<D>::StereoEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->get_StereoEnabled(&value));
    return value;
}

template <typename D> event_token impl_IDisplayPropertiesStatics<D>::StereoEnabledChanged(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->add_StereoEnabledChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IDisplayPropertiesStatics> impl_IDisplayPropertiesStatics<D>::StereoEnabledChanged(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler) const
{
    return impl::make_event_revoker<D, IDisplayPropertiesStatics>(this, &ABI::Windows::Graphics::Display::IDisplayPropertiesStatics::remove_StereoEnabledChanged, StereoEnabledChanged(handler));
}

template <typename D> void impl_IDisplayPropertiesStatics<D>::StereoEnabledChanged(event_token token) const
{
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->remove_StereoEnabledChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> impl_IDisplayPropertiesStatics<D>::GetColorProfileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> asyncInfo;
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->abi_GetColorProfileAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> event_token impl_IDisplayPropertiesStatics<D>::ColorProfileChanged(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->add_ColorProfileChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IDisplayPropertiesStatics> impl_IDisplayPropertiesStatics<D>::ColorProfileChanged(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler) const
{
    return impl::make_event_revoker<D, IDisplayPropertiesStatics>(this, &ABI::Windows::Graphics::Display::IDisplayPropertiesStatics::remove_ColorProfileChanged, ColorProfileChanged(handler));
}

template <typename D> void impl_IDisplayPropertiesStatics<D>::ColorProfileChanged(event_token token) const
{
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->remove_ColorProfileChanged(token));
}

template <typename D> event_token impl_IDisplayPropertiesStatics<D>::DisplayContentsInvalidated(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->add_DisplayContentsInvalidated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IDisplayPropertiesStatics> impl_IDisplayPropertiesStatics<D>::DisplayContentsInvalidated(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler) const
{
    return impl::make_event_revoker<D, IDisplayPropertiesStatics>(this, &ABI::Windows::Graphics::Display::IDisplayPropertiesStatics::remove_DisplayContentsInvalidated, DisplayContentsInvalidated(handler));
}

template <typename D> void impl_IDisplayPropertiesStatics<D>::DisplayContentsInvalidated(event_token token) const
{
    check_hresult(static_cast<const IDisplayPropertiesStatics &>(static_cast<const D &>(*this))->remove_DisplayContentsInvalidated(token));
}

inline Windows::Graphics::Display::DisplayInformation DisplayInformation::GetForCurrentView()
{
    return get_activation_factory<DisplayInformation, IDisplayInformationStatics>().GetForCurrentView();
}

inline Windows::Graphics::Display::DisplayOrientations DisplayInformation::AutoRotationPreferences()
{
    return get_activation_factory<DisplayInformation, IDisplayInformationStatics>().AutoRotationPreferences();
}

inline void DisplayInformation::AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations value)
{
    get_activation_factory<DisplayInformation, IDisplayInformationStatics>().AutoRotationPreferences(value);
}

inline event_token DisplayInformation::DisplayContentsInvalidated(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler)
{
    return get_activation_factory<DisplayInformation, IDisplayInformationStatics>().DisplayContentsInvalidated(handler);
}

inline factory_event_revoker<IDisplayInformationStatics> DisplayInformation::DisplayContentsInvalidated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<DisplayInformation, IDisplayInformationStatics>();
    return { factory, &ABI::Windows::Graphics::Display::IDisplayInformationStatics::remove_DisplayContentsInvalidated, factory.DisplayContentsInvalidated(handler) };
}

inline void DisplayInformation::DisplayContentsInvalidated(event_token token)
{
    get_activation_factory<DisplayInformation, IDisplayInformationStatics>().DisplayContentsInvalidated(token);
}

inline Windows::Graphics::Display::DisplayOrientations DisplayProperties::CurrentOrientation()
{
    return get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().CurrentOrientation();
}

inline Windows::Graphics::Display::DisplayOrientations DisplayProperties::NativeOrientation()
{
    return get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().NativeOrientation();
}

inline Windows::Graphics::Display::DisplayOrientations DisplayProperties::AutoRotationPreferences()
{
    return get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().AutoRotationPreferences();
}

inline void DisplayProperties::AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations value)
{
    get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().AutoRotationPreferences(value);
}

inline event_token DisplayProperties::OrientationChanged(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler)
{
    return get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().OrientationChanged(handler);
}

inline factory_event_revoker<IDisplayPropertiesStatics> DisplayProperties::OrientationChanged(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler)
{
    auto factory = get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>();
    return { factory, &ABI::Windows::Graphics::Display::IDisplayPropertiesStatics::remove_OrientationChanged, factory.OrientationChanged(handler) };
}

inline void DisplayProperties::OrientationChanged(event_token token)
{
    get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().OrientationChanged(token);
}

inline Windows::Graphics::Display::ResolutionScale DisplayProperties::ResolutionScale()
{
    return get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().ResolutionScale();
}

inline float DisplayProperties::LogicalDpi()
{
    return get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().LogicalDpi();
}

inline event_token DisplayProperties::LogicalDpiChanged(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler)
{
    return get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().LogicalDpiChanged(handler);
}

inline factory_event_revoker<IDisplayPropertiesStatics> DisplayProperties::LogicalDpiChanged(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler)
{
    auto factory = get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>();
    return { factory, &ABI::Windows::Graphics::Display::IDisplayPropertiesStatics::remove_LogicalDpiChanged, factory.LogicalDpiChanged(handler) };
}

inline void DisplayProperties::LogicalDpiChanged(event_token token)
{
    get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().LogicalDpiChanged(token);
}

inline bool DisplayProperties::StereoEnabled()
{
    return get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().StereoEnabled();
}

inline event_token DisplayProperties::StereoEnabledChanged(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler)
{
    return get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().StereoEnabledChanged(handler);
}

inline factory_event_revoker<IDisplayPropertiesStatics> DisplayProperties::StereoEnabledChanged(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler)
{
    auto factory = get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>();
    return { factory, &ABI::Windows::Graphics::Display::IDisplayPropertiesStatics::remove_StereoEnabledChanged, factory.StereoEnabledChanged(handler) };
}

inline void DisplayProperties::StereoEnabledChanged(event_token token)
{
    get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().StereoEnabledChanged(token);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> DisplayProperties::GetColorProfileAsync()
{
    return get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().GetColorProfileAsync();
}

inline event_token DisplayProperties::ColorProfileChanged(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler)
{
    return get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().ColorProfileChanged(handler);
}

inline factory_event_revoker<IDisplayPropertiesStatics> DisplayProperties::ColorProfileChanged(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler)
{
    auto factory = get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>();
    return { factory, &ABI::Windows::Graphics::Display::IDisplayPropertiesStatics::remove_ColorProfileChanged, factory.ColorProfileChanged(handler) };
}

inline void DisplayProperties::ColorProfileChanged(event_token token)
{
    get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().ColorProfileChanged(token);
}

inline event_token DisplayProperties::DisplayContentsInvalidated(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler)
{
    return get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().DisplayContentsInvalidated(handler);
}

inline factory_event_revoker<IDisplayPropertiesStatics> DisplayProperties::DisplayContentsInvalidated(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler)
{
    auto factory = get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>();
    return { factory, &ABI::Windows::Graphics::Display::IDisplayPropertiesStatics::remove_DisplayContentsInvalidated, factory.DisplayContentsInvalidated(handler) };
}

inline void DisplayProperties::DisplayContentsInvalidated(event_token token)
{
    get_activation_factory<DisplayProperties, IDisplayPropertiesStatics>().DisplayContentsInvalidated(token);
}

}

}
