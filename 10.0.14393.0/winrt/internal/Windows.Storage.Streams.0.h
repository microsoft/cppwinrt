// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Storage::Streams {

struct IBuffer;
struct IBufferFactory;
struct IBufferStatics;
struct IContentTypeProvider;
struct IDataReader;
struct IDataReaderFactory;
struct IDataReaderStatics;
struct IDataWriter;
struct IDataWriterFactory;
struct IInputStream;
struct IInputStreamReference;
struct IOutputStream;
struct IRandomAccessStream;
struct IRandomAccessStreamReference;
struct IRandomAccessStreamReferenceStatics;
struct IRandomAccessStreamStatics;
struct IRandomAccessStreamWithContentType;
struct Buffer;
struct DataReader;
struct DataReaderLoadOperation;
struct DataWriter;
struct DataWriterStoreOperation;
struct FileInputStream;
struct FileOutputStream;
struct FileRandomAccessStream;
struct InMemoryRandomAccessStream;
struct InputStreamOverStream;
struct OutputStreamOverStream;
struct RandomAccessStreamOverStream;
struct RandomAccessStreamReference;

}

namespace Windows::Storage::Streams {

struct IBuffer;
struct IBufferFactory;
struct IBufferStatics;
struct IContentTypeProvider;
struct IDataReader;
struct IDataReaderFactory;
struct IDataReaderStatics;
struct IDataWriter;
struct IDataWriterFactory;
struct IInputStream;
struct IInputStreamReference;
struct IOutputStream;
struct IRandomAccessStream;
struct IRandomAccessStreamReference;
struct IRandomAccessStreamReferenceStatics;
struct IRandomAccessStreamStatics;
struct IRandomAccessStreamWithContentType;
struct Buffer;
struct DataReader;
struct DataReaderLoadOperation;
struct DataWriter;
struct DataWriterStoreOperation;
struct FileInputStream;
struct FileOutputStream;
struct FileRandomAccessStream;
struct InMemoryRandomAccessStream;
struct InputStreamOverStream;
struct OutputStreamOverStream;
struct RandomAccessStream;
struct RandomAccessStreamOverStream;
struct RandomAccessStreamReference;

}

namespace Windows::Storage::Streams {

enum class ByteOrder
{
    LittleEndian = 0,
    BigEndian = 1,
};

enum class InputStreamOptions : unsigned
{
    None = 0x0,
    Partial = 0x1,
    ReadAhead = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(InputStreamOptions)

enum class UnicodeEncoding
{
    Utf8 = 0,
    Utf16LE = 1,
    Utf16BE = 2,
};

}

}
