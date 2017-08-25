// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Text.0.h"

WINRT_EXPORT namespace winrt::Windows::Data::Text {

struct WINRT_EBO IAlternateWordForm :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAlternateWordForm>
{
    IAlternateWordForm(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISelectableWordSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectableWordSegment>
{
    ISelectableWordSegment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISelectableWordsSegmenter :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectableWordsSegmenter>
{
    ISelectableWordsSegmenter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISelectableWordsSegmenterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectableWordsSegmenterFactory>
{
    ISelectableWordsSegmenterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISemanticTextQuery :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISemanticTextQuery>
{
    ISemanticTextQuery(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISemanticTextQueryFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISemanticTextQueryFactory>
{
    ISemanticTextQueryFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextConversionGenerator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextConversionGenerator>
{
    ITextConversionGenerator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextConversionGeneratorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextConversionGeneratorFactory>
{
    ITextConversionGeneratorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextPhoneme :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextPhoneme>
{
    ITextPhoneme(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextPredictionGenerator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextPredictionGenerator>
{
    ITextPredictionGenerator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextPredictionGeneratorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextPredictionGeneratorFactory>
{
    ITextPredictionGeneratorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextReverseConversionGenerator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextReverseConversionGenerator>
{
    ITextReverseConversionGenerator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextReverseConversionGenerator2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextReverseConversionGenerator2>
{
    ITextReverseConversionGenerator2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextReverseConversionGeneratorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextReverseConversionGeneratorFactory>
{
    ITextReverseConversionGeneratorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUnicodeCharactersStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUnicodeCharactersStatics>
{
    IUnicodeCharactersStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWordSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWordSegment>
{
    IWordSegment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWordsSegmenter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWordsSegmenter>
{
    IWordsSegmenter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWordsSegmenterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWordsSegmenterFactory>
{
    IWordsSegmenterFactory(std::nullptr_t = nullptr) noexcept {}
};

}
