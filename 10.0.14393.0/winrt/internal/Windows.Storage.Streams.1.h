// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Storage::Streams {

struct __declspec(uuid("905a0fe0-bc53-11df-8c49-001e4fc686da")) __declspec(novtable) IBuffer : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Capacity(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Length(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Length(uint32_t value) = 0;
};

struct __declspec(uuid("71af914d-c10f-484b-bc50-14bc623b3a27")) __declspec(novtable) IBufferFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(uint32_t capacity, Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("e901e65b-d716-475a-a90a-af7229b1e741")) __declspec(novtable) IBufferStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateCopyFromMemoryBuffer(Windows::Foundation::IMemoryBuffer * input, Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_CreateMemoryBufferOverIBuffer(Windows::Storage::Streams::IBuffer * input, Windows::Foundation::IMemoryBuffer ** value) = 0;
};

struct __declspec(uuid("97d098a5-3b99-4de9-88a5-e11d2f50c795")) __declspec(novtable) IContentTypeProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ContentType(hstring * value) = 0;
};

struct __declspec(uuid("e2b50029-b4c1-4314-a4b8-fb813a2f275e")) __declspec(novtable) IDataReader : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UnconsumedBufferLength(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_UnicodeEncoding(winrt::Windows::Storage::Streams::UnicodeEncoding * value) = 0;
    virtual HRESULT __stdcall put_UnicodeEncoding(winrt::Windows::Storage::Streams::UnicodeEncoding value) = 0;
    virtual HRESULT __stdcall get_ByteOrder(winrt::Windows::Storage::Streams::ByteOrder * value) = 0;
    virtual HRESULT __stdcall put_ByteOrder(winrt::Windows::Storage::Streams::ByteOrder value) = 0;
    virtual HRESULT __stdcall get_InputStreamOptions(winrt::Windows::Storage::Streams::InputStreamOptions * value) = 0;
    virtual HRESULT __stdcall put_InputStreamOptions(winrt::Windows::Storage::Streams::InputStreamOptions value) = 0;
    virtual HRESULT __stdcall abi_ReadByte(uint8_t * value) = 0;
    virtual HRESULT __stdcall abi_ReadBytes(uint32_t __valueSize, uint8_t * value) = 0;
    virtual HRESULT __stdcall abi_ReadBuffer(uint32_t length, Windows::Storage::Streams::IBuffer ** buffer) = 0;
    virtual HRESULT __stdcall abi_ReadBoolean(bool * value) = 0;
    virtual HRESULT __stdcall abi_ReadGuid(GUID * value) = 0;
    virtual HRESULT __stdcall abi_ReadInt16(int16_t * value) = 0;
    virtual HRESULT __stdcall abi_ReadInt32(int32_t * value) = 0;
    virtual HRESULT __stdcall abi_ReadInt64(int64_t * value) = 0;
    virtual HRESULT __stdcall abi_ReadUInt16(uint16_t * value) = 0;
    virtual HRESULT __stdcall abi_ReadUInt32(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_ReadUInt64(uint64_t * value) = 0;
    virtual HRESULT __stdcall abi_ReadSingle(float * value) = 0;
    virtual HRESULT __stdcall abi_ReadDouble(double * value) = 0;
    virtual HRESULT __stdcall abi_ReadString(uint32_t codeUnitCount, hstring * value) = 0;
    virtual HRESULT __stdcall abi_ReadDateTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall abi_ReadTimeSpan(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall abi_LoadAsync(uint32_t count, Windows::Foundation::IAsyncOperation<uint32_t> ** operation) = 0;
    virtual HRESULT __stdcall abi_DetachBuffer(Windows::Storage::Streams::IBuffer ** buffer) = 0;
    virtual HRESULT __stdcall abi_DetachStream(Windows::Storage::Streams::IInputStream ** stream) = 0;
};

struct __declspec(uuid("d7527847-57da-4e15-914c-06806699a098")) __declspec(novtable) IDataReaderFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateDataReader(Windows::Storage::Streams::IInputStream * inputStream, Windows::Storage::Streams::IDataReader ** dataReader) = 0;
};

struct __declspec(uuid("11fcbfc8-f93a-471b-b121-f379e349313c")) __declspec(novtable) IDataReaderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromBuffer(Windows::Storage::Streams::IBuffer * buffer, Windows::Storage::Streams::IDataReader ** dataReader) = 0;
};

struct __declspec(uuid("64b89265-d341-4922-b38a-dd4af8808c4e")) __declspec(novtable) IDataWriter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UnstoredBufferLength(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_UnicodeEncoding(winrt::Windows::Storage::Streams::UnicodeEncoding * value) = 0;
    virtual HRESULT __stdcall put_UnicodeEncoding(winrt::Windows::Storage::Streams::UnicodeEncoding value) = 0;
    virtual HRESULT __stdcall get_ByteOrder(winrt::Windows::Storage::Streams::ByteOrder * value) = 0;
    virtual HRESULT __stdcall put_ByteOrder(winrt::Windows::Storage::Streams::ByteOrder value) = 0;
    virtual HRESULT __stdcall abi_WriteByte(uint8_t value) = 0;
    virtual HRESULT __stdcall abi_WriteBytes(uint32_t __valueSize, uint8_t * value) = 0;
    virtual HRESULT __stdcall abi_WriteBuffer(Windows::Storage::Streams::IBuffer * buffer) = 0;
    virtual HRESULT __stdcall abi_WriteBufferRange(Windows::Storage::Streams::IBuffer * buffer, uint32_t start, uint32_t count) = 0;
    virtual HRESULT __stdcall abi_WriteBoolean(bool value) = 0;
    virtual HRESULT __stdcall abi_WriteGuid(GUID value) = 0;
    virtual HRESULT __stdcall abi_WriteInt16(int16_t value) = 0;
    virtual HRESULT __stdcall abi_WriteInt32(int32_t value) = 0;
    virtual HRESULT __stdcall abi_WriteInt64(int64_t value) = 0;
    virtual HRESULT __stdcall abi_WriteUInt16(uint16_t value) = 0;
    virtual HRESULT __stdcall abi_WriteUInt32(uint32_t value) = 0;
    virtual HRESULT __stdcall abi_WriteUInt64(uint64_t value) = 0;
    virtual HRESULT __stdcall abi_WriteSingle(float value) = 0;
    virtual HRESULT __stdcall abi_WriteDouble(double value) = 0;
    virtual HRESULT __stdcall abi_WriteDateTime(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall abi_WriteTimeSpan(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall abi_WriteString(hstring value, uint32_t * codeUnitCount) = 0;
    virtual HRESULT __stdcall abi_MeasureString(hstring value, uint32_t * codeUnitCount) = 0;
    virtual HRESULT __stdcall abi_StoreAsync(Windows::Foundation::IAsyncOperation<uint32_t> ** operation) = 0;
    virtual HRESULT __stdcall abi_FlushAsync(Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_DetachBuffer(Windows::Storage::Streams::IBuffer ** buffer) = 0;
    virtual HRESULT __stdcall abi_DetachStream(Windows::Storage::Streams::IOutputStream ** outputStream) = 0;
};

struct __declspec(uuid("338c67c2-8b84-4c2b-9c50-7b8767847a1f")) __declspec(novtable) IDataWriterFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateDataWriter(Windows::Storage::Streams::IOutputStream * outputStream, Windows::Storage::Streams::IDataWriter ** dataWriter) = 0;
};

struct __declspec(uuid("905a0fe2-bc53-11df-8c49-001e4fc686da")) __declspec(novtable) IInputStream : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ReadAsync(Windows::Storage::Streams::IBuffer * buffer, uint32_t count, winrt::Windows::Storage::Streams::InputStreamOptions options, Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint32_t> ** operation) = 0;
};

struct __declspec(uuid("43929d18-5ec9-4b5a-919c-4205b0c804b6")) __declspec(novtable) IInputStreamReference : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OpenSequentialReadAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> ** operation) = 0;
};

struct __declspec(uuid("905a0fe6-bc53-11df-8c49-001e4fc686da")) __declspec(novtable) IOutputStream : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_WriteAsync(Windows::Storage::Streams::IBuffer * buffer, Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> ** operation) = 0;
    virtual HRESULT __stdcall abi_FlushAsync(Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
};

struct __declspec(uuid("905a0fe1-bc53-11df-8c49-001e4fc686da")) __declspec(novtable) IRandomAccessStream : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Size(uint64_t * value) = 0;
    virtual HRESULT __stdcall put_Size(uint64_t value) = 0;
    virtual HRESULT __stdcall abi_GetInputStreamAt(uint64_t position, Windows::Storage::Streams::IInputStream ** stream) = 0;
    virtual HRESULT __stdcall abi_GetOutputStreamAt(uint64_t position, Windows::Storage::Streams::IOutputStream ** stream) = 0;
    virtual HRESULT __stdcall get_Position(uint64_t * value) = 0;
    virtual HRESULT __stdcall abi_Seek(uint64_t position) = 0;
    virtual HRESULT __stdcall abi_CloneStream(Windows::Storage::Streams::IRandomAccessStream ** stream) = 0;
    virtual HRESULT __stdcall get_CanRead(bool * value) = 0;
    virtual HRESULT __stdcall get_CanWrite(bool * value) = 0;
};

struct __declspec(uuid("33ee3134-1dd6-4e3a-8067-d1c162e8642b")) __declspec(novtable) IRandomAccessStreamReference : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OpenReadAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> ** operation) = 0;
};

struct __declspec(uuid("857309dc-3fbf-4e7d-986f-ef3b1a07a964")) __declspec(novtable) IRandomAccessStreamReferenceStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromFile(Windows::Storage::IStorageFile * file, Windows::Storage::Streams::IRandomAccessStreamReference ** streamReference) = 0;
    virtual HRESULT __stdcall abi_CreateFromUri(Windows::Foundation::IUriRuntimeClass * uri, Windows::Storage::Streams::IRandomAccessStreamReference ** streamReference) = 0;
    virtual HRESULT __stdcall abi_CreateFromStream(Windows::Storage::Streams::IRandomAccessStream * stream, Windows::Storage::Streams::IRandomAccessStreamReference ** streamReference) = 0;
};

struct __declspec(uuid("524cedcf-6e29-4ce5-9573-6b753db66c3a")) __declspec(novtable) IRandomAccessStreamStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CopyAsync(Windows::Storage::Streams::IInputStream * source, Windows::Storage::Streams::IOutputStream * destination, Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> ** operation) = 0;
    virtual HRESULT __stdcall abi_CopySizeAsync(Windows::Storage::Streams::IInputStream * source, Windows::Storage::Streams::IOutputStream * destination, uint64_t bytesToCopy, Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> ** operation) = 0;
    virtual HRESULT __stdcall abi_CopyAndCloseAsync(Windows::Storage::Streams::IInputStream * source, Windows::Storage::Streams::IOutputStream * destination, Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> ** operation) = 0;
};

struct __declspec(uuid("cc254827-4b3d-438f-9232-10c76bc7e038")) __declspec(novtable) IRandomAccessStreamWithContentType : Windows::IInspectable
{
};

}

namespace ABI {

template <> struct traits<Windows::Storage::Streams::Buffer> { using default_interface = Windows::Storage::Streams::IBuffer; };
template <> struct traits<Windows::Storage::Streams::DataReader> { using default_interface = Windows::Storage::Streams::IDataReader; };
template <> struct traits<Windows::Storage::Streams::DataReaderLoadOperation> { using default_interface = Windows::Foundation::IAsyncOperation<uint32_t>; };
template <> struct traits<Windows::Storage::Streams::DataWriter> { using default_interface = Windows::Storage::Streams::IDataWriter; };
template <> struct traits<Windows::Storage::Streams::DataWriterStoreOperation> { using default_interface = Windows::Foundation::IAsyncOperation<uint32_t>; };
template <> struct traits<Windows::Storage::Streams::FileInputStream> { using default_interface = Windows::Storage::Streams::IInputStream; };
template <> struct traits<Windows::Storage::Streams::FileOutputStream> { using default_interface = Windows::Storage::Streams::IOutputStream; };
template <> struct traits<Windows::Storage::Streams::FileRandomAccessStream> { using default_interface = Windows::Storage::Streams::IRandomAccessStream; };
template <> struct traits<Windows::Storage::Streams::InMemoryRandomAccessStream> { using default_interface = Windows::Storage::Streams::IRandomAccessStream; };
template <> struct traits<Windows::Storage::Streams::InputStreamOverStream> { using default_interface = Windows::Storage::Streams::IInputStream; };
template <> struct traits<Windows::Storage::Streams::OutputStreamOverStream> { using default_interface = Windows::Storage::Streams::IOutputStream; };
template <> struct traits<Windows::Storage::Streams::RandomAccessStreamOverStream> { using default_interface = Windows::Storage::Streams::IRandomAccessStream; };
template <> struct traits<Windows::Storage::Streams::RandomAccessStreamReference> { using default_interface = Windows::Storage::Streams::IRandomAccessStreamReference; };

}

namespace Windows::Storage::Streams {

template <typename T> struct impl_IBuffer;
template <typename T> struct impl_IBufferFactory;
template <typename T> struct impl_IBufferStatics;
template <typename T> struct impl_IContentTypeProvider;
template <typename T> struct impl_IDataReader;
template <typename T> struct impl_IDataReaderFactory;
template <typename T> struct impl_IDataReaderStatics;
template <typename T> struct impl_IDataWriter;
template <typename T> struct impl_IDataWriterFactory;
template <typename T> struct impl_IInputStream;
template <typename T> struct impl_IInputStreamReference;
template <typename T> struct impl_IOutputStream;
template <typename T> struct impl_IRandomAccessStream;
template <typename T> struct impl_IRandomAccessStreamReference;
template <typename T> struct impl_IRandomAccessStreamReferenceStatics;
template <typename T> struct impl_IRandomAccessStreamStatics;
template <typename T> struct impl_IRandomAccessStreamWithContentType;

}

namespace impl {

template <> struct traits<Windows::Storage::Streams::IBuffer>
{
    using abi = ABI::Windows::Storage::Streams::IBuffer;
    template <typename D> using consume = Windows::Storage::Streams::impl_IBuffer<D>;
};

template <> struct traits<Windows::Storage::Streams::IBufferFactory>
{
    using abi = ABI::Windows::Storage::Streams::IBufferFactory;
    template <typename D> using consume = Windows::Storage::Streams::impl_IBufferFactory<D>;
};

template <> struct traits<Windows::Storage::Streams::IBufferStatics>
{
    using abi = ABI::Windows::Storage::Streams::IBufferStatics;
    template <typename D> using consume = Windows::Storage::Streams::impl_IBufferStatics<D>;
};

template <> struct traits<Windows::Storage::Streams::IContentTypeProvider>
{
    using abi = ABI::Windows::Storage::Streams::IContentTypeProvider;
    template <typename D> using consume = Windows::Storage::Streams::impl_IContentTypeProvider<D>;
};

template <> struct traits<Windows::Storage::Streams::IDataReader>
{
    using abi = ABI::Windows::Storage::Streams::IDataReader;
    template <typename D> using consume = Windows::Storage::Streams::impl_IDataReader<D>;
};

template <> struct traits<Windows::Storage::Streams::IDataReaderFactory>
{
    using abi = ABI::Windows::Storage::Streams::IDataReaderFactory;
    template <typename D> using consume = Windows::Storage::Streams::impl_IDataReaderFactory<D>;
};

template <> struct traits<Windows::Storage::Streams::IDataReaderStatics>
{
    using abi = ABI::Windows::Storage::Streams::IDataReaderStatics;
    template <typename D> using consume = Windows::Storage::Streams::impl_IDataReaderStatics<D>;
};

template <> struct traits<Windows::Storage::Streams::IDataWriter>
{
    using abi = ABI::Windows::Storage::Streams::IDataWriter;
    template <typename D> using consume = Windows::Storage::Streams::impl_IDataWriter<D>;
};

template <> struct traits<Windows::Storage::Streams::IDataWriterFactory>
{
    using abi = ABI::Windows::Storage::Streams::IDataWriterFactory;
    template <typename D> using consume = Windows::Storage::Streams::impl_IDataWriterFactory<D>;
};

template <> struct traits<Windows::Storage::Streams::IInputStream>
{
    using abi = ABI::Windows::Storage::Streams::IInputStream;
    template <typename D> using consume = Windows::Storage::Streams::impl_IInputStream<D>;
};

template <> struct traits<Windows::Storage::Streams::IInputStreamReference>
{
    using abi = ABI::Windows::Storage::Streams::IInputStreamReference;
    template <typename D> using consume = Windows::Storage::Streams::impl_IInputStreamReference<D>;
};

template <> struct traits<Windows::Storage::Streams::IOutputStream>
{
    using abi = ABI::Windows::Storage::Streams::IOutputStream;
    template <typename D> using consume = Windows::Storage::Streams::impl_IOutputStream<D>;
};

template <> struct traits<Windows::Storage::Streams::IRandomAccessStream>
{
    using abi = ABI::Windows::Storage::Streams::IRandomAccessStream;
    template <typename D> using consume = Windows::Storage::Streams::impl_IRandomAccessStream<D>;
};

template <> struct traits<Windows::Storage::Streams::IRandomAccessStreamReference>
{
    using abi = ABI::Windows::Storage::Streams::IRandomAccessStreamReference;
    template <typename D> using consume = Windows::Storage::Streams::impl_IRandomAccessStreamReference<D>;
};

template <> struct traits<Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>
{
    using abi = ABI::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics;
    template <typename D> using consume = Windows::Storage::Streams::impl_IRandomAccessStreamReferenceStatics<D>;
};

template <> struct traits<Windows::Storage::Streams::IRandomAccessStreamStatics>
{
    using abi = ABI::Windows::Storage::Streams::IRandomAccessStreamStatics;
    template <typename D> using consume = Windows::Storage::Streams::impl_IRandomAccessStreamStatics<D>;
};

template <> struct traits<Windows::Storage::Streams::IRandomAccessStreamWithContentType>
{
    using abi = ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType;
    template <typename D> using consume = Windows::Storage::Streams::impl_IRandomAccessStreamWithContentType<D>;
};

template <> struct traits<Windows::Storage::Streams::Buffer>
{
    using abi = ABI::Windows::Storage::Streams::Buffer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.Buffer"; }
};

template <> struct traits<Windows::Storage::Streams::DataReader>
{
    using abi = ABI::Windows::Storage::Streams::DataReader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.DataReader"; }
};

template <> struct traits<Windows::Storage::Streams::DataReaderLoadOperation>
{
    using abi = ABI::Windows::Storage::Streams::DataReaderLoadOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.DataReaderLoadOperation"; }
};

template <> struct traits<Windows::Storage::Streams::DataWriter>
{
    using abi = ABI::Windows::Storage::Streams::DataWriter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.DataWriter"; }
};

template <> struct traits<Windows::Storage::Streams::DataWriterStoreOperation>
{
    using abi = ABI::Windows::Storage::Streams::DataWriterStoreOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.DataWriterStoreOperation"; }
};

template <> struct traits<Windows::Storage::Streams::FileInputStream>
{
    using abi = ABI::Windows::Storage::Streams::FileInputStream;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.FileInputStream"; }
};

template <> struct traits<Windows::Storage::Streams::FileOutputStream>
{
    using abi = ABI::Windows::Storage::Streams::FileOutputStream;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.FileOutputStream"; }
};

template <> struct traits<Windows::Storage::Streams::FileRandomAccessStream>
{
    using abi = ABI::Windows::Storage::Streams::FileRandomAccessStream;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.FileRandomAccessStream"; }
};

template <> struct traits<Windows::Storage::Streams::InMemoryRandomAccessStream>
{
    using abi = ABI::Windows::Storage::Streams::InMemoryRandomAccessStream;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.InMemoryRandomAccessStream"; }
};

template <> struct traits<Windows::Storage::Streams::InputStreamOverStream>
{
    using abi = ABI::Windows::Storage::Streams::InputStreamOverStream;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.InputStreamOverStream"; }
};

template <> struct traits<Windows::Storage::Streams::OutputStreamOverStream>
{
    using abi = ABI::Windows::Storage::Streams::OutputStreamOverStream;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.OutputStreamOverStream"; }
};

template <> struct traits<Windows::Storage::Streams::RandomAccessStream>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.RandomAccessStream"; }
};

template <> struct traits<Windows::Storage::Streams::RandomAccessStreamOverStream>
{
    using abi = ABI::Windows::Storage::Streams::RandomAccessStreamOverStream;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.RandomAccessStreamOverStream"; }
};

template <> struct traits<Windows::Storage::Streams::RandomAccessStreamReference>
{
    using abi = ABI::Windows::Storage::Streams::RandomAccessStreamReference;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Streams.RandomAccessStreamReference"; }
};

}

}
