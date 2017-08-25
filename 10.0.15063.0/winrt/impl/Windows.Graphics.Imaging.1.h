// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct WINRT_EBO IBitmapBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapBuffer>,
    impl::require<IBitmapBuffer, Windows::Foundation::IClosable, Windows::Foundation::IMemoryBuffer>
{
    IBitmapBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapCodecInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapCodecInformation>
{
    IBitmapCodecInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapDecoder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapDecoder>
{
    IBitmapDecoder(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapDecoderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapDecoderStatics>
{
    IBitmapDecoderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapEncoder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapEncoder>
{
    IBitmapEncoder(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapEncoderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapEncoderStatics>
{
    IBitmapEncoderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapEncoderWithSoftwareBitmap :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapEncoderWithSoftwareBitmap>
{
    IBitmapEncoderWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapFrame>
{
    IBitmapFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapFrameWithSoftwareBitmap :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapFrameWithSoftwareBitmap>,
    impl::require<IBitmapFrameWithSoftwareBitmap, Windows::Graphics::Imaging::IBitmapFrame>
{
    IBitmapFrameWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapProperties>,
    impl::require<IBitmapProperties, Windows::Graphics::Imaging::IBitmapPropertiesView>
{
    IBitmapProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapPropertiesView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapPropertiesView>
{
    IBitmapPropertiesView(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapTransform>
{
    IBitmapTransform(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapTypedValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapTypedValue>
{
    IBitmapTypedValue(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapTypedValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapTypedValueFactory>
{
    IBitmapTypedValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPixelDataProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPixelDataProvider>
{
    IPixelDataProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISoftwareBitmap :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISoftwareBitmap>,
    impl::require<ISoftwareBitmap, Windows::Foundation::IClosable>
{
    ISoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISoftwareBitmapFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISoftwareBitmapFactory>
{
    ISoftwareBitmapFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISoftwareBitmapStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISoftwareBitmapStatics>
{
    ISoftwareBitmapStatics(std::nullptr_t = nullptr) noexcept {}
};

}
