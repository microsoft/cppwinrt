// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Globalization.Fonts.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Globalization::Fonts {

struct WINRT_EBO LanguageFont :
    Windows::Globalization::Fonts::ILanguageFont
{
    LanguageFont(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LanguageFontGroup :
    Windows::Globalization::Fonts::ILanguageFontGroup
{
    LanguageFontGroup(std::nullptr_t) noexcept {}
    LanguageFontGroup(hstring_view languageTag);
};

}

}
