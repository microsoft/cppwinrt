// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Data.Text.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Data::Text {

struct TextSegment
{
    uint32_t StartPosition;
    uint32_t Length;
};

}

namespace Windows::Data::Text {

using TextSegment = ABI::Windows::Data::Text::TextSegment;

}

namespace ABI::Windows::Data::Text {

struct __declspec(uuid("47396c1e-51b9-4207-9146-248e636a1d1d")) __declspec(novtable) IAlternateWordForm : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SourceTextSegment(Windows::Data::Text::TextSegment * value) = 0;
    virtual HRESULT __stdcall get_AlternateText(hstring * value) = 0;
    virtual HRESULT __stdcall get_NormalizationFormat(winrt::Windows::Data::Text::AlternateNormalizationFormat * value) = 0;
};

struct __declspec(uuid("916a4cb7-8aa7-4c78-b374-5dedb752e60b")) __declspec(novtable) ISelectableWordSegment : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Text(hstring * value) = 0;
    virtual HRESULT __stdcall get_SourceTextSegment(Windows::Data::Text::TextSegment * value) = 0;
};

struct __declspec(uuid("f6dc31e7-4b13-45c5-8897-7d71269e085d")) __declspec(novtable) ISelectableWordsSegmenter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResolvedLanguage(hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetTokenAt(hstring text, uint32_t startIndex, Windows::Data::Text::ISelectableWordSegment ** result) = 0;
    virtual HRESULT __stdcall abi_GetTokens(hstring text, Windows::Foundation::Collections::IVectorView<Windows::Data::Text::SelectableWordSegment> ** result) = 0;
    virtual HRESULT __stdcall abi_Tokenize(hstring text, uint32_t startIndex, Windows::Data::Text::SelectableWordSegmentsTokenizingHandler * handler) = 0;
};

struct __declspec(uuid("8c7a7648-6057-4339-bc70-f210010a4150")) __declspec(novtable) ISelectableWordsSegmenterFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWithLanguage(hstring language, Windows::Data::Text::ISelectableWordsSegmenter ** result) = 0;
};

struct __declspec(uuid("6a1cab51-1fb2-4909-80b8-35731a2b3e7f")) __declspec(novtable) ISemanticTextQuery : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Find(hstring content, Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> ** result) = 0;
    virtual HRESULT __stdcall abi_FindInProperty(hstring propertyContent, hstring propertyName, Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> ** result) = 0;
};

struct __declspec(uuid("238c0503-f995-4587-8777-a2b7d80acfef")) __declspec(novtable) ISemanticTextQueryFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring aqsFilter, Windows::Data::Text::ISemanticTextQuery ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithLanguage(hstring aqsFilter, hstring filterLanguage, Windows::Data::Text::ISemanticTextQuery ** result) = 0;
};

struct __declspec(uuid("03606a5e-2aa9-4ab6-af8b-a562b63a8992")) __declspec(novtable) ITextConversionGenerator : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResolvedLanguage(hstring * value) = 0;
    virtual HRESULT __stdcall get_LanguageAvailableButNotInstalled(bool * value) = 0;
    virtual HRESULT __stdcall abi_GetCandidatesAsync(hstring input, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> ** result) = 0;
    virtual HRESULT __stdcall abi_GetCandidatesWithMaxCountAsync(hstring input, uint32_t maxCandidates, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> ** result) = 0;
};

struct __declspec(uuid("fcaa3781-3083-49ab-be15-56dfbbb74d6f")) __declspec(novtable) ITextConversionGeneratorFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring languageTag, Windows::Data::Text::ITextConversionGenerator ** result) = 0;
};

struct __declspec(uuid("9362a40a-9b7a-4569-94cf-d84f2f38cf9b")) __declspec(novtable) ITextPhoneme : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DisplayText(hstring * value) = 0;
    virtual HRESULT __stdcall get_ReadingText(hstring * value) = 0;
};

struct __declspec(uuid("5eacab07-abf1-4cb6-9d9e-326f2b468756")) __declspec(novtable) ITextPredictionGenerator : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResolvedLanguage(hstring * value) = 0;
    virtual HRESULT __stdcall get_LanguageAvailableButNotInstalled(bool * value) = 0;
    virtual HRESULT __stdcall abi_GetCandidatesAsync(hstring input, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> ** result) = 0;
    virtual HRESULT __stdcall abi_GetCandidatesWithMaxCountAsync(hstring input, uint32_t maxCandidates, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> ** result) = 0;
};

struct __declspec(uuid("7257b416-8ba2-4751-9d30-9d85435653a2")) __declspec(novtable) ITextPredictionGeneratorFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring languageTag, Windows::Data::Text::ITextPredictionGenerator ** result) = 0;
};

struct __declspec(uuid("51e7f514-9c51-4d86-ae1b-b498fbad8313")) __declspec(novtable) ITextReverseConversionGenerator : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResolvedLanguage(hstring * value) = 0;
    virtual HRESULT __stdcall get_LanguageAvailableButNotInstalled(bool * value) = 0;
    virtual HRESULT __stdcall abi_ConvertBackAsync(hstring input, Windows::Foundation::IAsyncOperation<hstring> ** result) = 0;
};

struct __declspec(uuid("1aafd2ec-85d6-46fd-828a-3a4830fa6e18")) __declspec(novtable) ITextReverseConversionGenerator2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetPhonemesAsync(hstring input, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextPhoneme>> ** result) = 0;
};

struct __declspec(uuid("63bed326-1fda-41f6-89d5-23ddea3c729a")) __declspec(novtable) ITextReverseConversionGeneratorFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring languageTag, Windows::Data::Text::ITextReverseConversionGenerator ** result) = 0;
};

struct __declspec(uuid("97909e87-9291-4f91-b6c8-b6e359d7a7fb")) __declspec(novtable) IUnicodeCharactersStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetCodepointFromSurrogatePair(uint32_t highSurrogate, uint32_t lowSurrogate, uint32_t * codepoint) = 0;
    virtual HRESULT __stdcall abi_GetSurrogatePairFromCodepoint(uint32_t codepoint, wchar_t * highSurrogate, wchar_t * lowSurrogate) = 0;
    virtual HRESULT __stdcall abi_IsHighSurrogate(uint32_t codepoint, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsLowSurrogate(uint32_t codepoint, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsSupplementary(uint32_t codepoint, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsNoncharacter(uint32_t codepoint, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsWhitespace(uint32_t codepoint, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsAlphabetic(uint32_t codepoint, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsCased(uint32_t codepoint, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsUppercase(uint32_t codepoint, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsLowercase(uint32_t codepoint, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsIdStart(uint32_t codepoint, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsIdContinue(uint32_t codepoint, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsGraphemeBase(uint32_t codepoint, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsGraphemeExtend(uint32_t codepoint, bool * value) = 0;
    virtual HRESULT __stdcall abi_GetNumericType(uint32_t codepoint, winrt::Windows::Data::Text::UnicodeNumericType * value) = 0;
    virtual HRESULT __stdcall abi_GetGeneralCategory(uint32_t codepoint, winrt::Windows::Data::Text::UnicodeGeneralCategory * value) = 0;
};

struct __declspec(uuid("d2d4ba6d-987c-4cc0-b6bd-d49a11b38f9a")) __declspec(novtable) IWordSegment : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Text(hstring * value) = 0;
    virtual HRESULT __stdcall get_SourceTextSegment(Windows::Data::Text::TextSegment * value) = 0;
    virtual HRESULT __stdcall get_AlternateForms(Windows::Foundation::Collections::IVectorView<Windows::Data::Text::AlternateWordForm> ** value) = 0;
};

struct __declspec(uuid("86b4d4d1-b2fe-4e34-a81d-66640300454f")) __declspec(novtable) IWordsSegmenter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResolvedLanguage(hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetTokenAt(hstring text, uint32_t startIndex, Windows::Data::Text::IWordSegment ** result) = 0;
    virtual HRESULT __stdcall abi_GetTokens(hstring text, Windows::Foundation::Collections::IVectorView<Windows::Data::Text::WordSegment> ** result) = 0;
    virtual HRESULT __stdcall abi_Tokenize(hstring text, uint32_t startIndex, Windows::Data::Text::WordSegmentsTokenizingHandler * handler) = 0;
};

struct __declspec(uuid("e6977274-fc35-455c-8bfb-6d7f4653ca97")) __declspec(novtable) IWordsSegmenterFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWithLanguage(hstring language, Windows::Data::Text::IWordsSegmenter ** result) = 0;
};

struct __declspec(uuid("3a3dfc9c-aede-4dc7-9e6c-41c044bd3592")) __declspec(novtable) SelectableWordSegmentsTokenizingHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::Foundation::Collections::IIterable<Windows::Data::Text::SelectableWordSegment> * precedingWords, Windows::Foundation::Collections::IIterable<Windows::Data::Text::SelectableWordSegment> * words) = 0;
};

struct __declspec(uuid("a5dd6357-bf2a-4c4f-a31f-29e71c6f8b35")) __declspec(novtable) WordSegmentsTokenizingHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::Foundation::Collections::IIterable<Windows::Data::Text::WordSegment> * precedingWords, Windows::Foundation::Collections::IIterable<Windows::Data::Text::WordSegment> * words) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Data::Text::AlternateWordForm> { using default_interface = Windows::Data::Text::IAlternateWordForm; };
template <> struct traits<Windows::Data::Text::SelectableWordSegment> { using default_interface = Windows::Data::Text::ISelectableWordSegment; };
template <> struct traits<Windows::Data::Text::SelectableWordsSegmenter> { using default_interface = Windows::Data::Text::ISelectableWordsSegmenter; };
template <> struct traits<Windows::Data::Text::SemanticTextQuery> { using default_interface = Windows::Data::Text::ISemanticTextQuery; };
template <> struct traits<Windows::Data::Text::TextConversionGenerator> { using default_interface = Windows::Data::Text::ITextConversionGenerator; };
template <> struct traits<Windows::Data::Text::TextPhoneme> { using default_interface = Windows::Data::Text::ITextPhoneme; };
template <> struct traits<Windows::Data::Text::TextPredictionGenerator> { using default_interface = Windows::Data::Text::ITextPredictionGenerator; };
template <> struct traits<Windows::Data::Text::TextReverseConversionGenerator> { using default_interface = Windows::Data::Text::ITextReverseConversionGenerator; };
template <> struct traits<Windows::Data::Text::WordSegment> { using default_interface = Windows::Data::Text::IWordSegment; };
template <> struct traits<Windows::Data::Text::WordsSegmenter> { using default_interface = Windows::Data::Text::IWordsSegmenter; };

}

namespace Windows::Data::Text {

template <typename T> struct impl_IAlternateWordForm;
template <typename T> struct impl_ISelectableWordSegment;
template <typename T> struct impl_ISelectableWordsSegmenter;
template <typename T> struct impl_ISelectableWordsSegmenterFactory;
template <typename T> struct impl_ISemanticTextQuery;
template <typename T> struct impl_ISemanticTextQueryFactory;
template <typename T> struct impl_ITextConversionGenerator;
template <typename T> struct impl_ITextConversionGeneratorFactory;
template <typename T> struct impl_ITextPhoneme;
template <typename T> struct impl_ITextPredictionGenerator;
template <typename T> struct impl_ITextPredictionGeneratorFactory;
template <typename T> struct impl_ITextReverseConversionGenerator;
template <typename T> struct impl_ITextReverseConversionGenerator2;
template <typename T> struct impl_ITextReverseConversionGeneratorFactory;
template <typename T> struct impl_IUnicodeCharactersStatics;
template <typename T> struct impl_IWordSegment;
template <typename T> struct impl_IWordsSegmenter;
template <typename T> struct impl_IWordsSegmenterFactory;
template <typename T> struct impl_SelectableWordSegmentsTokenizingHandler;
template <typename T> struct impl_WordSegmentsTokenizingHandler;

}

namespace impl {

template <> struct traits<Windows::Data::Text::IAlternateWordForm>
{
    using abi = ABI::Windows::Data::Text::IAlternateWordForm;
    template <typename D> using consume = Windows::Data::Text::impl_IAlternateWordForm<D>;
};

template <> struct traits<Windows::Data::Text::ISelectableWordSegment>
{
    using abi = ABI::Windows::Data::Text::ISelectableWordSegment;
    template <typename D> using consume = Windows::Data::Text::impl_ISelectableWordSegment<D>;
};

template <> struct traits<Windows::Data::Text::ISelectableWordsSegmenter>
{
    using abi = ABI::Windows::Data::Text::ISelectableWordsSegmenter;
    template <typename D> using consume = Windows::Data::Text::impl_ISelectableWordsSegmenter<D>;
};

template <> struct traits<Windows::Data::Text::ISelectableWordsSegmenterFactory>
{
    using abi = ABI::Windows::Data::Text::ISelectableWordsSegmenterFactory;
    template <typename D> using consume = Windows::Data::Text::impl_ISelectableWordsSegmenterFactory<D>;
};

template <> struct traits<Windows::Data::Text::ISemanticTextQuery>
{
    using abi = ABI::Windows::Data::Text::ISemanticTextQuery;
    template <typename D> using consume = Windows::Data::Text::impl_ISemanticTextQuery<D>;
};

template <> struct traits<Windows::Data::Text::ISemanticTextQueryFactory>
{
    using abi = ABI::Windows::Data::Text::ISemanticTextQueryFactory;
    template <typename D> using consume = Windows::Data::Text::impl_ISemanticTextQueryFactory<D>;
};

template <> struct traits<Windows::Data::Text::ITextConversionGenerator>
{
    using abi = ABI::Windows::Data::Text::ITextConversionGenerator;
    template <typename D> using consume = Windows::Data::Text::impl_ITextConversionGenerator<D>;
};

template <> struct traits<Windows::Data::Text::ITextConversionGeneratorFactory>
{
    using abi = ABI::Windows::Data::Text::ITextConversionGeneratorFactory;
    template <typename D> using consume = Windows::Data::Text::impl_ITextConversionGeneratorFactory<D>;
};

template <> struct traits<Windows::Data::Text::ITextPhoneme>
{
    using abi = ABI::Windows::Data::Text::ITextPhoneme;
    template <typename D> using consume = Windows::Data::Text::impl_ITextPhoneme<D>;
};

template <> struct traits<Windows::Data::Text::ITextPredictionGenerator>
{
    using abi = ABI::Windows::Data::Text::ITextPredictionGenerator;
    template <typename D> using consume = Windows::Data::Text::impl_ITextPredictionGenerator<D>;
};

template <> struct traits<Windows::Data::Text::ITextPredictionGeneratorFactory>
{
    using abi = ABI::Windows::Data::Text::ITextPredictionGeneratorFactory;
    template <typename D> using consume = Windows::Data::Text::impl_ITextPredictionGeneratorFactory<D>;
};

template <> struct traits<Windows::Data::Text::ITextReverseConversionGenerator>
{
    using abi = ABI::Windows::Data::Text::ITextReverseConversionGenerator;
    template <typename D> using consume = Windows::Data::Text::impl_ITextReverseConversionGenerator<D>;
};

template <> struct traits<Windows::Data::Text::ITextReverseConversionGenerator2>
{
    using abi = ABI::Windows::Data::Text::ITextReverseConversionGenerator2;
    template <typename D> using consume = Windows::Data::Text::impl_ITextReverseConversionGenerator2<D>;
};

template <> struct traits<Windows::Data::Text::ITextReverseConversionGeneratorFactory>
{
    using abi = ABI::Windows::Data::Text::ITextReverseConversionGeneratorFactory;
    template <typename D> using consume = Windows::Data::Text::impl_ITextReverseConversionGeneratorFactory<D>;
};

template <> struct traits<Windows::Data::Text::IUnicodeCharactersStatics>
{
    using abi = ABI::Windows::Data::Text::IUnicodeCharactersStatics;
    template <typename D> using consume = Windows::Data::Text::impl_IUnicodeCharactersStatics<D>;
};

template <> struct traits<Windows::Data::Text::IWordSegment>
{
    using abi = ABI::Windows::Data::Text::IWordSegment;
    template <typename D> using consume = Windows::Data::Text::impl_IWordSegment<D>;
};

template <> struct traits<Windows::Data::Text::IWordsSegmenter>
{
    using abi = ABI::Windows::Data::Text::IWordsSegmenter;
    template <typename D> using consume = Windows::Data::Text::impl_IWordsSegmenter<D>;
};

template <> struct traits<Windows::Data::Text::IWordsSegmenterFactory>
{
    using abi = ABI::Windows::Data::Text::IWordsSegmenterFactory;
    template <typename D> using consume = Windows::Data::Text::impl_IWordsSegmenterFactory<D>;
};

template <> struct traits<Windows::Data::Text::SelectableWordSegmentsTokenizingHandler>
{
    using abi = ABI::Windows::Data::Text::SelectableWordSegmentsTokenizingHandler;
};

template <> struct traits<Windows::Data::Text::WordSegmentsTokenizingHandler>
{
    using abi = ABI::Windows::Data::Text::WordSegmentsTokenizingHandler;
};

template <> struct traits<Windows::Data::Text::AlternateWordForm>
{
    using abi = ABI::Windows::Data::Text::AlternateWordForm;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Text.AlternateWordForm"; }
};

template <> struct traits<Windows::Data::Text::SelectableWordSegment>
{
    using abi = ABI::Windows::Data::Text::SelectableWordSegment;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Text.SelectableWordSegment"; }
};

template <> struct traits<Windows::Data::Text::SelectableWordsSegmenter>
{
    using abi = ABI::Windows::Data::Text::SelectableWordsSegmenter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Text.SelectableWordsSegmenter"; }
};

template <> struct traits<Windows::Data::Text::SemanticTextQuery>
{
    using abi = ABI::Windows::Data::Text::SemanticTextQuery;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Text.SemanticTextQuery"; }
};

template <> struct traits<Windows::Data::Text::TextConversionGenerator>
{
    using abi = ABI::Windows::Data::Text::TextConversionGenerator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Text.TextConversionGenerator"; }
};

template <> struct traits<Windows::Data::Text::TextPhoneme>
{
    using abi = ABI::Windows::Data::Text::TextPhoneme;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Text.TextPhoneme"; }
};

template <> struct traits<Windows::Data::Text::TextPredictionGenerator>
{
    using abi = ABI::Windows::Data::Text::TextPredictionGenerator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Text.TextPredictionGenerator"; }
};

template <> struct traits<Windows::Data::Text::TextReverseConversionGenerator>
{
    using abi = ABI::Windows::Data::Text::TextReverseConversionGenerator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Text.TextReverseConversionGenerator"; }
};

template <> struct traits<Windows::Data::Text::UnicodeCharacters>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Text.UnicodeCharacters"; }
};

template <> struct traits<Windows::Data::Text::WordSegment>
{
    using abi = ABI::Windows::Data::Text::WordSegment;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Text.WordSegment"; }
};

template <> struct traits<Windows::Data::Text::WordsSegmenter>
{
    using abi = ABI::Windows::Data::Text::WordsSegmenter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Text.WordsSegmenter"; }
};

}

}
