// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Text.1.h"
#include "winrt/impl/Windows.Globalization.Fonts.1.h"

WINRT_EXPORT namespace winrt::Windows::Globalization::Fonts {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Globalization::Fonts {

struct WINRT_EBO LanguageFont :
    Windows::Globalization::Fonts::ILanguageFont
{
    LanguageFont(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LanguageFontGroup :
    Windows::Globalization::Fonts::ILanguageFontGroup
{
    LanguageFontGroup(std::nullptr_t) noexcept {}
    LanguageFontGroup(param::hstring const& languageTag);
};

}
