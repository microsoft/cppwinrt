// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Media.Capture.0.h"
#include "winrt/impl/Windows.Media.Capture.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Capture::Core {

struct WINRT_EBO IVariablePhotoCapturedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVariablePhotoCapturedEventArgs>
{
    IVariablePhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVariablePhotoSequenceCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVariablePhotoSequenceCapture>
{
    IVariablePhotoSequenceCapture(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVariablePhotoSequenceCapture2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVariablePhotoSequenceCapture2>
{
    IVariablePhotoSequenceCapture2(std::nullptr_t = nullptr) noexcept {}
};

}
