// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Wallet::System {

struct IWalletItemSystemStore;
struct IWalletItemSystemStore2;
struct IWalletManagerSystemStatics;
struct WalletItemSystemStore;

}

namespace Windows::ApplicationModel::Wallet::System {

struct IWalletItemSystemStore;
struct IWalletItemSystemStore2;
struct IWalletManagerSystemStatics;
struct WalletItemSystemStore;
struct WalletManagerSystem;

}

namespace Windows::ApplicationModel::Wallet::System {

enum class WalletItemAppAssociation
{
    None = 0,
    AppInstalled = 1,
    AppNotInstalled = 2,
};

}

}
