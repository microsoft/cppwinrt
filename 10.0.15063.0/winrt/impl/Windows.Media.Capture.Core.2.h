// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Media.Capture.1.h"
#include "winrt/impl/Windows.Media.Capture.Core.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Capture::Core {

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
