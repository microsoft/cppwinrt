// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.FaceAnalysis.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Graphics::Imaging::BitmapBounds consume_Windows_Media_FaceAnalysis_IDetectedFace<D>::FaceBox() const
{
    Windows::Graphics::Imaging::BitmapBounds returnValue{};
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IDetectedFace)->get_FaceBox(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>> consume_Windows_Media_FaceAnalysis_IFaceDetector<D>::DetectFacesAsync(Windows::Graphics::Imaging::SoftwareBitmap const& image) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceDetector)->DetectFacesAsync(get_abi(image), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>> consume_Windows_Media_FaceAnalysis_IFaceDetector<D>::DetectFacesAsync(Windows::Graphics::Imaging::SoftwareBitmap const& image, Windows::Graphics::Imaging::BitmapBounds const& searchArea) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceDetector)->DetectFacesWithSearchAreaAsync(get_abi(image), get_abi(searchArea), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Graphics::Imaging::BitmapSize consume_Windows_Media_FaceAnalysis_IFaceDetector<D>::MinDetectableFaceSize() const
{
    Windows::Graphics::Imaging::BitmapSize returnValue{};
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceDetector)->get_MinDetectableFaceSize(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_Media_FaceAnalysis_IFaceDetector<D>::MinDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceDetector)->put_MinDetectableFaceSize(get_abi(value)));
}

template <typename D> Windows::Graphics::Imaging::BitmapSize consume_Windows_Media_FaceAnalysis_IFaceDetector<D>::MaxDetectableFaceSize() const
{
    Windows::Graphics::Imaging::BitmapSize returnValue{};
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceDetector)->get_MaxDetectableFaceSize(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_Media_FaceAnalysis_IFaceDetector<D>::MaxDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceDetector)->put_MaxDetectableFaceSize(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceDetector> consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics<D>::CreateAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceDetector> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceDetectorStatics)->CreateAsync(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics<D>::GetSupportedBitmapPixelFormats() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceDetectorStatics)->GetSupportedBitmapPixelFormats(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics<D>::IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceDetectorStatics)->IsBitmapPixelFormatSupported(get_abi(bitmapPixelFormat), &result));
    return result;
}

template <typename D> bool consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics<D>::IsSupported() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceDetectorStatics)->get_IsSupported(&returnValue));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>> consume_Windows_Media_FaceAnalysis_IFaceTracker<D>::ProcessNextFrameAsync(Windows::Media::VideoFrame const& videoFrame) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceTracker)->ProcessNextFrameAsync(get_abi(videoFrame), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Graphics::Imaging::BitmapSize consume_Windows_Media_FaceAnalysis_IFaceTracker<D>::MinDetectableFaceSize() const
{
    Windows::Graphics::Imaging::BitmapSize returnValue{};
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceTracker)->get_MinDetectableFaceSize(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_Media_FaceAnalysis_IFaceTracker<D>::MinDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceTracker)->put_MinDetectableFaceSize(get_abi(value)));
}

template <typename D> Windows::Graphics::Imaging::BitmapSize consume_Windows_Media_FaceAnalysis_IFaceTracker<D>::MaxDetectableFaceSize() const
{
    Windows::Graphics::Imaging::BitmapSize returnValue{};
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceTracker)->get_MaxDetectableFaceSize(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_Media_FaceAnalysis_IFaceTracker<D>::MaxDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceTracker)->put_MaxDetectableFaceSize(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceTracker> consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics<D>::CreateAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceTracker> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceTrackerStatics)->CreateAsync(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics<D>::GetSupportedBitmapPixelFormats() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceTrackerStatics)->GetSupportedBitmapPixelFormats(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics<D>::IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceTrackerStatics)->IsBitmapPixelFormatSupported(get_abi(bitmapPixelFormat), &result));
    return result;
}

template <typename D> bool consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics<D>::IsSupported() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::Media::FaceAnalysis::IFaceTrackerStatics)->get_IsSupported(&returnValue));
    return returnValue;
}

template <typename D>
struct produce<D, Windows::Media::FaceAnalysis::IDetectedFace> : produce_base<D, Windows::Media::FaceAnalysis::IDetectedFace>
{
    HRESULT __stdcall get_FaceBox(abi_t<Windows::Graphics::Imaging::BitmapBounds>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FaceBox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::FaceAnalysis::IFaceDetector> : produce_base<D, Windows::Media::FaceAnalysis::IFaceDetector>
{
    HRESULT __stdcall DetectFacesAsync(::IUnknown* image, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().DetectFacesAsync(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&image)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DetectFacesWithSearchAreaAsync(::IUnknown* image, abi_t<Windows::Graphics::Imaging::BitmapBounds> searchArea, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().DetectFacesAsync(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&image), *reinterpret_cast<Windows::Graphics::Imaging::BitmapBounds const*>(&searchArea)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().MinDetectableFaceSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinDetectableFaceSize(*reinterpret_cast<Windows::Graphics::Imaging::BitmapSize const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().MaxDetectableFaceSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxDetectableFaceSize(*reinterpret_cast<Windows::Graphics::Imaging::BitmapSize const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::FaceAnalysis::IFaceDetectorStatics> : produce_base<D, Windows::Media::FaceAnalysis::IFaceDetectorStatics>
{
    HRESULT __stdcall CreateAsync(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSupportedBitmapPixelFormats(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSupportedBitmapPixelFormats());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsBitmapPixelFormatSupported(abi_t<Windows::Graphics::Imaging::BitmapPixelFormat> bitmapPixelFormat, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsBitmapPixelFormatSupported(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&bitmapPixelFormat)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSupported(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::FaceAnalysis::IFaceTracker> : produce_base<D, Windows::Media::FaceAnalysis::IFaceTracker>
{
    HRESULT __stdcall ProcessNextFrameAsync(::IUnknown* videoFrame, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().ProcessNextFrameAsync(*reinterpret_cast<Windows::Media::VideoFrame const*>(&videoFrame)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().MinDetectableFaceSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinDetectableFaceSize(*reinterpret_cast<Windows::Graphics::Imaging::BitmapSize const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().MaxDetectableFaceSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxDetectableFaceSize(abi_t<Windows::Graphics::Imaging::BitmapSize> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxDetectableFaceSize(*reinterpret_cast<Windows::Graphics::Imaging::BitmapSize const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::FaceAnalysis::IFaceTrackerStatics> : produce_base<D, Windows::Media::FaceAnalysis::IFaceTrackerStatics>
{
    HRESULT __stdcall CreateAsync(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSupportedBitmapPixelFormats(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSupportedBitmapPixelFormats());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsBitmapPixelFormatSupported(abi_t<Windows::Graphics::Imaging::BitmapPixelFormat> bitmapPixelFormat, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsBitmapPixelFormatSupported(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&bitmapPixelFormat)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSupported(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::FaceAnalysis {

inline Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceDetector> FaceDetector::CreateAsync()
{
    return get_activation_factory<FaceDetector, Windows::Media::FaceAnalysis::IFaceDetectorStatics>().CreateAsync();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> FaceDetector::GetSupportedBitmapPixelFormats()
{
    return get_activation_factory<FaceDetector, Windows::Media::FaceAnalysis::IFaceDetectorStatics>().GetSupportedBitmapPixelFormats();
}

inline bool FaceDetector::IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat)
{
    return get_activation_factory<FaceDetector, Windows::Media::FaceAnalysis::IFaceDetectorStatics>().IsBitmapPixelFormatSupported(bitmapPixelFormat);
}

inline bool FaceDetector::IsSupported()
{
    return get_activation_factory<FaceDetector, Windows::Media::FaceAnalysis::IFaceDetectorStatics>().IsSupported();
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceTracker> FaceTracker::CreateAsync()
{
    return get_activation_factory<FaceTracker, Windows::Media::FaceAnalysis::IFaceTrackerStatics>().CreateAsync();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> FaceTracker::GetSupportedBitmapPixelFormats()
{
    return get_activation_factory<FaceTracker, Windows::Media::FaceAnalysis::IFaceTrackerStatics>().GetSupportedBitmapPixelFormats();
}

inline bool FaceTracker::IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat)
{
    return get_activation_factory<FaceTracker, Windows::Media::FaceAnalysis::IFaceTrackerStatics>().IsBitmapPixelFormatSupported(bitmapPixelFormat);
}

inline bool FaceTracker::IsSupported()
{
    return get_activation_factory<FaceTracker, Windows::Media::FaceAnalysis::IFaceTrackerStatics>().IsSupported();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::FaceAnalysis::IDetectedFace> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::FaceAnalysis::IDetectedFace> {};

template<> struct hash<winrt::Windows::Media::FaceAnalysis::IFaceDetector> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::FaceAnalysis::IFaceDetector> {};

template<> struct hash<winrt::Windows::Media::FaceAnalysis::IFaceDetectorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::FaceAnalysis::IFaceDetectorStatics> {};

template<> struct hash<winrt::Windows::Media::FaceAnalysis::IFaceTracker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::FaceAnalysis::IFaceTracker> {};

template<> struct hash<winrt::Windows::Media::FaceAnalysis::IFaceTrackerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::FaceAnalysis::IFaceTrackerStatics> {};

template<> struct hash<winrt::Windows::Media::FaceAnalysis::DetectedFace> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::FaceAnalysis::DetectedFace> {};

template<> struct hash<winrt::Windows::Media::FaceAnalysis::FaceDetector> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::FaceAnalysis::FaceDetector> {};

template<> struct hash<winrt::Windows::Media::FaceAnalysis::FaceTracker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::FaceAnalysis::FaceTracker> {};

}

WINRT_WARNING_POP
