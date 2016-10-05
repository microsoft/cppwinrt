// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Storage.BulkAccess.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.FileProperties.0.h"
#include "Windows.Storage.Search.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Storage::BulkAccess {

struct __declspec(uuid("401d88be-960f-4d6d-a7d0-1a3861e76c83")) __declspec(novtable) IFileInformationFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetItemsAsyncDefaultStartAndCount(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFilesAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFilesAsyncDefaultStartAndCount(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFoldersAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFoldersAsyncDefaultStartAndCount(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetVirtualizedItemsVector(Windows::IInspectable ** vector) = 0;
    virtual HRESULT __stdcall abi_GetVirtualizedFilesVector(Windows::IInspectable ** vector) = 0;
    virtual HRESULT __stdcall abi_GetVirtualizedFoldersVector(Windows::IInspectable ** vector) = 0;
};

struct __declspec(uuid("84ea0e7d-e4a2-4f00-8afa-af5e0f826bd5")) __declspec(novtable) IFileInformationFactoryFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWithMode(Windows::Storage::Search::IStorageQueryResultBase * queryResult, winrt::Windows::Storage::FileProperties::ThumbnailMode mode, Windows::Storage::BulkAccess::IFileInformationFactory ** value) = 0;
    virtual HRESULT __stdcall abi_CreateWithModeAndSize(Windows::Storage::Search::IStorageQueryResultBase * queryResult, winrt::Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedThumbnailSize, Windows::Storage::BulkAccess::IFileInformationFactory ** value) = 0;
    virtual HRESULT __stdcall abi_CreateWithModeAndSizeAndOptions(Windows::Storage::Search::IStorageQueryResultBase * queryResult, winrt::Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedThumbnailSize, winrt::Windows::Storage::FileProperties::ThumbnailOptions thumbnailOptions, Windows::Storage::BulkAccess::IFileInformationFactory ** value) = 0;
    virtual HRESULT __stdcall abi_CreateWithModeAndSizeAndOptionsAndFlags(Windows::Storage::Search::IStorageQueryResultBase * queryResult, winrt::Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedThumbnailSize, winrt::Windows::Storage::FileProperties::ThumbnailOptions thumbnailOptions, bool delayLoad, Windows::Storage::BulkAccess::IFileInformationFactory ** value) = 0;
};

struct __declspec(uuid("87a5cb8b-8972-4f40-8de0-d86fb179d8fa")) __declspec(novtable) IStorageItemInformation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MusicProperties(Windows::Storage::FileProperties::IMusicProperties ** value) = 0;
    virtual HRESULT __stdcall get_VideoProperties(Windows::Storage::FileProperties::IVideoProperties ** value) = 0;
    virtual HRESULT __stdcall get_ImageProperties(Windows::Storage::FileProperties::IImageProperties ** value) = 0;
    virtual HRESULT __stdcall get_DocumentProperties(Windows::Storage::FileProperties::IDocumentProperties ** value) = 0;
    virtual HRESULT __stdcall get_BasicProperties(Windows::Storage::FileProperties::IBasicProperties ** value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(Windows::Storage::Streams::IRandomAccessStreamWithContentType ** value) = 0;
    virtual HRESULT __stdcall add_ThumbnailUpdated(Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::IInspectable> * changedHandler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_ThumbnailUpdated(event_token eventCookie) = 0;
    virtual HRESULT __stdcall add_PropertiesUpdated(Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::IInspectable> * changedHandler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_PropertiesUpdated(event_token eventCookie) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Storage::BulkAccess::FileInformation> { using default_interface = Windows::Storage::BulkAccess::IStorageItemInformation; };
template <> struct traits<Windows::Storage::BulkAccess::FileInformationFactory> { using default_interface = Windows::Storage::BulkAccess::IFileInformationFactory; };
template <> struct traits<Windows::Storage::BulkAccess::FolderInformation> { using default_interface = Windows::Storage::BulkAccess::IStorageItemInformation; };

}

namespace Windows::Storage::BulkAccess {

template <typename T> struct impl_IFileInformationFactory;
template <typename T> struct impl_IFileInformationFactoryFactory;
template <typename T> struct impl_IStorageItemInformation;

}

namespace impl {

template <> struct traits<Windows::Storage::BulkAccess::IFileInformationFactory>
{
    using abi = ABI::Windows::Storage::BulkAccess::IFileInformationFactory;
    template <typename D> using consume = Windows::Storage::BulkAccess::impl_IFileInformationFactory<D>;
};

template <> struct traits<Windows::Storage::BulkAccess::IFileInformationFactoryFactory>
{
    using abi = ABI::Windows::Storage::BulkAccess::IFileInformationFactoryFactory;
    template <typename D> using consume = Windows::Storage::BulkAccess::impl_IFileInformationFactoryFactory<D>;
};

template <> struct traits<Windows::Storage::BulkAccess::IStorageItemInformation>
{
    using abi = ABI::Windows::Storage::BulkAccess::IStorageItemInformation;
    template <typename D> using consume = Windows::Storage::BulkAccess::impl_IStorageItemInformation<D>;
};

template <> struct traits<Windows::Storage::BulkAccess::FileInformation>
{
    using abi = ABI::Windows::Storage::BulkAccess::FileInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.BulkAccess.FileInformation"; }
};

template <> struct traits<Windows::Storage::BulkAccess::FileInformationFactory>
{
    using abi = ABI::Windows::Storage::BulkAccess::FileInformationFactory;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.BulkAccess.FileInformationFactory"; }
};

template <> struct traits<Windows::Storage::BulkAccess::FolderInformation>
{
    using abi = ABI::Windows::Storage::BulkAccess::FolderInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.BulkAccess.FolderInformation"; }
};

}

}
