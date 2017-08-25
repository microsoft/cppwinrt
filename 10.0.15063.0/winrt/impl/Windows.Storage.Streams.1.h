// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct WINRT_EBO IBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBuffer>
{
    IBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBufferFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBufferFactory>
{
    IBufferFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBufferStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBufferStatics>
{
    IBufferStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContentTypeProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentTypeProvider>
{
    IContentTypeProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataReader>
{
    IDataReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataReaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataReaderFactory>
{
    IDataReaderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataReaderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataReaderStatics>
{
    IDataReaderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataWriter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataWriter>
{
    IDataWriter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataWriterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataWriterFactory>
{
    IDataWriterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInputStream :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputStream>,
    impl::require<IInputStream, Windows::Foundation::IClosable>
{
    IInputStream(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInputStreamReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputStreamReference>
{
    IInputStreamReference(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOutputStream :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOutputStream>,
    impl::require<IOutputStream, Windows::Foundation::IClosable>
{
    IOutputStream(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRandomAccessStream :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRandomAccessStream>,
    impl::require<IRandomAccessStream, Windows::Foundation::IClosable, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream>
{
    IRandomAccessStream(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRandomAccessStreamReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRandomAccessStreamReference>
{
    IRandomAccessStreamReference(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRandomAccessStreamReferenceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRandomAccessStreamReferenceStatics>
{
    IRandomAccessStreamReferenceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRandomAccessStreamStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRandomAccessStreamStatics>
{
    IRandomAccessStreamStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRandomAccessStreamWithContentType :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRandomAccessStreamWithContentType>,
    impl::require<IRandomAccessStreamWithContentType, Windows::Foundation::IClosable, Windows::Storage::Streams::IContentTypeProvider, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream, Windows::Storage::Streams::IRandomAccessStream>
{
    IRandomAccessStreamWithContentType(std::nullptr_t = nullptr) noexcept {}
};

}
