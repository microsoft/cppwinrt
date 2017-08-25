// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Data::Text {

enum class AlternateNormalizationFormat
{
    NotNormalized = 0,
    Number = 1,
    Currency = 3,
    Date = 4,
    Time = 5,
};

enum class UnicodeGeneralCategory
{
    UppercaseLetter = 0,
    LowercaseLetter = 1,
    TitlecaseLetter = 2,
    ModifierLetter = 3,
    OtherLetter = 4,
    NonspacingMark = 5,
    SpacingCombiningMark = 6,
    EnclosingMark = 7,
    DecimalDigitNumber = 8,
    LetterNumber = 9,
    OtherNumber = 10,
    SpaceSeparator = 11,
    LineSeparator = 12,
    ParagraphSeparator = 13,
    Control = 14,
    Format = 15,
    Surrogate = 16,
    PrivateUse = 17,
    ConnectorPunctuation = 18,
    DashPunctuation = 19,
    OpenPunctuation = 20,
    ClosePunctuation = 21,
    InitialQuotePunctuation = 22,
    FinalQuotePunctuation = 23,
    OtherPunctuation = 24,
    MathSymbol = 25,
    CurrencySymbol = 26,
    ModifierSymbol = 27,
    OtherSymbol = 28,
    NotAssigned = 29,
};

enum class UnicodeNumericType
{
    None = 0,
    Decimal = 1,
    Digit = 2,
    Numeric = 3,
};

struct IAlternateWordForm;
struct ISelectableWordSegment;
struct ISelectableWordsSegmenter;
struct ISelectableWordsSegmenterFactory;
struct ISemanticTextQuery;
struct ISemanticTextQueryFactory;
struct ITextConversionGenerator;
struct ITextConversionGeneratorFactory;
struct ITextPhoneme;
struct ITextPredictionGenerator;
struct ITextPredictionGeneratorFactory;
struct ITextReverseConversionGenerator;
struct ITextReverseConversionGenerator2;
struct ITextReverseConversionGeneratorFactory;
struct IUnicodeCharactersStatics;
struct IWordSegment;
struct IWordsSegmenter;
struct IWordsSegmenterFactory;
struct AlternateWordForm;
struct SelectableWordSegment;
struct SelectableWordsSegmenter;
struct SemanticTextQuery;
struct TextConversionGenerator;
struct TextPhoneme;
struct TextPredictionGenerator;
struct TextReverseConversionGenerator;
struct UnicodeCharacters;
struct WordSegment;
struct WordsSegmenter;
struct TextSegment;
struct SelectableWordSegmentsTokenizingHandler;
struct WordSegmentsTokenizingHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Data::Text::IAlternateWordForm>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::ISelectableWordSegment>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::ISelectableWordsSegmenter>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::ISelectableWordsSegmenterFactory>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::ISemanticTextQuery>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::ISemanticTextQueryFactory>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::ITextConversionGenerator>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::ITextConversionGeneratorFactory>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::ITextPhoneme>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::ITextPredictionGenerator>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::ITextPredictionGeneratorFactory>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::ITextReverseConversionGenerator>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::ITextReverseConversionGenerator2>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::ITextReverseConversionGeneratorFactory>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::IUnicodeCharactersStatics>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::IWordSegment>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::IWordsSegmenter>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::IWordsSegmenterFactory>{ using type = interface_category; };
template <> struct category<Windows::Data::Text::AlternateWordForm>{ using type = class_category; };
template <> struct category<Windows::Data::Text::SelectableWordSegment>{ using type = class_category; };
template <> struct category<Windows::Data::Text::SelectableWordsSegmenter>{ using type = class_category; };
template <> struct category<Windows::Data::Text::SemanticTextQuery>{ using type = class_category; };
template <> struct category<Windows::Data::Text::TextConversionGenerator>{ using type = class_category; };
template <> struct category<Windows::Data::Text::TextPhoneme>{ using type = class_category; };
template <> struct category<Windows::Data::Text::TextPredictionGenerator>{ using type = class_category; };
template <> struct category<Windows::Data::Text::TextReverseConversionGenerator>{ using type = class_category; };
template <> struct category<Windows::Data::Text::UnicodeCharacters>{ using type = class_category; };
template <> struct category<Windows::Data::Text::WordSegment>{ using type = class_category; };
template <> struct category<Windows::Data::Text::WordsSegmenter>{ using type = class_category; };
template <> struct category<Windows::Data::Text::AlternateNormalizationFormat>{ using type = enum_category; };
template <> struct category<Windows::Data::Text::UnicodeGeneralCategory>{ using type = enum_category; };
template <> struct category<Windows::Data::Text::UnicodeNumericType>{ using type = enum_category; };
template <> struct category<Windows::Data::Text::TextSegment>{ using type = struct_category<uint32_t,uint32_t>; };
template <> struct category<Windows::Data::Text::SelectableWordSegmentsTokenizingHandler>{ using type = delegate_category; };
template <> struct category<Windows::Data::Text::WordSegmentsTokenizingHandler>{ using type = delegate_category; };
template <> struct name<Windows::Data::Text::IAlternateWordForm>{ static constexpr auto & value{ L"Windows.Data.Text.IAlternateWordForm" }; };
template <> struct name<Windows::Data::Text::ISelectableWordSegment>{ static constexpr auto & value{ L"Windows.Data.Text.ISelectableWordSegment" }; };
template <> struct name<Windows::Data::Text::ISelectableWordsSegmenter>{ static constexpr auto & value{ L"Windows.Data.Text.ISelectableWordsSegmenter" }; };
template <> struct name<Windows::Data::Text::ISelectableWordsSegmenterFactory>{ static constexpr auto & value{ L"Windows.Data.Text.ISelectableWordsSegmenterFactory" }; };
template <> struct name<Windows::Data::Text::ISemanticTextQuery>{ static constexpr auto & value{ L"Windows.Data.Text.ISemanticTextQuery" }; };
template <> struct name<Windows::Data::Text::ISemanticTextQueryFactory>{ static constexpr auto & value{ L"Windows.Data.Text.ISemanticTextQueryFactory" }; };
template <> struct name<Windows::Data::Text::ITextConversionGenerator>{ static constexpr auto & value{ L"Windows.Data.Text.ITextConversionGenerator" }; };
template <> struct name<Windows::Data::Text::ITextConversionGeneratorFactory>{ static constexpr auto & value{ L"Windows.Data.Text.ITextConversionGeneratorFactory" }; };
template <> struct name<Windows::Data::Text::ITextPhoneme>{ static constexpr auto & value{ L"Windows.Data.Text.ITextPhoneme" }; };
template <> struct name<Windows::Data::Text::ITextPredictionGenerator>{ static constexpr auto & value{ L"Windows.Data.Text.ITextPredictionGenerator" }; };
template <> struct name<Windows::Data::Text::ITextPredictionGeneratorFactory>{ static constexpr auto & value{ L"Windows.Data.Text.ITextPredictionGeneratorFactory" }; };
template <> struct name<Windows::Data::Text::ITextReverseConversionGenerator>{ static constexpr auto & value{ L"Windows.Data.Text.ITextReverseConversionGenerator" }; };
template <> struct name<Windows::Data::Text::ITextReverseConversionGenerator2>{ static constexpr auto & value{ L"Windows.Data.Text.ITextReverseConversionGenerator2" }; };
template <> struct name<Windows::Data::Text::ITextReverseConversionGeneratorFactory>{ static constexpr auto & value{ L"Windows.Data.Text.ITextReverseConversionGeneratorFactory" }; };
template <> struct name<Windows::Data::Text::IUnicodeCharactersStatics>{ static constexpr auto & value{ L"Windows.Data.Text.IUnicodeCharactersStatics" }; };
template <> struct name<Windows::Data::Text::IWordSegment>{ static constexpr auto & value{ L"Windows.Data.Text.IWordSegment" }; };
template <> struct name<Windows::Data::Text::IWordsSegmenter>{ static constexpr auto & value{ L"Windows.Data.Text.IWordsSegmenter" }; };
template <> struct name<Windows::Data::Text::IWordsSegmenterFactory>{ static constexpr auto & value{ L"Windows.Data.Text.IWordsSegmenterFactory" }; };
template <> struct name<Windows::Data::Text::AlternateWordForm>{ static constexpr auto & value{ L"Windows.Data.Text.AlternateWordForm" }; };
template <> struct name<Windows::Data::Text::SelectableWordSegment>{ static constexpr auto & value{ L"Windows.Data.Text.SelectableWordSegment" }; };
template <> struct name<Windows::Data::Text::SelectableWordsSegmenter>{ static constexpr auto & value{ L"Windows.Data.Text.SelectableWordsSegmenter" }; };
template <> struct name<Windows::Data::Text::SemanticTextQuery>{ static constexpr auto & value{ L"Windows.Data.Text.SemanticTextQuery" }; };
template <> struct name<Windows::Data::Text::TextConversionGenerator>{ static constexpr auto & value{ L"Windows.Data.Text.TextConversionGenerator" }; };
template <> struct name<Windows::Data::Text::TextPhoneme>{ static constexpr auto & value{ L"Windows.Data.Text.TextPhoneme" }; };
template <> struct name<Windows::Data::Text::TextPredictionGenerator>{ static constexpr auto & value{ L"Windows.Data.Text.TextPredictionGenerator" }; };
template <> struct name<Windows::Data::Text::TextReverseConversionGenerator>{ static constexpr auto & value{ L"Windows.Data.Text.TextReverseConversionGenerator" }; };
template <> struct name<Windows::Data::Text::UnicodeCharacters>{ static constexpr auto & value{ L"Windows.Data.Text.UnicodeCharacters" }; };
template <> struct name<Windows::Data::Text::WordSegment>{ static constexpr auto & value{ L"Windows.Data.Text.WordSegment" }; };
template <> struct name<Windows::Data::Text::WordsSegmenter>{ static constexpr auto & value{ L"Windows.Data.Text.WordsSegmenter" }; };
template <> struct name<Windows::Data::Text::AlternateNormalizationFormat>{ static constexpr auto & value{ L"Windows.Data.Text.AlternateNormalizationFormat" }; };
template <> struct name<Windows::Data::Text::UnicodeGeneralCategory>{ static constexpr auto & value{ L"Windows.Data.Text.UnicodeGeneralCategory" }; };
template <> struct name<Windows::Data::Text::UnicodeNumericType>{ static constexpr auto & value{ L"Windows.Data.Text.UnicodeNumericType" }; };
template <> struct name<Windows::Data::Text::TextSegment>{ static constexpr auto & value{ L"Windows.Data.Text.TextSegment" }; };
template <> struct name<Windows::Data::Text::SelectableWordSegmentsTokenizingHandler>{ static constexpr auto & value{ L"Windows.Data.Text.SelectableWordSegmentsTokenizingHandler" }; };
template <> struct name<Windows::Data::Text::WordSegmentsTokenizingHandler>{ static constexpr auto & value{ L"Windows.Data.Text.WordSegmentsTokenizingHandler" }; };
template <> struct guid<Windows::Data::Text::IAlternateWordForm>{ static constexpr GUID value{ 0x47396C1E,0x51B9,0x4207,{ 0x91,0x46,0x24,0x8E,0x63,0x6A,0x1D,0x1D } }; };
template <> struct guid<Windows::Data::Text::ISelectableWordSegment>{ static constexpr GUID value{ 0x916A4CB7,0x8AA7,0x4C78,{ 0xB3,0x74,0x5D,0xED,0xB7,0x52,0xE6,0x0B } }; };
template <> struct guid<Windows::Data::Text::ISelectableWordsSegmenter>{ static constexpr GUID value{ 0xF6DC31E7,0x4B13,0x45C5,{ 0x88,0x97,0x7D,0x71,0x26,0x9E,0x08,0x5D } }; };
template <> struct guid<Windows::Data::Text::ISelectableWordsSegmenterFactory>{ static constexpr GUID value{ 0x8C7A7648,0x6057,0x4339,{ 0xBC,0x70,0xF2,0x10,0x01,0x0A,0x41,0x50 } }; };
template <> struct guid<Windows::Data::Text::ISemanticTextQuery>{ static constexpr GUID value{ 0x6A1CAB51,0x1FB2,0x4909,{ 0x80,0xB8,0x35,0x73,0x1A,0x2B,0x3E,0x7F } }; };
template <> struct guid<Windows::Data::Text::ISemanticTextQueryFactory>{ static constexpr GUID value{ 0x238C0503,0xF995,0x4587,{ 0x87,0x77,0xA2,0xB7,0xD8,0x0A,0xCF,0xEF } }; };
template <> struct guid<Windows::Data::Text::ITextConversionGenerator>{ static constexpr GUID value{ 0x03606A5E,0x2AA9,0x4AB6,{ 0xAF,0x8B,0xA5,0x62,0xB6,0x3A,0x89,0x92 } }; };
template <> struct guid<Windows::Data::Text::ITextConversionGeneratorFactory>{ static constexpr GUID value{ 0xFCAA3781,0x3083,0x49AB,{ 0xBE,0x15,0x56,0xDF,0xBB,0xB7,0x4D,0x6F } }; };
template <> struct guid<Windows::Data::Text::ITextPhoneme>{ static constexpr GUID value{ 0x9362A40A,0x9B7A,0x4569,{ 0x94,0xCF,0xD8,0x4F,0x2F,0x38,0xCF,0x9B } }; };
template <> struct guid<Windows::Data::Text::ITextPredictionGenerator>{ static constexpr GUID value{ 0x5EACAB07,0xABF1,0x4CB6,{ 0x9D,0x9E,0x32,0x6F,0x2B,0x46,0x87,0x56 } }; };
template <> struct guid<Windows::Data::Text::ITextPredictionGeneratorFactory>{ static constexpr GUID value{ 0x7257B416,0x8BA2,0x4751,{ 0x9D,0x30,0x9D,0x85,0x43,0x56,0x53,0xA2 } }; };
template <> struct guid<Windows::Data::Text::ITextReverseConversionGenerator>{ static constexpr GUID value{ 0x51E7F514,0x9C51,0x4D86,{ 0xAE,0x1B,0xB4,0x98,0xFB,0xAD,0x83,0x13 } }; };
template <> struct guid<Windows::Data::Text::ITextReverseConversionGenerator2>{ static constexpr GUID value{ 0x1AAFD2EC,0x85D6,0x46FD,{ 0x82,0x8A,0x3A,0x48,0x30,0xFA,0x6E,0x18 } }; };
template <> struct guid<Windows::Data::Text::ITextReverseConversionGeneratorFactory>{ static constexpr GUID value{ 0x63BED326,0x1FDA,0x41F6,{ 0x89,0xD5,0x23,0xDD,0xEA,0x3C,0x72,0x9A } }; };
template <> struct guid<Windows::Data::Text::IUnicodeCharactersStatics>{ static constexpr GUID value{ 0x97909E87,0x9291,0x4F91,{ 0xB6,0xC8,0xB6,0xE3,0x59,0xD7,0xA7,0xFB } }; };
template <> struct guid<Windows::Data::Text::IWordSegment>{ static constexpr GUID value{ 0xD2D4BA6D,0x987C,0x4CC0,{ 0xB6,0xBD,0xD4,0x9A,0x11,0xB3,0x8F,0x9A } }; };
template <> struct guid<Windows::Data::Text::IWordsSegmenter>{ static constexpr GUID value{ 0x86B4D4D1,0xB2FE,0x4E34,{ 0xA8,0x1D,0x66,0x64,0x03,0x00,0x45,0x4F } }; };
template <> struct guid<Windows::Data::Text::IWordsSegmenterFactory>{ static constexpr GUID value{ 0xE6977274,0xFC35,0x455C,{ 0x8B,0xFB,0x6D,0x7F,0x46,0x53,0xCA,0x97 } }; };
template <> struct guid<Windows::Data::Text::SelectableWordSegmentsTokenizingHandler>{ static constexpr GUID value{ 0x3A3DFC9C,0xAEDE,0x4DC7,{ 0x9E,0x6C,0x41,0xC0,0x44,0xBD,0x35,0x92 } }; };
template <> struct guid<Windows::Data::Text::WordSegmentsTokenizingHandler>{ static constexpr GUID value{ 0xA5DD6357,0xBF2A,0x4C4F,{ 0xA3,0x1F,0x29,0xE7,0x1C,0x6F,0x8B,0x35 } }; };
template <> struct default_interface<Windows::Data::Text::AlternateWordForm>{ using type = Windows::Data::Text::IAlternateWordForm; };
template <> struct default_interface<Windows::Data::Text::SelectableWordSegment>{ using type = Windows::Data::Text::ISelectableWordSegment; };
template <> struct default_interface<Windows::Data::Text::SelectableWordsSegmenter>{ using type = Windows::Data::Text::ISelectableWordsSegmenter; };
template <> struct default_interface<Windows::Data::Text::SemanticTextQuery>{ using type = Windows::Data::Text::ISemanticTextQuery; };
template <> struct default_interface<Windows::Data::Text::TextConversionGenerator>{ using type = Windows::Data::Text::ITextConversionGenerator; };
template <> struct default_interface<Windows::Data::Text::TextPhoneme>{ using type = Windows::Data::Text::ITextPhoneme; };
template <> struct default_interface<Windows::Data::Text::TextPredictionGenerator>{ using type = Windows::Data::Text::ITextPredictionGenerator; };
template <> struct default_interface<Windows::Data::Text::TextReverseConversionGenerator>{ using type = Windows::Data::Text::ITextReverseConversionGenerator; };
template <> struct default_interface<Windows::Data::Text::WordSegment>{ using type = Windows::Data::Text::IWordSegment; };
template <> struct default_interface<Windows::Data::Text::WordsSegmenter>{ using type = Windows::Data::Text::IWordsSegmenter; };

template <typename D>
struct consume_Windows_Data_Text_IAlternateWordForm
{
    Windows::Data::Text::TextSegment SourceTextSegment() const;
    hstring AlternateText() const;
    Windows::Data::Text::AlternateNormalizationFormat NormalizationFormat() const;
};
template <> struct consume<Windows::Data::Text::IAlternateWordForm> { template <typename D> using type = consume_Windows_Data_Text_IAlternateWordForm<D>; };

template <typename D>
struct consume_Windows_Data_Text_ISelectableWordSegment
{
    hstring Text() const;
    Windows::Data::Text::TextSegment SourceTextSegment() const;
};
template <> struct consume<Windows::Data::Text::ISelectableWordSegment> { template <typename D> using type = consume_Windows_Data_Text_ISelectableWordSegment<D>; };

template <typename D>
struct consume_Windows_Data_Text_ISelectableWordsSegmenter
{
    hstring ResolvedLanguage() const;
    Windows::Data::Text::SelectableWordSegment GetTokenAt(param::hstring const& text, uint32_t startIndex) const;
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::SelectableWordSegment> GetTokens(param::hstring const& text) const;
    void Tokenize(param::hstring const& text, uint32_t startIndex, Windows::Data::Text::SelectableWordSegmentsTokenizingHandler const& handler) const;
};
template <> struct consume<Windows::Data::Text::ISelectableWordsSegmenter> { template <typename D> using type = consume_Windows_Data_Text_ISelectableWordsSegmenter<D>; };

template <typename D>
struct consume_Windows_Data_Text_ISelectableWordsSegmenterFactory
{
    Windows::Data::Text::SelectableWordsSegmenter CreateWithLanguage(param::hstring const& language) const;
};
template <> struct consume<Windows::Data::Text::ISelectableWordsSegmenterFactory> { template <typename D> using type = consume_Windows_Data_Text_ISelectableWordsSegmenterFactory<D>; };

template <typename D>
struct consume_Windows_Data_Text_ISemanticTextQuery
{
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> Find(param::hstring const& content) const;
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> FindInProperty(param::hstring const& propertyContent, param::hstring const& propertyName) const;
};
template <> struct consume<Windows::Data::Text::ISemanticTextQuery> { template <typename D> using type = consume_Windows_Data_Text_ISemanticTextQuery<D>; };

template <typename D>
struct consume_Windows_Data_Text_ISemanticTextQueryFactory
{
    Windows::Data::Text::SemanticTextQuery Create(param::hstring const& aqsFilter) const;
    Windows::Data::Text::SemanticTextQuery CreateWithLanguage(param::hstring const& aqsFilter, param::hstring const& filterLanguage) const;
};
template <> struct consume<Windows::Data::Text::ISemanticTextQueryFactory> { template <typename D> using type = consume_Windows_Data_Text_ISemanticTextQueryFactory<D>; };

template <typename D>
struct consume_Windows_Data_Text_ITextConversionGenerator
{
    hstring ResolvedLanguage() const;
    bool LanguageAvailableButNotInstalled() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> GetCandidatesAsync(param::hstring const& input) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> GetCandidatesAsync(param::hstring const& input, uint32_t maxCandidates) const;
};
template <> struct consume<Windows::Data::Text::ITextConversionGenerator> { template <typename D> using type = consume_Windows_Data_Text_ITextConversionGenerator<D>; };

template <typename D>
struct consume_Windows_Data_Text_ITextConversionGeneratorFactory
{
    Windows::Data::Text::TextConversionGenerator Create(param::hstring const& languageTag) const;
};
template <> struct consume<Windows::Data::Text::ITextConversionGeneratorFactory> { template <typename D> using type = consume_Windows_Data_Text_ITextConversionGeneratorFactory<D>; };

template <typename D>
struct consume_Windows_Data_Text_ITextPhoneme
{
    hstring DisplayText() const;
    hstring ReadingText() const;
};
template <> struct consume<Windows::Data::Text::ITextPhoneme> { template <typename D> using type = consume_Windows_Data_Text_ITextPhoneme<D>; };

template <typename D>
struct consume_Windows_Data_Text_ITextPredictionGenerator
{
    hstring ResolvedLanguage() const;
    bool LanguageAvailableButNotInstalled() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> GetCandidatesAsync(param::hstring const& input) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> GetCandidatesAsync(param::hstring const& input, uint32_t maxCandidates) const;
};
template <> struct consume<Windows::Data::Text::ITextPredictionGenerator> { template <typename D> using type = consume_Windows_Data_Text_ITextPredictionGenerator<D>; };

template <typename D>
struct consume_Windows_Data_Text_ITextPredictionGeneratorFactory
{
    Windows::Data::Text::TextPredictionGenerator Create(param::hstring const& languageTag) const;
};
template <> struct consume<Windows::Data::Text::ITextPredictionGeneratorFactory> { template <typename D> using type = consume_Windows_Data_Text_ITextPredictionGeneratorFactory<D>; };

template <typename D>
struct consume_Windows_Data_Text_ITextReverseConversionGenerator
{
    hstring ResolvedLanguage() const;
    bool LanguageAvailableButNotInstalled() const;
    Windows::Foundation::IAsyncOperation<hstring> ConvertBackAsync(param::hstring const& input) const;
};
template <> struct consume<Windows::Data::Text::ITextReverseConversionGenerator> { template <typename D> using type = consume_Windows_Data_Text_ITextReverseConversionGenerator<D>; };

template <typename D>
struct consume_Windows_Data_Text_ITextReverseConversionGenerator2
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextPhoneme>> GetPhonemesAsync(param::hstring const& input) const;
};
template <> struct consume<Windows::Data::Text::ITextReverseConversionGenerator2> { template <typename D> using type = consume_Windows_Data_Text_ITextReverseConversionGenerator2<D>; };

template <typename D>
struct consume_Windows_Data_Text_ITextReverseConversionGeneratorFactory
{
    Windows::Data::Text::TextReverseConversionGenerator Create(param::hstring const& languageTag) const;
};
template <> struct consume<Windows::Data::Text::ITextReverseConversionGeneratorFactory> { template <typename D> using type = consume_Windows_Data_Text_ITextReverseConversionGeneratorFactory<D>; };

template <typename D>
struct consume_Windows_Data_Text_IUnicodeCharactersStatics
{
    uint32_t GetCodepointFromSurrogatePair(uint32_t highSurrogate, uint32_t lowSurrogate) const;
    void GetSurrogatePairFromCodepoint(uint32_t codepoint, char16_t& highSurrogate, char16_t& lowSurrogate) const;
    bool IsHighSurrogate(uint32_t codepoint) const;
    bool IsLowSurrogate(uint32_t codepoint) const;
    bool IsSupplementary(uint32_t codepoint) const;
    bool IsNoncharacter(uint32_t codepoint) const;
    bool IsWhitespace(uint32_t codepoint) const;
    bool IsAlphabetic(uint32_t codepoint) const;
    bool IsCased(uint32_t codepoint) const;
    bool IsUppercase(uint32_t codepoint) const;
    bool IsLowercase(uint32_t codepoint) const;
    bool IsIdStart(uint32_t codepoint) const;
    bool IsIdContinue(uint32_t codepoint) const;
    bool IsGraphemeBase(uint32_t codepoint) const;
    bool IsGraphemeExtend(uint32_t codepoint) const;
    Windows::Data::Text::UnicodeNumericType GetNumericType(uint32_t codepoint) const;
    Windows::Data::Text::UnicodeGeneralCategory GetGeneralCategory(uint32_t codepoint) const;
};
template <> struct consume<Windows::Data::Text::IUnicodeCharactersStatics> { template <typename D> using type = consume_Windows_Data_Text_IUnicodeCharactersStatics<D>; };

template <typename D>
struct consume_Windows_Data_Text_IWordSegment
{
    hstring Text() const;
    Windows::Data::Text::TextSegment SourceTextSegment() const;
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::AlternateWordForm> AlternateForms() const;
};
template <> struct consume<Windows::Data::Text::IWordSegment> { template <typename D> using type = consume_Windows_Data_Text_IWordSegment<D>; };

template <typename D>
struct consume_Windows_Data_Text_IWordsSegmenter
{
    hstring ResolvedLanguage() const;
    Windows::Data::Text::WordSegment GetTokenAt(param::hstring const& text, uint32_t startIndex) const;
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::WordSegment> GetTokens(param::hstring const& text) const;
    void Tokenize(param::hstring const& text, uint32_t startIndex, Windows::Data::Text::WordSegmentsTokenizingHandler const& handler) const;
};
template <> struct consume<Windows::Data::Text::IWordsSegmenter> { template <typename D> using type = consume_Windows_Data_Text_IWordsSegmenter<D>; };

template <typename D>
struct consume_Windows_Data_Text_IWordsSegmenterFactory
{
    Windows::Data::Text::WordsSegmenter CreateWithLanguage(param::hstring const& language) const;
};
template <> struct consume<Windows::Data::Text::IWordsSegmenterFactory> { template <typename D> using type = consume_Windows_Data_Text_IWordsSegmenterFactory<D>; };

template <> struct abi<Windows::Data::Text::IAlternateWordForm>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourceTextSegment(abi_t<Windows::Data::Text::TextSegment>* value) = 0;
    virtual HRESULT __stdcall get_AlternateText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NormalizationFormat(abi_t<Windows::Data::Text::AlternateNormalizationFormat>* value) = 0;
};};

template <> struct abi<Windows::Data::Text::ISelectableWordSegment>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SourceTextSegment(abi_t<Windows::Data::Text::TextSegment>* value) = 0;
};};

template <> struct abi<Windows::Data::Text::ISelectableWordsSegmenter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetTokenAt(HSTRING text, uint32_t startIndex, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetTokens(HSTRING text, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall Tokenize(HSTRING text, uint32_t startIndex, ::IUnknown* handler) = 0;
};};

template <> struct abi<Windows::Data::Text::ISelectableWordsSegmenterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithLanguage(HSTRING language, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Data::Text::ISemanticTextQuery>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Find(HSTRING content, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindInProperty(HSTRING propertyContent, HSTRING propertyName, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Data::Text::ISemanticTextQueryFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING aqsFilter, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithLanguage(HSTRING aqsFilter, HSTRING filterLanguage, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Data::Text::ITextConversionGenerator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LanguageAvailableButNotInstalled(bool* value) = 0;
    virtual HRESULT __stdcall GetCandidatesAsync(HSTRING input, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetCandidatesWithMaxCountAsync(HSTRING input, uint32_t maxCandidates, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Data::Text::ITextConversionGeneratorFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING languageTag, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Data::Text::ITextPhoneme>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ReadingText(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Data::Text::ITextPredictionGenerator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LanguageAvailableButNotInstalled(bool* value) = 0;
    virtual HRESULT __stdcall GetCandidatesAsync(HSTRING input, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetCandidatesWithMaxCountAsync(HSTRING input, uint32_t maxCandidates, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Data::Text::ITextPredictionGeneratorFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING languageTag, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Data::Text::ITextReverseConversionGenerator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LanguageAvailableButNotInstalled(bool* value) = 0;
    virtual HRESULT __stdcall ConvertBackAsync(HSTRING input, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Data::Text::ITextReverseConversionGenerator2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetPhonemesAsync(HSTRING input, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Data::Text::ITextReverseConversionGeneratorFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING languageTag, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Data::Text::IUnicodeCharactersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCodepointFromSurrogatePair(uint32_t highSurrogate, uint32_t lowSurrogate, uint32_t* codepoint) = 0;
    virtual HRESULT __stdcall GetSurrogatePairFromCodepoint(uint32_t codepoint, char16_t* highSurrogate, char16_t* lowSurrogate) = 0;
    virtual HRESULT __stdcall IsHighSurrogate(uint32_t codepoint, bool* value) = 0;
    virtual HRESULT __stdcall IsLowSurrogate(uint32_t codepoint, bool* value) = 0;
    virtual HRESULT __stdcall IsSupplementary(uint32_t codepoint, bool* value) = 0;
    virtual HRESULT __stdcall IsNoncharacter(uint32_t codepoint, bool* value) = 0;
    virtual HRESULT __stdcall IsWhitespace(uint32_t codepoint, bool* value) = 0;
    virtual HRESULT __stdcall IsAlphabetic(uint32_t codepoint, bool* value) = 0;
    virtual HRESULT __stdcall IsCased(uint32_t codepoint, bool* value) = 0;
    virtual HRESULT __stdcall IsUppercase(uint32_t codepoint, bool* value) = 0;
    virtual HRESULT __stdcall IsLowercase(uint32_t codepoint, bool* value) = 0;
    virtual HRESULT __stdcall IsIdStart(uint32_t codepoint, bool* value) = 0;
    virtual HRESULT __stdcall IsIdContinue(uint32_t codepoint, bool* value) = 0;
    virtual HRESULT __stdcall IsGraphemeBase(uint32_t codepoint, bool* value) = 0;
    virtual HRESULT __stdcall IsGraphemeExtend(uint32_t codepoint, bool* value) = 0;
    virtual HRESULT __stdcall GetNumericType(uint32_t codepoint, abi_t<Windows::Data::Text::UnicodeNumericType>* value) = 0;
    virtual HRESULT __stdcall GetGeneralCategory(uint32_t codepoint, abi_t<Windows::Data::Text::UnicodeGeneralCategory>* value) = 0;
};};

template <> struct abi<Windows::Data::Text::IWordSegment>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SourceTextSegment(abi_t<Windows::Data::Text::TextSegment>* value) = 0;
    virtual HRESULT __stdcall get_AlternateForms(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Data::Text::IWordsSegmenter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetTokenAt(HSTRING text, uint32_t startIndex, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetTokens(HSTRING text, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall Tokenize(HSTRING text, uint32_t startIndex, ::IUnknown* handler) = 0;
};};

template <> struct abi<Windows::Data::Text::IWordsSegmenterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithLanguage(HSTRING language, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Data::Text::SelectableWordSegmentsTokenizingHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* precedingWords, ::IUnknown* words) = 0;
};};

template <> struct abi<Windows::Data::Text::WordSegmentsTokenizingHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* precedingWords, ::IUnknown* words) = 0;
};};

}
