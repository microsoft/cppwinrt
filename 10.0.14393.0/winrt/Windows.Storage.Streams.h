// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "Windows.Storage.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Storage::Streams::IBuffer> : produce_base<D, Windows::Storage::Streams::IBuffer>
{
    HRESULT __stdcall get_Capacity(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Capacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Length(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Length(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IBufferFactory> : produce_base<D, Windows::Storage::Streams::IBufferFactory>
{
    HRESULT __stdcall abi_Create(uint32_t capacity, abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Create(capacity));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IBufferStatics> : produce_base<D, Windows::Storage::Streams::IBufferStatics>
{
    HRESULT __stdcall abi_CreateCopyFromMemoryBuffer(abi_arg_in<Windows::Foundation::IMemoryBuffer> input, abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateCopyFromMemoryBuffer(*reinterpret_cast<const Windows::Foundation::IMemoryBuffer *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateMemoryBufferOverIBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> input, abi_arg_out<Windows::Foundation::IMemoryBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMemoryBufferOverIBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IContentTypeProvider> : produce_base<D, Windows::Storage::Streams::IContentTypeProvider>
{
    HRESULT __stdcall get_ContentType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IDataReader> : produce_base<D, Windows::Storage::Streams::IDataReader>
{
    HRESULT __stdcall get_UnconsumedBufferLength(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnconsumedBufferLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnicodeEncoding());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding value) noexcept override
    {
        try
        {
            this->shim().UnicodeEncoding(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ByteOrder(Windows::Storage::Streams::ByteOrder * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ByteOrder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ByteOrder(Windows::Storage::Streams::ByteOrder value) noexcept override
    {
        try
        {
            this->shim().ByteOrder(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputStreamOptions(Windows::Storage::Streams::InputStreamOptions * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputStreamOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InputStreamOptions(Windows::Storage::Streams::InputStreamOptions value) noexcept override
    {
        try
        {
            this->shim().InputStreamOptions(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadByte(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadByte());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadBytes(uint32_t __valueSize, abi_arg_out<uint8_t> value) noexcept override
    {
        try
        {
            this->shim().ReadBytes(*value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadBuffer(uint32_t length, abi_arg_out<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            *buffer = detach(this->shim().ReadBuffer(length));
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadBoolean(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadBoolean());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadGuid(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadGuid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadInt16(int16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadInt16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadInt32(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadInt32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadInt64(int64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadInt64());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadUInt16(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadUInt16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadUInt32(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadUInt32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadUInt64(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadUInt64());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadSingle(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadSingle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadDouble(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadDouble());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadString(uint32_t codeUnitCount, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadString(codeUnitCount));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadDateTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadDateTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadTimeSpan(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadTimeSpan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadAsync(uint32_t count, abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LoadAsync(count));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DetachBuffer(abi_arg_out<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            *buffer = detach(this->shim().DetachBuffer());
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DetachStream(abi_arg_out<Windows::Storage::Streams::IInputStream> stream) noexcept override
    {
        try
        {
            *stream = detach(this->shim().DetachStream());
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
struct produce<D, Windows::Storage::Streams::IDataReaderFactory> : produce_base<D, Windows::Storage::Streams::IDataReaderFactory>
{
    HRESULT __stdcall abi_CreateDataReader(abi_arg_in<Windows::Storage::Streams::IInputStream> inputStream, abi_arg_out<Windows::Storage::Streams::IDataReader> dataReader) noexcept override
    {
        try
        {
            *dataReader = detach(this->shim().CreateDataReader(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&inputStream)));
            return S_OK;
        }
        catch (...)
        {
            *dataReader = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IDataReaderStatics> : produce_base<D, Windows::Storage::Streams::IDataReaderStatics>
{
    HRESULT __stdcall abi_FromBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, abi_arg_out<Windows::Storage::Streams::IDataReader> dataReader) noexcept override
    {
        try
        {
            *dataReader = detach(this->shim().FromBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *dataReader = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IDataWriter> : produce_base<D, Windows::Storage::Streams::IDataWriter>
{
    HRESULT __stdcall get_UnstoredBufferLength(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnstoredBufferLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnicodeEncoding());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding value) noexcept override
    {
        try
        {
            this->shim().UnicodeEncoding(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ByteOrder(Windows::Storage::Streams::ByteOrder * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ByteOrder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ByteOrder(Windows::Storage::Streams::ByteOrder value) noexcept override
    {
        try
        {
            this->shim().ByteOrder(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteByte(uint8_t value) noexcept override
    {
        try
        {
            this->shim().WriteByte(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteBytes(uint32_t __valueSize, abi_arg_in<uint8_t> * value) noexcept override
    {
        try
        {
            this->shim().WriteBytes(array_ref<const uint8_t>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            this->shim().WriteBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteBufferRange(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, uint32_t start, uint32_t count) noexcept override
    {
        try
        {
            this->shim().WriteBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer), start, count);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteBoolean(bool value) noexcept override
    {
        try
        {
            this->shim().WriteBoolean(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteGuid(GUID value) noexcept override
    {
        try
        {
            this->shim().WriteGuid(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteInt16(int16_t value) noexcept override
    {
        try
        {
            this->shim().WriteInt16(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteInt32(int32_t value) noexcept override
    {
        try
        {
            this->shim().WriteInt32(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteInt64(int64_t value) noexcept override
    {
        try
        {
            this->shim().WriteInt64(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteUInt16(uint16_t value) noexcept override
    {
        try
        {
            this->shim().WriteUInt16(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteUInt32(uint32_t value) noexcept override
    {
        try
        {
            this->shim().WriteUInt32(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteUInt64(uint64_t value) noexcept override
    {
        try
        {
            this->shim().WriteUInt64(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteSingle(float value) noexcept override
    {
        try
        {
            this->shim().WriteSingle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteDouble(double value) noexcept override
    {
        try
        {
            this->shim().WriteDouble(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteDateTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().WriteDateTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteTimeSpan(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().WriteTimeSpan(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteString(abi_arg_in<hstring> value, uint32_t * codeUnitCount) noexcept override
    {
        try
        {
            *codeUnitCount = detach(this->shim().WriteString(*reinterpret_cast<const hstring *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MeasureString(abi_arg_in<hstring> value, uint32_t * codeUnitCount) noexcept override
    {
        try
        {
            *codeUnitCount = detach(this->shim().MeasureString(*reinterpret_cast<const hstring *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StoreAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().StoreAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FlushAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FlushAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DetachBuffer(abi_arg_out<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            *buffer = detach(this->shim().DetachBuffer());
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DetachStream(abi_arg_out<Windows::Storage::Streams::IOutputStream> outputStream) noexcept override
    {
        try
        {
            *outputStream = detach(this->shim().DetachStream());
            return S_OK;
        }
        catch (...)
        {
            *outputStream = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IDataWriterFactory> : produce_base<D, Windows::Storage::Streams::IDataWriterFactory>
{
    HRESULT __stdcall abi_CreateDataWriter(abi_arg_in<Windows::Storage::Streams::IOutputStream> outputStream, abi_arg_out<Windows::Storage::Streams::IDataWriter> dataWriter) noexcept override
    {
        try
        {
            *dataWriter = detach(this->shim().CreateDataWriter(*reinterpret_cast<const Windows::Storage::Streams::IOutputStream *>(&outputStream)));
            return S_OK;
        }
        catch (...)
        {
            *dataWriter = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IInputStream> : produce_base<D, Windows::Storage::Streams::IInputStream>
{
    HRESULT __stdcall abi_ReadAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, uint32_t count, Windows::Storage::Streams::InputStreamOptions options, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ReadAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer), count, options));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IInputStreamReference> : produce_base<D, Windows::Storage::Streams::IInputStreamReference>
{
    HRESULT __stdcall abi_OpenSequentialReadAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().OpenSequentialReadAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IOutputStream> : produce_base<D, Windows::Storage::Streams::IOutputStream>
{
    HRESULT __stdcall abi_WriteAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().WriteAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FlushAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FlushAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IRandomAccessStream> : produce_base<D, Windows::Storage::Streams::IRandomAccessStream>
{
    HRESULT __stdcall get_Size(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Size(uint64_t value) noexcept override
    {
        try
        {
            this->shim().Size(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInputStreamAt(uint64_t position, abi_arg_out<Windows::Storage::Streams::IInputStream> stream) noexcept override
    {
        try
        {
            *stream = detach(this->shim().GetInputStreamAt(position));
            return S_OK;
        }
        catch (...)
        {
            *stream = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetOutputStreamAt(uint64_t position, abi_arg_out<Windows::Storage::Streams::IOutputStream> stream) noexcept override
    {
        try
        {
            *stream = detach(this->shim().GetOutputStreamAt(position));
            return S_OK;
        }
        catch (...)
        {
            *stream = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Seek(uint64_t position) noexcept override
    {
        try
        {
            this->shim().Seek(position);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CloneStream(abi_arg_out<Windows::Storage::Streams::IRandomAccessStream> stream) noexcept override
    {
        try
        {
            *stream = detach(this->shim().CloneStream());
            return S_OK;
        }
        catch (...)
        {
            *stream = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanRead(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanRead());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanWrite(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanWrite());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IRandomAccessStreamReference> : produce_base<D, Windows::Storage::Streams::IRandomAccessStreamReference>
{
    HRESULT __stdcall abi_OpenReadAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().OpenReadAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IRandomAccessStreamReferenceStatics> : produce_base<D, Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>
{
    HRESULT __stdcall abi_CreateFromFile(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> streamReference) noexcept override
    {
        try
        {
            *streamReference = detach(this->shim().CreateFromFile(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *streamReference = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> streamReference) noexcept override
    {
        try
        {
            *streamReference = detach(this->shim().CreateFromUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *streamReference = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromStream(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream, abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> streamReference) noexcept override
    {
        try
        {
            *streamReference = detach(this->shim().CreateFromStream(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *streamReference = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IRandomAccessStreamStatics> : produce_base<D, Windows::Storage::Streams::IRandomAccessStreamStatics>
{
    HRESULT __stdcall abi_CopyAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> source, abi_arg_in<Windows::Storage::Streams::IOutputStream> destination, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CopyAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&source), *reinterpret_cast<const Windows::Storage::Streams::IOutputStream *>(&destination)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopySizeAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> source, abi_arg_in<Windows::Storage::Streams::IOutputStream> destination, uint64_t bytesToCopy, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CopyAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&source), *reinterpret_cast<const Windows::Storage::Streams::IOutputStream *>(&destination), bytesToCopy));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyAndCloseAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> source, abi_arg_in<Windows::Storage::Streams::IOutputStream> destination, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CopyAndCloseAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&source), *reinterpret_cast<const Windows::Storage::Streams::IOutputStream *>(&destination)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Streams::IRandomAccessStreamWithContentType> : produce_base<D, Windows::Storage::Streams::IRandomAccessStreamWithContentType>
{};

}

namespace Windows::Storage::Streams {

template <typename D> uint32_t impl_IDataReader<D>::UnconsumedBufferLength() const
{
    uint32_t value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->get_UnconsumedBufferLength(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::UnicodeEncoding impl_IDataReader<D>::UnicodeEncoding() const
{
    Windows::Storage::Streams::UnicodeEncoding value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->get_UnicodeEncoding(&value));
    return value;
}

template <typename D> void impl_IDataReader<D>::UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding value) const
{
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->put_UnicodeEncoding(value));
}

template <typename D> Windows::Storage::Streams::ByteOrder impl_IDataReader<D>::ByteOrder() const
{
    Windows::Storage::Streams::ByteOrder value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->get_ByteOrder(&value));
    return value;
}

template <typename D> void impl_IDataReader<D>::ByteOrder(Windows::Storage::Streams::ByteOrder value) const
{
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->put_ByteOrder(value));
}

template <typename D> Windows::Storage::Streams::InputStreamOptions impl_IDataReader<D>::InputStreamOptions() const
{
    Windows::Storage::Streams::InputStreamOptions value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->get_InputStreamOptions(&value));
    return value;
}

template <typename D> void impl_IDataReader<D>::InputStreamOptions(Windows::Storage::Streams::InputStreamOptions value) const
{
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->put_InputStreamOptions(value));
}

template <typename D> uint8_t impl_IDataReader<D>::ReadByte() const
{
    uint8_t value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadByte(&value));
    return value;
}

template <typename D> void impl_IDataReader<D>::ReadBytes(array_ref<uint8_t> value) const
{
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadBytes(value.size(), get(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IDataReader<D>::ReadBuffer(uint32_t length) const
{
    Windows::Storage::Streams::IBuffer buffer;
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadBuffer(length, put(buffer)));
    return buffer;
}

template <typename D> bool impl_IDataReader<D>::ReadBoolean() const
{
    bool value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadBoolean(&value));
    return value;
}

template <typename D> GUID impl_IDataReader<D>::ReadGuid() const
{
    GUID value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadGuid(&value));
    return value;
}

template <typename D> int16_t impl_IDataReader<D>::ReadInt16() const
{
    int16_t value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadInt16(&value));
    return value;
}

template <typename D> int32_t impl_IDataReader<D>::ReadInt32() const
{
    int32_t value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadInt32(&value));
    return value;
}

template <typename D> int64_t impl_IDataReader<D>::ReadInt64() const
{
    int64_t value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadInt64(&value));
    return value;
}

template <typename D> uint16_t impl_IDataReader<D>::ReadUInt16() const
{
    uint16_t value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadUInt16(&value));
    return value;
}

template <typename D> uint32_t impl_IDataReader<D>::ReadUInt32() const
{
    uint32_t value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadUInt32(&value));
    return value;
}

template <typename D> uint64_t impl_IDataReader<D>::ReadUInt64() const
{
    uint64_t value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadUInt64(&value));
    return value;
}

template <typename D> float impl_IDataReader<D>::ReadSingle() const
{
    float value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadSingle(&value));
    return value;
}

template <typename D> double impl_IDataReader<D>::ReadDouble() const
{
    double value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadDouble(&value));
    return value;
}

template <typename D> hstring impl_IDataReader<D>::ReadString(uint32_t codeUnitCount) const
{
    hstring value;
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadString(codeUnitCount, put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IDataReader<D>::ReadDateTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadDateTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IDataReader<D>::ReadTimeSpan() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_ReadTimeSpan(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::DataReaderLoadOperation impl_IDataReader<D>::LoadAsync(uint32_t count) const
{
    Windows::Storage::Streams::DataReaderLoadOperation operation { nullptr };
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_LoadAsync(count, put(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IDataReader<D>::DetachBuffer() const
{
    Windows::Storage::Streams::IBuffer buffer;
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_DetachBuffer(put(buffer)));
    return buffer;
}

template <typename D> Windows::Storage::Streams::IInputStream impl_IDataReader<D>::DetachStream() const
{
    Windows::Storage::Streams::IInputStream stream;
    check_hresult(static_cast<const IDataReader &>(static_cast<const D &>(*this))->abi_DetachStream(put(stream)));
    return stream;
}

template <typename D> Windows::Storage::Streams::DataReader impl_IDataReaderFactory<D>::CreateDataReader(const Windows::Storage::Streams::IInputStream & inputStream) const
{
    Windows::Storage::Streams::DataReader dataReader { nullptr };
    check_hresult(static_cast<const IDataReaderFactory &>(static_cast<const D &>(*this))->abi_CreateDataReader(get(inputStream), put(dataReader)));
    return dataReader;
}

template <typename D> Windows::Storage::Streams::DataReader impl_IDataReaderStatics<D>::FromBuffer(const Windows::Storage::Streams::IBuffer & buffer) const
{
    Windows::Storage::Streams::DataReader dataReader { nullptr };
    check_hresult(static_cast<const IDataReaderStatics &>(static_cast<const D &>(*this))->abi_FromBuffer(get(buffer), put(dataReader)));
    return dataReader;
}

template <typename D> uint32_t impl_IDataWriter<D>::UnstoredBufferLength() const
{
    uint32_t value {};
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->get_UnstoredBufferLength(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::UnicodeEncoding impl_IDataWriter<D>::UnicodeEncoding() const
{
    Windows::Storage::Streams::UnicodeEncoding value {};
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->get_UnicodeEncoding(&value));
    return value;
}

template <typename D> void impl_IDataWriter<D>::UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->put_UnicodeEncoding(value));
}

template <typename D> Windows::Storage::Streams::ByteOrder impl_IDataWriter<D>::ByteOrder() const
{
    Windows::Storage::Streams::ByteOrder value {};
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->get_ByteOrder(&value));
    return value;
}

template <typename D> void impl_IDataWriter<D>::ByteOrder(Windows::Storage::Streams::ByteOrder value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->put_ByteOrder(value));
}

template <typename D> void impl_IDataWriter<D>::WriteByte(uint8_t value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteByte(value));
}

template <typename D> void impl_IDataWriter<D>::WriteBytes(array_ref<const uint8_t> value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteBytes(value.size(), get(value)));
}

template <typename D> void impl_IDataWriter<D>::WriteBuffer(const Windows::Storage::Streams::IBuffer & buffer) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteBuffer(get(buffer)));
}

template <typename D> void impl_IDataWriter<D>::WriteBuffer(const Windows::Storage::Streams::IBuffer & buffer, uint32_t start, uint32_t count) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteBufferRange(get(buffer), start, count));
}

template <typename D> void impl_IDataWriter<D>::WriteBoolean(bool value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteBoolean(value));
}

template <typename D> void impl_IDataWriter<D>::WriteGuid(GUID value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteGuid(value));
}

template <typename D> void impl_IDataWriter<D>::WriteInt16(int16_t value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteInt16(value));
}

template <typename D> void impl_IDataWriter<D>::WriteInt32(int32_t value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteInt32(value));
}

template <typename D> void impl_IDataWriter<D>::WriteInt64(int64_t value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteInt64(value));
}

template <typename D> void impl_IDataWriter<D>::WriteUInt16(uint16_t value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteUInt16(value));
}

template <typename D> void impl_IDataWriter<D>::WriteUInt32(uint32_t value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteUInt32(value));
}

template <typename D> void impl_IDataWriter<D>::WriteUInt64(uint64_t value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteUInt64(value));
}

template <typename D> void impl_IDataWriter<D>::WriteSingle(float value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteSingle(value));
}

template <typename D> void impl_IDataWriter<D>::WriteDouble(double value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteDouble(value));
}

template <typename D> void impl_IDataWriter<D>::WriteDateTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteDateTime(get(value)));
}

template <typename D> void impl_IDataWriter<D>::WriteTimeSpan(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteTimeSpan(get(value)));
}

template <typename D> uint32_t impl_IDataWriter<D>::WriteString(hstring_ref value) const
{
    uint32_t codeUnitCount {};
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_WriteString(get(value), &codeUnitCount));
    return codeUnitCount;
}

template <typename D> uint32_t impl_IDataWriter<D>::MeasureString(hstring_ref value) const
{
    uint32_t codeUnitCount {};
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_MeasureString(get(value), &codeUnitCount));
    return codeUnitCount;
}

template <typename D> Windows::Storage::Streams::DataWriterStoreOperation impl_IDataWriter<D>::StoreAsync() const
{
    Windows::Storage::Streams::DataWriterStoreOperation operation { nullptr };
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_StoreAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IDataWriter<D>::FlushAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_FlushAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IDataWriter<D>::DetachBuffer() const
{
    Windows::Storage::Streams::IBuffer buffer;
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_DetachBuffer(put(buffer)));
    return buffer;
}

template <typename D> Windows::Storage::Streams::IOutputStream impl_IDataWriter<D>::DetachStream() const
{
    Windows::Storage::Streams::IOutputStream outputStream;
    check_hresult(static_cast<const IDataWriter &>(static_cast<const D &>(*this))->abi_DetachStream(put(outputStream)));
    return outputStream;
}

template <typename D> Windows::Storage::Streams::DataWriter impl_IDataWriterFactory<D>::CreateDataWriter(const Windows::Storage::Streams::IOutputStream & outputStream) const
{
    Windows::Storage::Streams::DataWriter dataWriter { nullptr };
    check_hresult(static_cast<const IDataWriterFactory &>(static_cast<const D &>(*this))->abi_CreateDataWriter(get(outputStream), put(dataWriter)));
    return dataWriter;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> impl_IRandomAccessStreamReference<D>::OpenReadAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> operation;
    check_hresult(static_cast<const IRandomAccessStreamReference &>(static_cast<const D &>(*this))->abi_OpenReadAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> impl_IRandomAccessStreamStatics<D>::CopyAsync(const Windows::Storage::Streams::IInputStream & source, const Windows::Storage::Streams::IOutputStream & destination) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> operation;
    check_hresult(static_cast<const IRandomAccessStreamStatics &>(static_cast<const D &>(*this))->abi_CopyAsync(get(source), get(destination), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> impl_IRandomAccessStreamStatics<D>::CopyAsync(const Windows::Storage::Streams::IInputStream & source, const Windows::Storage::Streams::IOutputStream & destination, uint64_t bytesToCopy) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> operation;
    check_hresult(static_cast<const IRandomAccessStreamStatics &>(static_cast<const D &>(*this))->abi_CopySizeAsync(get(source), get(destination), bytesToCopy, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> impl_IRandomAccessStreamStatics<D>::CopyAndCloseAsync(const Windows::Storage::Streams::IInputStream & source, const Windows::Storage::Streams::IOutputStream & destination) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> operation;
    check_hresult(static_cast<const IRandomAccessStreamStatics &>(static_cast<const D &>(*this))->abi_CopyAndCloseAsync(get(source), get(destination), put(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::Buffer impl_IBufferFactory<D>::Create(uint32_t capacity) const
{
    Windows::Storage::Streams::Buffer value { nullptr };
    check_hresult(static_cast<const IBufferFactory &>(static_cast<const D &>(*this))->abi_Create(capacity, put(value)));
    return value;
}

template <typename D> uint32_t impl_IBuffer<D>::Capacity() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBuffer &>(static_cast<const D &>(*this))->get_Capacity(&value));
    return value;
}

template <typename D> uint32_t impl_IBuffer<D>::Length() const
{
    uint32_t value {};
    check_hresult(static_cast<const IBuffer &>(static_cast<const D &>(*this))->get_Length(&value));
    return value;
}

template <typename D> void impl_IBuffer<D>::Length(uint32_t value) const
{
    check_hresult(static_cast<const IBuffer &>(static_cast<const D &>(*this))->put_Length(value));
}

template <typename D> Windows::Storage::Streams::Buffer impl_IBufferStatics<D>::CreateCopyFromMemoryBuffer(const Windows::Foundation::IMemoryBuffer & input) const
{
    Windows::Storage::Streams::Buffer value { nullptr };
    check_hresult(static_cast<const IBufferStatics &>(static_cast<const D &>(*this))->abi_CreateCopyFromMemoryBuffer(get(input), put(value)));
    return value;
}

template <typename D> Windows::Foundation::MemoryBuffer impl_IBufferStatics<D>::CreateMemoryBufferOverIBuffer(const Windows::Storage::Streams::IBuffer & input) const
{
    Windows::Foundation::MemoryBuffer value { nullptr };
    check_hresult(static_cast<const IBufferStatics &>(static_cast<const D &>(*this))->abi_CreateMemoryBufferOverIBuffer(get(input), put(value)));
    return value;
}

template <typename D> hstring impl_IContentTypeProvider<D>::ContentType() const
{
    hstring value;
    check_hresult(static_cast<const IContentTypeProvider &>(static_cast<const D &>(*this))->get_ContentType(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> impl_IInputStreamReference<D>::OpenSequentialReadAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> operation;
    check_hresult(static_cast<const IInputStreamReference &>(static_cast<const D &>(*this))->abi_OpenSequentialReadAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference impl_IRandomAccessStreamReferenceStatics<D>::CreateFromFile(const Windows::Storage::IStorageFile & file) const
{
    Windows::Storage::Streams::RandomAccessStreamReference streamReference { nullptr };
    check_hresult(static_cast<const IRandomAccessStreamReferenceStatics &>(static_cast<const D &>(*this))->abi_CreateFromFile(get(file), put(streamReference)));
    return streamReference;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference impl_IRandomAccessStreamReferenceStatics<D>::CreateFromUri(const Windows::Foundation::Uri & uri) const
{
    Windows::Storage::Streams::RandomAccessStreamReference streamReference { nullptr };
    check_hresult(static_cast<const IRandomAccessStreamReferenceStatics &>(static_cast<const D &>(*this))->abi_CreateFromUri(get(uri), put(streamReference)));
    return streamReference;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference impl_IRandomAccessStreamReferenceStatics<D>::CreateFromStream(const Windows::Storage::Streams::IRandomAccessStream & stream) const
{
    Windows::Storage::Streams::RandomAccessStreamReference streamReference { nullptr };
    check_hresult(static_cast<const IRandomAccessStreamReferenceStatics &>(static_cast<const D &>(*this))->abi_CreateFromStream(get(stream), put(streamReference)));
    return streamReference;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint32_t> impl_IInputStream<D>::ReadAsync(const Windows::Storage::Streams::IBuffer & buffer, uint32_t count, Windows::Storage::Streams::InputStreamOptions options) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint32_t> operation;
    check_hresult(static_cast<const IInputStream &>(static_cast<const D &>(*this))->abi_ReadAsync(get(buffer), count, options, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> impl_IOutputStream<D>::WriteAsync(const Windows::Storage::Streams::IBuffer & buffer) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> operation;
    check_hresult(static_cast<const IOutputStream &>(static_cast<const D &>(*this))->abi_WriteAsync(get(buffer), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IOutputStream<D>::FlushAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IOutputStream &>(static_cast<const D &>(*this))->abi_FlushAsync(put(operation)));
    return operation;
}

template <typename D> uint64_t impl_IRandomAccessStream<D>::Size() const
{
    uint64_t value {};
    check_hresult(static_cast<const IRandomAccessStream &>(static_cast<const D &>(*this))->get_Size(&value));
    return value;
}

template <typename D> void impl_IRandomAccessStream<D>::Size(uint64_t value) const
{
    check_hresult(static_cast<const IRandomAccessStream &>(static_cast<const D &>(*this))->put_Size(value));
}

template <typename D> Windows::Storage::Streams::IInputStream impl_IRandomAccessStream<D>::GetInputStreamAt(uint64_t position) const
{
    Windows::Storage::Streams::IInputStream stream;
    check_hresult(static_cast<const IRandomAccessStream &>(static_cast<const D &>(*this))->abi_GetInputStreamAt(position, put(stream)));
    return stream;
}

template <typename D> Windows::Storage::Streams::IOutputStream impl_IRandomAccessStream<D>::GetOutputStreamAt(uint64_t position) const
{
    Windows::Storage::Streams::IOutputStream stream;
    check_hresult(static_cast<const IRandomAccessStream &>(static_cast<const D &>(*this))->abi_GetOutputStreamAt(position, put(stream)));
    return stream;
}

template <typename D> uint64_t impl_IRandomAccessStream<D>::Position() const
{
    uint64_t value {};
    check_hresult(static_cast<const IRandomAccessStream &>(static_cast<const D &>(*this))->get_Position(&value));
    return value;
}

template <typename D> void impl_IRandomAccessStream<D>::Seek(uint64_t position) const
{
    check_hresult(static_cast<const IRandomAccessStream &>(static_cast<const D &>(*this))->abi_Seek(position));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream impl_IRandomAccessStream<D>::CloneStream() const
{
    Windows::Storage::Streams::IRandomAccessStream stream;
    check_hresult(static_cast<const IRandomAccessStream &>(static_cast<const D &>(*this))->abi_CloneStream(put(stream)));
    return stream;
}

template <typename D> bool impl_IRandomAccessStream<D>::CanRead() const
{
    bool value {};
    check_hresult(static_cast<const IRandomAccessStream &>(static_cast<const D &>(*this))->get_CanRead(&value));
    return value;
}

template <typename D> bool impl_IRandomAccessStream<D>::CanWrite() const
{
    bool value {};
    check_hresult(static_cast<const IRandomAccessStream &>(static_cast<const D &>(*this))->get_CanWrite(&value));
    return value;
}

inline Buffer::Buffer(uint32_t capacity) :
    Buffer(get_activation_factory<Buffer, IBufferFactory>().Create(capacity))
{}

inline Windows::Storage::Streams::Buffer Buffer::CreateCopyFromMemoryBuffer(const Windows::Foundation::IMemoryBuffer & input)
{
    return get_activation_factory<Buffer, IBufferStatics>().CreateCopyFromMemoryBuffer(input);
}

inline Windows::Foundation::MemoryBuffer Buffer::CreateMemoryBufferOverIBuffer(const Windows::Storage::Streams::IBuffer & input)
{
    return get_activation_factory<Buffer, IBufferStatics>().CreateMemoryBufferOverIBuffer(input);
}

inline DataReader::DataReader(const Windows::Storage::Streams::IInputStream & inputStream) :
    DataReader(get_activation_factory<DataReader, IDataReaderFactory>().CreateDataReader(inputStream))
{}

inline Windows::Storage::Streams::DataReader DataReader::FromBuffer(const Windows::Storage::Streams::IBuffer & buffer)
{
    return get_activation_factory<DataReader, IDataReaderStatics>().FromBuffer(buffer);
}

inline DataWriter::DataWriter() :
    DataWriter(activate_instance<DataWriter>())
{}

inline DataWriter::DataWriter(const Windows::Storage::Streams::IOutputStream & outputStream) :
    DataWriter(get_activation_factory<DataWriter, IDataWriterFactory>().CreateDataWriter(outputStream))
{}

inline InMemoryRandomAccessStream::InMemoryRandomAccessStream() :
    InMemoryRandomAccessStream(activate_instance<InMemoryRandomAccessStream>())
{}

inline Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> RandomAccessStream::CopyAsync(const Windows::Storage::Streams::IInputStream & source, const Windows::Storage::Streams::IOutputStream & destination)
{
    return get_activation_factory<RandomAccessStream, IRandomAccessStreamStatics>().CopyAsync(source, destination);
}

inline Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> RandomAccessStream::CopyAsync(const Windows::Storage::Streams::IInputStream & source, const Windows::Storage::Streams::IOutputStream & destination, uint64_t bytesToCopy)
{
    return get_activation_factory<RandomAccessStream, IRandomAccessStreamStatics>().CopyAsync(source, destination, bytesToCopy);
}

inline Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> RandomAccessStream::CopyAndCloseAsync(const Windows::Storage::Streams::IInputStream & source, const Windows::Storage::Streams::IOutputStream & destination)
{
    return get_activation_factory<RandomAccessStream, IRandomAccessStreamStatics>().CopyAndCloseAsync(source, destination);
}

inline Windows::Storage::Streams::RandomAccessStreamReference RandomAccessStreamReference::CreateFromFile(const Windows::Storage::IStorageFile & file)
{
    return get_activation_factory<RandomAccessStreamReference, IRandomAccessStreamReferenceStatics>().CreateFromFile(file);
}

inline Windows::Storage::Streams::RandomAccessStreamReference RandomAccessStreamReference::CreateFromUri(const Windows::Foundation::Uri & uri)
{
    return get_activation_factory<RandomAccessStreamReference, IRandomAccessStreamReferenceStatics>().CreateFromUri(uri);
}

inline Windows::Storage::Streams::RandomAccessStreamReference RandomAccessStreamReference::CreateFromStream(const Windows::Storage::Streams::IRandomAccessStream & stream)
{
    return get_activation_factory<RandomAccessStreamReference, IRandomAccessStreamReferenceStatics>().CreateFromStream(stream);
}

}

}
