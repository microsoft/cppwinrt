// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.ApplicationModel.Search.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> void consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>::Enabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ILocalContentSuggestionSettings)->put_Enabled(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>::Enabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ILocalContentSuggestionSettings)->get_Enabled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Storage::StorageFolder> consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>::Locations() const
{
    Windows::Foundation::Collections::IVector<Windows::Storage::StorageFolder> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ILocalContentSuggestionSettings)->get_Locations(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>::AqsFilter(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ILocalContentSuggestionSettings)->put_AqsFilter(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>::AqsFilter() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ILocalContentSuggestionSettings)->get_AqsFilter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>::PropertiesToMatch() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ILocalContentSuggestionSettings)->get_PropertiesToMatch(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPane<D>::SearchHistoryEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->put_SearchHistoryEnabled(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Search_ISearchPane<D>::SearchHistoryEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->get_SearchHistoryEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPane<D>::SearchHistoryContext(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->put_SearchHistoryContext(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_ISearchPane<D>::SearchHistoryContext() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->get_SearchHistoryContext(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPane<D>::PlaceholderText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->put_PlaceholderText(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_ISearchPane<D>::PlaceholderText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->get_PlaceholderText(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_ISearchPane<D>::QueryText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->get_QueryText(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_ISearchPane<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->get_Language(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Search_ISearchPane<D>::Visible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->get_Visible(&value));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Search_ISearchPane<D>::VisibilityChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->add_VisibilityChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Search::ISearchPane> consume_Windows_ApplicationModel_Search_ISearchPane<D>::VisibilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Search::ISearchPane>(this, &abi_t<Windows::ApplicationModel::Search::ISearchPane>::remove_VisibilityChanged, VisibilityChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPane<D>::VisibilityChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->remove_VisibilityChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Search_ISearchPane<D>::QueryChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->add_QueryChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Search::ISearchPane> consume_Windows_ApplicationModel_Search_ISearchPane<D>::QueryChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Search::ISearchPane>(this, &abi_t<Windows::ApplicationModel::Search::ISearchPane>::remove_QueryChanged, QueryChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPane<D>::QueryChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->remove_QueryChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Search_ISearchPane<D>::SuggestionsRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->add_SuggestionsRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Search::ISearchPane> consume_Windows_ApplicationModel_Search_ISearchPane<D>::SuggestionsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Search::ISearchPane>(this, &abi_t<Windows::ApplicationModel::Search::ISearchPane>::remove_SuggestionsRequested, SuggestionsRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPane<D>::SuggestionsRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->remove_SuggestionsRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Search_ISearchPane<D>::QuerySubmitted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->add_QuerySubmitted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Search::ISearchPane> consume_Windows_ApplicationModel_Search_ISearchPane<D>::QuerySubmitted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Search::ISearchPane>(this, &abi_t<Windows::ApplicationModel::Search::ISearchPane>::remove_QuerySubmitted, QuerySubmitted(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPane<D>::QuerySubmitted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->remove_QuerySubmitted(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Search_ISearchPane<D>::ResultSuggestionChosen(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->add_ResultSuggestionChosen(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Search::ISearchPane> consume_Windows_ApplicationModel_Search_ISearchPane<D>::ResultSuggestionChosen(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Search::ISearchPane>(this, &abi_t<Windows::ApplicationModel::Search::ISearchPane>::remove_ResultSuggestionChosen, ResultSuggestionChosen(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPane<D>::ResultSuggestionChosen(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->remove_ResultSuggestionChosen(get_abi(token)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPane<D>::SetLocalContentSuggestionSettings(Windows::ApplicationModel::Search::LocalContentSuggestionSettings const& settings) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->SetLocalContentSuggestionSettings(get_abi(settings)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPane<D>::Show() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->ShowOverloadDefault());
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPane<D>::Show(param::hstring const& query) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->ShowOverloadWithQuery(get_abi(query)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPane<D>::ShowOnKeyboardInput(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->put_ShowOnKeyboardInput(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Search_ISearchPane<D>::ShowOnKeyboardInput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->get_ShowOnKeyboardInput(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Search_ISearchPane<D>::TrySetQueryText(param::hstring const& query) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPane)->TrySetQueryText(get_abi(query), &succeeded));
    return succeeded;
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_ISearchPaneQueryChangedEventArgs<D>::QueryText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs)->get_QueryText(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_ISearchPaneQueryChangedEventArgs<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs)->get_Language(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails consume_Windows_ApplicationModel_Search_ISearchPaneQueryChangedEventArgs<D>::LinguisticDetails() const
{
    Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs)->get_LinguisticDetails(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails<D>::QueryTextAlternatives() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails)->get_QueryTextAlternatives(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails<D>::QueryTextCompositionStart() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails)->get_QueryTextCompositionStart(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails<D>::QueryTextCompositionLength() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails)->get_QueryTextCompositionLength(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgs<D>::QueryText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs)->get_QueryText(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgs<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs)->get_Language(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails<D>::LinguisticDetails() const
{
    Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails)->get_LinguisticDetails(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_ISearchPaneResultSuggestionChosenEventArgs<D>::Tag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchPane consume_Windows_ApplicationModel_Search_ISearchPaneStatics<D>::GetForCurrentView() const
{
    Windows::ApplicationModel::Search::SearchPane searchPane{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneStatics)->GetForCurrentView(put_abi(searchPane)));
    return searchPane;
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPaneStaticsWithHideThisApplication<D>::HideThisApplication() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication)->HideThisApplication());
}

template <typename D> bool consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequest<D>::IsCanceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest)->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchSuggestionCollection consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequest<D>::SearchSuggestionCollection() const
{
    Windows::ApplicationModel::Search::SearchSuggestionCollection collection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest)->get_SearchSuggestionCollection(put_abi(collection)));
    return collection;
}

template <typename D> Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequest<D>::GetDeferral() const
{
    Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral)->Complete());
}

template <typename D> Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestedEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Search_ISearchPaneVisibilityChangedEventArgs<D>::Visible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs)->get_Visible(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails<D>::QueryTextAlternatives() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails)->get_QueryTextAlternatives(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails<D>::QueryTextCompositionStart() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails)->get_QueryTextCompositionStart(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails<D>::QueryTextCompositionLength() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails)->get_QueryTextCompositionLength(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchQueryLinguisticDetails consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetailsFactory<D>::CreateInstance(param::iterable<hstring> const& queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength) const
{
    Windows::ApplicationModel::Search::SearchQueryLinguisticDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory)->CreateInstance(get_abi(queryTextAlternatives), queryTextCompositionStart, queryTextCompositionLength, put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>::Size() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionCollection)->get_Size(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>::AppendQuerySuggestion(param::hstring const& text) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionCollection)->AppendQuerySuggestion(get_abi(text)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>::AppendQuerySuggestions(param::iterable<hstring> const& suggestions) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionCollection)->AppendQuerySuggestions(get_abi(suggestions)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>::AppendResultSuggestion(param::hstring const& text, param::hstring const& detailText, param::hstring const& tag, Windows::Storage::Streams::IRandomAccessStreamReference const& image, param::hstring const& imageAlternateText) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionCollection)->AppendResultSuggestion(get_abi(text), get_abi(detailText), get_abi(tag), get_abi(image), get_abi(imageAlternateText)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>::AppendSearchSeparator(param::hstring const& label) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionCollection)->AppendSearchSeparator(get_abi(label)));
}

template <typename D> bool consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest<D>::IsCanceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionsRequest)->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchSuggestionCollection consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest<D>::SearchSuggestionCollection() const
{
    Windows::ApplicationModel::Search::SearchSuggestionCollection collection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionsRequest)->get_SearchSuggestionCollection(put_abi(collection)));
    return collection;
}

template <typename D> Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest<D>::GetDeferral() const
{
    Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionsRequest)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral)->Complete());
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ILocalContentSuggestionSettings> : produce_base<D, Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>
{
    HRESULT __stdcall put_Enabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Locations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Locations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AqsFilter(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AqsFilter(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AqsFilter(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AqsFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PropertiesToMatch(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PropertiesToMatch());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPane> : produce_base<D, Windows::ApplicationModel::Search::ISearchPane>
{
    HRESULT __stdcall put_SearchHistoryEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SearchHistoryEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchHistoryEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SearchHistoryEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SearchHistoryContext(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SearchHistoryContext(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchHistoryContext(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SearchHistoryContext());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PlaceholderText(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaceholderText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaceholderText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PlaceholderText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VisibilityChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VisibilityChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VisibilityChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VisibilityChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_QueryChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().QueryChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_QueryChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QueryChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SuggestionsRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SuggestionsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SuggestionsRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuggestionsRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_QuerySubmitted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().QuerySubmitted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_QuerySubmitted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QuerySubmitted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ResultSuggestionChosen(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ResultSuggestionChosen(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ResultSuggestionChosen(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResultSuggestionChosen(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetLocalContentSuggestionSettings(::IUnknown* settings) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLocalContentSuggestionSettings(*reinterpret_cast<Windows::ApplicationModel::Search::LocalContentSuggestionSettings const*>(&settings));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowOverloadDefault() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowOverloadWithQuery(HSTRING query) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show(*reinterpret_cast<hstring const*>(&query));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShowOnKeyboardInput(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowOnKeyboardInput(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowOnKeyboardInput(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShowOnKeyboardInput());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetQueryText(HSTRING query, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TrySetQueryText(*reinterpret_cast<hstring const*>(&query)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>
{
    HRESULT __stdcall get_QueryText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinguisticDetails(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LinguisticDetails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>
{
    HRESULT __stdcall get_QueryTextAlternatives(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryTextAlternatives());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryTextCompositionStart(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryTextCompositionStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryTextCompositionLength(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryTextCompositionLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>
{
    HRESULT __stdcall get_QueryText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
{
    HRESULT __stdcall get_LinguisticDetails(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LinguisticDetails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>
{
    HRESULT __stdcall get_Tag(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneStatics> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** searchPane) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *searchPane = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *searchPane = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>
{
    HRESULT __stdcall HideThisApplication() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HideThisApplication();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>
{
    HRESULT __stdcall get_IsCanceled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchSuggestionCollection(::IUnknown** collection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *collection = detach_abi(this->shim().SearchSuggestionCollection());
            return S_OK;
        }
        catch (...)
        {
            *collection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** deferral) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deferral = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>
{
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>
{
    HRESULT __stdcall get_Visible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> : produce_base<D, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>
{
    HRESULT __stdcall get_QueryTextAlternatives(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryTextAlternatives());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryTextCompositionStart(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryTextCompositionStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryTextCompositionLength(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryTextCompositionLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory> : produce_base<D, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&queryTextAlternatives), queryTextCompositionStart, queryTextCompositionLength));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchSuggestionCollection> : produce_base<D, Windows::ApplicationModel::Search::ISearchSuggestionCollection>
{
    HRESULT __stdcall get_Size(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendQuerySuggestion(HSTRING text) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendQuerySuggestion(*reinterpret_cast<hstring const*>(&text));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendQuerySuggestions(::IUnknown* suggestions) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendQuerySuggestions(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&suggestions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendResultSuggestion(HSTRING text, HSTRING detailText, HSTRING tag, ::IUnknown* image, HSTRING imageAlternateText) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendResultSuggestion(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<hstring const*>(&detailText), *reinterpret_cast<hstring const*>(&tag), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&image), *reinterpret_cast<hstring const*>(&imageAlternateText));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendSearchSeparator(HSTRING label) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendSearchSeparator(*reinterpret_cast<hstring const*>(&label));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchSuggestionsRequest> : produce_base<D, Windows::ApplicationModel::Search::ISearchSuggestionsRequest>
{
    HRESULT __stdcall get_IsCanceled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchSuggestionCollection(::IUnknown** collection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *collection = detach_abi(this->shim().SearchSuggestionCollection());
            return S_OK;
        }
        catch (...)
        {
            *collection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** deferral) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deferral = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral> : produce_base<D, Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>
{
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search {

inline LocalContentSuggestionSettings::LocalContentSuggestionSettings() :
    LocalContentSuggestionSettings(activate_instance<LocalContentSuggestionSettings>())
{}

inline Windows::ApplicationModel::Search::SearchPane SearchPane::GetForCurrentView()
{
    return get_activation_factory<SearchPane, Windows::ApplicationModel::Search::ISearchPaneStatics>().GetForCurrentView();
}

inline void SearchPane::HideThisApplication()
{
    get_activation_factory<SearchPane, Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>().HideThisApplication();
}

inline SearchQueryLinguisticDetails::SearchQueryLinguisticDetails(param::iterable<hstring> const& queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength) :
    SearchQueryLinguisticDetails(get_activation_factory<SearchQueryLinguisticDetails, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>().CreateInstance(queryTextAlternatives, queryTextCompositionStart, queryTextCompositionLength))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchPane> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchPane> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchPaneStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchPaneStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::LocalContentSuggestionSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::LocalContentSuggestionSettings> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchPane> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchPane> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchQueryLinguisticDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchQueryLinguisticDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchSuggestionCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchSuggestionCollection> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral> {};

}

WINRT_WARNING_POP
