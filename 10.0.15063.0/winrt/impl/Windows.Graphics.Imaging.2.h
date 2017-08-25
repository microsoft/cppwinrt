// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct BitmapBounds
{
    uint32_t X;
    uint32_t Y;
    uint32_t Width;
    uint32_t Height;
};

struct BitmapPlaneDescription
{
    int32_t StartIndex;
    int32_t Width;
    int32_t Height;
    int32_t Stride;
};

struct BitmapSize
{
    uint32_t Width;
    uint32_t Height;
};

struct WINRT_EBO BitmapBuffer :
    Windows::Graphics::Imaging::IBitmapBuffer
{
    BitmapBuffer(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BitmapCodecInformation :
    Windows::Graphics::Imaging::IBitmapCodecInformation
{
    BitmapCodecInformation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BitmapDecoder :
    Windows::Graphics::Imaging::IBitmapDecoder,
    impl::require<BitmapDecoder, Windows::Graphics::Imaging::IBitmapFrame, Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>
{
    BitmapDecoder(std::nullptr_t) noexcept {}
    static GUID BmpDecoderId();
    static GUID JpegDecoderId();
    static GUID PngDecoderId();
    static GUID TiffDecoderId();
    static GUID GifDecoderId();
    static GUID JpegXRDecoderId();
    static GUID IcoDecoderId();
    static Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> GetDecoderInformationEnumerator();
    static Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> CreateAsync(Windows::Storage::Streams::IRandomAccessStream const& stream);
    static Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> CreateAsync(GUID const& decoderId, Windows::Storage::Streams::IRandomAccessStream const& stream);
};

struct WINRT_EBO BitmapEncoder :
    Windows::Graphics::Imaging::IBitmapEncoder,
    impl::require<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap>
{
    BitmapEncoder(std::nullptr_t) noexcept {}
    static GUID BmpEncoderId();
    static GUID JpegEncoderId();
    static GUID PngEncoderId();
    static GUID TiffEncoderId();
    static GUID GifEncoderId();
    static GUID JpegXREncoderId();
    static Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> GetEncoderInformationEnumerator();
    static Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> CreateAsync(GUID const& encoderId, Windows::Storage::Streams::IRandomAccessStream const& stream);
    static Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> CreateAsync(GUID const& encoderId, Windows::Storage::Streams::IRandomAccessStream const& stream, param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const& encodingOptions);
    static Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> CreateForTranscodingAsync(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder);
    static Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> CreateForInPlacePropertyEncodingAsync(Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder);
};

struct WINRT_EBO BitmapFrame :
    Windows::Graphics::Imaging::IBitmapFrame,
    impl::require<BitmapFrame, Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>
{
    BitmapFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BitmapProperties :
    Windows::Graphics::Imaging::IBitmapProperties
{
    BitmapProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BitmapPropertiesView :
    Windows::Graphics::Imaging::IBitmapPropertiesView
{
    BitmapPropertiesView(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BitmapPropertySet :
    Windows::Foundation::Collections::IMap<hstring, Windows::Graphics::Imaging::BitmapTypedValue>
{
    BitmapPropertySet(std::nullptr_t) noexcept {}
    BitmapPropertySet();
};

struct WINRT_EBO BitmapTransform :
    Windows::Graphics::Imaging::IBitmapTransform
{
    BitmapTransform(std::nullptr_t) noexcept {}
    BitmapTransform();
};

struct WINRT_EBO BitmapTypedValue :
    Windows::Graphics::Imaging::IBitmapTypedValue
{
    BitmapTypedValue(std::nullptr_t) noexcept {}
    BitmapTypedValue(Windows::Foundation::IInspectable const& value, Windows::Foundation::PropertyType const& type);
};

struct WINRT_EBO ImageStream :
    Windows::Storage::Streams::IRandomAccessStreamWithContentType
{
    ImageStream(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PixelDataProvider :
    Windows::Graphics::Imaging::IPixelDataProvider
{
    PixelDataProvider(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SoftwareBitmap :
    Windows::Graphics::Imaging::ISoftwareBitmap
{
    SoftwareBitmap(std::nullptr_t) noexcept {}
    SoftwareBitmap(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height);
    SoftwareBitmap(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
    static Windows::Graphics::Imaging::SoftwareBitmap Copy(Windows::Graphics::Imaging::SoftwareBitmap const& source);
    static Windows::Graphics::Imaging::SoftwareBitmap Convert(Windows::Graphics::Imaging::SoftwareBitmap const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format);
    static Windows::Graphics::Imaging::SoftwareBitmap Convert(Windows::Graphics::Imaging::SoftwareBitmap const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
    static Windows::Graphics::Imaging::SoftwareBitmap CreateCopyFromBuffer(Windows::Storage::Streams::IBuffer const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height);
    static Windows::Graphics::Imaging::SoftwareBitmap CreateCopyFromBuffer(Windows::Storage::Streams::IBuffer const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
    static Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> CreateCopyFromSurfaceAsync(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface);
    static Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> CreateCopyFromSurfaceAsync(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
};

}
