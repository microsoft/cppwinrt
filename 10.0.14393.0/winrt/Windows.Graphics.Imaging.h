// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Graphics.DirectX.Direct3D11.3.h"
#include "internal/Windows.Graphics.Imaging.3.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"
#include "Windows.Storage.Streams.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapBuffer> : produce_base<D, Windows::Graphics::Imaging::IBitmapBuffer>
{
    HRESULT __stdcall abi_GetPlaneCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetPlaneCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPlaneDescription(int32_t index, abi_arg_out<Windows::Graphics::Imaging::BitmapPlaneDescription> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetPlaneDescription(index));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapCodecInformation> : produce_base<D, Windows::Graphics::Imaging::IBitmapCodecInformation>
{
    HRESULT __stdcall get_CodecId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CodecId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileExtensions(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FileExtensions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MimeTypes(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MimeTypes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapDecoder> : produce_base<D, Windows::Graphics::Imaging::IBitmapDecoder>
{
    HRESULT __stdcall get_BitmapContainerProperties(abi_arg_out<Windows::Graphics::Imaging::IBitmapPropertiesView> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapContainerProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecoderInformation(abi_arg_out<Windows::Graphics::Imaging::IBitmapCodecInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DecoderInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPreviewAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().GetPreviewAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFrameAsync(uint32_t frameIndex, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapFrame>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().GetFrameAsync(frameIndex));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapDecoderStatics> : produce_base<D, Windows::Graphics::Imaging::IBitmapDecoderStatics>
{
    HRESULT __stdcall get_BmpDecoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BmpDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JpegDecoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().JpegDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PngDecoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PngDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TiffDecoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TiffDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GifDecoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GifDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JpegXRDecoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().JpegXRDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IcoDecoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IcoDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDecoderInformationEnumerator(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation>> decoderInformationEnumerator) noexcept override
    {
        try
        {
            *decoderInformationEnumerator = detach(this->shim().GetDecoderInformationEnumerator());
            return S_OK;
        }
        catch (...)
        {
            *decoderInformationEnumerator = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().CreateAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithIdAsync(GUID decoderId, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().CreateAsync(decoderId, *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapEncoder> : produce_base<D, Windows::Graphics::Imaging::IBitmapEncoder>
{
    HRESULT __stdcall get_EncoderInformation(abi_arg_out<Windows::Graphics::Imaging::IBitmapCodecInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EncoderInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapProperties(abi_arg_out<Windows::Graphics::Imaging::IBitmapProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapContainerProperties(abi_arg_out<Windows::Graphics::Imaging::IBitmapProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapContainerProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsThumbnailGenerated(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsThumbnailGenerated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsThumbnailGenerated(bool value) noexcept override
    {
        try
        {
            this->shim().IsThumbnailGenerated(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GeneratedThumbnailWidth(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GeneratedThumbnailWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GeneratedThumbnailWidth(uint32_t value) noexcept override
    {
        try
        {
            this->shim().GeneratedThumbnailWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GeneratedThumbnailHeight(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GeneratedThumbnailHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GeneratedThumbnailHeight(uint32_t value) noexcept override
    {
        try
        {
            this->shim().GeneratedThumbnailHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapTransform(abi_arg_out<Windows::Graphics::Imaging::IBitmapTransform> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapTransform());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPixelData(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, uint32_t width, uint32_t height, double dpiX, double dpiY, uint32_t __pixelsSize, abi_arg_in<uint8_t> * pixels) noexcept override
    {
        try
        {
            this->shim().SetPixelData(pixelFormat, alphaMode, width, height, dpiX, dpiY, array_ref<const uint8_t>(pixels, pixels + __pixelsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GoToNextFrameAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().GoToNextFrameAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GoToNextFrameWithEncodingOptionsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>>> encodingOptions, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().GoToNextFrameAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> *>(&encodingOptions)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FlushAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().FlushAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapEncoderStatics> : produce_base<D, Windows::Graphics::Imaging::IBitmapEncoderStatics>
{
    HRESULT __stdcall get_BmpEncoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BmpEncoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JpegEncoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().JpegEncoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PngEncoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PngEncoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TiffEncoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TiffEncoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GifEncoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GifEncoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JpegXREncoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().JpegXREncoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetEncoderInformationEnumerator(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation>> encoderInformationEnumerator) noexcept override
    {
        try
        {
            *encoderInformationEnumerator = detach(this->shim().GetEncoderInformationEnumerator());
            return S_OK;
        }
        catch (...)
        {
            *encoderInformationEnumerator = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAsync(GUID encoderId, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().CreateAsync(encoderId, *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithEncodingOptionsAsync(GUID encoderId, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>>> encodingOptions, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().CreateAsync(encoderId, *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> *>(&encodingOptions)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateForTranscodingAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream, abi_arg_in<Windows::Graphics::Imaging::IBitmapDecoder> bitmapDecoder, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().CreateForTranscodingAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream), *reinterpret_cast<const Windows::Graphics::Imaging::BitmapDecoder *>(&bitmapDecoder)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateForInPlacePropertyEncodingAsync(abi_arg_in<Windows::Graphics::Imaging::IBitmapDecoder> bitmapDecoder, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().CreateForInPlacePropertyEncodingAsync(*reinterpret_cast<const Windows::Graphics::Imaging::BitmapDecoder *>(&bitmapDecoder)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap> : produce_base<D, Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap>
{
    HRESULT __stdcall abi_SetSoftwareBitmap(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> bitmap) noexcept override
    {
        try
        {
            this->shim().SetSoftwareBitmap(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&bitmap));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapFrame> : produce_base<D, Windows::Graphics::Imaging::IBitmapFrame>
{
    HRESULT __stdcall abi_GetThumbnailAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().GetThumbnailAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapProperties(abi_arg_out<Windows::Graphics::Imaging::IBitmapPropertiesView> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapPixelFormat(Windows::Graphics::Imaging::BitmapPixelFormat * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapPixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapAlphaMode(Windows::Graphics::Imaging::BitmapAlphaMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapAlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DpiX(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DpiX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DpiY(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DpiY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelWidth(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PixelWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelHeight(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PixelHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OrientedPixelWidth(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OrientedPixelWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OrientedPixelHeight(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OrientedPixelHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPixelDataAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().GetPixelDataAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPixelDataTransformedAsync(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, abi_arg_in<Windows::Graphics::Imaging::IBitmapTransform> transform, Windows::Graphics::Imaging::ExifOrientationMode exifOrientationMode, Windows::Graphics::Imaging::ColorManagementMode colorManagementMode, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().GetPixelDataAsync(pixelFormat, alphaMode, *reinterpret_cast<const Windows::Graphics::Imaging::BitmapTransform *>(&transform), exifOrientationMode, colorManagementMode));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap> : produce_base<D, Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>
{
    HRESULT __stdcall abi_GetSoftwareBitmapAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetSoftwareBitmapAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSoftwareBitmapConvertedAsync(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetSoftwareBitmapAsync(pixelFormat, alphaMode));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSoftwareBitmapTransformedAsync(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, abi_arg_in<Windows::Graphics::Imaging::IBitmapTransform> transform, Windows::Graphics::Imaging::ExifOrientationMode exifOrientationMode, Windows::Graphics::Imaging::ColorManagementMode colorManagementMode, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetSoftwareBitmapAsync(pixelFormat, alphaMode, *reinterpret_cast<const Windows::Graphics::Imaging::BitmapTransform *>(&transform), exifOrientationMode, colorManagementMode));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapProperties> : produce_base<D, Windows::Graphics::Imaging::IBitmapProperties>
{
    HRESULT __stdcall abi_SetPropertiesAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>>> propertiesToSet, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().SetPropertiesAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> *>(&propertiesToSet)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapPropertiesView> : produce_base<D, Windows::Graphics::Imaging::IBitmapPropertiesView>
{
    HRESULT __stdcall abi_GetPropertiesAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> propertiesToRetrieve, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapPropertySet>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().GetPropertiesAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&propertiesToRetrieve)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapTransform> : produce_base<D, Windows::Graphics::Imaging::IBitmapTransform>
{
    HRESULT __stdcall get_ScaledWidth(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScaledWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScaledWidth(uint32_t value) noexcept override
    {
        try
        {
            this->shim().ScaledWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaledHeight(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScaledHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScaledHeight(uint32_t value) noexcept override
    {
        try
        {
            this->shim().ScaledHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterpolationMode(Windows::Graphics::Imaging::BitmapInterpolationMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InterpolationMode(Windows::Graphics::Imaging::BitmapInterpolationMode value) noexcept override
    {
        try
        {
            this->shim().InterpolationMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Flip(Windows::Graphics::Imaging::BitmapFlip * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Flip());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Flip(Windows::Graphics::Imaging::BitmapFlip value) noexcept override
    {
        try
        {
            this->shim().Flip(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rotation(Windows::Graphics::Imaging::BitmapRotation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rotation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Rotation(Windows::Graphics::Imaging::BitmapRotation value) noexcept override
    {
        try
        {
            this->shim().Rotation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bounds(abi_arg_out<Windows::Graphics::Imaging::BitmapBounds> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Bounds(abi_arg_in<Windows::Graphics::Imaging::BitmapBounds> value) noexcept override
    {
        try
        {
            this->shim().Bounds(*reinterpret_cast<const Windows::Graphics::Imaging::BitmapBounds *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapTypedValue> : produce_base<D, Windows::Graphics::Imaging::IBitmapTypedValue>
{
    HRESULT __stdcall get_Value(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::Foundation::PropertyType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapTypedValueFactory> : produce_base<D, Windows::Graphics::Imaging::IBitmapTypedValueFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::IInspectable> value, Windows::Foundation::PropertyType type, abi_arg_out<Windows::Graphics::Imaging::IBitmapTypedValue> bitmapTypedValue) noexcept override
    {
        try
        {
            *bitmapTypedValue = detach(this->shim().Create(*reinterpret_cast<const Windows::IInspectable *>(&value), type));
            return S_OK;
        }
        catch (...)
        {
            *bitmapTypedValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IPixelDataProvider> : produce_base<D, Windows::Graphics::Imaging::IPixelDataProvider>
{
    HRESULT __stdcall abi_DetachPixelData(uint32_t * __pixelDataSize, abi_arg_out<uint8_t> * pixelData) noexcept override
    {
        try
        {
            std::tie(*__pixelDataSize, *pixelData) = detach(this->shim().DetachPixelData());
            return S_OK;
        }
        catch (...)
        {
            *__pixelDataSize = 0;
            *pixelData = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::ISoftwareBitmap> : produce_base<D, Windows::Graphics::Imaging::ISoftwareBitmap>
{
    HRESULT __stdcall get_BitmapPixelFormat(Windows::Graphics::Imaging::BitmapPixelFormat * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapPixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapAlphaMode(Windows::Graphics::Imaging::BitmapAlphaMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapAlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelWidth(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PixelWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelHeight(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PixelHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsReadOnly(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsReadOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DpiX(double value) noexcept override
    {
        try
        {
            this->shim().DpiX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DpiX(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DpiX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DpiY(double value) noexcept override
    {
        try
        {
            this->shim().DpiY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DpiY(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DpiY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LockBuffer(Windows::Graphics::Imaging::BitmapBufferAccessMode mode, abi_arg_out<Windows::Graphics::Imaging::IBitmapBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LockBuffer(mode));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyTo(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> bitmap) noexcept override
    {
        try
        {
            this->shim().CopyTo(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&bitmap));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyFromBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            this->shim().CopyFromBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyToBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            this->shim().CopyToBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetReadOnlyView(abi_arg_out<Windows::Graphics::Imaging::ISoftwareBitmap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetReadOnlyView());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::ISoftwareBitmapFactory> : produce_base<D, Windows::Graphics::Imaging::ISoftwareBitmapFactory>
{
    HRESULT __stdcall abi_Create(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, abi_arg_out<Windows::Graphics::Imaging::ISoftwareBitmap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Create(format, width, height));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithAlpha(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha, abi_arg_out<Windows::Graphics::Imaging::ISoftwareBitmap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithAlpha(format, width, height, alpha));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::ISoftwareBitmapStatics> : produce_base<D, Windows::Graphics::Imaging::ISoftwareBitmapStatics>
{
    HRESULT __stdcall abi_Copy(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> source, abi_arg_out<Windows::Graphics::Imaging::ISoftwareBitmap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Copy(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&source)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Convert(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> source, Windows::Graphics::Imaging::BitmapPixelFormat format, abi_arg_out<Windows::Graphics::Imaging::ISoftwareBitmap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Convert(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&source), format));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertWithAlpha(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> source, Windows::Graphics::Imaging::BitmapPixelFormat format, Windows::Graphics::Imaging::BitmapAlphaMode alpha, abi_arg_out<Windows::Graphics::Imaging::ISoftwareBitmap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Convert(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&source), format, alpha));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateCopyFromBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> source, Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, abi_arg_out<Windows::Graphics::Imaging::ISoftwareBitmap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateCopyFromBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&source), format, width, height));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateCopyWithAlphaFromBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> source, Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha, abi_arg_out<Windows::Graphics::Imaging::ISoftwareBitmap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateCopyFromBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&source), format, width, height, alpha));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateCopyFromSurfaceAsync(abi_arg_in<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> surface, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateCopyFromSurfaceAsync(*reinterpret_cast<const Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *>(&surface)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateCopyWithAlphaFromSurfaceAsync(abi_arg_in<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> surface, Windows::Graphics::Imaging::BitmapAlphaMode alpha, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateCopyFromSurfaceAsync(*reinterpret_cast<const Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *>(&surface), alpha));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Graphics::Imaging {

template <typename D> uint32_t impl_IBitmapTransform<D>::ScaledWidth() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBitmapTransform &>(static_cast<const D &>(*this))->get_ScaledWidth(&value));
    return value;
}

template <typename D> void impl_IBitmapTransform<D>::ScaledWidth(uint32_t value) const
{
    check_hresult(static_cast<const IBitmapTransform &>(static_cast<const D &>(*this))->put_ScaledWidth(value));
}

template <typename D> uint32_t impl_IBitmapTransform<D>::ScaledHeight() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBitmapTransform &>(static_cast<const D &>(*this))->get_ScaledHeight(&value));
    return value;
}

template <typename D> void impl_IBitmapTransform<D>::ScaledHeight(uint32_t value) const
{
    check_hresult(static_cast<const IBitmapTransform &>(static_cast<const D &>(*this))->put_ScaledHeight(value));
}

template <typename D> Windows::Graphics::Imaging::BitmapInterpolationMode impl_IBitmapTransform<D>::InterpolationMode() const
{
    Windows::Graphics::Imaging::BitmapInterpolationMode value {};
    check_hresult(static_cast<const IBitmapTransform &>(static_cast<const D &>(*this))->get_InterpolationMode(&value));
    return value;
}

template <typename D> void impl_IBitmapTransform<D>::InterpolationMode(Windows::Graphics::Imaging::BitmapInterpolationMode value) const
{
    check_hresult(static_cast<const IBitmapTransform &>(static_cast<const D &>(*this))->put_InterpolationMode(value));
}

template <typename D> Windows::Graphics::Imaging::BitmapFlip impl_IBitmapTransform<D>::Flip() const
{
    Windows::Graphics::Imaging::BitmapFlip value {};
    check_hresult(static_cast<const IBitmapTransform &>(static_cast<const D &>(*this))->get_Flip(&value));
    return value;
}

template <typename D> void impl_IBitmapTransform<D>::Flip(Windows::Graphics::Imaging::BitmapFlip value) const
{
    check_hresult(static_cast<const IBitmapTransform &>(static_cast<const D &>(*this))->put_Flip(value));
}

template <typename D> Windows::Graphics::Imaging::BitmapRotation impl_IBitmapTransform<D>::Rotation() const
{
    Windows::Graphics::Imaging::BitmapRotation value {};
    check_hresult(static_cast<const IBitmapTransform &>(static_cast<const D &>(*this))->get_Rotation(&value));
    return value;
}

template <typename D> void impl_IBitmapTransform<D>::Rotation(Windows::Graphics::Imaging::BitmapRotation value) const
{
    check_hresult(static_cast<const IBitmapTransform &>(static_cast<const D &>(*this))->put_Rotation(value));
}

template <typename D> Windows::Graphics::Imaging::BitmapBounds impl_IBitmapTransform<D>::Bounds() const
{
    Windows::Graphics::Imaging::BitmapBounds value {};
    check_hresult(static_cast<const IBitmapTransform &>(static_cast<const D &>(*this))->get_Bounds(put(value)));
    return value;
}

template <typename D> void impl_IBitmapTransform<D>::Bounds(const Windows::Graphics::Imaging::BitmapBounds & value) const
{
    check_hresult(static_cast<const IBitmapTransform &>(static_cast<const D &>(*this))->put_Bounds(get(value)));
}

template <typename D> Windows::IInspectable impl_IBitmapTypedValue<D>::Value() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IBitmapTypedValue &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> Windows::Foundation::PropertyType impl_IBitmapTypedValue<D>::Type() const
{
    Windows::Foundation::PropertyType value {};
    check_hresult(static_cast<const IBitmapTypedValue &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapTypedValue impl_IBitmapTypedValueFactory<D>::Create(const Windows::IInspectable & value, Windows::Foundation::PropertyType type) const
{
    Windows::Graphics::Imaging::BitmapTypedValue bitmapTypedValue { nullptr };
    check_hresult(static_cast<const IBitmapTypedValueFactory &>(static_cast<const D &>(*this))->abi_Create(get(value), type, put(bitmapTypedValue)));
    return bitmapTypedValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapPropertySet> impl_IBitmapPropertiesView<D>::GetPropertiesAsync(const Windows::Foundation::Collections::IIterable<hstring> & propertiesToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapPropertySet> asyncInfo;
    check_hresult(static_cast<const IBitmapPropertiesView &>(static_cast<const D &>(*this))->abi_GetPropertiesAsync(get(propertiesToRetrieve), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IBitmapProperties<D>::SetPropertiesAsync(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> & propertiesToSet) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IBitmapProperties &>(static_cast<const D &>(*this))->abi_SetPropertiesAsync(get(propertiesToSet), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> com_array<uint8_t> impl_IPixelDataProvider<D>::DetachPixelData() const
{
    com_array<uint8_t> pixelData {};
    check_hresult(static_cast<const IPixelDataProvider &>(static_cast<const D &>(*this))->abi_DetachPixelData(put_size(pixelData), put(pixelData)));
    return pixelData;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream> impl_IBitmapFrame<D>::GetThumbnailAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream> asyncInfo;
    check_hresult(static_cast<const IBitmapFrame &>(static_cast<const D &>(*this))->abi_GetThumbnailAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Graphics::Imaging::BitmapPropertiesView impl_IBitmapFrame<D>::BitmapProperties() const
{
    Windows::Graphics::Imaging::BitmapPropertiesView value { nullptr };
    check_hresult(static_cast<const IBitmapFrame &>(static_cast<const D &>(*this))->get_BitmapProperties(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapPixelFormat impl_IBitmapFrame<D>::BitmapPixelFormat() const
{
    Windows::Graphics::Imaging::BitmapPixelFormat value {};
    check_hresult(static_cast<const IBitmapFrame &>(static_cast<const D &>(*this))->get_BitmapPixelFormat(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapAlphaMode impl_IBitmapFrame<D>::BitmapAlphaMode() const
{
    Windows::Graphics::Imaging::BitmapAlphaMode value {};
    check_hresult(static_cast<const IBitmapFrame &>(static_cast<const D &>(*this))->get_BitmapAlphaMode(&value));
    return value;
}

template <typename D> double impl_IBitmapFrame<D>::DpiX() const
{
    double value {};
    check_hresult(static_cast<const IBitmapFrame &>(static_cast<const D &>(*this))->get_DpiX(&value));
    return value;
}

template <typename D> double impl_IBitmapFrame<D>::DpiY() const
{
    double value {};
    check_hresult(static_cast<const IBitmapFrame &>(static_cast<const D &>(*this))->get_DpiY(&value));
    return value;
}

template <typename D> uint32_t impl_IBitmapFrame<D>::PixelWidth() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBitmapFrame &>(static_cast<const D &>(*this))->get_PixelWidth(&value));
    return value;
}

template <typename D> uint32_t impl_IBitmapFrame<D>::PixelHeight() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBitmapFrame &>(static_cast<const D &>(*this))->get_PixelHeight(&value));
    return value;
}

template <typename D> uint32_t impl_IBitmapFrame<D>::OrientedPixelWidth() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBitmapFrame &>(static_cast<const D &>(*this))->get_OrientedPixelWidth(&value));
    return value;
}

template <typename D> uint32_t impl_IBitmapFrame<D>::OrientedPixelHeight() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBitmapFrame &>(static_cast<const D &>(*this))->get_OrientedPixelHeight(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider> impl_IBitmapFrame<D>::GetPixelDataAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider> asyncInfo;
    check_hresult(static_cast<const IBitmapFrame &>(static_cast<const D &>(*this))->abi_GetPixelDataAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider> impl_IBitmapFrame<D>::GetPixelDataAsync(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, const Windows::Graphics::Imaging::BitmapTransform & transform, Windows::Graphics::Imaging::ExifOrientationMode exifOrientationMode, Windows::Graphics::Imaging::ColorManagementMode colorManagementMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider> asyncInfo;
    check_hresult(static_cast<const IBitmapFrame &>(static_cast<const D &>(*this))->abi_GetPixelDataTransformedAsync(pixelFormat, alphaMode, get(transform), exifOrientationMode, colorManagementMode, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> impl_IBitmapFrameWithSoftwareBitmap<D>::GetSoftwareBitmapAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> value;
    check_hresult(static_cast<const IBitmapFrameWithSoftwareBitmap &>(static_cast<const D &>(*this))->abi_GetSoftwareBitmapAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> impl_IBitmapFrameWithSoftwareBitmap<D>::GetSoftwareBitmapAsync(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> value;
    check_hresult(static_cast<const IBitmapFrameWithSoftwareBitmap &>(static_cast<const D &>(*this))->abi_GetSoftwareBitmapConvertedAsync(pixelFormat, alphaMode, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> impl_IBitmapFrameWithSoftwareBitmap<D>::GetSoftwareBitmapAsync(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, const Windows::Graphics::Imaging::BitmapTransform & transform, Windows::Graphics::Imaging::ExifOrientationMode exifOrientationMode, Windows::Graphics::Imaging::ColorManagementMode colorManagementMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> value;
    check_hresult(static_cast<const IBitmapFrameWithSoftwareBitmap &>(static_cast<const D &>(*this))->abi_GetSoftwareBitmapTransformedAsync(pixelFormat, alphaMode, get(transform), exifOrientationMode, colorManagementMode, put(value)));
    return value;
}

template <typename D> GUID impl_IBitmapCodecInformation<D>::CodecId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapCodecInformation &>(static_cast<const D &>(*this))->get_CodecId(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IBitmapCodecInformation<D>::FileExtensions() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IBitmapCodecInformation &>(static_cast<const D &>(*this))->get_FileExtensions(put(value)));
    return value;
}

template <typename D> hstring impl_IBitmapCodecInformation<D>::FriendlyName() const
{
    hstring value;
    check_hresult(static_cast<const IBitmapCodecInformation &>(static_cast<const D &>(*this))->get_FriendlyName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IBitmapCodecInformation<D>::MimeTypes() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IBitmapCodecInformation &>(static_cast<const D &>(*this))->get_MimeTypes(put(value)));
    return value;
}

template <typename D> GUID impl_IBitmapDecoderStatics<D>::BmpDecoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapDecoderStatics &>(static_cast<const D &>(*this))->get_BmpDecoderId(&value));
    return value;
}

template <typename D> GUID impl_IBitmapDecoderStatics<D>::JpegDecoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapDecoderStatics &>(static_cast<const D &>(*this))->get_JpegDecoderId(&value));
    return value;
}

template <typename D> GUID impl_IBitmapDecoderStatics<D>::PngDecoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapDecoderStatics &>(static_cast<const D &>(*this))->get_PngDecoderId(&value));
    return value;
}

template <typename D> GUID impl_IBitmapDecoderStatics<D>::TiffDecoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapDecoderStatics &>(static_cast<const D &>(*this))->get_TiffDecoderId(&value));
    return value;
}

template <typename D> GUID impl_IBitmapDecoderStatics<D>::GifDecoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapDecoderStatics &>(static_cast<const D &>(*this))->get_GifDecoderId(&value));
    return value;
}

template <typename D> GUID impl_IBitmapDecoderStatics<D>::JpegXRDecoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapDecoderStatics &>(static_cast<const D &>(*this))->get_JpegXRDecoderId(&value));
    return value;
}

template <typename D> GUID impl_IBitmapDecoderStatics<D>::IcoDecoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapDecoderStatics &>(static_cast<const D &>(*this))->get_IcoDecoderId(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> impl_IBitmapDecoderStatics<D>::GetDecoderInformationEnumerator() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> decoderInformationEnumerator;
    check_hresult(static_cast<const IBitmapDecoderStatics &>(static_cast<const D &>(*this))->abi_GetDecoderInformationEnumerator(put(decoderInformationEnumerator)));
    return decoderInformationEnumerator;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> impl_IBitmapDecoderStatics<D>::CreateAsync(const Windows::Storage::Streams::IRandomAccessStream & stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> asyncInfo;
    check_hresult(static_cast<const IBitmapDecoderStatics &>(static_cast<const D &>(*this))->abi_CreateAsync(get(stream), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> impl_IBitmapDecoderStatics<D>::CreateAsync(GUID decoderId, const Windows::Storage::Streams::IRandomAccessStream & stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> asyncInfo;
    check_hresult(static_cast<const IBitmapDecoderStatics &>(static_cast<const D &>(*this))->abi_CreateWithIdAsync(decoderId, get(stream), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Graphics::Imaging::BitmapPropertiesView impl_IBitmapDecoder<D>::BitmapContainerProperties() const
{
    Windows::Graphics::Imaging::BitmapPropertiesView value { nullptr };
    check_hresult(static_cast<const IBitmapDecoder &>(static_cast<const D &>(*this))->get_BitmapContainerProperties(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapCodecInformation impl_IBitmapDecoder<D>::DecoderInformation() const
{
    Windows::Graphics::Imaging::BitmapCodecInformation value { nullptr };
    check_hresult(static_cast<const IBitmapDecoder &>(static_cast<const D &>(*this))->get_DecoderInformation(put(value)));
    return value;
}

template <typename D> uint32_t impl_IBitmapDecoder<D>::FrameCount() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBitmapDecoder &>(static_cast<const D &>(*this))->get_FrameCount(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream> impl_IBitmapDecoder<D>::GetPreviewAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream> asyncInfo;
    check_hresult(static_cast<const IBitmapDecoder &>(static_cast<const D &>(*this))->abi_GetPreviewAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapFrame> impl_IBitmapDecoder<D>::GetFrameAsync(uint32_t frameIndex) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapFrame> asyncInfo;
    check_hresult(static_cast<const IBitmapDecoder &>(static_cast<const D &>(*this))->abi_GetFrameAsync(frameIndex, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> GUID impl_IBitmapEncoderStatics<D>::BmpEncoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapEncoderStatics &>(static_cast<const D &>(*this))->get_BmpEncoderId(&value));
    return value;
}

template <typename D> GUID impl_IBitmapEncoderStatics<D>::JpegEncoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapEncoderStatics &>(static_cast<const D &>(*this))->get_JpegEncoderId(&value));
    return value;
}

template <typename D> GUID impl_IBitmapEncoderStatics<D>::PngEncoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapEncoderStatics &>(static_cast<const D &>(*this))->get_PngEncoderId(&value));
    return value;
}

template <typename D> GUID impl_IBitmapEncoderStatics<D>::TiffEncoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapEncoderStatics &>(static_cast<const D &>(*this))->get_TiffEncoderId(&value));
    return value;
}

template <typename D> GUID impl_IBitmapEncoderStatics<D>::GifEncoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapEncoderStatics &>(static_cast<const D &>(*this))->get_GifEncoderId(&value));
    return value;
}

template <typename D> GUID impl_IBitmapEncoderStatics<D>::JpegXREncoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IBitmapEncoderStatics &>(static_cast<const D &>(*this))->get_JpegXREncoderId(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> impl_IBitmapEncoderStatics<D>::GetEncoderInformationEnumerator() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> encoderInformationEnumerator;
    check_hresult(static_cast<const IBitmapEncoderStatics &>(static_cast<const D &>(*this))->abi_GetEncoderInformationEnumerator(put(encoderInformationEnumerator)));
    return encoderInformationEnumerator;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> impl_IBitmapEncoderStatics<D>::CreateAsync(GUID encoderId, const Windows::Storage::Streams::IRandomAccessStream & stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> asyncInfo;
    check_hresult(static_cast<const IBitmapEncoderStatics &>(static_cast<const D &>(*this))->abi_CreateAsync(encoderId, get(stream), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> impl_IBitmapEncoderStatics<D>::CreateAsync(GUID encoderId, const Windows::Storage::Streams::IRandomAccessStream & stream, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> & encodingOptions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> asyncInfo;
    check_hresult(static_cast<const IBitmapEncoderStatics &>(static_cast<const D &>(*this))->abi_CreateWithEncodingOptionsAsync(encoderId, get(stream), get(encodingOptions), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> impl_IBitmapEncoderStatics<D>::CreateForTranscodingAsync(const Windows::Storage::Streams::IRandomAccessStream & stream, const Windows::Graphics::Imaging::BitmapDecoder & bitmapDecoder) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> asyncInfo;
    check_hresult(static_cast<const IBitmapEncoderStatics &>(static_cast<const D &>(*this))->abi_CreateForTranscodingAsync(get(stream), get(bitmapDecoder), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> impl_IBitmapEncoderStatics<D>::CreateForInPlacePropertyEncodingAsync(const Windows::Graphics::Imaging::BitmapDecoder & bitmapDecoder) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> asyncInfo;
    check_hresult(static_cast<const IBitmapEncoderStatics &>(static_cast<const D &>(*this))->abi_CreateForInPlacePropertyEncodingAsync(get(bitmapDecoder), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Graphics::Imaging::BitmapCodecInformation impl_IBitmapEncoder<D>::EncoderInformation() const
{
    Windows::Graphics::Imaging::BitmapCodecInformation value { nullptr };
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->get_EncoderInformation(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapProperties impl_IBitmapEncoder<D>::BitmapProperties() const
{
    Windows::Graphics::Imaging::BitmapProperties value { nullptr };
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->get_BitmapProperties(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapProperties impl_IBitmapEncoder<D>::BitmapContainerProperties() const
{
    Windows::Graphics::Imaging::BitmapProperties value { nullptr };
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->get_BitmapContainerProperties(put(value)));
    return value;
}

template <typename D> bool impl_IBitmapEncoder<D>::IsThumbnailGenerated() const
{
    bool value {};
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->get_IsThumbnailGenerated(&value));
    return value;
}

template <typename D> void impl_IBitmapEncoder<D>::IsThumbnailGenerated(bool value) const
{
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->put_IsThumbnailGenerated(value));
}

template <typename D> uint32_t impl_IBitmapEncoder<D>::GeneratedThumbnailWidth() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->get_GeneratedThumbnailWidth(&value));
    return value;
}

template <typename D> void impl_IBitmapEncoder<D>::GeneratedThumbnailWidth(uint32_t value) const
{
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->put_GeneratedThumbnailWidth(value));
}

template <typename D> uint32_t impl_IBitmapEncoder<D>::GeneratedThumbnailHeight() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->get_GeneratedThumbnailHeight(&value));
    return value;
}

template <typename D> void impl_IBitmapEncoder<D>::GeneratedThumbnailHeight(uint32_t value) const
{
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->put_GeneratedThumbnailHeight(value));
}

template <typename D> Windows::Graphics::Imaging::BitmapTransform impl_IBitmapEncoder<D>::BitmapTransform() const
{
    Windows::Graphics::Imaging::BitmapTransform value { nullptr };
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->get_BitmapTransform(put(value)));
    return value;
}

template <typename D> void impl_IBitmapEncoder<D>::SetPixelData(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, uint32_t width, uint32_t height, double dpiX, double dpiY, array_ref<const uint8_t> pixels) const
{
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->abi_SetPixelData(pixelFormat, alphaMode, width, height, dpiX, dpiY, pixels.size(), get(pixels)));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IBitmapEncoder<D>::GoToNextFrameAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->abi_GoToNextFrameAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IBitmapEncoder<D>::GoToNextFrameAsync(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> & encodingOptions) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->abi_GoToNextFrameWithEncodingOptionsAsync(get(encodingOptions), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IBitmapEncoder<D>::FlushAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IBitmapEncoder &>(static_cast<const D &>(*this))->abi_FlushAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> void impl_IBitmapEncoderWithSoftwareBitmap<D>::SetSoftwareBitmap(const Windows::Graphics::Imaging::SoftwareBitmap & bitmap) const
{
    check_hresult(static_cast<const IBitmapEncoderWithSoftwareBitmap &>(static_cast<const D &>(*this))->abi_SetSoftwareBitmap(get(bitmap)));
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap impl_ISoftwareBitmapFactory<D>::Create(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value { nullptr };
    check_hresult(static_cast<const ISoftwareBitmapFactory &>(static_cast<const D &>(*this))->abi_Create(format, width, height, put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap impl_ISoftwareBitmapFactory<D>::CreateWithAlpha(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value { nullptr };
    check_hresult(static_cast<const ISoftwareBitmapFactory &>(static_cast<const D &>(*this))->abi_CreateWithAlpha(format, width, height, alpha, put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap impl_ISoftwareBitmapStatics<D>::Copy(const Windows::Graphics::Imaging::SoftwareBitmap & source) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value { nullptr };
    check_hresult(static_cast<const ISoftwareBitmapStatics &>(static_cast<const D &>(*this))->abi_Copy(get(source), put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap impl_ISoftwareBitmapStatics<D>::Convert(const Windows::Graphics::Imaging::SoftwareBitmap & source, Windows::Graphics::Imaging::BitmapPixelFormat format) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value { nullptr };
    check_hresult(static_cast<const ISoftwareBitmapStatics &>(static_cast<const D &>(*this))->abi_Convert(get(source), format, put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap impl_ISoftwareBitmapStatics<D>::Convert(const Windows::Graphics::Imaging::SoftwareBitmap & source, Windows::Graphics::Imaging::BitmapPixelFormat format, Windows::Graphics::Imaging::BitmapAlphaMode alpha) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value { nullptr };
    check_hresult(static_cast<const ISoftwareBitmapStatics &>(static_cast<const D &>(*this))->abi_ConvertWithAlpha(get(source), format, alpha, put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap impl_ISoftwareBitmapStatics<D>::CreateCopyFromBuffer(const Windows::Storage::Streams::IBuffer & source, Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value { nullptr };
    check_hresult(static_cast<const ISoftwareBitmapStatics &>(static_cast<const D &>(*this))->abi_CreateCopyFromBuffer(get(source), format, width, height, put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap impl_ISoftwareBitmapStatics<D>::CreateCopyFromBuffer(const Windows::Storage::Streams::IBuffer & source, Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value { nullptr };
    check_hresult(static_cast<const ISoftwareBitmapStatics &>(static_cast<const D &>(*this))->abi_CreateCopyWithAlphaFromBuffer(get(source), format, width, height, alpha, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> impl_ISoftwareBitmapStatics<D>::CreateCopyFromSurfaceAsync(const Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface & surface) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> value;
    check_hresult(static_cast<const ISoftwareBitmapStatics &>(static_cast<const D &>(*this))->abi_CreateCopyFromSurfaceAsync(get(surface), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> impl_ISoftwareBitmapStatics<D>::CreateCopyFromSurfaceAsync(const Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface & surface, Windows::Graphics::Imaging::BitmapAlphaMode alpha) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> value;
    check_hresult(static_cast<const ISoftwareBitmapStatics &>(static_cast<const D &>(*this))->abi_CreateCopyWithAlphaFromSurfaceAsync(get(surface), alpha, put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapPixelFormat impl_ISoftwareBitmap<D>::BitmapPixelFormat() const
{
    Windows::Graphics::Imaging::BitmapPixelFormat value {};
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->get_BitmapPixelFormat(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapAlphaMode impl_ISoftwareBitmap<D>::BitmapAlphaMode() const
{
    Windows::Graphics::Imaging::BitmapAlphaMode value {};
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->get_BitmapAlphaMode(&value));
    return value;
}

template <typename D> int32_t impl_ISoftwareBitmap<D>::PixelWidth() const
{
    int32_t value {};
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->get_PixelWidth(&value));
    return value;
}

template <typename D> int32_t impl_ISoftwareBitmap<D>::PixelHeight() const
{
    int32_t value {};
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->get_PixelHeight(&value));
    return value;
}

template <typename D> bool impl_ISoftwareBitmap<D>::IsReadOnly() const
{
    bool value {};
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->get_IsReadOnly(&value));
    return value;
}

template <typename D> void impl_ISoftwareBitmap<D>::DpiX(double value) const
{
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->put_DpiX(value));
}

template <typename D> double impl_ISoftwareBitmap<D>::DpiX() const
{
    double value {};
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->get_DpiX(&value));
    return value;
}

template <typename D> void impl_ISoftwareBitmap<D>::DpiY(double value) const
{
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->put_DpiY(value));
}

template <typename D> double impl_ISoftwareBitmap<D>::DpiY() const
{
    double value {};
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->get_DpiY(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapBuffer impl_ISoftwareBitmap<D>::LockBuffer(Windows::Graphics::Imaging::BitmapBufferAccessMode mode) const
{
    Windows::Graphics::Imaging::BitmapBuffer value { nullptr };
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->abi_LockBuffer(mode, put(value)));
    return value;
}

template <typename D> void impl_ISoftwareBitmap<D>::CopyTo(const Windows::Graphics::Imaging::SoftwareBitmap & bitmap) const
{
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->abi_CopyTo(get(bitmap)));
}

template <typename D> void impl_ISoftwareBitmap<D>::CopyFromBuffer(const Windows::Storage::Streams::IBuffer & buffer) const
{
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->abi_CopyFromBuffer(get(buffer)));
}

template <typename D> void impl_ISoftwareBitmap<D>::CopyToBuffer(const Windows::Storage::Streams::IBuffer & buffer) const
{
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->abi_CopyToBuffer(get(buffer)));
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap impl_ISoftwareBitmap<D>::GetReadOnlyView() const
{
    Windows::Graphics::Imaging::SoftwareBitmap value { nullptr };
    check_hresult(static_cast<const ISoftwareBitmap &>(static_cast<const D &>(*this))->abi_GetReadOnlyView(put(value)));
    return value;
}

template <typename D> int32_t impl_IBitmapBuffer<D>::GetPlaneCount() const
{
    int32_t value {};
    check_hresult(static_cast<const IBitmapBuffer &>(static_cast<const D &>(*this))->abi_GetPlaneCount(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapPlaneDescription impl_IBitmapBuffer<D>::GetPlaneDescription(int32_t index) const
{
    Windows::Graphics::Imaging::BitmapPlaneDescription value {};
    check_hresult(static_cast<const IBitmapBuffer &>(static_cast<const D &>(*this))->abi_GetPlaneDescription(index, put(value)));
    return value;
}

inline GUID BitmapDecoder::BmpDecoderId()
{
    return get_activation_factory<BitmapDecoder, IBitmapDecoderStatics>().BmpDecoderId();
}

inline GUID BitmapDecoder::JpegDecoderId()
{
    return get_activation_factory<BitmapDecoder, IBitmapDecoderStatics>().JpegDecoderId();
}

inline GUID BitmapDecoder::PngDecoderId()
{
    return get_activation_factory<BitmapDecoder, IBitmapDecoderStatics>().PngDecoderId();
}

inline GUID BitmapDecoder::TiffDecoderId()
{
    return get_activation_factory<BitmapDecoder, IBitmapDecoderStatics>().TiffDecoderId();
}

inline GUID BitmapDecoder::GifDecoderId()
{
    return get_activation_factory<BitmapDecoder, IBitmapDecoderStatics>().GifDecoderId();
}

inline GUID BitmapDecoder::JpegXRDecoderId()
{
    return get_activation_factory<BitmapDecoder, IBitmapDecoderStatics>().JpegXRDecoderId();
}

inline GUID BitmapDecoder::IcoDecoderId()
{
    return get_activation_factory<BitmapDecoder, IBitmapDecoderStatics>().IcoDecoderId();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> BitmapDecoder::GetDecoderInformationEnumerator()
{
    return get_activation_factory<BitmapDecoder, IBitmapDecoderStatics>().GetDecoderInformationEnumerator();
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> BitmapDecoder::CreateAsync(const Windows::Storage::Streams::IRandomAccessStream & stream)
{
    return get_activation_factory<BitmapDecoder, IBitmapDecoderStatics>().CreateAsync(stream);
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> BitmapDecoder::CreateAsync(GUID decoderId, const Windows::Storage::Streams::IRandomAccessStream & stream)
{
    return get_activation_factory<BitmapDecoder, IBitmapDecoderStatics>().CreateAsync(decoderId, stream);
}

inline GUID BitmapEncoder::BmpEncoderId()
{
    return get_activation_factory<BitmapEncoder, IBitmapEncoderStatics>().BmpEncoderId();
}

inline GUID BitmapEncoder::JpegEncoderId()
{
    return get_activation_factory<BitmapEncoder, IBitmapEncoderStatics>().JpegEncoderId();
}

inline GUID BitmapEncoder::PngEncoderId()
{
    return get_activation_factory<BitmapEncoder, IBitmapEncoderStatics>().PngEncoderId();
}

inline GUID BitmapEncoder::TiffEncoderId()
{
    return get_activation_factory<BitmapEncoder, IBitmapEncoderStatics>().TiffEncoderId();
}

inline GUID BitmapEncoder::GifEncoderId()
{
    return get_activation_factory<BitmapEncoder, IBitmapEncoderStatics>().GifEncoderId();
}

inline GUID BitmapEncoder::JpegXREncoderId()
{
    return get_activation_factory<BitmapEncoder, IBitmapEncoderStatics>().JpegXREncoderId();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> BitmapEncoder::GetEncoderInformationEnumerator()
{
    return get_activation_factory<BitmapEncoder, IBitmapEncoderStatics>().GetEncoderInformationEnumerator();
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> BitmapEncoder::CreateAsync(GUID encoderId, const Windows::Storage::Streams::IRandomAccessStream & stream)
{
    return get_activation_factory<BitmapEncoder, IBitmapEncoderStatics>().CreateAsync(encoderId, stream);
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> BitmapEncoder::CreateAsync(GUID encoderId, const Windows::Storage::Streams::IRandomAccessStream & stream, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> & encodingOptions)
{
    return get_activation_factory<BitmapEncoder, IBitmapEncoderStatics>().CreateAsync(encoderId, stream, encodingOptions);
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> BitmapEncoder::CreateForTranscodingAsync(const Windows::Storage::Streams::IRandomAccessStream & stream, const Windows::Graphics::Imaging::BitmapDecoder & bitmapDecoder)
{
    return get_activation_factory<BitmapEncoder, IBitmapEncoderStatics>().CreateForTranscodingAsync(stream, bitmapDecoder);
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> BitmapEncoder::CreateForInPlacePropertyEncodingAsync(const Windows::Graphics::Imaging::BitmapDecoder & bitmapDecoder)
{
    return get_activation_factory<BitmapEncoder, IBitmapEncoderStatics>().CreateForInPlacePropertyEncodingAsync(bitmapDecoder);
}

inline BitmapPropertySet::BitmapPropertySet() :
    BitmapPropertySet(activate_instance<BitmapPropertySet>())
{}

inline BitmapTransform::BitmapTransform() :
    BitmapTransform(activate_instance<BitmapTransform>())
{}

inline BitmapTypedValue::BitmapTypedValue(const Windows::IInspectable & value, Windows::Foundation::PropertyType type) :
    BitmapTypedValue(get_activation_factory<BitmapTypedValue, IBitmapTypedValueFactory>().Create(value, type))
{}

inline SoftwareBitmap::SoftwareBitmap(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height) :
    SoftwareBitmap(get_activation_factory<SoftwareBitmap, ISoftwareBitmapFactory>().Create(format, width, height))
{}

inline SoftwareBitmap::SoftwareBitmap(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha) :
    SoftwareBitmap(get_activation_factory<SoftwareBitmap, ISoftwareBitmapFactory>().CreateWithAlpha(format, width, height, alpha))
{}

inline Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap::Copy(const Windows::Graphics::Imaging::SoftwareBitmap & source)
{
    return get_activation_factory<SoftwareBitmap, ISoftwareBitmapStatics>().Copy(source);
}

inline Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap::Convert(const Windows::Graphics::Imaging::SoftwareBitmap & source, Windows::Graphics::Imaging::BitmapPixelFormat format)
{
    return get_activation_factory<SoftwareBitmap, ISoftwareBitmapStatics>().Convert(source, format);
}

inline Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap::Convert(const Windows::Graphics::Imaging::SoftwareBitmap & source, Windows::Graphics::Imaging::BitmapPixelFormat format, Windows::Graphics::Imaging::BitmapAlphaMode alpha)
{
    return get_activation_factory<SoftwareBitmap, ISoftwareBitmapStatics>().Convert(source, format, alpha);
}

inline Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap::CreateCopyFromBuffer(const Windows::Storage::Streams::IBuffer & source, Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height)
{
    return get_activation_factory<SoftwareBitmap, ISoftwareBitmapStatics>().CreateCopyFromBuffer(source, format, width, height);
}

inline Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap::CreateCopyFromBuffer(const Windows::Storage::Streams::IBuffer & source, Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha)
{
    return get_activation_factory<SoftwareBitmap, ISoftwareBitmapStatics>().CreateCopyFromBuffer(source, format, width, height, alpha);
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> SoftwareBitmap::CreateCopyFromSurfaceAsync(const Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface & surface)
{
    return get_activation_factory<SoftwareBitmap, ISoftwareBitmapStatics>().CreateCopyFromSurfaceAsync(surface);
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> SoftwareBitmap::CreateCopyFromSurfaceAsync(const Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface & surface, Windows::Graphics::Imaging::BitmapAlphaMode alpha)
{
    return get_activation_factory<SoftwareBitmap, ISoftwareBitmapStatics>().CreateCopyFromSurfaceAsync(surface, alpha);
}

}

}
