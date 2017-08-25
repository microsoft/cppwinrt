// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Wallet {

struct WINRT_EBO WalletBarcode :
    Windows::ApplicationModel::Wallet::IWalletBarcode
{
    WalletBarcode(std::nullptr_t) noexcept {}
    WalletBarcode(Windows::ApplicationModel::Wallet::WalletBarcodeSymbology const& symbology, param::hstring const& value);
    WalletBarcode(Windows::Storage::Streams::IRandomAccessStreamReference const& streamToBarcodeImage);
};

struct WINRT_EBO WalletItem :
    Windows::ApplicationModel::Wallet::IWalletItem
{
    WalletItem(std::nullptr_t) noexcept {}
    WalletItem(Windows::ApplicationModel::Wallet::WalletItemKind const& kind, param::hstring const& displayName);
};

struct WINRT_EBO WalletItemCustomProperty :
    Windows::ApplicationModel::Wallet::IWalletItemCustomProperty
{
    WalletItemCustomProperty(std::nullptr_t) noexcept {}
    WalletItemCustomProperty(param::hstring const& name, param::hstring const& value);
};

struct WINRT_EBO WalletItemStore :
    Windows::ApplicationModel::Wallet::IWalletItemStore
{
    WalletItemStore(std::nullptr_t) noexcept {}
};

struct WalletManager
{
    WalletManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItemStore> RequestStoreAsync();
};

struct WINRT_EBO WalletRelevantLocation :
    Windows::ApplicationModel::Wallet::IWalletRelevantLocation
{
    WalletRelevantLocation(std::nullptr_t) noexcept {}
    WalletRelevantLocation();
};

struct WINRT_EBO WalletTransaction :
    Windows::ApplicationModel::Wallet::IWalletTransaction
{
    WalletTransaction(std::nullptr_t) noexcept {}
    WalletTransaction();
};

struct WINRT_EBO WalletVerb :
    Windows::ApplicationModel::Wallet::IWalletVerb
{
    WalletVerb(std::nullptr_t) noexcept {}
    WalletVerb(param::hstring const& name);
};

}
