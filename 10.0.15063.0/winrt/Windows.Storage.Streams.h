// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/Windows.Storage.h"

namespace winrt::impl {

template <typename D> uint32_t consume_Windows_Storage_Streams_IBuffer<D>::Capacity() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IBuffer)->get_Capacity(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Storage_Streams_IBuffer<D>::Length() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IBuffer)->get_Length(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_Streams_IBuffer<D>::Length(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IBuffer)->put_Length(value));
}

template <typename D> Windows::Storage::Streams::Buffer consume_Windows_Storage_Streams_IBufferFactory<D>::Create(uint32_t capacity) const
{
    Windows::Storage::Streams::Buffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IBufferFactory)->Create(capacity, put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::Buffer consume_Windows_Storage_Streams_IBufferStatics<D>::CreateCopyFromMemoryBuffer(Windows::Foundation::IMemoryBuffer const& input) const
{
    Windows::Storage::Streams::Buffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IBufferStatics)->CreateCopyFromMemoryBuffer(get_abi(input), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::MemoryBuffer consume_Windows_Storage_Streams_IBufferStatics<D>::CreateMemoryBufferOverIBuffer(Windows::Storage::Streams::IBuffer const& input) const
{
    Windows::Foundation::MemoryBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IBufferStatics)->CreateMemoryBufferOverIBuffer(get_abi(input), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_Streams_IContentTypeProvider<D>::ContentType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IContentTypeProvider)->get_ContentType(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Storage_Streams_IDataReader<D>::UnconsumedBufferLength() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->get_UnconsumedBufferLength(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::UnicodeEncoding consume_Windows_Storage_Streams_IDataReader<D>::UnicodeEncoding() const
{
    Windows::Storage::Streams::UnicodeEncoding value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->get_UnicodeEncoding(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Streams_IDataReader<D>::UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->put_UnicodeEncoding(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::ByteOrder consume_Windows_Storage_Streams_IDataReader<D>::ByteOrder() const
{
    Windows::Storage::Streams::ByteOrder value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->get_ByteOrder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Streams_IDataReader<D>::ByteOrder(Windows::Storage::Streams::ByteOrder const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->put_ByteOrder(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::InputStreamOptions consume_Windows_Storage_Streams_IDataReader<D>::InputStreamOptions() const
{
    Windows::Storage::Streams::InputStreamOptions value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->get_InputStreamOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Streams_IDataReader<D>::InputStreamOptions(Windows::Storage::Streams::InputStreamOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->put_InputStreamOptions(get_abi(value)));
}

template <typename D> uint8_t consume_Windows_Storage_Streams_IDataReader<D>::ReadByte() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadByte(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_Streams_IDataReader<D>::ReadBytes(array_view<uint8_t> value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadBytes(value.size(), get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Storage_Streams_IDataReader<D>::ReadBuffer(uint32_t length) const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadBuffer(length, put_abi(buffer)));
    return buffer;
}

template <typename D> bool consume_Windows_Storage_Streams_IDataReader<D>::ReadBoolean() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadBoolean(&value));
    return value;
}

template <typename D> GUID consume_Windows_Storage_Streams_IDataReader<D>::ReadGuid() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadGuid(put_abi(value)));
    return value;
}

template <typename D> int16_t consume_Windows_Storage_Streams_IDataReader<D>::ReadInt16() const
{
    int16_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadInt16(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Storage_Streams_IDataReader<D>::ReadInt32() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadInt32(&value));
    return value;
}

template <typename D> int64_t consume_Windows_Storage_Streams_IDataReader<D>::ReadInt64() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadInt64(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Storage_Streams_IDataReader<D>::ReadUInt16() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadUInt16(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Storage_Streams_IDataReader<D>::ReadUInt32() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadUInt32(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Storage_Streams_IDataReader<D>::ReadUInt64() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadUInt64(&value));
    return value;
}

template <typename D> float consume_Windows_Storage_Streams_IDataReader<D>::ReadSingle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadSingle(&value));
    return value;
}

template <typename D> double consume_Windows_Storage_Streams_IDataReader<D>::ReadDouble() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadDouble(&value));
    return value;
}

template <typename D> hstring consume_Windows_Storage_Streams_IDataReader<D>::ReadString(uint32_t codeUnitCount) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadString(codeUnitCount, put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Storage_Streams_IDataReader<D>::ReadDateTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadDateTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Storage_Streams_IDataReader<D>::ReadTimeSpan() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->ReadTimeSpan(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::DataReaderLoadOperation consume_Windows_Storage_Streams_IDataReader<D>::LoadAsync(uint32_t count) const
{
    Windows::Storage::Streams::DataReaderLoadOperation operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->LoadAsync(count, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Storage_Streams_IDataReader<D>::DetachBuffer() const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->DetachBuffer(put_abi(buffer)));
    return buffer;
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Storage_Streams_IDataReader<D>::DetachStream() const
{
    Windows::Storage::Streams::IInputStream stream{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReader)->DetachStream(put_abi(stream)));
    return stream;
}

template <typename D> Windows::Storage::Streams::DataReader consume_Windows_Storage_Streams_IDataReaderFactory<D>::CreateDataReader(Windows::Storage::Streams::IInputStream const& inputStream) const
{
    Windows::Storage::Streams::DataReader dataReader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReaderFactory)->CreateDataReader(get_abi(inputStream), put_abi(dataReader)));
    return dataReader;
}

template <typename D> Windows::Storage::Streams::DataReader consume_Windows_Storage_Streams_IDataReaderStatics<D>::FromBuffer(Windows::Storage::Streams::IBuffer const& buffer) const
{
    Windows::Storage::Streams::DataReader dataReader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataReaderStatics)->FromBuffer(get_abi(buffer), put_abi(dataReader)));
    return dataReader;
}

template <typename D> uint32_t consume_Windows_Storage_Streams_IDataWriter<D>::UnstoredBufferLength() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->get_UnstoredBufferLength(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::UnicodeEncoding consume_Windows_Storage_Streams_IDataWriter<D>::UnicodeEncoding() const
{
    Windows::Storage::Streams::UnicodeEncoding value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->get_UnicodeEncoding(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->put_UnicodeEncoding(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::ByteOrder consume_Windows_Storage_Streams_IDataWriter<D>::ByteOrder() const
{
    Windows::Storage::Streams::ByteOrder value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->get_ByteOrder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::ByteOrder(Windows::Storage::Streams::ByteOrder const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->put_ByteOrder(get_abi(value)));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteByte(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteByte(value));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteBytes(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteBytes(value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteBuffer(Windows::Storage::Streams::IBuffer const& buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteBuffer(get_abi(buffer)));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteBuffer(Windows::Storage::Streams::IBuffer const& buffer, uint32_t start, uint32_t count) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteBufferRange(get_abi(buffer), start, count));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteBoolean(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteBoolean(value));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteGuid(GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteGuid(get_abi(value)));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteInt16(int16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteInt16(value));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteInt32(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteInt32(value));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteInt64(int64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteInt64(value));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteUInt16(uint16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteUInt16(value));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteUInt32(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteUInt32(value));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteUInt64(uint64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteUInt64(value));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteSingle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteSingle(value));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteDouble(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteDouble(value));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteDateTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteDateTime(get_abi(value)));
}

template <typename D> void consume_Windows_Storage_Streams_IDataWriter<D>::WriteTimeSpan(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteTimeSpan(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Storage_Streams_IDataWriter<D>::WriteString(param::hstring const& value) const
{
    uint32_t codeUnitCount{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->WriteString(get_abi(value), &codeUnitCount));
    return codeUnitCount;
}

template <typename D> uint32_t consume_Windows_Storage_Streams_IDataWriter<D>::MeasureString(param::hstring const& value) const
{
    uint32_t codeUnitCount{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->MeasureString(get_abi(value), &codeUnitCount));
    return codeUnitCount;
}

template <typename D> Windows::Storage::Streams::DataWriterStoreOperation consume_Windows_Storage_Streams_IDataWriter<D>::StoreAsync() const
{
    Windows::Storage::Streams::DataWriterStoreOperation operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->StoreAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Storage_Streams_IDataWriter<D>::FlushAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->FlushAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Storage_Streams_IDataWriter<D>::DetachBuffer() const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->DetachBuffer(put_abi(buffer)));
    return buffer;
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Storage_Streams_IDataWriter<D>::DetachStream() const
{
    Windows::Storage::Streams::IOutputStream outputStream{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriter)->DetachStream(put_abi(outputStream)));
    return outputStream;
}

template <typename D> Windows::Storage::Streams::DataWriter consume_Windows_Storage_Streams_IDataWriterFactory<D>::CreateDataWriter(Windows::Storage::Streams::IOutputStream const& outputStream) const
{
    Windows::Storage::Streams::DataWriter dataWriter{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IDataWriterFactory)->CreateDataWriter(get_abi(outputStream), put_abi(dataWriter)));
    return dataWriter;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint32_t> consume_Windows_Storage_Streams_IInputStream<D>::ReadAsync(Windows::Storage::Streams::IBuffer const& buffer, uint32_t count, Windows::Storage::Streams::InputStreamOptions const& options) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IInputStream)->ReadAsync(get_abi(buffer), count, get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> consume_Windows_Storage_Streams_IInputStreamReference<D>::OpenSequentialReadAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IInputStreamReference)->OpenSequentialReadAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> consume_Windows_Storage_Streams_IOutputStream<D>::WriteAsync(Windows::Storage::Streams::IBuffer const& buffer) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IOutputStream)->WriteAsync(get_abi(buffer), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Storage_Streams_IOutputStream<D>::FlushAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IOutputStream)->FlushAsync(put_abi(operation)));
    return operation;
}

template <typename D> uint64_t consume_Windows_Storage_Streams_IRandomAccessStream<D>::Size() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStream)->get_Size(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_Streams_IRandomAccessStream<D>::Size(uint64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStream)->put_Size(value));
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Storage_Streams_IRandomAccessStream<D>::GetInputStreamAt(uint64_t position) const
{
    Windows::Storage::Streams::IInputStream stream{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStream)->GetInputStreamAt(position, put_abi(stream)));
    return stream;
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Storage_Streams_IRandomAccessStream<D>::GetOutputStreamAt(uint64_t position) const
{
    Windows::Storage::Streams::IOutputStream stream{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStream)->GetOutputStreamAt(position, put_abi(stream)));
    return stream;
}

template <typename D> uint64_t consume_Windows_Storage_Streams_IRandomAccessStream<D>::Position() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStream)->get_Position(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_Streams_IRandomAccessStream<D>::Seek(uint64_t position) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStream)->Seek(position));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_Storage_Streams_IRandomAccessStream<D>::CloneStream() const
{
    Windows::Storage::Streams::IRandomAccessStream stream{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStream)->CloneStream(put_abi(stream)));
    return stream;
}

template <typename D> bool consume_Windows_Storage_Streams_IRandomAccessStream<D>::CanRead() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStream)->get_CanRead(&value));
    return value;
}

template <typename D> bool consume_Windows_Storage_Streams_IRandomAccessStream<D>::CanWrite() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStream)->get_CanWrite(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> consume_Windows_Storage_Streams_IRandomAccessStreamReference<D>::OpenReadAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStreamReference)->OpenReadAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics<D>::CreateFromFile(Windows::Storage::IStorageFile const& file) const
{
    Windows::Storage::Streams::RandomAccessStreamReference streamReference{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStreamReferenceStatics)->CreateFromFile(get_abi(file), put_abi(streamReference)));
    return streamReference;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics<D>::CreateFromUri(Windows::Foundation::Uri const& uri) const
{
    Windows::Storage::Streams::RandomAccessStreamReference streamReference{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStreamReferenceStatics)->CreateFromUri(get_abi(uri), put_abi(streamReference)));
    return streamReference;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics<D>::CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Storage::Streams::RandomAccessStreamReference streamReference{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStreamReferenceStatics)->CreateFromStream(get_abi(stream), put_abi(streamReference)));
    return streamReference;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> consume_Windows_Storage_Streams_IRandomAccessStreamStatics<D>::CopyAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStreamStatics)->CopyAsync(get_abi(source), get_abi(destination), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> consume_Windows_Storage_Streams_IRandomAccessStreamStatics<D>::CopyAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination, uint64_t bytesToCopy) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStreamStatics)->CopySizeAsync(get_abi(source), get_abi(destination), bytesToCopy, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> consume_Windows_Storage_Streams_IRandomAccessStreamStatics<D>::CopyAndCloseAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Streams::IRandomAccessStreamStatics)->CopyAndCloseAsync(get_abi(source), get_abi(destination), put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Storage::Streams::IBuffer> : produce_base<D, Windows::Storage::Streams::IBuffer>
{
    HRESULT __stdcall get_Capacity(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Capacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Length());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall Create(uint32_t capacity, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(capacity));
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
    HRESULT __stdcall CreateCopyFromMemoryBuffer(::IUnknown* input, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateCopyFromMemoryBuffer(*reinterpret_cast<Windows::Foundation::IMemoryBuffer const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateMemoryBufferOverIBuffer(::IUnknown* input, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateMemoryBufferOverIBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&input)));
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
    HRESULT __stdcall get_ContentType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentType());
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
    HRESULT __stdcall get_UnconsumedBufferLength(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnconsumedBufferLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnicodeEncoding(abi_t<Windows::Storage::Streams::UnicodeEncoding>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnicodeEncoding());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UnicodeEncoding(abi_t<Windows::Storage::Streams::UnicodeEncoding> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnicodeEncoding(*reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ByteOrder(abi_t<Windows::Storage::Streams::ByteOrder>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ByteOrder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ByteOrder(abi_t<Windows::Storage::Streams::ByteOrder> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ByteOrder(*reinterpret_cast<Windows::Storage::Streams::ByteOrder const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputStreamOptions(abi_t<Windows::Storage::Streams::InputStreamOptions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InputStreamOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InputStreamOptions(abi_t<Windows::Storage::Streams::InputStreamOptions> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InputStreamOptions(*reinterpret_cast<Windows::Storage::Streams::InputStreamOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadByte(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadByte());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadBytes(uint32_t __valueSize, uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadBytes(array_view<uint8_t>(reinterpret_cast<uint8_t*>(value), reinterpret_cast<uint8_t*>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadBuffer(uint32_t length, ::IUnknown** buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *buffer = detach_abi(this->shim().ReadBuffer(length));
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadBoolean(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadBoolean());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadGuid(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadGuid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadInt16(int16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadInt16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadInt32(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadInt32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadInt64(int64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadInt64());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadUInt16(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadUInt16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadUInt32(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadUInt32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadUInt64(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadUInt64());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadSingle(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadSingle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadDouble(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadDouble());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadString(uint32_t codeUnitCount, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadString(codeUnitCount));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadDateTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadDateTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadTimeSpan(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadTimeSpan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsync(uint32_t count, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LoadAsync(count));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DetachBuffer(::IUnknown** buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *buffer = detach_abi(this->shim().DetachBuffer());
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
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
struct produce<D, Windows::Storage::Streams::IDataReaderFactory> : produce_base<D, Windows::Storage::Streams::IDataReaderFactory>
{
    HRESULT __stdcall CreateDataReader(::IUnknown* inputStream, ::IUnknown** dataReader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *dataReader = detach_abi(this->shim().CreateDataReader(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&inputStream)));
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
    HRESULT __stdcall FromBuffer(::IUnknown* buffer, ::IUnknown** dataReader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *dataReader = detach_abi(this->shim().FromBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
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
    HRESULT __stdcall get_UnstoredBufferLength(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnstoredBufferLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnicodeEncoding(abi_t<Windows::Storage::Streams::UnicodeEncoding>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnicodeEncoding());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UnicodeEncoding(abi_t<Windows::Storage::Streams::UnicodeEncoding> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnicodeEncoding(*reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ByteOrder(abi_t<Windows::Storage::Streams::ByteOrder>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ByteOrder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ByteOrder(abi_t<Windows::Storage::Streams::ByteOrder> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ByteOrder(*reinterpret_cast<Windows::Storage::Streams::ByteOrder const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteByte(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteByte(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteBytes(uint32_t __valueSize, uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteBytes(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteBuffer(::IUnknown* buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteBufferRange(::IUnknown* buffer, uint32_t start, uint32_t count) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer), start, count);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteBoolean(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteBoolean(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteGuid(abi_t<GUID> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteGuid(*reinterpret_cast<GUID const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteInt16(int16_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteInt16(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteInt32(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteInt32(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteInt64(int64_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteInt64(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteUInt16(uint16_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteUInt16(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteUInt32(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteUInt32(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteUInt64(uint64_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteUInt64(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteSingle(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteSingle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteDouble(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteDouble(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteDateTime(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteDateTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteTimeSpan(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteTimeSpan(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteString(HSTRING value, uint32_t* codeUnitCount) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *codeUnitCount = detach_abi(this->shim().WriteString(*reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MeasureString(HSTRING value, uint32_t* codeUnitCount) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *codeUnitCount = detach_abi(this->shim().MeasureString(*reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StoreAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StoreAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FlushAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FlushAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DetachBuffer(::IUnknown** buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *buffer = detach_abi(this->shim().DetachBuffer());
            return S_OK;
        }
        catch (...)
        {
            *buffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DetachStream(::IUnknown** outputStream) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *outputStream = detach_abi(this->shim().DetachStream());
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
    HRESULT __stdcall CreateDataWriter(::IUnknown* outputStream, ::IUnknown** dataWriter) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *dataWriter = detach_abi(this->shim().CreateDataWriter(*reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&outputStream)));
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
    HRESULT __stdcall ReadAsync(::IUnknown* buffer, uint32_t count, abi_t<Windows::Storage::Streams::InputStreamOptions> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ReadAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer), count, *reinterpret_cast<Windows::Storage::Streams::InputStreamOptions const*>(&options)));
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
    HRESULT __stdcall OpenSequentialReadAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().OpenSequentialReadAsync());
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
    HRESULT __stdcall WriteAsync(::IUnknown* buffer, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FlushAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FlushAsync());
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
    HRESULT __stdcall get_Size(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Size(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInputStreamAt(uint64_t position, ::IUnknown** stream) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *stream = detach_abi(this->shim().GetInputStreamAt(position));
            return S_OK;
        }
        catch (...)
        {
            *stream = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetOutputStreamAt(uint64_t position, ::IUnknown** stream) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *stream = detach_abi(this->shim().GetOutputStreamAt(position));
            return S_OK;
        }
        catch (...)
        {
            *stream = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Seek(uint64_t position) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Seek(position);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CloneStream(::IUnknown** stream) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *stream = detach_abi(this->shim().CloneStream());
            return S_OK;
        }
        catch (...)
        {
            *stream = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanRead(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanRead());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanWrite(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanWrite());
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
    HRESULT __stdcall OpenReadAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().OpenReadAsync());
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
    HRESULT __stdcall CreateFromFile(::IUnknown* file, ::IUnknown** streamReference) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *streamReference = detach_abi(this->shim().CreateFromFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *streamReference = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromUri(::IUnknown* uri, ::IUnknown** streamReference) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *streamReference = detach_abi(this->shim().CreateFromUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *streamReference = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromStream(::IUnknown* stream, ::IUnknown** streamReference) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *streamReference = detach_abi(this->shim().CreateFromStream(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
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
    HRESULT __stdcall CopyAsync(::IUnknown* source, ::IUnknown* destination, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CopyAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&source), *reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&destination)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopySizeAsync(::IUnknown* source, ::IUnknown* destination, uint64_t bytesToCopy, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CopyAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&source), *reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&destination), bytesToCopy));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopyAndCloseAsync(::IUnknown* source, ::IUnknown* destination, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CopyAndCloseAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&source), *reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&destination)));
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

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

inline Buffer::Buffer(uint32_t capacity) :
    Buffer(get_activation_factory<Buffer, Windows::Storage::Streams::IBufferFactory>().Create(capacity))
{}

inline Windows::Storage::Streams::Buffer Buffer::CreateCopyFromMemoryBuffer(Windows::Foundation::IMemoryBuffer const& input)
{
    return get_activation_factory<Buffer, Windows::Storage::Streams::IBufferStatics>().CreateCopyFromMemoryBuffer(input);
}

inline Windows::Foundation::MemoryBuffer Buffer::CreateMemoryBufferOverIBuffer(Windows::Storage::Streams::IBuffer const& input)
{
    return get_activation_factory<Buffer, Windows::Storage::Streams::IBufferStatics>().CreateMemoryBufferOverIBuffer(input);
}

inline DataReader::DataReader(Windows::Storage::Streams::IInputStream const& inputStream) :
    DataReader(get_activation_factory<DataReader, Windows::Storage::Streams::IDataReaderFactory>().CreateDataReader(inputStream))
{}

inline Windows::Storage::Streams::DataReader DataReader::FromBuffer(Windows::Storage::Streams::IBuffer const& buffer)
{
    return get_activation_factory<DataReader, Windows::Storage::Streams::IDataReaderStatics>().FromBuffer(buffer);
}

inline DataWriter::DataWriter() :
    DataWriter(activate_instance<DataWriter>())
{}

inline DataWriter::DataWriter(Windows::Storage::Streams::IOutputStream const& outputStream) :
    DataWriter(get_activation_factory<DataWriter, Windows::Storage::Streams::IDataWriterFactory>().CreateDataWriter(outputStream))
{}

inline InMemoryRandomAccessStream::InMemoryRandomAccessStream() :
    InMemoryRandomAccessStream(activate_instance<InMemoryRandomAccessStream>())
{}

inline Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> RandomAccessStream::CopyAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination)
{
    return get_activation_factory<RandomAccessStream, Windows::Storage::Streams::IRandomAccessStreamStatics>().CopyAsync(source, destination);
}

inline Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> RandomAccessStream::CopyAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination, uint64_t bytesToCopy)
{
    return get_activation_factory<RandomAccessStream, Windows::Storage::Streams::IRandomAccessStreamStatics>().CopyAsync(source, destination, bytesToCopy);
}

inline Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> RandomAccessStream::CopyAndCloseAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination)
{
    return get_activation_factory<RandomAccessStream, Windows::Storage::Streams::IRandomAccessStreamStatics>().CopyAndCloseAsync(source, destination);
}

inline Windows::Storage::Streams::RandomAccessStreamReference RandomAccessStreamReference::CreateFromFile(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<RandomAccessStreamReference, Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>().CreateFromFile(file);
}

inline Windows::Storage::Streams::RandomAccessStreamReference RandomAccessStreamReference::CreateFromUri(Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<RandomAccessStreamReference, Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>().CreateFromUri(uri);
}

inline Windows::Storage::Streams::RandomAccessStreamReference RandomAccessStreamReference::CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream)
{
    return get_activation_factory<RandomAccessStreamReference, Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>().CreateFromStream(stream);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Storage::Streams::IBuffer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IBuffer> {};

template<> struct hash<winrt::Windows::Storage::Streams::IBufferFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IBufferFactory> {};

template<> struct hash<winrt::Windows::Storage::Streams::IBufferStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IBufferStatics> {};

template<> struct hash<winrt::Windows::Storage::Streams::IContentTypeProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IContentTypeProvider> {};

template<> struct hash<winrt::Windows::Storage::Streams::IDataReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IDataReader> {};

template<> struct hash<winrt::Windows::Storage::Streams::IDataReaderFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IDataReaderFactory> {};

template<> struct hash<winrt::Windows::Storage::Streams::IDataReaderStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IDataReaderStatics> {};

template<> struct hash<winrt::Windows::Storage::Streams::IDataWriter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IDataWriter> {};

template<> struct hash<winrt::Windows::Storage::Streams::IDataWriterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IDataWriterFactory> {};

template<> struct hash<winrt::Windows::Storage::Streams::IInputStream> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IInputStream> {};

template<> struct hash<winrt::Windows::Storage::Streams::IInputStreamReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IInputStreamReference> {};

template<> struct hash<winrt::Windows::Storage::Streams::IOutputStream> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IOutputStream> {};

template<> struct hash<winrt::Windows::Storage::Streams::IRandomAccessStream> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IRandomAccessStream> {};

template<> struct hash<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> {};

template<> struct hash<winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics> {};

template<> struct hash<winrt::Windows::Storage::Streams::IRandomAccessStreamStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IRandomAccessStreamStatics> {};

template<> struct hash<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType> {};

template<> struct hash<winrt::Windows::Storage::Streams::Buffer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::Buffer> {};

template<> struct hash<winrt::Windows::Storage::Streams::DataReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::DataReader> {};

template<> struct hash<winrt::Windows::Storage::Streams::DataReaderLoadOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::DataReaderLoadOperation> {};

template<> struct hash<winrt::Windows::Storage::Streams::DataWriter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::DataWriter> {};

template<> struct hash<winrt::Windows::Storage::Streams::DataWriterStoreOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::DataWriterStoreOperation> {};

template<> struct hash<winrt::Windows::Storage::Streams::FileInputStream> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::FileInputStream> {};

template<> struct hash<winrt::Windows::Storage::Streams::FileOutputStream> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::FileOutputStream> {};

template<> struct hash<winrt::Windows::Storage::Streams::FileRandomAccessStream> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::FileRandomAccessStream> {};

template<> struct hash<winrt::Windows::Storage::Streams::InMemoryRandomAccessStream> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::InMemoryRandomAccessStream> {};

template<> struct hash<winrt::Windows::Storage::Streams::InputStreamOverStream> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::InputStreamOverStream> {};

template<> struct hash<winrt::Windows::Storage::Streams::OutputStreamOverStream> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::OutputStreamOverStream> {};

template<> struct hash<winrt::Windows::Storage::Streams::RandomAccessStream> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::RandomAccessStream> {};

template<> struct hash<winrt::Windows::Storage::Streams::RandomAccessStreamOverStream> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::RandomAccessStreamOverStream> {};

template<> struct hash<winrt::Windows::Storage::Streams::RandomAccessStreamReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Streams::RandomAccessStreamReference> {};

}

WINRT_WARNING_POP
