// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Storage.Compression.1.h"
#include "Windows.Foundation.2.h"
#include "Windows.Storage.Streams.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif


}

namespace Windows::Storage::Compression {

template <typename D>
struct WINRT_EBO impl_ICompressor
{
    Windows::Foundation::IAsyncOperation<bool> FinishAsync() const;
    Windows::Storage::Streams::IOutputStream DetachStream() const;
};

template <typename D>
struct WINRT_EBO impl_ICompressorFactory
{
    Windows::Storage::Compression::Compressor CreateCompressor(const Windows::Storage::Streams::IOutputStream & underlyingStream) const;
    Windows::Storage::Compression::Compressor CreateCompressorEx(const Windows::Storage::Streams::IOutputStream & underlyingStream, Windows::Storage::Compression::CompressAlgorithm algorithm, uint32_t blockSize) const;
};

template <typename D>
struct WINRT_EBO impl_IDecompressor
{
    Windows::Storage::Streams::IInputStream DetachStream() const;
};

template <typename D>
struct WINRT_EBO impl_IDecompressorFactory
{
    Windows::Storage::Compression::Decompressor CreateDecompressor(const Windows::Storage::Streams::IInputStream & underlyingStream) const;
};

struct ICompressor :
    Windows::IInspectable,
    impl::consume<ICompressor>,
    impl::require<ICompressor, Windows::Foundation::IClosable, Windows::Storage::Streams::IOutputStream>
{
    ICompressor(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICompressor>(m_ptr); }
};

struct ICompressorFactory :
    Windows::IInspectable,
    impl::consume<ICompressorFactory>
{
    ICompressorFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICompressorFactory>(m_ptr); }
};

struct IDecompressor :
    Windows::IInspectable,
    impl::consume<IDecompressor>,
    impl::require<IDecompressor, Windows::Foundation::IClosable, Windows::Storage::Streams::IInputStream>
{
    IDecompressor(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDecompressor>(m_ptr); }
};

struct IDecompressorFactory :
    Windows::IInspectable,
    impl::consume<IDecompressorFactory>
{
    IDecompressorFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDecompressorFactory>(m_ptr); }
};

}

}
