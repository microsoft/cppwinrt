// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.Search.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Search {

struct __declspec(uuid("eeaeb062-743d-456e-84a3-23f06f2d15d7")) __declspec(novtable) ILocalContentSuggestionSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Enabled(bool value) = 0;
    virtual HRESULT __stdcall get_Enabled(bool * value) = 0;
    virtual HRESULT __stdcall get_Locations(Windows::Foundation::Collections::IVector<Windows::Storage::StorageFolder> ** value) = 0;
    virtual HRESULT __stdcall put_AqsFilter(hstring value) = 0;
    virtual HRESULT __stdcall get_AqsFilter(hstring * value) = 0;
    virtual HRESULT __stdcall get_PropertiesToMatch(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
};

struct __declspec(uuid("fdacec38-3700-4d73-91a1-2f998674238a")) __declspec(novtable) ISearchPane : Windows::IInspectable
{
    virtual HRESULT __stdcall put_SearchHistoryEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_SearchHistoryEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_SearchHistoryContext(hstring value) = 0;
    virtual HRESULT __stdcall get_SearchHistoryContext(hstring * value) = 0;
    virtual HRESULT __stdcall put_PlaceholderText(hstring value) = 0;
    virtual HRESULT __stdcall get_PlaceholderText(hstring * value) = 0;
    virtual HRESULT __stdcall get_QueryText(hstring * value) = 0;
    virtual HRESULT __stdcall get_Language(hstring * value) = 0;
    virtual HRESULT __stdcall get_Visible(bool * value) = 0;
    virtual HRESULT __stdcall add_VisibilityChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_VisibilityChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_QueryChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_QueryChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_SuggestionsRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SuggestionsRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_QuerySubmitted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_QuerySubmitted(event_token token) = 0;
    virtual HRESULT __stdcall add_ResultSuggestionChosen(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ResultSuggestionChosen(event_token token) = 0;
    virtual HRESULT __stdcall abi_SetLocalContentSuggestionSettings(Windows::ApplicationModel::Search::ILocalContentSuggestionSettings * settings) = 0;
    virtual HRESULT __stdcall abi_ShowOverloadDefault() = 0;
    virtual HRESULT __stdcall abi_ShowOverloadWithQuery(hstring query) = 0;
    virtual HRESULT __stdcall put_ShowOnKeyboardInput(bool value) = 0;
    virtual HRESULT __stdcall get_ShowOnKeyboardInput(bool * value) = 0;
    virtual HRESULT __stdcall abi_TrySetQueryText(hstring query, bool * succeeded) = 0;
};

struct __declspec(uuid("3c064fe9-2351-4248-a529-7110f464a785")) __declspec(novtable) ISearchPaneQueryChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_QueryText(hstring * value) = 0;
    virtual HRESULT __stdcall get_Language(hstring * value) = 0;
    virtual HRESULT __stdcall get_LinguisticDetails(Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails ** value) = 0;
};

struct __declspec(uuid("82fb460e-0940-4b6d-b8d0-642b30989e15")) __declspec(novtable) ISearchPaneQueryLinguisticDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_QueryTextAlternatives(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_QueryTextCompositionStart(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_QueryTextCompositionLength(uint32_t * value) = 0;
};

struct __declspec(uuid("143ba4fc-e9c5-4736-91b2-e8eb9cb88356")) __declspec(novtable) ISearchPaneQuerySubmittedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_QueryText(hstring * value) = 0;
    virtual HRESULT __stdcall get_Language(hstring * value) = 0;
};

struct __declspec(uuid("460c92e5-4c32-4538-a4d4-b6b4400d140f")) __declspec(novtable) ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_LinguisticDetails(Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails ** value) = 0;
};

struct __declspec(uuid("c8316cc0-aed2-41e0-bce0-c26ca74f85ec")) __declspec(novtable) ISearchPaneResultSuggestionChosenEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Tag(hstring * value) = 0;
};

struct __declspec(uuid("9572adf1-8f1d-481f-a15b-c61655f16a0e")) __declspec(novtable) ISearchPaneStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::ApplicationModel::Search::ISearchPane ** searchPane) = 0;
};

struct __declspec(uuid("00732830-50f1-4d03-99ac-c6644c8ed8b5")) __declspec(novtable) ISearchPaneStaticsWithHideThisApplication : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_HideThisApplication() = 0;
};

struct __declspec(uuid("81b10b1c-e561-4093-9b4d-2ad482794a53")) __declspec(novtable) ISearchPaneSuggestionsRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsCanceled(bool * value) = 0;
    virtual HRESULT __stdcall get_SearchSuggestionCollection(Windows::ApplicationModel::Search::ISearchSuggestionCollection ** collection) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral ** deferral) = 0;
};

struct __declspec(uuid("a0d009f7-8748-4ee2-ad44-afa6be997c51")) __declspec(novtable) ISearchPaneSuggestionsRequestDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("c89b8a2f-ac56-4460-8d2f-80023bec4fc5")) __declspec(novtable) ISearchPaneSuggestionsRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest ** value) = 0;
};

struct __declspec(uuid("3c4d3046-ac4b-49f2-97d6-020e6182cb9c")) __declspec(novtable) ISearchPaneVisibilityChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Visible(bool * value) = 0;
};

struct __declspec(uuid("46a1205b-69c9-4745-b72f-a8a4fc8f24ae")) __declspec(novtable) ISearchQueryLinguisticDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_QueryTextAlternatives(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_QueryTextCompositionStart(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_QueryTextCompositionLength(uint32_t * value) = 0;
};

struct __declspec(uuid("cac6c3b8-3c64-4dfd-ad9f-479e4d4065a4")) __declspec(novtable) ISearchQueryLinguisticDetailsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::Foundation::Collections::IIterable<hstring> * queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails ** value) = 0;
};

struct __declspec(uuid("323a8a4b-fbea-4446-abbc-3da7915fdd3a")) __declspec(novtable) ISearchSuggestionCollection : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Size(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_AppendQuerySuggestion(hstring text) = 0;
    virtual HRESULT __stdcall abi_AppendQuerySuggestions(Windows::Foundation::Collections::IIterable<hstring> * suggestions) = 0;
    virtual HRESULT __stdcall abi_AppendResultSuggestion(hstring text, hstring detailText, hstring tag, Windows::Storage::Streams::IRandomAccessStreamReference * image, hstring imageAlternateText) = 0;
    virtual HRESULT __stdcall abi_AppendSearchSeparator(hstring label) = 0;
};

struct __declspec(uuid("4e4e26a7-44e5-4039-9099-6000ead1f0c6")) __declspec(novtable) ISearchSuggestionsRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsCanceled(bool * value) = 0;
    virtual HRESULT __stdcall get_SearchSuggestionCollection(Windows::ApplicationModel::Search::ISearchSuggestionCollection ** collection) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral ** deferral) = 0;
};

struct __declspec(uuid("b71598a9-c065-456d-a845-1eccec5dc28b")) __declspec(novtable) ISearchSuggestionsRequestDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::Search::LocalContentSuggestionSettings> { using default_interface = Windows::ApplicationModel::Search::ILocalContentSuggestionSettings; };
template <> struct traits<Windows::ApplicationModel::Search::SearchPane> { using default_interface = Windows::ApplicationModel::Search::ISearchPane; };
template <> struct traits<Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> { using default_interface = Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs; };
template <> struct traits<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails> { using default_interface = Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails; };
template <> struct traits<Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> { using default_interface = Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs; };
template <> struct traits<Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> { using default_interface = Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs; };
template <> struct traits<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest> { using default_interface = Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest; };
template <> struct traits<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral> { using default_interface = Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral; };
template <> struct traits<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> { using default_interface = Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs; };
template <> struct traits<Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> { using default_interface = Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs; };
template <> struct traits<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails> { using default_interface = Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails; };
template <> struct traits<Windows::ApplicationModel::Search::SearchSuggestionCollection> { using default_interface = Windows::ApplicationModel::Search::ISearchSuggestionCollection; };
template <> struct traits<Windows::ApplicationModel::Search::SearchSuggestionsRequest> { using default_interface = Windows::ApplicationModel::Search::ISearchSuggestionsRequest; };
template <> struct traits<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral> { using default_interface = Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral; };

}

namespace Windows::ApplicationModel::Search {

template <typename T> struct impl_ILocalContentSuggestionSettings;
template <typename T> struct impl_ISearchPane;
template <typename T> struct impl_ISearchPaneQueryChangedEventArgs;
template <typename T> struct impl_ISearchPaneQueryLinguisticDetails;
template <typename T> struct impl_ISearchPaneQuerySubmittedEventArgs;
template <typename T> struct impl_ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails;
template <typename T> struct impl_ISearchPaneResultSuggestionChosenEventArgs;
template <typename T> struct impl_ISearchPaneStatics;
template <typename T> struct impl_ISearchPaneStaticsWithHideThisApplication;
template <typename T> struct impl_ISearchPaneSuggestionsRequest;
template <typename T> struct impl_ISearchPaneSuggestionsRequestDeferral;
template <typename T> struct impl_ISearchPaneSuggestionsRequestedEventArgs;
template <typename T> struct impl_ISearchPaneVisibilityChangedEventArgs;
template <typename T> struct impl_ISearchQueryLinguisticDetails;
template <typename T> struct impl_ISearchQueryLinguisticDetailsFactory;
template <typename T> struct impl_ISearchSuggestionCollection;
template <typename T> struct impl_ISearchSuggestionsRequest;
template <typename T> struct impl_ISearchSuggestionsRequestDeferral;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>
{
    using abi = ABI::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ILocalContentSuggestionSettings<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchPane>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchPane;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchPane<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchPaneQueryChangedEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchPaneQueryLinguisticDetails<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchPaneQuerySubmittedEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchPaneResultSuggestionChosenEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchPaneStatics>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchPaneStatics;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchPaneStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchPaneStaticsWithHideThisApplication<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchPaneSuggestionsRequest<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchPaneSuggestionsRequestDeferral<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchPaneSuggestionsRequestedEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchPaneVisibilityChangedEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchQueryLinguisticDetails<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchQueryLinguisticDetailsFactory<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchSuggestionCollection>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchSuggestionCollection;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchSuggestionCollection<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchSuggestionsRequest;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchSuggestionsRequest<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>
{
    using abi = ABI::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral;
    template <typename D> using consume = Windows::ApplicationModel::Search::impl_ISearchSuggestionsRequestDeferral<D>;
};

template <> struct traits<Windows::ApplicationModel::Search::LocalContentSuggestionSettings>
{
    using abi = ABI::Windows::ApplicationModel::Search::LocalContentSuggestionSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.LocalContentSuggestionSettings"; }
};

template <> struct traits<Windows::ApplicationModel::Search::SearchPane>
{
    using abi = ABI::Windows::ApplicationModel::Search::SearchPane;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.SearchPane"; }
};

template <> struct traits<Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.SearchPaneQueryChangedEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>
{
    using abi = ABI::Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.SearchPaneQueryLinguisticDetails"; }
};

template <> struct traits<Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.SearchPaneQuerySubmittedEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.SearchPaneResultSuggestionChosenEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest>
{
    using abi = ABI::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequest"; }
};

template <> struct traits<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral>
{
    using abi = ABI::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequestDeferral"; }
};

template <> struct traits<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequestedEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.SearchPaneVisibilityChangedEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>
{
    using abi = ABI::Windows::ApplicationModel::Search::SearchQueryLinguisticDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.SearchQueryLinguisticDetails"; }
};

template <> struct traits<Windows::ApplicationModel::Search::SearchSuggestionCollection>
{
    using abi = ABI::Windows::ApplicationModel::Search::SearchSuggestionCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.SearchSuggestionCollection"; }
};

template <> struct traits<Windows::ApplicationModel::Search::SearchSuggestionsRequest>
{
    using abi = ABI::Windows::ApplicationModel::Search::SearchSuggestionsRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.SearchSuggestionsRequest"; }
};

template <> struct traits<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>
{
    using abi = ABI::Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Search.SearchSuggestionsRequestDeferral"; }
};

}

}
