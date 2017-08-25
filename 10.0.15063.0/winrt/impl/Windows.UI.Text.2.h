// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Text.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Text {

struct FontWeight
{
    uint16_t Weight;
};

struct WINRT_EBO FontWeights :
    Windows::UI::Text::IFontWeights
{
    FontWeights(std::nullptr_t) noexcept {}
    static Windows::UI::Text::FontWeight Black();
    static Windows::UI::Text::FontWeight Bold();
    static Windows::UI::Text::FontWeight ExtraBlack();
    static Windows::UI::Text::FontWeight ExtraBold();
    static Windows::UI::Text::FontWeight ExtraLight();
    static Windows::UI::Text::FontWeight Light();
    static Windows::UI::Text::FontWeight Medium();
    static Windows::UI::Text::FontWeight Normal();
    static Windows::UI::Text::FontWeight SemiBold();
    static Windows::UI::Text::FontWeight SemiLight();
    static Windows::UI::Text::FontWeight Thin();
};

struct WINRT_EBO RichEditTextDocument :
    Windows::UI::Text::ITextDocument,
    impl::require<RichEditTextDocument, Windows::UI::Text::ITextDocument2>
{
    RichEditTextDocument(std::nullptr_t) noexcept {}
};

struct TextConstants
{
    TextConstants() = delete;
    static Windows::UI::Color AutoColor();
    static int32_t MinUnitCount();
    static int32_t MaxUnitCount();
    static Windows::UI::Color UndefinedColor();
    static float UndefinedFloatValue();
    static int32_t UndefinedInt32Value();
    static Windows::UI::Text::FontStretch UndefinedFontStretch();
    static Windows::UI::Text::FontStyle UndefinedFontStyle();
};

}
