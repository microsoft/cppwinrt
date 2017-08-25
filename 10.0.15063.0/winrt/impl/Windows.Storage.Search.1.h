// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Text.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.FileProperties.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Storage.Search.0.h"

WINRT_EXPORT namespace winrt::Windows::Storage::Search {

struct WINRT_EBO IContentIndexer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentIndexer>
{
    IContentIndexer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContentIndexerQuery :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentIndexerQuery>
{
    IContentIndexerQuery(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContentIndexerQueryOperations :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentIndexerQueryOperations>
{
    IContentIndexerQueryOperations(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContentIndexerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentIndexerStatics>
{
    IContentIndexerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IIndexableContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIndexableContent>
{
    IIndexableContent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQueryOptions>
{
    IQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IQueryOptionsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQueryOptionsFactory>
{
    IQueryOptionsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IQueryOptionsWithProviderFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQueryOptionsWithProviderFilter>
{
    IQueryOptionsWithProviderFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageFileQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFileQueryResult>,
    impl::require<IStorageFileQueryResult, Windows::Storage::Search::IStorageQueryResultBase>
{
    IStorageFileQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageFileQueryResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFileQueryResult2>,
    impl::require<IStorageFileQueryResult2, Windows::Storage::Search::IStorageQueryResultBase>
{
    IStorageFileQueryResult2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageFolderQueryOperations :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFolderQueryOperations>
{
    IStorageFolderQueryOperations(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageFolderQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFolderQueryResult>,
    impl::require<IStorageFolderQueryResult, Windows::Storage::Search::IStorageQueryResultBase>
{
    IStorageFolderQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageItemQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemQueryResult>,
    impl::require<IStorageItemQueryResult, Windows::Storage::Search::IStorageQueryResultBase>
{
    IStorageItemQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageLibraryContentChangedTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryContentChangedTriggerDetails>
{
    IStorageLibraryContentChangedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageQueryResultBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageQueryResultBase>
{
    IStorageQueryResultBase(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IValueAndLanguage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IValueAndLanguage>
{
    IValueAndLanguage(std::nullptr_t = nullptr) noexcept {}
};

}
