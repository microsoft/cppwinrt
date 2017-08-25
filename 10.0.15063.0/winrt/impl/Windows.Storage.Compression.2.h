// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Compression.1.h"

WINRT_EXPORT namespace winrt::Windows::Storage::Compression {

struct WINRT_EBO Compressor :
    Windows::Storage::Compression::ICompressor
{
    Compressor(std::nullptr_t) noexcept {}
    Compressor(Windows::Storage::Streams::IOutputStream const& underlyingStream);
    Compressor(Windows::Storage::Streams::IOutputStream const& underlyingStream, Windows::Storage::Compression::CompressAlgorithm const& algorithm, uint32_t blockSize);
};

struct WINRT_EBO Decompressor :
    Windows::Storage::Compression::IDecompressor
{
    Decompressor(std::nullptr_t) noexcept {}
    Decompressor(Windows::Storage::Streams::IInputStream const& underlyingStream);
};

}
