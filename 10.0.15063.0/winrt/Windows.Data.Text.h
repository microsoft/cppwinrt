// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Data.Text.2.h"

namespace winrt::impl {

template <typename D> Windows::Data::Text::TextSegment consume_Windows_Data_Text_IAlternateWordForm<D>::SourceTextSegment() const
{
    Windows::Data::Text::TextSegment value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IAlternateWordForm)->get_SourceTextSegment(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Data_Text_IAlternateWordForm<D>::AlternateText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IAlternateWordForm)->get_AlternateText(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Text::AlternateNormalizationFormat consume_Windows_Data_Text_IAlternateWordForm<D>::NormalizationFormat() const
{
    Windows::Data::Text::AlternateNormalizationFormat value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IAlternateWordForm)->get_NormalizationFormat(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Data_Text_ISelectableWordSegment<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::ISelectableWordSegment)->get_Text(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Text::TextSegment consume_Windows_Data_Text_ISelectableWordSegment<D>::SourceTextSegment() const
{
    Windows::Data::Text::TextSegment value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::ISelectableWordSegment)->get_SourceTextSegment(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Data_Text_ISelectableWordsSegmenter<D>::ResolvedLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::ISelectableWordsSegmenter)->get_ResolvedLanguage(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Text::SelectableWordSegment consume_Windows_Data_Text_ISelectableWordsSegmenter<D>::GetTokenAt(param::hstring const& text, uint32_t startIndex) const
{
    Windows::Data::Text::SelectableWordSegment result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ISelectableWordsSegmenter)->GetTokenAt(get_abi(text), startIndex, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Data::Text::SelectableWordSegment> consume_Windows_Data_Text_ISelectableWordsSegmenter<D>::GetTokens(param::hstring const& text) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::SelectableWordSegment> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ISelectableWordsSegmenter)->GetTokens(get_abi(text), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Data_Text_ISelectableWordsSegmenter<D>::Tokenize(param::hstring const& text, uint32_t startIndex, Windows::Data::Text::SelectableWordSegmentsTokenizingHandler const& handler) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Text::ISelectableWordsSegmenter)->Tokenize(get_abi(text), startIndex, get_abi(handler)));
}

template <typename D> Windows::Data::Text::SelectableWordsSegmenter consume_Windows_Data_Text_ISelectableWordsSegmenterFactory<D>::CreateWithLanguage(param::hstring const& language) const
{
    Windows::Data::Text::SelectableWordsSegmenter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ISelectableWordsSegmenterFactory)->CreateWithLanguage(get_abi(language), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> consume_Windows_Data_Text_ISemanticTextQuery<D>::Find(param::hstring const& content) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ISemanticTextQuery)->Find(get_abi(content), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> consume_Windows_Data_Text_ISemanticTextQuery<D>::FindInProperty(param::hstring const& propertyContent, param::hstring const& propertyName) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ISemanticTextQuery)->FindInProperty(get_abi(propertyContent), get_abi(propertyName), put_abi(result)));
    return result;
}

template <typename D> Windows::Data::Text::SemanticTextQuery consume_Windows_Data_Text_ISemanticTextQueryFactory<D>::Create(param::hstring const& aqsFilter) const
{
    Windows::Data::Text::SemanticTextQuery result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ISemanticTextQueryFactory)->Create(get_abi(aqsFilter), put_abi(result)));
    return result;
}

template <typename D> Windows::Data::Text::SemanticTextQuery consume_Windows_Data_Text_ISemanticTextQueryFactory<D>::CreateWithLanguage(param::hstring const& aqsFilter, param::hstring const& filterLanguage) const
{
    Windows::Data::Text::SemanticTextQuery result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ISemanticTextQueryFactory)->CreateWithLanguage(get_abi(aqsFilter), get_abi(filterLanguage), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Data_Text_ITextConversionGenerator<D>::ResolvedLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextConversionGenerator)->get_ResolvedLanguage(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_ITextConversionGenerator<D>::LanguageAvailableButNotInstalled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextConversionGenerator)->get_LanguageAvailableButNotInstalled(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> consume_Windows_Data_Text_ITextConversionGenerator<D>::GetCandidatesAsync(param::hstring const& input) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextConversionGenerator)->GetCandidatesAsync(get_abi(input), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> consume_Windows_Data_Text_ITextConversionGenerator<D>::GetCandidatesAsync(param::hstring const& input, uint32_t maxCandidates) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextConversionGenerator)->GetCandidatesWithMaxCountAsync(get_abi(input), maxCandidates, put_abi(result)));
    return result;
}

template <typename D> Windows::Data::Text::TextConversionGenerator consume_Windows_Data_Text_ITextConversionGeneratorFactory<D>::Create(param::hstring const& languageTag) const
{
    Windows::Data::Text::TextConversionGenerator result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextConversionGeneratorFactory)->Create(get_abi(languageTag), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Data_Text_ITextPhoneme<D>::DisplayText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextPhoneme)->get_DisplayText(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Data_Text_ITextPhoneme<D>::ReadingText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextPhoneme)->get_ReadingText(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Data_Text_ITextPredictionGenerator<D>::ResolvedLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextPredictionGenerator)->get_ResolvedLanguage(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_ITextPredictionGenerator<D>::LanguageAvailableButNotInstalled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextPredictionGenerator)->get_LanguageAvailableButNotInstalled(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> consume_Windows_Data_Text_ITextPredictionGenerator<D>::GetCandidatesAsync(param::hstring const& input) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextPredictionGenerator)->GetCandidatesAsync(get_abi(input), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> consume_Windows_Data_Text_ITextPredictionGenerator<D>::GetCandidatesAsync(param::hstring const& input, uint32_t maxCandidates) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextPredictionGenerator)->GetCandidatesWithMaxCountAsync(get_abi(input), maxCandidates, put_abi(result)));
    return result;
}

template <typename D> Windows::Data::Text::TextPredictionGenerator consume_Windows_Data_Text_ITextPredictionGeneratorFactory<D>::Create(param::hstring const& languageTag) const
{
    Windows::Data::Text::TextPredictionGenerator result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextPredictionGeneratorFactory)->Create(get_abi(languageTag), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Data_Text_ITextReverseConversionGenerator<D>::ResolvedLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextReverseConversionGenerator)->get_ResolvedLanguage(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_ITextReverseConversionGenerator<D>::LanguageAvailableButNotInstalled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextReverseConversionGenerator)->get_LanguageAvailableButNotInstalled(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Data_Text_ITextReverseConversionGenerator<D>::ConvertBackAsync(param::hstring const& input) const
{
    Windows::Foundation::IAsyncOperation<hstring> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextReverseConversionGenerator)->ConvertBackAsync(get_abi(input), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextPhoneme>> consume_Windows_Data_Text_ITextReverseConversionGenerator2<D>::GetPhonemesAsync(param::hstring const& input) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextPhoneme>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextReverseConversionGenerator2)->GetPhonemesAsync(get_abi(input), put_abi(result)));
    return result;
}

template <typename D> Windows::Data::Text::TextReverseConversionGenerator consume_Windows_Data_Text_ITextReverseConversionGeneratorFactory<D>::Create(param::hstring const& languageTag) const
{
    Windows::Data::Text::TextReverseConversionGenerator result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::ITextReverseConversionGeneratorFactory)->Create(get_abi(languageTag), put_abi(result)));
    return result;
}

template <typename D> uint32_t consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::GetCodepointFromSurrogatePair(uint32_t highSurrogate, uint32_t lowSurrogate) const
{
    uint32_t codepoint{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->GetCodepointFromSurrogatePair(highSurrogate, lowSurrogate, &codepoint));
    return codepoint;
}

template <typename D> void consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::GetSurrogatePairFromCodepoint(uint32_t codepoint, char16_t& highSurrogate, char16_t& lowSurrogate) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->GetSurrogatePairFromCodepoint(codepoint, &highSurrogate, &lowSurrogate));
}

template <typename D> bool consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::IsHighSurrogate(uint32_t codepoint) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->IsHighSurrogate(codepoint, &value));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::IsLowSurrogate(uint32_t codepoint) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->IsLowSurrogate(codepoint, &value));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::IsSupplementary(uint32_t codepoint) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->IsSupplementary(codepoint, &value));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::IsNoncharacter(uint32_t codepoint) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->IsNoncharacter(codepoint, &value));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::IsWhitespace(uint32_t codepoint) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->IsWhitespace(codepoint, &value));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::IsAlphabetic(uint32_t codepoint) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->IsAlphabetic(codepoint, &value));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::IsCased(uint32_t codepoint) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->IsCased(codepoint, &value));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::IsUppercase(uint32_t codepoint) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->IsUppercase(codepoint, &value));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::IsLowercase(uint32_t codepoint) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->IsLowercase(codepoint, &value));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::IsIdStart(uint32_t codepoint) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->IsIdStart(codepoint, &value));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::IsIdContinue(uint32_t codepoint) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->IsIdContinue(codepoint, &value));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::IsGraphemeBase(uint32_t codepoint) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->IsGraphemeBase(codepoint, &value));
    return value;
}

template <typename D> bool consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::IsGraphemeExtend(uint32_t codepoint) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->IsGraphemeExtend(codepoint, &value));
    return value;
}

template <typename D> Windows::Data::Text::UnicodeNumericType consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::GetNumericType(uint32_t codepoint) const
{
    Windows::Data::Text::UnicodeNumericType value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->GetNumericType(codepoint, put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Text::UnicodeGeneralCategory consume_Windows_Data_Text_IUnicodeCharactersStatics<D>::GetGeneralCategory(uint32_t codepoint) const
{
    Windows::Data::Text::UnicodeGeneralCategory value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IUnicodeCharactersStatics)->GetGeneralCategory(codepoint, put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Data_Text_IWordSegment<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IWordSegment)->get_Text(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Text::TextSegment consume_Windows_Data_Text_IWordSegment<D>::SourceTextSegment() const
{
    Windows::Data::Text::TextSegment value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IWordSegment)->get_SourceTextSegment(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Data::Text::AlternateWordForm> consume_Windows_Data_Text_IWordSegment<D>::AlternateForms() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::AlternateWordForm> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::IWordSegment)->get_AlternateForms(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Data_Text_IWordsSegmenter<D>::ResolvedLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Text::IWordsSegmenter)->get_ResolvedLanguage(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Text::WordSegment consume_Windows_Data_Text_IWordsSegmenter<D>::GetTokenAt(param::hstring const& text, uint32_t startIndex) const
{
    Windows::Data::Text::WordSegment result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::IWordsSegmenter)->GetTokenAt(get_abi(text), startIndex, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Data::Text::WordSegment> consume_Windows_Data_Text_IWordsSegmenter<D>::GetTokens(param::hstring const& text) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::WordSegment> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::IWordsSegmenter)->GetTokens(get_abi(text), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Data_Text_IWordsSegmenter<D>::Tokenize(param::hstring const& text, uint32_t startIndex, Windows::Data::Text::WordSegmentsTokenizingHandler const& handler) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Text::IWordsSegmenter)->Tokenize(get_abi(text), startIndex, get_abi(handler)));
}

template <typename D> Windows::Data::Text::WordsSegmenter consume_Windows_Data_Text_IWordsSegmenterFactory<D>::CreateWithLanguage(param::hstring const& language) const
{
    Windows::Data::Text::WordsSegmenter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Text::IWordsSegmenterFactory)->CreateWithLanguage(get_abi(language), put_abi(result)));
    return result;
}

template <> struct delegate<Windows::Data::Text::SelectableWordSegmentsTokenizingHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Data::Text::SelectableWordSegmentsTokenizingHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Data::Text::SelectableWordSegmentsTokenizingHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* precedingWords, ::IUnknown* words) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Data::Text::SelectableWordSegment> const*>(&precedingWords), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Data::Text::SelectableWordSegment> const*>(&words));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Data::Text::WordSegmentsTokenizingHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Data::Text::WordSegmentsTokenizingHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Data::Text::WordSegmentsTokenizingHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* precedingWords, ::IUnknown* words) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Data::Text::WordSegment> const*>(&precedingWords), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Data::Text::WordSegment> const*>(&words));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::Data::Text::IAlternateWordForm> : produce_base<D, Windows::Data::Text::IAlternateWordForm>
{
    HRESULT __stdcall get_SourceTextSegment(abi_t<Windows::Data::Text::TextSegment>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceTextSegment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlternateText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizationFormat(abi_t<Windows::Data::Text::AlternateNormalizationFormat>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NormalizationFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::ISelectableWordSegment> : produce_base<D, Windows::Data::Text::ISelectableWordSegment>
{
    HRESULT __stdcall get_Text(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceTextSegment(abi_t<Windows::Data::Text::TextSegment>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceTextSegment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::ISelectableWordsSegmenter> : produce_base<D, Windows::Data::Text::ISelectableWordsSegmenter>
{
    HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTokenAt(HSTRING text, uint32_t startIndex, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetTokenAt(*reinterpret_cast<hstring const*>(&text), startIndex));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTokens(HSTRING text, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetTokens(*reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Tokenize(HSTRING text, uint32_t startIndex, ::IUnknown* handler) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tokenize(*reinterpret_cast<hstring const*>(&text), startIndex, *reinterpret_cast<Windows::Data::Text::SelectableWordSegmentsTokenizingHandler const*>(&handler));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::ISelectableWordsSegmenterFactory> : produce_base<D, Windows::Data::Text::ISelectableWordsSegmenterFactory>
{
    HRESULT __stdcall CreateWithLanguage(HSTRING language, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithLanguage(*reinterpret_cast<hstring const*>(&language)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::ISemanticTextQuery> : produce_base<D, Windows::Data::Text::ISemanticTextQuery>
{
    HRESULT __stdcall Find(HSTRING content, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Find(*reinterpret_cast<hstring const*>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindInProperty(HSTRING propertyContent, HSTRING propertyName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindInProperty(*reinterpret_cast<hstring const*>(&propertyContent), *reinterpret_cast<hstring const*>(&propertyName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::ISemanticTextQueryFactory> : produce_base<D, Windows::Data::Text::ISemanticTextQueryFactory>
{
    HRESULT __stdcall Create(HSTRING aqsFilter, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&aqsFilter)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithLanguage(HSTRING aqsFilter, HSTRING filterLanguage, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithLanguage(*reinterpret_cast<hstring const*>(&aqsFilter), *reinterpret_cast<hstring const*>(&filterLanguage)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::ITextConversionGenerator> : produce_base<D, Windows::Data::Text::ITextConversionGenerator>
{
    HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageAvailableButNotInstalled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LanguageAvailableButNotInstalled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCandidatesAsync(HSTRING input, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCandidatesAsync(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCandidatesWithMaxCountAsync(HSTRING input, uint32_t maxCandidates, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCandidatesAsync(*reinterpret_cast<hstring const*>(&input), maxCandidates));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::ITextConversionGeneratorFactory> : produce_base<D, Windows::Data::Text::ITextConversionGeneratorFactory>
{
    HRESULT __stdcall Create(HSTRING languageTag, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&languageTag)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::ITextPhoneme> : produce_base<D, Windows::Data::Text::ITextPhoneme>
{
    HRESULT __stdcall get_DisplayText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadingText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadingText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::ITextPredictionGenerator> : produce_base<D, Windows::Data::Text::ITextPredictionGenerator>
{
    HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageAvailableButNotInstalled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LanguageAvailableButNotInstalled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCandidatesAsync(HSTRING input, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCandidatesAsync(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCandidatesWithMaxCountAsync(HSTRING input, uint32_t maxCandidates, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCandidatesAsync(*reinterpret_cast<hstring const*>(&input), maxCandidates));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::ITextPredictionGeneratorFactory> : produce_base<D, Windows::Data::Text::ITextPredictionGeneratorFactory>
{
    HRESULT __stdcall Create(HSTRING languageTag, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&languageTag)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::ITextReverseConversionGenerator> : produce_base<D, Windows::Data::Text::ITextReverseConversionGenerator>
{
    HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageAvailableButNotInstalled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LanguageAvailableButNotInstalled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertBackAsync(HSTRING input, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ConvertBackAsync(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::ITextReverseConversionGenerator2> : produce_base<D, Windows::Data::Text::ITextReverseConversionGenerator2>
{
    HRESULT __stdcall GetPhonemesAsync(HSTRING input, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetPhonemesAsync(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::ITextReverseConversionGeneratorFactory> : produce_base<D, Windows::Data::Text::ITextReverseConversionGeneratorFactory>
{
    HRESULT __stdcall Create(HSTRING languageTag, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&languageTag)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::IUnicodeCharactersStatics> : produce_base<D, Windows::Data::Text::IUnicodeCharactersStatics>
{
    HRESULT __stdcall GetCodepointFromSurrogatePair(uint32_t highSurrogate, uint32_t lowSurrogate, uint32_t* codepoint) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *codepoint = detach_abi(this->shim().GetCodepointFromSurrogatePair(highSurrogate, lowSurrogate));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSurrogatePairFromCodepoint(uint32_t codepoint, char16_t* highSurrogate, char16_t* lowSurrogate) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetSurrogatePairFromCodepoint(codepoint, *highSurrogate, *lowSurrogate);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsHighSurrogate(uint32_t codepoint, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsHighSurrogate(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsLowSurrogate(uint32_t codepoint, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsLowSurrogate(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsSupplementary(uint32_t codepoint, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSupplementary(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsNoncharacter(uint32_t codepoint, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsNoncharacter(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsWhitespace(uint32_t codepoint, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsWhitespace(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsAlphabetic(uint32_t codepoint, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAlphabetic(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsCased(uint32_t codepoint, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCased(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsUppercase(uint32_t codepoint, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsUppercase(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsLowercase(uint32_t codepoint, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsLowercase(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsIdStart(uint32_t codepoint, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsIdStart(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsIdContinue(uint32_t codepoint, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsIdContinue(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsGraphemeBase(uint32_t codepoint, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsGraphemeBase(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsGraphemeExtend(uint32_t codepoint, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsGraphemeExtend(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNumericType(uint32_t codepoint, abi_t<Windows::Data::Text::UnicodeNumericType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetNumericType(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGeneralCategory(uint32_t codepoint, abi_t<Windows::Data::Text::UnicodeGeneralCategory>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetGeneralCategory(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::IWordSegment> : produce_base<D, Windows::Data::Text::IWordSegment>
{
    HRESULT __stdcall get_Text(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceTextSegment(abi_t<Windows::Data::Text::TextSegment>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceTextSegment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateForms(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlternateForms());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::IWordsSegmenter> : produce_base<D, Windows::Data::Text::IWordsSegmenter>
{
    HRESULT __stdcall get_ResolvedLanguage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTokenAt(HSTRING text, uint32_t startIndex, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetTokenAt(*reinterpret_cast<hstring const*>(&text), startIndex));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTokens(HSTRING text, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetTokens(*reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Tokenize(HSTRING text, uint32_t startIndex, ::IUnknown* handler) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tokenize(*reinterpret_cast<hstring const*>(&text), startIndex, *reinterpret_cast<Windows::Data::Text::WordSegmentsTokenizingHandler const*>(&handler));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Text::IWordsSegmenterFactory> : produce_base<D, Windows::Data::Text::IWordsSegmenterFactory>
{
    HRESULT __stdcall CreateWithLanguage(HSTRING language, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithLanguage(*reinterpret_cast<hstring const*>(&language)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Data::Text {

inline SelectableWordsSegmenter::SelectableWordsSegmenter(param::hstring const& language) :
    SelectableWordsSegmenter(get_activation_factory<SelectableWordsSegmenter, Windows::Data::Text::ISelectableWordsSegmenterFactory>().CreateWithLanguage(language))
{}

inline SemanticTextQuery::SemanticTextQuery(param::hstring const& aqsFilter) :
    SemanticTextQuery(get_activation_factory<SemanticTextQuery, Windows::Data::Text::ISemanticTextQueryFactory>().Create(aqsFilter))
{}

inline SemanticTextQuery::SemanticTextQuery(param::hstring const& aqsFilter, param::hstring const& filterLanguage) :
    SemanticTextQuery(get_activation_factory<SemanticTextQuery, Windows::Data::Text::ISemanticTextQueryFactory>().CreateWithLanguage(aqsFilter, filterLanguage))
{}

inline TextConversionGenerator::TextConversionGenerator(param::hstring const& languageTag) :
    TextConversionGenerator(get_activation_factory<TextConversionGenerator, Windows::Data::Text::ITextConversionGeneratorFactory>().Create(languageTag))
{}

inline TextPredictionGenerator::TextPredictionGenerator(param::hstring const& languageTag) :
    TextPredictionGenerator(get_activation_factory<TextPredictionGenerator, Windows::Data::Text::ITextPredictionGeneratorFactory>().Create(languageTag))
{}

inline TextReverseConversionGenerator::TextReverseConversionGenerator(param::hstring const& languageTag) :
    TextReverseConversionGenerator(get_activation_factory<TextReverseConversionGenerator, Windows::Data::Text::ITextReverseConversionGeneratorFactory>().Create(languageTag))
{}

inline uint32_t UnicodeCharacters::GetCodepointFromSurrogatePair(uint32_t highSurrogate, uint32_t lowSurrogate)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().GetCodepointFromSurrogatePair(highSurrogate, lowSurrogate);
}

inline void UnicodeCharacters::GetSurrogatePairFromCodepoint(uint32_t codepoint, char16_t& highSurrogate, char16_t& lowSurrogate)
{
    get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().GetSurrogatePairFromCodepoint(codepoint, highSurrogate, lowSurrogate);
}

inline bool UnicodeCharacters::IsHighSurrogate(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().IsHighSurrogate(codepoint);
}

inline bool UnicodeCharacters::IsLowSurrogate(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().IsLowSurrogate(codepoint);
}

inline bool UnicodeCharacters::IsSupplementary(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().IsSupplementary(codepoint);
}

inline bool UnicodeCharacters::IsNoncharacter(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().IsNoncharacter(codepoint);
}

inline bool UnicodeCharacters::IsWhitespace(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().IsWhitespace(codepoint);
}

inline bool UnicodeCharacters::IsAlphabetic(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().IsAlphabetic(codepoint);
}

inline bool UnicodeCharacters::IsCased(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().IsCased(codepoint);
}

inline bool UnicodeCharacters::IsUppercase(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().IsUppercase(codepoint);
}

inline bool UnicodeCharacters::IsLowercase(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().IsLowercase(codepoint);
}

inline bool UnicodeCharacters::IsIdStart(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().IsIdStart(codepoint);
}

inline bool UnicodeCharacters::IsIdContinue(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().IsIdContinue(codepoint);
}

inline bool UnicodeCharacters::IsGraphemeBase(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().IsGraphemeBase(codepoint);
}

inline bool UnicodeCharacters::IsGraphemeExtend(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().IsGraphemeExtend(codepoint);
}

inline Windows::Data::Text::UnicodeNumericType UnicodeCharacters::GetNumericType(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().GetNumericType(codepoint);
}

inline Windows::Data::Text::UnicodeGeneralCategory UnicodeCharacters::GetGeneralCategory(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, Windows::Data::Text::IUnicodeCharactersStatics>().GetGeneralCategory(codepoint);
}

inline WordsSegmenter::WordsSegmenter(param::hstring const& language) :
    WordsSegmenter(get_activation_factory<WordsSegmenter, Windows::Data::Text::IWordsSegmenterFactory>().CreateWithLanguage(language))
{}

template <typename L> SelectableWordSegmentsTokenizingHandler::SelectableWordSegmentsTokenizingHandler(L handler) :
    SelectableWordSegmentsTokenizingHandler(impl::make_delegate<SelectableWordSegmentsTokenizingHandler>(std::forward<L>(handler)))
{}

template <typename F> SelectableWordSegmentsTokenizingHandler::SelectableWordSegmentsTokenizingHandler(F* handler) :
    SelectableWordSegmentsTokenizingHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> SelectableWordSegmentsTokenizingHandler::SelectableWordSegmentsTokenizingHandler(O* object, M method) :
    SelectableWordSegmentsTokenizingHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void SelectableWordSegmentsTokenizingHandler::operator()(param::iterable<Windows::Data::Text::SelectableWordSegment> const& precedingWords, param::iterable<Windows::Data::Text::SelectableWordSegment> const& words) const
{
    check_hresult((*(abi_t<SelectableWordSegmentsTokenizingHandler>**)this)->Invoke(get_abi(precedingWords), get_abi(words)));
}

template <typename L> WordSegmentsTokenizingHandler::WordSegmentsTokenizingHandler(L handler) :
    WordSegmentsTokenizingHandler(impl::make_delegate<WordSegmentsTokenizingHandler>(std::forward<L>(handler)))
{}

template <typename F> WordSegmentsTokenizingHandler::WordSegmentsTokenizingHandler(F* handler) :
    WordSegmentsTokenizingHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> WordSegmentsTokenizingHandler::WordSegmentsTokenizingHandler(O* object, M method) :
    WordSegmentsTokenizingHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void WordSegmentsTokenizingHandler::operator()(param::iterable<Windows::Data::Text::WordSegment> const& precedingWords, param::iterable<Windows::Data::Text::WordSegment> const& words) const
{
    check_hresult((*(abi_t<WordSegmentsTokenizingHandler>**)this)->Invoke(get_abi(precedingWords), get_abi(words)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Data::Text::IAlternateWordForm> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::IAlternateWordForm> {};

template<> struct hash<winrt::Windows::Data::Text::ISelectableWordSegment> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::ISelectableWordSegment> {};

template<> struct hash<winrt::Windows::Data::Text::ISelectableWordsSegmenter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::ISelectableWordsSegmenter> {};

template<> struct hash<winrt::Windows::Data::Text::ISelectableWordsSegmenterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::ISelectableWordsSegmenterFactory> {};

template<> struct hash<winrt::Windows::Data::Text::ISemanticTextQuery> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::ISemanticTextQuery> {};

template<> struct hash<winrt::Windows::Data::Text::ISemanticTextQueryFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::ISemanticTextQueryFactory> {};

template<> struct hash<winrt::Windows::Data::Text::ITextConversionGenerator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::ITextConversionGenerator> {};

template<> struct hash<winrt::Windows::Data::Text::ITextConversionGeneratorFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::ITextConversionGeneratorFactory> {};

template<> struct hash<winrt::Windows::Data::Text::ITextPhoneme> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::ITextPhoneme> {};

template<> struct hash<winrt::Windows::Data::Text::ITextPredictionGenerator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::ITextPredictionGenerator> {};

template<> struct hash<winrt::Windows::Data::Text::ITextPredictionGeneratorFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::ITextPredictionGeneratorFactory> {};

template<> struct hash<winrt::Windows::Data::Text::ITextReverseConversionGenerator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::ITextReverseConversionGenerator> {};

template<> struct hash<winrt::Windows::Data::Text::ITextReverseConversionGenerator2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::ITextReverseConversionGenerator2> {};

template<> struct hash<winrt::Windows::Data::Text::ITextReverseConversionGeneratorFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::ITextReverseConversionGeneratorFactory> {};

template<> struct hash<winrt::Windows::Data::Text::IUnicodeCharactersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::IUnicodeCharactersStatics> {};

template<> struct hash<winrt::Windows::Data::Text::IWordSegment> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::IWordSegment> {};

template<> struct hash<winrt::Windows::Data::Text::IWordsSegmenter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::IWordsSegmenter> {};

template<> struct hash<winrt::Windows::Data::Text::IWordsSegmenterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::IWordsSegmenterFactory> {};

template<> struct hash<winrt::Windows::Data::Text::AlternateWordForm> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::AlternateWordForm> {};

template<> struct hash<winrt::Windows::Data::Text::SelectableWordSegment> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::SelectableWordSegment> {};

template<> struct hash<winrt::Windows::Data::Text::SelectableWordsSegmenter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::SelectableWordsSegmenter> {};

template<> struct hash<winrt::Windows::Data::Text::SemanticTextQuery> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::SemanticTextQuery> {};

template<> struct hash<winrt::Windows::Data::Text::TextConversionGenerator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::TextConversionGenerator> {};

template<> struct hash<winrt::Windows::Data::Text::TextPhoneme> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::TextPhoneme> {};

template<> struct hash<winrt::Windows::Data::Text::TextPredictionGenerator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::TextPredictionGenerator> {};

template<> struct hash<winrt::Windows::Data::Text::TextReverseConversionGenerator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::TextReverseConversionGenerator> {};

template<> struct hash<winrt::Windows::Data::Text::UnicodeCharacters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::UnicodeCharacters> {};

template<> struct hash<winrt::Windows::Data::Text::WordSegment> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::WordSegment> {};

template<> struct hash<winrt::Windows::Data::Text::WordsSegmenter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Text::WordsSegmenter> {};

}

WINRT_WARNING_POP
