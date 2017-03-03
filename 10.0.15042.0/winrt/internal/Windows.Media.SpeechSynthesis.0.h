// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::SpeechSynthesis {

struct IInstalledVoicesStatic;
struct ISpeechSynthesisStream;
struct ISpeechSynthesizer;
struct ISpeechSynthesizer2;
struct ISpeechSynthesizerOptions;
struct IVoiceInformation;
struct SpeechSynthesisStream;
struct SpeechSynthesizer;
struct SpeechSynthesizerOptions;
struct VoiceInformation;

}

namespace Windows::Media::SpeechSynthesis {

struct IInstalledVoicesStatic;
struct ISpeechSynthesisStream;
struct ISpeechSynthesizer;
struct ISpeechSynthesizer2;
struct ISpeechSynthesizerOptions;
struct IVoiceInformation;
struct SpeechSynthesisStream;
struct SpeechSynthesizer;
struct SpeechSynthesizerOptions;
struct VoiceInformation;

}

namespace Windows::Media::SpeechSynthesis {

template <typename T> struct impl_IInstalledVoicesStatic;
template <typename T> struct impl_ISpeechSynthesisStream;
template <typename T> struct impl_ISpeechSynthesizer;
template <typename T> struct impl_ISpeechSynthesizer2;
template <typename T> struct impl_ISpeechSynthesizerOptions;
template <typename T> struct impl_IVoiceInformation;

}

namespace Windows::Media::SpeechSynthesis {

enum class VoiceGender
{
    Male = 0,
    Female = 1,
};

}

}
