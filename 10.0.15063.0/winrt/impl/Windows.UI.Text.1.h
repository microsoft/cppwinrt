// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.Text.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Text {

struct WINRT_EBO IFontWeights :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFontWeights>
{
    IFontWeights(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFontWeightsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFontWeightsStatics>
{
    IFontWeightsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextCharacterFormat :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextCharacterFormat>
{
    ITextCharacterFormat(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextConstantsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextConstantsStatics>
{
    ITextConstantsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextDocument :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextDocument>
{
    ITextDocument(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextDocument2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextDocument2>,
    impl::require<ITextDocument2, Windows::UI::Text::ITextDocument>
{
    ITextDocument2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextParagraphFormat :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextParagraphFormat>
{
    ITextParagraphFormat(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextRange :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextRange>
{
    ITextRange(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextSelection :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextSelection>,
    impl::require<ITextSelection, Windows::UI::Text::ITextRange>
{
    ITextSelection(std::nullptr_t = nullptr) noexcept {}
};

}
