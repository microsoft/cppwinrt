// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Search.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.Search.Core.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search::Core {

struct WINRT_EBO RequestingFocusOnKeyboardInputEventArgs :
    Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs
{
    RequestingFocusOnKeyboardInputEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SearchSuggestion :
    Windows::ApplicationModel::Search::Core::ISearchSuggestion
{
    SearchSuggestion(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SearchSuggestionManager :
    Windows::ApplicationModel::Search::Core::ISearchSuggestionManager
{
    SearchSuggestionManager(std::nullptr_t) noexcept {}
    SearchSuggestionManager();
};

struct WINRT_EBO SearchSuggestionsRequestedEventArgs :
    Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs
{
    SearchSuggestionsRequestedEventArgs(std::nullptr_t) noexcept {}
};

}
