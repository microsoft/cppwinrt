// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Storage.FileProperties.3.h"
#include "internal/Windows.Storage.Search.3.h"
#include "Windows.Storage.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Storage::Search::IContentIndexer> : produce_base<D, Windows::Storage::Search::IContentIndexer>
{
    HRESULT __stdcall abi_AddAsync(abi_arg_in<Windows::Storage::Search::IIndexableContent> indexableContent, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().AddAsync(*reinterpret_cast<const Windows::Storage::Search::IIndexableContent *>(&indexableContent)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateAsync(abi_arg_in<Windows::Storage::Search::IIndexableContent> indexableContent, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().UpdateAsync(*reinterpret_cast<const Windows::Storage::Search::IIndexableContent *>(&indexableContent)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsync(abi_arg_in<hstring> contentId, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DeleteAsync(*reinterpret_cast<const hstring *>(&contentId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteMultipleAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> contentIds, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DeleteMultipleAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&contentIds)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAllAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DeleteAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RetrievePropertiesAsync(abi_arg_in<hstring> contentId, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> propertiesToRetrieve, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RetrievePropertiesAsync(*reinterpret_cast<const hstring *>(&contentId), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&propertiesToRetrieve)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Revision(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Revision());
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
    HRESULT __stdcall abi_GetCountAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetCountAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPropertiesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPropertiesRangeAsync(uint32_t startIndex, uint32_t maxItems, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPropertiesAsync(startIndex, maxItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRangeAsync(uint32_t startIndex, uint32_t maxItems, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetAsync(startIndex, maxItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryFolder(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QueryFolder());
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
    HRESULT __stdcall abi_CreateQueryWithSortOrderAndLanguage(abi_arg_in<hstring> searchFilter, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> propertiesToRetrieve, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Storage::Search::SortEntry>> sortOrder, abi_arg_in<hstring> searchFilterLanguage, abi_arg_out<Windows::Storage::Search::IContentIndexerQuery> query) noexcept override
    {
        try
        {
            *query = detach(this->shim().CreateQuery(*reinterpret_cast<const hstring *>(&searchFilter), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&propertiesToRetrieve), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Storage::Search::SortEntry> *>(&sortOrder), *reinterpret_cast<const hstring *>(&searchFilterLanguage)));
            return S_OK;
        }
        catch (...)
        {
            *query = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateQueryWithSortOrder(abi_arg_in<hstring> searchFilter, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> propertiesToRetrieve, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Storage::Search::SortEntry>> sortOrder, abi_arg_out<Windows::Storage::Search::IContentIndexerQuery> query) noexcept override
    {
        try
        {
            *query = detach(this->shim().CreateQuery(*reinterpret_cast<const hstring *>(&searchFilter), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&propertiesToRetrieve), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Storage::Search::SortEntry> *>(&sortOrder)));
            return S_OK;
        }
        catch (...)
        {
            *query = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateQuery(abi_arg_in<hstring> searchFilter, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> propertiesToRetrieve, abi_arg_out<Windows::Storage::Search::IContentIndexerQuery> query) noexcept override
    {
        try
        {
            *query = detach(this->shim().CreateQuery(*reinterpret_cast<const hstring *>(&searchFilter), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&propertiesToRetrieve)));
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
    HRESULT __stdcall abi_GetIndexerWithName(abi_arg_in<hstring> indexName, abi_arg_out<Windows::Storage::Search::IContentIndexer> index) noexcept override
    {
        try
        {
            *index = detach(this->shim().GetIndexer(*reinterpret_cast<const hstring *>(&indexName)));
            return S_OK;
        }
        catch (...)
        {
            *index = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIndexer(abi_arg_out<Windows::Storage::Search::IContentIndexer> index) noexcept override
    {
        try
        {
            *index = detach(this->shim().GetIndexer());
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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Id(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Stream(abi_arg_out<Windows::Storage::Streams::IRandomAccessStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Stream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Stream(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> value) noexcept override
    {
        try
        {
            this->shim().Stream(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreamContentType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StreamContentType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StreamContentType(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().StreamContentType(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_FileTypeFilter(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FileTypeFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FolderDepth(Windows::Storage::Search::FolderDepth * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FolderDepth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FolderDepth(Windows::Storage::Search::FolderDepth value) noexcept override
    {
        try
        {
            this->shim().FolderDepth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationSearchFilter(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ApplicationSearchFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ApplicationSearchFilter(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ApplicationSearchFilter(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserSearchFilter(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserSearchFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserSearchFilter(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().UserSearchFilter(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Language(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Language(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IndexerOption(Windows::Storage::Search::IndexerOption * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IndexerOption());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IndexerOption(Windows::Storage::Search::IndexerOption value) noexcept override
    {
        try
        {
            this->shim().IndexerOption(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SortOrder(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Storage::Search::SortEntry>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SortOrder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GroupPropertyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GroupPropertyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateStackOption(Windows::Storage::Search::DateStackOption * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DateStackOption());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveToString(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SaveToString());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadFromString(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().LoadFromString(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetThumbnailPrefetch(Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize, Windows::Storage::FileProperties::ThumbnailOptions options) noexcept override
    {
        try
        {
            this->shim().SetThumbnailPrefetch(mode, requestedSize, options);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyPrefetch(Windows::Storage::FileProperties::PropertyPrefetchOptions options, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> propertiesToRetrieve) noexcept override
    {
        try
        {
            this->shim().SetPropertyPrefetch(options, *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&propertiesToRetrieve));
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
    HRESULT __stdcall abi_CreateCommonFileQuery(Windows::Storage::Search::CommonFileQuery query, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> fileTypeFilter, abi_arg_out<Windows::Storage::Search::IQueryOptions> queryOptions) noexcept override
    {
        try
        {
            *queryOptions = detach(this->shim().CreateCommonFileQuery(query, *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&fileTypeFilter)));
            return S_OK;
        }
        catch (...)
        {
            *queryOptions = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateCommonFolderQuery(Windows::Storage::Search::CommonFolderQuery query, abi_arg_out<Windows::Storage::Search::IQueryOptions> queryOptions) noexcept override
    {
        try
        {
            *queryOptions = detach(this->shim().CreateCommonFolderQuery(query));
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
    HRESULT __stdcall get_StorageProviderIdFilter(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StorageProviderIdFilter());
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
    HRESULT __stdcall abi_GetFilesAsync(uint32_t startIndex, uint32_t maxNumberOfItems, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFilesAsync(startIndex, maxNumberOfItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFilesAsyncDefaultStartAndCount(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFilesAsync());
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
    HRESULT __stdcall abi_GetMatchingPropertiesWithRanges(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetMatchingPropertiesWithRanges(*reinterpret_cast<const Windows::Storage::StorageFile *>(&file)));
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
    HRESULT __stdcall abi_GetIndexedStateAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Search::IndexedState>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetIndexedStateAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFileQueryOverloadDefault(abi_arg_out<Windows::Storage::Search::IStorageFileQueryResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateFileQuery());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFileQuery(Windows::Storage::Search::CommonFileQuery query, abi_arg_out<Windows::Storage::Search::IStorageFileQueryResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateFileQuery(query));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFileQueryWithOptions(abi_arg_in<Windows::Storage::Search::IQueryOptions> queryOptions, abi_arg_out<Windows::Storage::Search::IStorageFileQueryResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateFileQueryWithOptions(*reinterpret_cast<const Windows::Storage::Search::QueryOptions *>(&queryOptions)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFolderQueryOverloadDefault(abi_arg_out<Windows::Storage::Search::IStorageFolderQueryResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateFolderQuery());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFolderQuery(Windows::Storage::Search::CommonFolderQuery query, abi_arg_out<Windows::Storage::Search::IStorageFolderQueryResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateFolderQuery(query));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFolderQueryWithOptions(abi_arg_in<Windows::Storage::Search::IQueryOptions> queryOptions, abi_arg_out<Windows::Storage::Search::IStorageFolderQueryResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateFolderQueryWithOptions(*reinterpret_cast<const Windows::Storage::Search::QueryOptions *>(&queryOptions)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateItemQuery(abi_arg_out<Windows::Storage::Search::IStorageItemQueryResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateItemQuery());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateItemQueryWithOptions(abi_arg_in<Windows::Storage::Search::IQueryOptions> queryOptions, abi_arg_out<Windows::Storage::Search::IStorageItemQueryResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateItemQueryWithOptions(*reinterpret_cast<const Windows::Storage::Search::QueryOptions *>(&queryOptions)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFilesAsync(Windows::Storage::Search::CommonFileQuery query, uint32_t startIndex, uint32_t maxItemsToRetrieve, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFilesAsync(query, startIndex, maxItemsToRetrieve));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFilesAsyncOverloadDefaultStartAndCount(Windows::Storage::Search::CommonFileQuery query, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFilesAsync(query));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFoldersAsync(Windows::Storage::Search::CommonFolderQuery query, uint32_t startIndex, uint32_t maxItemsToRetrieve, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFoldersAsync(query, startIndex, maxItemsToRetrieve));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFoldersAsyncOverloadDefaultStartAndCount(Windows::Storage::Search::CommonFolderQuery query, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFoldersAsync(query));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetItemsAsync(startIndex, maxItemsToRetrieve));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AreQueryOptionsSupported(abi_arg_in<Windows::Storage::Search::IQueryOptions> queryOptions, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AreQueryOptionsSupported(*reinterpret_cast<const Windows::Storage::Search::QueryOptions *>(&queryOptions)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsCommonFolderQuerySupported(Windows::Storage::Search::CommonFolderQuery query, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCommonFolderQuerySupported(query));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsCommonFileQuerySupported(Windows::Storage::Search::CommonFileQuery query, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCommonFileQuerySupported(query));
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
    HRESULT __stdcall abi_GetFoldersAsync(uint32_t startIndex, uint32_t maxNumberOfItems, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFoldersAsync(startIndex, maxNumberOfItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFoldersAsyncDefaultStartAndCount(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFoldersAsync());
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
    HRESULT __stdcall abi_GetItemsAsync(uint32_t startIndex, uint32_t maxNumberOfItems, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetItemsAsync(startIndex, maxNumberOfItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetItemsAsyncDefaultStartAndCount(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetItemsAsync());
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
    HRESULT __stdcall get_Folder(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Folder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateModifiedSinceQuery(abi_arg_in<Windows::Foundation::DateTime> lastQueryTime, abi_arg_out<Windows::Storage::Search::IStorageItemQueryResult> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateModifiedSinceQuery(*reinterpret_cast<const Windows::Foundation::DateTime *>(&lastQueryTime)));
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
    HRESULT __stdcall abi_GetItemCountAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetItemCountAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Folder(abi_arg_out<Windows::Storage::IStorageFolder> container) noexcept override
    {
        try
        {
            *container = detach(this->shim().Folder());
            return S_OK;
        }
        catch (...)
        {
            *container = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ContentsChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::IInspectable>> handler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().ContentsChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ContentsChanged(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().ContentsChanged(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OptionsChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::IInspectable>> changedHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().OptionsChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::IInspectable> *>(&changedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OptionsChanged(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().OptionsChanged(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindStartIndexAsync(abi_arg_in<Windows::IInspectable> value, abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindStartIndexAsync(*reinterpret_cast<const Windows::IInspectable *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentQueryOptions(abi_arg_out<Windows::Storage::Search::IQueryOptions> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetCurrentQueryOptions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ApplyNewQueryOptions(abi_arg_in<Windows::Storage::Search::IQueryOptions> newQueryOptions) noexcept override
    {
        try
        {
            this->shim().ApplyNewQueryOptions(*reinterpret_cast<const Windows::Storage::Search::QueryOptions *>(&newQueryOptions));
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
    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Language(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Language(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Storage::Search {

template <typename D> Windows::Storage::Search::ContentIndexer impl_IContentIndexerStatics<D>::GetIndexer(hstring_ref indexName) const
{
    Windows::Storage::Search::ContentIndexer index { nullptr };
    check_hresult(static_cast<const IContentIndexerStatics &>(static_cast<const D &>(*this))->abi_GetIndexerWithName(get(indexName), put(index)));
    return index;
}

template <typename D> Windows::Storage::Search::ContentIndexer impl_IContentIndexerStatics<D>::GetIndexer() const
{
    Windows::Storage::Search::ContentIndexer index { nullptr };
    check_hresult(static_cast<const IContentIndexerStatics &>(static_cast<const D &>(*this))->abi_GetIndexer(put(index)));
    return index;
}

template <typename D> hstring impl_IIndexableContent<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IIndexableContent &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> void impl_IIndexableContent<D>::Id(hstring_ref value) const
{
    check_hresult(static_cast<const IIndexableContent &>(static_cast<const D &>(*this))->put_Id(get(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable> impl_IIndexableContent<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable> value;
    check_hresult(static_cast<const IIndexableContent &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream impl_IIndexableContent<D>::Stream() const
{
    Windows::Storage::Streams::IRandomAccessStream value;
    check_hresult(static_cast<const IIndexableContent &>(static_cast<const D &>(*this))->get_Stream(put(value)));
    return value;
}

template <typename D> void impl_IIndexableContent<D>::Stream(const Windows::Storage::Streams::IRandomAccessStream & value) const
{
    check_hresult(static_cast<const IIndexableContent &>(static_cast<const D &>(*this))->put_Stream(get(value)));
}

template <typename D> hstring impl_IIndexableContent<D>::StreamContentType() const
{
    hstring value;
    check_hresult(static_cast<const IIndexableContent &>(static_cast<const D &>(*this))->get_StreamContentType(put(value)));
    return value;
}

template <typename D> void impl_IIndexableContent<D>::StreamContentType(hstring_ref value) const
{
    check_hresult(static_cast<const IIndexableContent &>(static_cast<const D &>(*this))->put_StreamContentType(get(value)));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContentIndexer<D>::AddAsync(const Windows::Storage::Search::IIndexableContent & indexableContent) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IContentIndexer &>(static_cast<const D &>(*this))->abi_AddAsync(get(indexableContent), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContentIndexer<D>::UpdateAsync(const Windows::Storage::Search::IIndexableContent & indexableContent) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IContentIndexer &>(static_cast<const D &>(*this))->abi_UpdateAsync(get(indexableContent), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContentIndexer<D>::DeleteAsync(hstring_ref contentId) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IContentIndexer &>(static_cast<const D &>(*this))->abi_DeleteAsync(get(contentId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContentIndexer<D>::DeleteMultipleAsync(const Windows::Foundation::Collections::IIterable<hstring> & contentIds) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IContentIndexer &>(static_cast<const D &>(*this))->abi_DeleteMultipleAsync(get(contentIds), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContentIndexer<D>::DeleteAllAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IContentIndexer &>(static_cast<const D &>(*this))->abi_DeleteAllAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> impl_IContentIndexer<D>::RetrievePropertiesAsync(hstring_ref contentId, const Windows::Foundation::Collections::IIterable<hstring> & propertiesToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> operation;
    check_hresult(static_cast<const IContentIndexer &>(static_cast<const D &>(*this))->abi_RetrievePropertiesAsync(get(contentId), get(propertiesToRetrieve), put(operation)));
    return operation;
}

template <typename D> uint64_t impl_IContentIndexer<D>::Revision() const
{
    uint64_t value {};
    check_hresult(static_cast<const IContentIndexer &>(static_cast<const D &>(*this))->get_Revision(&value));
    return value;
}

template <typename D> hstring impl_IValueAndLanguage<D>::Language() const
{
    hstring value;
    check_hresult(static_cast<const IValueAndLanguage &>(static_cast<const D &>(*this))->get_Language(put(value)));
    return value;
}

template <typename D> void impl_IValueAndLanguage<D>::Language(hstring_ref value) const
{
    check_hresult(static_cast<const IValueAndLanguage &>(static_cast<const D &>(*this))->put_Language(get(value)));
}

template <typename D> Windows::IInspectable impl_IValueAndLanguage<D>::Value() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IValueAndLanguage &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IValueAndLanguage<D>::Value(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IValueAndLanguage &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> Windows::Storage::Search::ContentIndexerQuery impl_IContentIndexerQueryOperations<D>::CreateQuery(hstring_ref searchFilter, const Windows::Foundation::Collections::IIterable<hstring> & propertiesToRetrieve, const Windows::Foundation::Collections::IIterable<Windows::Storage::Search::SortEntry> & sortOrder, hstring_ref searchFilterLanguage) const
{
    Windows::Storage::Search::ContentIndexerQuery query { nullptr };
    check_hresult(static_cast<const IContentIndexerQueryOperations &>(static_cast<const D &>(*this))->abi_CreateQueryWithSortOrderAndLanguage(get(searchFilter), get(propertiesToRetrieve), get(sortOrder), get(searchFilterLanguage), put(query)));
    return query;
}

template <typename D> Windows::Storage::Search::ContentIndexerQuery impl_IContentIndexerQueryOperations<D>::CreateQuery(hstring_ref searchFilter, const Windows::Foundation::Collections::IIterable<hstring> & propertiesToRetrieve, const Windows::Foundation::Collections::IIterable<Windows::Storage::Search::SortEntry> & sortOrder) const
{
    Windows::Storage::Search::ContentIndexerQuery query { nullptr };
    check_hresult(static_cast<const IContentIndexerQueryOperations &>(static_cast<const D &>(*this))->abi_CreateQueryWithSortOrder(get(searchFilter), get(propertiesToRetrieve), get(sortOrder), put(query)));
    return query;
}

template <typename D> Windows::Storage::Search::ContentIndexerQuery impl_IContentIndexerQueryOperations<D>::CreateQuery(hstring_ref searchFilter, const Windows::Foundation::Collections::IIterable<hstring> & propertiesToRetrieve) const
{
    Windows::Storage::Search::ContentIndexerQuery query { nullptr };
    check_hresult(static_cast<const IContentIndexerQueryOperations &>(static_cast<const D &>(*this))->abi_CreateQuery(get(searchFilter), get(propertiesToRetrieve), put(query)));
    return query;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> impl_IContentIndexerQuery<D>::GetCountAsync() const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation;
    check_hresult(static_cast<const IContentIndexerQuery &>(static_cast<const D &>(*this))->abi_GetCountAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>>> impl_IContentIndexerQuery<D>::GetPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>>> operation;
    check_hresult(static_cast<const IContentIndexerQuery &>(static_cast<const D &>(*this))->abi_GetPropertiesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>>> impl_IContentIndexerQuery<D>::GetPropertiesAsync(uint32_t startIndex, uint32_t maxItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>>> operation;
    check_hresult(static_cast<const IContentIndexerQuery &>(static_cast<const D &>(*this))->abi_GetPropertiesRangeAsync(startIndex, maxItems, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>> impl_IContentIndexerQuery<D>::GetAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>> operation;
    check_hresult(static_cast<const IContentIndexerQuery &>(static_cast<const D &>(*this))->abi_GetAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>> impl_IContentIndexerQuery<D>::GetAsync(uint32_t startIndex, uint32_t maxItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>> operation;
    check_hresult(static_cast<const IContentIndexerQuery &>(static_cast<const D &>(*this))->abi_GetRangeAsync(startIndex, maxItems, put(operation)));
    return operation;
}

template <typename D> Windows::Storage::StorageFolder impl_IContentIndexerQuery<D>::QueryFolder() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IContentIndexerQuery &>(static_cast<const D &>(*this))->get_QueryFolder(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IQueryOptions<D>::FileTypeFilter() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->get_FileTypeFilter(put(value)));
    return value;
}

template <typename D> Windows::Storage::Search::FolderDepth impl_IQueryOptions<D>::FolderDepth() const
{
    Windows::Storage::Search::FolderDepth value {};
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->get_FolderDepth(&value));
    return value;
}

template <typename D> void impl_IQueryOptions<D>::FolderDepth(Windows::Storage::Search::FolderDepth value) const
{
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->put_FolderDepth(value));
}

template <typename D> hstring impl_IQueryOptions<D>::ApplicationSearchFilter() const
{
    hstring value;
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->get_ApplicationSearchFilter(put(value)));
    return value;
}

template <typename D> void impl_IQueryOptions<D>::ApplicationSearchFilter(hstring_ref value) const
{
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->put_ApplicationSearchFilter(get(value)));
}

template <typename D> hstring impl_IQueryOptions<D>::UserSearchFilter() const
{
    hstring value;
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->get_UserSearchFilter(put(value)));
    return value;
}

template <typename D> void impl_IQueryOptions<D>::UserSearchFilter(hstring_ref value) const
{
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->put_UserSearchFilter(get(value)));
}

template <typename D> hstring impl_IQueryOptions<D>::Language() const
{
    hstring value;
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->get_Language(put(value)));
    return value;
}

template <typename D> void impl_IQueryOptions<D>::Language(hstring_ref value) const
{
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->put_Language(get(value)));
}

template <typename D> Windows::Storage::Search::IndexerOption impl_IQueryOptions<D>::IndexerOption() const
{
    Windows::Storage::Search::IndexerOption value {};
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->get_IndexerOption(&value));
    return value;
}

template <typename D> void impl_IQueryOptions<D>::IndexerOption(Windows::Storage::Search::IndexerOption value) const
{
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->put_IndexerOption(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Storage::Search::SortEntry> impl_IQueryOptions<D>::SortOrder() const
{
    Windows::Foundation::Collections::IVector<Windows::Storage::Search::SortEntry> value;
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->get_SortOrder(put(value)));
    return value;
}

template <typename D> hstring impl_IQueryOptions<D>::GroupPropertyName() const
{
    hstring value;
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->get_GroupPropertyName(put(value)));
    return value;
}

template <typename D> Windows::Storage::Search::DateStackOption impl_IQueryOptions<D>::DateStackOption() const
{
    Windows::Storage::Search::DateStackOption value {};
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->get_DateStackOption(&value));
    return value;
}

template <typename D> hstring impl_IQueryOptions<D>::SaveToString() const
{
    hstring value;
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->abi_SaveToString(put(value)));
    return value;
}

template <typename D> void impl_IQueryOptions<D>::LoadFromString(hstring_ref value) const
{
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->abi_LoadFromString(get(value)));
}

template <typename D> void impl_IQueryOptions<D>::SetThumbnailPrefetch(Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize, Windows::Storage::FileProperties::ThumbnailOptions options) const
{
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->abi_SetThumbnailPrefetch(mode, requestedSize, options));
}

template <typename D> void impl_IQueryOptions<D>::SetPropertyPrefetch(Windows::Storage::FileProperties::PropertyPrefetchOptions options, const Windows::Foundation::Collections::IIterable<hstring> & propertiesToRetrieve) const
{
    check_hresult(static_cast<const IQueryOptions &>(static_cast<const D &>(*this))->abi_SetPropertyPrefetch(options, get(propertiesToRetrieve)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IQueryOptionsWithProviderFilter<D>::StorageProviderIdFilter() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IQueryOptionsWithProviderFilter &>(static_cast<const D &>(*this))->get_StorageProviderIdFilter(put(value)));
    return value;
}

template <typename D> Windows::Storage::Search::QueryOptions impl_IQueryOptionsFactory<D>::CreateCommonFileQuery(Windows::Storage::Search::CommonFileQuery query, const Windows::Foundation::Collections::IIterable<hstring> & fileTypeFilter) const
{
    Windows::Storage::Search::QueryOptions queryOptions { nullptr };
    check_hresult(static_cast<const IQueryOptionsFactory &>(static_cast<const D &>(*this))->abi_CreateCommonFileQuery(query, get(fileTypeFilter), put(queryOptions)));
    return queryOptions;
}

template <typename D> Windows::Storage::Search::QueryOptions impl_IQueryOptionsFactory<D>::CreateCommonFolderQuery(Windows::Storage::Search::CommonFolderQuery query) const
{
    Windows::Storage::Search::QueryOptions queryOptions { nullptr };
    check_hresult(static_cast<const IQueryOptionsFactory &>(static_cast<const D &>(*this))->abi_CreateCommonFolderQuery(query, put(queryOptions)));
    return queryOptions;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> impl_IStorageQueryResultBase<D>::GetItemCountAsync() const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation;
    check_hresult(static_cast<const IStorageQueryResultBase &>(static_cast<const D &>(*this))->abi_GetItemCountAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Storage::StorageFolder impl_IStorageQueryResultBase<D>::Folder() const
{
    Windows::Storage::StorageFolder container { nullptr };
    check_hresult(static_cast<const IStorageQueryResultBase &>(static_cast<const D &>(*this))->get_Folder(put(container)));
    return container;
}

template <typename D> event_token impl_IStorageQueryResultBase<D>::ContentsChanged(const Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::IInspectable> & handler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IStorageQueryResultBase &>(static_cast<const D &>(*this))->add_ContentsChanged(get(handler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IStorageQueryResultBase> impl_IStorageQueryResultBase<D>::ContentsChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IStorageQueryResultBase>(this, &ABI::Windows::Storage::Search::IStorageQueryResultBase::remove_ContentsChanged, ContentsChanged(handler));
}

template <typename D> void impl_IStorageQueryResultBase<D>::ContentsChanged(event_token eventCookie) const
{
    check_hresult(static_cast<const IStorageQueryResultBase &>(static_cast<const D &>(*this))->remove_ContentsChanged(eventCookie));
}

template <typename D> event_token impl_IStorageQueryResultBase<D>::OptionsChanged(const Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::IInspectable> & changedHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IStorageQueryResultBase &>(static_cast<const D &>(*this))->add_OptionsChanged(get(changedHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IStorageQueryResultBase> impl_IStorageQueryResultBase<D>::OptionsChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::IInspectable> & changedHandler) const
{
    return impl::make_event_revoker<D, IStorageQueryResultBase>(this, &ABI::Windows::Storage::Search::IStorageQueryResultBase::remove_OptionsChanged, OptionsChanged(changedHandler));
}

template <typename D> void impl_IStorageQueryResultBase<D>::OptionsChanged(event_token eventCookie) const
{
    check_hresult(static_cast<const IStorageQueryResultBase &>(static_cast<const D &>(*this))->remove_OptionsChanged(eventCookie));
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> impl_IStorageQueryResultBase<D>::FindStartIndexAsync(const Windows::IInspectable & value) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation;
    check_hresult(static_cast<const IStorageQueryResultBase &>(static_cast<const D &>(*this))->abi_FindStartIndexAsync(get(value), put(operation)));
    return operation;
}

template <typename D> Windows::Storage::Search::QueryOptions impl_IStorageQueryResultBase<D>::GetCurrentQueryOptions() const
{
    Windows::Storage::Search::QueryOptions value { nullptr };
    check_hresult(static_cast<const IStorageQueryResultBase &>(static_cast<const D &>(*this))->abi_GetCurrentQueryOptions(put(value)));
    return value;
}

template <typename D> void impl_IStorageQueryResultBase<D>::ApplyNewQueryOptions(const Windows::Storage::Search::QueryOptions & newQueryOptions) const
{
    check_hresult(static_cast<const IStorageQueryResultBase &>(static_cast<const D &>(*this))->abi_ApplyNewQueryOptions(get(newQueryOptions)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> impl_IStorageFileQueryResult<D>::GetFilesAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> operation;
    check_hresult(static_cast<const IStorageFileQueryResult &>(static_cast<const D &>(*this))->abi_GetFilesAsync(startIndex, maxNumberOfItems, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> impl_IStorageFileQueryResult<D>::GetFilesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> operation;
    check_hresult(static_cast<const IStorageFileQueryResult &>(static_cast<const D &>(*this))->abi_GetFilesAsyncDefaultStartAndCount(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment>> impl_IStorageFileQueryResult2<D>::GetMatchingPropertiesWithRanges(const Windows::Storage::StorageFile & file) const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment>> result;
    check_hresult(static_cast<const IStorageFileQueryResult2 &>(static_cast<const D &>(*this))->abi_GetMatchingPropertiesWithRanges(get(file), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> impl_IStorageFolderQueryResult<D>::GetFoldersAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> operation;
    check_hresult(static_cast<const IStorageFolderQueryResult &>(static_cast<const D &>(*this))->abi_GetFoldersAsync(startIndex, maxNumberOfItems, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> impl_IStorageFolderQueryResult<D>::GetFoldersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> operation;
    check_hresult(static_cast<const IStorageFolderQueryResult &>(static_cast<const D &>(*this))->abi_GetFoldersAsyncDefaultStartAndCount(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> impl_IStorageItemQueryResult<D>::GetItemsAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> operation;
    check_hresult(static_cast<const IStorageItemQueryResult &>(static_cast<const D &>(*this))->abi_GetItemsAsync(startIndex, maxNumberOfItems, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> impl_IStorageItemQueryResult<D>::GetItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> operation;
    check_hresult(static_cast<const IStorageItemQueryResult &>(static_cast<const D &>(*this))->abi_GetItemsAsyncDefaultStartAndCount(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Search::IndexedState> impl_IStorageFolderQueryOperations<D>::GetIndexedStateAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Search::IndexedState> operation;
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_GetIndexedStateAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Storage::Search::StorageFileQueryResult impl_IStorageFolderQueryOperations<D>::CreateFileQuery() const
{
    Windows::Storage::Search::StorageFileQueryResult value { nullptr };
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_CreateFileQueryOverloadDefault(put(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageFileQueryResult impl_IStorageFolderQueryOperations<D>::CreateFileQuery(Windows::Storage::Search::CommonFileQuery query) const
{
    Windows::Storage::Search::StorageFileQueryResult value { nullptr };
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_CreateFileQuery(query, put(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageFileQueryResult impl_IStorageFolderQueryOperations<D>::CreateFileQueryWithOptions(const Windows::Storage::Search::QueryOptions & queryOptions) const
{
    Windows::Storage::Search::StorageFileQueryResult value { nullptr };
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_CreateFileQueryWithOptions(get(queryOptions), put(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageFolderQueryResult impl_IStorageFolderQueryOperations<D>::CreateFolderQuery() const
{
    Windows::Storage::Search::StorageFolderQueryResult value { nullptr };
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_CreateFolderQueryOverloadDefault(put(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageFolderQueryResult impl_IStorageFolderQueryOperations<D>::CreateFolderQuery(Windows::Storage::Search::CommonFolderQuery query) const
{
    Windows::Storage::Search::StorageFolderQueryResult value { nullptr };
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_CreateFolderQuery(query, put(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageFolderQueryResult impl_IStorageFolderQueryOperations<D>::CreateFolderQueryWithOptions(const Windows::Storage::Search::QueryOptions & queryOptions) const
{
    Windows::Storage::Search::StorageFolderQueryResult value { nullptr };
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_CreateFolderQueryWithOptions(get(queryOptions), put(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageItemQueryResult impl_IStorageFolderQueryOperations<D>::CreateItemQuery() const
{
    Windows::Storage::Search::StorageItemQueryResult value { nullptr };
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_CreateItemQuery(put(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageItemQueryResult impl_IStorageFolderQueryOperations<D>::CreateItemQueryWithOptions(const Windows::Storage::Search::QueryOptions & queryOptions) const
{
    Windows::Storage::Search::StorageItemQueryResult value { nullptr };
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_CreateItemQueryWithOptions(get(queryOptions), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> impl_IStorageFolderQueryOperations<D>::GetFilesAsync(Windows::Storage::Search::CommonFileQuery query, uint32_t startIndex, uint32_t maxItemsToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> operation;
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_GetFilesAsync(query, startIndex, maxItemsToRetrieve, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> impl_IStorageFolderQueryOperations<D>::GetFilesAsync(Windows::Storage::Search::CommonFileQuery query) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> operation;
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_GetFilesAsyncOverloadDefaultStartAndCount(query, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> impl_IStorageFolderQueryOperations<D>::GetFoldersAsync(Windows::Storage::Search::CommonFolderQuery query, uint32_t startIndex, uint32_t maxItemsToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> operation;
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_GetFoldersAsync(query, startIndex, maxItemsToRetrieve, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> impl_IStorageFolderQueryOperations<D>::GetFoldersAsync(Windows::Storage::Search::CommonFolderQuery query) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> operation;
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_GetFoldersAsyncOverloadDefaultStartAndCount(query, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> impl_IStorageFolderQueryOperations<D>::GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> operation;
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_GetItemsAsync(startIndex, maxItemsToRetrieve, put(operation)));
    return operation;
}

template <typename D> bool impl_IStorageFolderQueryOperations<D>::AreQueryOptionsSupported(const Windows::Storage::Search::QueryOptions & queryOptions) const
{
    bool value {};
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_AreQueryOptionsSupported(get(queryOptions), &value));
    return value;
}

template <typename D> bool impl_IStorageFolderQueryOperations<D>::IsCommonFolderQuerySupported(Windows::Storage::Search::CommonFolderQuery query) const
{
    bool value {};
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_IsCommonFolderQuerySupported(query, &value));
    return value;
}

template <typename D> bool impl_IStorageFolderQueryOperations<D>::IsCommonFileQuerySupported(Windows::Storage::Search::CommonFileQuery query) const
{
    bool value {};
    check_hresult(static_cast<const IStorageFolderQueryOperations &>(static_cast<const D &>(*this))->abi_IsCommonFileQuerySupported(query, &value));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IStorageLibraryContentChangedTriggerDetails<D>::Folder() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IStorageLibraryContentChangedTriggerDetails &>(static_cast<const D &>(*this))->get_Folder(put(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageItemQueryResult impl_IStorageLibraryContentChangedTriggerDetails<D>::CreateModifiedSinceQuery(const Windows::Foundation::DateTime & lastQueryTime) const
{
    Windows::Storage::Search::StorageItemQueryResult result { nullptr };
    check_hresult(static_cast<const IStorageLibraryContentChangedTriggerDetails &>(static_cast<const D &>(*this))->abi_CreateModifiedSinceQuery(get(lastQueryTime), put(result)));
    return result;
}

inline Windows::Storage::Search::ContentIndexer ContentIndexer::GetIndexer(hstring_ref indexName)
{
    return get_activation_factory<ContentIndexer, IContentIndexerStatics>().GetIndexer(indexName);
}

inline Windows::Storage::Search::ContentIndexer ContentIndexer::GetIndexer()
{
    return get_activation_factory<ContentIndexer, IContentIndexerStatics>().GetIndexer();
}

inline IndexableContent::IndexableContent() :
    IndexableContent(activate_instance<IndexableContent>())
{}

inline QueryOptions::QueryOptions() :
    QueryOptions(activate_instance<QueryOptions>())
{}

inline QueryOptions::QueryOptions(Windows::Storage::Search::CommonFileQuery query, const Windows::Foundation::Collections::IIterable<hstring> & fileTypeFilter) :
    QueryOptions(get_activation_factory<QueryOptions, IQueryOptionsFactory>().CreateCommonFileQuery(query, fileTypeFilter))
{}

inline QueryOptions::QueryOptions(Windows::Storage::Search::CommonFolderQuery query) :
    QueryOptions(get_activation_factory<QueryOptions, IQueryOptionsFactory>().CreateCommonFolderQuery(query))
{}

inline ValueAndLanguage::ValueAndLanguage() :
    ValueAndLanguage(activate_instance<ValueAndLanguage>())
{}

}

}
