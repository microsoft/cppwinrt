// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Media.1.h"
#include "winrt/impl/Windows.Media.FaceAnalysis.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::FaceAnalysis {

struct WINRT_EBO DetectedFace :
    Windows::Media::FaceAnalysis::IDetectedFace
{
    DetectedFace(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FaceDetector :
    Windows::Media::FaceAnalysis::IFaceDetector
{
    FaceDetector(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceDetector> CreateAsync();
    static Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> GetSupportedBitmapPixelFormats();
    static bool IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat);
    static bool IsSupported();
};

struct WINRT_EBO FaceTracker :
    Windows::Media::FaceAnalysis::IFaceTracker
{
    FaceTracker(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceTracker> CreateAsync();
    static Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> GetSupportedBitmapPixelFormats();
    static bool IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat);
    static bool IsSupported();
};

}
