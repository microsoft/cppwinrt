// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.FaceAnalysis.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::FaceAnalysis {

struct WINRT_EBO IDetectedFace :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDetectedFace>
{
    IDetectedFace(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFaceDetector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceDetector>
{
    IFaceDetector(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFaceDetectorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceDetectorStatics>
{
    IFaceDetectorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFaceTracker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceTracker>
{
    IFaceTracker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFaceTrackerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceTrackerStatics>
{
    IFaceTrackerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
