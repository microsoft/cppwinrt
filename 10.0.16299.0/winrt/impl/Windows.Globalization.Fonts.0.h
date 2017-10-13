// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Text {

enum class FontStretch;
enum class FontStyle;
struct FontWeight;

}

WINRT_EXPORT namespace winrt::Windows::Globalization::Fonts {

struct ILanguageFont;
struct ILanguageFontGroup;
struct ILanguageFontGroupFactory;
struct LanguageFont;
struct LanguageFontGroup;

}

namespace winrt::impl {

template <> struct category<Windows::Globalization::Fonts::ILanguageFont>{ using type = interface_category; };
template <> struct category<Windows::Globalization::Fonts::ILanguageFontGroup>{ using type = interface_category; };
template <> struct category<Windows::Globalization::Fonts::ILanguageFontGroupFactory>{ using type = interface_category; };
template <> struct category<Windows::Globalization::Fonts::LanguageFont>{ using type = class_category; };
template <> struct category<Windows::Globalization::Fonts::LanguageFontGroup>{ using type = class_category; };
template <> struct name<Windows::Globalization::Fonts::ILanguageFont>{ static constexpr auto & value{ L"Windows.Globalization.Fonts.ILanguageFont" }; };
template <> struct name<Windows::Globalization::Fonts::ILanguageFontGroup>{ static constexpr auto & value{ L"Windows.Globalization.Fonts.ILanguageFontGroup" }; };
template <> struct name<Windows::Globalization::Fonts::ILanguageFontGroupFactory>{ static constexpr auto & value{ L"Windows.Globalization.Fonts.ILanguageFontGroupFactory" }; };
template <> struct name<Windows::Globalization::Fonts::LanguageFont>{ static constexpr auto & value{ L"Windows.Globalization.Fonts.LanguageFont" }; };
template <> struct name<Windows::Globalization::Fonts::LanguageFontGroup>{ static constexpr auto & value{ L"Windows.Globalization.Fonts.LanguageFontGroup" }; };
template <> struct guid<Windows::Globalization::Fonts::ILanguageFont>{ static constexpr GUID value{ 0xB12E5C3A,0xB76D,0x459B,{ 0xBE,0xEB,0x90,0x11,0x51,0xCD,0x77,0xD1 } }; };
template <> struct guid<Windows::Globalization::Fonts::ILanguageFontGroup>{ static constexpr GUID value{ 0xF33A7FC3,0x3A5C,0x4AEA,{ 0xB9,0xFF,0xB3,0x9F,0xB2,0x42,0xF7,0xF6 } }; };
template <> struct guid<Windows::Globalization::Fonts::ILanguageFontGroupFactory>{ static constexpr GUID value{ 0xFCAEAC67,0x4E77,0x49C7,{ 0xB8,0x56,0xDD,0xE9,0x34,0xFC,0x73,0x5B } }; };
template <> struct default_interface<Windows::Globalization::Fonts::LanguageFont>{ using type = Windows::Globalization::Fonts::ILanguageFont; };
template <> struct default_interface<Windows::Globalization::Fonts::LanguageFontGroup>{ using type = Windows::Globalization::Fonts::ILanguageFontGroup; };

template <typename D>
struct consume_Windows_Globalization_Fonts_ILanguageFont
{
    hstring FontFamily() const noexcept;
    Windows::UI::Text::FontWeight FontWeight() const noexcept;
    Windows::UI::Text::FontStretch FontStretch() const noexcept;
    Windows::UI::Text::FontStyle FontStyle() const noexcept;
    double ScaleFactor() const noexcept;
};
template <> struct consume<Windows::Globalization::Fonts::ILanguageFont> { template <typename D> using type = consume_Windows_Globalization_Fonts_ILanguageFont<D>; };

template <typename D>
struct consume_Windows_Globalization_Fonts_ILanguageFontGroup
{
    Windows::Globalization::Fonts::LanguageFont UITextFont() const noexcept;
    Windows::Globalization::Fonts::LanguageFont UIHeadingFont() const noexcept;
    Windows::Globalization::Fonts::LanguageFont UITitleFont() const noexcept;
    Windows::Globalization::Fonts::LanguageFont UICaptionFont() const noexcept;
    Windows::Globalization::Fonts::LanguageFont UINotificationHeadingFont() const noexcept;
    Windows::Globalization::Fonts::LanguageFont TraditionalDocumentFont() const noexcept;
    Windows::Globalization::Fonts::LanguageFont ModernDocumentFont() const noexcept;
    Windows::Globalization::Fonts::LanguageFont DocumentHeadingFont() const noexcept;
    Windows::Globalization::Fonts::LanguageFont FixedWidthTextFont() const noexcept;
    Windows::Globalization::Fonts::LanguageFont DocumentAlternate1Font() const noexcept;
    Windows::Globalization::Fonts::LanguageFont DocumentAlternate2Font() const noexcept;
};
template <> struct consume<Windows::Globalization::Fonts::ILanguageFontGroup> { template <typename D> using type = consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>; };

template <typename D>
struct consume_Windows_Globalization_Fonts_ILanguageFontGroupFactory
{
    Windows::Globalization::Fonts::LanguageFontGroup CreateLanguageFontGroup(param::hstring const& languageTag) const;
};
template <> struct consume<Windows::Globalization::Fonts::ILanguageFontGroupFactory> { template <typename D> using type = consume_Windows_Globalization_Fonts_ILanguageFontGroupFactory<D>; };

template <> struct abi<Windows::Globalization::Fonts::ILanguageFont>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FontFamily(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FontWeight(struct_of<2>* weight) = 0;
    virtual HRESULT __stdcall get_FontStretch(Windows::UI::Text::FontStretch* stretch) = 0;
    virtual HRESULT __stdcall get_FontStyle(Windows::UI::Text::FontStyle* style) = 0;
    virtual HRESULT __stdcall get_ScaleFactor(double* scale) = 0;
};};

template <> struct abi<Windows::Globalization::Fonts::ILanguageFontGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UITextFont(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_UIHeadingFont(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_UITitleFont(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_UICaptionFont(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_UINotificationHeadingFont(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TraditionalDocumentFont(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ModernDocumentFont(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentHeadingFont(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FixedWidthTextFont(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentAlternate1Font(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentAlternate2Font(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Globalization::Fonts::ILanguageFontGroupFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateLanguageFontGroup(HSTRING languageTag, ::IUnknown** recommendedFonts) = 0;
};};

}
