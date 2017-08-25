// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.UI.Text.2.h"
#include "winrt/impl/Windows.Globalization.Fonts.2.h"
#include "winrt/Windows.Globalization.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Globalization_Fonts_ILanguageFont<D>::FontFamily() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFont)->get_FontFamily(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight consume_Windows_Globalization_Fonts_ILanguageFont<D>::FontWeight() const
{
    Windows::UI::Text::FontWeight weight{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFont)->get_FontWeight(put_abi(weight)));
    return weight;
}

template <typename D> Windows::UI::Text::FontStretch consume_Windows_Globalization_Fonts_ILanguageFont<D>::FontStretch() const
{
    Windows::UI::Text::FontStretch stretch{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFont)->get_FontStretch(put_abi(stretch)));
    return stretch;
}

template <typename D> Windows::UI::Text::FontStyle consume_Windows_Globalization_Fonts_ILanguageFont<D>::FontStyle() const
{
    Windows::UI::Text::FontStyle style{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFont)->get_FontStyle(put_abi(style)));
    return style;
}

template <typename D> double consume_Windows_Globalization_Fonts_ILanguageFont<D>::ScaleFactor() const
{
    double scale{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFont)->get_ScaleFactor(&scale));
    return scale;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::UITextFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_UITextFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::UIHeadingFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_UIHeadingFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::UITitleFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_UITitleFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::UICaptionFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_UICaptionFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::UINotificationHeadingFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_UINotificationHeadingFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::TraditionalDocumentFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_TraditionalDocumentFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::ModernDocumentFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_ModernDocumentFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::DocumentHeadingFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_DocumentHeadingFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::FixedWidthTextFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_FixedWidthTextFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::DocumentAlternate1Font() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_DocumentAlternate1Font(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::DocumentAlternate2Font() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_DocumentAlternate2Font(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFontGroup consume_Windows_Globalization_Fonts_ILanguageFontGroupFactory<D>::CreateLanguageFontGroup(param::hstring const& languageTag) const
{
    Windows::Globalization::Fonts::LanguageFontGroup recommendedFonts{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroupFactory)->CreateLanguageFontGroup(get_abi(languageTag), put_abi(recommendedFonts)));
    return recommendedFonts;
}

template <typename D>
struct produce<D, Windows::Globalization::Fonts::ILanguageFont> : produce_base<D, Windows::Globalization::Fonts::ILanguageFont>
{
    HRESULT __stdcall get_FontFamily(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontFamily());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontWeight(abi_t<Windows::UI::Text::FontWeight>* weight) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *weight = detach_abi(this->shim().FontWeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontStretch(abi_t<Windows::UI::Text::FontStretch>* stretch) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *stretch = detach_abi(this->shim().FontStretch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontStyle(abi_t<Windows::UI::Text::FontStyle>* style) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *style = detach_abi(this->shim().FontStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleFactor(double* scale) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *scale = detach_abi(this->shim().ScaleFactor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::Fonts::ILanguageFontGroup> : produce_base<D, Windows::Globalization::Fonts::ILanguageFontGroup>
{
    HRESULT __stdcall get_UITextFont(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UITextFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UIHeadingFont(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UIHeadingFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UITitleFont(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UITitleFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UICaptionFont(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UICaptionFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UINotificationHeadingFont(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UINotificationHeadingFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TraditionalDocumentFont(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TraditionalDocumentFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModernDocumentFont(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ModernDocumentFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentHeadingFont(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DocumentHeadingFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FixedWidthTextFont(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FixedWidthTextFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentAlternate1Font(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DocumentAlternate1Font());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentAlternate2Font(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DocumentAlternate2Font());
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
struct produce<D, Windows::Globalization::Fonts::ILanguageFontGroupFactory> : produce_base<D, Windows::Globalization::Fonts::ILanguageFontGroupFactory>
{
    HRESULT __stdcall CreateLanguageFontGroup(HSTRING languageTag, ::IUnknown** recommendedFonts) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *recommendedFonts = detach_abi(this->shim().CreateLanguageFontGroup(*reinterpret_cast<hstring const*>(&languageTag)));
            return S_OK;
        }
        catch (...)
        {
            *recommendedFonts = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Globalization::Fonts {

inline LanguageFontGroup::LanguageFontGroup(param::hstring const& languageTag) :
    LanguageFontGroup(get_activation_factory<LanguageFontGroup, Windows::Globalization::Fonts::ILanguageFontGroupFactory>().CreateLanguageFontGroup(languageTag))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Globalization::Fonts::ILanguageFont> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::Fonts::ILanguageFont> {};

template<> struct hash<winrt::Windows::Globalization::Fonts::ILanguageFontGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::Fonts::ILanguageFontGroup> {};

template<> struct hash<winrt::Windows::Globalization::Fonts::ILanguageFontGroupFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::Fonts::ILanguageFontGroupFactory> {};

template<> struct hash<winrt::Windows::Globalization::Fonts::LanguageFont> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::Fonts::LanguageFont> {};

template<> struct hash<winrt::Windows::Globalization::Fonts::LanguageFontGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::Fonts::LanguageFontGroup> {};

}

WINRT_WARNING_POP
