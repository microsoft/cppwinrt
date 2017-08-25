// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Data.Text.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.FileProperties.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Storage.Search.2.h"
#include "winrt/Windows.Storage.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_Search_IContentIndexer<D>::AddAsync(Windows::Storage::Search::IIndexableContent const& indexableContent) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexer)->AddAsync(get_abi(indexableContent), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_Search_IContentIndexer<D>::UpdateAsync(Windows::Storage::Search::IIndexableContent const& indexableContent) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexer)->UpdateAsync(get_abi(indexableContent), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_Search_IContentIndexer<D>::DeleteAsync(param::hstring const& contentId) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexer)->DeleteAsync(get_abi(contentId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_Search_IContentIndexer<D>::DeleteMultipleAsync(param::async_iterable<hstring> const& contentIds) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexer)->DeleteMultipleAsync(get_abi(contentIds), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_Search_IContentIndexer<D>::DeleteAllAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexer)->DeleteAllAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>> consume_Windows_Storage_Search_IContentIndexer<D>::RetrievePropertiesAsync(param::hstring const& contentId, param::async_iterable<hstring> const& propertiesToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexer)->RetrievePropertiesAsync(get_abi(contentId), get_abi(propertiesToRetrieve), put_abi(operation)));
    return operation;
}

template <typename D> uint64_t consume_Windows_Storage_Search_IContentIndexer<D>::Revision() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexer)->get_Revision(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> consume_Windows_Storage_Search_IContentIndexerQuery<D>::GetCountAsync() const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexerQuery)->GetCountAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>> consume_Windows_Storage_Search_IContentIndexerQuery<D>::GetPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexerQuery)->GetPropertiesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>> consume_Windows_Storage_Search_IContentIndexerQuery<D>::GetPropertiesAsync(uint32_t startIndex, uint32_t maxItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexerQuery)->GetPropertiesRangeAsync(startIndex, maxItems, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>> consume_Windows_Storage_Search_IContentIndexerQuery<D>::GetAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexerQuery)->GetAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>> consume_Windows_Storage_Search_IContentIndexerQuery<D>::GetAsync(uint32_t startIndex, uint32_t maxItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexerQuery)->GetRangeAsync(startIndex, maxItems, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_Search_IContentIndexerQuery<D>::QueryFolder() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexerQuery)->get_QueryFolder(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Search::ContentIndexerQuery consume_Windows_Storage_Search_IContentIndexerQueryOperations<D>::CreateQuery(param::hstring const& searchFilter, param::iterable<hstring> const& propertiesToRetrieve, param::iterable<Windows::Storage::Search::SortEntry> const& sortOrder, param::hstring const& searchFilterLanguage) const
{
    Windows::Storage::Search::ContentIndexerQuery query{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexerQueryOperations)->CreateQueryWithSortOrderAndLanguage(get_abi(searchFilter), get_abi(propertiesToRetrieve), get_abi(sortOrder), get_abi(searchFilterLanguage), put_abi(query)));
    return query;
}

template <typename D> Windows::Storage::Search::ContentIndexerQuery consume_Windows_Storage_Search_IContentIndexerQueryOperations<D>::CreateQuery(param::hstring const& searchFilter, param::iterable<hstring> const& propertiesToRetrieve, param::iterable<Windows::Storage::Search::SortEntry> const& sortOrder) const
{
    Windows::Storage::Search::ContentIndexerQuery query{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexerQueryOperations)->CreateQueryWithSortOrder(get_abi(searchFilter), get_abi(propertiesToRetrieve), get_abi(sortOrder), put_abi(query)));
    return query;
}

template <typename D> Windows::Storage::Search::ContentIndexerQuery consume_Windows_Storage_Search_IContentIndexerQueryOperations<D>::CreateQuery(param::hstring const& searchFilter, param::iterable<hstring> const& propertiesToRetrieve) const
{
    Windows::Storage::Search::ContentIndexerQuery query{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexerQueryOperations)->CreateQuery(get_abi(searchFilter), get_abi(propertiesToRetrieve), put_abi(query)));
    return query;
}

template <typename D> Windows::Storage::Search::ContentIndexer consume_Windows_Storage_Search_IContentIndexerStatics<D>::GetIndexer(param::hstring const& indexName) const
{
    Windows::Storage::Search::ContentIndexer index{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexerStatics)->GetIndexerWithName(get_abi(indexName), put_abi(index)));
    return index;
}

template <typename D> Windows::Storage::Search::ContentIndexer consume_Windows_Storage_Search_IContentIndexerStatics<D>::GetIndexer() const
{
    Windows::Storage::Search::ContentIndexer index{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IContentIndexerStatics)->GetIndexer(put_abi(index)));
    return index;
}

template <typename D> hstring consume_Windows_Storage_Search_IIndexableContent<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IIndexableContent)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Search_IIndexableContent<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IIndexableContent)->put_Id(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable> consume_Windows_Storage_Search_IIndexableContent<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IIndexableContent)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_Storage_Search_IIndexableContent<D>::Stream() const
{
    Windows::Storage::Streams::IRandomAccessStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IIndexableContent)->get_Stream(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Search_IIndexableContent<D>::Stream(Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IIndexableContent)->put_Stream(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Search_IIndexableContent<D>::StreamContentType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IIndexableContent)->get_StreamContentType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Search_IIndexableContent<D>::StreamContentType(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IIndexableContent)->put_StreamContentType(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_Search_IQueryOptions<D>::FileTypeFilter() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->get_FileTypeFilter(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Search::FolderDepth consume_Windows_Storage_Search_IQueryOptions<D>::FolderDepth() const
{
    Windows::Storage::Search::FolderDepth value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->get_FolderDepth(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Search_IQueryOptions<D>::FolderDepth(Windows::Storage::Search::FolderDepth const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->put_FolderDepth(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Search_IQueryOptions<D>::ApplicationSearchFilter() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->get_ApplicationSearchFilter(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Search_IQueryOptions<D>::ApplicationSearchFilter(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->put_ApplicationSearchFilter(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Search_IQueryOptions<D>::UserSearchFilter() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->get_UserSearchFilter(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Search_IQueryOptions<D>::UserSearchFilter(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->put_UserSearchFilter(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Search_IQueryOptions<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->get_Language(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Search_IQueryOptions<D>::Language(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->put_Language(get_abi(value)));
}

template <typename D> Windows::Storage::Search::IndexerOption consume_Windows_Storage_Search_IQueryOptions<D>::IndexerOption() const
{
    Windows::Storage::Search::IndexerOption value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->get_IndexerOption(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Search_IQueryOptions<D>::IndexerOption(Windows::Storage::Search::IndexerOption const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->put_IndexerOption(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Storage::Search::SortEntry> consume_Windows_Storage_Search_IQueryOptions<D>::SortOrder() const
{
    Windows::Foundation::Collections::IVector<Windows::Storage::Search::SortEntry> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->get_SortOrder(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_Search_IQueryOptions<D>::GroupPropertyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->get_GroupPropertyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Search::DateStackOption consume_Windows_Storage_Search_IQueryOptions<D>::DateStackOption() const
{
    Windows::Storage::Search::DateStackOption value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->get_DateStackOption(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_Search_IQueryOptions<D>::SaveToString() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->SaveToString(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Search_IQueryOptions<D>::LoadFromString(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->LoadFromString(get_abi(value)));
}

template <typename D> void consume_Windows_Storage_Search_IQueryOptions<D>::SetThumbnailPrefetch(Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedSize, Windows::Storage::FileProperties::ThumbnailOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->SetThumbnailPrefetch(get_abi(mode), requestedSize, get_abi(options)));
}

template <typename D> void consume_Windows_Storage_Search_IQueryOptions<D>::SetPropertyPrefetch(Windows::Storage::FileProperties::PropertyPrefetchOptions const& options, param::iterable<hstring> const& propertiesToRetrieve) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptions)->SetPropertyPrefetch(get_abi(options), get_abi(propertiesToRetrieve)));
}

template <typename D> Windows::Storage::Search::QueryOptions consume_Windows_Storage_Search_IQueryOptionsFactory<D>::CreateCommonFileQuery(Windows::Storage::Search::CommonFileQuery const& query, param::iterable<hstring> const& fileTypeFilter) const
{
    Windows::Storage::Search::QueryOptions queryOptions{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptionsFactory)->CreateCommonFileQuery(get_abi(query), get_abi(fileTypeFilter), put_abi(queryOptions)));
    return queryOptions;
}

template <typename D> Windows::Storage::Search::QueryOptions consume_Windows_Storage_Search_IQueryOptionsFactory<D>::CreateCommonFolderQuery(Windows::Storage::Search::CommonFolderQuery const& query) const
{
    Windows::Storage::Search::QueryOptions queryOptions{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptionsFactory)->CreateCommonFolderQuery(get_abi(query), put_abi(queryOptions)));
    return queryOptions;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_Search_IQueryOptionsWithProviderFilter<D>::StorageProviderIdFilter() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IQueryOptionsWithProviderFilter)->get_StorageProviderIdFilter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> consume_Windows_Storage_Search_IStorageFileQueryResult<D>::GetFilesAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFileQueryResult)->GetFilesAsync(startIndex, maxNumberOfItems, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> consume_Windows_Storage_Search_IStorageFileQueryResult<D>::GetFilesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFileQueryResult)->GetFilesAsyncDefaultStartAndCount(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment>> consume_Windows_Storage_Search_IStorageFileQueryResult2<D>::GetMatchingPropertiesWithRanges(Windows::Storage::StorageFile const& file) const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFileQueryResult2)->GetMatchingPropertiesWithRanges(get_abi(file), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Search::IndexedState> consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::GetIndexedStateAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Search::IndexedState> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->GetIndexedStateAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::Search::StorageFileQueryResult consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::CreateFileQuery() const
{
    Windows::Storage::Search::StorageFileQueryResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->CreateFileQueryOverloadDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageFileQueryResult consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::CreateFileQuery(Windows::Storage::Search::CommonFileQuery const& query) const
{
    Windows::Storage::Search::StorageFileQueryResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->CreateFileQuery(get_abi(query), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageFileQueryResult consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::CreateFileQueryWithOptions(Windows::Storage::Search::QueryOptions const& queryOptions) const
{
    Windows::Storage::Search::StorageFileQueryResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->CreateFileQueryWithOptions(get_abi(queryOptions), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageFolderQueryResult consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::CreateFolderQuery() const
{
    Windows::Storage::Search::StorageFolderQueryResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->CreateFolderQueryOverloadDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageFolderQueryResult consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::CreateFolderQuery(Windows::Storage::Search::CommonFolderQuery const& query) const
{
    Windows::Storage::Search::StorageFolderQueryResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->CreateFolderQuery(get_abi(query), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageFolderQueryResult consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::CreateFolderQueryWithOptions(Windows::Storage::Search::QueryOptions const& queryOptions) const
{
    Windows::Storage::Search::StorageFolderQueryResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->CreateFolderQueryWithOptions(get_abi(queryOptions), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageItemQueryResult consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::CreateItemQuery() const
{
    Windows::Storage::Search::StorageItemQueryResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->CreateItemQuery(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageItemQueryResult consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::CreateItemQueryWithOptions(Windows::Storage::Search::QueryOptions const& queryOptions) const
{
    Windows::Storage::Search::StorageItemQueryResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->CreateItemQueryWithOptions(get_abi(queryOptions), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::GetFilesAsync(Windows::Storage::Search::CommonFileQuery const& query, uint32_t startIndex, uint32_t maxItemsToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->GetFilesAsync(get_abi(query), startIndex, maxItemsToRetrieve, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::GetFilesAsync(Windows::Storage::Search::CommonFileQuery const& query) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->GetFilesAsyncOverloadDefaultStartAndCount(get_abi(query), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::GetFoldersAsync(Windows::Storage::Search::CommonFolderQuery const& query, uint32_t startIndex, uint32_t maxItemsToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->GetFoldersAsync(get_abi(query), startIndex, maxItemsToRetrieve, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::GetFoldersAsync(Windows::Storage::Search::CommonFolderQuery const& query) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->GetFoldersAsyncOverloadDefaultStartAndCount(get_abi(query), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->GetItemsAsync(startIndex, maxItemsToRetrieve, put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::AreQueryOptionsSupported(Windows::Storage::Search::QueryOptions const& queryOptions) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->AreQueryOptionsSupported(get_abi(queryOptions), &value));
    return value;
}

template <typename D> bool consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::IsCommonFolderQuerySupported(Windows::Storage::Search::CommonFolderQuery const& query) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->IsCommonFolderQuerySupported(get_abi(query), &value));
    return value;
}

template <typename D> bool consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>::IsCommonFileQuerySupported(Windows::Storage::Search::CommonFileQuery const& query) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryOperations)->IsCommonFileQuerySupported(get_abi(query), &value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> consume_Windows_Storage_Search_IStorageFolderQueryResult<D>::GetFoldersAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryResult)->GetFoldersAsync(startIndex, maxNumberOfItems, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> consume_Windows_Storage_Search_IStorageFolderQueryResult<D>::GetFoldersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageFolderQueryResult)->GetFoldersAsyncDefaultStartAndCount(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> consume_Windows_Storage_Search_IStorageItemQueryResult<D>::GetItemsAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageItemQueryResult)->GetItemsAsync(startIndex, maxNumberOfItems, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> consume_Windows_Storage_Search_IStorageItemQueryResult<D>::GetItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageItemQueryResult)->GetItemsAsyncDefaultStartAndCount(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_Search_IStorageLibraryContentChangedTriggerDetails<D>::Folder() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails)->get_Folder(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageItemQueryResult consume_Windows_Storage_Search_IStorageLibraryContentChangedTriggerDetails<D>::CreateModifiedSinceQuery(Windows::Foundation::DateTime const& lastQueryTime) const
{
    Windows::Storage::Search::StorageItemQueryResult result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails)->CreateModifiedSinceQuery(get_abi(lastQueryTime), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> consume_Windows_Storage_Search_IStorageQueryResultBase<D>::GetItemCountAsync() const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageQueryResultBase)->GetItemCountAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_Search_IStorageQueryResultBase<D>::Folder() const
{
    Windows::Storage::StorageFolder container{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageQueryResultBase)->get_Folder(put_abi(container)));
    return container;
}

template <typename D> event_token consume_Windows_Storage_Search_IStorageQueryResultBase<D>::ContentsChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const& handler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageQueryResultBase)->add_ContentsChanged(get_abi(handler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Storage::Search::IStorageQueryResultBase> consume_Windows_Storage_Search_IStorageQueryResultBase<D>::ContentsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Storage::Search::IStorageQueryResultBase>(this, &abi_t<Windows::Storage::Search::IStorageQueryResultBase>::remove_ContentsChanged, ContentsChanged(handler));
}

template <typename D> void consume_Windows_Storage_Search_IStorageQueryResultBase<D>::ContentsChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageQueryResultBase)->remove_ContentsChanged(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Storage_Search_IStorageQueryResultBase<D>::OptionsChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const& changedHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageQueryResultBase)->add_OptionsChanged(get_abi(changedHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Storage::Search::IStorageQueryResultBase> consume_Windows_Storage_Search_IStorageQueryResultBase<D>::OptionsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const& changedHandler) const
{
    return impl::make_event_revoker<D, Windows::Storage::Search::IStorageQueryResultBase>(this, &abi_t<Windows::Storage::Search::IStorageQueryResultBase>::remove_OptionsChanged, OptionsChanged(changedHandler));
}

template <typename D> void consume_Windows_Storage_Search_IStorageQueryResultBase<D>::OptionsChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageQueryResultBase)->remove_OptionsChanged(get_abi(eventCookie)));
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> consume_Windows_Storage_Search_IStorageQueryResultBase<D>::FindStartIndexAsync(Windows::Foundation::IInspectable const& value) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageQueryResultBase)->FindStartIndexAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::Search::QueryOptions consume_Windows_Storage_Search_IStorageQueryResultBase<D>::GetCurrentQueryOptions() const
{
    Windows::Storage::Search::QueryOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageQueryResultBase)->GetCurrentQueryOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Search_IStorageQueryResultBase<D>::ApplyNewQueryOptions(Windows::Storage::Search::QueryOptions const& newQueryOptions) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IStorageQueryResultBase)->ApplyNewQueryOptions(get_abi(newQueryOptions)));
}

template <typename D> hstring consume_Windows_Storage_Search_IValueAndLanguage<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IValueAndLanguage)->get_Language(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Search_IValueAndLanguage<D>::Language(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IValueAndLanguage)->put_Language(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Storage_Search_IValueAndLanguage<D>::Value() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IValueAndLanguage)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Search_IValueAndLanguage<D>::Value(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Search::IValueAndLanguage)->put_Value(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::Storage::Search::IContentIndexer> : produce_base<D, Windows::Storage::Search::IContentIndexer>
{
    HRESULT __stdcall AddAsync(::IUnknown* indexableContent, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AddAsync(*reinterpret_cast<Windows::Storage::Search::IIndexableContent const*>(&indexableContent)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateAsync(::IUnknown* indexableContent, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().UpdateAsync(*reinterpret_cast<Windows::Storage::Search::IIndexableContent const*>(&indexableContent)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAsync(HSTRING contentId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteAsync(*reinterpret_cast<hstring const*>(&contentId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteMultipleAsync(::IUnknown* contentIds, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteMultipleAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&contentIds)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAllAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetrievePropertiesAsync(HSTRING contentId, ::IUnknown* propertiesToRetrieve, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RetrievePropertiesAsync(*reinterpret_cast<hstring const*>(&contentId), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&propertiesToRetrieve)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Revision(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Revision());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Search::IContentIndexerQuery> : produce_base<D, Windows::Storage::Search::IContentIndexerQuery>
{
    HRESULT __stdcall GetCountAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCountAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPropertiesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPropertiesRangeAsync(uint32_t startIndex, uint32_t maxItems, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPropertiesAsync(startIndex, maxItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRangeAsync(uint32_t startIndex, uint32_t maxItems, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAsync(startIndex, maxItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryFolder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryFolder());
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
struct produce<D, Windows::Storage::Search::IContentIndexerQueryOperations> : produce_base<D, Windows::Storage::Search::IContentIndexerQueryOperations>
{
    HRESULT __stdcall CreateQueryWithSortOrderAndLanguage(HSTRING searchFilter, ::IUnknown* propertiesToRetrieve, ::IUnknown* sortOrder, HSTRING searchFilterLanguage, ::IUnknown** query) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *query = detach_abi(this->shim().CreateQuery(*reinterpret_cast<hstring const*>(&searchFilter), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&propertiesToRetrieve), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::Search::SortEntry> const*>(&sortOrder), *reinterpret_cast<hstring const*>(&searchFilterLanguage)));
            return S_OK;
        }
        catch (...)
        {
            *query = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateQueryWithSortOrder(HSTRING searchFilter, ::IUnknown* propertiesToRetrieve, ::IUnknown* sortOrder, ::IUnknown** query) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *query = detach_abi(this->shim().CreateQuery(*reinterpret_cast<hstring const*>(&searchFilter), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&propertiesToRetrieve), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::Search::SortEntry> const*>(&sortOrder)));
            return S_OK;
        }
        catch (...)
        {
            *query = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateQuery(HSTRING searchFilter, ::IUnknown* propertiesToRetrieve, ::IUnknown** query) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *query = detach_abi(this->shim().CreateQuery(*reinterpret_cast<hstring const*>(&searchFilter), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&propertiesToRetrieve)));
            return S_OK;
        }
        catch (...)
        {
            *query = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Search::IContentIndexerStatics> : produce_base<D, Windows::Storage::Search::IContentIndexerStatics>
{
    HRESULT __stdcall GetIndexerWithName(HSTRING indexName, ::IUnknown** index) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *index = detach_abi(this->shim().GetIndexer(*reinterpret_cast<hstring const*>(&indexName)));
            return S_OK;
        }
        catch (...)
        {
            *index = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIndexer(::IUnknown** index) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *index = detach_abi(this->shim().GetIndexer());
            return S_OK;
        }
        catch (...)
        {
            *index = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Search::IIndexableContent> : produce_base<D, Windows::Storage::Search::IIndexableContent>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Stream(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Stream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Stream(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stream(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreamContentType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StreamContentType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StreamContentType(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StreamContentType(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Search::IQueryOptions> : produce_base<D, Windows::Storage::Search::IQueryOptions>
{
    HRESULT __stdcall get_FileTypeFilter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileTypeFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FolderDepth(abi_t<Windows::Storage::Search::FolderDepth>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FolderDepth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FolderDepth(abi_t<Windows::Storage::Search::FolderDepth> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FolderDepth(*reinterpret_cast<Windows::Storage::Search::FolderDepth const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationSearchFilter(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationSearchFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ApplicationSearchFilter(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplicationSearchFilter(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserSearchFilter(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserSearchFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserSearchFilter(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserSearchFilter(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Language(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Language(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IndexerOption(abi_t<Windows::Storage::Search::IndexerOption>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IndexerOption());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IndexerOption(abi_t<Windows::Storage::Search::IndexerOption> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IndexerOption(*reinterpret_cast<Windows::Storage::Search::IndexerOption const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SortOrder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SortOrder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GroupPropertyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GroupPropertyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateStackOption(abi_t<Windows::Storage::Search::DateStackOption>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DateStackOption());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveToString(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SaveToString());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadFromString(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadFromString(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetThumbnailPrefetch(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedSize, abi_t<Windows::Storage::FileProperties::ThumbnailOptions> options) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetThumbnailPrefetch(*reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode), requestedSize, *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyPrefetch(abi_t<Windows::Storage::FileProperties::PropertyPrefetchOptions> options, ::IUnknown* propertiesToRetrieve) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyPrefetch(*reinterpret_cast<Windows::Storage::FileProperties::PropertyPrefetchOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&propertiesToRetrieve));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Search::IQueryOptionsFactory> : produce_base<D, Windows::Storage::Search::IQueryOptionsFactory>
{
    HRESULT __stdcall CreateCommonFileQuery(abi_t<Windows::Storage::Search::CommonFileQuery> query, ::IUnknown* fileTypeFilter, ::IUnknown** queryOptions) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *queryOptions = detach_abi(this->shim().CreateCommonFileQuery(*reinterpret_cast<Windows::Storage::Search::CommonFileQuery const*>(&query), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&fileTypeFilter)));
            return S_OK;
        }
        catch (...)
        {
            *queryOptions = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCommonFolderQuery(abi_t<Windows::Storage::Search::CommonFolderQuery> query, ::IUnknown** queryOptions) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *queryOptions = detach_abi(this->shim().CreateCommonFolderQuery(*reinterpret_cast<Windows::Storage::Search::CommonFolderQuery const*>(&query)));
            return S_OK;
        }
        catch (...)
        {
            *queryOptions = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Search::IQueryOptionsWithProviderFilter> : produce_base<D, Windows::Storage::Search::IQueryOptionsWithProviderFilter>
{
    HRESULT __stdcall get_StorageProviderIdFilter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StorageProviderIdFilter());
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
struct produce<D, Windows::Storage::Search::IStorageFileQueryResult> : produce_base<D, Windows::Storage::Search::IStorageFileQueryResult>
{
    HRESULT __stdcall GetFilesAsync(uint32_t startIndex, uint32_t maxNumberOfItems, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFilesAsync(startIndex, maxNumberOfItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFilesAsyncDefaultStartAndCount(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFilesAsync());
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
struct produce<D, Windows::Storage::Search::IStorageFileQueryResult2> : produce_base<D, Windows::Storage::Search::IStorageFileQueryResult2>
{
    HRESULT __stdcall GetMatchingPropertiesWithRanges(::IUnknown* file, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetMatchingPropertiesWithRanges(*reinterpret_cast<Windows::Storage::StorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Search::IStorageFolderQueryOperations> : produce_base<D, Windows::Storage::Search::IStorageFolderQueryOperations>
{
    HRESULT __stdcall GetIndexedStateAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIndexedStateAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFileQueryOverloadDefault(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFileQuery());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFileQuery(abi_t<Windows::Storage::Search::CommonFileQuery> query, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFileQuery(*reinterpret_cast<Windows::Storage::Search::CommonFileQuery const*>(&query)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFileQueryWithOptions(::IUnknown* queryOptions, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFileQueryWithOptions(*reinterpret_cast<Windows::Storage::Search::QueryOptions const*>(&queryOptions)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFolderQueryOverloadDefault(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFolderQuery());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFolderQuery(abi_t<Windows::Storage::Search::CommonFolderQuery> query, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFolderQuery(*reinterpret_cast<Windows::Storage::Search::CommonFolderQuery const*>(&query)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFolderQueryWithOptions(::IUnknown* queryOptions, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFolderQueryWithOptions(*reinterpret_cast<Windows::Storage::Search::QueryOptions const*>(&queryOptions)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateItemQuery(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateItemQuery());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateItemQueryWithOptions(::IUnknown* queryOptions, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateItemQueryWithOptions(*reinterpret_cast<Windows::Storage::Search::QueryOptions const*>(&queryOptions)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFilesAsync(abi_t<Windows::Storage::Search::CommonFileQuery> query, uint32_t startIndex, uint32_t maxItemsToRetrieve, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFilesAsync(*reinterpret_cast<Windows::Storage::Search::CommonFileQuery const*>(&query), startIndex, maxItemsToRetrieve));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFilesAsyncOverloadDefaultStartAndCount(abi_t<Windows::Storage::Search::CommonFileQuery> query, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFilesAsync(*reinterpret_cast<Windows::Storage::Search::CommonFileQuery const*>(&query)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFoldersAsync(abi_t<Windows::Storage::Search::CommonFolderQuery> query, uint32_t startIndex, uint32_t maxItemsToRetrieve, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFoldersAsync(*reinterpret_cast<Windows::Storage::Search::CommonFolderQuery const*>(&query), startIndex, maxItemsToRetrieve));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFoldersAsyncOverloadDefaultStartAndCount(abi_t<Windows::Storage::Search::CommonFolderQuery> query, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFoldersAsync(*reinterpret_cast<Windows::Storage::Search::CommonFolderQuery const*>(&query)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetItemsAsync(startIndex, maxItemsToRetrieve));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AreQueryOptionsSupported(::IUnknown* queryOptions, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AreQueryOptionsSupported(*reinterpret_cast<Windows::Storage::Search::QueryOptions const*>(&queryOptions)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsCommonFolderQuerySupported(abi_t<Windows::Storage::Search::CommonFolderQuery> query, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCommonFolderQuerySupported(*reinterpret_cast<Windows::Storage::Search::CommonFolderQuery const*>(&query)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsCommonFileQuerySupported(abi_t<Windows::Storage::Search::CommonFileQuery> query, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCommonFileQuerySupported(*reinterpret_cast<Windows::Storage::Search::CommonFileQuery const*>(&query)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Search::IStorageFolderQueryResult> : produce_base<D, Windows::Storage::Search::IStorageFolderQueryResult>
{
    HRESULT __stdcall GetFoldersAsync(uint32_t startIndex, uint32_t maxNumberOfItems, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFoldersAsync(startIndex, maxNumberOfItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFoldersAsyncDefaultStartAndCount(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFoldersAsync());
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
struct produce<D, Windows::Storage::Search::IStorageItemQueryResult> : produce_base<D, Windows::Storage::Search::IStorageItemQueryResult>
{
    HRESULT __stdcall GetItemsAsync(uint32_t startIndex, uint32_t maxNumberOfItems, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetItemsAsync(startIndex, maxNumberOfItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItemsAsyncDefaultStartAndCount(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetItemsAsync());
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
struct produce<D, Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails> : produce_base<D, Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails>
{
    HRESULT __stdcall get_Folder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Folder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateModifiedSinceQuery(abi_t<Windows::Foundation::DateTime> lastQueryTime, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateModifiedSinceQuery(*reinterpret_cast<Windows::Foundation::DateTime const*>(&lastQueryTime)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Search::IStorageQueryResultBase> : produce_base<D, Windows::Storage::Search::IStorageQueryResultBase>
{
    HRESULT __stdcall GetItemCountAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetItemCountAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Folder(::IUnknown** container) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *container = detach_abi(this->shim().Folder());
            return S_OK;
        }
        catch (...)
        {
            *container = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ContentsChanged(::IUnknown* handler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().ContentsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ContentsChanged(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentsChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OptionsChanged(::IUnknown* changedHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().OptionsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const*>(&changedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OptionsChanged(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OptionsChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindStartIndexAsync(::IUnknown* value, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindStartIndexAsync(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentQueryOptions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentQueryOptions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ApplyNewQueryOptions(::IUnknown* newQueryOptions) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplyNewQueryOptions(*reinterpret_cast<Windows::Storage::Search::QueryOptions const*>(&newQueryOptions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Search::IValueAndLanguage> : produce_base<D, Windows::Storage::Search::IValueAndLanguage>
{
    HRESULT __stdcall get_Language(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Language(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Language(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Storage::Search {

inline Windows::Storage::Search::ContentIndexer ContentIndexer::GetIndexer(param::hstring const& indexName)
{
    return get_activation_factory<ContentIndexer, Windows::Storage::Search::IContentIndexerStatics>().GetIndexer(indexName);
}

inline Windows::Storage::Search::ContentIndexer ContentIndexer::GetIndexer()
{
    return get_activation_factory<ContentIndexer, Windows::Storage::Search::IContentIndexerStatics>().GetIndexer();
}

inline IndexableContent::IndexableContent() :
    IndexableContent(activate_instance<IndexableContent>())
{}

inline QueryOptions::QueryOptions() :
    QueryOptions(activate_instance<QueryOptions>())
{}

inline QueryOptions::QueryOptions(Windows::Storage::Search::CommonFileQuery const& query, param::iterable<hstring> const& fileTypeFilter) :
    QueryOptions(get_activation_factory<QueryOptions, Windows::Storage::Search::IQueryOptionsFactory>().CreateCommonFileQuery(query, fileTypeFilter))
{}

inline QueryOptions::QueryOptions(Windows::Storage::Search::CommonFolderQuery const& query) :
    QueryOptions(get_activation_factory<QueryOptions, Windows::Storage::Search::IQueryOptionsFactory>().CreateCommonFolderQuery(query))
{}

inline ValueAndLanguage::ValueAndLanguage() :
    ValueAndLanguage(activate_instance<ValueAndLanguage>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Storage::Search::IContentIndexer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IContentIndexer> {};

template<> struct hash<winrt::Windows::Storage::Search::IContentIndexerQuery> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IContentIndexerQuery> {};

template<> struct hash<winrt::Windows::Storage::Search::IContentIndexerQueryOperations> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IContentIndexerQueryOperations> {};

template<> struct hash<winrt::Windows::Storage::Search::IContentIndexerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IContentIndexerStatics> {};

template<> struct hash<winrt::Windows::Storage::Search::IIndexableContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IIndexableContent> {};

template<> struct hash<winrt::Windows::Storage::Search::IQueryOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IQueryOptions> {};

template<> struct hash<winrt::Windows::Storage::Search::IQueryOptionsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IQueryOptionsFactory> {};

template<> struct hash<winrt::Windows::Storage::Search::IQueryOptionsWithProviderFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IQueryOptionsWithProviderFilter> {};

template<> struct hash<winrt::Windows::Storage::Search::IStorageFileQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IStorageFileQueryResult> {};

template<> struct hash<winrt::Windows::Storage::Search::IStorageFileQueryResult2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IStorageFileQueryResult2> {};

template<> struct hash<winrt::Windows::Storage::Search::IStorageFolderQueryOperations> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IStorageFolderQueryOperations> {};

template<> struct hash<winrt::Windows::Storage::Search::IStorageFolderQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IStorageFolderQueryResult> {};

template<> struct hash<winrt::Windows::Storage::Search::IStorageItemQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IStorageItemQueryResult> {};

template<> struct hash<winrt::Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails> {};

template<> struct hash<winrt::Windows::Storage::Search::IStorageQueryResultBase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IStorageQueryResultBase> {};

template<> struct hash<winrt::Windows::Storage::Search::IValueAndLanguage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IValueAndLanguage> {};

template<> struct hash<winrt::Windows::Storage::Search::ContentIndexer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::ContentIndexer> {};

template<> struct hash<winrt::Windows::Storage::Search::ContentIndexerQuery> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::ContentIndexerQuery> {};

template<> struct hash<winrt::Windows::Storage::Search::IndexableContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::IndexableContent> {};

template<> struct hash<winrt::Windows::Storage::Search::QueryOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::QueryOptions> {};

template<> struct hash<winrt::Windows::Storage::Search::SortEntryVector> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::SortEntryVector> {};

template<> struct hash<winrt::Windows::Storage::Search::StorageFileQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::StorageFileQueryResult> {};

template<> struct hash<winrt::Windows::Storage::Search::StorageFolderQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::StorageFolderQueryResult> {};

template<> struct hash<winrt::Windows::Storage::Search::StorageItemQueryResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::StorageItemQueryResult> {};

template<> struct hash<winrt::Windows::Storage::Search::StorageLibraryContentChangedTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::StorageLibraryContentChangedTriggerDetails> {};

template<> struct hash<winrt::Windows::Storage::Search::ValueAndLanguage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Search::ValueAndLanguage> {};

}

WINRT_WARNING_POP
