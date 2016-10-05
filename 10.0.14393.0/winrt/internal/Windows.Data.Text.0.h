// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Data::Text {

struct TextSegment;

}

namespace Windows::Data::Text {

using TextSegment = ABI::Windows::Data::Text::TextSegment;

}

namespace ABI::Windows::Data::Text {

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
struct SelectableWordSegmentsTokenizingHandler;
struct WordSegmentsTokenizingHandler;
struct AlternateWordForm;
struct SelectableWordSegment;
struct SelectableWordsSegmenter;
struct SemanticTextQuery;
struct TextConversionGenerator;
struct TextPhoneme;
struct TextPredictionGenerator;
struct TextReverseConversionGenerator;
struct WordSegment;
struct WordsSegmenter;

}

namespace Windows::Data::Text {

struct SelectableWordSegmentsTokenizingHandler;
struct WordSegmentsTokenizingHandler;
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

}

namespace Windows::Data::Text {

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

}

}
