// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.Wallet.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.ApplicationModel.Wallet.System.3.h"
#include "Windows.ApplicationModel.Wallet.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore> : produce_base<D, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore>
{
    HRESULT __stdcall abi_GetItemsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Wallet::WalletItem>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsync(abi_arg_in<Windows::ApplicationModel::Wallet::IWalletItem> item, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DeleteAsync(*reinterpret_cast<const Windows::ApplicationModel::Wallet::WalletItem *>(&item)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ImportItemAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> stream, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItem>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ImportItemAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAppStatusForItem(abi_arg_in<Windows::ApplicationModel::Wallet::IWalletItem> item, Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetAppStatusForItem(*reinterpret_cast<const Windows::ApplicationModel::Wallet::WalletItem *>(&item)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchAppForItemAsync(abi_arg_in<Windows::ApplicationModel::Wallet::IWalletItem> item, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LaunchAppForItemAsync(*reinterpret_cast<const Windows::ApplicationModel::Wallet::WalletItem *>(&item)));
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
    HRESULT __stdcall add_ItemsChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().ItemsChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemsChanged(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ItemsChanged(cookie);
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
    HRESULT __stdcall abi_RequestStoreAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestStoreAsync());
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

namespace Windows::ApplicationModel::Wallet::System {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Wallet::WalletItem>> impl_IWalletItemSystemStore<D>::GetItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Wallet::WalletItem>> operation;
    check_hresult(static_cast<const IWalletItemSystemStore &>(static_cast<const D &>(*this))->abi_GetItemsAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IWalletItemSystemStore<D>::DeleteAsync(const Windows::ApplicationModel::Wallet::WalletItem & item) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IWalletItemSystemStore &>(static_cast<const D &>(*this))->abi_DeleteAsync(get(item), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItem> impl_IWalletItemSystemStore<D>::ImportItemAsync(const Windows::Storage::Streams::IRandomAccessStreamReference & stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItem> operation;
    check_hresult(static_cast<const IWalletItemSystemStore &>(static_cast<const D &>(*this))->abi_ImportItemAsync(get(stream), put(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation impl_IWalletItemSystemStore<D>::GetAppStatusForItem(const Windows::ApplicationModel::Wallet::WalletItem & item) const
{
    Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation result {};
    check_hresult(static_cast<const IWalletItemSystemStore &>(static_cast<const D &>(*this))->abi_GetAppStatusForItem(get(item), &result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IWalletItemSystemStore<D>::LaunchAppForItemAsync(const Windows::ApplicationModel::Wallet::WalletItem & item) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IWalletItemSystemStore &>(static_cast<const D &>(*this))->abi_LaunchAppForItemAsync(get(item), put(operation)));
    return operation;
}

template <typename D> event_token impl_IWalletItemSystemStore2<D>::ItemsChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IWalletItemSystemStore2 &>(static_cast<const D &>(*this))->add_ItemsChanged(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IWalletItemSystemStore2> impl_IWalletItemSystemStore2<D>::ItemsChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IWalletItemSystemStore2>(this, &ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2::remove_ItemsChanged, ItemsChanged(handler));
}

template <typename D> void impl_IWalletItemSystemStore2<D>::ItemsChanged(event_token cookie) const
{
    check_hresult(static_cast<const IWalletItemSystemStore2 &>(static_cast<const D &>(*this))->remove_ItemsChanged(cookie));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore> impl_IWalletManagerSystemStatics<D>::RequestStoreAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore> operation;
    check_hresult(static_cast<const IWalletManagerSystemStatics &>(static_cast<const D &>(*this))->abi_RequestStoreAsync(put(operation)));
    return operation;
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore> WalletManagerSystem::RequestStoreAsync()
{
    return get_activation_factory<WalletManagerSystem, IWalletManagerSystemStatics>().RequestStoreAsync();
}

}

}
