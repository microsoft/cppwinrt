// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.Search.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.ApplicationModel.Search.Core.2.h"
#include "winrt/Windows.ApplicationModel.Search.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::Search::Core::SearchSuggestionKind consume_Windows_ApplicationModel_Search_Core_ISearchSuggestion<D>::Kind() const
{
    Windows::ApplicationModel::Search::Core::SearchSuggestionKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestion)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_Core_ISearchSuggestion<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestion)->get_Text(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_Core_ISearchSuggestion<D>::Tag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestion)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_Core_ISearchSuggestion<D>::DetailText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestion)->get_DetailText(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Search_Core_ISearchSuggestion<D>::Image() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestion)->get_Image(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_Core_ISearchSuggestion<D>::ImageAlternateText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestion)->get_ImageAlternateText(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::SearchHistoryEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->get_SearchHistoryEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::SearchHistoryEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->put_SearchHistoryEnabled(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::SearchHistoryContext() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->get_SearchHistoryContext(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::SearchHistoryContext(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->put_SearchHistoryContext(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::SetLocalContentSuggestionSettings(Windows::ApplicationModel::Search::LocalContentSuggestionSettings const& settings) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->SetLocalContentSuggestionSettings(get_abi(settings)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::SetQuery(param::hstring const& queryText) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->SetQuery(get_abi(queryText)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::SetQuery(param::hstring const& queryText, param::hstring const& language) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->SetQueryWithLanguage(get_abi(queryText), get_abi(language)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::SetQuery(param::hstring const& queryText, param::hstring const& language, Windows::ApplicationModel::Search::SearchQueryLinguisticDetails const& linguisticDetails) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->SetQueryWithSearchQueryLinguisticDetails(get_abi(queryText), get_abi(language), get_abi(linguisticDetails)));
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::ApplicationModel::Search::Core::SearchSuggestion> consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::Suggestions() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::ApplicationModel::Search::Core::SearchSuggestion> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->get_Suggestions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::AddToHistory(param::hstring const& queryText) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->AddToHistory(get_abi(queryText)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::AddToHistory(param::hstring const& queryText, param::hstring const& language) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->AddToHistoryWithLanguage(get_abi(queryText), get_abi(language)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::ClearHistory() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->ClearHistory());
}

template <typename D> event_token consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::SuggestionsRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->add_SuggestionsRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Search::Core::ISearchSuggestionManager> consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::SuggestionsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Search::Core::ISearchSuggestionManager>(this, &abi_t<Windows::ApplicationModel::Search::Core::ISearchSuggestionManager>::remove_SuggestionsRequested, SuggestionsRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::SuggestionsRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->remove_SuggestionsRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::RequestingFocusOnKeyboardInput(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->add_RequestingFocusOnKeyboardInput(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Search::Core::ISearchSuggestionManager> consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::RequestingFocusOnKeyboardInput(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Search::Core::ISearchSuggestionManager>(this, &abi_t<Windows::ApplicationModel::Search::Core::ISearchSuggestionManager>::remove_RequestingFocusOnKeyboardInput, RequestingFocusOnKeyboardInput(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionManager<D>::RequestingFocusOnKeyboardInput(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionManager)->remove_RequestingFocusOnKeyboardInput(get_abi(token)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionsRequestedEventArgs<D>::QueryText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs)->get_QueryText(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionsRequestedEventArgs<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs)->get_Language(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchQueryLinguisticDetails consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionsRequestedEventArgs<D>::LinguisticDetails() const
{
    Windows::ApplicationModel::Search::SearchQueryLinguisticDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs)->get_LinguisticDetails(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchSuggestionsRequest consume_Windows_ApplicationModel_Search_Core_ISearchSuggestionsRequestedEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Search::SearchSuggestionsRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs> : produce_base<D, Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::Core::ISearchSuggestion> : produce_base<D, Windows::ApplicationModel::Search::Core::ISearchSuggestion>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Search::Core::SearchSuggestionKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_DetailText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DetailText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Image(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Image());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImageAlternateText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImageAlternateText());
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
struct produce<D, Windows::ApplicationModel::Search::Core::ISearchSuggestionManager> : produce_base<D, Windows::ApplicationModel::Search::Core::ISearchSuggestionManager>
{
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

    HRESULT __stdcall SetQuery(HSTRING queryText) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetQuery(*reinterpret_cast<hstring const*>(&queryText));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetQueryWithLanguage(HSTRING queryText, HSTRING language) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetQuery(*reinterpret_cast<hstring const*>(&queryText), *reinterpret_cast<hstring const*>(&language));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetQueryWithSearchQueryLinguisticDetails(HSTRING queryText, HSTRING language, ::IUnknown* linguisticDetails) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetQuery(*reinterpret_cast<hstring const*>(&queryText), *reinterpret_cast<hstring const*>(&language), *reinterpret_cast<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails const*>(&linguisticDetails));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Suggestions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Suggestions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddToHistory(HSTRING queryText) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddToHistory(*reinterpret_cast<hstring const*>(&queryText));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddToHistoryWithLanguage(HSTRING queryText, HSTRING language) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddToHistory(*reinterpret_cast<hstring const*>(&queryText), *reinterpret_cast<hstring const*>(&language));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearHistory() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearHistory();
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
            *token = detach_abi(this->shim().SuggestionsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> const*>(&handler)));
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

    HRESULT __stdcall add_RequestingFocusOnKeyboardInput(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RequestingFocusOnKeyboardInput(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RequestingFocusOnKeyboardInput(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestingFocusOnKeyboardInput(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs> : produce_base<D, Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs>
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

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search::Core {

inline SearchSuggestionManager::SearchSuggestionManager() :
    SearchSuggestionManager(activate_instance<SearchSuggestionManager>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::Core::ISearchSuggestion> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::Core::ISearchSuggestion> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::Core::ISearchSuggestionManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::Core::ISearchSuggestionManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::Core::SearchSuggestion> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::Core::SearchSuggestion> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::Core::SearchSuggestionManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::Core::SearchSuggestionManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> {};

}

WINRT_WARNING_POP
