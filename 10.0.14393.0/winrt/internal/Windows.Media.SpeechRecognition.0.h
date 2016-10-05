// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::SpeechRecognition {

struct ISpeechContinuousRecognitionCompletedEventArgs;
struct ISpeechContinuousRecognitionResultGeneratedEventArgs;
struct ISpeechContinuousRecognitionSession;
struct ISpeechRecognitionCompilationResult;
struct ISpeechRecognitionConstraint;
struct ISpeechRecognitionGrammarFileConstraint;
struct ISpeechRecognitionGrammarFileConstraintFactory;
struct ISpeechRecognitionHypothesis;
struct ISpeechRecognitionHypothesisGeneratedEventArgs;
struct ISpeechRecognitionListConstraint;
struct ISpeechRecognitionListConstraintFactory;
struct ISpeechRecognitionQualityDegradingEventArgs;
struct ISpeechRecognitionResult;
struct ISpeechRecognitionResult2;
struct ISpeechRecognitionSemanticInterpretation;
struct ISpeechRecognitionTopicConstraint;
struct ISpeechRecognitionTopicConstraintFactory;
struct ISpeechRecognitionVoiceCommandDefinitionConstraint;
struct ISpeechRecognizer;
struct ISpeechRecognizer2;
struct ISpeechRecognizerFactory;
struct ISpeechRecognizerStateChangedEventArgs;
struct ISpeechRecognizerStatics;
struct ISpeechRecognizerTimeouts;
struct ISpeechRecognizerUIOptions;
struct IVoiceCommandManager;
struct IVoiceCommandSet;
struct SpeechContinuousRecognitionCompletedEventArgs;
struct SpeechContinuousRecognitionResultGeneratedEventArgs;
struct SpeechContinuousRecognitionSession;
struct SpeechRecognitionCompilationResult;
struct SpeechRecognitionGrammarFileConstraint;
struct SpeechRecognitionHypothesis;
struct SpeechRecognitionHypothesisGeneratedEventArgs;
struct SpeechRecognitionListConstraint;
struct SpeechRecognitionQualityDegradingEventArgs;
struct SpeechRecognitionResult;
struct SpeechRecognitionSemanticInterpretation;
struct SpeechRecognitionTopicConstraint;
struct SpeechRecognitionVoiceCommandDefinitionConstraint;
struct SpeechRecognizer;
struct SpeechRecognizerStateChangedEventArgs;
struct SpeechRecognizerTimeouts;
struct SpeechRecognizerUIOptions;
struct VoiceCommandSet;

}

namespace Windows::Media::SpeechRecognition {

struct ISpeechContinuousRecognitionCompletedEventArgs;
struct ISpeechContinuousRecognitionResultGeneratedEventArgs;
struct ISpeechContinuousRecognitionSession;
struct ISpeechRecognitionCompilationResult;
struct ISpeechRecognitionConstraint;
struct ISpeechRecognitionGrammarFileConstraint;
struct ISpeechRecognitionGrammarFileConstraintFactory;
struct ISpeechRecognitionHypothesis;
struct ISpeechRecognitionHypothesisGeneratedEventArgs;
struct ISpeechRecognitionListConstraint;
struct ISpeechRecognitionListConstraintFactory;
struct ISpeechRecognitionQualityDegradingEventArgs;
struct ISpeechRecognitionResult;
struct ISpeechRecognitionResult2;
struct ISpeechRecognitionSemanticInterpretation;
struct ISpeechRecognitionTopicConstraint;
struct ISpeechRecognitionTopicConstraintFactory;
struct ISpeechRecognitionVoiceCommandDefinitionConstraint;
struct ISpeechRecognizer;
struct ISpeechRecognizer2;
struct ISpeechRecognizerFactory;
struct ISpeechRecognizerStateChangedEventArgs;
struct ISpeechRecognizerStatics;
struct ISpeechRecognizerTimeouts;
struct ISpeechRecognizerUIOptions;
struct IVoiceCommandManager;
struct IVoiceCommandSet;
struct SpeechContinuousRecognitionCompletedEventArgs;
struct SpeechContinuousRecognitionResultGeneratedEventArgs;
struct SpeechContinuousRecognitionSession;
struct SpeechRecognitionCompilationResult;
struct SpeechRecognitionGrammarFileConstraint;
struct SpeechRecognitionHypothesis;
struct SpeechRecognitionHypothesisGeneratedEventArgs;
struct SpeechRecognitionListConstraint;
struct SpeechRecognitionQualityDegradingEventArgs;
struct SpeechRecognitionResult;
struct SpeechRecognitionSemanticInterpretation;
struct SpeechRecognitionTopicConstraint;
struct SpeechRecognitionVoiceCommandDefinitionConstraint;
struct SpeechRecognizer;
struct SpeechRecognizerStateChangedEventArgs;
struct SpeechRecognizerTimeouts;
struct SpeechRecognizerUIOptions;
struct VoiceCommandManager;
struct VoiceCommandSet;

}

namespace Windows::Media::SpeechRecognition {

enum class SpeechContinuousRecognitionMode
{
    Default = 0,
    PauseOnRecognition = 1,
};

enum class SpeechRecognitionAudioProblem
{
    None = 0,
    TooNoisy = 1,
    NoSignal = 2,
    TooLoud = 3,
    TooQuiet = 4,
    TooFast = 5,
    TooSlow = 6,
};

enum class SpeechRecognitionConfidence
{
    High = 0,
    Medium = 1,
    Low = 2,
    Rejected = 3,
};

enum class SpeechRecognitionConstraintProbability
{
    Default = 0,
    Min = 1,
    Max = 2,
};

enum class SpeechRecognitionConstraintType
{
    Topic = 0,
    List = 1,
    Grammar = 2,
    VoiceCommandDefinition = 3,
};

enum class SpeechRecognitionResultStatus
{
    Success = 0,
    TopicLanguageNotSupported = 1,
    GrammarLanguageMismatch = 2,
    GrammarCompilationFailure = 3,
    AudioQualityFailure = 4,
    UserCanceled = 5,
    Unknown = 6,
    TimeoutExceeded = 7,
    PauseLimitExceeded = 8,
    NetworkFailure = 9,
    MicrophoneUnavailable = 10,
};

enum class SpeechRecognitionScenario
{
    WebSearch = 0,
    Dictation = 1,
    FormFilling = 2,
};

enum class SpeechRecognizerState
{
    Idle = 0,
    Capturing = 1,
    Processing = 2,
    SoundStarted = 3,
    SoundEnded = 4,
    SpeechDetected = 5,
    Paused = 6,
};

}

}
