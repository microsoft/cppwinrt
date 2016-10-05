// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Search.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
#define WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
template <> struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90")) __declspec(novtable) IVector<hstring> : impl_IVector<hstring> {};
#endif

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif

#ifndef WINRT_GENERIC_6c26b7be_5f01_5a60_9dd7_fd17be3a9dd6
#define WINRT_GENERIC_6c26b7be_5f01_5a60_9dd7_fd17be3a9dd6
template <> struct __declspec(uuid("6c26b7be-5f01-5a60-9dd7-fd17be3a9dd6")) __declspec(novtable) IVector<Windows::Storage::StorageFolder> : impl_IVector<Windows::Storage::StorageFolder> {};
#endif

#ifndef WINRT_GENERIC_e20debc6_dc4e_542e_a2e7_a24d19c8dd62
#define WINRT_GENERIC_e20debc6_dc4e_542e_a2e7_a24d19c8dd62
template <> struct __declspec(uuid("e20debc6-dc4e-542e-a2e7-a24d19c8dd62")) __declspec(novtable) IVectorView<Windows::Storage::StorageFolder> : impl_IVectorView<Windows::Storage::StorageFolder> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_3975ff72_971b_54b6_9b5f_cc442e2a87f0
#define WINRT_GENERIC_3975ff72_971b_54b6_9b5f_cc442e2a87f0
template <> struct __declspec(uuid("3975ff72-971b-54b6-9b5f-cc442e2a87f0")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_7ccd7da1_8767_5eef_972d_31d09f1bf308
#define WINRT_GENERIC_7ccd7da1_8767_5eef_972d_31d09f1bf308
template <> struct __declspec(uuid("7ccd7da1-8767-5eef-972d-31d09f1bf308")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_95088dc0_6c14_55b8_8a8f_9df1ca44d1d4
#define WINRT_GENERIC_95088dc0_6c14_55b8_8a8f_9df1ca44d1d4
template <> struct __declspec(uuid("95088dc0-6c14-55b8-8a8f-9df1ca44d1d4")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_5f05121b_61a6_5f6b_b007_20816dfe7009
#define WINRT_GENERIC_5f05121b_61a6_5f6b_b007_20816dfe7009
template <> struct __declspec(uuid("5f05121b-61a6-5f6b-b007-20816dfe7009")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_ec31e5d4_3b8c_5757_96bf_14096be946cd
#define WINRT_GENERIC_ec31e5d4_3b8c_5757_96bf_14096be946cd
template <> struct __declspec(uuid("ec31e5d4-3b8c-5757-96bf-14096be946cd")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_5aac96fb_b3b9_5a7f_a920_4b5a8df81168
#define WINRT_GENERIC_5aac96fb_b3b9_5a7f_a920_4b5a8df81168
template <> struct __declspec(uuid("5aac96fb-b3b9-5a7f-a920-4b5a8df81168")) __declspec(novtable) IIterator<Windows::Storage::StorageFolder> : impl_IIterator<Windows::Storage::StorageFolder> {};
#endif

#ifndef WINRT_GENERIC_4669befc_ae5c_52b1_8a97_5466ce61e94e
#define WINRT_GENERIC_4669befc_ae5c_52b1_8a97_5466ce61e94e
template <> struct __declspec(uuid("4669befc-ae5c-52b1-8a97-5466ce61e94e")) __declspec(novtable) IIterable<Windows::Storage::StorageFolder> : impl_IIterable<Windows::Storage::StorageFolder> {};
#endif


}

namespace Windows::ApplicationModel::Search {

template <typename D>
struct WINRT_EBO impl_ILocalContentSuggestionSettings
{
    void Enabled(bool value) const;
    bool Enabled() const;
    Windows::Foundation::Collections::IVector<Windows::Storage::StorageFolder> Locations() const;
    void AqsFilter(hstring_ref value) const;
    hstring AqsFilter() const;
    Windows::Foundation::Collections::IVector<hstring> PropertiesToMatch() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchPane
{
    void SearchHistoryEnabled(bool value) const;
    bool SearchHistoryEnabled() const;
    void SearchHistoryContext(hstring_ref value) const;
    hstring SearchHistoryContext() const;
    void PlaceholderText(hstring_ref value) const;
    hstring PlaceholderText() const;
    hstring QueryText() const;
    hstring Language() const;
    bool Visible() const;
    event_token VisibilityChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> & handler) const;
    using VisibilityChanged_revoker = event_revoker<ISearchPane>;
    VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> & handler) const;
    void VisibilityChanged(event_token token) const;
    event_token QueryChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> & handler) const;
    using QueryChanged_revoker = event_revoker<ISearchPane>;
    QueryChanged_revoker QueryChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> & handler) const;
    void QueryChanged(event_token token) const;
    event_token SuggestionsRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> & handler) const;
    using SuggestionsRequested_revoker = event_revoker<ISearchPane>;
    SuggestionsRequested_revoker SuggestionsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> & handler) const;
    void SuggestionsRequested(event_token token) const;
    event_token QuerySubmitted(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> & handler) const;
    using QuerySubmitted_revoker = event_revoker<ISearchPane>;
    QuerySubmitted_revoker QuerySubmitted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> & handler) const;
    void QuerySubmitted(event_token token) const;
    event_token ResultSuggestionChosen(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> & handler) const;
    using ResultSuggestionChosen_revoker = event_revoker<ISearchPane>;
    ResultSuggestionChosen_revoker ResultSuggestionChosen(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> & handler) const;
    void ResultSuggestionChosen(event_token token) const;
    void SetLocalContentSuggestionSettings(const Windows::ApplicationModel::Search::LocalContentSuggestionSettings & settings) const;
    void Show() const;
    void Show(hstring_ref query) const;
    void ShowOnKeyboardInput(bool value) const;
    bool ShowOnKeyboardInput() const;
    bool TrySetQueryText(hstring_ref query) const;
};

template <typename D>
struct WINRT_EBO impl_ISearchPaneQueryChangedEventArgs
{
    hstring QueryText() const;
    hstring Language() const;
    Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails LinguisticDetails() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchPaneQueryLinguisticDetails
{
    Windows::Foundation::Collections::IVectorView<hstring> QueryTextAlternatives() const;
    uint32_t QueryTextCompositionStart() const;
    uint32_t QueryTextCompositionLength() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchPaneQuerySubmittedEventArgs
{
    hstring QueryText() const;
    hstring Language() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails
{
    Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails LinguisticDetails() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchPaneResultSuggestionChosenEventArgs
{
    hstring Tag() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchPaneStatics
{
    Windows::ApplicationModel::Search::SearchPane GetForCurrentView() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchPaneStaticsWithHideThisApplication
{
    void HideThisApplication() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchPaneSuggestionsRequest
{
    bool IsCanceled() const;
    Windows::ApplicationModel::Search::SearchSuggestionCollection SearchSuggestionCollection() const;
    Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchPaneSuggestionsRequestDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchPaneSuggestionsRequestedEventArgs
{
    Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest Request() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchPaneVisibilityChangedEventArgs
{
    bool Visible() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchQueryLinguisticDetails
{
    Windows::Foundation::Collections::IVectorView<hstring> QueryTextAlternatives() const;
    uint32_t QueryTextCompositionStart() const;
    uint32_t QueryTextCompositionLength() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchQueryLinguisticDetailsFactory
{
    Windows::ApplicationModel::Search::SearchQueryLinguisticDetails CreateInstance(const Windows::Foundation::Collections::IIterable<hstring> & queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength) const;
};

template <typename D>
struct WINRT_EBO impl_ISearchSuggestionCollection
{
    uint32_t Size() const;
    void AppendQuerySuggestion(hstring_ref text) const;
    void AppendQuerySuggestions(const Windows::Foundation::Collections::IIterable<hstring> & suggestions) const;
    void AppendResultSuggestion(hstring_ref text, hstring_ref detailText, hstring_ref tag, const Windows::Storage::Streams::IRandomAccessStreamReference & image, hstring_ref imageAlternateText) const;
    void AppendSearchSeparator(hstring_ref label) const;
};

template <typename D>
struct WINRT_EBO impl_ISearchSuggestionsRequest
{
    bool IsCanceled() const;
    Windows::ApplicationModel::Search::SearchSuggestionCollection SearchSuggestionCollection() const;
    Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchSuggestionsRequestDeferral
{
    void Complete() const;
};

struct ILocalContentSuggestionSettings :
    Windows::IInspectable,
    impl::consume<ILocalContentSuggestionSettings>
{
    ILocalContentSuggestionSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILocalContentSuggestionSettings>(m_ptr); }
};

struct ISearchPane :
    Windows::IInspectable,
    impl::consume<ISearchPane>
{
    ISearchPane(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchPane>(m_ptr); }
};

struct ISearchPaneQueryChangedEventArgs :
    Windows::IInspectable,
    impl::consume<ISearchPaneQueryChangedEventArgs>
{
    ISearchPaneQueryChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchPaneQueryChangedEventArgs>(m_ptr); }
};

struct ISearchPaneQueryLinguisticDetails :
    Windows::IInspectable,
    impl::consume<ISearchPaneQueryLinguisticDetails>
{
    ISearchPaneQueryLinguisticDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchPaneQueryLinguisticDetails>(m_ptr); }
};

struct ISearchPaneQuerySubmittedEventArgs :
    Windows::IInspectable,
    impl::consume<ISearchPaneQuerySubmittedEventArgs>
{
    ISearchPaneQuerySubmittedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchPaneQuerySubmittedEventArgs>(m_ptr); }
};

struct ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails :
    Windows::IInspectable,
    impl::consume<ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
{
    ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>(m_ptr); }
};

struct ISearchPaneResultSuggestionChosenEventArgs :
    Windows::IInspectable,
    impl::consume<ISearchPaneResultSuggestionChosenEventArgs>
{
    ISearchPaneResultSuggestionChosenEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchPaneResultSuggestionChosenEventArgs>(m_ptr); }
};

struct ISearchPaneStatics :
    Windows::IInspectable,
    impl::consume<ISearchPaneStatics>
{
    ISearchPaneStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchPaneStatics>(m_ptr); }
};

struct ISearchPaneStaticsWithHideThisApplication :
    Windows::IInspectable,
    impl::consume<ISearchPaneStaticsWithHideThisApplication>
{
    ISearchPaneStaticsWithHideThisApplication(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchPaneStaticsWithHideThisApplication>(m_ptr); }
};

struct ISearchPaneSuggestionsRequest :
    Windows::IInspectable,
    impl::consume<ISearchPaneSuggestionsRequest>
{
    ISearchPaneSuggestionsRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchPaneSuggestionsRequest>(m_ptr); }
};

struct ISearchPaneSuggestionsRequestDeferral :
    Windows::IInspectable,
    impl::consume<ISearchPaneSuggestionsRequestDeferral>
{
    ISearchPaneSuggestionsRequestDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchPaneSuggestionsRequestDeferral>(m_ptr); }
};

struct ISearchPaneSuggestionsRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<ISearchPaneSuggestionsRequestedEventArgs>,
    impl::require<ISearchPaneSuggestionsRequestedEventArgs, Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>
{
    ISearchPaneSuggestionsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchPaneSuggestionsRequestedEventArgs>(m_ptr); }
};

struct ISearchPaneVisibilityChangedEventArgs :
    Windows::IInspectable,
    impl::consume<ISearchPaneVisibilityChangedEventArgs>
{
    ISearchPaneVisibilityChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchPaneVisibilityChangedEventArgs>(m_ptr); }
};

struct ISearchQueryLinguisticDetails :
    Windows::IInspectable,
    impl::consume<ISearchQueryLinguisticDetails>
{
    ISearchQueryLinguisticDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchQueryLinguisticDetails>(m_ptr); }
};

struct ISearchQueryLinguisticDetailsFactory :
    Windows::IInspectable,
    impl::consume<ISearchQueryLinguisticDetailsFactory>
{
    ISearchQueryLinguisticDetailsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchQueryLinguisticDetailsFactory>(m_ptr); }
};

struct ISearchSuggestionCollection :
    Windows::IInspectable,
    impl::consume<ISearchSuggestionCollection>
{
    ISearchSuggestionCollection(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchSuggestionCollection>(m_ptr); }
};

struct ISearchSuggestionsRequest :
    Windows::IInspectable,
    impl::consume<ISearchSuggestionsRequest>
{
    ISearchSuggestionsRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchSuggestionsRequest>(m_ptr); }
};

struct ISearchSuggestionsRequestDeferral :
    Windows::IInspectable,
    impl::consume<ISearchSuggestionsRequestDeferral>
{
    ISearchSuggestionsRequestDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchSuggestionsRequestDeferral>(m_ptr); }
};

}

}
