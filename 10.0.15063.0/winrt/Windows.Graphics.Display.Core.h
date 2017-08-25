// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Graphics.Display.Core.2.h"
#include "winrt/Windows.Graphics.Display.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Display::Core::HdmiDisplayMode> consume_Windows_Graphics_Display_Core_IHdmiDisplayInformation<D>::GetSupportedDisplayModes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Display::Core::HdmiDisplayMode> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayInformation)->GetSupportedDisplayModes(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Display::Core::HdmiDisplayMode consume_Windows_Graphics_Display_Core_IHdmiDisplayInformation<D>::GetCurrentDisplayMode() const
{
    Windows::Graphics::Display::Core::HdmiDisplayMode result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayInformation)->GetCurrentDisplayMode(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Graphics_Display_Core_IHdmiDisplayInformation<D>::SetDefaultDisplayModeAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayInformation)->SetDefaultDisplayModeAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Graphics_Display_Core_IHdmiDisplayInformation<D>::RequestSetCurrentDisplayModeAsync(Windows::Graphics::Display::Core::HdmiDisplayMode const& mode) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayInformation)->RequestSetCurrentDisplayModeAsync(get_abi(mode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Graphics_Display_Core_IHdmiDisplayInformation<D>::RequestSetCurrentDisplayModeAsync(Windows::Graphics::Display::Core::HdmiDisplayMode const& mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption const& hdrOption) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayInformation)->RequestSetCurrentDisplayModeWithHdrAsync(get_abi(mode), get_abi(hdrOption), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Graphics_Display_Core_IHdmiDisplayInformation<D>::RequestSetCurrentDisplayModeAsync(Windows::Graphics::Display::Core::HdmiDisplayMode const& mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption const& hdrOption, Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata const& hdrMetadata) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayInformation)->RequestSetCurrentDisplayModeWithHdrAndMetadataAsync(get_abi(mode), get_abi(hdrOption), get_abi(hdrMetadata), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Graphics_Display_Core_IHdmiDisplayInformation<D>::DisplayModesChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayInformation)->add_DisplayModesChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::Core::IHdmiDisplayInformation> consume_Windows_Graphics_Display_Core_IHdmiDisplayInformation<D>::DisplayModesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::Core::IHdmiDisplayInformation>(this, &abi_t<Windows::Graphics::Display::Core::IHdmiDisplayInformation>::remove_DisplayModesChanged, DisplayModesChanged(value));
}

template <typename D> void consume_Windows_Graphics_Display_Core_IHdmiDisplayInformation<D>::DisplayModesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayInformation)->remove_DisplayModesChanged(get_abi(token)));
}

template <typename D> Windows::Graphics::Display::Core::HdmiDisplayInformation consume_Windows_Graphics_Display_Core_IHdmiDisplayInformationStatics<D>::GetForCurrentView() const
{
    Windows::Graphics::Display::Core::HdmiDisplayInformation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics)->GetForCurrentView(put_abi(result)));
    return result;
}

template <typename D> uint32_t consume_Windows_Graphics_Display_Core_IHdmiDisplayMode<D>::ResolutionWidthInRawPixels() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayMode)->get_ResolutionWidthInRawPixels(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Display_Core_IHdmiDisplayMode<D>::ResolutionHeightInRawPixels() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayMode)->get_ResolutionHeightInRawPixels(&value));
    return value;
}

template <typename D> double consume_Windows_Graphics_Display_Core_IHdmiDisplayMode<D>::RefreshRate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayMode)->get_RefreshRate(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Display_Core_IHdmiDisplayMode<D>::StereoEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayMode)->get_StereoEnabled(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Graphics_Display_Core_IHdmiDisplayMode<D>::BitsPerPixel() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayMode)->get_BitsPerPixel(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Display_Core_IHdmiDisplayMode<D>::IsEqual(Windows::Graphics::Display::Core::HdmiDisplayMode const& mode) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayMode)->IsEqual(get_abi(mode), &result));
    return result;
}

template <typename D> Windows::Graphics::Display::Core::HdmiDisplayColorSpace consume_Windows_Graphics_Display_Core_IHdmiDisplayMode<D>::ColorSpace() const
{
    Windows::Graphics::Display::Core::HdmiDisplayColorSpace value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayMode)->get_ColorSpace(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding consume_Windows_Graphics_Display_Core_IHdmiDisplayMode<D>::PixelEncoding() const
{
    Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayMode)->get_PixelEncoding(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Display_Core_IHdmiDisplayMode<D>::IsSdrLuminanceSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayMode)->get_IsSdrLuminanceSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Display_Core_IHdmiDisplayMode<D>::IsSmpte2084Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayMode)->get_IsSmpte2084Supported(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Display_Core_IHdmiDisplayMode<D>::Is2086MetadataSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::Core::IHdmiDisplayMode)->get_Is2086MetadataSupported(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Graphics::Display::Core::IHdmiDisplayInformation> : produce_base<D, Windows::Graphics::Display::Core::IHdmiDisplayInformation>
{
    HRESULT __stdcall GetSupportedDisplayModes(::IUnknown** result) noexcept override
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

    HRESULT __stdcall GetCurrentDisplayMode(::IUnknown** result) noexcept override
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

    HRESULT __stdcall SetDefaultDisplayModeAsync(::IUnknown** operation) noexcept override
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

    HRESULT __stdcall RequestSetCurrentDisplayModeAsync(::IUnknown* mode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestSetCurrentDisplayModeAsync(*reinterpret_cast<Windows::Graphics::Display::Core::HdmiDisplayMode const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestSetCurrentDisplayModeWithHdrAsync(::IUnknown* mode, abi_t<Windows::Graphics::Display::Core::HdmiDisplayHdrOption> hdrOption, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestSetCurrentDisplayModeAsync(*reinterpret_cast<Windows::Graphics::Display::Core::HdmiDisplayMode const*>(&mode), *reinterpret_cast<Windows::Graphics::Display::Core::HdmiDisplayHdrOption const*>(&hdrOption)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestSetCurrentDisplayModeWithHdrAndMetadataAsync(::IUnknown* mode, abi_t<Windows::Graphics::Display::Core::HdmiDisplayHdrOption> hdrOption, abi_t<Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata> hdrMetadata, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestSetCurrentDisplayModeAsync(*reinterpret_cast<Windows::Graphics::Display::Core::HdmiDisplayMode const*>(&mode), *reinterpret_cast<Windows::Graphics::Display::Core::HdmiDisplayHdrOption const*>(&hdrOption), *reinterpret_cast<Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata const*>(&hdrMetadata)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DisplayModesChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DisplayModesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DisplayModesChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayModesChanged(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall GetForCurrentView(::IUnknown** result) noexcept override
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
    HRESULT __stdcall get_ResolutionWidthInRawPixels(uint32_t* value) noexcept override
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

    HRESULT __stdcall get_ResolutionHeightInRawPixels(uint32_t* value) noexcept override
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

    HRESULT __stdcall get_RefreshRate(double* value) noexcept override
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

    HRESULT __stdcall get_StereoEnabled(bool* value) noexcept override
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

    HRESULT __stdcall get_BitsPerPixel(uint16_t* value) noexcept override
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

    HRESULT __stdcall IsEqual(::IUnknown* mode, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsEqual(*reinterpret_cast<Windows::Graphics::Display::Core::HdmiDisplayMode const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorSpace(abi_t<Windows::Graphics::Display::Core::HdmiDisplayColorSpace>* value) noexcept override
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

    HRESULT __stdcall get_PixelEncoding(abi_t<Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding>* value) noexcept override
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

    HRESULT __stdcall get_IsSdrLuminanceSupported(bool* value) noexcept override
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

    HRESULT __stdcall get_IsSmpte2084Supported(bool* value) noexcept override
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

    HRESULT __stdcall get_Is2086MetadataSupported(bool* value) noexcept override
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

WINRT_EXPORT namespace winrt::Windows::Graphics::Display::Core {

inline Windows::Graphics::Display::Core::HdmiDisplayInformation HdmiDisplayInformation::GetForCurrentView()
{
    return get_activation_factory<HdmiDisplayInformation, Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics>().GetForCurrentView();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Display::Core::IHdmiDisplayInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::Core::IHdmiDisplayInformation> {};

template<> struct hash<winrt::Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics> {};

template<> struct hash<winrt::Windows::Graphics::Display::Core::IHdmiDisplayMode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::Core::IHdmiDisplayMode> {};

template<> struct hash<winrt::Windows::Graphics::Display::Core::HdmiDisplayInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::Core::HdmiDisplayInformation> {};

template<> struct hash<winrt::Windows::Graphics::Display::Core::HdmiDisplayMode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::Core::HdmiDisplayMode> {};

}

WINRT_WARNING_POP
