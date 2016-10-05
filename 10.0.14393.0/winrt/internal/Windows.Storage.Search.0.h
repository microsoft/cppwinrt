// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Storage::Search {

struct SortEntry;

}

namespace Windows::Storage::Search {

struct SortEntry;

}

namespace ABI::Windows::Storage::Search {

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

}

namespace Windows::Storage::Search {

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

}

namespace Windows::Storage::Search {

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

}

}
