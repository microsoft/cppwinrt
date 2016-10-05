// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif

#ifndef WINRT_GENERIC_c4a57c5e_32b0_55b3_ad13_ce1c23041ed6
#define WINRT_GENERIC_c4a57c5e_32b0_55b3_ad13_ce1c23041ed6
template <> struct __declspec(uuid("c4a57c5e-32b0-55b3-ad13-ce1c23041ed6")) __declspec(novtable) IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> : impl_IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> {};
#endif

#ifndef WINRT_GENERIC_ef60385f_be78_584b_aaef_7829ada2b0de
#define WINRT_GENERIC_ef60385f_be78_584b_aaef_7829ada2b0de
template <> struct __declspec(uuid("ef60385f-be78-584b-aaef-7829ada2b0de")) __declspec(novtable) IAsyncOperation<uint32_t> : impl_IAsyncOperation<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_8f1db6e3_6556_5516_825c_1021ee27cd0c
#define WINRT_GENERIC_8f1db6e3_6556_5516_825c_1021ee27cd0c
template <> struct __declspec(uuid("8f1db6e3-6556-5516-825c-1021ee27cd0c")) __declspec(novtable) IAsyncOperationWithProgress<uint64_t, uint64_t> : impl_IAsyncOperationWithProgress<uint64_t, uint64_t> {};
#endif

#ifndef WINRT_GENERIC_a8fe0732_556d_5841_b7ee_b3450fb52666
#define WINRT_GENERIC_a8fe0732_556d_5841_b7ee_b3450fb52666
template <> struct __declspec(uuid("a8fe0732-556d-5841-b7ee-b3450fb52666")) __declspec(novtable) IAsyncOperation<Windows::Storage::Streams::IInputStream> : impl_IAsyncOperation<Windows::Storage::Streams::IInputStream> {};
#endif

#ifndef WINRT_GENERIC_d26b2819_897f_5c7d_84d6_56d796561431
#define WINRT_GENERIC_d26b2819_897f_5c7d_84d6_56d796561431
template <> struct __declspec(uuid("d26b2819-897f-5c7d-84d6-56d796561431")) __declspec(novtable) IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint32_t> : impl_IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint32_t> {};
#endif

#ifndef WINRT_GENERIC_eccb574a_c684_5572_a679_6b0842cfb57f
#define WINRT_GENERIC_eccb574a_c684_5572_a679_6b0842cfb57f
template <> struct __declspec(uuid("eccb574a-c684-5572-a679-6b0842cfb57f")) __declspec(novtable) IAsyncOperationWithProgress<uint32_t, uint32_t> : impl_IAsyncOperationWithProgress<uint32_t, uint32_t> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif

#ifndef WINRT_GENERIC_3dddecf4_1d39_58e8_83b1_dbed541c7f35
#define WINRT_GENERIC_3dddecf4_1d39_58e8_83b1_dbed541c7f35
template <> struct __declspec(uuid("3dddecf4-1d39-58e8-83b1-dbed541c7f35")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Storage::Streams::IRandomAccessStreamWithContentType> : impl_AsyncOperationCompletedHandler<Windows::Storage::Streams::IRandomAccessStreamWithContentType> {};
#endif

#ifndef WINRT_GENERIC_9343b6e7_e3d2_5e4a_ab2d_2bce4919a6a4
#define WINRT_GENERIC_9343b6e7_e3d2_5e4a_ab2d_2bce4919a6a4
template <> struct __declspec(uuid("9343b6e7-e3d2-5e4a-ab2d-2bce4919a6a4")) __declspec(novtable) AsyncOperationCompletedHandler<uint32_t> : impl_AsyncOperationCompletedHandler<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_ffb2b65d_4120_5d13_826d_107851e6bb1c
#define WINRT_GENERIC_ffb2b65d_4120_5d13_826d_107851e6bb1c
template <> struct __declspec(uuid("ffb2b65d-4120-5d13-826d-107851e6bb1c")) __declspec(novtable) AsyncOperationProgressHandler<uint64_t, uint64_t> : impl_AsyncOperationProgressHandler<uint64_t, uint64_t> {};
#endif

#ifndef WINRT_GENERIC_d2024e41_5500_5b5a_ba46_cb7009596a2f
#define WINRT_GENERIC_d2024e41_5500_5b5a_ba46_cb7009596a2f
template <> struct __declspec(uuid("d2024e41-5500-5b5a-ba46-cb7009596a2f")) __declspec(novtable) AsyncOperationWithProgressCompletedHandler<uint64_t, uint64_t> : impl_AsyncOperationWithProgressCompletedHandler<uint64_t, uint64_t> {};
#endif

#ifndef WINRT_GENERIC_d0bd0125_9049_57a3_bd66_e2525d98c814
#define WINRT_GENERIC_d0bd0125_9049_57a3_bd66_e2525d98c814
template <> struct __declspec(uuid("d0bd0125-9049-57a3-bd66-e2525d98c814")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Storage::Streams::IInputStream> : impl_AsyncOperationCompletedHandler<Windows::Storage::Streams::IInputStream> {};
#endif

#ifndef WINRT_GENERIC_bf666554_7605_5d9a_b14e_18d8c8472afe
#define WINRT_GENERIC_bf666554_7605_5d9a_b14e_18d8c8472afe
template <> struct __declspec(uuid("bf666554-7605-5d9a-b14e-18d8c8472afe")) __declspec(novtable) AsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer, uint32_t> : impl_AsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer, uint32_t> {};
#endif

#ifndef WINRT_GENERIC_06386a7a_e009_5b0b_ab68_a8e48b516647
#define WINRT_GENERIC_06386a7a_e009_5b0b_ab68_a8e48b516647
template <> struct __declspec(uuid("06386a7a-e009-5b0b-ab68-a8e48b516647")) __declspec(novtable) AsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer, uint32_t> : impl_AsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer, uint32_t> {};
#endif

#ifndef WINRT_GENERIC_ea0fe405_d432_5ac7_9ef8_5a65e1f97d7e
#define WINRT_GENERIC_ea0fe405_d432_5ac7_9ef8_5a65e1f97d7e
template <> struct __declspec(uuid("ea0fe405-d432-5ac7-9ef8-5a65e1f97d7e")) __declspec(novtable) AsyncOperationProgressHandler<uint32_t, uint32_t> : impl_AsyncOperationProgressHandler<uint32_t, uint32_t> {};
#endif

#ifndef WINRT_GENERIC_1e466dc5_840f_54f9_b877_5e3a9f4b6c74
#define WINRT_GENERIC_1e466dc5_840f_54f9_b877_5e3a9f4b6c74
template <> struct __declspec(uuid("1e466dc5-840f-54f9-b877-5e3a9f4b6c74")) __declspec(novtable) AsyncOperationWithProgressCompletedHandler<uint32_t, uint32_t> : impl_AsyncOperationWithProgressCompletedHandler<uint32_t, uint32_t> {};
#endif


}

namespace Windows::Storage::Streams {

template <typename D>
struct WINRT_EBO impl_IBuffer
{
    uint32_t Capacity() const;
    uint32_t Length() const;
    void Length(uint32_t value) const;
};

template <typename D>
struct WINRT_EBO impl_IBufferFactory
{
    Windows::Storage::Streams::Buffer Create(uint32_t capacity) const;
};

template <typename D>
struct WINRT_EBO impl_IBufferStatics
{
    Windows::Storage::Streams::Buffer CreateCopyFromMemoryBuffer(const Windows::Foundation::IMemoryBuffer & input) const;
    Windows::Foundation::MemoryBuffer CreateMemoryBufferOverIBuffer(const Windows::Storage::Streams::IBuffer & input) const;
};

template <typename D>
struct WINRT_EBO impl_IContentTypeProvider
{
    hstring ContentType() const;
};

template <typename D>
struct WINRT_EBO impl_IDataReader
{
    uint32_t UnconsumedBufferLength() const;
    Windows::Storage::Streams::UnicodeEncoding UnicodeEncoding() const;
    void UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding value) const;
    Windows::Storage::Streams::ByteOrder ByteOrder() const;
    void ByteOrder(Windows::Storage::Streams::ByteOrder value) const;
    Windows::Storage::Streams::InputStreamOptions InputStreamOptions() const;
    void InputStreamOptions(Windows::Storage::Streams::InputStreamOptions value) const;
    uint8_t ReadByte() const;
    void ReadBytes(array_ref<uint8_t> value) const;
    Windows::Storage::Streams::IBuffer ReadBuffer(uint32_t length) const;
    bool ReadBoolean() const;
    GUID ReadGuid() const;
    int16_t ReadInt16() const;
    int32_t ReadInt32() const;
    int64_t ReadInt64() const;
    uint16_t ReadUInt16() const;
    uint32_t ReadUInt32() const;
    uint64_t ReadUInt64() const;
    float ReadSingle() const;
    double ReadDouble() const;
    hstring ReadString(uint32_t codeUnitCount) const;
    Windows::Foundation::DateTime ReadDateTime() const;
    Windows::Foundation::TimeSpan ReadTimeSpan() const;
    Windows::Storage::Streams::DataReaderLoadOperation LoadAsync(uint32_t count) const;
    Windows::Storage::Streams::IBuffer DetachBuffer() const;
    Windows::Storage::Streams::IInputStream DetachStream() const;
};

template <typename D>
struct WINRT_EBO impl_IDataReaderFactory
{
    Windows::Storage::Streams::DataReader CreateDataReader(const Windows::Storage::Streams::IInputStream & inputStream) const;
};

template <typename D>
struct WINRT_EBO impl_IDataReaderStatics
{
    Windows::Storage::Streams::DataReader FromBuffer(const Windows::Storage::Streams::IBuffer & buffer) const;
};

template <typename D>
struct WINRT_EBO impl_IDataWriter
{
    uint32_t UnstoredBufferLength() const;
    Windows::Storage::Streams::UnicodeEncoding UnicodeEncoding() const;
    void UnicodeEncoding(Windows::Storage::Streams::UnicodeEncoding value) const;
    Windows::Storage::Streams::ByteOrder ByteOrder() const;
    void ByteOrder(Windows::Storage::Streams::ByteOrder value) const;
    void WriteByte(uint8_t value) const;
    void WriteBytes(array_ref<const uint8_t> value) const;
    void WriteBuffer(const Windows::Storage::Streams::IBuffer & buffer) const;
    void WriteBuffer(const Windows::Storage::Streams::IBuffer & buffer, uint32_t start, uint32_t count) const;
    void WriteBoolean(bool value) const;
    void WriteGuid(GUID value) const;
    void WriteInt16(int16_t value) const;
    void WriteInt32(int32_t value) const;
    void WriteInt64(int64_t value) const;
    void WriteUInt16(uint16_t value) const;
    void WriteUInt32(uint32_t value) const;
    void WriteUInt64(uint64_t value) const;
    void WriteSingle(float value) const;
    void WriteDouble(double value) const;
    void WriteDateTime(const Windows::Foundation::DateTime & value) const;
    void WriteTimeSpan(const Windows::Foundation::TimeSpan & value) const;
    uint32_t WriteString(hstring_ref value) const;
    uint32_t MeasureString(hstring_ref value) const;
    Windows::Storage::Streams::DataWriterStoreOperation StoreAsync() const;
    Windows::Foundation::IAsyncOperation<bool> FlushAsync() const;
    Windows::Storage::Streams::IBuffer DetachBuffer() const;
    Windows::Storage::Streams::IOutputStream DetachStream() const;
};

template <typename D>
struct WINRT_EBO impl_IDataWriterFactory
{
    Windows::Storage::Streams::DataWriter CreateDataWriter(const Windows::Storage::Streams::IOutputStream & outputStream) const;
};

template <typename D>
struct WINRT_EBO impl_IInputStream
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint32_t> ReadAsync(const Windows::Storage::Streams::IBuffer & buffer, uint32_t count, Windows::Storage::Streams::InputStreamOptions options) const;
};

template <typename D>
struct WINRT_EBO impl_IInputStreamReference
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> OpenSequentialReadAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IOutputStream
{
    Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> WriteAsync(const Windows::Storage::Streams::IBuffer & buffer) const;
    Windows::Foundation::IAsyncOperation<bool> FlushAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IRandomAccessStream
{
    uint64_t Size() const;
    void Size(uint64_t value) const;
    Windows::Storage::Streams::IInputStream GetInputStreamAt(uint64_t position) const;
    Windows::Storage::Streams::IOutputStream GetOutputStreamAt(uint64_t position) const;
    uint64_t Position() const;
    void Seek(uint64_t position) const;
    Windows::Storage::Streams::IRandomAccessStream CloneStream() const;
    bool CanRead() const;
    bool CanWrite() const;
};

template <typename D>
struct WINRT_EBO impl_IRandomAccessStreamReference
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> OpenReadAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IRandomAccessStreamReferenceStatics
{
    Windows::Storage::Streams::RandomAccessStreamReference CreateFromFile(const Windows::Storage::IStorageFile & file) const;
    Windows::Storage::Streams::RandomAccessStreamReference CreateFromUri(const Windows::Foundation::Uri & uri) const;
    Windows::Storage::Streams::RandomAccessStreamReference CreateFromStream(const Windows::Storage::Streams::IRandomAccessStream & stream) const;
};

template <typename D>
struct WINRT_EBO impl_IRandomAccessStreamStatics
{
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> CopyAsync(const Windows::Storage::Streams::IInputStream & source, const Windows::Storage::Streams::IOutputStream & destination) const;
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> CopyAsync(const Windows::Storage::Streams::IInputStream & source, const Windows::Storage::Streams::IOutputStream & destination, uint64_t bytesToCopy) const;
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> CopyAndCloseAsync(const Windows::Storage::Streams::IInputStream & source, const Windows::Storage::Streams::IOutputStream & destination) const;
};

template <typename D>
struct WINRT_EBO impl_IRandomAccessStreamWithContentType
{
};

struct IBuffer :
    Windows::IInspectable,
    impl::consume<IBuffer>
{
    IBuffer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBuffer>(m_ptr); }
};

struct IBufferFactory :
    Windows::IInspectable,
    impl::consume<IBufferFactory>
{
    IBufferFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBufferFactory>(m_ptr); }
};

struct IBufferStatics :
    Windows::IInspectable,
    impl::consume<IBufferStatics>
{
    IBufferStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBufferStatics>(m_ptr); }
};

struct IContentTypeProvider :
    Windows::IInspectable,
    impl::consume<IContentTypeProvider>
{
    IContentTypeProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContentTypeProvider>(m_ptr); }
};

struct IDataReader :
    Windows::IInspectable,
    impl::consume<IDataReader>
{
    IDataReader(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDataReader>(m_ptr); }
};

struct IDataReaderFactory :
    Windows::IInspectable,
    impl::consume<IDataReaderFactory>
{
    IDataReaderFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDataReaderFactory>(m_ptr); }
};

struct IDataReaderStatics :
    Windows::IInspectable,
    impl::consume<IDataReaderStatics>
{
    IDataReaderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDataReaderStatics>(m_ptr); }
};

struct IDataWriter :
    Windows::IInspectable,
    impl::consume<IDataWriter>
{
    IDataWriter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDataWriter>(m_ptr); }
};

struct IDataWriterFactory :
    Windows::IInspectable,
    impl::consume<IDataWriterFactory>
{
    IDataWriterFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDataWriterFactory>(m_ptr); }
};

struct IInputStream :
    Windows::IInspectable,
    impl::consume<IInputStream>,
    impl::require<IInputStream, Windows::Foundation::IClosable>
{
    IInputStream(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInputStream>(m_ptr); }
};

struct IInputStreamReference :
    Windows::IInspectable,
    impl::consume<IInputStreamReference>
{
    IInputStreamReference(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInputStreamReference>(m_ptr); }
};

struct IOutputStream :
    Windows::IInspectable,
    impl::consume<IOutputStream>,
    impl::require<IOutputStream, Windows::Foundation::IClosable>
{
    IOutputStream(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IOutputStream>(m_ptr); }
};

struct IRandomAccessStream :
    Windows::IInspectable,
    impl::consume<IRandomAccessStream>,
    impl::require<IRandomAccessStream, Windows::Foundation::IClosable, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream>
{
    IRandomAccessStream(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRandomAccessStream>(m_ptr); }
};

struct IRandomAccessStreamReference :
    Windows::IInspectable,
    impl::consume<IRandomAccessStreamReference>
{
    IRandomAccessStreamReference(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRandomAccessStreamReference>(m_ptr); }
};

struct IRandomAccessStreamReferenceStatics :
    Windows::IInspectable,
    impl::consume<IRandomAccessStreamReferenceStatics>
{
    IRandomAccessStreamReferenceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRandomAccessStreamReferenceStatics>(m_ptr); }
};

struct IRandomAccessStreamStatics :
    Windows::IInspectable,
    impl::consume<IRandomAccessStreamStatics>
{
    IRandomAccessStreamStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRandomAccessStreamStatics>(m_ptr); }
};

struct IRandomAccessStreamWithContentType :
    Windows::IInspectable,
    impl::consume<IRandomAccessStreamWithContentType>,
    impl::require<IRandomAccessStreamWithContentType, Windows::Foundation::IClosable, Windows::Storage::Streams::IContentTypeProvider, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream, Windows::Storage::Streams::IRandomAccessStream>
{
    IRandomAccessStreamWithContentType(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRandomAccessStreamWithContentType>(m_ptr); }
};

}

}
