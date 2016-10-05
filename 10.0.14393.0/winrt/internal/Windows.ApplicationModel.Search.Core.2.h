// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Search.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e885956c_72c1_514f_ad9a_2943b880ae13
#define WINRT_GENERIC_e885956c_72c1_514f_ad9a_2943b880ae13
template <> struct __declspec(uuid("e885956c-72c1-514f-ad9a-2943b880ae13")) __declspec(novtable) IObservableVector<Windows::ApplicationModel::Search::Core::SearchSuggestion> : impl_IObservableVector<Windows::ApplicationModel::Search::Core::SearchSuggestion> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_7e7f3cdf_80d9_5646_8743_ec1e38645d68
#define WINRT_GENERIC_7e7f3cdf_80d9_5646_8743_ec1e38645d68
template <> struct __declspec(uuid("7e7f3cdf-80d9-5646-8743-ec1e38645d68")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_bb198760_4739_5559_80e6_f0e1af5355fd
#define WINRT_GENERIC_bb198760_4739_5559_80e6_f0e1af5355fd
template <> struct __declspec(uuid("bb198760-4739-5559-80e6-f0e1af5355fd")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_cb7b988b_468a_5eae_afe4_df8b005f80af
#define WINRT_GENERIC_cb7b988b_468a_5eae_afe4_df8b005f80af
template <> struct __declspec(uuid("cb7b988b-468a-5eae-afe4-df8b005f80af")) __declspec(novtable) VectorChangedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestion> : impl_VectorChangedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestion> {};
#endif

#ifndef WINRT_GENERIC_c3157582_f72f_513a_b089_6208188ec2b6
#define WINRT_GENERIC_c3157582_f72f_513a_b089_6208188ec2b6
template <> struct __declspec(uuid("c3157582-f72f-513a-b089-6208188ec2b6")) __declspec(novtable) IIterator<Windows::ApplicationModel::Search::Core::SearchSuggestion> : impl_IIterator<Windows::ApplicationModel::Search::Core::SearchSuggestion> {};
#endif

#ifndef WINRT_GENERIC_df956160_f155_5816_b38b_a2ff0629ba0e
#define WINRT_GENERIC_df956160_f155_5816_b38b_a2ff0629ba0e
template <> struct __declspec(uuid("df956160-f155-5816-b38b-a2ff0629ba0e")) __declspec(novtable) IIterable<Windows::ApplicationModel::Search::Core::SearchSuggestion> : impl_IIterable<Windows::ApplicationModel::Search::Core::SearchSuggestion> {};
#endif

#ifndef WINRT_GENERIC_05ac2ec0_f0c8_5cad_b4f9_f985e0f79fe9
#define WINRT_GENERIC_05ac2ec0_f0c8_5cad_b4f9_f985e0f79fe9
template <> struct __declspec(uuid("05ac2ec0-f0c8-5cad-b4f9-f985e0f79fe9")) __declspec(novtable) IVectorView<Windows::ApplicationModel::Search::Core::SearchSuggestion> : impl_IVectorView<Windows::ApplicationModel::Search::Core::SearchSuggestion> {};
#endif

#ifndef WINRT_GENERIC_1cc36c46_19be_5d6b_a56d_047413252c69
#define WINRT_GENERIC_1cc36c46_19be_5d6b_a56d_047413252c69
template <> struct __declspec(uuid("1cc36c46-19be-5d6b-a56d-047413252c69")) __declspec(novtable) IVector<Windows::ApplicationModel::Search::Core::SearchSuggestion> : impl_IVector<Windows::ApplicationModel::Search::Core::SearchSuggestion> {};
#endif


}

namespace Windows::ApplicationModel::Search::Core {

template <typename D>
struct WINRT_EBO impl_IRequestingFocusOnKeyboardInputEventArgs
{
};

template <typename D>
struct WINRT_EBO impl_ISearchSuggestion
{
    Windows::ApplicationModel::Search::Core::SearchSuggestionKind Kind() const;
    hstring Text() const;
    hstring Tag() const;
    hstring DetailText() const;
    Windows::Storage::Streams::IRandomAccessStreamReference Image() const;
    hstring ImageAlternateText() const;
};

template <typename D>
struct WINRT_EBO impl_ISearchSuggestionManager
{
    bool SearchHistoryEnabled() const;
    void SearchHistoryEnabled(bool value) const;
    hstring SearchHistoryContext() const;
    void SearchHistoryContext(hstring_ref value) const;
    void SetLocalContentSuggestionSettings(const Windows::ApplicationModel::Search::LocalContentSuggestionSettings & settings) const;
    void SetQuery(hstring_ref queryText) const;
    void SetQuery(hstring_ref queryText, hstring_ref language) const;
    void SetQuery(hstring_ref queryText, hstring_ref language, const Windows::ApplicationModel::Search::SearchQueryLinguisticDetails & linguisticDetails) const;
    Windows::Foundation::Collections::IObservableVector<Windows::ApplicationModel::Search::Core::SearchSuggestion> Suggestions() const;
    void AddToHistory(hstring_ref queryText) const;
    void AddToHistory(hstring_ref queryText, hstring_ref language) const;
    void ClearHistory() const;
    event_token SuggestionsRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> & handler) const;
    using SuggestionsRequested_revoker = event_revoker<ISearchSuggestionManager>;
    SuggestionsRequested_revoker SuggestionsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> & handler) const;
    void SuggestionsRequested(event_token token) const;
    event_token RequestingFocusOnKeyboardInput(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> & handler) const;
    using RequestingFocusOnKeyboardInput_revoker = event_revoker<ISearchSuggestionManager>;
    RequestingFocusOnKeyboardInput_revoker RequestingFocusOnKeyboardInput(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> & handler) const;
    void RequestingFocusOnKeyboardInput(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_ISearchSuggestionsRequestedEventArgs
{
    hstring QueryText() const;
    hstring Language() const;
    Windows::ApplicationModel::Search::SearchQueryLinguisticDetails LinguisticDetails() const;
    Windows::ApplicationModel::Search::SearchSuggestionsRequest Request() const;
};

struct IRequestingFocusOnKeyboardInputEventArgs :
    Windows::IInspectable,
    impl::consume<IRequestingFocusOnKeyboardInputEventArgs>
{
    IRequestingFocusOnKeyboardInputEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRequestingFocusOnKeyboardInputEventArgs>(m_ptr); }
};

struct ISearchSuggestion :
    Windows::IInspectable,
    impl::consume<ISearchSuggestion>
{
    ISearchSuggestion(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchSuggestion>(m_ptr); }
};

struct ISearchSuggestionManager :
    Windows::IInspectable,
    impl::consume<ISearchSuggestionManager>
{
    ISearchSuggestionManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchSuggestionManager>(m_ptr); }
};

struct ISearchSuggestionsRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<ISearchSuggestionsRequestedEventArgs>
{
    ISearchSuggestionsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISearchSuggestionsRequestedEventArgs>(m_ptr); }
};

}

}
