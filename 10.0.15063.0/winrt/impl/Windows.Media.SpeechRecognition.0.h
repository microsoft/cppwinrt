// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Globalization {

struct Language;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Media::SpeechRecognition {

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

namespace winrt::impl {

template <> struct category<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionResult>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionResult2>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizer>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizer2>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizerFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::IVoiceCommandManager>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::IVoiceCommandSet>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionResult>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionVoiceCommandDefinitionConstraint>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognizer>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::VoiceCommandManager>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::VoiceCommandSet>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode>{ using type = enum_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem>{ using type = enum_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionConfidence>{ using type = enum_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability>{ using type = enum_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType>{ using type = enum_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionScenario>{ using type = enum_category; };
template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognizerState>{ using type = enum_category; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechContinuousRecognitionCompletedEventArgs" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechContinuousRecognitionResultGeneratedEventArgs" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechContinuousRecognitionSession" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionCompilationResult" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionConstraint" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionGrammarFileConstraint" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionGrammarFileConstraintFactory" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionHypothesis" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionHypothesisGeneratedEventArgs" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionListConstraint" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionListConstraintFactory" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionQualityDegradingEventArgs" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionResult>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionResult" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionResult2>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionResult2" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionSemanticInterpretation" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionTopicConstraint" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionTopicConstraintFactory" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionVoiceCommandDefinitionConstraint" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizer>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizer" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizer2>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizer2" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizerFactory>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizerFactory" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizerStateChangedEventArgs" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizerStatics" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizerTimeouts" }; };
template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizerUIOptions" }; };
template <> struct name<Windows::Media::SpeechRecognition::IVoiceCommandManager>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.IVoiceCommandManager" }; };
template <> struct name<Windows::Media::SpeechRecognition::IVoiceCommandSet>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.IVoiceCommandSet" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechContinuousRecognitionCompletedEventArgs" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechContinuousRecognitionResultGeneratedEventArgs" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechContinuousRecognitionSession" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionCompilationResult" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionGrammarFileConstraint" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionHypothesis" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionHypothesisGeneratedEventArgs" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionListConstraint" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionQualityDegradingEventArgs" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionResult>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionResult" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionSemanticInterpretation" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionTopicConstraint" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionVoiceCommandDefinitionConstraint>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionVoiceCommandDefinitionConstraint" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognizer>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognizer" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognizerStateChangedEventArgs" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognizerTimeouts" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognizerUIOptions" }; };
template <> struct name<Windows::Media::SpeechRecognition::VoiceCommandManager>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.VoiceCommandManager" }; };
template <> struct name<Windows::Media::SpeechRecognition::VoiceCommandSet>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.VoiceCommandSet" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechContinuousRecognitionMode" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionAudioProblem" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionConfidence>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionConfidence" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionConstraintProbability" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionConstraintType" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionResultStatus" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionScenario>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionScenario" }; };
template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognizerState>{ static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognizerState" }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs>{ static constexpr GUID value{ 0xE3D069BB,0xE30C,0x5E18,{ 0x42,0x4B,0x7F,0xBE,0x81,0xF8,0xFB,0xD0 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs>{ static constexpr GUID value{ 0x19091E1E,0x6E7E,0x5A46,{ 0x40,0xFB,0x76,0x59,0x4F,0x78,0x65,0x04 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>{ static constexpr GUID value{ 0x6A213C04,0x6614,0x49F8,{ 0x99,0xA2,0xB5,0xE9,0xB3,0xA0,0x85,0xC8 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult>{ static constexpr GUID value{ 0x407E6C5D,0x6AC7,0x4DA4,{ 0x9C,0xC1,0x2F,0xCE,0x32,0xCF,0x74,0x89 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>{ static constexpr GUID value{ 0x79AC1628,0x4D68,0x43C4,{ 0x89,0x11,0x40,0xDC,0x41,0x01,0xB5,0x5B } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint>{ static constexpr GUID value{ 0xB5031A8F,0x85CA,0x4FA4,{ 0xB1,0x1A,0x47,0x4F,0xC4,0x1B,0x38,0x35 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory>{ static constexpr GUID value{ 0x3DA770EB,0xC479,0x4C27,{ 0x9F,0x19,0x89,0x97,0x4E,0xF3,0x92,0xD1 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis>{ static constexpr GUID value{ 0x7A7B25B0,0x99C5,0x4F7D,{ 0xBF,0x84,0x10,0xAA,0x13,0x02,0xB6,0x34 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs>{ static constexpr GUID value{ 0x55161A7A,0x8023,0x5866,{ 0x41,0x1D,0x12,0x13,0xBB,0x27,0x14,0x76 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint>{ static constexpr GUID value{ 0x09C487E9,0xE4AD,0x4526,{ 0x81,0xF2,0x49,0x46,0xFB,0x48,0x1D,0x98 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory>{ static constexpr GUID value{ 0x40F3CDC7,0x562A,0x426A,{ 0x9F,0x3B,0x3B,0x4E,0x28,0x2B,0xE1,0xD5 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs>{ static constexpr GUID value{ 0x4FE24105,0x8C3A,0x4C7E,{ 0x8D,0x0A,0x5B,0xD4,0xF5,0xB1,0x4A,0xD8 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionResult>{ static constexpr GUID value{ 0x4E303157,0x034E,0x4652,{ 0x85,0x7E,0xD0,0x45,0x4C,0xC4,0xBE,0xEC } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionResult2>{ static constexpr GUID value{ 0xAF7ED1BA,0x451B,0x4166,{ 0xA0,0xC1,0x1F,0xFE,0x84,0x03,0x2D,0x03 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation>{ static constexpr GUID value{ 0xAAE1DA9B,0x7E32,0x4C1F,{ 0x89,0xFE,0x0C,0x65,0xF4,0x86,0xF5,0x2E } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint>{ static constexpr GUID value{ 0xBF6FDF19,0x825D,0x4E69,{ 0xA6,0x81,0x36,0xE4,0x8C,0xF1,0xC9,0x3E } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory>{ static constexpr GUID value{ 0x6E6863DF,0xEC05,0x47D7,{ 0xA5,0xDF,0x56,0xA3,0x43,0x1E,0x58,0xD2 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint>{ static constexpr GUID value{ 0xF2791C2B,0x1EF4,0x4AE7,{ 0x9D,0x77,0xB6,0xFF,0x10,0xB8,0xA3,0xC2 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognizer>{ static constexpr GUID value{ 0x0BC3C9CB,0xC26A,0x40F2,{ 0xAE,0xB5,0x80,0x96,0xB2,0xE4,0x80,0x73 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognizer2>{ static constexpr GUID value{ 0x63C9BAF1,0x91E3,0x4EA4,{ 0x86,0xA1,0x7C,0x38,0x67,0xD0,0x84,0xA6 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognizerFactory>{ static constexpr GUID value{ 0x60C488DD,0x7FB8,0x4033,{ 0xAC,0x70,0xD0,0x46,0xF6,0x48,0x18,0xE1 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs>{ static constexpr GUID value{ 0x563D4F09,0xBA03,0x4BAD,{ 0xAD,0x81,0xDD,0xC6,0xC4,0xDA,0xB0,0xC3 } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>{ static constexpr GUID value{ 0x87A35EAC,0xA7DC,0x4B0B,{ 0xBC,0xC9,0x24,0xF4,0x7C,0x0B,0x7E,0xBF } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts>{ static constexpr GUID value{ 0x2EF76FCA,0x6A3C,0x4DCA,{ 0xA1,0x53,0xDF,0x1B,0xC8,0x8A,0x79,0xAF } }; };
template <> struct guid<Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions>{ static constexpr GUID value{ 0x7888D641,0xB92B,0x44BA,{ 0xA2,0x5F,0xD1,0x86,0x46,0x30,0x64,0x1F } }; };
template <> struct guid<Windows::Media::SpeechRecognition::IVoiceCommandManager>{ static constexpr GUID value{ 0xAA3A8DD5,0xB6E7,0x4EE2,{ 0xBA,0xA9,0xDD,0x6B,0xAC,0xED,0x0A,0x2B } }; };
template <> struct guid<Windows::Media::SpeechRecognition::IVoiceCommandSet>{ static constexpr GUID value{ 0x0BEDDA75,0x46E6,0x4B11,{ 0xA0,0x88,0x5C,0x68,0x63,0x28,0x99,0xB5 } }; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs>{ using type = Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs>{ using type = Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession>{ using type = Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionResult>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognitionResult; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionVoiceCommandDefinitionConstraint>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognizer>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognizer; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts; };
template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions>{ using type = Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions; };
template <> struct default_interface<Windows::Media::SpeechRecognition::VoiceCommandSet>{ using type = Windows::Media::SpeechRecognition::IVoiceCommandSet; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionCompletedEventArgs
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus Status() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionResultGeneratedEventArgs
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResult Result() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionResultGeneratedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession
{
    Windows::Foundation::TimeSpan AutoStopSilenceTimeout() const;
    void AutoStopSilenceTimeout(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StartAsync(Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode const& mode) const;
    Windows::Foundation::IAsyncAction StopAsync() const;
    Windows::Foundation::IAsyncAction CancelAsync() const;
    Windows::Foundation::IAsyncAction PauseAsync() const;
    void Resume() const;
    event_token Completed(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs> const& value) const;
    using Completed_revoker = event_revoker<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>;
    Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs> const& value) const;
    void Completed(event_token const& value) const;
    event_token ResultGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs> const& value) const;
    using ResultGenerated_revoker = event_revoker<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>;
    ResultGenerated_revoker ResultGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs> const& value) const;
    void ResultGenerated(event_token const& value) const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionCompilationResult
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus Status() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionCompilationResult<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionConstraint
{
    bool IsEnabled() const;
    void IsEnabled(bool value) const;
    hstring Tag() const;
    void Tag(param::hstring const& value) const;
    Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType Type() const;
    Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability Probability() const;
    void Probability(Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability const& value) const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionConstraint<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionGrammarFileConstraint
{
    Windows::Storage::StorageFile GrammarFile() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionGrammarFileConstraint<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionGrammarFileConstraintFactory
{
    Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint Create(Windows::Storage::StorageFile const& file) const;
    Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint CreateWithTag(Windows::Storage::StorageFile const& file, param::hstring const& tag) const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionGrammarFileConstraintFactory<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionHypothesis
{
    hstring Text() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionHypothesis<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionHypothesisGeneratedEventArgs
{
    Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis Hypothesis() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionHypothesisGeneratedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionListConstraint
{
    Windows::Foundation::Collections::IVector<hstring> Commands() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionListConstraint<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionListConstraintFactory
{
    Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint Create(param::iterable<hstring> const& commands) const;
    Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint CreateWithTag(param::iterable<hstring> const& commands, param::hstring const& tag) const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionListConstraintFactory<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionQualityDegradingEventArgs
{
    Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem Problem() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionQualityDegradingEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus Status() const;
    hstring Text() const;
    Windows::Media::SpeechRecognition::SpeechRecognitionConfidence Confidence() const;
    Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation SemanticInterpretation() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechRecognition::SpeechRecognitionResult> GetAlternates(uint32_t maxAlternates) const;
    Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint Constraint() const;
    Windows::Foundation::Collections::IVectorView<hstring> RulePath() const;
    double RawConfidence() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionResult> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult2
{
    Windows::Foundation::DateTime PhraseStartTime() const;
    Windows::Foundation::TimeSpan PhraseDuration() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionResult2> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult2<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionSemanticInterpretation
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::Collections::IVectorView<hstring>> Properties() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionSemanticInterpretation<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraint
{
    Windows::Media::SpeechRecognition::SpeechRecognitionScenario Scenario() const;
    hstring TopicHint() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraint<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraintFactory
{
    Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint Create(Windows::Media::SpeechRecognition::SpeechRecognitionScenario const& scenario, param::hstring const& topicHint) const;
    Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint CreateWithTag(Windows::Media::SpeechRecognition::SpeechRecognitionScenario const& scenario, param::hstring const& topicHint, param::hstring const& tag) const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraintFactory<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionVoiceCommandDefinitionConstraint
{
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionVoiceCommandDefinitionConstraint<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizer
{
    Windows::Globalization::Language CurrentLanguage() const;
    Windows::Foundation::Collections::IVector<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint> Constraints() const;
    Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts Timeouts() const;
    Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions UIOptions() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult> CompileConstraintsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult> RecognizeAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult> RecognizeWithUIAsync() const;
    event_token RecognitionQualityDegrading(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs> const& speechRecognitionQualityDegradingHandler) const;
    using RecognitionQualityDegrading_revoker = event_revoker<Windows::Media::SpeechRecognition::ISpeechRecognizer>;
    RecognitionQualityDegrading_revoker RecognitionQualityDegrading(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs> const& speechRecognitionQualityDegradingHandler) const;
    void RecognitionQualityDegrading(event_token const& cookie) const;
    event_token StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs> const& stateChangedHandler) const;
    using StateChanged_revoker = event_revoker<Windows::Media::SpeechRecognition::ISpeechRecognizer>;
    StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs> const& stateChangedHandler) const;
    void StateChanged(event_token const& cookie) const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizer> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizer2
{
    Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession ContinuousRecognitionSession() const;
    Windows::Media::SpeechRecognition::SpeechRecognizerState State() const;
    Windows::Foundation::IAsyncAction StopRecognitionAsync() const;
    event_token HypothesisGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs> const& value) const;
    using HypothesisGenerated_revoker = event_revoker<Windows::Media::SpeechRecognition::ISpeechRecognizer2>;
    HypothesisGenerated_revoker HypothesisGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs> const& value) const;
    void HypothesisGenerated(event_token const& value) const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizer2> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizer2<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizerFactory
{
    Windows::Media::SpeechRecognition::SpeechRecognizer Create(Windows::Globalization::Language const& language) const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizerFactory> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizerFactory<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStateChangedEventArgs
{
    Windows::Media::SpeechRecognition::SpeechRecognizerState State() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStatics
{
    Windows::Globalization::Language SystemSpeechLanguage() const;
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> SupportedTopicLanguages() const;
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> SupportedGrammarLanguages() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStatics<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizerTimeouts
{
    Windows::Foundation::TimeSpan InitialSilenceTimeout() const;
    void InitialSilenceTimeout(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan EndSilenceTimeout() const;
    void EndSilenceTimeout(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan BabbleTimeout() const;
    void BabbleTimeout(Windows::Foundation::TimeSpan const& value) const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizerTimeouts<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizerUIOptions
{
    hstring ExampleText() const;
    void ExampleText(param::hstring const& value) const;
    hstring AudiblePrompt() const;
    void AudiblePrompt(param::hstring const& value) const;
    bool IsReadBackEnabled() const;
    void IsReadBackEnabled(bool value) const;
    bool ShowConfirmation() const;
    void ShowConfirmation(bool value) const;
};
template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizerUIOptions<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_IVoiceCommandManager
{
    Windows::Foundation::IAsyncAction InstallCommandSetsFromStorageFileAsync(Windows::Storage::StorageFile const& file) const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Media::SpeechRecognition::VoiceCommandSet> InstalledCommandSets() const;
};
template <> struct consume<Windows::Media::SpeechRecognition::IVoiceCommandManager> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_IVoiceCommandManager<D>; };

template <typename D>
struct consume_Windows_Media_SpeechRecognition_IVoiceCommandSet
{
    hstring Language() const;
    hstring Name() const;
    Windows::Foundation::IAsyncAction SetPhraseListAsync(param::hstring const& phraseListName, param::async_iterable<hstring> const& phraseList) const;
};
template <> struct consume<Windows::Media::SpeechRecognition::IVoiceCommandSet> { template <typename D> using type = consume_Windows_Media_SpeechRecognition_IVoiceCommandSet<D>; };

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus>* value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Result(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AutoStopSilenceTimeout(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_AutoStopSilenceTimeout(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall StartAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall StartWithModeAsync(abi_t<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode> mode, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall StopAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CancelAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall PauseAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Resume() = 0;
    virtual HRESULT __stdcall add_Completed(::IUnknown* value, abi_t<event_token>* returnValue) = 0;
    virtual HRESULT __stdcall remove_Completed(abi_t<event_token> value) = 0;
    virtual HRESULT __stdcall add_ResultGenerated(::IUnknown* value, abi_t<event_token>* returnValue) = 0;
    virtual HRESULT __stdcall remove_ResultGenerated(abi_t<event_token> value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus>* value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_Tag(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Tag(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType>* value) = 0;
    virtual HRESULT __stdcall get_Probability(abi_t<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability>* value) = 0;
    virtual HRESULT __stdcall put_Probability(abi_t<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability> value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_GrammarFile(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* file, ::IUnknown** constraint) = 0;
    virtual HRESULT __stdcall CreateWithTag(::IUnknown* file, HSTRING tag, ::IUnknown** constraint) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Hypothesis(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Commands(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* commands, ::IUnknown** constraint) = 0;
    virtual HRESULT __stdcall CreateWithTag(::IUnknown* commands, HSTRING tag, ::IUnknown** constraint) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Problem(abi_t<Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem>* value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus>* value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Confidence(abi_t<Windows::Media::SpeechRecognition::SpeechRecognitionConfidence>* value) = 0;
    virtual HRESULT __stdcall get_SemanticInterpretation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetAlternates(uint32_t maxAlternates, ::IUnknown** alternates) = 0;
    virtual HRESULT __stdcall get_Constraint(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RulePath(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RawConfidence(double* value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionResult2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PhraseStartTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_PhraseDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Scenario(abi_t<Windows::Media::SpeechRecognition::SpeechRecognitionScenario>* value) = 0;
    virtual HRESULT __stdcall get_TopicHint(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Media::SpeechRecognition::SpeechRecognitionScenario> scenario, HSTRING topicHint, ::IUnknown** constraint) = 0;
    virtual HRESULT __stdcall CreateWithTag(abi_t<Windows::Media::SpeechRecognition::SpeechRecognitionScenario> scenario, HSTRING topicHint, HSTRING tag, ::IUnknown** constraint) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentLanguage(::IUnknown** language) = 0;
    virtual HRESULT __stdcall get_Constraints(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Timeouts(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_UIOptions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CompileConstraintsAsync(::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall RecognizeAsync(::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall RecognizeWithUIAsync(::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall add_RecognitionQualityDegrading(::IUnknown* speechRecognitionQualityDegradingHandler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_RecognitionQualityDegrading(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_StateChanged(::IUnknown* stateChangedHandler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_StateChanged(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizer2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContinuousRecognitionSession(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_State(abi_t<Windows::Media::SpeechRecognition::SpeechRecognizerState>* value) = 0;
    virtual HRESULT __stdcall StopRecognitionAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_HypothesisGenerated(::IUnknown* value, abi_t<event_token>* returnValue) = 0;
    virtual HRESULT __stdcall remove_HypothesisGenerated(abi_t<event_token> value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* language, ::IUnknown** recognizer) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_State(abi_t<Windows::Media::SpeechRecognition::SpeechRecognizerState>* value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SystemSpeechLanguage(::IUnknown** language) = 0;
    virtual HRESULT __stdcall get_SupportedTopicLanguages(::IUnknown** languages) = 0;
    virtual HRESULT __stdcall get_SupportedGrammarLanguages(::IUnknown** languages) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InitialSilenceTimeout(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_InitialSilenceTimeout(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_EndSilenceTimeout(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_EndSilenceTimeout(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_BabbleTimeout(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_BabbleTimeout(abi_t<Windows::Foundation::TimeSpan> value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExampleText(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ExampleText(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AudiblePrompt(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AudiblePrompt(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsReadBackEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsReadBackEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_ShowConfirmation(bool* value) = 0;
    virtual HRESULT __stdcall put_ShowConfirmation(bool value) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::IVoiceCommandManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InstallCommandSetsFromStorageFileAsync(::IUnknown* file, ::IUnknown** installAction) = 0;
    virtual HRESULT __stdcall get_InstalledCommandSets(::IUnknown** voiceCommandSets) = 0;
};};

template <> struct abi<Windows::Media::SpeechRecognition::IVoiceCommandSet>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall SetPhraseListAsync(HSTRING phraseListName, ::IUnknown* phraseList, ::IUnknown** updateAction) = 0;
};};

}
