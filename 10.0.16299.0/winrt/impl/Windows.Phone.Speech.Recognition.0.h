// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Phone::Speech::Recognition {

enum class SpeechRecognitionUIStatus : int32_t
{
    Succeeded = 0,
    Busy = 1,
    Cancelled = 2,
    Preempted = 3,
    PrivacyPolicyDeclined = 4,
};

}

namespace winrt::impl {

template <> struct category<Windows::Phone::Speech::Recognition::SpeechRecognitionUIStatus>{ using type = enum_category; };
template <> struct name<Windows::Phone::Speech::Recognition::SpeechRecognitionUIStatus>{ static constexpr auto & value{ L"Windows.Phone.Speech.Recognition.SpeechRecognitionUIStatus" }; };

}
