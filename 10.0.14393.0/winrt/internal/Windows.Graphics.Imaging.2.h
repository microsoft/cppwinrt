// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Graphics.Imaging.1.h"
#include "Windows.Foundation.2.h"
#include "Windows.Storage.Streams.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif

#ifndef WINRT_GENERIC_2c70ef8d_5d4c_5185_8db7_fed87728165d
#define WINRT_GENERIC_2c70ef8d_5d4c_5185_8db7_fed87728165d
template <> struct __declspec(uuid("2c70ef8d-5d4c-5185-8db7-fed87728165d")) __declspec(novtable) IMap<hstring, Windows::Graphics::Imaging::BitmapTypedValue> : impl_IMap<hstring, Windows::Graphics::Imaging::BitmapTypedValue> {};
#endif

#ifndef WINRT_GENERIC_93621bf0_dae9_5f00_94ac_795aa943dca6
#define WINRT_GENERIC_93621bf0_dae9_5f00_94ac_795aa943dca6
template <> struct __declspec(uuid("93621bf0-dae9-5f00-94ac-795aa943dca6")) __declspec(novtable) IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue> : impl_IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_464ac000_b1f1_5246_8268_912a2593d889
#define WINRT_GENERIC_464ac000_b1f1_5246_8268_912a2593d889
template <> struct __declspec(uuid("464ac000-b1f1-5246-8268-912a2593d889")) __declspec(novtable) IAsyncOperation<Windows::Graphics::Imaging::BitmapPropertySet> : impl_IAsyncOperation<Windows::Graphics::Imaging::BitmapPropertySet> {};
#endif

#ifndef WINRT_GENERIC_684165be_0011_56d6_bebf_430016d51b7a
#define WINRT_GENERIC_684165be_0011_56d6_bebf_430016d51b7a
template <> struct __declspec(uuid("684165be-0011-56d6-bebf-430016d51b7a")) __declspec(novtable) IAsyncOperation<Windows::Graphics::Imaging::ImageStream> : impl_IAsyncOperation<Windows::Graphics::Imaging::ImageStream> {};
#endif

#ifndef WINRT_GENERIC_8c2dfeb0_6c22_5863_88d8_85c1fbc75697
#define WINRT_GENERIC_8c2dfeb0_6c22_5863_88d8_85c1fbc75697
template <> struct __declspec(uuid("8c2dfeb0-6c22-5863-88d8-85c1fbc75697")) __declspec(novtable) IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider> : impl_IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider> {};
#endif

#ifndef WINRT_GENERIC_c4a10980_714b_5501_8da2_dbdacce70f73
#define WINRT_GENERIC_c4a10980_714b_5501_8da2_dbdacce70f73
template <> struct __declspec(uuid("c4a10980-714b-5501-8da2-dbdacce70f73")) __declspec(novtable) IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> : impl_IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_97dfde96_ff1d_5aa1_863a_90116a31b86b
#define WINRT_GENERIC_97dfde96_ff1d_5aa1_863a_90116a31b86b
template <> struct __declspec(uuid("97dfde96-ff1d-5aa1-863a-90116a31b86b")) __declspec(novtable) IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> : impl_IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_aa94d8e9_caef_53f6_823d_91b6e8340510
#define WINRT_GENERIC_aa94d8e9_caef_53f6_823d_91b6e8340510
template <> struct __declspec(uuid("aa94d8e9-caef-53f6-823d-91b6e8340510")) __declspec(novtable) IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> : impl_IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> {};
#endif

#ifndef WINRT_GENERIC_cb1483d1_1464_5bf9_9346_d537735dfbd6
#define WINRT_GENERIC_cb1483d1_1464_5bf9_9346_d537735dfbd6
template <> struct __declspec(uuid("cb1483d1-1464-5bf9-9346-d537735dfbd6")) __declspec(novtable) IAsyncOperation<Windows::Graphics::Imaging::BitmapFrame> : impl_IAsyncOperation<Windows::Graphics::Imaging::BitmapFrame> {};
#endif

#ifndef WINRT_GENERIC_151bd1c5_4675_5af5_a289_001edc66b86a
#define WINRT_GENERIC_151bd1c5_4675_5af5_a289_001edc66b86a
template <> struct __declspec(uuid("151bd1c5-4675-5af5-a289-001edc66b86a")) __declspec(novtable) IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> : impl_IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_9cda5a9a_8924_5b3b_8b19_894d8da99dde
#define WINRT_GENERIC_9cda5a9a_8924_5b3b_8b19_894d8da99dde
template <> struct __declspec(uuid("9cda5a9a-8924-5b3b-8b19-894d8da99dde")) __declspec(novtable) IMapView<hstring, Windows::Graphics::Imaging::BitmapTypedValue> : impl_IMapView<hstring, Windows::Graphics::Imaging::BitmapTypedValue> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_a8325bd7_a3be_5881_9fa7_04ceefb9dc2f
#define WINRT_GENERIC_a8325bd7_a3be_5881_9fa7_04ceefb9dc2f
template <> struct __declspec(uuid("a8325bd7-a3be-5881-9fa7-04ceefb9dc2f")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Graphics::Imaging::BitmapPropertySet> : impl_AsyncOperationCompletedHandler<Windows::Graphics::Imaging::BitmapPropertySet> {};
#endif

#ifndef WINRT_GENERIC_29bb8288_4462_516e_a675_8c9235c42994
#define WINRT_GENERIC_29bb8288_4462_516e_a675_8c9235c42994
template <> struct __declspec(uuid("29bb8288-4462-516e-a675-8c9235c42994")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Graphics::Imaging::ImageStream> : impl_AsyncOperationCompletedHandler<Windows::Graphics::Imaging::ImageStream> {};
#endif

#ifndef WINRT_GENERIC_37bdf4be_2f39_592c_a4f7_d16a09d2b2db
#define WINRT_GENERIC_37bdf4be_2f39_592c_a4f7_d16a09d2b2db
template <> struct __declspec(uuid("37bdf4be-2f39-592c-a4f7-d16a09d2b2db")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Graphics::Imaging::PixelDataProvider> : impl_AsyncOperationCompletedHandler<Windows::Graphics::Imaging::PixelDataProvider> {};
#endif

#ifndef WINRT_GENERIC_b699b653_33ed_5e2d_a75f_02bf90e32619
#define WINRT_GENERIC_b699b653_33ed_5e2d_a75f_02bf90e32619
template <> struct __declspec(uuid("b699b653-33ed-5e2d-a75f-02bf90e32619")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Graphics::Imaging::SoftwareBitmap> : impl_AsyncOperationCompletedHandler<Windows::Graphics::Imaging::SoftwareBitmap> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_4ff2b2db_9326_537f_b8dc_4c93d77fbb84
#define WINRT_GENERIC_4ff2b2db_9326_537f_b8dc_4c93d77fbb84
template <> struct __declspec(uuid("4ff2b2db-9326-537f-b8dc-4c93d77fbb84")) __declspec(novtable) IIterator<Windows::Graphics::Imaging::BitmapCodecInformation> : impl_IIterator<Windows::Graphics::Imaging::BitmapCodecInformation> {};
#endif

#ifndef WINRT_GENERIC_2b6bdb90_a4eb_5142_b582_3ccb1edc5789
#define WINRT_GENERIC_2b6bdb90_a4eb_5142_b582_3ccb1edc5789
template <> struct __declspec(uuid("2b6bdb90-a4eb-5142-b582-3ccb1edc5789")) __declspec(novtable) IIterable<Windows::Graphics::Imaging::BitmapCodecInformation> : impl_IIterable<Windows::Graphics::Imaging::BitmapCodecInformation> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_bb6514f2_3cfb_566f_82bc_60aabd302d53
#define WINRT_GENERIC_bb6514f2_3cfb_566f_82bc_60aabd302d53
template <> struct __declspec(uuid("bb6514f2-3cfb-566f-82bc-60aabd302d53")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Graphics::Imaging::BitmapDecoder> : impl_AsyncOperationCompletedHandler<Windows::Graphics::Imaging::BitmapDecoder> {};
#endif

#ifndef WINRT_GENERIC_2817455a_983f_5a06_9fe4_fb9637684320
#define WINRT_GENERIC_2817455a_983f_5a06_9fe4_fb9637684320
template <> struct __declspec(uuid("2817455a-983f-5a06-9fe4-fb9637684320")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Graphics::Imaging::BitmapFrame> : impl_AsyncOperationCompletedHandler<Windows::Graphics::Imaging::BitmapFrame> {};
#endif

#ifndef WINRT_GENERIC_5df1afc5_478d_55dd_b317_024274062a0d
#define WINRT_GENERIC_5df1afc5_478d_55dd_b317_024274062a0d
template <> struct __declspec(uuid("5df1afc5-478d-55dd-b317-024274062a0d")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Graphics::Imaging::BitmapEncoder> : impl_AsyncOperationCompletedHandler<Windows::Graphics::Imaging::BitmapEncoder> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_05f9430c_2f22_5638_aa89_8c9abcd54ff9
#define WINRT_GENERIC_05f9430c_2f22_5638_aa89_8c9abcd54ff9
template <> struct __declspec(uuid("05f9430c-2f22-5638-aa89-8c9abcd54ff9")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> {};
#endif

#ifndef WINRT_GENERIC_2ad3fb0c_0656_5302_b504_3153be845161
#define WINRT_GENERIC_2ad3fb0c_0656_5302_b504_3153be845161
template <> struct __declspec(uuid("2ad3fb0c-0656-5302-b504-3153be845161")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> {};
#endif


}

namespace Windows::Graphics::Imaging {

template <typename D>
struct WINRT_EBO impl_IBitmapBuffer
{
    int32_t GetPlaneCount() const;
    Windows::Graphics::Imaging::BitmapPlaneDescription GetPlaneDescription(int32_t index) const;
};

template <typename D>
struct WINRT_EBO impl_IBitmapCodecInformation
{
    GUID CodecId() const;
    Windows::Foundation::Collections::IVectorView<hstring> FileExtensions() const;
    hstring FriendlyName() const;
    Windows::Foundation::Collections::IVectorView<hstring> MimeTypes() const;
};

template <typename D>
struct WINRT_EBO impl_IBitmapDecoder
{
    Windows::Graphics::Imaging::BitmapPropertiesView BitmapContainerProperties() const;
    Windows::Graphics::Imaging::BitmapCodecInformation DecoderInformation() const;
    uint32_t FrameCount() const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream> GetPreviewAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapFrame> GetFrameAsync(uint32_t frameIndex) const;
};

template <typename D>
struct WINRT_EBO impl_IBitmapDecoderStatics
{
    GUID BmpDecoderId() const;
    GUID JpegDecoderId() const;
    GUID PngDecoderId() const;
    GUID TiffDecoderId() const;
    GUID GifDecoderId() const;
    GUID JpegXRDecoderId() const;
    GUID IcoDecoderId() const;
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> GetDecoderInformationEnumerator() const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> CreateAsync(const Windows::Storage::Streams::IRandomAccessStream & stream) const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> CreateAsync(GUID decoderId, const Windows::Storage::Streams::IRandomAccessStream & stream) const;
};

template <typename D>
struct WINRT_EBO impl_IBitmapEncoder
{
    Windows::Graphics::Imaging::BitmapCodecInformation EncoderInformation() const;
    Windows::Graphics::Imaging::BitmapProperties BitmapProperties() const;
    Windows::Graphics::Imaging::BitmapProperties BitmapContainerProperties() const;
    bool IsThumbnailGenerated() const;
    void IsThumbnailGenerated(bool value) const;
    uint32_t GeneratedThumbnailWidth() const;
    void GeneratedThumbnailWidth(uint32_t value) const;
    uint32_t GeneratedThumbnailHeight() const;
    void GeneratedThumbnailHeight(uint32_t value) const;
    Windows::Graphics::Imaging::BitmapTransform BitmapTransform() const;
    void SetPixelData(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, uint32_t width, uint32_t height, double dpiX, double dpiY, array_ref<const uint8_t> pixels) const;
    Windows::Foundation::IAsyncAction GoToNextFrameAsync() const;
    Windows::Foundation::IAsyncAction GoToNextFrameAsync(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> & encodingOptions) const;
    Windows::Foundation::IAsyncAction FlushAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IBitmapEncoderStatics
{
    GUID BmpEncoderId() const;
    GUID JpegEncoderId() const;
    GUID PngEncoderId() const;
    GUID TiffEncoderId() const;
    GUID GifEncoderId() const;
    GUID JpegXREncoderId() const;
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> GetEncoderInformationEnumerator() const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> CreateAsync(GUID encoderId, const Windows::Storage::Streams::IRandomAccessStream & stream) const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> CreateAsync(GUID encoderId, const Windows::Storage::Streams::IRandomAccessStream & stream, const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> & encodingOptions) const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> CreateForTranscodingAsync(const Windows::Storage::Streams::IRandomAccessStream & stream, const Windows::Graphics::Imaging::BitmapDecoder & bitmapDecoder) const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> CreateForInPlacePropertyEncodingAsync(const Windows::Graphics::Imaging::BitmapDecoder & bitmapDecoder) const;
};

template <typename D>
struct WINRT_EBO impl_IBitmapEncoderWithSoftwareBitmap
{
    void SetSoftwareBitmap(const Windows::Graphics::Imaging::SoftwareBitmap & bitmap) const;
};

template <typename D>
struct WINRT_EBO impl_IBitmapFrame
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream> GetThumbnailAsync() const;
    Windows::Graphics::Imaging::BitmapPropertiesView BitmapProperties() const;
    Windows::Graphics::Imaging::BitmapPixelFormat BitmapPixelFormat() const;
    Windows::Graphics::Imaging::BitmapAlphaMode BitmapAlphaMode() const;
    double DpiX() const;
    double DpiY() const;
    uint32_t PixelWidth() const;
    uint32_t PixelHeight() const;
    uint32_t OrientedPixelWidth() const;
    uint32_t OrientedPixelHeight() const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider> GetPixelDataAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider> GetPixelDataAsync(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, const Windows::Graphics::Imaging::BitmapTransform & transform, Windows::Graphics::Imaging::ExifOrientationMode exifOrientationMode, Windows::Graphics::Imaging::ColorManagementMode colorManagementMode) const;
};

template <typename D>
struct WINRT_EBO impl_IBitmapFrameWithSoftwareBitmap
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> GetSoftwareBitmapAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> GetSoftwareBitmapAsync(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> GetSoftwareBitmapAsync(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, const Windows::Graphics::Imaging::BitmapTransform & transform, Windows::Graphics::Imaging::ExifOrientationMode exifOrientationMode, Windows::Graphics::Imaging::ColorManagementMode colorManagementMode) const;
};

template <typename D>
struct WINRT_EBO impl_IBitmapProperties
{
    Windows::Foundation::IAsyncAction SetPropertiesAsync(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> & propertiesToSet) const;
};

template <typename D>
struct WINRT_EBO impl_IBitmapPropertiesView
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapPropertySet> GetPropertiesAsync(const Windows::Foundation::Collections::IIterable<hstring> & propertiesToRetrieve) const;
};

template <typename D>
struct WINRT_EBO impl_IBitmapTransform
{
    uint32_t ScaledWidth() const;
    void ScaledWidth(uint32_t value) const;
    uint32_t ScaledHeight() const;
    void ScaledHeight(uint32_t value) const;
    Windows::Graphics::Imaging::BitmapInterpolationMode InterpolationMode() const;
    void InterpolationMode(Windows::Graphics::Imaging::BitmapInterpolationMode value) const;
    Windows::Graphics::Imaging::BitmapFlip Flip() const;
    void Flip(Windows::Graphics::Imaging::BitmapFlip value) const;
    Windows::Graphics::Imaging::BitmapRotation Rotation() const;
    void Rotation(Windows::Graphics::Imaging::BitmapRotation value) const;
    Windows::Graphics::Imaging::BitmapBounds Bounds() const;
    void Bounds(const Windows::Graphics::Imaging::BitmapBounds & value) const;
};

template <typename D>
struct WINRT_EBO impl_IBitmapTypedValue
{
    Windows::IInspectable Value() const;
    Windows::Foundation::PropertyType Type() const;
};

template <typename D>
struct WINRT_EBO impl_IBitmapTypedValueFactory
{
    Windows::Graphics::Imaging::BitmapTypedValue Create(const Windows::IInspectable & value, Windows::Foundation::PropertyType type) const;
};

template <typename D>
struct WINRT_EBO impl_IPixelDataProvider
{
    com_array<uint8_t> DetachPixelData() const;
};

template <typename D>
struct WINRT_EBO impl_ISoftwareBitmap
{
    Windows::Graphics::Imaging::BitmapPixelFormat BitmapPixelFormat() const;
    Windows::Graphics::Imaging::BitmapAlphaMode BitmapAlphaMode() const;
    int32_t PixelWidth() const;
    int32_t PixelHeight() const;
    bool IsReadOnly() const;
    void DpiX(double value) const;
    double DpiX() const;
    void DpiY(double value) const;
    double DpiY() const;
    Windows::Graphics::Imaging::BitmapBuffer LockBuffer(Windows::Graphics::Imaging::BitmapBufferAccessMode mode) const;
    void CopyTo(const Windows::Graphics::Imaging::SoftwareBitmap & bitmap) const;
    void CopyFromBuffer(const Windows::Storage::Streams::IBuffer & buffer) const;
    void CopyToBuffer(const Windows::Storage::Streams::IBuffer & buffer) const;
    Windows::Graphics::Imaging::SoftwareBitmap GetReadOnlyView() const;
};

template <typename D>
struct WINRT_EBO impl_ISoftwareBitmapFactory
{
    Windows::Graphics::Imaging::SoftwareBitmap Create(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height) const;
    Windows::Graphics::Imaging::SoftwareBitmap CreateWithAlpha(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha) const;
};

template <typename D>
struct WINRT_EBO impl_ISoftwareBitmapStatics
{
    Windows::Graphics::Imaging::SoftwareBitmap Copy(const Windows::Graphics::Imaging::SoftwareBitmap & source) const;
    Windows::Graphics::Imaging::SoftwareBitmap Convert(const Windows::Graphics::Imaging::SoftwareBitmap & source, Windows::Graphics::Imaging::BitmapPixelFormat format) const;
    Windows::Graphics::Imaging::SoftwareBitmap Convert(const Windows::Graphics::Imaging::SoftwareBitmap & source, Windows::Graphics::Imaging::BitmapPixelFormat format, Windows::Graphics::Imaging::BitmapAlphaMode alpha) const;
    Windows::Graphics::Imaging::SoftwareBitmap CreateCopyFromBuffer(const Windows::Storage::Streams::IBuffer & source, Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height) const;
    Windows::Graphics::Imaging::SoftwareBitmap CreateCopyFromBuffer(const Windows::Storage::Streams::IBuffer & source, Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha) const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> CreateCopyFromSurfaceAsync(const Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface & surface) const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> CreateCopyFromSurfaceAsync(const Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface & surface, Windows::Graphics::Imaging::BitmapAlphaMode alpha) const;
};

struct IBitmapBuffer :
    Windows::IInspectable,
    impl::consume<IBitmapBuffer>,
    impl::require<IBitmapBuffer, Windows::Foundation::IClosable, Windows::Foundation::IMemoryBuffer>
{
    IBitmapBuffer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapBuffer>(m_ptr); }
};

struct IBitmapCodecInformation :
    Windows::IInspectable,
    impl::consume<IBitmapCodecInformation>
{
    IBitmapCodecInformation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapCodecInformation>(m_ptr); }
};

struct IBitmapDecoder :
    Windows::IInspectable,
    impl::consume<IBitmapDecoder>
{
    IBitmapDecoder(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapDecoder>(m_ptr); }
};

struct IBitmapDecoderStatics :
    Windows::IInspectable,
    impl::consume<IBitmapDecoderStatics>
{
    IBitmapDecoderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapDecoderStatics>(m_ptr); }
};

struct IBitmapEncoder :
    Windows::IInspectable,
    impl::consume<IBitmapEncoder>
{
    IBitmapEncoder(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapEncoder>(m_ptr); }
};

struct IBitmapEncoderStatics :
    Windows::IInspectable,
    impl::consume<IBitmapEncoderStatics>
{
    IBitmapEncoderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapEncoderStatics>(m_ptr); }
};

struct IBitmapEncoderWithSoftwareBitmap :
    Windows::IInspectable,
    impl::consume<IBitmapEncoderWithSoftwareBitmap>
{
    IBitmapEncoderWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapEncoderWithSoftwareBitmap>(m_ptr); }
};

struct IBitmapFrame :
    Windows::IInspectable,
    impl::consume<IBitmapFrame>
{
    IBitmapFrame(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapFrame>(m_ptr); }
};

struct IBitmapFrameWithSoftwareBitmap :
    Windows::IInspectable,
    impl::consume<IBitmapFrameWithSoftwareBitmap>,
    impl::require<IBitmapFrameWithSoftwareBitmap, Windows::Graphics::Imaging::IBitmapFrame>
{
    IBitmapFrameWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapFrameWithSoftwareBitmap>(m_ptr); }
};

struct IBitmapProperties :
    Windows::IInspectable,
    impl::consume<IBitmapProperties>,
    impl::require<IBitmapProperties, Windows::Graphics::Imaging::IBitmapPropertiesView>
{
    IBitmapProperties(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapProperties>(m_ptr); }
};

struct IBitmapPropertiesView :
    Windows::IInspectable,
    impl::consume<IBitmapPropertiesView>
{
    IBitmapPropertiesView(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapPropertiesView>(m_ptr); }
};

struct IBitmapTransform :
    Windows::IInspectable,
    impl::consume<IBitmapTransform>
{
    IBitmapTransform(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapTransform>(m_ptr); }
};

struct IBitmapTypedValue :
    Windows::IInspectable,
    impl::consume<IBitmapTypedValue>
{
    IBitmapTypedValue(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapTypedValue>(m_ptr); }
};

struct IBitmapTypedValueFactory :
    Windows::IInspectable,
    impl::consume<IBitmapTypedValueFactory>
{
    IBitmapTypedValueFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBitmapTypedValueFactory>(m_ptr); }
};

struct IPixelDataProvider :
    Windows::IInspectable,
    impl::consume<IPixelDataProvider>
{
    IPixelDataProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPixelDataProvider>(m_ptr); }
};

struct ISoftwareBitmap :
    Windows::IInspectable,
    impl::consume<ISoftwareBitmap>,
    impl::require<ISoftwareBitmap, Windows::Foundation::IClosable>
{
    ISoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISoftwareBitmap>(m_ptr); }
};

struct ISoftwareBitmapFactory :
    Windows::IInspectable,
    impl::consume<ISoftwareBitmapFactory>
{
    ISoftwareBitmapFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISoftwareBitmapFactory>(m_ptr); }
};

struct ISoftwareBitmapStatics :
    Windows::IInspectable,
    impl::consume<ISoftwareBitmapStatics>
{
    ISoftwareBitmapStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISoftwareBitmapStatics>(m_ptr); }
};

}

}
