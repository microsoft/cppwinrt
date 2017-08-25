// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.Gaming.Preview.GamesEnumeration.2.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::AppDisplayInfo consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>::DisplayInfo() const
{
    Windows::ApplicationModel::AppDisplayInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Preview::GamesEnumeration::IGameListEntry)->get_DisplayInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>::LaunchAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Preview::GamesEnumeration::IGameListEntry)->LaunchAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Gaming::Preview::GamesEnumeration::GameListCategory consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>::Category() const
{
    Windows::Gaming::Preview::GamesEnumeration::GameListCategory value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Preview::GamesEnumeration::IGameListEntry)->get_Category(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Preview::GamesEnumeration::IGameListEntry)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>::SetCategoryAsync(Windows::Gaming::Preview::GamesEnumeration::GameListCategory const& value) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Preview::GamesEnumeration::IGameListEntry)->SetCategoryAsync(get_abi(value), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>> consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->FindAllAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>> consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::FindAllAsync(param::hstring const& packageFamilyName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->FindAllAsyncPackageFamilyName(get_abi(packageFamilyName), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameAdded(Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->add_GameAdded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics> consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameAdded(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>(this, &abi_t<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>::remove_GameAdded, GameAdded(handler));
}

template <typename D> void consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->remove_GameAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameRemoved(Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->add_GameRemoved(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics> consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameRemoved(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>(this, &abi_t<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>::remove_GameRemoved, GameRemoved(handler));
}

template <typename D> void consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->remove_GameRemoved(get_abi(token)));
}

template <typename D> event_token consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameUpdated(Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->add_GameUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics> consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameUpdated(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>(this, &abi_t<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>::remove_GameUpdated, GameUpdated(handler));
}

template <typename D> void consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->remove_GameUpdated(get_abi(token)));
}

template <> struct delegate<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* game) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Gaming::Preview::GamesEnumeration::GameListEntry const*>(&game));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(HSTRING identifier) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<hstring const*>(&identifier));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::Gaming::Preview::GamesEnumeration::IGameListEntry> : produce_base<D, Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>
{
    HRESULT __stdcall get_DisplayInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Category(abi_t<Windows::Gaming::Preview::GamesEnumeration::GameListCategory>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Category());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCategoryAsync(abi_t<Windows::Gaming::Preview::GamesEnumeration::GameListCategory> value, ::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SetCategoryAsync(*reinterpret_cast<Windows::Gaming::Preview::GamesEnumeration::GameListCategory const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics> : produce_base<D, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>
{
    HRESULT __stdcall FindAllAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsyncPackageFamilyName(HSTRING packageFamilyName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAllAsync(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GameAdded(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GameAdded(*reinterpret_cast<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GameAdded(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GameAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GameRemoved(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GameRemoved(*reinterpret_cast<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GameRemoved(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GameRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GameUpdated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GameUpdated(*reinterpret_cast<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GameUpdated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GameUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Gaming::Preview::GamesEnumeration {

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>> GameList::FindAllAsync()
{
    return get_activation_factory<GameList, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>> GameList::FindAllAsync(param::hstring const& packageFamilyName)
{
    return get_activation_factory<GameList, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>().FindAllAsync(packageFamilyName);
}

inline event_token GameList::GameAdded(Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler)
{
    return get_activation_factory<GameList, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>().GameAdded(handler);
}

inline factory_event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics> GameList::GameAdded(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler)
{
    auto factory = get_activation_factory<GameList, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>();
    return { factory, &abi_t<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>::remove_GameAdded, factory.GameAdded(handler) };
}

inline void GameList::GameAdded(event_token const& token)
{
    get_activation_factory<GameList, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>().GameAdded(token);
}

inline event_token GameList::GameRemoved(Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler)
{
    return get_activation_factory<GameList, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>().GameRemoved(handler);
}

inline factory_event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics> GameList::GameRemoved(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler)
{
    auto factory = get_activation_factory<GameList, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>();
    return { factory, &abi_t<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>::remove_GameRemoved, factory.GameRemoved(handler) };
}

inline void GameList::GameRemoved(event_token const& token)
{
    get_activation_factory<GameList, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>().GameRemoved(token);
}

inline event_token GameList::GameUpdated(Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler)
{
    return get_activation_factory<GameList, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>().GameUpdated(handler);
}

inline factory_event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics> GameList::GameUpdated(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler)
{
    auto factory = get_activation_factory<GameList, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>();
    return { factory, &abi_t<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>::remove_GameUpdated, factory.GameUpdated(handler) };
}

inline void GameList::GameUpdated(event_token const& token)
{
    get_activation_factory<GameList, Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>().GameUpdated(token);
}

template <typename L> GameListChangedEventHandler::GameListChangedEventHandler(L handler) :
    GameListChangedEventHandler(impl::make_delegate<GameListChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> GameListChangedEventHandler::GameListChangedEventHandler(F* handler) :
    GameListChangedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> GameListChangedEventHandler::GameListChangedEventHandler(O* object, M method) :
    GameListChangedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void GameListChangedEventHandler::operator()(Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& game) const
{
    check_hresult((*(abi_t<GameListChangedEventHandler>**)this)->Invoke(get_abi(game)));
}

template <typename L> GameListRemovedEventHandler::GameListRemovedEventHandler(L handler) :
    GameListRemovedEventHandler(impl::make_delegate<GameListRemovedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> GameListRemovedEventHandler::GameListRemovedEventHandler(F* handler) :
    GameListRemovedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> GameListRemovedEventHandler::GameListRemovedEventHandler(O* object, M method) :
    GameListRemovedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void GameListRemovedEventHandler::operator()(param::hstring const& identifier) const
{
    check_hresult((*(abi_t<GameListRemovedEventHandler>**)this)->Invoke(get_abi(identifier)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry> {};

template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics> {};

template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::GameList> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Preview::GamesEnumeration::GameList> {};

template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry> {};

}

WINRT_WARNING_POP
