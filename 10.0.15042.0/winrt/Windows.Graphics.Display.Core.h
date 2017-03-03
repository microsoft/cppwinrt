// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Graphics.Display.Core.3.h"
#include "Windows.Graphics.Display.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Graphics::Display::Core::IHdmiDisplayInformation> : produce_base<D, Windows::Graphics::Display::Core::IHdmiDisplayInformation>
{
    HRESULT __stdcall abi_GetSupportedDisplayModes(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Display::Core::HdmiDisplayMode>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSupportedDisplayModes());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentDisplayMode(impl::abi_arg_out<Windows::Graphics::Display::Core::IHdmiDisplayMode> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCurrentDisplayMode());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDefaultDisplayModeAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetDefaultDisplayModeAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestSetCurrentDisplayModeAsync(impl::abi_arg_in<Windows::Graphics::Display::Core::IHdmiDisplayMode> mode, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestSetCurrentDisplayModeAsync(*reinterpret_cast<const Windows::Graphics::Display::Core::HdmiDisplayMode *>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestSetCurrentDisplayModeWithHdrAsync(impl::abi_arg_in<Windows::Graphics::Display::Core::IHdmiDisplayMode> mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption hdrOption, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestSetCurrentDisplayModeAsync(*reinterpret_cast<const Windows::Graphics::Display::Core::HdmiDisplayMode *>(&mode), hdrOption));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestSetCurrentDisplayModeWithHdrAndMetadataAsync(impl::abi_arg_in<Windows::Graphics::Display::Core::IHdmiDisplayMode> mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption hdrOption, impl::abi_arg_in<Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata> hdrMetadata, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestSetCurrentDisplayModeAsync(*reinterpret_cast<const Windows::Graphics::Display::Core::HdmiDisplayMode *>(&mode), hdrOption, *reinterpret_cast<const Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata *>(&hdrMetadata)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DisplayModesChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DisplayModesChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DisplayModesChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayModesChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics> : produce_base<D, Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(impl::abi_arg_out<Windows::Graphics::Display::Core::IHdmiDisplayInformation> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForCurrentView());
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
struct produce<D, Windows::Graphics::Display::Core::IHdmiDisplayMode> : produce_base<D, Windows::Graphics::Display::Core::IHdmiDisplayMode>
{
    HRESULT __stdcall get_ResolutionWidthInRawPixels(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResolutionWidthInRawPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolutionHeightInRawPixels(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResolutionHeightInRawPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RefreshRate(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RefreshRate());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StereoEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitsPerPixel(uint16_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BitsPerPixel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsEqual(impl::abi_arg_in<Windows::Graphics::Display::Core::IHdmiDisplayMode> mode, bool * result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsEqual(*reinterpret_cast<const Windows::Graphics::Display::Core::HdmiDisplayMode *>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorSpace(Windows::Graphics::Display::Core::HdmiDisplayColorSpace * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColorSpace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelEncoding(Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelEncoding());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSdrLuminanceSupported(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSdrLuminanceSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSmpte2084Supported(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSmpte2084Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Is2086MetadataSupported(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Is2086MetadataSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Graphics::Display::Core {

template <typename D> uint32_t impl_IHdmiDisplayMode<D>::ResolutionWidthInRawPixels() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IHdmiDisplayMode)->get_ResolutionWidthInRawPixels(&value));
    return value;
}

template <typename D> uint32_t impl_IHdmiDisplayMode<D>::ResolutionHeightInRawPixels() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IHdmiDisplayMode)->get_ResolutionHeightInRawPixels(&value));
    return value;
}

template <typename D> double impl_IHdmiDisplayMode<D>::RefreshRate() const
{
    double value {};
    check_hresult(WINRT_SHIM(IHdmiDisplayMode)->get_RefreshRate(&value));
    return value;
}

template <typename D> bool impl_IHdmiDisplayMode<D>::StereoEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IHdmiDisplayMode)->get_StereoEnabled(&value));
    return value;
}

template <typename D> uint16_t impl_IHdmiDisplayMode<D>::BitsPerPixel() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IHdmiDisplayMode)->get_BitsPerPixel(&value));
    return value;
}

template <typename D> bool impl_IHdmiDisplayMode<D>::IsEqual(const Windows::Graphics::Display::Core::HdmiDisplayMode & mode) const
{
    bool result {};
    check_hresult(WINRT_SHIM(IHdmiDisplayMode)->abi_IsEqual(get_abi(mode), &result));
    return result;
}

template <typename D> Windows::Graphics::Display::Core::HdmiDisplayColorSpace impl_IHdmiDisplayMode<D>::ColorSpace() const
{
    Windows::Graphics::Display::Core::HdmiDisplayColorSpace value {};
    check_hresult(WINRT_SHIM(IHdmiDisplayMode)->get_ColorSpace(&value));
    return value;
}

template <typename D> Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding impl_IHdmiDisplayMode<D>::PixelEncoding() const
{
    Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding value {};
    check_hresult(WINRT_SHIM(IHdmiDisplayMode)->get_PixelEncoding(&value));
    return value;
}

template <typename D> bool impl_IHdmiDisplayMode<D>::IsSdrLuminanceSupported() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IHdmiDisplayMode)->get_IsSdrLuminanceSupported(&value));
    return value;
}

template <typename D> bool impl_IHdmiDisplayMode<D>::IsSmpte2084Supported() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IHdmiDisplayMode)->get_IsSmpte2084Supported(&value));
    return value;
}

template <typename D> bool impl_IHdmiDisplayMode<D>::Is2086MetadataSupported() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IHdmiDisplayMode)->get_Is2086MetadataSupported(&value));
    return value;
}

template <typename D> Windows::Graphics::Display::Core::HdmiDisplayInformation impl_IHdmiDisplayInformationStatics<D>::GetForCurrentView() const
{
    Windows::Graphics::Display::Core::HdmiDisplayInformation result { nullptr };
    check_hresult(WINRT_SHIM(IHdmiDisplayInformationStatics)->abi_GetForCurrentView(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Display::Core::HdmiDisplayMode> impl_IHdmiDisplayInformation<D>::GetSupportedDisplayModes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Display::Core::HdmiDisplayMode> result;
    check_hresult(WINRT_SHIM(IHdmiDisplayInformation)->abi_GetSupportedDisplayModes(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Display::Core::HdmiDisplayMode impl_IHdmiDisplayInformation<D>::GetCurrentDisplayMode() const
{
    Windows::Graphics::Display::Core::HdmiDisplayMode result { nullptr };
    check_hresult(WINRT_SHIM(IHdmiDisplayInformation)->abi_GetCurrentDisplayMode(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IHdmiDisplayInformation<D>::SetDefaultDisplayModeAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(WINRT_SHIM(IHdmiDisplayInformation)->abi_SetDefaultDisplayModeAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IHdmiDisplayInformation<D>::RequestSetCurrentDisplayModeAsync(const Windows::Graphics::Display::Core::HdmiDisplayMode & mode) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IHdmiDisplayInformation)->abi_RequestSetCurrentDisplayModeAsync(get_abi(mode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IHdmiDisplayInformation<D>::RequestSetCurrentDisplayModeAsync(const Windows::Graphics::Display::Core::HdmiDisplayMode & mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption hdrOption) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IHdmiDisplayInformation)->abi_RequestSetCurrentDisplayModeWithHdrAsync(get_abi(mode), hdrOption, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IHdmiDisplayInformation<D>::RequestSetCurrentDisplayModeAsync(const Windows::Graphics::Display::Core::HdmiDisplayMode & mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption hdrOption, const Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata & hdrMetadata) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IHdmiDisplayInformation)->abi_RequestSetCurrentDisplayModeWithHdrAndMetadataAsync(get_abi(mode), hdrOption, get_abi(hdrMetadata), put_abi(operation)));
    return operation;
}

template <typename D> event_token impl_IHdmiDisplayInformation<D>::DisplayModesChanged(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IHdmiDisplayInformation)->add_DisplayModesChanged(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IHdmiDisplayInformation> impl_IHdmiDisplayInformation<D>::DisplayModesChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IHdmiDisplayInformation>(this, &ABI::Windows::Graphics::Display::Core::IHdmiDisplayInformation::remove_DisplayModesChanged, DisplayModesChanged(value));
}

template <typename D> void impl_IHdmiDisplayInformation<D>::DisplayModesChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IHdmiDisplayInformation)->remove_DisplayModesChanged(token));
}

inline Windows::Graphics::Display::Core::HdmiDisplayInformation HdmiDisplayInformation::GetForCurrentView()
{
    return get_activation_factory<HdmiDisplayInformation, IHdmiDisplayInformationStatics>().GetForCurrentView();
}

}

}

template<>
struct std::hash<winrt::Windows::Graphics::Display::Core::IHdmiDisplayInformation>
{
    size_t operator()(const winrt::Windows::Graphics::Display::Core::IHdmiDisplayInformation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics>
{
    size_t operator()(const winrt::Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Display::Core::IHdmiDisplayMode>
{
    size_t operator()(const winrt::Windows::Graphics::Display::Core::IHdmiDisplayMode & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Display::Core::HdmiDisplayInformation>
{
    size_t operator()(const winrt::Windows::Graphics::Display::Core::HdmiDisplayInformation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Graphics::Display::Core::HdmiDisplayMode>
{
    size_t operator()(const winrt::Windows::Graphics::Display::Core::HdmiDisplayMode & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
