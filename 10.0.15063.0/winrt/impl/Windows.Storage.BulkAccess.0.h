// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage {

enum class CreationCollisionOption;
enum class FileAccessMode;
enum class FileAttributes : unsigned;
enum class NameCollisionOption;
enum class StorageDeleteOption;
enum class StorageItemTypes : unsigned;
enum class StorageOpenOptions : unsigned;
struct IStorageFile;
struct IStorageFolder;
struct IStorageItem;
struct StorageFile;
struct StorageFolder;
struct StorageProvider;
struct StorageStreamTransaction;

}

WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties {

enum class ThumbnailMode;
enum class ThumbnailOptions : unsigned;
struct BasicProperties;
struct DocumentProperties;
struct ImageProperties;
struct MusicProperties;
struct StorageItemContentProperties;
struct StorageItemThumbnail;
struct VideoProperties;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Search {

enum class CommonFileQuery;
enum class CommonFolderQuery;
enum class IndexedState;
struct IStorageQueryResultBase;
struct QueryOptions;
struct StorageFileQueryResult;
struct StorageFolderQueryResult;
struct StorageItemQueryResult;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IInputStream;
struct IRandomAccessStream;
struct IRandomAccessStreamWithContentType;

}

WINRT_EXPORT namespace winrt::Windows::Storage::BulkAccess {

struct IFileInformationFactory;
struct IFileInformationFactoryFactory;
struct IStorageItemInformation;
struct FileInformation;
struct FileInformationFactory;
struct FolderInformation;

}

namespace winrt::impl {

template <> struct category<Windows::Storage::BulkAccess::IFileInformationFactory>{ using type = interface_category; };
template <> struct category<Windows::Storage::BulkAccess::IFileInformationFactoryFactory>{ using type = interface_category; };
template <> struct category<Windows::Storage::BulkAccess::IStorageItemInformation>{ using type = interface_category; };
template <> struct category<Windows::Storage::BulkAccess::FileInformation>{ using type = class_category; };
template <> struct category<Windows::Storage::BulkAccess::FileInformationFactory>{ using type = class_category; };
template <> struct category<Windows::Storage::BulkAccess::FolderInformation>{ using type = class_category; };
template <> struct name<Windows::Storage::BulkAccess::IFileInformationFactory>{ static constexpr auto & value{ L"Windows.Storage.BulkAccess.IFileInformationFactory" }; };
template <> struct name<Windows::Storage::BulkAccess::IFileInformationFactoryFactory>{ static constexpr auto & value{ L"Windows.Storage.BulkAccess.IFileInformationFactoryFactory" }; };
template <> struct name<Windows::Storage::BulkAccess::IStorageItemInformation>{ static constexpr auto & value{ L"Windows.Storage.BulkAccess.IStorageItemInformation" }; };
template <> struct name<Windows::Storage::BulkAccess::FileInformation>{ static constexpr auto & value{ L"Windows.Storage.BulkAccess.FileInformation" }; };
template <> struct name<Windows::Storage::BulkAccess::FileInformationFactory>{ static constexpr auto & value{ L"Windows.Storage.BulkAccess.FileInformationFactory" }; };
template <> struct name<Windows::Storage::BulkAccess::FolderInformation>{ static constexpr auto & value{ L"Windows.Storage.BulkAccess.FolderInformation" }; };
template <> struct guid<Windows::Storage::BulkAccess::IFileInformationFactory>{ static constexpr GUID value{ 0x401D88BE,0x960F,0x4D6D,{ 0xA7,0xD0,0x1A,0x38,0x61,0xE7,0x6C,0x83 } }; };
template <> struct guid<Windows::Storage::BulkAccess::IFileInformationFactoryFactory>{ static constexpr GUID value{ 0x84EA0E7D,0xE4A2,0x4F00,{ 0x8A,0xFA,0xAF,0x5E,0x0F,0x82,0x6B,0xD5 } }; };
template <> struct guid<Windows::Storage::BulkAccess::IStorageItemInformation>{ static constexpr GUID value{ 0x87A5CB8B,0x8972,0x4F40,{ 0x8D,0xE0,0xD8,0x6F,0xB1,0x79,0xD8,0xFA } }; };
template <> struct default_interface<Windows::Storage::BulkAccess::FileInformation>{ using type = Windows::Storage::BulkAccess::IStorageItemInformation; };
template <> struct default_interface<Windows::Storage::BulkAccess::FileInformationFactory>{ using type = Windows::Storage::BulkAccess::IFileInformationFactory; };
template <> struct default_interface<Windows::Storage::BulkAccess::FolderInformation>{ using type = Windows::Storage::BulkAccess::IStorageItemInformation; };

template <typename D>
struct consume_Windows_Storage_BulkAccess_IFileInformationFactory
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>> GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>> GetItemsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>> GetFilesAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>> GetFilesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>> GetFoldersAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>> GetFoldersAsync() const;
    Windows::Foundation::IInspectable GetVirtualizedItemsVector() const;
    Windows::Foundation::IInspectable GetVirtualizedFilesVector() const;
    Windows::Foundation::IInspectable GetVirtualizedFoldersVector() const;
};
template <> struct consume<Windows::Storage::BulkAccess::IFileInformationFactory> { template <typename D> using type = consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>; };

template <typename D>
struct consume_Windows_Storage_BulkAccess_IFileInformationFactoryFactory
{
    Windows::Storage::BulkAccess::FileInformationFactory CreateWithMode(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode) const;
    Windows::Storage::BulkAccess::FileInformationFactory CreateWithModeAndSize(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize) const;
    Windows::Storage::BulkAccess::FileInformationFactory CreateWithModeAndSizeAndOptions(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions) const;
    Windows::Storage::BulkAccess::FileInformationFactory CreateWithModeAndSizeAndOptionsAndFlags(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions, bool delayLoad) const;
};
template <> struct consume<Windows::Storage::BulkAccess::IFileInformationFactoryFactory> { template <typename D> using type = consume_Windows_Storage_BulkAccess_IFileInformationFactoryFactory<D>; };

template <typename D>
struct consume_Windows_Storage_BulkAccess_IStorageItemInformation
{
    Windows::Storage::FileProperties::MusicProperties MusicProperties() const;
    Windows::Storage::FileProperties::VideoProperties VideoProperties() const;
    Windows::Storage::FileProperties::ImageProperties ImageProperties() const;
    Windows::Storage::FileProperties::DocumentProperties DocumentProperties() const;
    Windows::Storage::FileProperties::BasicProperties BasicProperties() const;
    Windows::Storage::FileProperties::StorageItemThumbnail Thumbnail() const;
    event_token ThumbnailUpdated(Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const;
    using ThumbnailUpdated_revoker = event_revoker<Windows::Storage::BulkAccess::IStorageItemInformation>;
    ThumbnailUpdated_revoker ThumbnailUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const;
    void ThumbnailUpdated(event_token const& eventCookie) const;
    event_token PropertiesUpdated(Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const;
    using PropertiesUpdated_revoker = event_revoker<Windows::Storage::BulkAccess::IStorageItemInformation>;
    PropertiesUpdated_revoker PropertiesUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const;
    void PropertiesUpdated(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Storage::BulkAccess::IStorageItemInformation> { template <typename D> using type = consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>; };

template <> struct abi<Windows::Storage::BulkAccess::IFileInformationFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetItemsAsyncDefaultStartAndCount(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFilesAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFilesAsyncDefaultStartAndCount(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFoldersAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFoldersAsyncDefaultStartAndCount(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetVirtualizedItemsVector(::IUnknown** vector) = 0;
    virtual HRESULT __stdcall GetVirtualizedFilesVector(::IUnknown** vector) = 0;
    virtual HRESULT __stdcall GetVirtualizedFoldersVector(::IUnknown** vector) = 0;
};};

template <> struct abi<Windows::Storage::BulkAccess::IFileInformationFactoryFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithMode(::IUnknown* queryResult, abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithModeAndSize(::IUnknown* queryResult, abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedThumbnailSize, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithModeAndSizeAndOptions(::IUnknown* queryResult, abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedThumbnailSize, abi_t<Windows::Storage::FileProperties::ThumbnailOptions> thumbnailOptions, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithModeAndSizeAndOptionsAndFlags(::IUnknown* queryResult, abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedThumbnailSize, abi_t<Windows::Storage::FileProperties::ThumbnailOptions> thumbnailOptions, bool delayLoad, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::BulkAccess::IStorageItemInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MusicProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ImageProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BasicProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_ThumbnailUpdated(::IUnknown* changedHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_ThumbnailUpdated(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall add_PropertiesUpdated(::IUnknown* changedHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_PropertiesUpdated(abi_t<event_token> eventCookie) = 0;
};};

}
