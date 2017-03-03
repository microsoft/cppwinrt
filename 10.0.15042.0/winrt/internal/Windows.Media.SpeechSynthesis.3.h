// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.SpeechSynthesis.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Media::SpeechSynthesis {

struct WINRT_EBO SpeechSynthesisStream :
    Windows::Media::SpeechSynthesis::ISpeechSynthesisStream,
    impl::require<SpeechSynthesisStream, Windows::Media::Core::ITimedMetadataTrackProvider>
{
    SpeechSynthesisStream(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechSynthesizer :
    Windows::Media::SpeechSynthesis::ISpeechSynthesizer,
    impl::require<SpeechSynthesizer, Windows::Foundation::IClosable, Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>
{
    SpeechSynthesizer(std::nullptr_t) noexcept {}
    SpeechSynthesizer();
    static Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation> AllVoices();
    static Windows::Media::SpeechSynthesis::VoiceInformation DefaultVoice();
};

struct WINRT_EBO SpeechSynthesizerOptions :
    Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions
{
    SpeechSynthesizerOptions(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VoiceInformation :
    Windows::Media::SpeechSynthesis::IVoiceInformation
{
    VoiceInformation(std::nullptr_t) noexcept {}
};

}

}
