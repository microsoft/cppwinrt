// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.Wallet.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.System.2.h"
#include "winrt/Windows.ApplicationModel.Wallet.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Wallet::WalletItem>> consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore<D>::GetItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Wallet::WalletItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore)->GetItemsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore<D>::DeleteAsync(Windows::ApplicationModel::Wallet::WalletItem const& item) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore)->DeleteAsync(get_abi(item), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItem> consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore<D>::ImportItemAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore)->ImportItemAsync(get_abi(stream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore<D>::GetAppStatusForItem(Windows::ApplicationModel::Wallet::WalletItem const& item) const
{
    Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore)->GetAppStatusForItem(get_abi(item), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore<D>::LaunchAppForItemAsync(Windows::ApplicationModel::Wallet::WalletItem const& item) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore)->LaunchAppForItemAsync(get_abi(item), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2<D>::ItemsChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2)->add_ItemsChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2> consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2<D>::ItemsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>(this, &abi_t<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>::remove_ItemsChanged, ItemsChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2<D>::ItemsChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2)->remove_ItemsChanged(get_abi(cookie)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore> consume_Windows_ApplicationModel_Wallet_System_IWalletManagerSystemStatics<D>::RequestStoreAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics)->RequestStoreAsync(put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore> : produce_base<D, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore>
{
    HRESULT __stdcall GetItemsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAsync(::IUnknown* item, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteAsync(*reinterpret_cast<Windows::ApplicationModel::Wallet::WalletItem const*>(&item)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ImportItemAsync(::IUnknown* stream, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ImportItemAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAppStatusForItem(::IUnknown* item, abi_t<Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetAppStatusForItem(*reinterpret_cast<Windows::ApplicationModel::Wallet::WalletItem const*>(&item)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchAppForItemAsync(::IUnknown* item, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchAppForItemAsync(*reinterpret_cast<Windows::ApplicationModel::Wallet::WalletItem const*>(&item)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2> : produce_base<D, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>
{
    HRESULT __stdcall add_ItemsChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().ItemsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemsChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemsChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics> : produce_base<D, Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics>
{
    HRESULT __stdcall RequestStoreAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestStoreAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Wallet::System {

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore> WalletManagerSystem::RequestStoreAsync()
{
    return get_activation_factory<WalletManagerSystem, Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics>().RequestStoreAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::System::WalletManagerSystem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::System::WalletManagerSystem> {};

}

WINRT_WARNING_POP
