// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Text.1.h"

WINRT_EXPORT namespace winrt::Windows::Data::Text {

struct SelectableWordSegmentsTokenizingHandler : Windows::Foundation::IUnknown
{
    SelectableWordSegmentsTokenizingHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> SelectableWordSegmentsTokenizingHandler(L lambda);
    template <typename F> SelectableWordSegmentsTokenizingHandler(F* function);
    template <typename O, typename M> SelectableWordSegmentsTokenizingHandler(O* object, M method);
    void operator()(param::iterable<Windows::Data::Text::SelectableWordSegment> const& precedingWords, param::iterable<Windows::Data::Text::SelectableWordSegment> const& words) const;
};

struct WordSegmentsTokenizingHandler : Windows::Foundation::IUnknown
{
    WordSegmentsTokenizingHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> WordSegmentsTokenizingHandler(L lambda);
    template <typename F> WordSegmentsTokenizingHandler(F* function);
    template <typename O, typename M> WordSegmentsTokenizingHandler(O* object, M method);
    void operator()(param::iterable<Windows::Data::Text::WordSegment> const& precedingWords, param::iterable<Windows::Data::Text::WordSegment> const& words) const;
};

struct TextSegment
{
    uint32_t StartPosition;
    uint32_t Length;
};

struct WINRT_EBO AlternateWordForm :
    Windows::Data::Text::IAlternateWordForm
{
    AlternateWordForm(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SelectableWordSegment :
    Windows::Data::Text::ISelectableWordSegment
{
    SelectableWordSegment(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SelectableWordsSegmenter :
    Windows::Data::Text::ISelectableWordsSegmenter
{
    SelectableWordsSegmenter(std::nullptr_t) noexcept {}
    SelectableWordsSegmenter(param::hstring const& language);
};

struct WINRT_EBO SemanticTextQuery :
    Windows::Data::Text::ISemanticTextQuery
{
    SemanticTextQuery(std::nullptr_t) noexcept {}
    SemanticTextQuery(param::hstring const& aqsFilter);
    SemanticTextQuery(param::hstring const& aqsFilter, param::hstring const& filterLanguage);
};

struct WINRT_EBO TextConversionGenerator :
    Windows::Data::Text::ITextConversionGenerator
{
    TextConversionGenerator(std::nullptr_t) noexcept {}
    TextConversionGenerator(param::hstring const& languageTag);
};

struct WINRT_EBO TextPhoneme :
    Windows::Data::Text::ITextPhoneme
{
    TextPhoneme(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TextPredictionGenerator :
    Windows::Data::Text::ITextPredictionGenerator
{
    TextPredictionGenerator(std::nullptr_t) noexcept {}
    TextPredictionGenerator(param::hstring const& languageTag);
};

struct WINRT_EBO TextReverseConversionGenerator :
    Windows::Data::Text::ITextReverseConversionGenerator,
    impl::require<TextReverseConversionGenerator, Windows::Data::Text::ITextReverseConversionGenerator2>
{
    TextReverseConversionGenerator(std::nullptr_t) noexcept {}
    TextReverseConversionGenerator(param::hstring const& languageTag);
};

struct UnicodeCharacters
{
    UnicodeCharacters() = delete;
    static uint32_t GetCodepointFromSurrogatePair(uint32_t highSurrogate, uint32_t lowSurrogate);
    static void GetSurrogatePairFromCodepoint(uint32_t codepoint, char16_t& highSurrogate, char16_t& lowSurrogate);
    static bool IsHighSurrogate(uint32_t codepoint);
    static bool IsLowSurrogate(uint32_t codepoint);
    static bool IsSupplementary(uint32_t codepoint);
    static bool IsNoncharacter(uint32_t codepoint);
    static bool IsWhitespace(uint32_t codepoint);
    static bool IsAlphabetic(uint32_t codepoint);
    static bool IsCased(uint32_t codepoint);
    static bool IsUppercase(uint32_t codepoint);
    static bool IsLowercase(uint32_t codepoint);
    static bool IsIdStart(uint32_t codepoint);
    static bool IsIdContinue(uint32_t codepoint);
    static bool IsGraphemeBase(uint32_t codepoint);
    static bool IsGraphemeExtend(uint32_t codepoint);
    static Windows::Data::Text::UnicodeNumericType GetNumericType(uint32_t codepoint);
    static Windows::Data::Text::UnicodeGeneralCategory GetGeneralCategory(uint32_t codepoint);
};

struct WINRT_EBO WordSegment :
    Windows::Data::Text::IWordSegment
{
    WordSegment(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WordsSegmenter :
    Windows::Data::Text::IWordsSegmenter
{
    WordsSegmenter(std::nullptr_t) noexcept {}
    WordsSegmenter(param::hstring const& language);
};

}
