// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage {

struct StorageFolder;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search {

struct ILocalContentSuggestionSettings;
struct ISearchPane;
struct ISearchPaneQueryChangedEventArgs;
struct ISearchPaneQueryLinguisticDetails;
struct ISearchPaneQuerySubmittedEventArgs;
struct ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails;
struct ISearchPaneResultSuggestionChosenEventArgs;
struct ISearchPaneStatics;
struct ISearchPaneStaticsWithHideThisApplication;
struct ISearchPaneSuggestionsRequest;
struct ISearchPaneSuggestionsRequestDeferral;
struct ISearchPaneSuggestionsRequestedEventArgs;
struct ISearchPaneVisibilityChangedEventArgs;
struct ISearchQueryLinguisticDetails;
struct ISearchQueryLinguisticDetailsFactory;
struct ISearchSuggestionCollection;
struct ISearchSuggestionsRequest;
struct ISearchSuggestionsRequestDeferral;
struct LocalContentSuggestionSettings;
struct SearchPane;
struct SearchPaneQueryChangedEventArgs;
struct SearchPaneQueryLinguisticDetails;
struct SearchPaneQuerySubmittedEventArgs;
struct SearchPaneResultSuggestionChosenEventArgs;
struct SearchPaneSuggestionsRequest;
struct SearchPaneSuggestionsRequestDeferral;
struct SearchPaneSuggestionsRequestedEventArgs;
struct SearchPaneVisibilityChangedEventArgs;
struct SearchQueryLinguisticDetails;
struct SearchSuggestionCollection;
struct SearchSuggestionsRequest;
struct SearchSuggestionsRequestDeferral;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchPane>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchPaneStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchSuggestionCollection>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::LocalContentSuggestionSettings>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchPane>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchSuggestionCollection>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchSuggestionsRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ILocalContentSuggestionSettings" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchPane>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPane" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneQueryChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneQueryLinguisticDetails" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneQuerySubmittedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneResultSuggestionChosenEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchPaneStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneStatics" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneStaticsWithHideThisApplication" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneSuggestionsRequest" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneSuggestionsRequestDeferral" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneSuggestionsRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneVisibilityChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchQueryLinguisticDetails" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchQueryLinguisticDetailsFactory" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchSuggestionCollection>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchSuggestionCollection" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchSuggestionsRequest" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchSuggestionsRequestDeferral" }; };
template <> struct name<Windows::ApplicationModel::Search::LocalContentSuggestionSettings>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.LocalContentSuggestionSettings" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchPane>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPane" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneQueryChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneQueryLinguisticDetails" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneQuerySubmittedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneResultSuggestionChosenEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequest" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequestDeferral" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneVisibilityChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchQueryLinguisticDetails" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchSuggestionCollection>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchSuggestionCollection" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchSuggestionsRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchSuggestionsRequest" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchSuggestionsRequestDeferral" }; };
template <> struct guid<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>{ static constexpr GUID value{ 0xEEAEB062,0x743D,0x456E,{ 0x84,0xA3,0x23,0xF0,0x6F,0x2D,0x15,0xD7 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchPane>{ static constexpr GUID value{ 0xFDACEC38,0x3700,0x4D73,{ 0x91,0xA1,0x2F,0x99,0x86,0x74,0x23,0x8A } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>{ static constexpr GUID value{ 0x3C064FE9,0x2351,0x4248,{ 0xA5,0x29,0x71,0x10,0xF4,0x64,0xA7,0x85 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>{ static constexpr GUID value{ 0x82FB460E,0x0940,0x4B6D,{ 0xB8,0xD0,0x64,0x2B,0x30,0x98,0x9E,0x15 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>{ static constexpr GUID value{ 0x143BA4FC,0xE9C5,0x4736,{ 0x91,0xB2,0xE8,0xEB,0x9C,0xB8,0x83,0x56 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>{ static constexpr GUID value{ 0x460C92E5,0x4C32,0x4538,{ 0xA4,0xD4,0xB6,0xB4,0x40,0x0D,0x14,0x0F } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>{ static constexpr GUID value{ 0xC8316CC0,0xAED2,0x41E0,{ 0xBC,0xE0,0xC2,0x6C,0xA7,0x4F,0x85,0xEC } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchPaneStatics>{ static constexpr GUID value{ 0x9572ADF1,0x8F1D,0x481F,{ 0xA1,0x5B,0xC6,0x16,0x55,0xF1,0x6A,0x0E } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>{ static constexpr GUID value{ 0x00732830,0x50F1,0x4D03,{ 0x99,0xAC,0xC6,0x64,0x4C,0x8E,0xD8,0xB5 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>{ static constexpr GUID value{ 0x81B10B1C,0xE561,0x4093,{ 0x9B,0x4D,0x2A,0xD4,0x82,0x79,0x4A,0x53 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>{ static constexpr GUID value{ 0xA0D009F7,0x8748,0x4EE2,{ 0xAD,0x44,0xAF,0xA6,0xBE,0x99,0x7C,0x51 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>{ static constexpr GUID value{ 0xC89B8A2F,0xAC56,0x4460,{ 0x8D,0x2F,0x80,0x02,0x3B,0xEC,0x4F,0xC5 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>{ static constexpr GUID value{ 0x3C4D3046,0xAC4B,0x49F2,{ 0x97,0xD6,0x02,0x0E,0x61,0x82,0xCB,0x9C } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>{ static constexpr GUID value{ 0x46A1205B,0x69C9,0x4745,{ 0xB7,0x2F,0xA8,0xA4,0xFC,0x8F,0x24,0xAE } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>{ static constexpr GUID value{ 0xCAC6C3B8,0x3C64,0x4DFD,{ 0xAD,0x9F,0x47,0x9E,0x4D,0x40,0x65,0xA4 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchSuggestionCollection>{ static constexpr GUID value{ 0x323A8A4B,0xFBEA,0x4446,{ 0xAB,0xBC,0x3D,0xA7,0x91,0x5F,0xDD,0x3A } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>{ static constexpr GUID value{ 0x4E4E26A7,0x44E5,0x4039,{ 0x90,0x99,0x60,0x00,0xEA,0xD1,0xF0,0xC6 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>{ static constexpr GUID value{ 0xB71598A9,0xC065,0x456D,{ 0xA8,0x45,0x1E,0xCC,0xEC,0x5D,0xC2,0x8B } }; };
template <> struct default_interface<Windows::ApplicationModel::Search::LocalContentSuggestionSettings>{ using type = Windows::ApplicationModel::Search::ILocalContentSuggestionSettings; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchPane>{ using type = Windows::ApplicationModel::Search::ISearchPane; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs>{ using type = Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>{ using type = Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs>{ using type = Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs>{ using type = Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest>{ using type = Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral>{ using type = Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs>{ using type = Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs>{ using type = Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>{ using type = Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchSuggestionCollection>{ using type = Windows::ApplicationModel::Search::ISearchSuggestionCollection; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchSuggestionsRequest>{ using type = Windows::ApplicationModel::Search::ISearchSuggestionsRequest; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>{ using type = Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings
{
    void Enabled(bool value) const;
    bool Enabled() const;
    Windows::Foundation::Collections::IVector<Windows::Storage::StorageFolder> Locations() const;
    void AqsFilter(param::hstring const& value) const;
    hstring AqsFilter() const;
    Windows::Foundation::Collections::IVector<hstring> PropertiesToMatch() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchPane
{
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] void SearchHistoryEnabled(bool value) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] bool SearchHistoryEnabled() const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] void SearchHistoryContext(param::hstring const& value) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] hstring SearchHistoryContext() const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] void PlaceholderText(param::hstring const& value) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] hstring PlaceholderText() const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] hstring QueryText() const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] hstring Language() const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] bool Visible() const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] event_token VisibilityChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> const& handler) const;
    using VisibilityChanged_revoker = event_revoker<Windows::ApplicationModel::Search::ISearchPane>;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> const& handler) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] void VisibilityChanged(event_token const& token) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] event_token QueryChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> const& handler) const;
    using QueryChanged_revoker = event_revoker<Windows::ApplicationModel::Search::ISearchPane>;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] QueryChanged_revoker QueryChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> const& handler) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] void QueryChanged(event_token const& token) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] event_token SuggestionsRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> const& handler) const;
    using SuggestionsRequested_revoker = event_revoker<Windows::ApplicationModel::Search::ISearchPane>;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] SuggestionsRequested_revoker SuggestionsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> const& handler) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] void SuggestionsRequested(event_token const& token) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] event_token QuerySubmitted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> const& handler) const;
    using QuerySubmitted_revoker = event_revoker<Windows::ApplicationModel::Search::ISearchPane>;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] QuerySubmitted_revoker QuerySubmitted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> const& handler) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] void QuerySubmitted(event_token const& token) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] event_token ResultSuggestionChosen(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> const& handler) const;
    using ResultSuggestionChosen_revoker = event_revoker<Windows::ApplicationModel::Search::ISearchPane>;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] ResultSuggestionChosen_revoker ResultSuggestionChosen(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> const& handler) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] void ResultSuggestionChosen(event_token const& token) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] void SetLocalContentSuggestionSettings(Windows::ApplicationModel::Search::LocalContentSuggestionSettings const& settings) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] void Show() const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] void Show(param::hstring const& query) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] void ShowOnKeyboardInput(bool value) const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] bool ShowOnKeyboardInput() const;
    [[deprecated("ISearchPane may be altered or unavailable for releases after Windows 10.")]] bool TrySetQueryText(param::hstring const& query) const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchPane> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPane<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchPaneQueryChangedEventArgs
{
    [[deprecated("ISearchPaneQueryChangedEventArgs may be altered or unavailable for releases after Windows 10.")]] hstring QueryText() const;
    [[deprecated("ISearchPaneQueryChangedEventArgs may be altered or unavailable for releases after Windows 10.")]] hstring Language() const;
    [[deprecated("ISearchPaneQueryChangedEventArgs may be altered or unavailable for releases after Windows 10.")]] Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails LinguisticDetails() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQueryChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails
{
    Windows::Foundation::Collections::IVectorView<hstring> QueryTextAlternatives() const;
    uint32_t QueryTextCompositionStart() const;
    uint32_t QueryTextCompositionLength() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgs
{
    [[deprecated("ISearchPaneQuerySubmittedEventArgs may be altered or unavailable for releases after Windows 10.")]] hstring QueryText() const;
    [[deprecated("ISearchPaneQuerySubmittedEventArgs may be altered or unavailable for releases after Windows 10.")]] hstring Language() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails
{
    [[deprecated("ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails may be altered or unavailable for releases after Windows 10.")]] Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails LinguisticDetails() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchPaneResultSuggestionChosenEventArgs
{
    [[deprecated("ISearchPaneResultSuggestionChosenEventArgs may be altered or unavailable for releases after Windows 10.")]] hstring Tag() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneResultSuggestionChosenEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchPaneStatics
{
    [[deprecated("ISearchPaneStatics may be altered or unavailable for releases after Windows 10.")]] Windows::ApplicationModel::Search::SearchPane GetForCurrentView() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchPaneStaticsWithHideThisApplication
{
    [[deprecated("ISearchPaneStaticsWithHideThisApplication may be altered or unavailable for releases after Windows 10.")]] void HideThisApplication() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneStaticsWithHideThisApplication<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequest
{
    [[deprecated("ISearchPaneSuggestionsRequest may be altered or unavailable for releases after Windows 10.")]] bool IsCanceled() const;
    [[deprecated("ISearchPaneSuggestionsRequest may be altered or unavailable for releases after Windows 10.")]] Windows::ApplicationModel::Search::SearchSuggestionCollection SearchSuggestionCollection() const;
    [[deprecated("ISearchPaneSuggestionsRequest may be altered or unavailable for releases after Windows 10.")]] Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestDeferral
{
    [[deprecated("ISearchPaneSuggestionsRequestDeferral may be altered or unavailable for releases after Windows 10.")]] void Complete() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestDeferral<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestedEventArgs
{
    [[deprecated("ISearchPaneSuggestionsRequestedEventArgs may be altered or unavailable for releases after Windows 10.")]] Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest Request() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchPaneVisibilityChangedEventArgs
{
    [[deprecated("ISearchPaneVisibilityChangedEventArgs may be altered or unavailable for releases after Windows 10.")]] bool Visible() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneVisibilityChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails
{
    Windows::Foundation::Collections::IVectorView<hstring> QueryTextAlternatives() const;
    uint32_t QueryTextCompositionStart() const;
    uint32_t QueryTextCompositionLength() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetailsFactory
{
    Windows::ApplicationModel::Search::SearchQueryLinguisticDetails CreateInstance(param::iterable<hstring> const& queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength) const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetailsFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection
{
    uint32_t Size() const;
    void AppendQuerySuggestion(param::hstring const& text) const;
    void AppendQuerySuggestions(param::iterable<hstring> const& suggestions) const;
    void AppendResultSuggestion(param::hstring const& text, param::hstring const& detailText, param::hstring const& tag, Windows::Storage::Streams::IRandomAccessStreamReference const& image, param::hstring const& imageAlternateText) const;
    void AppendSearchSeparator(param::hstring const& label) const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchSuggestionCollection> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest
{
    bool IsCanceled() const;
    Windows::ApplicationModel::Search::SearchSuggestionCollection SearchSuggestionCollection() const;
    Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchSuggestionsRequest> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequestDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequestDeferral<D>; };

template <> struct abi<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Enabled(bool value) = 0;
    virtual HRESULT __stdcall get_Enabled(bool* value) = 0;
    virtual HRESULT __stdcall get_Locations(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AqsFilter(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AqsFilter(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PropertiesToMatch(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchPane>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_SearchHistoryEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_SearchHistoryEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_SearchHistoryContext(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SearchHistoryContext(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PlaceholderText(HSTRING value) = 0;
    virtual HRESULT __stdcall get_PlaceholderText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_QueryText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Visible(bool* value) = 0;
    virtual HRESULT __stdcall add_VisibilityChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_VisibilityChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_QueryChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_QueryChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SuggestionsRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SuggestionsRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_QuerySubmitted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_QuerySubmitted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ResultSuggestionChosen(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ResultSuggestionChosen(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall SetLocalContentSuggestionSettings(::IUnknown* settings) = 0;
    virtual HRESULT __stdcall ShowOverloadDefault() = 0;
    virtual HRESULT __stdcall ShowOverloadWithQuery(HSTRING query) = 0;
    virtual HRESULT __stdcall put_ShowOnKeyboardInput(bool value) = 0;
    virtual HRESULT __stdcall get_ShowOnKeyboardInput(bool* value) = 0;
    virtual HRESULT __stdcall TrySetQueryText(HSTRING query, bool* succeeded) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_QueryText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LinguisticDetails(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_QueryTextAlternatives(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_QueryTextCompositionStart(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_QueryTextCompositionLength(uint32_t* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_QueryText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LinguisticDetails(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Tag(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** searchPane) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall HideThisApplication() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsCanceled(bool* value) = 0;
    virtual HRESULT __stdcall get_SearchSuggestionCollection(::IUnknown** collection) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** deferral) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Visible(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_QueryTextAlternatives(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_QueryTextCompositionStart(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_QueryTextCompositionLength(uint32_t* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchSuggestionCollection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Size(uint32_t* value) = 0;
    virtual HRESULT __stdcall AppendQuerySuggestion(HSTRING text) = 0;
    virtual HRESULT __stdcall AppendQuerySuggestions(::IUnknown* suggestions) = 0;
    virtual HRESULT __stdcall AppendResultSuggestion(HSTRING text, HSTRING detailText, HSTRING tag, ::IUnknown* image, HSTRING imageAlternateText) = 0;
    virtual HRESULT __stdcall AppendSearchSeparator(HSTRING label) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsCanceled(bool* value) = 0;
    virtual HRESULT __stdcall get_SearchSuggestionCollection(::IUnknown** collection) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** deferral) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

}
