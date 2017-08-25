// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search {

struct LocalContentSuggestionSettings;
struct SearchQueryLinguisticDetails;
struct SearchSuggestionsRequest;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search::Core {

enum class SearchSuggestionKind
{
    Query = 0,
    Result = 1,
    Separator = 2,
};

struct IRequestingFocusOnKeyboardInputEventArgs;
struct ISearchSuggestion;
struct ISearchSuggestionManager;
struct ISearchSuggestionsRequestedEventArgs;
struct RequestingFocusOnKeyboardInputEventArgs;
struct SearchSuggestion;
struct SearchSuggestionManager;
struct SearchSuggestionsRequestedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::Core::ISearchSuggestion>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::Core::ISearchSuggestionManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::Core::SearchSuggestion>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::Core::SearchSuggestionManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::Core::SearchSuggestionKind>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.Core.IRequestingFocusOnKeyboardInputEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::Core::ISearchSuggestion>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.Core.ISearchSuggestion" }; };
template <> struct name<Windows::ApplicationModel::Search::Core::ISearchSuggestionManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.Core.ISearchSuggestionManager" }; };
template <> struct name<Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.Core.ISearchSuggestionsRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.Core.RequestingFocusOnKeyboardInputEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::Core::SearchSuggestion>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.Core.SearchSuggestion" }; };
template <> struct name<Windows::ApplicationModel::Search::Core::SearchSuggestionManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.Core.SearchSuggestionManager" }; };
template <> struct name<Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.Core.SearchSuggestionsRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::Core::SearchSuggestionKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.Core.SearchSuggestionKind" }; };
template <> struct guid<Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs>{ static constexpr GUID value{ 0xA1195F27,0xB1A7,0x41A2,{ 0x87,0x9D,0x6A,0x68,0x68,0x7E,0x59,0x85 } }; };
template <> struct guid<Windows::ApplicationModel::Search::Core::ISearchSuggestion>{ static constexpr GUID value{ 0x5B5554B0,0x1527,0x437B,{ 0x95,0xC5,0x8D,0x18,0xD2,0xB8,0xAF,0x55 } }; };
template <> struct guid<Windows::ApplicationModel::Search::Core::ISearchSuggestionManager>{ static constexpr GUID value{ 0x3F0C50A1,0xCB9D,0x497B,{ 0xB5,0x00,0x3C,0x04,0xAC,0x95,0x9A,0xD2 } }; };
template <> struct guid<Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs>{ static constexpr GUID value{ 0x6FD519E5,0x9E7E,0x4AB4,{ 0x8B,0xE3,0xC7,0x6B,0x1B,0xD4,0x34,0x4A } }; };
template <> struct default_interface<Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs>{ using type = Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Search::Core::SearchSuggestion>{ using type = Windows::ApplicationModel::Search::Core::ISearchSuggestion; };
template <> struct default_interface<Windows::ApplicationModel::Search::Core::SearchSuggestionManager>{ using type = Windows::ApplicationModel::Search::Core::ISearchSuggestionManager; };
template <> struct default_interface<Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs>{ using type = Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_Core_IRequestingFocusOnKeyboardInputEventArgs
{
};
template <> struct consume<Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Search_Core_IRequestingFocusOnKeyboardInputEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_Core_ISearchSuggestion
{
    Windows::ApplicationModel::Search::Core::SearchSuggestionKind Kind() const;
    hstring Text() const;
    hstring Tag() const;
    hstring DetailText() const;
    Windows::Storage::Streams::IRandomAccessStreamReference Image() const;
    hstring ImageAlternateText() const;
};
template <> struct consume<Windows::ApplicationModel::Search::Core::ISearchSuggestion> { template <typename D> using type = consume_Windows_ApplicationModel_Search_Core_ISearchSuggestion<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager
{
    bool SearchHistoryEnabled() const;
    void SearchHistoryEnabled(bool value) const;
    hstring SearchHistoryContext() const;
    void SearchHistoryContext(param::hstring const& value) const;
    void SetLocalContentSuggestionSettings(Windows::ApplicationModel::Search::LocalContentSuggestionSettings const& settings) const;
    void SetQuery(param::hstring const& queryText) const;
    void SetQuery(param::hstring const& queryText, param::hstring const& language) const;
    void SetQuery(param::hstring const& queryText, param::hstring const& language, Windows::ApplicationModel::Search::SearchQueryLinguisticDetails const& linguisticDetails) const;
    Windows::Foundation::Collections::IObservableVector<Windows::ApplicationModel::Search::Core::SearchSuggestion> Suggestions() const;
    void AddToHistory(param::hstring const& queryText) const;
    void AddToHistory(param::hstring const& queryText, param::hstring const& language) const;
    void ClearHistory() const;
    event_token SuggestionsRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> const& handler) const;
    using SuggestionsRequested_revoker = event_revoker<Windows::ApplicationModel::Search::Core::ISearchSuggestionManager>;
    SuggestionsRequested_revoker SuggestionsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> const& handler) const;
    void SuggestionsRequested(event_token const& token) const;
    event_token RequestingFocusOnKeyboardInput(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> const& handler) const;
    using RequestingFocusOnKeyboardInput_revoker = event_revoker<Windows::ApplicationModel::Search::Core::ISearchSuggestionManager>;
    RequestingFocusOnKeyboardInput_revoker RequestingFocusOnKeyboardInput(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> const& handler) const;
    void RequestingFocusOnKeyboardInput(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Search::Core::ISearchSuggestionManager> { template <typename D> using type = consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionsRequestedEventArgs
{
    hstring QueryText() const;
    hstring Language() const;
    Windows::ApplicationModel::Search::SearchQueryLinguisticDetails LinguisticDetails() const;
    Windows::ApplicationModel::Search::SearchSuggestionsRequest Request() const;
};
template <> struct consume<Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionsRequestedEventArgs<D>; };

template <> struct abi<Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Search::Core::ISearchSuggestion>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Search::Core::SearchSuggestionKind>* value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Tag(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DetailText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Image(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ImageAlternateText(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::Core::ISearchSuggestionManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SearchHistoryEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_SearchHistoryEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_SearchHistoryContext(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_SearchHistoryContext(HSTRING value) = 0;
    virtual HRESULT __stdcall SetLocalContentSuggestionSettings(::IUnknown* settings) = 0;
    virtual HRESULT __stdcall SetQuery(HSTRING queryText) = 0;
    virtual HRESULT __stdcall SetQueryWithLanguage(HSTRING queryText, HSTRING language) = 0;
    virtual HRESULT __stdcall SetQueryWithSearchQueryLinguisticDetails(HSTRING queryText, HSTRING language, ::IUnknown* linguisticDetails) = 0;
    virtual HRESULT __stdcall get_Suggestions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall AddToHistory(HSTRING queryText) = 0;
    virtual HRESULT __stdcall AddToHistoryWithLanguage(HSTRING queryText, HSTRING language) = 0;
    virtual HRESULT __stdcall ClearHistory() = 0;
    virtual HRESULT __stdcall add_SuggestionsRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SuggestionsRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_RequestingFocusOnKeyboardInput(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RequestingFocusOnKeyboardInput(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_QueryText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LinguisticDetails(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
};};

}
