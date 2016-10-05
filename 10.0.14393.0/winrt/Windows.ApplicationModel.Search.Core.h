// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.ApplicationModel.Search.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.Search.Core.3.h"
#include "Windows.ApplicationModel.Search.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs> : produce_base<D, Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::Core::ISearchSuggestion> : produce_base<D, Windows::ApplicationModel::Search::Core::ISearchSuggestion>
{
    HRESULT __stdcall get_Kind(Windows::ApplicationModel::Search::Core::SearchSuggestionKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DetailText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DetailText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Image(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Image());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImageAlternateText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ImageAlternateText());
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
    HRESULT __stdcall get_SearchHistoryEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SearchHistoryEnabled());
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
            this->shim().SearchHistoryEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchHistoryContext(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SearchHistoryContext());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SearchHistoryContext(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SearchHistoryContext(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetLocalContentSuggestionSettings(abi_arg_in<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings> settings) noexcept override
    {
        try
        {
            this->shim().SetLocalContentSuggestionSettings(*reinterpret_cast<const Windows::ApplicationModel::Search::LocalContentSuggestionSettings *>(&settings));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetQuery(abi_arg_in<hstring> queryText) noexcept override
    {
        try
        {
            this->shim().SetQuery(*reinterpret_cast<const hstring *>(&queryText));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetQueryWithLanguage(abi_arg_in<hstring> queryText, abi_arg_in<hstring> language) noexcept override
    {
        try
        {
            this->shim().SetQuery(*reinterpret_cast<const hstring *>(&queryText), *reinterpret_cast<const hstring *>(&language));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetQueryWithSearchQueryLinguisticDetails(abi_arg_in<hstring> queryText, abi_arg_in<hstring> language, abi_arg_in<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> linguisticDetails) noexcept override
    {
        try
        {
            this->shim().SetQuery(*reinterpret_cast<const hstring *>(&queryText), *reinterpret_cast<const hstring *>(&language), *reinterpret_cast<const Windows::ApplicationModel::Search::SearchQueryLinguisticDetails *>(&linguisticDetails));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Suggestions(abi_arg_out<Windows::Foundation::Collections::IObservableVector<Windows::ApplicationModel::Search::Core::SearchSuggestion>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Suggestions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddToHistory(abi_arg_in<hstring> queryText) noexcept override
    {
        try
        {
            this->shim().AddToHistory(*reinterpret_cast<const hstring *>(&queryText));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddToHistoryWithLanguage(abi_arg_in<hstring> queryText, abi_arg_in<hstring> language) noexcept override
    {
        try
        {
            this->shim().AddToHistory(*reinterpret_cast<const hstring *>(&queryText), *reinterpret_cast<const hstring *>(&language));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearHistory() noexcept override
    {
        try
        {
            this->shim().ClearHistory();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SuggestionsRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SuggestionsRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SuggestionsRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().SuggestionsRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RequestingFocusOnKeyboardInput(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RequestingFocusOnKeyboardInput(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RequestingFocusOnKeyboardInput(event_token token) noexcept override
    {
        try
        {
            this->shim().RequestingFocusOnKeyboardInput(token);
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
    HRESULT __stdcall get_QueryText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QueryText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinguisticDetails(abi_arg_out<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LinguisticDetails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Search::ISearchSuggestionsRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
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

namespace Windows::ApplicationModel::Search::Core {

template <typename D> Windows::ApplicationModel::Search::Core::SearchSuggestionKind impl_ISearchSuggestion<D>::Kind() const
{
    Windows::ApplicationModel::Search::Core::SearchSuggestionKind value {};
    check_hresult(static_cast<const ISearchSuggestion &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> hstring impl_ISearchSuggestion<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const ISearchSuggestion &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> hstring impl_ISearchSuggestion<D>::Tag() const
{
    hstring value;
    check_hresult(static_cast<const ISearchSuggestion &>(static_cast<const D &>(*this))->get_Tag(put(value)));
    return value;
}

template <typename D> hstring impl_ISearchSuggestion<D>::DetailText() const
{
    hstring value;
    check_hresult(static_cast<const ISearchSuggestion &>(static_cast<const D &>(*this))->get_DetailText(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_ISearchSuggestion<D>::Image() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const ISearchSuggestion &>(static_cast<const D &>(*this))->get_Image(put(value)));
    return value;
}

template <typename D> hstring impl_ISearchSuggestion<D>::ImageAlternateText() const
{
    hstring value;
    check_hresult(static_cast<const ISearchSuggestion &>(static_cast<const D &>(*this))->get_ImageAlternateText(put(value)));
    return value;
}

template <typename D> hstring impl_ISearchSuggestionsRequestedEventArgs<D>::QueryText() const
{
    hstring value;
    check_hresult(static_cast<const ISearchSuggestionsRequestedEventArgs &>(static_cast<const D &>(*this))->get_QueryText(put(value)));
    return value;
}

template <typename D> hstring impl_ISearchSuggestionsRequestedEventArgs<D>::Language() const
{
    hstring value;
    check_hresult(static_cast<const ISearchSuggestionsRequestedEventArgs &>(static_cast<const D &>(*this))->get_Language(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchQueryLinguisticDetails impl_ISearchSuggestionsRequestedEventArgs<D>::LinguisticDetails() const
{
    Windows::ApplicationModel::Search::SearchQueryLinguisticDetails value { nullptr };
    check_hresult(static_cast<const ISearchSuggestionsRequestedEventArgs &>(static_cast<const D &>(*this))->get_LinguisticDetails(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchSuggestionsRequest impl_ISearchSuggestionsRequestedEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Search::SearchSuggestionsRequest value { nullptr };
    check_hresult(static_cast<const ISearchSuggestionsRequestedEventArgs &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> bool impl_ISearchSuggestionManager<D>::SearchHistoryEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->get_SearchHistoryEnabled(&value));
    return value;
}

template <typename D> void impl_ISearchSuggestionManager<D>::SearchHistoryEnabled(bool value) const
{
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->put_SearchHistoryEnabled(value));
}

template <typename D> hstring impl_ISearchSuggestionManager<D>::SearchHistoryContext() const
{
    hstring value;
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->get_SearchHistoryContext(put(value)));
    return value;
}

template <typename D> void impl_ISearchSuggestionManager<D>::SearchHistoryContext(hstring_ref value) const
{
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->put_SearchHistoryContext(get(value)));
}

template <typename D> void impl_ISearchSuggestionManager<D>::SetLocalContentSuggestionSettings(const Windows::ApplicationModel::Search::LocalContentSuggestionSettings & settings) const
{
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->abi_SetLocalContentSuggestionSettings(get(settings)));
}

template <typename D> void impl_ISearchSuggestionManager<D>::SetQuery(hstring_ref queryText) const
{
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->abi_SetQuery(get(queryText)));
}

template <typename D> void impl_ISearchSuggestionManager<D>::SetQuery(hstring_ref queryText, hstring_ref language) const
{
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->abi_SetQueryWithLanguage(get(queryText), get(language)));
}

template <typename D> void impl_ISearchSuggestionManager<D>::SetQuery(hstring_ref queryText, hstring_ref language, const Windows::ApplicationModel::Search::SearchQueryLinguisticDetails & linguisticDetails) const
{
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->abi_SetQueryWithSearchQueryLinguisticDetails(get(queryText), get(language), get(linguisticDetails)));
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::ApplicationModel::Search::Core::SearchSuggestion> impl_ISearchSuggestionManager<D>::Suggestions() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::ApplicationModel::Search::Core::SearchSuggestion> value;
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->get_Suggestions(put(value)));
    return value;
}

template <typename D> void impl_ISearchSuggestionManager<D>::AddToHistory(hstring_ref queryText) const
{
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->abi_AddToHistory(get(queryText)));
}

template <typename D> void impl_ISearchSuggestionManager<D>::AddToHistory(hstring_ref queryText, hstring_ref language) const
{
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->abi_AddToHistoryWithLanguage(get(queryText), get(language)));
}

template <typename D> void impl_ISearchSuggestionManager<D>::ClearHistory() const
{
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->abi_ClearHistory());
}

template <typename D> event_token impl_ISearchSuggestionManager<D>::SuggestionsRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->add_SuggestionsRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISearchSuggestionManager> impl_ISearchSuggestionManager<D>::SuggestionsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::SearchSuggestionsRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISearchSuggestionManager>(this, &ABI::Windows::ApplicationModel::Search::Core::ISearchSuggestionManager::remove_SuggestionsRequested, SuggestionsRequested(handler));
}

template <typename D> void impl_ISearchSuggestionManager<D>::SuggestionsRequested(event_token token) const
{
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->remove_SuggestionsRequested(token));
}

template <typename D> event_token impl_ISearchSuggestionManager<D>::RequestingFocusOnKeyboardInput(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->add_RequestingFocusOnKeyboardInput(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISearchSuggestionManager> impl_ISearchSuggestionManager<D>::RequestingFocusOnKeyboardInput(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::Core::SearchSuggestionManager, Windows::ApplicationModel::Search::Core::RequestingFocusOnKeyboardInputEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISearchSuggestionManager>(this, &ABI::Windows::ApplicationModel::Search::Core::ISearchSuggestionManager::remove_RequestingFocusOnKeyboardInput, RequestingFocusOnKeyboardInput(handler));
}

template <typename D> void impl_ISearchSuggestionManager<D>::RequestingFocusOnKeyboardInput(event_token token) const
{
    check_hresult(static_cast<const ISearchSuggestionManager &>(static_cast<const D &>(*this))->remove_RequestingFocusOnKeyboardInput(token));
}

inline SearchSuggestionManager::SearchSuggestionManager() :
    SearchSuggestionManager(activate_instance<SearchSuggestionManager>())
{}

}

}
