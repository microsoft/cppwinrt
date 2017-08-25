// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Compression.2.h"
#include "winrt/Windows.Storage.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Storage_Compression_ICompressor<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Compression::ICompressor)->FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Storage_Compression_ICompressor<D>::DetachStream() const
{
    Windows::Storage::Streams::IOutputStream stream{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Compression::ICompressor)->DetachStream(put_abi(stream)));
    return stream;
}

template <typename D> Windows::Storage::Compression::Compressor consume_Windows_Storage_Compression_ICompressorFactory<D>::CreateCompressor(Windows::Storage::Streams::IOutputStream const& underlyingStream) const
{
    Windows::Storage::Compression::Compressor createdCompressor{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Compression::ICompressorFactory)->CreateCompressor(get_abi(underlyingStream), put_abi(createdCompressor)));
    return createdCompressor;
}

template <typename D> Windows::Storage::Compression::Compressor consume_Windows_Storage_Compression_ICompressorFactory<D>::CreateCompressorEx(Windows::Storage::Streams::IOutputStream const& underlyingStream, Windows::Storage::Compression::CompressAlgorithm const& algorithm, uint32_t blockSize) const
{
    Windows::Storage::Compression::Compressor createdCompressor{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Compression::ICompressorFactory)->CreateCompressorEx(get_abi(underlyingStream), get_abi(algorithm), blockSize, put_abi(createdCompressor)));
    return createdCompressor;
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Storage_Compression_IDecompressor<D>::DetachStream() const
{
    Windows::Storage::Streams::IInputStream stream{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Compression::IDecompressor)->DetachStream(put_abi(stream)));
    return stream;
}

template <typename D> Windows::Storage::Compression::Decompressor consume_Windows_Storage_Compression_IDecompressorFactory<D>::CreateDecompressor(Windows::Storage::Streams::IInputStream const& underlyingStream) const
{
    Windows::Storage::Compression::Decompressor createdDecompressor{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Compression::IDecompressorFactory)->CreateDecompressor(get_abi(underlyingStream), put_abi(createdDecompressor)));
    return createdDecompressor;
}

template <typename D>
struct produce<D, Windows::Storage::Compression::ICompressor> : produce_base<D, Windows::Storage::Compression::ICompressor>
{
    HRESULT __stdcall FinishAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DetachStream(::IUnknown** stream) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *stream = detach_abi(this->shim().DetachStream());
            return S_OK;
        }
        catch (...)
        {
            *stream = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Compression::ICompressorFactory> : produce_base<D, Windows::Storage::Compression::ICompressorFactory>
{
    HRESULT __stdcall CreateCompressor(::IUnknown* underlyingStream, ::IUnknown** createdCompressor) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *createdCompressor = detach_abi(this->shim().CreateCompressor(*reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&underlyingStream)));
            return S_OK;
        }
        catch (...)
        {
            *createdCompressor = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCompressorEx(::IUnknown* underlyingStream, abi_t<Windows::Storage::Compression::CompressAlgorithm> algorithm, uint32_t blockSize, ::IUnknown** createdCompressor) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *createdCompressor = detach_abi(this->shim().CreateCompressorEx(*reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&underlyingStream), *reinterpret_cast<Windows::Storage::Compression::CompressAlgorithm const*>(&algorithm), blockSize));
            return S_OK;
        }
        catch (...)
        {
            *createdCompressor = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Compression::IDecompressor> : produce_base<D, Windows::Storage::Compression::IDecompressor>
{
    HRESULT __stdcall DetachStream(::IUnknown** stream) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *stream = detach_abi(this->shim().DetachStream());
            return S_OK;
        }
        catch (...)
        {
            *stream = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Compression::IDecompressorFactory> : produce_base<D, Windows::Storage::Compression::IDecompressorFactory>
{
    HRESULT __stdcall CreateDecompressor(::IUnknown* underlyingStream, ::IUnknown** createdDecompressor) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *createdDecompressor = detach_abi(this->shim().CreateDecompressor(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&underlyingStream)));
            return S_OK;
        }
        catch (...)
        {
            *createdDecompressor = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Storage::Compression {

inline Compressor::Compressor(Windows::Storage::Streams::IOutputStream const& underlyingStream) :
    Compressor(get_activation_factory<Compressor, Windows::Storage::Compression::ICompressorFactory>().CreateCompressor(underlyingStream))
{}

inline Compressor::Compressor(Windows::Storage::Streams::IOutputStream const& underlyingStream, Windows::Storage::Compression::CompressAlgorithm const& algorithm, uint32_t blockSize) :
    Compressor(get_activation_factory<Compressor, Windows::Storage::Compression::ICompressorFactory>().CreateCompressorEx(underlyingStream, algorithm, blockSize))
{}

inline Decompressor::Decompressor(Windows::Storage::Streams::IInputStream const& underlyingStream) :
    Decompressor(get_activation_factory<Decompressor, Windows::Storage::Compression::IDecompressorFactory>().CreateDecompressor(underlyingStream))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Storage::Compression::ICompressor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Compression::ICompressor> {};

template<> struct hash<winrt::Windows::Storage::Compression::ICompressorFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Compression::ICompressorFactory> {};

template<> struct hash<winrt::Windows::Storage::Compression::IDecompressor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Compression::IDecompressor> {};

template<> struct hash<winrt::Windows::Storage::Compression::IDecompressorFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Compression::IDecompressorFactory> {};

template<> struct hash<winrt::Windows::Storage::Compression::Compressor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Compression::Compressor> {};

template<> struct hash<winrt::Windows::Storage::Compression::Decompressor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Compression::Decompressor> {};

}

WINRT_WARNING_POP
