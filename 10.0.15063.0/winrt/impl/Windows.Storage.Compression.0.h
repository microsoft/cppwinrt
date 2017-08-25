// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

enum class InputStreamOptions : unsigned;
struct IBuffer;
struct IInputStream;
struct IOutputStream;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Compression {

enum class CompressAlgorithm
{
    InvalidAlgorithm = 0,
    NullAlgorithm = 1,
    Mszip = 2,
    Xpress = 3,
    XpressHuff = 4,
    Lzms = 5,
};

struct ICompressor;
struct ICompressorFactory;
struct IDecompressor;
struct IDecompressorFactory;
struct Compressor;
struct Decompressor;

}

namespace winrt::impl {

template <> struct category<Windows::Storage::Compression::ICompressor>{ using type = interface_category; };
template <> struct category<Windows::Storage::Compression::ICompressorFactory>{ using type = interface_category; };
template <> struct category<Windows::Storage::Compression::IDecompressor>{ using type = interface_category; };
template <> struct category<Windows::Storage::Compression::IDecompressorFactory>{ using type = interface_category; };
template <> struct category<Windows::Storage::Compression::Compressor>{ using type = class_category; };
template <> struct category<Windows::Storage::Compression::Decompressor>{ using type = class_category; };
template <> struct category<Windows::Storage::Compression::CompressAlgorithm>{ using type = enum_category; };
template <> struct name<Windows::Storage::Compression::ICompressor>{ static constexpr auto & value{ L"Windows.Storage.Compression.ICompressor" }; };
template <> struct name<Windows::Storage::Compression::ICompressorFactory>{ static constexpr auto & value{ L"Windows.Storage.Compression.ICompressorFactory" }; };
template <> struct name<Windows::Storage::Compression::IDecompressor>{ static constexpr auto & value{ L"Windows.Storage.Compression.IDecompressor" }; };
template <> struct name<Windows::Storage::Compression::IDecompressorFactory>{ static constexpr auto & value{ L"Windows.Storage.Compression.IDecompressorFactory" }; };
template <> struct name<Windows::Storage::Compression::Compressor>{ static constexpr auto & value{ L"Windows.Storage.Compression.Compressor" }; };
template <> struct name<Windows::Storage::Compression::Decompressor>{ static constexpr auto & value{ L"Windows.Storage.Compression.Decompressor" }; };
template <> struct name<Windows::Storage::Compression::CompressAlgorithm>{ static constexpr auto & value{ L"Windows.Storage.Compression.CompressAlgorithm" }; };
template <> struct guid<Windows::Storage::Compression::ICompressor>{ static constexpr GUID value{ 0x0AC3645A,0x57AC,0x4EE1,{ 0xB7,0x02,0x84,0xD3,0x9D,0x54,0x24,0xE0 } }; };
template <> struct guid<Windows::Storage::Compression::ICompressorFactory>{ static constexpr GUID value{ 0x5F3D96A4,0x2CFB,0x442C,{ 0xA8,0xBA,0xD7,0xD1,0x1B,0x03,0x9D,0xA0 } }; };
template <> struct guid<Windows::Storage::Compression::IDecompressor>{ static constexpr GUID value{ 0xB883FE46,0xD68A,0x4C8B,{ 0xAD,0xA0,0x4E,0xE8,0x13,0xFC,0x52,0x83 } }; };
template <> struct guid<Windows::Storage::Compression::IDecompressorFactory>{ static constexpr GUID value{ 0x5337E252,0x1DA2,0x42E1,{ 0x88,0x34,0x03,0x79,0xD2,0x8D,0x74,0x2F } }; };
template <> struct default_interface<Windows::Storage::Compression::Compressor>{ using type = Windows::Storage::Compression::ICompressor; };
template <> struct default_interface<Windows::Storage::Compression::Decompressor>{ using type = Windows::Storage::Compression::IDecompressor; };

template <typename D>
struct consume_Windows_Storage_Compression_ICompressor
{
    Windows::Foundation::IAsyncOperation<bool> FinishAsync() const;
    Windows::Storage::Streams::IOutputStream DetachStream() const;
};
template <> struct consume<Windows::Storage::Compression::ICompressor> { template <typename D> using type = consume_Windows_Storage_Compression_ICompressor<D>; };

template <typename D>
struct consume_Windows_Storage_Compression_ICompressorFactory
{
    Windows::Storage::Compression::Compressor CreateCompressor(Windows::Storage::Streams::IOutputStream const& underlyingStream) const;
    Windows::Storage::Compression::Compressor CreateCompressorEx(Windows::Storage::Streams::IOutputStream const& underlyingStream, Windows::Storage::Compression::CompressAlgorithm const& algorithm, uint32_t blockSize) const;
};
template <> struct consume<Windows::Storage::Compression::ICompressorFactory> { template <typename D> using type = consume_Windows_Storage_Compression_ICompressorFactory<D>; };

template <typename D>
struct consume_Windows_Storage_Compression_IDecompressor
{
    Windows::Storage::Streams::IInputStream DetachStream() const;
};
template <> struct consume<Windows::Storage::Compression::IDecompressor> { template <typename D> using type = consume_Windows_Storage_Compression_IDecompressor<D>; };

template <typename D>
struct consume_Windows_Storage_Compression_IDecompressorFactory
{
    Windows::Storage::Compression::Decompressor CreateDecompressor(Windows::Storage::Streams::IInputStream const& underlyingStream) const;
};
template <> struct consume<Windows::Storage::Compression::IDecompressorFactory> { template <typename D> using type = consume_Windows_Storage_Compression_IDecompressorFactory<D>; };

template <> struct abi<Windows::Storage::Compression::ICompressor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FinishAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DetachStream(::IUnknown** stream) = 0;
};};

template <> struct abi<Windows::Storage::Compression::ICompressorFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateCompressor(::IUnknown* underlyingStream, ::IUnknown** createdCompressor) = 0;
    virtual HRESULT __stdcall CreateCompressorEx(::IUnknown* underlyingStream, abi_t<Windows::Storage::Compression::CompressAlgorithm> algorithm, uint32_t blockSize, ::IUnknown** createdCompressor) = 0;
};};

template <> struct abi<Windows::Storage::Compression::IDecompressor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall DetachStream(::IUnknown** stream) = 0;
};};

template <> struct abi<Windows::Storage::Compression::IDecompressorFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateDecompressor(::IUnknown* underlyingStream, ::IUnknown** createdDecompressor) = 0;
};};

}
