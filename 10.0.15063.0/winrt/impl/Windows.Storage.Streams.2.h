// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct WINRT_EBO Buffer :
    Windows::Storage::Streams::IBuffer
{
    Buffer(std::nullptr_t) noexcept {}
    Buffer(uint32_t capacity);
    static Windows::Storage::Streams::Buffer CreateCopyFromMemoryBuffer(Windows::Foundation::IMemoryBuffer const& input);
    static Windows::Foundation::MemoryBuffer CreateMemoryBufferOverIBuffer(Windows::Storage::Streams::IBuffer const& input);
};

struct WINRT_EBO DataReader :
    Windows::Storage::Streams::IDataReader,
    impl::require<DataReader, Windows::Foundation::IClosable>
{
    DataReader(std::nullptr_t) noexcept {}
    DataReader(Windows::Storage::Streams::IInputStream const& inputStream);
    static Windows::Storage::Streams::DataReader FromBuffer(Windows::Storage::Streams::IBuffer const& buffer);
};

struct WINRT_EBO DataReaderLoadOperation :
    Windows::Foundation::IAsyncOperation<uint32_t>
{
    DataReaderLoadOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DataWriter :
    Windows::Storage::Streams::IDataWriter,
    impl::require<DataWriter, Windows::Foundation::IClosable>
{
    DataWriter(std::nullptr_t) noexcept {}
    DataWriter();
    DataWriter(Windows::Storage::Streams::IOutputStream const& outputStream);
};

struct WINRT_EBO DataWriterStoreOperation :
    Windows::Foundation::IAsyncOperation<uint32_t>
{
    DataWriterStoreOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FileInputStream :
    Windows::Storage::Streams::IInputStream
{
    FileInputStream(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FileOutputStream :
    Windows::Storage::Streams::IOutputStream
{
    FileOutputStream(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FileRandomAccessStream :
    Windows::Storage::Streams::IRandomAccessStream
{
    FileRandomAccessStream(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InMemoryRandomAccessStream :
    Windows::Storage::Streams::IRandomAccessStream
{
    InMemoryRandomAccessStream(std::nullptr_t) noexcept {}
    InMemoryRandomAccessStream();
};

struct WINRT_EBO InputStreamOverStream :
    Windows::Storage::Streams::IInputStream
{
    InputStreamOverStream(std::nullptr_t) noexcept {}
};

struct WINRT_EBO OutputStreamOverStream :
    Windows::Storage::Streams::IOutputStream
{
    OutputStreamOverStream(std::nullptr_t) noexcept {}
};

struct RandomAccessStream
{
    RandomAccessStream() = delete;
    static Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> CopyAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination);
    static Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> CopyAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination, uint64_t bytesToCopy);
    static Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> CopyAndCloseAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination);
};

struct WINRT_EBO RandomAccessStreamOverStream :
    Windows::Storage::Streams::IRandomAccessStream
{
    RandomAccessStreamOverStream(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RandomAccessStreamReference :
    Windows::Storage::Streams::IRandomAccessStreamReference
{
    RandomAccessStreamReference(std::nullptr_t) noexcept {}
    static Windows::Storage::Streams::RandomAccessStreamReference CreateFromFile(Windows::Storage::IStorageFile const& file);
    static Windows::Storage::Streams::RandomAccessStreamReference CreateFromUri(Windows::Foundation::Uri const& uri);
    static Windows::Storage::Streams::RandomAccessStreamReference CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream);
};

}
