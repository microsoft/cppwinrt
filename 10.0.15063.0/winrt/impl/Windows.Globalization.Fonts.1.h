// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Text.0.h"
#include "winrt/impl/Windows.Globalization.Fonts.0.h"

WINRT_EXPORT namespace winrt::Windows::Globalization::Fonts {

struct WINRT_EBO ILanguageFont :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILanguageFont>
{
    ILanguageFont(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILanguageFontGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILanguageFontGroup>
{
    ILanguageFontGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILanguageFontGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILanguageFontGroupFactory>
{
    ILanguageFontGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

}
