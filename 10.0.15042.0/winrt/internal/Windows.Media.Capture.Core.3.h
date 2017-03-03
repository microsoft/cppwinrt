// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Capture.Core.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Media::Capture::Core {

struct WINRT_EBO VariablePhotoCapturedEventArgs :
    Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs
{
    VariablePhotoCapturedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VariablePhotoSequenceCapture :
    Windows::Media::Capture::Core::IVariablePhotoSequenceCapture,
    impl::require<VariablePhotoSequenceCapture, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>
{
    VariablePhotoSequenceCapture(std::nullptr_t) noexcept {}
};

}

}
