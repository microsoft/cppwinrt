// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Wallet.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.System.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Wallet::System {

struct WINRT_EBO WalletItemSystemStore :
    Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore,
    impl::require<WalletItemSystemStore, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>
{
    WalletItemSystemStore(std::nullptr_t) noexcept {}
};

struct WalletManagerSystem
{
    WalletManagerSystem() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore> RequestStoreAsync();
};

}
