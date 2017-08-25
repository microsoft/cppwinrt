// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::SpeechRecognition {

struct WINRT_EBO SpeechContinuousRecognitionCompletedEventArgs :
    Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs
{
    SpeechContinuousRecognitionCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechContinuousRecognitionResultGeneratedEventArgs :
    Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs
{
    SpeechContinuousRecognitionResultGeneratedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechContinuousRecognitionSession :
    Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession
{
    SpeechContinuousRecognitionSession(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechRecognitionCompilationResult :
    Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult
{
    SpeechRecognitionCompilationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechRecognitionGrammarFileConstraint :
    Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint
{
    SpeechRecognitionGrammarFileConstraint(std::nullptr_t) noexcept {}
    SpeechRecognitionGrammarFileConstraint(Windows::Storage::StorageFile const& file);
    SpeechRecognitionGrammarFileConstraint(Windows::Storage::StorageFile const& file, param::hstring const& tag);
};

struct WINRT_EBO SpeechRecognitionHypothesis :
    Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis
{
    SpeechRecognitionHypothesis(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechRecognitionHypothesisGeneratedEventArgs :
    Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs
{
    SpeechRecognitionHypothesisGeneratedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechRecognitionListConstraint :
    Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint
{
    SpeechRecognitionListConstraint(std::nullptr_t) noexcept {}
    SpeechRecognitionListConstraint(param::iterable<hstring> const& commands);
    SpeechRecognitionListConstraint(param::iterable<hstring> const& commands, param::hstring const& tag);
};

struct WINRT_EBO SpeechRecognitionQualityDegradingEventArgs :
    Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs
{
    SpeechRecognitionQualityDegradingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechRecognitionResult :
    Windows::Media::SpeechRecognition::ISpeechRecognitionResult,
    impl::require<SpeechRecognitionResult, Windows::Media::SpeechRecognition::ISpeechRecognitionResult2>
{
    SpeechRecognitionResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechRecognitionSemanticInterpretation :
    Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation
{
    SpeechRecognitionSemanticInterpretation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechRecognitionTopicConstraint :
    Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint
{
    SpeechRecognitionTopicConstraint(std::nullptr_t) noexcept {}
    SpeechRecognitionTopicConstraint(Windows::Media::SpeechRecognition::SpeechRecognitionScenario const& scenario, param::hstring const& topicHint);
    SpeechRecognitionTopicConstraint(Windows::Media::SpeechRecognition::SpeechRecognitionScenario const& scenario, param::hstring const& topicHint, param::hstring const& tag);
};

struct WINRT_EBO SpeechRecognitionVoiceCommandDefinitionConstraint :
    Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint
{
    SpeechRecognitionVoiceCommandDefinitionConstraint(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechRecognizer :
    Windows::Media::SpeechRecognition::ISpeechRecognizer,
    impl::require<SpeechRecognizer, Windows::Media::SpeechRecognition::ISpeechRecognizer2>
{
    SpeechRecognizer(std::nullptr_t) noexcept {}
    SpeechRecognizer();
    SpeechRecognizer(Windows::Globalization::Language const& language);
    static Windows::Globalization::Language SystemSpeechLanguage();
    static Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> SupportedTopicLanguages();
    static Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> SupportedGrammarLanguages();
};

struct WINRT_EBO SpeechRecognizerStateChangedEventArgs :
    Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs
{
    SpeechRecognizerStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechRecognizerTimeouts :
    Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts
{
    SpeechRecognizerTimeouts(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechRecognizerUIOptions :
    Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions
{
    SpeechRecognizerUIOptions(std::nullptr_t) noexcept {}
};

struct VoiceCommandManager
{
    VoiceCommandManager() = delete;
    static Windows::Foundation::IAsyncAction InstallCommandSetsFromStorageFileAsync(Windows::Storage::StorageFile const& file);
    static Windows::Foundation::Collections::IMapView<hstring, Windows::Media::SpeechRecognition::VoiceCommandSet> InstalledCommandSets();
};

struct WINRT_EBO VoiceCommandSet :
    Windows::Media::SpeechRecognition::IVoiceCommandSet
{
    VoiceCommandSet(std::nullptr_t) noexcept {}
};

}
