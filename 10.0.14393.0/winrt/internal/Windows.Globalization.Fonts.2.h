// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Globalization.Fonts.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Globalization::Fonts {

template <typename D>
struct WINRT_EBO impl_ILanguageFont
{
    hstring FontFamily() const;
    Windows::UI::Text::FontWeight FontWeight() const;
    Windows::UI::Text::FontStretch FontStretch() const;
    Windows::UI::Text::FontStyle FontStyle() const;
    double ScaleFactor() const;
};

template <typename D>
struct WINRT_EBO impl_ILanguageFontGroup
{
    Windows::Globalization::Fonts::LanguageFont UITextFont() const;
    Windows::Globalization::Fonts::LanguageFont UIHeadingFont() const;
    Windows::Globalization::Fonts::LanguageFont UITitleFont() const;
    Windows::Globalization::Fonts::LanguageFont UICaptionFont() const;
    Windows::Globalization::Fonts::LanguageFont UINotificationHeadingFont() const;
    Windows::Globalization::Fonts::LanguageFont TraditionalDocumentFont() const;
    Windows::Globalization::Fonts::LanguageFont ModernDocumentFont() const;
    Windows::Globalization::Fonts::LanguageFont DocumentHeadingFont() const;
    Windows::Globalization::Fonts::LanguageFont FixedWidthTextFont() const;
    Windows::Globalization::Fonts::LanguageFont DocumentAlternate1Font() const;
    Windows::Globalization::Fonts::LanguageFont DocumentAlternate2Font() const;
};

template <typename D>
struct WINRT_EBO impl_ILanguageFontGroupFactory
{
    Windows::Globalization::Fonts::LanguageFontGroup CreateLanguageFontGroup(hstring_ref languageTag) const;
};

struct ILanguageFont :
    Windows::IInspectable,
    impl::consume<ILanguageFont>
{
    ILanguageFont(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILanguageFont>(m_ptr); }
};

struct ILanguageFontGroup :
    Windows::IInspectable,
    impl::consume<ILanguageFontGroup>
{
    ILanguageFontGroup(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILanguageFontGroup>(m_ptr); }
};

struct ILanguageFontGroupFactory :
    Windows::IInspectable,
    impl::consume<ILanguageFontGroupFactory>
{
    ILanguageFontGroupFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILanguageFontGroupFactory>(m_ptr); }
};

}

}
