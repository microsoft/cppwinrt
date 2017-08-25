// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Search.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.ApplicationModel.Search.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search::Core {

struct WINRT_EBO IRequestingFocusOnKeyboardInputEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRequestingFocusOnKeyboardInputEventArgs>
{
    IRequestingFocusOnKeyboardInputEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISearchSuggestion :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchSuggestion>
{
    ISearchSuggestion(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISearchSuggestionManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchSuggestionManager>
{
    ISearchSuggestionManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISearchSuggestionsRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchSuggestionsRequestedEventArgs>
{
    ISearchSuggestionsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
