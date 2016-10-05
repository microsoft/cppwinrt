// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace Windows::Phone::Speech::Recognition {

enum class SpeechRecognitionUIStatus
{
    Succeeded = 0,
    Busy = 1,
    Cancelled = 2,
    Preempted = 3,
    PrivacyPolicyDeclined = 4,
};

}

}
