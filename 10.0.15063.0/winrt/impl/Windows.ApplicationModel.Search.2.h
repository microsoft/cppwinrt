// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.Search.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search {

struct WINRT_EBO LocalContentSuggestionSettings :
    Windows::ApplicationModel::Search::ILocalContentSuggestionSettings
{
    LocalContentSuggestionSettings(std::nullptr_t) noexcept {}
    LocalContentSuggestionSettings();
};

struct WINRT_EBO [[deprecated("SearchPane may be altered or unavailable for releases after Windows 10.")]] SearchPane :
    Windows::ApplicationModel::Search::ISearchPane
{
    SearchPane(std::nullptr_t) noexcept {}
    [[deprecated("ISearchPaneStatics may be altered or unavailable for releases after Windows 10.")]] static Windows::ApplicationModel::Search::SearchPane GetForCurrentView();
    [[deprecated("ISearchPaneStaticsWithHideThisApplication may be altered or unavailable for releases after Windows 10.")]] static void HideThisApplication();
};

struct WINRT_EBO [[deprecated("SearchPaneQueryChangedEventArgs may be altered or unavailable for releases after Windows 10.")]] SearchPaneQueryChangedEventArgs :
    Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs
{
    SearchPaneQueryChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SearchPaneQueryLinguisticDetails :
    Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails
{
    SearchPaneQueryLinguisticDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("SearchPaneQuerySubmittedEventArgs may be altered or unavailable for releases after Windows 10.")]] SearchPaneQuerySubmittedEventArgs :
    Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs,
    impl::require<SearchPaneQuerySubmittedEventArgs, Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
{
    SearchPaneQuerySubmittedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("SearchPaneResultSuggestionChosenEventArgs may be altered or unavailable for releases after Windows 10.")]] SearchPaneResultSuggestionChosenEventArgs :
    Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs
{
    SearchPaneResultSuggestionChosenEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("SearchPaneSuggestionsRequest may be altered or unavailable for releases after Windows 10.")]] SearchPaneSuggestionsRequest :
    Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest
{
    SearchPaneSuggestionsRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("SearchPaneSuggestionsRequestDeferral may be altered or unavailable for releases after Windows 10.")]] SearchPaneSuggestionsRequestDeferral :
    Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral
{
    SearchPaneSuggestionsRequestDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("SearchPaneSuggestionsRequestedEventArgs may be altered or unavailable for releases after Windows 10.")]] SearchPaneSuggestionsRequestedEventArgs :
    Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs
{
    SearchPaneSuggestionsRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("SearchPaneVisibilityChangedEventArgs may be altered or unavailable for releases after Windows 10.")]] SearchPaneVisibilityChangedEventArgs :
    Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs
{
    SearchPaneVisibilityChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SearchQueryLinguisticDetails :
    Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails
{
    SearchQueryLinguisticDetails(std::nullptr_t) noexcept {}
    SearchQueryLinguisticDetails(param::iterable<hstring> const& queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength);
};

struct WINRT_EBO SearchSuggestionCollection :
    Windows::ApplicationModel::Search::ISearchSuggestionCollection
{
    SearchSuggestionCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SearchSuggestionsRequest :
    Windows::ApplicationModel::Search::ISearchSuggestionsRequest
{
    SearchSuggestionsRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SearchSuggestionsRequestDeferral :
    Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral
{
    SearchSuggestionsRequestDeferral(std::nullptr_t) noexcept {}
};

}
