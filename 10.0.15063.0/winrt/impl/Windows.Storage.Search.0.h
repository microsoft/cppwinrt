// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Data::Text {

struct TextSegment;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageItem;
struct StorageFile;
struct StorageFolder;

}

WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties {

enum class PropertyPrefetchOptions : unsigned;
enum class ThumbnailMode;
enum class ThumbnailOptions : unsigned;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Search {

enum class CommonFileQuery
{
    DefaultQuery = 0,
    OrderByName = 1,
    OrderByTitle = 2,
    OrderByMusicProperties = 3,
    OrderBySearchRank = 4,
    OrderByDate = 5,
};

enum class CommonFolderQuery
{
    DefaultQuery = 0,
    GroupByYear = 100,
    GroupByMonth = 101,
    GroupByArtist = 102,
    GroupByAlbum = 103,
    GroupByAlbumArtist = 104,
    GroupByComposer = 105,
    GroupByGenre = 106,
    GroupByPublishedYear = 107,
    GroupByRating = 108,
    GroupByTag = 109,
    GroupByAuthor = 110,
    GroupByType = 111,
};

enum class DateStackOption
{
    None = 0,
    Year = 1,
    Month = 2,
};

enum class FolderDepth
{
    Shallow = 0,
    Deep = 1,
};

enum class IndexedState
{
    Unknown = 0,
    NotIndexed = 1,
    PartiallyIndexed = 2,
    FullyIndexed = 3,
};

enum class IndexerOption
{
    UseIndexerWhenAvailable = 0,
    OnlyUseIndexer = 1,
    DoNotUseIndexer = 2,
};

struct IContentIndexer;
struct IContentIndexerQuery;
struct IContentIndexerQueryOperations;
struct IContentIndexerStatics;
struct IIndexableContent;
struct IQueryOptions;
struct IQueryOptionsFactory;
struct IQueryOptionsWithProviderFilter;
struct IStorageFileQueryResult;
struct IStorageFileQueryResult2;
struct IStorageFolderQueryOperations;
struct IStorageFolderQueryResult;
struct IStorageItemQueryResult;
struct IStorageLibraryContentChangedTriggerDetails;
struct IStorageQueryResultBase;
struct IValueAndLanguage;
struct ContentIndexer;
struct ContentIndexerQuery;
struct IndexableContent;
struct QueryOptions;
struct SortEntryVector;
struct StorageFileQueryResult;
struct StorageFolderQueryResult;
struct StorageItemQueryResult;
struct StorageLibraryContentChangedTriggerDetails;
struct ValueAndLanguage;
struct SortEntry;

}

namespace winrt::impl {

template <> struct category<Windows::Storage::Search::IContentIndexer>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IContentIndexerQuery>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IContentIndexerQueryOperations>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IContentIndexerStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IIndexableContent>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IQueryOptions>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IQueryOptionsFactory>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IQueryOptionsWithProviderFilter>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IStorageFileQueryResult>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IStorageFileQueryResult2>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IStorageFolderQueryOperations>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IStorageFolderQueryResult>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IStorageItemQueryResult>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IStorageQueryResultBase>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::IValueAndLanguage>{ using type = interface_category; };
template <> struct category<Windows::Storage::Search::ContentIndexer>{ using type = class_category; };
template <> struct category<Windows::Storage::Search::ContentIndexerQuery>{ using type = class_category; };
template <> struct category<Windows::Storage::Search::IndexableContent>{ using type = class_category; };
template <> struct category<Windows::Storage::Search::QueryOptions>{ using type = class_category; };
template <> struct category<Windows::Storage::Search::SortEntryVector>{ using type = class_category; };
template <> struct category<Windows::Storage::Search::StorageFileQueryResult>{ using type = class_category; };
template <> struct category<Windows::Storage::Search::StorageFolderQueryResult>{ using type = class_category; };
template <> struct category<Windows::Storage::Search::StorageItemQueryResult>{ using type = class_category; };
template <> struct category<Windows::Storage::Search::StorageLibraryContentChangedTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Storage::Search::ValueAndLanguage>{ using type = class_category; };
template <> struct category<Windows::Storage::Search::CommonFileQuery>{ using type = enum_category; };
template <> struct category<Windows::Storage::Search::CommonFolderQuery>{ using type = enum_category; };
template <> struct category<Windows::Storage::Search::DateStackOption>{ using type = enum_category; };
template <> struct category<Windows::Storage::Search::FolderDepth>{ using type = enum_category; };
template <> struct category<Windows::Storage::Search::IndexedState>{ using type = enum_category; };
template <> struct category<Windows::Storage::Search::IndexerOption>{ using type = enum_category; };
template <> struct category<Windows::Storage::Search::SortEntry>{ using type = struct_category<hstring,bool>; };
template <> struct name<Windows::Storage::Search::IContentIndexer>{ static constexpr auto & value{ L"Windows.Storage.Search.IContentIndexer" }; };
template <> struct name<Windows::Storage::Search::IContentIndexerQuery>{ static constexpr auto & value{ L"Windows.Storage.Search.IContentIndexerQuery" }; };
template <> struct name<Windows::Storage::Search::IContentIndexerQueryOperations>{ static constexpr auto & value{ L"Windows.Storage.Search.IContentIndexerQueryOperations" }; };
template <> struct name<Windows::Storage::Search::IContentIndexerStatics>{ static constexpr auto & value{ L"Windows.Storage.Search.IContentIndexerStatics" }; };
template <> struct name<Windows::Storage::Search::IIndexableContent>{ static constexpr auto & value{ L"Windows.Storage.Search.IIndexableContent" }; };
template <> struct name<Windows::Storage::Search::IQueryOptions>{ static constexpr auto & value{ L"Windows.Storage.Search.IQueryOptions" }; };
template <> struct name<Windows::Storage::Search::IQueryOptionsFactory>{ static constexpr auto & value{ L"Windows.Storage.Search.IQueryOptionsFactory" }; };
template <> struct name<Windows::Storage::Search::IQueryOptionsWithProviderFilter>{ static constexpr auto & value{ L"Windows.Storage.Search.IQueryOptionsWithProviderFilter" }; };
template <> struct name<Windows::Storage::Search::IStorageFileQueryResult>{ static constexpr auto & value{ L"Windows.Storage.Search.IStorageFileQueryResult" }; };
template <> struct name<Windows::Storage::Search::IStorageFileQueryResult2>{ static constexpr auto & value{ L"Windows.Storage.Search.IStorageFileQueryResult2" }; };
template <> struct name<Windows::Storage::Search::IStorageFolderQueryOperations>{ static constexpr auto & value{ L"Windows.Storage.Search.IStorageFolderQueryOperations" }; };
template <> struct name<Windows::Storage::Search::IStorageFolderQueryResult>{ static constexpr auto & value{ L"Windows.Storage.Search.IStorageFolderQueryResult" }; };
template <> struct name<Windows::Storage::Search::IStorageItemQueryResult>{ static constexpr auto & value{ L"Windows.Storage.Search.IStorageItemQueryResult" }; };
template <> struct name<Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails>{ static constexpr auto & value{ L"Windows.Storage.Search.IStorageLibraryContentChangedTriggerDetails" }; };
template <> struct name<Windows::Storage::Search::IStorageQueryResultBase>{ static constexpr auto & value{ L"Windows.Storage.Search.IStorageQueryResultBase" }; };
template <> struct name<Windows::Storage::Search::IValueAndLanguage>{ static constexpr auto & value{ L"Windows.Storage.Search.IValueAndLanguage" }; };
template <> struct name<Windows::Storage::Search::ContentIndexer>{ static constexpr auto & value{ L"Windows.Storage.Search.ContentIndexer" }; };
template <> struct name<Windows::Storage::Search::ContentIndexerQuery>{ static constexpr auto & value{ L"Windows.Storage.Search.ContentIndexerQuery" }; };
template <> struct name<Windows::Storage::Search::IndexableContent>{ static constexpr auto & value{ L"Windows.Storage.Search.IndexableContent" }; };
template <> struct name<Windows::Storage::Search::QueryOptions>{ static constexpr auto & value{ L"Windows.Storage.Search.QueryOptions" }; };
template <> struct name<Windows::Storage::Search::SortEntryVector>{ static constexpr auto & value{ L"Windows.Storage.Search.SortEntryVector" }; };
template <> struct name<Windows::Storage::Search::StorageFileQueryResult>{ static constexpr auto & value{ L"Windows.Storage.Search.StorageFileQueryResult" }; };
template <> struct name<Windows::Storage::Search::StorageFolderQueryResult>{ static constexpr auto & value{ L"Windows.Storage.Search.StorageFolderQueryResult" }; };
template <> struct name<Windows::Storage::Search::StorageItemQueryResult>{ static constexpr auto & value{ L"Windows.Storage.Search.StorageItemQueryResult" }; };
template <> struct name<Windows::Storage::Search::StorageLibraryContentChangedTriggerDetails>{ static constexpr auto & value{ L"Windows.Storage.Search.StorageLibraryContentChangedTriggerDetails" }; };
template <> struct name<Windows::Storage::Search::ValueAndLanguage>{ static constexpr auto & value{ L"Windows.Storage.Search.ValueAndLanguage" }; };
template <> struct name<Windows::Storage::Search::CommonFileQuery>{ static constexpr auto & value{ L"Windows.Storage.Search.CommonFileQuery" }; };
template <> struct name<Windows::Storage::Search::CommonFolderQuery>{ static constexpr auto & value{ L"Windows.Storage.Search.CommonFolderQuery" }; };
template <> struct name<Windows::Storage::Search::DateStackOption>{ static constexpr auto & value{ L"Windows.Storage.Search.DateStackOption" }; };
template <> struct name<Windows::Storage::Search::FolderDepth>{ static constexpr auto & value{ L"Windows.Storage.Search.FolderDepth" }; };
template <> struct name<Windows::Storage::Search::IndexedState>{ static constexpr auto & value{ L"Windows.Storage.Search.IndexedState" }; };
template <> struct name<Windows::Storage::Search::IndexerOption>{ static constexpr auto & value{ L"Windows.Storage.Search.IndexerOption" }; };
template <> struct name<Windows::Storage::Search::SortEntry>{ static constexpr auto & value{ L"Windows.Storage.Search.SortEntry" }; };
template <> struct guid<Windows::Storage::Search::IContentIndexer>{ static constexpr GUID value{ 0xB1767F8D,0xF698,0x4982,{ 0xB0,0x5F,0x3A,0x6E,0x8C,0xAB,0x01,0xA2 } }; };
template <> struct guid<Windows::Storage::Search::IContentIndexerQuery>{ static constexpr GUID value{ 0x70E3B0F8,0x4BFC,0x428A,{ 0x88,0x89,0xCC,0x51,0xDA,0x9A,0x7B,0x9D } }; };
template <> struct guid<Windows::Storage::Search::IContentIndexerQueryOperations>{ static constexpr GUID value{ 0x28823E10,0x4786,0x42F1,{ 0x97,0x30,0x79,0x2B,0x35,0x66,0xB1,0x50 } }; };
template <> struct guid<Windows::Storage::Search::IContentIndexerStatics>{ static constexpr GUID value{ 0x8C488375,0xB37E,0x4C60,{ 0x9B,0xA8,0xB7,0x60,0xFD,0xA3,0xE5,0x9D } }; };
template <> struct guid<Windows::Storage::Search::IIndexableContent>{ static constexpr GUID value{ 0xCCF1A05F,0xD4B5,0x483A,{ 0xB0,0x6E,0xE0,0xDB,0x1E,0xC4,0x20,0xE4 } }; };
template <> struct guid<Windows::Storage::Search::IQueryOptions>{ static constexpr GUID value{ 0x1E5E46EE,0x0F45,0x4838,{ 0xA8,0xE9,0xD0,0x47,0x9D,0x44,0x6C,0x30 } }; };
template <> struct guid<Windows::Storage::Search::IQueryOptionsFactory>{ static constexpr GUID value{ 0x032E1F8C,0xA9C1,0x4E71,{ 0x80,0x11,0x0D,0xEE,0x9D,0x48,0x11,0xA3 } }; };
template <> struct guid<Windows::Storage::Search::IQueryOptionsWithProviderFilter>{ static constexpr GUID value{ 0x5B9D1026,0x15C4,0x44DD,{ 0xB8,0x9A,0x47,0xA5,0x9B,0x7D,0x7C,0x4F } }; };
template <> struct guid<Windows::Storage::Search::IStorageFileQueryResult>{ static constexpr GUID value{ 0x52FDA447,0x2BAA,0x412C,{ 0xB2,0x9F,0xD4,0xB1,0x77,0x8E,0xFA,0x1E } }; };
template <> struct guid<Windows::Storage::Search::IStorageFileQueryResult2>{ static constexpr GUID value{ 0x4E5DB9DD,0x7141,0x46C4,{ 0x8B,0xE3,0xE9,0xDC,0x9E,0x27,0x27,0x5C } }; };
template <> struct guid<Windows::Storage::Search::IStorageFolderQueryOperations>{ static constexpr GUID value{ 0xCB43CCC9,0x446B,0x4A4F,{ 0xBE,0x97,0x75,0x77,0x71,0xBE,0x52,0x03 } }; };
template <> struct guid<Windows::Storage::Search::IStorageFolderQueryResult>{ static constexpr GUID value{ 0x6654C911,0x7D66,0x46FA,{ 0xAE,0xCF,0xE4,0xA4,0xBA,0xA9,0x3A,0xB8 } }; };
template <> struct guid<Windows::Storage::Search::IStorageItemQueryResult>{ static constexpr GUID value{ 0xE8948079,0x9D58,0x47B8,{ 0xB2,0xB2,0x41,0xB0,0x7F,0x47,0x95,0xF9 } }; };
template <> struct guid<Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails>{ static constexpr GUID value{ 0x2A371977,0xABBF,0x4E1D,{ 0x8A,0xA5,0x63,0x85,0xD8,0x88,0x47,0x99 } }; };
template <> struct guid<Windows::Storage::Search::IStorageQueryResultBase>{ static constexpr GUID value{ 0xC297D70D,0x7353,0x47AB,{ 0xBA,0x58,0x8C,0x61,0x42,0x5D,0xC5,0x4B } }; };
template <> struct guid<Windows::Storage::Search::IValueAndLanguage>{ static constexpr GUID value{ 0xB9914881,0xA1EE,0x4BC4,{ 0x92,0xA5,0x46,0x69,0x68,0xE3,0x04,0x36 } }; };
template <> struct default_interface<Windows::Storage::Search::ContentIndexer>{ using type = Windows::Storage::Search::IContentIndexer; };
template <> struct default_interface<Windows::Storage::Search::ContentIndexerQuery>{ using type = Windows::Storage::Search::IContentIndexerQuery; };
template <> struct default_interface<Windows::Storage::Search::IndexableContent>{ using type = Windows::Storage::Search::IIndexableContent; };
template <> struct default_interface<Windows::Storage::Search::QueryOptions>{ using type = Windows::Storage::Search::IQueryOptions; };
template <> struct default_interface<Windows::Storage::Search::SortEntryVector>{ using type = Windows::Foundation::Collections::IVector<Windows::Storage::Search::SortEntry>; };
template <> struct default_interface<Windows::Storage::Search::StorageFileQueryResult>{ using type = Windows::Storage::Search::IStorageFileQueryResult; };
template <> struct default_interface<Windows::Storage::Search::StorageFolderQueryResult>{ using type = Windows::Storage::Search::IStorageFolderQueryResult; };
template <> struct default_interface<Windows::Storage::Search::StorageItemQueryResult>{ using type = Windows::Storage::Search::IStorageItemQueryResult; };
template <> struct default_interface<Windows::Storage::Search::StorageLibraryContentChangedTriggerDetails>{ using type = Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails; };
template <> struct default_interface<Windows::Storage::Search::ValueAndLanguage>{ using type = Windows::Storage::Search::IValueAndLanguage; };

template <> struct abi<Windows::Storage::Search::SortEntry>{ struct type
{
    HSTRING PropertyName;
    bool AscendingOrder;
};};

template <typename D>
struct consume_Windows_Storage_Search_IContentIndexer
{
    Windows::Foundation::IAsyncAction AddAsync(Windows::Storage::Search::IIndexableContent const& indexableContent) const;
    Windows::Foundation::IAsyncAction UpdateAsync(Windows::Storage::Search::IIndexableContent const& indexableContent) const;
    Windows::Foundation::IAsyncAction DeleteAsync(param::hstring const& contentId) const;
    Windows::Foundation::IAsyncAction DeleteMultipleAsync(param::async_iterable<hstring> const& contentIds) const;
    Windows::Foundation::IAsyncAction DeleteAllAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>> RetrievePropertiesAsync(param::hstring const& contentId, param::async_iterable<hstring> const& propertiesToRetrieve) const;
    uint64_t Revision() const;
};
template <> struct consume<Windows::Storage::Search::IContentIndexer> { template <typename D> using type = consume_Windows_Storage_Search_IContentIndexer<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IContentIndexerQuery
{
    Windows::Foundation::IAsyncOperation<uint32_t> GetCountAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>> GetPropertiesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>> GetPropertiesAsync(uint32_t startIndex, uint32_t maxItems) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>> GetAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>> GetAsync(uint32_t startIndex, uint32_t maxItems) const;
    Windows::Storage::StorageFolder QueryFolder() const;
};
template <> struct consume<Windows::Storage::Search::IContentIndexerQuery> { template <typename D> using type = consume_Windows_Storage_Search_IContentIndexerQuery<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IContentIndexerQueryOperations
{
    Windows::Storage::Search::ContentIndexerQuery CreateQuery(param::hstring const& searchFilter, param::iterable<hstring> const& propertiesToRetrieve, param::iterable<Windows::Storage::Search::SortEntry> const& sortOrder, param::hstring const& searchFilterLanguage) const;
    Windows::Storage::Search::ContentIndexerQuery CreateQuery(param::hstring const& searchFilter, param::iterable<hstring> const& propertiesToRetrieve, param::iterable<Windows::Storage::Search::SortEntry> const& sortOrder) const;
    Windows::Storage::Search::ContentIndexerQuery CreateQuery(param::hstring const& searchFilter, param::iterable<hstring> const& propertiesToRetrieve) const;
};
template <> struct consume<Windows::Storage::Search::IContentIndexerQueryOperations> { template <typename D> using type = consume_Windows_Storage_Search_IContentIndexerQueryOperations<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IContentIndexerStatics
{
    Windows::Storage::Search::ContentIndexer GetIndexer(param::hstring const& indexName) const;
    Windows::Storage::Search::ContentIndexer GetIndexer() const;
};
template <> struct consume<Windows::Storage::Search::IContentIndexerStatics> { template <typename D> using type = consume_Windows_Storage_Search_IContentIndexerStatics<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IIndexableContent
{
    hstring Id() const;
    void Id(param::hstring const& value) const;
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable> Properties() const;
    Windows::Storage::Streams::IRandomAccessStream Stream() const;
    void Stream(Windows::Storage::Streams::IRandomAccessStream const& value) const;
    hstring StreamContentType() const;
    void StreamContentType(param::hstring const& value) const;
};
template <> struct consume<Windows::Storage::Search::IIndexableContent> { template <typename D> using type = consume_Windows_Storage_Search_IIndexableContent<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IQueryOptions
{
    Windows::Foundation::Collections::IVector<hstring> FileTypeFilter() const;
    Windows::Storage::Search::FolderDepth FolderDepth() const;
    void FolderDepth(Windows::Storage::Search::FolderDepth const& value) const;
    hstring ApplicationSearchFilter() const;
    void ApplicationSearchFilter(param::hstring const& value) const;
    hstring UserSearchFilter() const;
    void UserSearchFilter(param::hstring const& value) const;
    hstring Language() const;
    void Language(param::hstring const& value) const;
    Windows::Storage::Search::IndexerOption IndexerOption() const;
    void IndexerOption(Windows::Storage::Search::IndexerOption const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Storage::Search::SortEntry> SortOrder() const;
    hstring GroupPropertyName() const;
    Windows::Storage::Search::DateStackOption DateStackOption() const;
    hstring SaveToString() const;
    void LoadFromString(param::hstring const& value) const;
    void SetThumbnailPrefetch(Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedSize, Windows::Storage::FileProperties::ThumbnailOptions const& options) const;
    void SetPropertyPrefetch(Windows::Storage::FileProperties::PropertyPrefetchOptions const& options, param::iterable<hstring> const& propertiesToRetrieve) const;
};
template <> struct consume<Windows::Storage::Search::IQueryOptions> { template <typename D> using type = consume_Windows_Storage_Search_IQueryOptions<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IQueryOptionsFactory
{
    Windows::Storage::Search::QueryOptions CreateCommonFileQuery(Windows::Storage::Search::CommonFileQuery const& query, param::iterable<hstring> const& fileTypeFilter) const;
    Windows::Storage::Search::QueryOptions CreateCommonFolderQuery(Windows::Storage::Search::CommonFolderQuery const& query) const;
};
template <> struct consume<Windows::Storage::Search::IQueryOptionsFactory> { template <typename D> using type = consume_Windows_Storage_Search_IQueryOptionsFactory<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IQueryOptionsWithProviderFilter
{
    Windows::Foundation::Collections::IVector<hstring> StorageProviderIdFilter() const;
};
template <> struct consume<Windows::Storage::Search::IQueryOptionsWithProviderFilter> { template <typename D> using type = consume_Windows_Storage_Search_IQueryOptionsWithProviderFilter<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IStorageFileQueryResult
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> GetFilesAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> GetFilesAsync() const;
};
template <> struct consume<Windows::Storage::Search::IStorageFileQueryResult> { template <typename D> using type = consume_Windows_Storage_Search_IStorageFileQueryResult<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IStorageFileQueryResult2
{
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment>> GetMatchingPropertiesWithRanges(Windows::Storage::StorageFile const& file) const;
};
template <> struct consume<Windows::Storage::Search::IStorageFileQueryResult2> { template <typename D> using type = consume_Windows_Storage_Search_IStorageFileQueryResult2<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IStorageFolderQueryOperations
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Search::IndexedState> GetIndexedStateAsync() const;
    Windows::Storage::Search::StorageFileQueryResult CreateFileQuery() const;
    Windows::Storage::Search::StorageFileQueryResult CreateFileQuery(Windows::Storage::Search::CommonFileQuery const& query) const;
    Windows::Storage::Search::StorageFileQueryResult CreateFileQueryWithOptions(Windows::Storage::Search::QueryOptions const& queryOptions) const;
    Windows::Storage::Search::StorageFolderQueryResult CreateFolderQuery() const;
    Windows::Storage::Search::StorageFolderQueryResult CreateFolderQuery(Windows::Storage::Search::CommonFolderQuery const& query) const;
    Windows::Storage::Search::StorageFolderQueryResult CreateFolderQueryWithOptions(Windows::Storage::Search::QueryOptions const& queryOptions) const;
    Windows::Storage::Search::StorageItemQueryResult CreateItemQuery() const;
    Windows::Storage::Search::StorageItemQueryResult CreateItemQueryWithOptions(Windows::Storage::Search::QueryOptions const& queryOptions) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> GetFilesAsync(Windows::Storage::Search::CommonFileQuery const& query, uint32_t startIndex, uint32_t maxItemsToRetrieve) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> GetFilesAsync(Windows::Storage::Search::CommonFileQuery const& query) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> GetFoldersAsync(Windows::Storage::Search::CommonFolderQuery const& query, uint32_t startIndex, uint32_t maxItemsToRetrieve) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> GetFoldersAsync(Windows::Storage::Search::CommonFolderQuery const& query) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const;
    bool AreQueryOptionsSupported(Windows::Storage::Search::QueryOptions const& queryOptions) const;
    bool IsCommonFolderQuerySupported(Windows::Storage::Search::CommonFolderQuery const& query) const;
    bool IsCommonFileQuerySupported(Windows::Storage::Search::CommonFileQuery const& query) const;
};
template <> struct consume<Windows::Storage::Search::IStorageFolderQueryOperations> { template <typename D> using type = consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IStorageFolderQueryResult
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> GetFoldersAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> GetFoldersAsync() const;
};
template <> struct consume<Windows::Storage::Search::IStorageFolderQueryResult> { template <typename D> using type = consume_Windows_Storage_Search_IStorageFolderQueryResult<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IStorageItemQueryResult
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> GetItemsAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> GetItemsAsync() const;
};
template <> struct consume<Windows::Storage::Search::IStorageItemQueryResult> { template <typename D> using type = consume_Windows_Storage_Search_IStorageItemQueryResult<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IStorageLibraryContentChangedTriggerDetails
{
    Windows::Storage::StorageFolder Folder() const;
    Windows::Storage::Search::StorageItemQueryResult CreateModifiedSinceQuery(Windows::Foundation::DateTime const& lastQueryTime) const;
};
template <> struct consume<Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails> { template <typename D> using type = consume_Windows_Storage_Search_IStorageLibraryContentChangedTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IStorageQueryResultBase
{
    Windows::Foundation::IAsyncOperation<uint32_t> GetItemCountAsync() const;
    Windows::Storage::StorageFolder Folder() const;
    event_token ContentsChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const& handler) const;
    using ContentsChanged_revoker = event_revoker<Windows::Storage::Search::IStorageQueryResultBase>;
    ContentsChanged_revoker ContentsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const& handler) const;
    void ContentsChanged(event_token const& eventCookie) const;
    event_token OptionsChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const& changedHandler) const;
    using OptionsChanged_revoker = event_revoker<Windows::Storage::Search::IStorageQueryResultBase>;
    OptionsChanged_revoker OptionsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const& changedHandler) const;
    void OptionsChanged(event_token const& eventCookie) const;
    Windows::Foundation::IAsyncOperation<uint32_t> FindStartIndexAsync(Windows::Foundation::IInspectable const& value) const;
    Windows::Storage::Search::QueryOptions GetCurrentQueryOptions() const;
    void ApplyNewQueryOptions(Windows::Storage::Search::QueryOptions const& newQueryOptions) const;
};
template <> struct consume<Windows::Storage::Search::IStorageQueryResultBase> { template <typename D> using type = consume_Windows_Storage_Search_IStorageQueryResultBase<D>; };

template <typename D>
struct consume_Windows_Storage_Search_IValueAndLanguage
{
    hstring Language() const;
    void Language(param::hstring const& value) const;
    Windows::Foundation::IInspectable Value() const;
    void Value(Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::Storage::Search::IValueAndLanguage> { template <typename D> using type = consume_Windows_Storage_Search_IValueAndLanguage<D>; };

template <> struct abi<Windows::Storage::Search::IContentIndexer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddAsync(::IUnknown* indexableContent, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UpdateAsync(::IUnknown* indexableContent, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeleteAsync(HSTRING contentId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeleteMultipleAsync(::IUnknown* contentIds, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeleteAllAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RetrievePropertiesAsync(HSTRING contentId, ::IUnknown* propertiesToRetrieve, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_Revision(uint64_t* value) = 0;
};};

template <> struct abi<Windows::Storage::Search::IContentIndexerQuery>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCountAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetPropertiesAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetPropertiesRangeAsync(uint32_t startIndex, uint32_t maxItems, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetRangeAsync(uint32_t startIndex, uint32_t maxItems, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_QueryFolder(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::Search::IContentIndexerQueryOperations>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateQueryWithSortOrderAndLanguage(HSTRING searchFilter, ::IUnknown* propertiesToRetrieve, ::IUnknown* sortOrder, HSTRING searchFilterLanguage, ::IUnknown** query) = 0;
    virtual HRESULT __stdcall CreateQueryWithSortOrder(HSTRING searchFilter, ::IUnknown* propertiesToRetrieve, ::IUnknown* sortOrder, ::IUnknown** query) = 0;
    virtual HRESULT __stdcall CreateQuery(HSTRING searchFilter, ::IUnknown* propertiesToRetrieve, ::IUnknown** query) = 0;
};};

template <> struct abi<Windows::Storage::Search::IContentIndexerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetIndexerWithName(HSTRING indexName, ::IUnknown** index) = 0;
    virtual HRESULT __stdcall GetIndexer(::IUnknown** index) = 0;
};};

template <> struct abi<Windows::Storage::Search::IIndexableContent>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Id(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Stream(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Stream(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_StreamContentType(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_StreamContentType(HSTRING value) = 0;
};};

template <> struct abi<Windows::Storage::Search::IQueryOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FileTypeFilter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FolderDepth(abi_t<Windows::Storage::Search::FolderDepth>* value) = 0;
    virtual HRESULT __stdcall put_FolderDepth(abi_t<Windows::Storage::Search::FolderDepth> value) = 0;
    virtual HRESULT __stdcall get_ApplicationSearchFilter(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ApplicationSearchFilter(HSTRING value) = 0;
    virtual HRESULT __stdcall get_UserSearchFilter(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_UserSearchFilter(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Language(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IndexerOption(abi_t<Windows::Storage::Search::IndexerOption>* value) = 0;
    virtual HRESULT __stdcall put_IndexerOption(abi_t<Windows::Storage::Search::IndexerOption> value) = 0;
    virtual HRESULT __stdcall get_SortOrder(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_GroupPropertyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DateStackOption(abi_t<Windows::Storage::Search::DateStackOption>* value) = 0;
    virtual HRESULT __stdcall SaveToString(HSTRING* value) = 0;
    virtual HRESULT __stdcall LoadFromString(HSTRING value) = 0;
    virtual HRESULT __stdcall SetThumbnailPrefetch(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedSize, abi_t<Windows::Storage::FileProperties::ThumbnailOptions> options) = 0;
    virtual HRESULT __stdcall SetPropertyPrefetch(abi_t<Windows::Storage::FileProperties::PropertyPrefetchOptions> options, ::IUnknown* propertiesToRetrieve) = 0;
};};

template <> struct abi<Windows::Storage::Search::IQueryOptionsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateCommonFileQuery(abi_t<Windows::Storage::Search::CommonFileQuery> query, ::IUnknown* fileTypeFilter, ::IUnknown** queryOptions) = 0;
    virtual HRESULT __stdcall CreateCommonFolderQuery(abi_t<Windows::Storage::Search::CommonFolderQuery> query, ::IUnknown** queryOptions) = 0;
};};

template <> struct abi<Windows::Storage::Search::IQueryOptionsWithProviderFilter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StorageProviderIdFilter(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::Search::IStorageFileQueryResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFilesAsync(uint32_t startIndex, uint32_t maxNumberOfItems, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFilesAsyncDefaultStartAndCount(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::Search::IStorageFileQueryResult2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetMatchingPropertiesWithRanges(::IUnknown* file, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Storage::Search::IStorageFolderQueryOperations>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetIndexedStateAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateFileQueryOverloadDefault(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFileQuery(abi_t<Windows::Storage::Search::CommonFileQuery> query, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFileQueryWithOptions(::IUnknown* queryOptions, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFolderQueryOverloadDefault(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFolderQuery(abi_t<Windows::Storage::Search::CommonFolderQuery> query, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFolderQueryWithOptions(::IUnknown* queryOptions, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateItemQuery(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateItemQueryWithOptions(::IUnknown* queryOptions, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetFilesAsync(abi_t<Windows::Storage::Search::CommonFileQuery> query, uint32_t startIndex, uint32_t maxItemsToRetrieve, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFilesAsyncOverloadDefaultStartAndCount(abi_t<Windows::Storage::Search::CommonFileQuery> query, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFoldersAsync(abi_t<Windows::Storage::Search::CommonFolderQuery> query, uint32_t startIndex, uint32_t maxItemsToRetrieve, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFoldersAsyncOverloadDefaultStartAndCount(abi_t<Windows::Storage::Search::CommonFolderQuery> query, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AreQueryOptionsSupported(::IUnknown* queryOptions, bool* value) = 0;
    virtual HRESULT __stdcall IsCommonFolderQuerySupported(abi_t<Windows::Storage::Search::CommonFolderQuery> query, bool* value) = 0;
    virtual HRESULT __stdcall IsCommonFileQuerySupported(abi_t<Windows::Storage::Search::CommonFileQuery> query, bool* value) = 0;
};};

template <> struct abi<Windows::Storage::Search::IStorageFolderQueryResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFoldersAsync(uint32_t startIndex, uint32_t maxNumberOfItems, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFoldersAsyncDefaultStartAndCount(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::Search::IStorageItemQueryResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetItemsAsync(uint32_t startIndex, uint32_t maxNumberOfItems, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetItemsAsyncDefaultStartAndCount(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Folder(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateModifiedSinceQuery(abi_t<Windows::Foundation::DateTime> lastQueryTime, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Storage::Search::IStorageQueryResultBase>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetItemCountAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_Folder(::IUnknown** container) = 0;
    virtual HRESULT __stdcall add_ContentsChanged(::IUnknown* handler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_ContentsChanged(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall add_OptionsChanged(::IUnknown* changedHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_OptionsChanged(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall FindStartIndexAsync(::IUnknown* value, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetCurrentQueryOptions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ApplyNewQueryOptions(::IUnknown* newQueryOptions) = 0;
};};

template <> struct abi<Windows::Storage::Search::IValueAndLanguage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Language(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Value(::IUnknown* value) = 0;
};};

}
