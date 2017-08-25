// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Media.ClosedCaptioning.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Media::ClosedCaptioning::ClosedCaptionColor consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontColor() const
{
    Windows::Media::ClosedCaptioning::ClosedCaptionColor value{};
    check_hresult(WINRT_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_FontColor(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::ComputedFontColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_ComputedFontColor(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::ClosedCaptioning::ClosedCaptionOpacity consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontOpacity() const
{
    Windows::Media::ClosedCaptioning::ClosedCaptionOpacity value{};
    check_hresult(WINRT_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_FontOpacity(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::ClosedCaptioning::ClosedCaptionSize consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontSize() const
{
    Windows::Media::ClosedCaptioning::ClosedCaptionSize value{};
    check_hresult(WINRT_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_FontSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::ClosedCaptioning::ClosedCaptionStyle consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontStyle() const
{
    Windows::Media::ClosedCaptioning::ClosedCaptionStyle value{};
    check_hresult(WINRT_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_FontStyle(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontEffect() const
{
    Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect value{};
    check_hresult(WINRT_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_FontEffect(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::ClosedCaptioning::ClosedCaptionColor consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::BackgroundColor() const
{
    Windows::Media::ClosedCaptioning::ClosedCaptionColor value{};
    check_hresult(WINRT_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::ComputedBackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_ComputedBackgroundColor(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::ClosedCaptioning::ClosedCaptionOpacity consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::BackgroundOpacity() const
{
    Windows::Media::ClosedCaptioning::ClosedCaptionOpacity value{};
    check_hresult(WINRT_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_BackgroundOpacity(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::ClosedCaptioning::ClosedCaptionColor consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::RegionColor() const
{
    Windows::Media::ClosedCaptioning::ClosedCaptionColor value{};
    check_hresult(WINRT_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_RegionColor(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::ComputedRegionColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_ComputedRegionColor(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::ClosedCaptioning::ClosedCaptionOpacity consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::RegionOpacity() const
{
    Windows::Media::ClosedCaptioning::ClosedCaptionOpacity value{};
    check_hresult(WINRT_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_RegionOpacity(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics> : produce_base<D, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>
{
    HRESULT __stdcall get_FontColor(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionColor>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ComputedFontColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ComputedFontColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontOpacity(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontOpacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontSize(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionSize>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontStyle(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionStyle>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontEffect(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontEffect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionColor>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ComputedBackgroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ComputedBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundOpacity(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundOpacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegionColor(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionColor>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RegionColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ComputedRegionColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ComputedRegionColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegionOpacity(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RegionOpacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::ClosedCaptioning {

inline Windows::Media::ClosedCaptioning::ClosedCaptionColor ClosedCaptionProperties::FontColor()
{
    return get_activation_factory<ClosedCaptionProperties, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>().FontColor();
}

inline Windows::UI::Color ClosedCaptionProperties::ComputedFontColor()
{
    return get_activation_factory<ClosedCaptionProperties, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>().ComputedFontColor();
}

inline Windows::Media::ClosedCaptioning::ClosedCaptionOpacity ClosedCaptionProperties::FontOpacity()
{
    return get_activation_factory<ClosedCaptionProperties, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>().FontOpacity();
}

inline Windows::Media::ClosedCaptioning::ClosedCaptionSize ClosedCaptionProperties::FontSize()
{
    return get_activation_factory<ClosedCaptionProperties, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>().FontSize();
}

inline Windows::Media::ClosedCaptioning::ClosedCaptionStyle ClosedCaptionProperties::FontStyle()
{
    return get_activation_factory<ClosedCaptionProperties, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>().FontStyle();
}

inline Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect ClosedCaptionProperties::FontEffect()
{
    return get_activation_factory<ClosedCaptionProperties, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>().FontEffect();
}

inline Windows::Media::ClosedCaptioning::ClosedCaptionColor ClosedCaptionProperties::BackgroundColor()
{
    return get_activation_factory<ClosedCaptionProperties, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>().BackgroundColor();
}

inline Windows::UI::Color ClosedCaptionProperties::ComputedBackgroundColor()
{
    return get_activation_factory<ClosedCaptionProperties, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>().ComputedBackgroundColor();
}

inline Windows::Media::ClosedCaptioning::ClosedCaptionOpacity ClosedCaptionProperties::BackgroundOpacity()
{
    return get_activation_factory<ClosedCaptionProperties, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>().BackgroundOpacity();
}

inline Windows::Media::ClosedCaptioning::ClosedCaptionColor ClosedCaptionProperties::RegionColor()
{
    return get_activation_factory<ClosedCaptionProperties, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>().RegionColor();
}

inline Windows::UI::Color ClosedCaptionProperties::ComputedRegionColor()
{
    return get_activation_factory<ClosedCaptionProperties, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>().ComputedRegionColor();
}

inline Windows::Media::ClosedCaptioning::ClosedCaptionOpacity ClosedCaptionProperties::RegionOpacity()
{
    return get_activation_factory<ClosedCaptionProperties, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>().RegionOpacity();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics> {};

template<> struct hash<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties> {};

}

WINRT_WARNING_POP
