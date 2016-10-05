// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Data.Text.3.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Data::Text {

template <typename L> SelectableWordSegmentsTokenizingHandler::SelectableWordSegmentsTokenizingHandler(L lambda) :
    SelectableWordSegmentsTokenizingHandler(impl::make_delegate<impl_SelectableWordSegmentsTokenizingHandler<L>, SelectableWordSegmentsTokenizingHandler>(std::forward<L>(lambda)))
{}

template <typename F> SelectableWordSegmentsTokenizingHandler::SelectableWordSegmentsTokenizingHandler(F * function) :
    SelectableWordSegmentsTokenizingHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> SelectableWordSegmentsTokenizingHandler::SelectableWordSegmentsTokenizingHandler(O * object, M method) :
    SelectableWordSegmentsTokenizingHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void SelectableWordSegmentsTokenizingHandler::operator()(const Windows::Foundation::Collections::IIterable<Windows::Data::Text::SelectableWordSegment> & precedingWords, const Windows::Foundation::Collections::IIterable<Windows::Data::Text::SelectableWordSegment> & words) const
{
    check_hresult((*this)->abi_Invoke(get(precedingWords), get(words)));
}

template <typename L> WordSegmentsTokenizingHandler::WordSegmentsTokenizingHandler(L lambda) :
    WordSegmentsTokenizingHandler(impl::make_delegate<impl_WordSegmentsTokenizingHandler<L>, WordSegmentsTokenizingHandler>(std::forward<L>(lambda)))
{}

template <typename F> WordSegmentsTokenizingHandler::WordSegmentsTokenizingHandler(F * function) :
    WordSegmentsTokenizingHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> WordSegmentsTokenizingHandler::WordSegmentsTokenizingHandler(O * object, M method) :
    WordSegmentsTokenizingHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void WordSegmentsTokenizingHandler::operator()(const Windows::Foundation::Collections::IIterable<Windows::Data::Text::WordSegment> & precedingWords, const Windows::Foundation::Collections::IIterable<Windows::Data::Text::WordSegment> & words) const
{
    check_hresult((*this)->abi_Invoke(get(precedingWords), get(words)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Data::Text::IAlternateWordForm> : produce_base<D, Windows::Data::Text::IAlternateWordForm>
{
    HRESULT __stdcall get_SourceTextSegment(abi_arg_out<Windows::Data::Text::TextSegment> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceTextSegment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlternateText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizationFormat(Windows::Data::Text::AlternateNormalizationFormat * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NormalizationFormat());
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
    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceTextSegment(abi_arg_out<Windows::Data::Text::TextSegment> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceTextSegment());
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
    HRESULT __stdcall get_ResolvedLanguage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTokenAt(abi_arg_in<hstring> text, uint32_t startIndex, abi_arg_out<Windows::Data::Text::ISelectableWordSegment> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetTokenAt(*reinterpret_cast<const hstring *>(&text), startIndex));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTokens(abi_arg_in<hstring> text, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Data::Text::SelectableWordSegment>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetTokens(*reinterpret_cast<const hstring *>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Tokenize(abi_arg_in<hstring> text, uint32_t startIndex, abi_arg_in<Windows::Data::Text::SelectableWordSegmentsTokenizingHandler> handler) noexcept override
    {
        try
        {
            this->shim().Tokenize(*reinterpret_cast<const hstring *>(&text), startIndex, *reinterpret_cast<const Windows::Data::Text::SelectableWordSegmentsTokenizingHandler *>(&handler));
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
    HRESULT __stdcall abi_CreateWithLanguage(abi_arg_in<hstring> language, abi_arg_out<Windows::Data::Text::ISelectableWordsSegmenter> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithLanguage(*reinterpret_cast<const hstring *>(&language)));
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
    HRESULT __stdcall abi_Find(abi_arg_in<hstring> content, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Find(*reinterpret_cast<const hstring *>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindInProperty(abi_arg_in<hstring> propertyContent, abi_arg_in<hstring> propertyName, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindInProperty(*reinterpret_cast<const hstring *>(&propertyContent), *reinterpret_cast<const hstring *>(&propertyName)));
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> aqsFilter, abi_arg_out<Windows::Data::Text::ISemanticTextQuery> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&aqsFilter)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithLanguage(abi_arg_in<hstring> aqsFilter, abi_arg_in<hstring> filterLanguage, abi_arg_out<Windows::Data::Text::ISemanticTextQuery> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithLanguage(*reinterpret_cast<const hstring *>(&aqsFilter), *reinterpret_cast<const hstring *>(&filterLanguage)));
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
    HRESULT __stdcall get_ResolvedLanguage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageAvailableButNotInstalled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LanguageAvailableButNotInstalled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCandidatesAsync(abi_arg_in<hstring> input, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetCandidatesAsync(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCandidatesWithMaxCountAsync(abi_arg_in<hstring> input, uint32_t maxCandidates, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetCandidatesAsync(*reinterpret_cast<const hstring *>(&input), maxCandidates));
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> languageTag, abi_arg_out<Windows::Data::Text::ITextConversionGenerator> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&languageTag)));
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
    HRESULT __stdcall get_DisplayText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadingText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadingText());
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
    HRESULT __stdcall get_ResolvedLanguage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageAvailableButNotInstalled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LanguageAvailableButNotInstalled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCandidatesAsync(abi_arg_in<hstring> input, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetCandidatesAsync(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCandidatesWithMaxCountAsync(abi_arg_in<hstring> input, uint32_t maxCandidates, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetCandidatesAsync(*reinterpret_cast<const hstring *>(&input), maxCandidates));
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> languageTag, abi_arg_out<Windows::Data::Text::ITextPredictionGenerator> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&languageTag)));
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
    HRESULT __stdcall get_ResolvedLanguage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageAvailableButNotInstalled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LanguageAvailableButNotInstalled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertBackAsync(abi_arg_in<hstring> input, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ConvertBackAsync(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_GetPhonemesAsync(abi_arg_in<hstring> input, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextPhoneme>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetPhonemesAsync(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> languageTag, abi_arg_out<Windows::Data::Text::ITextReverseConversionGenerator> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&languageTag)));
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
    HRESULT __stdcall abi_GetCodepointFromSurrogatePair(uint32_t highSurrogate, uint32_t lowSurrogate, uint32_t * codepoint) noexcept override
    {
        try
        {
            *codepoint = detach(this->shim().GetCodepointFromSurrogatePair(highSurrogate, lowSurrogate));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSurrogatePairFromCodepoint(uint32_t codepoint, wchar_t * highSurrogate, wchar_t * lowSurrogate) noexcept override
    {
        try
        {
            this->shim().GetSurrogatePairFromCodepoint(codepoint, *highSurrogate, *lowSurrogate);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsHighSurrogate(uint32_t codepoint, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsHighSurrogate(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsLowSurrogate(uint32_t codepoint, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsLowSurrogate(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsSupplementary(uint32_t codepoint, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSupplementary(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsNoncharacter(uint32_t codepoint, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsNoncharacter(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsWhitespace(uint32_t codepoint, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsWhitespace(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsAlphabetic(uint32_t codepoint, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsAlphabetic(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsCased(uint32_t codepoint, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCased(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsUppercase(uint32_t codepoint, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsUppercase(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsLowercase(uint32_t codepoint, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsLowercase(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsIdStart(uint32_t codepoint, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsIdStart(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsIdContinue(uint32_t codepoint, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsIdContinue(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsGraphemeBase(uint32_t codepoint, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsGraphemeBase(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsGraphemeExtend(uint32_t codepoint, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsGraphemeExtend(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNumericType(uint32_t codepoint, Windows::Data::Text::UnicodeNumericType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetNumericType(codepoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetGeneralCategory(uint32_t codepoint, Windows::Data::Text::UnicodeGeneralCategory * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetGeneralCategory(codepoint));
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
    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceTextSegment(abi_arg_out<Windows::Data::Text::TextSegment> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceTextSegment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateForms(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Data::Text::AlternateWordForm>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlternateForms());
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
    HRESULT __stdcall get_ResolvedLanguage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTokenAt(abi_arg_in<hstring> text, uint32_t startIndex, abi_arg_out<Windows::Data::Text::IWordSegment> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetTokenAt(*reinterpret_cast<const hstring *>(&text), startIndex));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTokens(abi_arg_in<hstring> text, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Data::Text::WordSegment>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetTokens(*reinterpret_cast<const hstring *>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Tokenize(abi_arg_in<hstring> text, uint32_t startIndex, abi_arg_in<Windows::Data::Text::WordSegmentsTokenizingHandler> handler) noexcept override
    {
        try
        {
            this->shim().Tokenize(*reinterpret_cast<const hstring *>(&text), startIndex, *reinterpret_cast<const Windows::Data::Text::WordSegmentsTokenizingHandler *>(&handler));
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
    HRESULT __stdcall abi_CreateWithLanguage(abi_arg_in<hstring> language, abi_arg_out<Windows::Data::Text::IWordsSegmenter> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithLanguage(*reinterpret_cast<const hstring *>(&language)));
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

namespace Windows::Data::Text {

template <typename D> Windows::Data::Text::SemanticTextQuery impl_ISemanticTextQueryFactory<D>::Create(hstring_ref aqsFilter) const
{
    Windows::Data::Text::SemanticTextQuery result { nullptr };
    check_hresult(static_cast<const ISemanticTextQueryFactory &>(static_cast<const D &>(*this))->abi_Create(get(aqsFilter), put(result)));
    return result;
}

template <typename D> Windows::Data::Text::SemanticTextQuery impl_ISemanticTextQueryFactory<D>::CreateWithLanguage(hstring_ref aqsFilter, hstring_ref filterLanguage) const
{
    Windows::Data::Text::SemanticTextQuery result { nullptr };
    check_hresult(static_cast<const ISemanticTextQueryFactory &>(static_cast<const D &>(*this))->abi_CreateWithLanguage(get(aqsFilter), get(filterLanguage), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> impl_ISemanticTextQuery<D>::Find(hstring_ref content) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> result;
    check_hresult(static_cast<const ISemanticTextQuery &>(static_cast<const D &>(*this))->abi_Find(get(content), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> impl_ISemanticTextQuery<D>::FindInProperty(hstring_ref propertyContent, hstring_ref propertyName) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment> result;
    check_hresult(static_cast<const ISemanticTextQuery &>(static_cast<const D &>(*this))->abi_FindInProperty(get(propertyContent), get(propertyName), put(result)));
    return result;
}

template <typename D> uint32_t impl_IUnicodeCharactersStatics<D>::GetCodepointFromSurrogatePair(uint32_t highSurrogate, uint32_t lowSurrogate) const
{
    uint32_t codepoint {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_GetCodepointFromSurrogatePair(highSurrogate, lowSurrogate, &codepoint));
    return codepoint;
}

template <typename D> void impl_IUnicodeCharactersStatics<D>::GetSurrogatePairFromCodepoint(uint32_t codepoint, wchar_t & highSurrogate, wchar_t & lowSurrogate) const
{
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_GetSurrogatePairFromCodepoint(codepoint, &highSurrogate, &lowSurrogate));
}

template <typename D> bool impl_IUnicodeCharactersStatics<D>::IsHighSurrogate(uint32_t codepoint) const
{
    bool value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_IsHighSurrogate(codepoint, &value));
    return value;
}

template <typename D> bool impl_IUnicodeCharactersStatics<D>::IsLowSurrogate(uint32_t codepoint) const
{
    bool value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_IsLowSurrogate(codepoint, &value));
    return value;
}

template <typename D> bool impl_IUnicodeCharactersStatics<D>::IsSupplementary(uint32_t codepoint) const
{
    bool value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_IsSupplementary(codepoint, &value));
    return value;
}

template <typename D> bool impl_IUnicodeCharactersStatics<D>::IsNoncharacter(uint32_t codepoint) const
{
    bool value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_IsNoncharacter(codepoint, &value));
    return value;
}

template <typename D> bool impl_IUnicodeCharactersStatics<D>::IsWhitespace(uint32_t codepoint) const
{
    bool value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_IsWhitespace(codepoint, &value));
    return value;
}

template <typename D> bool impl_IUnicodeCharactersStatics<D>::IsAlphabetic(uint32_t codepoint) const
{
    bool value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_IsAlphabetic(codepoint, &value));
    return value;
}

template <typename D> bool impl_IUnicodeCharactersStatics<D>::IsCased(uint32_t codepoint) const
{
    bool value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_IsCased(codepoint, &value));
    return value;
}

template <typename D> bool impl_IUnicodeCharactersStatics<D>::IsUppercase(uint32_t codepoint) const
{
    bool value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_IsUppercase(codepoint, &value));
    return value;
}

template <typename D> bool impl_IUnicodeCharactersStatics<D>::IsLowercase(uint32_t codepoint) const
{
    bool value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_IsLowercase(codepoint, &value));
    return value;
}

template <typename D> bool impl_IUnicodeCharactersStatics<D>::IsIdStart(uint32_t codepoint) const
{
    bool value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_IsIdStart(codepoint, &value));
    return value;
}

template <typename D> bool impl_IUnicodeCharactersStatics<D>::IsIdContinue(uint32_t codepoint) const
{
    bool value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_IsIdContinue(codepoint, &value));
    return value;
}

template <typename D> bool impl_IUnicodeCharactersStatics<D>::IsGraphemeBase(uint32_t codepoint) const
{
    bool value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_IsGraphemeBase(codepoint, &value));
    return value;
}

template <typename D> bool impl_IUnicodeCharactersStatics<D>::IsGraphemeExtend(uint32_t codepoint) const
{
    bool value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_IsGraphemeExtend(codepoint, &value));
    return value;
}

template <typename D> Windows::Data::Text::UnicodeNumericType impl_IUnicodeCharactersStatics<D>::GetNumericType(uint32_t codepoint) const
{
    Windows::Data::Text::UnicodeNumericType value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_GetNumericType(codepoint, &value));
    return value;
}

template <typename D> Windows::Data::Text::UnicodeGeneralCategory impl_IUnicodeCharactersStatics<D>::GetGeneralCategory(uint32_t codepoint) const
{
    Windows::Data::Text::UnicodeGeneralCategory value {};
    check_hresult(static_cast<const IUnicodeCharactersStatics &>(static_cast<const D &>(*this))->abi_GetGeneralCategory(codepoint, &value));
    return value;
}

template <typename D> Windows::Data::Text::TextSegment impl_IAlternateWordForm<D>::SourceTextSegment() const
{
    Windows::Data::Text::TextSegment value {};
    check_hresult(static_cast<const IAlternateWordForm &>(static_cast<const D &>(*this))->get_SourceTextSegment(put(value)));
    return value;
}

template <typename D> hstring impl_IAlternateWordForm<D>::AlternateText() const
{
    hstring value;
    check_hresult(static_cast<const IAlternateWordForm &>(static_cast<const D &>(*this))->get_AlternateText(put(value)));
    return value;
}

template <typename D> Windows::Data::Text::AlternateNormalizationFormat impl_IAlternateWordForm<D>::NormalizationFormat() const
{
    Windows::Data::Text::AlternateNormalizationFormat value {};
    check_hresult(static_cast<const IAlternateWordForm &>(static_cast<const D &>(*this))->get_NormalizationFormat(&value));
    return value;
}

template <typename D> hstring impl_ISelectableWordSegment<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const ISelectableWordSegment &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> Windows::Data::Text::TextSegment impl_ISelectableWordSegment<D>::SourceTextSegment() const
{
    Windows::Data::Text::TextSegment value {};
    check_hresult(static_cast<const ISelectableWordSegment &>(static_cast<const D &>(*this))->get_SourceTextSegment(put(value)));
    return value;
}

template <typename D> hstring impl_IWordSegment<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const IWordSegment &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> Windows::Data::Text::TextSegment impl_IWordSegment<D>::SourceTextSegment() const
{
    Windows::Data::Text::TextSegment value {};
    check_hresult(static_cast<const IWordSegment &>(static_cast<const D &>(*this))->get_SourceTextSegment(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Data::Text::AlternateWordForm> impl_IWordSegment<D>::AlternateForms() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::AlternateWordForm> value;
    check_hresult(static_cast<const IWordSegment &>(static_cast<const D &>(*this))->get_AlternateForms(put(value)));
    return value;
}

template <typename D> hstring impl_IWordsSegmenter<D>::ResolvedLanguage() const
{
    hstring value;
    check_hresult(static_cast<const IWordsSegmenter &>(static_cast<const D &>(*this))->get_ResolvedLanguage(put(value)));
    return value;
}

template <typename D> Windows::Data::Text::WordSegment impl_IWordsSegmenter<D>::GetTokenAt(hstring_ref text, uint32_t startIndex) const
{
    Windows::Data::Text::WordSegment result { nullptr };
    check_hresult(static_cast<const IWordsSegmenter &>(static_cast<const D &>(*this))->abi_GetTokenAt(get(text), startIndex, put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Data::Text::WordSegment> impl_IWordsSegmenter<D>::GetTokens(hstring_ref text) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::WordSegment> result;
    check_hresult(static_cast<const IWordsSegmenter &>(static_cast<const D &>(*this))->abi_GetTokens(get(text), put(result)));
    return result;
}

template <typename D> void impl_IWordsSegmenter<D>::Tokenize(hstring_ref text, uint32_t startIndex, const Windows::Data::Text::WordSegmentsTokenizingHandler & handler) const
{
    check_hresult(static_cast<const IWordsSegmenter &>(static_cast<const D &>(*this))->abi_Tokenize(get(text), startIndex, get(handler)));
}

template <typename D> Windows::Data::Text::WordsSegmenter impl_IWordsSegmenterFactory<D>::CreateWithLanguage(hstring_ref language) const
{
    Windows::Data::Text::WordsSegmenter result { nullptr };
    check_hresult(static_cast<const IWordsSegmenterFactory &>(static_cast<const D &>(*this))->abi_CreateWithLanguage(get(language), put(result)));
    return result;
}

template <typename D> hstring impl_ISelectableWordsSegmenter<D>::ResolvedLanguage() const
{
    hstring value;
    check_hresult(static_cast<const ISelectableWordsSegmenter &>(static_cast<const D &>(*this))->get_ResolvedLanguage(put(value)));
    return value;
}

template <typename D> Windows::Data::Text::SelectableWordSegment impl_ISelectableWordsSegmenter<D>::GetTokenAt(hstring_ref text, uint32_t startIndex) const
{
    Windows::Data::Text::SelectableWordSegment result { nullptr };
    check_hresult(static_cast<const ISelectableWordsSegmenter &>(static_cast<const D &>(*this))->abi_GetTokenAt(get(text), startIndex, put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Data::Text::SelectableWordSegment> impl_ISelectableWordsSegmenter<D>::GetTokens(hstring_ref text) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Data::Text::SelectableWordSegment> result;
    check_hresult(static_cast<const ISelectableWordsSegmenter &>(static_cast<const D &>(*this))->abi_GetTokens(get(text), put(result)));
    return result;
}

template <typename D> void impl_ISelectableWordsSegmenter<D>::Tokenize(hstring_ref text, uint32_t startIndex, const Windows::Data::Text::SelectableWordSegmentsTokenizingHandler & handler) const
{
    check_hresult(static_cast<const ISelectableWordsSegmenter &>(static_cast<const D &>(*this))->abi_Tokenize(get(text), startIndex, get(handler)));
}

template <typename D> Windows::Data::Text::SelectableWordsSegmenter impl_ISelectableWordsSegmenterFactory<D>::CreateWithLanguage(hstring_ref language) const
{
    Windows::Data::Text::SelectableWordsSegmenter result { nullptr };
    check_hresult(static_cast<const ISelectableWordsSegmenterFactory &>(static_cast<const D &>(*this))->abi_CreateWithLanguage(get(language), put(result)));
    return result;
}

template <typename D> hstring impl_ITextPredictionGenerator<D>::ResolvedLanguage() const
{
    hstring value;
    check_hresult(static_cast<const ITextPredictionGenerator &>(static_cast<const D &>(*this))->get_ResolvedLanguage(put(value)));
    return value;
}

template <typename D> bool impl_ITextPredictionGenerator<D>::LanguageAvailableButNotInstalled() const
{
    bool value {};
    check_hresult(static_cast<const ITextPredictionGenerator &>(static_cast<const D &>(*this))->get_LanguageAvailableButNotInstalled(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> impl_ITextPredictionGenerator<D>::GetCandidatesAsync(hstring_ref input) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> result;
    check_hresult(static_cast<const ITextPredictionGenerator &>(static_cast<const D &>(*this))->abi_GetCandidatesAsync(get(input), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> impl_ITextPredictionGenerator<D>::GetCandidatesAsync(hstring_ref input, uint32_t maxCandidates) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> result;
    check_hresult(static_cast<const ITextPredictionGenerator &>(static_cast<const D &>(*this))->abi_GetCandidatesWithMaxCountAsync(get(input), maxCandidates, put(result)));
    return result;
}

template <typename D> Windows::Data::Text::TextPredictionGenerator impl_ITextPredictionGeneratorFactory<D>::Create(hstring_ref languageTag) const
{
    Windows::Data::Text::TextPredictionGenerator result { nullptr };
    check_hresult(static_cast<const ITextPredictionGeneratorFactory &>(static_cast<const D &>(*this))->abi_Create(get(languageTag), put(result)));
    return result;
}

template <typename D> hstring impl_ITextConversionGenerator<D>::ResolvedLanguage() const
{
    hstring value;
    check_hresult(static_cast<const ITextConversionGenerator &>(static_cast<const D &>(*this))->get_ResolvedLanguage(put(value)));
    return value;
}

template <typename D> bool impl_ITextConversionGenerator<D>::LanguageAvailableButNotInstalled() const
{
    bool value {};
    check_hresult(static_cast<const ITextConversionGenerator &>(static_cast<const D &>(*this))->get_LanguageAvailableButNotInstalled(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> impl_ITextConversionGenerator<D>::GetCandidatesAsync(hstring_ref input) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> result;
    check_hresult(static_cast<const ITextConversionGenerator &>(static_cast<const D &>(*this))->abi_GetCandidatesAsync(get(input), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> impl_ITextConversionGenerator<D>::GetCandidatesAsync(hstring_ref input, uint32_t maxCandidates) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> result;
    check_hresult(static_cast<const ITextConversionGenerator &>(static_cast<const D &>(*this))->abi_GetCandidatesWithMaxCountAsync(get(input), maxCandidates, put(result)));
    return result;
}

template <typename D> Windows::Data::Text::TextConversionGenerator impl_ITextConversionGeneratorFactory<D>::Create(hstring_ref languageTag) const
{
    Windows::Data::Text::TextConversionGenerator result { nullptr };
    check_hresult(static_cast<const ITextConversionGeneratorFactory &>(static_cast<const D &>(*this))->abi_Create(get(languageTag), put(result)));
    return result;
}

template <typename D> hstring impl_ITextReverseConversionGenerator<D>::ResolvedLanguage() const
{
    hstring value;
    check_hresult(static_cast<const ITextReverseConversionGenerator &>(static_cast<const D &>(*this))->get_ResolvedLanguage(put(value)));
    return value;
}

template <typename D> bool impl_ITextReverseConversionGenerator<D>::LanguageAvailableButNotInstalled() const
{
    bool value {};
    check_hresult(static_cast<const ITextReverseConversionGenerator &>(static_cast<const D &>(*this))->get_LanguageAvailableButNotInstalled(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_ITextReverseConversionGenerator<D>::ConvertBackAsync(hstring_ref input) const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(static_cast<const ITextReverseConversionGenerator &>(static_cast<const D &>(*this))->abi_ConvertBackAsync(get(input), put(result)));
    return result;
}

template <typename D> Windows::Data::Text::TextReverseConversionGenerator impl_ITextReverseConversionGeneratorFactory<D>::Create(hstring_ref languageTag) const
{
    Windows::Data::Text::TextReverseConversionGenerator result { nullptr };
    check_hresult(static_cast<const ITextReverseConversionGeneratorFactory &>(static_cast<const D &>(*this))->abi_Create(get(languageTag), put(result)));
    return result;
}

template <typename D> hstring impl_ITextPhoneme<D>::DisplayText() const
{
    hstring value;
    check_hresult(static_cast<const ITextPhoneme &>(static_cast<const D &>(*this))->get_DisplayText(put(value)));
    return value;
}

template <typename D> hstring impl_ITextPhoneme<D>::ReadingText() const
{
    hstring value;
    check_hresult(static_cast<const ITextPhoneme &>(static_cast<const D &>(*this))->get_ReadingText(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextPhoneme>> impl_ITextReverseConversionGenerator2<D>::GetPhonemesAsync(hstring_ref input) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextPhoneme>> result;
    check_hresult(static_cast<const ITextReverseConversionGenerator2 &>(static_cast<const D &>(*this))->abi_GetPhonemesAsync(get(input), put(result)));
    return result;
}

inline SelectableWordsSegmenter::SelectableWordsSegmenter(hstring_ref language) :
    SelectableWordsSegmenter(get_activation_factory<SelectableWordsSegmenter, ISelectableWordsSegmenterFactory>().CreateWithLanguage(language))
{}

inline SemanticTextQuery::SemanticTextQuery(hstring_ref aqsFilter) :
    SemanticTextQuery(get_activation_factory<SemanticTextQuery, ISemanticTextQueryFactory>().Create(aqsFilter))
{}

inline SemanticTextQuery::SemanticTextQuery(hstring_ref aqsFilter, hstring_ref filterLanguage) :
    SemanticTextQuery(get_activation_factory<SemanticTextQuery, ISemanticTextQueryFactory>().CreateWithLanguage(aqsFilter, filterLanguage))
{}

inline TextConversionGenerator::TextConversionGenerator(hstring_ref languageTag) :
    TextConversionGenerator(get_activation_factory<TextConversionGenerator, ITextConversionGeneratorFactory>().Create(languageTag))
{}

inline TextPredictionGenerator::TextPredictionGenerator(hstring_ref languageTag) :
    TextPredictionGenerator(get_activation_factory<TextPredictionGenerator, ITextPredictionGeneratorFactory>().Create(languageTag))
{}

inline TextReverseConversionGenerator::TextReverseConversionGenerator(hstring_ref languageTag) :
    TextReverseConversionGenerator(get_activation_factory<TextReverseConversionGenerator, ITextReverseConversionGeneratorFactory>().Create(languageTag))
{}

inline uint32_t UnicodeCharacters::GetCodepointFromSurrogatePair(uint32_t highSurrogate, uint32_t lowSurrogate)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().GetCodepointFromSurrogatePair(highSurrogate, lowSurrogate);
}

inline void UnicodeCharacters::GetSurrogatePairFromCodepoint(uint32_t codepoint, wchar_t & highSurrogate, wchar_t & lowSurrogate)
{
    get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().GetSurrogatePairFromCodepoint(codepoint, highSurrogate, lowSurrogate);
}

inline bool UnicodeCharacters::IsHighSurrogate(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().IsHighSurrogate(codepoint);
}

inline bool UnicodeCharacters::IsLowSurrogate(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().IsLowSurrogate(codepoint);
}

inline bool UnicodeCharacters::IsSupplementary(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().IsSupplementary(codepoint);
}

inline bool UnicodeCharacters::IsNoncharacter(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().IsNoncharacter(codepoint);
}

inline bool UnicodeCharacters::IsWhitespace(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().IsWhitespace(codepoint);
}

inline bool UnicodeCharacters::IsAlphabetic(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().IsAlphabetic(codepoint);
}

inline bool UnicodeCharacters::IsCased(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().IsCased(codepoint);
}

inline bool UnicodeCharacters::IsUppercase(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().IsUppercase(codepoint);
}

inline bool UnicodeCharacters::IsLowercase(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().IsLowercase(codepoint);
}

inline bool UnicodeCharacters::IsIdStart(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().IsIdStart(codepoint);
}

inline bool UnicodeCharacters::IsIdContinue(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().IsIdContinue(codepoint);
}

inline bool UnicodeCharacters::IsGraphemeBase(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().IsGraphemeBase(codepoint);
}

inline bool UnicodeCharacters::IsGraphemeExtend(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().IsGraphemeExtend(codepoint);
}

inline Windows::Data::Text::UnicodeNumericType UnicodeCharacters::GetNumericType(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().GetNumericType(codepoint);
}

inline Windows::Data::Text::UnicodeGeneralCategory UnicodeCharacters::GetGeneralCategory(uint32_t codepoint)
{
    return get_activation_factory<UnicodeCharacters, IUnicodeCharactersStatics>().GetGeneralCategory(codepoint);
}

inline WordsSegmenter::WordsSegmenter(hstring_ref language) :
    WordsSegmenter(get_activation_factory<WordsSegmenter, IWordsSegmenterFactory>().CreateWithLanguage(language))
{}

}

}
