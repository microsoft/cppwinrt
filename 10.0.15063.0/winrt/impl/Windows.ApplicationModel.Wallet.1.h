// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Wallet {

struct WINRT_EBO IWalletBarcode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletBarcode>
{
    IWalletBarcode(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletBarcodeFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletBarcodeFactory>
{
    IWalletBarcodeFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItem>
{
    IWalletItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletItemCustomProperty :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemCustomProperty>
{
    IWalletItemCustomProperty(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletItemCustomPropertyFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemCustomPropertyFactory>
{
    IWalletItemCustomPropertyFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletItemFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemFactory>
{
    IWalletItemFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletItemStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemStore>
{
    IWalletItemStore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletItemStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemStore2>
{
    IWalletItemStore2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletManagerStatics>
{
    IWalletManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletRelevantLocation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletRelevantLocation>
{
    IWalletRelevantLocation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletTransaction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletTransaction>
{
    IWalletTransaction(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletVerb :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletVerb>
{
    IWalletVerb(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletVerbFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletVerbFactory>
{
    IWalletVerbFactory(std::nullptr_t = nullptr) noexcept {}
};

}
