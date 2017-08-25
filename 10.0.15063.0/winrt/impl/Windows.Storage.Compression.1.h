// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Compression.0.h"

WINRT_EXPORT namespace winrt::Windows::Storage::Compression {

struct WINRT_EBO ICompressor :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompressor>,
    impl::require<ICompressor, Windows::Foundation::IClosable, Windows::Storage::Streams::IOutputStream>
{
    ICompressor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompressorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompressorFactory>
{
    ICompressorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDecompressor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDecompressor>,
    impl::require<IDecompressor, Windows::Foundation::IClosable, Windows::Storage::Streams::IInputStream>
{
    IDecompressor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDecompressorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDecompressorFactory>
{
    IDecompressorFactory(std::nullptr_t = nullptr) noexcept {}
};

}
