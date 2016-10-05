// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Storage.Search.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.FileProperties.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Data.Text.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Storage::Search {

struct SortEntry
{
    hstring PropertyName;
    bool AscendingOrder;
};

}

namespace Windows::Storage::Search {

struct SortEntry
{
    hstring PropertyName;
    bool AscendingOrder;
};

}

namespace impl {

template <> struct traits<Windows::Storage::Search::SortEntry>
{
    using abi = ABI::Windows::Storage::Search::SortEntry;
};

}

namespace ABI::Windows::Storage::Search {

struct __declspec(uuid("b1767f8d-f698-4982-b05f-3a6e8cab01a2")) __declspec(novtable) IContentIndexer : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_AddAsync(Windows::Storage::Search::IIndexableContent * indexableContent, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_UpdateAsync(Windows::Storage::Search::IIndexableContent * indexableContent, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_DeleteAsync(hstring contentId, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_DeleteMultipleAsync(Windows::Foundation::Collections::IIterable<hstring> * contentIds, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_DeleteAllAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_RetrievePropertiesAsync(hstring contentId, Windows::Foundation::Collections::IIterable<hstring> * propertiesToRetrieve, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> ** operation) = 0;
    virtual HRESULT __stdcall get_Revision(uint64_t * value) = 0;
};

struct __declspec(uuid("70e3b0f8-4bfc-428a-8889-cc51da9a7b9d")) __declspec(novtable) IContentIndexerQuery : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetCountAsync(Windows::Foundation::IAsyncOperation<uint32_t> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetPropertiesAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetPropertiesRangeAsync(uint32_t startIndex, uint32_t maxItems, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetRangeAsync(uint32_t startIndex, uint32_t maxItems, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>> ** operation) = 0;
    virtual HRESULT __stdcall get_QueryFolder(Windows::Storage::IStorageFolder ** value) = 0;
};

struct __declspec(uuid("28823e10-4786-42f1-9730-792b3566b150")) __declspec(novtable) IContentIndexerQueryOperations : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateQueryWithSortOrderAndLanguage(hstring searchFilter, Windows::Foundation::Collections::IIterable<hstring> * propertiesToRetrieve, Windows::Foundation::Collections::IIterable<Windows::Storage::Search::SortEntry> * sortOrder, hstring searchFilterLanguage, Windows::Storage::Search::IContentIndexerQuery ** query) = 0;
    virtual HRESULT __stdcall abi_CreateQueryWithSortOrder(hstring searchFilter, Windows::Foundation::Collections::IIterable<hstring> * propertiesToRetrieve, Windows::Foundation::Collections::IIterable<Windows::Storage::Search::SortEntry> * sortOrder, Windows::Storage::Search::IContentIndexerQuery ** query) = 0;
    virtual HRESULT __stdcall abi_CreateQuery(hstring searchFilter, Windows::Foundation::Collections::IIterable<hstring> * propertiesToRetrieve, Windows::Storage::Search::IContentIndexerQuery ** query) = 0;
};

struct __declspec(uuid("8c488375-b37e-4c60-9ba8-b760fda3e59d")) __declspec(novtable) IContentIndexerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetIndexerWithName(hstring indexName, Windows::Storage::Search::IContentIndexer ** index) = 0;
    virtual HRESULT __stdcall abi_GetIndexer(Windows::Storage::Search::IContentIndexer ** index) = 0;
};

struct __declspec(uuid("ccf1a05f-d4b5-483a-b06e-e0db1ec420e4")) __declspec(novtable) IIndexableContent : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall put_Id(hstring value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable> ** value) = 0;
    virtual HRESULT __stdcall get_Stream(Windows::Storage::Streams::IRandomAccessStream ** value) = 0;
    virtual HRESULT __stdcall put_Stream(Windows::Storage::Streams::IRandomAccessStream * value) = 0;
    virtual HRESULT __stdcall get_StreamContentType(hstring * value) = 0;
    virtual HRESULT __stdcall put_StreamContentType(hstring value) = 0;
};

struct __declspec(uuid("1e5e46ee-0f45-4838-a8e9-d0479d446c30")) __declspec(novtable) IQueryOptions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FileTypeFilter(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_FolderDepth(winrt::Windows::Storage::Search::FolderDepth * value) = 0;
    virtual HRESULT __stdcall put_FolderDepth(winrt::Windows::Storage::Search::FolderDepth value) = 0;
    virtual HRESULT __stdcall get_ApplicationSearchFilter(hstring * value) = 0;
    virtual HRESULT __stdcall put_ApplicationSearchFilter(hstring value) = 0;
    virtual HRESULT __stdcall get_UserSearchFilter(hstring * value) = 0;
    virtual HRESULT __stdcall put_UserSearchFilter(hstring value) = 0;
    virtual HRESULT __stdcall get_Language(hstring * value) = 0;
    virtual HRESULT __stdcall put_Language(hstring value) = 0;
    virtual HRESULT __stdcall get_IndexerOption(winrt::Windows::Storage::Search::IndexerOption * value) = 0;
    virtual HRESULT __stdcall put_IndexerOption(winrt::Windows::Storage::Search::IndexerOption value) = 0;
    virtual HRESULT __stdcall get_SortOrder(Windows::Foundation::Collections::IVector<Windows::Storage::Search::SortEntry> ** value) = 0;
    virtual HRESULT __stdcall get_GroupPropertyName(hstring * value) = 0;
    virtual HRESULT __stdcall get_DateStackOption(winrt::Windows::Storage::Search::DateStackOption * value) = 0;
    virtual HRESULT __stdcall abi_SaveToString(hstring * value) = 0;
    virtual HRESULT __stdcall abi_LoadFromString(hstring value) = 0;
    virtual HRESULT __stdcall abi_SetThumbnailPrefetch(winrt::Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize, winrt::Windows::Storage::FileProperties::ThumbnailOptions options) = 0;
    virtual HRESULT __stdcall abi_SetPropertyPrefetch(winrt::Windows::Storage::FileProperties::PropertyPrefetchOptions options, Windows::Foundation::Collections::IIterable<hstring> * propertiesToRetrieve) = 0;
};

struct __declspec(uuid("032e1f8c-a9c1-4e71-8011-0dee9d4811a3")) __declspec(novtable) IQueryOptionsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateCommonFileQuery(winrt::Windows::Storage::Search::CommonFileQuery query, Windows::Foundation::Collections::IIterable<hstring> * fileTypeFilter, Windows::Storage::Search::IQueryOptions ** queryOptions) = 0;
    virtual HRESULT __stdcall abi_CreateCommonFolderQuery(winrt::Windows::Storage::Search::CommonFolderQuery query, Windows::Storage::Search::IQueryOptions ** queryOptions) = 0;
};

struct __declspec(uuid("5b9d1026-15c4-44dd-b89a-47a59b7d7c4f")) __declspec(novtable) IQueryOptionsWithProviderFilter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StorageProviderIdFilter(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
};

struct __declspec(uuid("52fda447-2baa-412c-b29f-d4b1778efa1e")) __declspec(novtable) IStorageFileQueryResult : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetFilesAsync(uint32_t startIndex, uint32_t maxNumberOfItems, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFilesAsyncDefaultStartAndCount(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> ** operation) = 0;
};

struct __declspec(uuid("4e5db9dd-7141-46c4-8be3-e9dc9e27275c")) __declspec(novtable) IStorageFileQueryResult2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetMatchingPropertiesWithRanges(Windows::Storage::IStorageFile * file, Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment>> ** result) = 0;
};

struct __declspec(uuid("cb43ccc9-446b-4a4f-be97-757771be5203")) __declspec(novtable) IStorageFolderQueryOperations : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetIndexedStateAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Search::IndexedState> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateFileQueryOverloadDefault(Windows::Storage::Search::IStorageFileQueryResult ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFileQuery(winrt::Windows::Storage::Search::CommonFileQuery query, Windows::Storage::Search::IStorageFileQueryResult ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFileQueryWithOptions(Windows::Storage::Search::IQueryOptions * queryOptions, Windows::Storage::Search::IStorageFileQueryResult ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFolderQueryOverloadDefault(Windows::Storage::Search::IStorageFolderQueryResult ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFolderQuery(winrt::Windows::Storage::Search::CommonFolderQuery query, Windows::Storage::Search::IStorageFolderQueryResult ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFolderQueryWithOptions(Windows::Storage::Search::IQueryOptions * queryOptions, Windows::Storage::Search::IStorageFolderQueryResult ** value) = 0;
    virtual HRESULT __stdcall abi_CreateItemQuery(Windows::Storage::Search::IStorageItemQueryResult ** value) = 0;
    virtual HRESULT __stdcall abi_CreateItemQueryWithOptions(Windows::Storage::Search::IQueryOptions * queryOptions, Windows::Storage::Search::IStorageItemQueryResult ** value) = 0;
    virtual HRESULT __stdcall abi_GetFilesAsync(winrt::Windows::Storage::Search::CommonFileQuery query, uint32_t startIndex, uint32_t maxItemsToRetrieve, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFilesAsyncOverloadDefaultStartAndCount(winrt::Windows::Storage::Search::CommonFileQuery query, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFoldersAsync(winrt::Windows::Storage::Search::CommonFolderQuery query, uint32_t startIndex, uint32_t maxItemsToRetrieve, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFoldersAsyncOverloadDefaultStartAndCount(winrt::Windows::Storage::Search::CommonFolderQuery query, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> ** operation) = 0;
    virtual HRESULT __stdcall abi_AreQueryOptionsSupported(Windows::Storage::Search::IQueryOptions * queryOptions, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsCommonFolderQuerySupported(winrt::Windows::Storage::Search::CommonFolderQuery query, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsCommonFileQuerySupported(winrt::Windows::Storage::Search::CommonFileQuery query, bool * value) = 0;
};

struct __declspec(uuid("6654c911-7d66-46fa-aecf-e4a4baa93ab8")) __declspec(novtable) IStorageFolderQueryResult : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetFoldersAsync(uint32_t startIndex, uint32_t maxNumberOfItems, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFoldersAsyncDefaultStartAndCount(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> ** operation) = 0;
};

struct __declspec(uuid("e8948079-9d58-47b8-b2b2-41b07f4795f9")) __declspec(novtable) IStorageItemQueryResult : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetItemsAsync(uint32_t startIndex, uint32_t maxNumberOfItems, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetItemsAsyncDefaultStartAndCount(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> ** operation) = 0;
};

struct __declspec(uuid("2a371977-abbf-4e1d-8aa5-6385d8884799")) __declspec(novtable) IStorageLibraryContentChangedTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Folder(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall abi_CreateModifiedSinceQuery(Windows::Foundation::DateTime lastQueryTime, Windows::Storage::Search::IStorageItemQueryResult ** result) = 0;
};

struct __declspec(uuid("c297d70d-7353-47ab-ba58-8c61425dc54b")) __declspec(novtable) IStorageQueryResultBase : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetItemCountAsync(Windows::Foundation::IAsyncOperation<uint32_t> ** operation) = 0;
    virtual HRESULT __stdcall get_Folder(Windows::Storage::IStorageFolder ** container) = 0;
    virtual HRESULT __stdcall add_ContentsChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::IInspectable> * handler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_ContentsChanged(event_token eventCookie) = 0;
    virtual HRESULT __stdcall add_OptionsChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::IInspectable> * changedHandler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_OptionsChanged(event_token eventCookie) = 0;
    virtual HRESULT __stdcall abi_FindStartIndexAsync(Windows::IInspectable * value, Windows::Foundation::IAsyncOperation<uint32_t> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetCurrentQueryOptions(Windows::Storage::Search::IQueryOptions ** value) = 0;
    virtual HRESULT __stdcall abi_ApplyNewQueryOptions(Windows::Storage::Search::IQueryOptions * newQueryOptions) = 0;
};

struct __declspec(uuid("b9914881-a1ee-4bc4-92a5-466968e30436")) __declspec(novtable) IValueAndLanguage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Language(hstring * value) = 0;
    virtual HRESULT __stdcall put_Language(hstring value) = 0;
    virtual HRESULT __stdcall get_Value(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_Value(Windows::IInspectable * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Storage::Search::ContentIndexer> { using default_interface = Windows::Storage::Search::IContentIndexer; };
template <> struct traits<Windows::Storage::Search::ContentIndexerQuery> { using default_interface = Windows::Storage::Search::IContentIndexerQuery; };
template <> struct traits<Windows::Storage::Search::IndexableContent> { using default_interface = Windows::Storage::Search::IIndexableContent; };
template <> struct traits<Windows::Storage::Search::QueryOptions> { using default_interface = Windows::Storage::Search::IQueryOptions; };
template <> struct traits<Windows::Storage::Search::SortEntryVector> { using default_interface = Windows::Foundation::Collections::IVector<Windows::Storage::Search::SortEntry>; };
template <> struct traits<Windows::Storage::Search::StorageFileQueryResult> { using default_interface = Windows::Storage::Search::IStorageFileQueryResult; };
template <> struct traits<Windows::Storage::Search::StorageFolderQueryResult> { using default_interface = Windows::Storage::Search::IStorageFolderQueryResult; };
template <> struct traits<Windows::Storage::Search::StorageItemQueryResult> { using default_interface = Windows::Storage::Search::IStorageItemQueryResult; };
template <> struct traits<Windows::Storage::Search::StorageLibraryContentChangedTriggerDetails> { using default_interface = Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails; };
template <> struct traits<Windows::Storage::Search::ValueAndLanguage> { using default_interface = Windows::Storage::Search::IValueAndLanguage; };

}

namespace Windows::Storage::Search {

template <typename T> struct impl_IContentIndexer;
template <typename T> struct impl_IContentIndexerQuery;
template <typename T> struct impl_IContentIndexerQueryOperations;
template <typename T> struct impl_IContentIndexerStatics;
template <typename T> struct impl_IIndexableContent;
template <typename T> struct impl_IQueryOptions;
template <typename T> struct impl_IQueryOptionsFactory;
template <typename T> struct impl_IQueryOptionsWithProviderFilter;
template <typename T> struct impl_IStorageFileQueryResult;
template <typename T> struct impl_IStorageFileQueryResult2;
template <typename T> struct impl_IStorageFolderQueryOperations;
template <typename T> struct impl_IStorageFolderQueryResult;
template <typename T> struct impl_IStorageItemQueryResult;
template <typename T> struct impl_IStorageLibraryContentChangedTriggerDetails;
template <typename T> struct impl_IStorageQueryResultBase;
template <typename T> struct impl_IValueAndLanguage;

}

namespace impl {

template <> struct traits<Windows::Storage::Search::IContentIndexer>
{
    using abi = ABI::Windows::Storage::Search::IContentIndexer;
    template <typename D> using consume = Windows::Storage::Search::impl_IContentIndexer<D>;
};

template <> struct traits<Windows::Storage::Search::IContentIndexerQuery>
{
    using abi = ABI::Windows::Storage::Search::IContentIndexerQuery;
    template <typename D> using consume = Windows::Storage::Search::impl_IContentIndexerQuery<D>;
};

template <> struct traits<Windows::Storage::Search::IContentIndexerQueryOperations>
{
    using abi = ABI::Windows::Storage::Search::IContentIndexerQueryOperations;
    template <typename D> using consume = Windows::Storage::Search::impl_IContentIndexerQueryOperations<D>;
};

template <> struct traits<Windows::Storage::Search::IContentIndexerStatics>
{
    using abi = ABI::Windows::Storage::Search::IContentIndexerStatics;
    template <typename D> using consume = Windows::Storage::Search::impl_IContentIndexerStatics<D>;
};

template <> struct traits<Windows::Storage::Search::IIndexableContent>
{
    using abi = ABI::Windows::Storage::Search::IIndexableContent;
    template <typename D> using consume = Windows::Storage::Search::impl_IIndexableContent<D>;
};

template <> struct traits<Windows::Storage::Search::IQueryOptions>
{
    using abi = ABI::Windows::Storage::Search::IQueryOptions;
    template <typename D> using consume = Windows::Storage::Search::impl_IQueryOptions<D>;
};

template <> struct traits<Windows::Storage::Search::IQueryOptionsFactory>
{
    using abi = ABI::Windows::Storage::Search::IQueryOptionsFactory;
    template <typename D> using consume = Windows::Storage::Search::impl_IQueryOptionsFactory<D>;
};

template <> struct traits<Windows::Storage::Search::IQueryOptionsWithProviderFilter>
{
    using abi = ABI::Windows::Storage::Search::IQueryOptionsWithProviderFilter;
    template <typename D> using consume = Windows::Storage::Search::impl_IQueryOptionsWithProviderFilter<D>;
};

template <> struct traits<Windows::Storage::Search::IStorageFileQueryResult>
{
    using abi = ABI::Windows::Storage::Search::IStorageFileQueryResult;
    template <typename D> using consume = Windows::Storage::Search::impl_IStorageFileQueryResult<D>;
};

template <> struct traits<Windows::Storage::Search::IStorageFileQueryResult2>
{
    using abi = ABI::Windows::Storage::Search::IStorageFileQueryResult2;
    template <typename D> using consume = Windows::Storage::Search::impl_IStorageFileQueryResult2<D>;
};

template <> struct traits<Windows::Storage::Search::IStorageFolderQueryOperations>
{
    using abi = ABI::Windows::Storage::Search::IStorageFolderQueryOperations;
    template <typename D> using consume = Windows::Storage::Search::impl_IStorageFolderQueryOperations<D>;
};

template <> struct traits<Windows::Storage::Search::IStorageFolderQueryResult>
{
    using abi = ABI::Windows::Storage::Search::IStorageFolderQueryResult;
    template <typename D> using consume = Windows::Storage::Search::impl_IStorageFolderQueryResult<D>;
};

template <> struct traits<Windows::Storage::Search::IStorageItemQueryResult>
{
    using abi = ABI::Windows::Storage::Search::IStorageItemQueryResult;
    template <typename D> using consume = Windows::Storage::Search::impl_IStorageItemQueryResult<D>;
};

template <> struct traits<Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails>
{
    using abi = ABI::Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails;
    template <typename D> using consume = Windows::Storage::Search::impl_IStorageLibraryContentChangedTriggerDetails<D>;
};

template <> struct traits<Windows::Storage::Search::IStorageQueryResultBase>
{
    using abi = ABI::Windows::Storage::Search::IStorageQueryResultBase;
    template <typename D> using consume = Windows::Storage::Search::impl_IStorageQueryResultBase<D>;
};

template <> struct traits<Windows::Storage::Search::IValueAndLanguage>
{
    using abi = ABI::Windows::Storage::Search::IValueAndLanguage;
    template <typename D> using consume = Windows::Storage::Search::impl_IValueAndLanguage<D>;
};

template <> struct traits<Windows::Storage::Search::ContentIndexer>
{
    using abi = ABI::Windows::Storage::Search::ContentIndexer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Search.ContentIndexer"; }
};

template <> struct traits<Windows::Storage::Search::ContentIndexerQuery>
{
    using abi = ABI::Windows::Storage::Search::ContentIndexerQuery;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Search.ContentIndexerQuery"; }
};

template <> struct traits<Windows::Storage::Search::IndexableContent>
{
    using abi = ABI::Windows::Storage::Search::IndexableContent;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Search.IndexableContent"; }
};

template <> struct traits<Windows::Storage::Search::QueryOptions>
{
    using abi = ABI::Windows::Storage::Search::QueryOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Search.QueryOptions"; }
};

template <> struct traits<Windows::Storage::Search::SortEntryVector>
{
    using abi = ABI::Windows::Storage::Search::SortEntryVector;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Search.SortEntryVector"; }
};

template <> struct traits<Windows::Storage::Search::StorageFileQueryResult>
{
    using abi = ABI::Windows::Storage::Search::StorageFileQueryResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Search.StorageFileQueryResult"; }
};

template <> struct traits<Windows::Storage::Search::StorageFolderQueryResult>
{
    using abi = ABI::Windows::Storage::Search::StorageFolderQueryResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Search.StorageFolderQueryResult"; }
};

template <> struct traits<Windows::Storage::Search::StorageItemQueryResult>
{
    using abi = ABI::Windows::Storage::Search::StorageItemQueryResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Search.StorageItemQueryResult"; }
};

template <> struct traits<Windows::Storage::Search::StorageLibraryContentChangedTriggerDetails>
{
    using abi = ABI::Windows::Storage::Search::StorageLibraryContentChangedTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Search.StorageLibraryContentChangedTriggerDetails"; }
};

template <> struct traits<Windows::Storage::Search::ValueAndLanguage>
{
    using abi = ABI::Windows::Storage::Search::ValueAndLanguage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Search.ValueAndLanguage"; }
};

}

}
