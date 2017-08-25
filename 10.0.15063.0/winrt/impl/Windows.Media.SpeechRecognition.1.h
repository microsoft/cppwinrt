// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Globalization.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::SpeechRecognition {

struct WINRT_EBO ISpeechContinuousRecognitionCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechContinuousRecognitionCompletedEventArgs>
{
    ISpeechContinuousRecognitionCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechContinuousRecognitionResultGeneratedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechContinuousRecognitionResultGeneratedEventArgs>
{
    ISpeechContinuousRecognitionResultGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechContinuousRecognitionSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechContinuousRecognitionSession>
{
    ISpeechContinuousRecognitionSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionCompilationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionCompilationResult>
{
    ISpeechRecognitionCompilationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionConstraint :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionConstraint>
{
    ISpeechRecognitionConstraint(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionGrammarFileConstraint :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionGrammarFileConstraint>,
    impl::require<ISpeechRecognitionGrammarFileConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
{
    ISpeechRecognitionGrammarFileConstraint(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionGrammarFileConstraintFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionGrammarFileConstraintFactory>
{
    ISpeechRecognitionGrammarFileConstraintFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionHypothesis :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionHypothesis>
{
    ISpeechRecognitionHypothesis(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionHypothesisGeneratedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionHypothesisGeneratedEventArgs>
{
    ISpeechRecognitionHypothesisGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionListConstraint :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionListConstraint>,
    impl::require<ISpeechRecognitionListConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
{
    ISpeechRecognitionListConstraint(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionListConstraintFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionListConstraintFactory>
{
    ISpeechRecognitionListConstraintFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionQualityDegradingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionQualityDegradingEventArgs>
{
    ISpeechRecognitionQualityDegradingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionResult>
{
    ISpeechRecognitionResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionResult2>
{
    ISpeechRecognitionResult2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionSemanticInterpretation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionSemanticInterpretation>
{
    ISpeechRecognitionSemanticInterpretation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionTopicConstraint :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionTopicConstraint>,
    impl::require<ISpeechRecognitionTopicConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
{
    ISpeechRecognitionTopicConstraint(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionTopicConstraintFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionTopicConstraintFactory>
{
    ISpeechRecognitionTopicConstraintFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognitionVoiceCommandDefinitionConstraint :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionVoiceCommandDefinitionConstraint>,
    impl::require<ISpeechRecognitionVoiceCommandDefinitionConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
{
    ISpeechRecognitionVoiceCommandDefinitionConstraint(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizer>,
    impl::require<ISpeechRecognizer, Windows::Foundation::IClosable>
{
    ISpeechRecognizer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognizer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizer2>
{
    ISpeechRecognizer2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognizerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizerFactory>
{
    ISpeechRecognizerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognizerStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizerStateChangedEventArgs>
{
    ISpeechRecognizerStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognizerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizerStatics>
{
    ISpeechRecognizerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognizerTimeouts :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizerTimeouts>
{
    ISpeechRecognizerTimeouts(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechRecognizerUIOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizerUIOptions>
{
    ISpeechRecognizerUIOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceCommandManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandManager>
{
    IVoiceCommandManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceCommandSet :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandSet>
{
    IVoiceCommandSet(std::nullptr_t = nullptr) noexcept {}
};

}
