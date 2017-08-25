// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Wallet {

struct WalletItem;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Wallet::System {

enum class WalletItemAppAssociation
{
    None = 0,
    AppInstalled = 1,
    AppNotInstalled = 2,
};

struct IWalletItemSystemStore;
struct IWalletItemSystemStore2;
struct IWalletManagerSystemStatics;
struct WalletItemSystemStore;
struct WalletManagerSystem;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Wallet::System::WalletManagerSystem>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore" }; };
template <> struct name<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore2" }; };
template <> struct name<Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.System.IWalletManagerSystemStatics" }; };
template <> struct name<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.System.WalletItemSystemStore" }; };
template <> struct name<Windows::ApplicationModel::Wallet::System::WalletManagerSystem>{ static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.System.WalletManagerSystem" }; };
template <> struct name<Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.System.WalletItemAppAssociation" }; };
template <> struct guid<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore>{ static constexpr GUID value{ 0x522E2BFF,0x96A2,0x4A17,{ 0x8D,0x19,0xFE,0x1D,0x9F,0x83,0x75,0x61 } }; };
template <> struct guid<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>{ static constexpr GUID value{ 0xF98D3A4E,0xBE00,0x4FDD,{ 0x97,0x34,0x6C,0x11,0x3C,0x1A,0xC1,0xCB } }; };
template <> struct guid<Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics>{ static constexpr GUID value{ 0xBEE8EB89,0x2634,0x4B9A,{ 0x8B,0x23,0xEE,0x89,0x03,0xC9,0x1F,0xE0 } }; };
template <> struct default_interface<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore>{ using type = Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore; };

template <typename D>
struct consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Wallet::WalletItem>> GetItemsAsync() const;
    Windows::Foundation::IAsyncAction DeleteAsync(Windows::ApplicationModel::Wallet::WalletItem const& item) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItem> ImportItemAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& stream) const;
    Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation GetAppStatusForItem(Windows::ApplicationModel::Wallet::WalletItem const& item) const;
    Windows::Foundation::IAsyncOperation<bool> LaunchAppForItemAsync(Windows::ApplicationModel::Wallet::WalletItem const& item) const;
};
template <> struct consume<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore> { template <typename D> using type = consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2
{
    event_token ItemsChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::Foundation::IInspectable> const& handler) const;
    using ItemsChanged_revoker = event_revoker<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>;
    ItemsChanged_revoker ItemsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::Foundation::IInspectable> const& handler) const;
    void ItemsChanged(event_token const& cookie) const;
};
template <> struct consume<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2> { template <typename D> using type = consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Wallet_System_IWalletManagerSystemStatics
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore> RequestStoreAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Wallet_System_IWalletManagerSystemStatics<D>; };

template <> struct abi<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetItemsAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeleteAsync(::IUnknown* item, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ImportItemAsync(::IUnknown* stream, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetAppStatusForItem(::IUnknown* item, abi_t<Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation>* result) = 0;
    virtual HRESULT __stdcall LaunchAppForItemAsync(::IUnknown* item, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ItemsChanged(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_ItemsChanged(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestStoreAsync(::IUnknown** operation) = 0;
};};

}
