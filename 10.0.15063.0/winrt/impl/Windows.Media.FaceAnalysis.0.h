// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

enum class BitmapPixelFormat;
struct BitmapBounds;
struct BitmapSize;
struct SoftwareBitmap;

}

WINRT_EXPORT namespace winrt::Windows::Media {

struct VideoFrame;

}

WINRT_EXPORT namespace winrt::Windows::Media::FaceAnalysis {

struct IDetectedFace;
struct IFaceDetector;
struct IFaceDetectorStatics;
struct IFaceTracker;
struct IFaceTrackerStatics;
struct DetectedFace;
struct FaceDetector;
struct FaceTracker;

}

namespace winrt::impl {

template <> struct category<Windows::Media::FaceAnalysis::IDetectedFace>{ using type = interface_category; };
template <> struct category<Windows::Media::FaceAnalysis::IFaceDetector>{ using type = interface_category; };
template <> struct category<Windows::Media::FaceAnalysis::IFaceDetectorStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::FaceAnalysis::IFaceTracker>{ using type = interface_category; };
template <> struct category<Windows::Media::FaceAnalysis::IFaceTrackerStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::FaceAnalysis::DetectedFace>{ using type = class_category; };
template <> struct category<Windows::Media::FaceAnalysis::FaceDetector>{ using type = class_category; };
template <> struct category<Windows::Media::FaceAnalysis::FaceTracker>{ using type = class_category; };
template <> struct name<Windows::Media::FaceAnalysis::IDetectedFace>{ static constexpr auto & value{ L"Windows.Media.FaceAnalysis.IDetectedFace" }; };
template <> struct name<Windows::Media::FaceAnalysis::IFaceDetector>{ static constexpr auto & value{ L"Windows.Media.FaceAnalysis.IFaceDetector" }; };
template <> struct name<Windows::Media::FaceAnalysis::IFaceDetectorStatics>{ static constexpr auto & value{ L"Windows.Media.FaceAnalysis.IFaceDetectorStatics" }; };
template <> struct name<Windows::Media::FaceAnalysis::IFaceTracker>{ static constexpr auto & value{ L"Windows.Media.FaceAnalysis.IFaceTracker" }; };
template <> struct name<Windows::Media::FaceAnalysis::IFaceTrackerStatics>{ static constexpr auto & value{ L"Windows.Media.FaceAnalysis.IFaceTrackerStatics" }; };
template <> struct name<Windows::Media::FaceAnalysis::DetectedFace>{ static constexpr auto & value{ L"Windows.Media.FaceAnalysis.DetectedFace" }; };
template <> struct name<Windows::Media::FaceAnalysis::FaceDetector>{ static constexpr auto & value{ L"Windows.Media.FaceAnalysis.FaceDetector" }; };
template <> struct name<Windows::Media::FaceAnalysis::FaceTracker>{ static constexpr auto & value{ L"Windows.Media.FaceAnalysis.FaceTracker" }; };
template <> struct guid<Windows::Media::FaceAnalysis::IDetectedFace>{ static constexpr GUID value{ 0x8200D454,0x66BC,0x34DF,{ 0x94,0x10,0xE8,0x94,0x00,0x19,0x54,0x14 } }; };
template <> struct guid<Windows::Media::FaceAnalysis::IFaceDetector>{ static constexpr GUID value{ 0x16B672DC,0xFE6F,0x3117,{ 0x8D,0x95,0xC3,0xF0,0x4D,0x51,0x63,0x0C } }; };
template <> struct guid<Windows::Media::FaceAnalysis::IFaceDetectorStatics>{ static constexpr GUID value{ 0xBC042D67,0x9047,0x33F6,{ 0x88,0x1B,0x67,0x46,0xC1,0xB2,0x18,0xB8 } }; };
template <> struct guid<Windows::Media::FaceAnalysis::IFaceTracker>{ static constexpr GUID value{ 0x6BA67D8C,0xA841,0x4420,{ 0x93,0xE6,0x24,0x20,0xA1,0x88,0x4F,0xCF } }; };
template <> struct guid<Windows::Media::FaceAnalysis::IFaceTrackerStatics>{ static constexpr GUID value{ 0xE9629198,0x1801,0x3FA5,{ 0x93,0x2E,0x31,0xD7,0x67,0xAF,0x6C,0x4D } }; };
template <> struct default_interface<Windows::Media::FaceAnalysis::DetectedFace>{ using type = Windows::Media::FaceAnalysis::IDetectedFace; };
template <> struct default_interface<Windows::Media::FaceAnalysis::FaceDetector>{ using type = Windows::Media::FaceAnalysis::IFaceDetector; };
template <> struct default_interface<Windows::Media::FaceAnalysis::FaceTracker>{ using type = Windows::Media::FaceAnalysis::IFaceTracker; };

template <typename D>
struct consume_Windows_Media_FaceAnalysis_IDetectedFace
{
    Windows::Graphics::Imaging::BitmapBounds FaceBox() const;
};
template <> struct consume<Windows::Media::FaceAnalysis::IDetectedFace> { template <typename D> using type = consume_Windows_Media_FaceAnalysis_IDetectedFace<D>; };

template <typename D>
struct consume_Windows_Media_FaceAnalysis_IFaceDetector
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>> DetectFacesAsync(Windows::Graphics::Imaging::SoftwareBitmap const& image) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>> DetectFacesAsync(Windows::Graphics::Imaging::SoftwareBitmap const& image, Windows::Graphics::Imaging::BitmapBounds const& searchArea) const;
    Windows::Graphics::Imaging::BitmapSize MinDetectableFaceSize() const;
    void MinDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const;
    Windows::Graphics::Imaging::BitmapSize MaxDetectableFaceSize() const;
    void MaxDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const;
};
template <> struct consume<Windows::Media::FaceAnalysis::IFaceDetector> { template <typename D> using type = consume_Windows_Media_FaceAnalysis_IFaceDetector<D>; };

template <typename D>
struct consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceDetector> CreateAsync() const;
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> GetSupportedBitmapPixelFormats() const;
    bool IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat) const;
    bool IsSupported() const;
};
template <> struct consume<Windows::Media::FaceAnalysis::IFaceDetectorStatics> { template <typename D> using type = consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics<D>; };

template <typename D>
struct consume_Windows_Media_FaceAnalysis_IFaceTracker
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>> ProcessNextFrameAsync(Windows::Media::VideoFrame const& videoFrame) const;
    Windows::Graphics::Imaging::BitmapSize MinDetectableFaceSize() const;
    void MinDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const;
    Windows::Graphics::Imaging::BitmapSize MaxDetectableFaceSize() const;
    void MaxDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const;
};
template <> struct consume<Windows::Media::FaceAnalysis::IFaceTracker> { template <typename D> using type = consume_Windows_Media_FaceAnalysis_IFaceTracker<D>; };

template <typename D>
struct consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceTracker> CreateAsync() const;
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> GetSupportedBitmapPixelFormats() const;
    bool IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat) const;
    bool IsSupported() const;
};
template <> struct consume<Windows::Media::FaceAnalysis::IFaceTrackerStatics> { template <typename D> using type = consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics<D>; };

template <> struct abi<Windows::Media::FaceAnalysis::IDetectedFace>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FaceBox(abi_t<Windows::Graphics::Imaging::BitmapBounds>* returnValue) = 0;
};};

template <> struct abi<Windows::Media::FaceAnalysis::IFaceDetector>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall DetectFacesAsync(::IUnknown* image, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall DetectFacesWithSearchAreaAsync(::IUnknown* image, abi_t<Windows::Graphics::Imaging::BitmapBounds> searchArea, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall get_MinDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize>* returnValue) = 0;
    virtual HRESULT __stdcall put_MinDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize> value) = 0;
    virtual HRESULT __stdcall get_MaxDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize>* returnValue) = 0;
    virtual HRESULT __stdcall put_MaxDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize> value) = 0;
};};

template <> struct abi<Windows::Media::FaceAnalysis::IFaceDetectorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAsync(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetSupportedBitmapPixelFormats(::IUnknown** result) = 0;
    virtual HRESULT __stdcall IsBitmapPixelFormatSupported(abi_t<Windows::Graphics::Imaging::BitmapPixelFormat> bitmapPixelFormat, bool* result) = 0;
    virtual HRESULT __stdcall get_IsSupported(bool* returnValue) = 0;
};};

template <> struct abi<Windows::Media::FaceAnalysis::IFaceTracker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ProcessNextFrameAsync(::IUnknown* videoFrame, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall get_MinDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize>* returnValue) = 0;
    virtual HRESULT __stdcall put_MinDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize> value) = 0;
    virtual HRESULT __stdcall get_MaxDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize>* returnValue) = 0;
    virtual HRESULT __stdcall put_MaxDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize> value) = 0;
};};

template <> struct abi<Windows::Media::FaceAnalysis::IFaceTrackerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAsync(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetSupportedBitmapPixelFormats(::IUnknown** result) = 0;
    virtual HRESULT __stdcall IsBitmapPixelFormatSupported(abi_t<Windows::Graphics::Imaging::BitmapPixelFormat> bitmapPixelFormat, bool* result) = 0;
    virtual HRESULT __stdcall get_IsSupported(bool* returnValue) = 0;
};};

}
