// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Globalization.3.h"
#include "internal/Windows.Media.SpeechRecognition.3.h"
#include "Windows.Media.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs>
{
    HRESULT __stdcall get_Status(Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs>
{
    HRESULT __stdcall get_Result(abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognitionResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Result());
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
struct produce<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>
{
    HRESULT __stdcall get_AutoStopSilenceTimeout(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoStopSilenceTimeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoStopSilenceTimeout(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().AutoStopSilenceTimeout(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartAsync(abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartWithModeAsync(Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode mode, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartAsync(mode));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopAsync(abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CancelAsync(abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CancelAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PauseAsync(abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PauseAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Resume() noexcept override
    {
        try
        {
            this->shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs>> value, event_token * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Completed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token value) noexcept override
    {
        try
        {
            this->shim().Completed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ResultGenerated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs>> value, event_token * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().ResultGenerated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ResultGenerated(event_token value) noexcept override
    {
        try
        {
            this->shim().ResultGenerated(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult>
{
    HRESULT __stdcall get_Status(Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
{
    HRESULT __stdcall get_IsEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Tag(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Probability(Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Probability());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Probability(Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability value) noexcept override
    {
        try
        {
            this->shim().Probability(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint>
{
    HRESULT __stdcall get_GrammarFile(abi_arg_out<Windows::Storage::IStorageFile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GrammarFile());
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
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint> constraint) noexcept override
    {
        try
        {
            *constraint = detach(this->shim().Create(*reinterpret_cast<const Windows::Storage::StorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *constraint = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithTag(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<hstring> tag, abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint> constraint) noexcept override
    {
        try
        {
            *constraint = detach(this->shim().CreateWithTag(*reinterpret_cast<const Windows::Storage::StorageFile *>(&file), *reinterpret_cast<const hstring *>(&tag)));
            return S_OK;
        }
        catch (...)
        {
            *constraint = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis>
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
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs>
{
    HRESULT __stdcall get_Hypothesis(abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Hypothesis());
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
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint>
{
    HRESULT __stdcall get_Commands(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Commands());
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
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> commands, abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint> constraint) noexcept override
    {
        try
        {
            *constraint = detach(this->shim().Create(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&commands)));
            return S_OK;
        }
        catch (...)
        {
            *constraint = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithTag(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> commands, abi_arg_in<hstring> tag, abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint> constraint) noexcept override
    {
        try
        {
            *constraint = detach(this->shim().CreateWithTag(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&commands), *reinterpret_cast<const hstring *>(&tag)));
            return S_OK;
        }
        catch (...)
        {
            *constraint = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs>
{
    HRESULT __stdcall get_Problem(Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Problem());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionResult> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionResult>
{
    HRESULT __stdcall get_Status(Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_Confidence(Windows::Media::SpeechRecognition::SpeechRecognitionConfidence * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Confidence());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SemanticInterpretation(abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SemanticInterpretation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAlternates(uint32_t maxAlternates, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechRecognition::SpeechRecognitionResult>> alternates) noexcept override
    {
        try
        {
            *alternates = detach(this->shim().GetAlternates(maxAlternates));
            return S_OK;
        }
        catch (...)
        {
            *alternates = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Constraint(abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Constraint());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RulePath(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RulePath());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawConfidence(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RawConfidence());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionResult2> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionResult2>
{
    HRESULT __stdcall get_PhraseStartTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhraseStartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhraseDuration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhraseDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation>
{
    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::Collections::IVectorView<hstring>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
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
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint>
{
    HRESULT __stdcall get_Scenario(Windows::Media::SpeechRecognition::SpeechRecognitionScenario * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Scenario());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TopicHint(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TopicHint());
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
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory>
{
    HRESULT __stdcall abi_Create(Windows::Media::SpeechRecognition::SpeechRecognitionScenario scenario, abi_arg_in<hstring> topicHint, abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint> constraint) noexcept override
    {
        try
        {
            *constraint = detach(this->shim().Create(scenario, *reinterpret_cast<const hstring *>(&topicHint)));
            return S_OK;
        }
        catch (...)
        {
            *constraint = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithTag(Windows::Media::SpeechRecognition::SpeechRecognitionScenario scenario, abi_arg_in<hstring> topicHint, abi_arg_in<hstring> tag, abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint> constraint) noexcept override
    {
        try
        {
            *constraint = detach(this->shim().CreateWithTag(scenario, *reinterpret_cast<const hstring *>(&topicHint), *reinterpret_cast<const hstring *>(&tag)));
            return S_OK;
        }
        catch (...)
        {
            *constraint = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint>
{};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizer> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizer>
{
    HRESULT __stdcall get_CurrentLanguage(abi_arg_out<Windows::Globalization::ILanguage> language) noexcept override
    {
        try
        {
            *language = detach(this->shim().CurrentLanguage());
            return S_OK;
        }
        catch (...)
        {
            *language = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Constraints(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Constraints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timeouts(abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timeouts());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UIOptions(abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UIOptions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CompileConstraintsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().CompileConstraintsAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RecognizeAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().RecognizeAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RecognizeWithUIAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().RecognizeWithUIAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecognitionQualityDegrading(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs>> speechRecognitionQualityDegradingHandler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().RecognitionQualityDegrading(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs> *>(&speechRecognitionQualityDegradingHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecognitionQualityDegrading(event_token cookie) noexcept override
    {
        try
        {
            this->shim().RecognitionQualityDegrading(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs>> stateChangedHandler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().StateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs> *>(&stateChangedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token cookie) noexcept override
    {
        try
        {
            this->shim().StateChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizer2> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizer2>
{
    HRESULT __stdcall get_ContinuousRecognitionSession(abi_arg_out<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContinuousRecognitionSession());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Media::SpeechRecognition::SpeechRecognizerState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopRecognitionAsync(abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StopRecognitionAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HypothesisGenerated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs>> value, event_token * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().HypothesisGenerated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HypothesisGenerated(event_token value) noexcept override
    {
        try
        {
            this->shim().HypothesisGenerated(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizerFactory> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizerFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Globalization::ILanguage> language, abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognizer> recognizer) noexcept override
    {
        try
        {
            *recognizer = detach(this->shim().Create(*reinterpret_cast<const Windows::Globalization::Language *>(&language)));
            return S_OK;
        }
        catch (...)
        {
            *recognizer = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs>
{
    HRESULT __stdcall get_State(Windows::Media::SpeechRecognition::SpeechRecognizerState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizerStatics> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>
{
    HRESULT __stdcall get_SystemSpeechLanguage(abi_arg_out<Windows::Globalization::ILanguage> language) noexcept override
    {
        try
        {
            *language = detach(this->shim().SystemSpeechLanguage());
            return S_OK;
        }
        catch (...)
        {
            *language = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedTopicLanguages(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language>> languages) noexcept override
    {
        try
        {
            *languages = detach(this->shim().SupportedTopicLanguages());
            return S_OK;
        }
        catch (...)
        {
            *languages = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedGrammarLanguages(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language>> languages) noexcept override
    {
        try
        {
            *languages = detach(this->shim().SupportedGrammarLanguages());
            return S_OK;
        }
        catch (...)
        {
            *languages = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts>
{
    HRESULT __stdcall get_InitialSilenceTimeout(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InitialSilenceTimeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InitialSilenceTimeout(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().InitialSilenceTimeout(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndSilenceTimeout(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndSilenceTimeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EndSilenceTimeout(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().EndSilenceTimeout(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BabbleTimeout(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BabbleTimeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BabbleTimeout(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().BabbleTimeout(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions>
{
    HRESULT __stdcall get_ExampleText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExampleText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExampleText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ExampleText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudiblePrompt(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudiblePrompt());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudiblePrompt(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AudiblePrompt(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsReadBackEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsReadBackEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsReadBackEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsReadBackEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowConfirmation(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShowConfirmation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShowConfirmation(bool value) noexcept override
    {
        try
        {
            this->shim().ShowConfirmation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::IVoiceCommandManager> : produce_base<D, Windows::Media::SpeechRecognition::IVoiceCommandManager>
{
    HRESULT __stdcall abi_InstallCommandSetsFromStorageFileAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncAction> installAction) noexcept override
    {
        try
        {
            *installAction = detach(this->shim().InstallCommandSetsFromStorageFileAsync(*reinterpret_cast<const Windows::Storage::StorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *installAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstalledCommandSets(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Media::SpeechRecognition::VoiceCommandSet>> voiceCommandSets) noexcept override
    {
        try
        {
            *voiceCommandSets = detach(this->shim().InstalledCommandSets());
            return S_OK;
        }
        catch (...)
        {
            *voiceCommandSets = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::IVoiceCommandSet> : produce_base<D, Windows::Media::SpeechRecognition::IVoiceCommandSet>
{
    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPhraseListAsync(abi_arg_in<hstring> phraseListName, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> phraseList, abi_arg_out<Windows::Foundation::IAsyncAction> updateAction) noexcept override
    {
        try
        {
            *updateAction = detach(this->shim().SetPhraseListAsync(*reinterpret_cast<const hstring *>(&phraseListName), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&phraseList)));
            return S_OK;
        }
        catch (...)
        {
            *updateAction = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::SpeechRecognition {

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus impl_ISpeechRecognitionCompilationResult<D>::Status() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus value {};
    check_hresult(static_cast<const ISpeechRecognitionCompilationResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_ISpeechRecognizerTimeouts<D>::InitialSilenceTimeout() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ISpeechRecognizerTimeouts &>(static_cast<const D &>(*this))->get_InitialSilenceTimeout(put(value)));
    return value;
}

template <typename D> void impl_ISpeechRecognizerTimeouts<D>::InitialSilenceTimeout(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const ISpeechRecognizerTimeouts &>(static_cast<const D &>(*this))->put_InitialSilenceTimeout(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_ISpeechRecognizerTimeouts<D>::EndSilenceTimeout() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ISpeechRecognizerTimeouts &>(static_cast<const D &>(*this))->get_EndSilenceTimeout(put(value)));
    return value;
}

template <typename D> void impl_ISpeechRecognizerTimeouts<D>::EndSilenceTimeout(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const ISpeechRecognizerTimeouts &>(static_cast<const D &>(*this))->put_EndSilenceTimeout(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_ISpeechRecognizerTimeouts<D>::BabbleTimeout() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ISpeechRecognizerTimeouts &>(static_cast<const D &>(*this))->get_BabbleTimeout(put(value)));
    return value;
}

template <typename D> void impl_ISpeechRecognizerTimeouts<D>::BabbleTimeout(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const ISpeechRecognizerTimeouts &>(static_cast<const D &>(*this))->put_BabbleTimeout(get(value)));
}

template <typename D> hstring impl_ISpeechRecognizerUIOptions<D>::ExampleText() const
{
    hstring value;
    check_hresult(static_cast<const ISpeechRecognizerUIOptions &>(static_cast<const D &>(*this))->get_ExampleText(put(value)));
    return value;
}

template <typename D> void impl_ISpeechRecognizerUIOptions<D>::ExampleText(hstring_ref value) const
{
    check_hresult(static_cast<const ISpeechRecognizerUIOptions &>(static_cast<const D &>(*this))->put_ExampleText(get(value)));
}

template <typename D> hstring impl_ISpeechRecognizerUIOptions<D>::AudiblePrompt() const
{
    hstring value;
    check_hresult(static_cast<const ISpeechRecognizerUIOptions &>(static_cast<const D &>(*this))->get_AudiblePrompt(put(value)));
    return value;
}

template <typename D> void impl_ISpeechRecognizerUIOptions<D>::AudiblePrompt(hstring_ref value) const
{
    check_hresult(static_cast<const ISpeechRecognizerUIOptions &>(static_cast<const D &>(*this))->put_AudiblePrompt(get(value)));
}

template <typename D> bool impl_ISpeechRecognizerUIOptions<D>::IsReadBackEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISpeechRecognizerUIOptions &>(static_cast<const D &>(*this))->get_IsReadBackEnabled(&value));
    return value;
}

template <typename D> void impl_ISpeechRecognizerUIOptions<D>::IsReadBackEnabled(bool value) const
{
    check_hresult(static_cast<const ISpeechRecognizerUIOptions &>(static_cast<const D &>(*this))->put_IsReadBackEnabled(value));
}

template <typename D> bool impl_ISpeechRecognizerUIOptions<D>::ShowConfirmation() const
{
    bool value {};
    check_hresult(static_cast<const ISpeechRecognizerUIOptions &>(static_cast<const D &>(*this))->get_ShowConfirmation(&value));
    return value;
}

template <typename D> void impl_ISpeechRecognizerUIOptions<D>::ShowConfirmation(bool value) const
{
    check_hresult(static_cast<const ISpeechRecognizerUIOptions &>(static_cast<const D &>(*this))->put_ShowConfirmation(value));
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus impl_ISpeechRecognitionResult<D>::Status() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus value {};
    check_hresult(static_cast<const ISpeechRecognitionResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> hstring impl_ISpeechRecognitionResult<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const ISpeechRecognitionResult &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionConfidence impl_ISpeechRecognitionResult<D>::Confidence() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionConfidence value {};
    check_hresult(static_cast<const ISpeechRecognitionResult &>(static_cast<const D &>(*this))->get_Confidence(&value));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation impl_ISpeechRecognitionResult<D>::SemanticInterpretation() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation value { nullptr };
    check_hresult(static_cast<const ISpeechRecognitionResult &>(static_cast<const D &>(*this))->get_SemanticInterpretation(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechRecognition::SpeechRecognitionResult> impl_ISpeechRecognitionResult<D>::GetAlternates(uint32_t maxAlternates) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechRecognition::SpeechRecognitionResult> alternates;
    check_hresult(static_cast<const ISpeechRecognitionResult &>(static_cast<const D &>(*this))->abi_GetAlternates(maxAlternates, put(alternates)));
    return alternates;
}

template <typename D> Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint impl_ISpeechRecognitionResult<D>::Constraint() const
{
    Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint value;
    check_hresult(static_cast<const ISpeechRecognitionResult &>(static_cast<const D &>(*this))->get_Constraint(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_ISpeechRecognitionResult<D>::RulePath() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const ISpeechRecognitionResult &>(static_cast<const D &>(*this))->get_RulePath(put(value)));
    return value;
}

template <typename D> double impl_ISpeechRecognitionResult<D>::RawConfidence() const
{
    double value {};
    check_hresult(static_cast<const ISpeechRecognitionResult &>(static_cast<const D &>(*this))->get_RawConfidence(&value));
    return value;
}

template <typename D> bool impl_ISpeechRecognitionConstraint<D>::IsEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISpeechRecognitionConstraint &>(static_cast<const D &>(*this))->get_IsEnabled(&value));
    return value;
}

template <typename D> void impl_ISpeechRecognitionConstraint<D>::IsEnabled(bool value) const
{
    check_hresult(static_cast<const ISpeechRecognitionConstraint &>(static_cast<const D &>(*this))->put_IsEnabled(value));
}

template <typename D> hstring impl_ISpeechRecognitionConstraint<D>::Tag() const
{
    hstring value;
    check_hresult(static_cast<const ISpeechRecognitionConstraint &>(static_cast<const D &>(*this))->get_Tag(put(value)));
    return value;
}

template <typename D> void impl_ISpeechRecognitionConstraint<D>::Tag(hstring_ref value) const
{
    check_hresult(static_cast<const ISpeechRecognitionConstraint &>(static_cast<const D &>(*this))->put_Tag(get(value)));
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType impl_ISpeechRecognitionConstraint<D>::Type() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType value {};
    check_hresult(static_cast<const ISpeechRecognitionConstraint &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability impl_ISpeechRecognitionConstraint<D>::Probability() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability value {};
    check_hresult(static_cast<const ISpeechRecognitionConstraint &>(static_cast<const D &>(*this))->get_Probability(&value));
    return value;
}

template <typename D> void impl_ISpeechRecognitionConstraint<D>::Probability(Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability value) const
{
    check_hresult(static_cast<const ISpeechRecognitionConstraint &>(static_cast<const D &>(*this))->put_Probability(value));
}

template <typename D> Windows::Foundation::DateTime impl_ISpeechRecognitionResult2<D>::PhraseStartTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const ISpeechRecognitionResult2 &>(static_cast<const D &>(*this))->get_PhraseStartTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_ISpeechRecognitionResult2<D>::PhraseDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ISpeechRecognitionResult2 &>(static_cast<const D &>(*this))->get_PhraseDuration(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::Collections::IVectorView<hstring>> impl_ISpeechRecognitionSemanticInterpretation<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::Collections::IVectorView<hstring>> value;
    check_hresult(static_cast<const ISpeechRecognitionSemanticInterpretation &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionScenario impl_ISpeechRecognitionTopicConstraint<D>::Scenario() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionScenario value {};
    check_hresult(static_cast<const ISpeechRecognitionTopicConstraint &>(static_cast<const D &>(*this))->get_Scenario(&value));
    return value;
}

template <typename D> hstring impl_ISpeechRecognitionTopicConstraint<D>::TopicHint() const
{
    hstring value;
    check_hresult(static_cast<const ISpeechRecognitionTopicConstraint &>(static_cast<const D &>(*this))->get_TopicHint(put(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint impl_ISpeechRecognitionTopicConstraintFactory<D>::Create(Windows::Media::SpeechRecognition::SpeechRecognitionScenario scenario, hstring_ref topicHint) const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint constraint { nullptr };
    check_hresult(static_cast<const ISpeechRecognitionTopicConstraintFactory &>(static_cast<const D &>(*this))->abi_Create(scenario, get(topicHint), put(constraint)));
    return constraint;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint impl_ISpeechRecognitionTopicConstraintFactory<D>::CreateWithTag(Windows::Media::SpeechRecognition::SpeechRecognitionScenario scenario, hstring_ref topicHint, hstring_ref tag) const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint constraint { nullptr };
    check_hresult(static_cast<const ISpeechRecognitionTopicConstraintFactory &>(static_cast<const D &>(*this))->abi_CreateWithTag(scenario, get(topicHint), get(tag), put(constraint)));
    return constraint;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_ISpeechRecognitionListConstraint<D>::Commands() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const ISpeechRecognitionListConstraint &>(static_cast<const D &>(*this))->get_Commands(put(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint impl_ISpeechRecognitionListConstraintFactory<D>::Create(const Windows::Foundation::Collections::IIterable<hstring> & commands) const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint constraint { nullptr };
    check_hresult(static_cast<const ISpeechRecognitionListConstraintFactory &>(static_cast<const D &>(*this))->abi_Create(get(commands), put(constraint)));
    return constraint;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint impl_ISpeechRecognitionListConstraintFactory<D>::CreateWithTag(const Windows::Foundation::Collections::IIterable<hstring> & commands, hstring_ref tag) const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint constraint { nullptr };
    check_hresult(static_cast<const ISpeechRecognitionListConstraintFactory &>(static_cast<const D &>(*this))->abi_CreateWithTag(get(commands), get(tag), put(constraint)));
    return constraint;
}

template <typename D> Windows::Storage::StorageFile impl_ISpeechRecognitionGrammarFileConstraint<D>::GrammarFile() const
{
    Windows::Storage::StorageFile value { nullptr };
    check_hresult(static_cast<const ISpeechRecognitionGrammarFileConstraint &>(static_cast<const D &>(*this))->get_GrammarFile(put(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint impl_ISpeechRecognitionGrammarFileConstraintFactory<D>::Create(const Windows::Storage::StorageFile & file) const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint constraint { nullptr };
    check_hresult(static_cast<const ISpeechRecognitionGrammarFileConstraintFactory &>(static_cast<const D &>(*this))->abi_Create(get(file), put(constraint)));
    return constraint;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint impl_ISpeechRecognitionGrammarFileConstraintFactory<D>::CreateWithTag(const Windows::Storage::StorageFile & file, hstring_ref tag) const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint constraint { nullptr };
    check_hresult(static_cast<const ISpeechRecognitionGrammarFileConstraintFactory &>(static_cast<const D &>(*this))->abi_CreateWithTag(get(file), get(tag), put(constraint)));
    return constraint;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem impl_ISpeechRecognitionQualityDegradingEventArgs<D>::Problem() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem value {};
    check_hresult(static_cast<const ISpeechRecognitionQualityDegradingEventArgs &>(static_cast<const D &>(*this))->get_Problem(&value));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognizerState impl_ISpeechRecognizerStateChangedEventArgs<D>::State() const
{
    Windows::Media::SpeechRecognition::SpeechRecognizerState value {};
    check_hresult(static_cast<const ISpeechRecognizerStateChangedEventArgs &>(static_cast<const D &>(*this))->get_State(&value));
    return value;
}

template <typename D> Windows::Globalization::Language impl_ISpeechRecognizer<D>::CurrentLanguage() const
{
    Windows::Globalization::Language language { nullptr };
    check_hresult(static_cast<const ISpeechRecognizer &>(static_cast<const D &>(*this))->get_CurrentLanguage(put(language)));
    return language;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint> impl_ISpeechRecognizer<D>::Constraints() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint> value;
    check_hresult(static_cast<const ISpeechRecognizer &>(static_cast<const D &>(*this))->get_Constraints(put(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts impl_ISpeechRecognizer<D>::Timeouts() const
{
    Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts value { nullptr };
    check_hresult(static_cast<const ISpeechRecognizer &>(static_cast<const D &>(*this))->get_Timeouts(put(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions impl_ISpeechRecognizer<D>::UIOptions() const
{
    Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions value { nullptr };
    check_hresult(static_cast<const ISpeechRecognizer &>(static_cast<const D &>(*this))->get_UIOptions(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult> impl_ISpeechRecognizer<D>::CompileConstraintsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult> asyncOperation;
    check_hresult(static_cast<const ISpeechRecognizer &>(static_cast<const D &>(*this))->abi_CompileConstraintsAsync(put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult> impl_ISpeechRecognizer<D>::RecognizeAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult> asyncOperation;
    check_hresult(static_cast<const ISpeechRecognizer &>(static_cast<const D &>(*this))->abi_RecognizeAsync(put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult> impl_ISpeechRecognizer<D>::RecognizeWithUIAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult> asyncOperation;
    check_hresult(static_cast<const ISpeechRecognizer &>(static_cast<const D &>(*this))->abi_RecognizeWithUIAsync(put(asyncOperation)));
    return asyncOperation;
}

template <typename D> event_token impl_ISpeechRecognizer<D>::RecognitionQualityDegrading(const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs> & speechRecognitionQualityDegradingHandler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ISpeechRecognizer &>(static_cast<const D &>(*this))->add_RecognitionQualityDegrading(get(speechRecognitionQualityDegradingHandler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ISpeechRecognizer> impl_ISpeechRecognizer<D>::RecognitionQualityDegrading(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs> & speechRecognitionQualityDegradingHandler) const
{
    return impl::make_event_revoker<D, ISpeechRecognizer>(this, &ABI::Windows::Media::SpeechRecognition::ISpeechRecognizer::remove_RecognitionQualityDegrading, RecognitionQualityDegrading(speechRecognitionQualityDegradingHandler));
}

template <typename D> void impl_ISpeechRecognizer<D>::RecognitionQualityDegrading(event_token cookie) const
{
    check_hresult(static_cast<const ISpeechRecognizer &>(static_cast<const D &>(*this))->remove_RecognitionQualityDegrading(cookie));
}

template <typename D> event_token impl_ISpeechRecognizer<D>::StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs> & stateChangedHandler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ISpeechRecognizer &>(static_cast<const D &>(*this))->add_StateChanged(get(stateChangedHandler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ISpeechRecognizer> impl_ISpeechRecognizer<D>::StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs> & stateChangedHandler) const
{
    return impl::make_event_revoker<D, ISpeechRecognizer>(this, &ABI::Windows::Media::SpeechRecognition::ISpeechRecognizer::remove_StateChanged, StateChanged(stateChangedHandler));
}

template <typename D> void impl_ISpeechRecognizer<D>::StateChanged(event_token cookie) const
{
    check_hresult(static_cast<const ISpeechRecognizer &>(static_cast<const D &>(*this))->remove_StateChanged(cookie));
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognizer impl_ISpeechRecognizerFactory<D>::Create(const Windows::Globalization::Language & language) const
{
    Windows::Media::SpeechRecognition::SpeechRecognizer recognizer { nullptr };
    check_hresult(static_cast<const ISpeechRecognizerFactory &>(static_cast<const D &>(*this))->abi_Create(get(language), put(recognizer)));
    return recognizer;
}

template <typename D> Windows::Globalization::Language impl_ISpeechRecognizerStatics<D>::SystemSpeechLanguage() const
{
    Windows::Globalization::Language language { nullptr };
    check_hresult(static_cast<const ISpeechRecognizerStatics &>(static_cast<const D &>(*this))->get_SystemSpeechLanguage(put(language)));
    return language;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> impl_ISpeechRecognizerStatics<D>::SupportedTopicLanguages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> languages;
    check_hresult(static_cast<const ISpeechRecognizerStatics &>(static_cast<const D &>(*this))->get_SupportedTopicLanguages(put(languages)));
    return languages;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> impl_ISpeechRecognizerStatics<D>::SupportedGrammarLanguages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> languages;
    check_hresult(static_cast<const ISpeechRecognizerStatics &>(static_cast<const D &>(*this))->get_SupportedGrammarLanguages(put(languages)));
    return languages;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession impl_ISpeechRecognizer2<D>::ContinuousRecognitionSession() const
{
    Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession value { nullptr };
    check_hresult(static_cast<const ISpeechRecognizer2 &>(static_cast<const D &>(*this))->get_ContinuousRecognitionSession(put(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognizerState impl_ISpeechRecognizer2<D>::State() const
{
    Windows::Media::SpeechRecognition::SpeechRecognizerState value {};
    check_hresult(static_cast<const ISpeechRecognizer2 &>(static_cast<const D &>(*this))->get_State(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISpeechRecognizer2<D>::StopRecognitionAsync() const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const ISpeechRecognizer2 &>(static_cast<const D &>(*this))->abi_StopRecognitionAsync(put(value)));
    return value;
}

template <typename D> event_token impl_ISpeechRecognizer2<D>::HypothesisGenerated(const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs> & value) const
{
    event_token returnValue {};
    check_hresult(static_cast<const ISpeechRecognizer2 &>(static_cast<const D &>(*this))->add_HypothesisGenerated(get(value), &returnValue));
    return returnValue;
}

template <typename D> event_revoker<ISpeechRecognizer2> impl_ISpeechRecognizer2<D>::HypothesisGenerated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs> & value) const
{
    return impl::make_event_revoker<D, ISpeechRecognizer2>(this, &ABI::Windows::Media::SpeechRecognition::ISpeechRecognizer2::remove_HypothesisGenerated, HypothesisGenerated(value));
}

template <typename D> void impl_ISpeechRecognizer2<D>::HypothesisGenerated(event_token value) const
{
    check_hresult(static_cast<const ISpeechRecognizer2 &>(static_cast<const D &>(*this))->remove_HypothesisGenerated(value));
}

template <typename D> hstring impl_ISpeechRecognitionHypothesis<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const ISpeechRecognitionHypothesis &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis impl_ISpeechRecognitionHypothesisGeneratedEventArgs<D>::Hypothesis() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis value { nullptr };
    check_hresult(static_cast<const ISpeechRecognitionHypothesisGeneratedEventArgs &>(static_cast<const D &>(*this))->get_Hypothesis(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_ISpeechContinuousRecognitionSession<D>::AutoStopSilenceTimeout() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ISpeechContinuousRecognitionSession &>(static_cast<const D &>(*this))->get_AutoStopSilenceTimeout(put(value)));
    return value;
}

template <typename D> void impl_ISpeechContinuousRecognitionSession<D>::AutoStopSilenceTimeout(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const ISpeechContinuousRecognitionSession &>(static_cast<const D &>(*this))->put_AutoStopSilenceTimeout(get(value)));
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISpeechContinuousRecognitionSession<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const ISpeechContinuousRecognitionSession &>(static_cast<const D &>(*this))->abi_StartAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISpeechContinuousRecognitionSession<D>::StartAsync(Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode mode) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const ISpeechContinuousRecognitionSession &>(static_cast<const D &>(*this))->abi_StartWithModeAsync(mode, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISpeechContinuousRecognitionSession<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const ISpeechContinuousRecognitionSession &>(static_cast<const D &>(*this))->abi_StopAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISpeechContinuousRecognitionSession<D>::CancelAsync() const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const ISpeechContinuousRecognitionSession &>(static_cast<const D &>(*this))->abi_CancelAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISpeechContinuousRecognitionSession<D>::PauseAsync() const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const ISpeechContinuousRecognitionSession &>(static_cast<const D &>(*this))->abi_PauseAsync(put(value)));
    return value;
}

template <typename D> void impl_ISpeechContinuousRecognitionSession<D>::Resume() const
{
    check_hresult(static_cast<const ISpeechContinuousRecognitionSession &>(static_cast<const D &>(*this))->abi_Resume());
}

template <typename D> event_token impl_ISpeechContinuousRecognitionSession<D>::Completed(const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs> & value) const
{
    event_token returnValue {};
    check_hresult(static_cast<const ISpeechContinuousRecognitionSession &>(static_cast<const D &>(*this))->add_Completed(get(value), &returnValue));
    return returnValue;
}

template <typename D> event_revoker<ISpeechContinuousRecognitionSession> impl_ISpeechContinuousRecognitionSession<D>::Completed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs> & value) const
{
    return impl::make_event_revoker<D, ISpeechContinuousRecognitionSession>(this, &ABI::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession::remove_Completed, Completed(value));
}

template <typename D> void impl_ISpeechContinuousRecognitionSession<D>::Completed(event_token value) const
{
    check_hresult(static_cast<const ISpeechContinuousRecognitionSession &>(static_cast<const D &>(*this))->remove_Completed(value));
}

template <typename D> event_token impl_ISpeechContinuousRecognitionSession<D>::ResultGenerated(const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs> & value) const
{
    event_token returnValue {};
    check_hresult(static_cast<const ISpeechContinuousRecognitionSession &>(static_cast<const D &>(*this))->add_ResultGenerated(get(value), &returnValue));
    return returnValue;
}

template <typename D> event_revoker<ISpeechContinuousRecognitionSession> impl_ISpeechContinuousRecognitionSession<D>::ResultGenerated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs> & value) const
{
    return impl::make_event_revoker<D, ISpeechContinuousRecognitionSession>(this, &ABI::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession::remove_ResultGenerated, ResultGenerated(value));
}

template <typename D> void impl_ISpeechContinuousRecognitionSession<D>::ResultGenerated(event_token value) const
{
    check_hresult(static_cast<const ISpeechContinuousRecognitionSession &>(static_cast<const D &>(*this))->remove_ResultGenerated(value));
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus impl_ISpeechContinuousRecognitionCompletedEventArgs<D>::Status() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus value {};
    check_hresult(static_cast<const ISpeechContinuousRecognitionCompletedEventArgs &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionResult impl_ISpeechContinuousRecognitionResultGeneratedEventArgs<D>::Result() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResult value { nullptr };
    check_hresult(static_cast<const ISpeechContinuousRecognitionResultGeneratedEventArgs &>(static_cast<const D &>(*this))->get_Result(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IVoiceCommandManager<D>::InstallCommandSetsFromStorageFileAsync(const Windows::Storage::StorageFile & file) const
{
    Windows::Foundation::IAsyncAction installAction;
    check_hresult(static_cast<const IVoiceCommandManager &>(static_cast<const D &>(*this))->abi_InstallCommandSetsFromStorageFileAsync(get(file), put(installAction)));
    return installAction;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Media::SpeechRecognition::VoiceCommandSet> impl_IVoiceCommandManager<D>::InstalledCommandSets() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Media::SpeechRecognition::VoiceCommandSet> voiceCommandSets;
    check_hresult(static_cast<const IVoiceCommandManager &>(static_cast<const D &>(*this))->get_InstalledCommandSets(put(voiceCommandSets)));
    return voiceCommandSets;
}

template <typename D> hstring impl_IVoiceCommandSet<D>::Language() const
{
    hstring value;
    check_hresult(static_cast<const IVoiceCommandSet &>(static_cast<const D &>(*this))->get_Language(put(value)));
    return value;
}

template <typename D> hstring impl_IVoiceCommandSet<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IVoiceCommandSet &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IVoiceCommandSet<D>::SetPhraseListAsync(hstring_ref phraseListName, const Windows::Foundation::Collections::IIterable<hstring> & phraseList) const
{
    Windows::Foundation::IAsyncAction updateAction;
    check_hresult(static_cast<const IVoiceCommandSet &>(static_cast<const D &>(*this))->abi_SetPhraseListAsync(get(phraseListName), get(phraseList), put(updateAction)));
    return updateAction;
}

inline SpeechRecognitionGrammarFileConstraint::SpeechRecognitionGrammarFileConstraint(const Windows::Storage::StorageFile & file) :
    SpeechRecognitionGrammarFileConstraint(get_activation_factory<SpeechRecognitionGrammarFileConstraint, ISpeechRecognitionGrammarFileConstraintFactory>().Create(file))
{}

inline SpeechRecognitionGrammarFileConstraint::SpeechRecognitionGrammarFileConstraint(const Windows::Storage::StorageFile & file, hstring_ref tag) :
    SpeechRecognitionGrammarFileConstraint(get_activation_factory<SpeechRecognitionGrammarFileConstraint, ISpeechRecognitionGrammarFileConstraintFactory>().CreateWithTag(file, tag))
{}

inline SpeechRecognitionListConstraint::SpeechRecognitionListConstraint(const Windows::Foundation::Collections::IIterable<hstring> & commands) :
    SpeechRecognitionListConstraint(get_activation_factory<SpeechRecognitionListConstraint, ISpeechRecognitionListConstraintFactory>().Create(commands))
{}

inline SpeechRecognitionListConstraint::SpeechRecognitionListConstraint(const Windows::Foundation::Collections::IIterable<hstring> & commands, hstring_ref tag) :
    SpeechRecognitionListConstraint(get_activation_factory<SpeechRecognitionListConstraint, ISpeechRecognitionListConstraintFactory>().CreateWithTag(commands, tag))
{}

inline SpeechRecognitionTopicConstraint::SpeechRecognitionTopicConstraint(Windows::Media::SpeechRecognition::SpeechRecognitionScenario scenario, hstring_ref topicHint) :
    SpeechRecognitionTopicConstraint(get_activation_factory<SpeechRecognitionTopicConstraint, ISpeechRecognitionTopicConstraintFactory>().Create(scenario, topicHint))
{}

inline SpeechRecognitionTopicConstraint::SpeechRecognitionTopicConstraint(Windows::Media::SpeechRecognition::SpeechRecognitionScenario scenario, hstring_ref topicHint, hstring_ref tag) :
    SpeechRecognitionTopicConstraint(get_activation_factory<SpeechRecognitionTopicConstraint, ISpeechRecognitionTopicConstraintFactory>().CreateWithTag(scenario, topicHint, tag))
{}

inline SpeechRecognizer::SpeechRecognizer() :
    SpeechRecognizer(activate_instance<SpeechRecognizer>())
{}

inline SpeechRecognizer::SpeechRecognizer(const Windows::Globalization::Language & language) :
    SpeechRecognizer(get_activation_factory<SpeechRecognizer, ISpeechRecognizerFactory>().Create(language))
{}

inline Windows::Globalization::Language SpeechRecognizer::SystemSpeechLanguage()
{
    return get_activation_factory<SpeechRecognizer, ISpeechRecognizerStatics>().SystemSpeechLanguage();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> SpeechRecognizer::SupportedTopicLanguages()
{
    return get_activation_factory<SpeechRecognizer, ISpeechRecognizerStatics>().SupportedTopicLanguages();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> SpeechRecognizer::SupportedGrammarLanguages()
{
    return get_activation_factory<SpeechRecognizer, ISpeechRecognizerStatics>().SupportedGrammarLanguages();
}

inline Windows::Foundation::IAsyncAction VoiceCommandManager::InstallCommandSetsFromStorageFileAsync(const Windows::Storage::StorageFile & file)
{
    return get_activation_factory<VoiceCommandManager, IVoiceCommandManager>().InstallCommandSetsFromStorageFileAsync(file);
}

inline Windows::Foundation::Collections::IMapView<hstring, Windows::Media::SpeechRecognition::VoiceCommandSet> VoiceCommandManager::InstalledCommandSets()
{
    return get_activation_factory<VoiceCommandManager, IVoiceCommandManager>().InstalledCommandSets();
}

}

}
