// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Geolocation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::Wallet::WalletBarcodeSymbology consume_Windows_ApplicationModel_Wallet_IWalletBarcode<D>::Symbology() const
{
    Windows::ApplicationModel::Wallet::WalletBarcodeSymbology value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletBarcode)->get_Symbology(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletBarcode<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletBarcode)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> consume_Windows_ApplicationModel_Wallet_IWalletBarcode<D>::GetImageAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletBarcode)->GetImageAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Wallet::WalletBarcode consume_Windows_ApplicationModel_Wallet_IWalletBarcodeFactory<D>::CreateWalletBarcode(Windows::ApplicationModel::Wallet::WalletBarcodeSymbology const& symbology, param::hstring const& value) const
{
    Windows::ApplicationModel::Wallet::WalletBarcode barcode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletBarcodeFactory)->CreateWalletBarcode(get_abi(symbology), get_abi(value), put_abi(barcode)));
    return barcode;
}

template <typename D> Windows::ApplicationModel::Wallet::WalletBarcode consume_Windows_ApplicationModel_Wallet_IWalletBarcodeFactory<D>::CreateCustomWalletBarcode(Windows::Storage::Streams::IRandomAccessStreamReference const& streamToBarcodeImage) const
{
    Windows::ApplicationModel::Wallet::WalletBarcode barcode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletBarcodeFactory)->CreateCustomWalletBarcode(get_abi(streamToBarcodeImage), put_abi(barcode)));
    return barcode;
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_Id(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::IsAcknowledged() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_IsAcknowledged(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::IsAcknowledged(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_IsAcknowledged(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::IssuerDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_IssuerDisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::IssuerDisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_IssuerDisplayName(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::LastUpdated() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_LastUpdated(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::LastUpdated(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_LastUpdated(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Wallet::WalletItemKind consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::Kind() const
{
    Windows::ApplicationModel::Wallet::WalletItemKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Wallet::WalletBarcode consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::Barcode() const
{
    Windows::ApplicationModel::Wallet::WalletBarcode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_Barcode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::Barcode(Windows::ApplicationModel::Wallet::WalletBarcode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_Barcode(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::ExpirationDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_ExpirationDate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::ExpirationDate(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_ExpirationDate(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::Logo159x159() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_Logo159x159(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::Logo159x159(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_Logo159x159(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::Logo336x336() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_Logo336x336(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::Logo336x336(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_Logo336x336(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::Logo99x99() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_Logo99x99(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::Logo99x99(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_Logo99x99(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::DisplayMessage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_DisplayMessage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::DisplayMessage(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_DisplayMessage(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::IsDisplayMessageLaunchable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_IsDisplayMessageLaunchable(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::IsDisplayMessageLaunchable(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_IsDisplayMessageLaunchable(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::LogoText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_LogoText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::LogoText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_LogoText(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::HeaderColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_HeaderColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::HeaderColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_HeaderColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::BodyColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_BodyColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::BodyColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_BodyColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::HeaderFontColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_HeaderFontColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::HeaderFontColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_HeaderFontColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::BodyFontColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_BodyFontColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::BodyFontColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_BodyFontColor(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::HeaderBackgroundImage() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_HeaderBackgroundImage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::HeaderBackgroundImage(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_HeaderBackgroundImage(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::BodyBackgroundImage() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_BodyBackgroundImage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::BodyBackgroundImage(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_BodyBackgroundImage(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::LogoImage() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_LogoImage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::LogoImage(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_LogoImage(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::PromotionalImage() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_PromotionalImage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::PromotionalImage(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_PromotionalImage(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::RelevantDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_RelevantDate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::RelevantDate(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_RelevantDate(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::RelevantDateDisplayMessage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_RelevantDateDisplayMessage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::RelevantDateDisplayMessage(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_RelevantDateDisplayMessage(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::ApplicationModel::Wallet::WalletTransaction> consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::TransactionHistory() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::ApplicationModel::Wallet::WalletTransaction> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_TransactionHistory(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::ApplicationModel::Wallet::WalletRelevantLocation> consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::RelevantLocations() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::ApplicationModel::Wallet::WalletRelevantLocation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_RelevantLocations(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::IsMoreTransactionHistoryLaunchable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_IsMoreTransactionHistoryLaunchable(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::IsMoreTransactionHistoryLaunchable(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->put_IsMoreTransactionHistoryLaunchable(value));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::ApplicationModel::Wallet::WalletItemCustomProperty> consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::DisplayProperties() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::ApplicationModel::Wallet::WalletItemCustomProperty> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_DisplayProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::ApplicationModel::Wallet::WalletVerb> consume_Windows_ApplicationModel_Wallet_IWalletItem<D>::Verbs() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::ApplicationModel::Wallet::WalletVerb> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItem)->get_Verbs(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemCustomProperty)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemCustomProperty)->put_Name(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemCustomProperty)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty<D>::Value(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemCustomProperty)->put_Value(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty<D>::AutoDetectLinks() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemCustomProperty)->get_AutoDetectLinks(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty<D>::AutoDetectLinks(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemCustomProperty)->put_AutoDetectLinks(value));
}

template <typename D> Windows::ApplicationModel::Wallet::WalletDetailViewPosition consume_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty<D>::DetailViewPosition() const
{
    Windows::ApplicationModel::Wallet::WalletDetailViewPosition value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemCustomProperty)->get_DetailViewPosition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty<D>::DetailViewPosition(Windows::ApplicationModel::Wallet::WalletDetailViewPosition const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemCustomProperty)->put_DetailViewPosition(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Wallet::WalletSummaryViewPosition consume_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty<D>::SummaryViewPosition() const
{
    Windows::ApplicationModel::Wallet::WalletSummaryViewPosition value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemCustomProperty)->get_SummaryViewPosition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty<D>::SummaryViewPosition(Windows::ApplicationModel::Wallet::WalletSummaryViewPosition const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemCustomProperty)->put_SummaryViewPosition(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Wallet::WalletItemCustomProperty consume_Windows_ApplicationModel_Wallet_IWalletItemCustomPropertyFactory<D>::CreateWalletItemCustomProperty(param::hstring const& name, param::hstring const& value) const
{
    Windows::ApplicationModel::Wallet::WalletItemCustomProperty walletItemCustomProperty{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemCustomPropertyFactory)->CreateWalletItemCustomProperty(get_abi(name), get_abi(value), put_abi(walletItemCustomProperty)));
    return walletItemCustomProperty;
}

template <typename D> Windows::ApplicationModel::Wallet::WalletItem consume_Windows_ApplicationModel_Wallet_IWalletItemFactory<D>::CreateWalletItem(Windows::ApplicationModel::Wallet::WalletItemKind const& kind, param::hstring const& displayName) const
{
    Windows::ApplicationModel::Wallet::WalletItem walletItem{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemFactory)->CreateWalletItem(get_abi(kind), get_abi(displayName), put_abi(walletItem)));
    return walletItem;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Wallet_IWalletItemStore<D>::AddAsync(param::hstring const& id, Windows::ApplicationModel::Wallet::WalletItem const& item) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemStore)->AddAsync(get_abi(id), get_abi(item), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Wallet_IWalletItemStore<D>::ClearAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemStore)->ClearAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItem> consume_Windows_ApplicationModel_Wallet_IWalletItemStore<D>::GetWalletItemAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemStore)->GetWalletItemAsync(get_abi(id), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Wallet::WalletItem>> consume_Windows_ApplicationModel_Wallet_IWalletItemStore<D>::GetItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Wallet::WalletItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemStore)->GetItemsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Wallet::WalletItem>> consume_Windows_ApplicationModel_Wallet_IWalletItemStore<D>::GetItemsAsync(Windows::ApplicationModel::Wallet::WalletItemKind const& kind) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Wallet::WalletItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemStore)->GetItemsWithKindAsync(get_abi(kind), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItem> consume_Windows_ApplicationModel_Wallet_IWalletItemStore<D>::ImportItemAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemStore)->ImportItemAsync(get_abi(stream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Wallet_IWalletItemStore<D>::DeleteAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemStore)->DeleteAsync(get_abi(id), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Wallet_IWalletItemStore<D>::ShowAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemStore)->ShowAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Wallet_IWalletItemStore<D>::ShowAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemStore)->ShowItemAsync(get_abi(id), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Wallet_IWalletItemStore<D>::UpdateAsync(Windows::ApplicationModel::Wallet::WalletItem const& item) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemStore)->UpdateAsync(get_abi(item), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_ApplicationModel_Wallet_IWalletItemStore2<D>::ItemsChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::WalletItemStore, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemStore2)->add_ItemsChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::Wallet::IWalletItemStore2> consume_Windows_ApplicationModel_Wallet_IWalletItemStore2<D>::ItemsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::WalletItemStore, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Wallet::IWalletItemStore2>(this, &abi_t<Windows::ApplicationModel::Wallet::IWalletItemStore2>::remove_ItemsChanged, ItemsChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletItemStore2<D>::ItemsChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletItemStore2)->remove_ItemsChanged(get_abi(cookie)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItemStore> consume_Windows_ApplicationModel_Wallet_IWalletManagerStatics<D>::RequestStoreAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItemStore> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletManagerStatics)->RequestStoreAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Geolocation::BasicGeoposition consume_Windows_ApplicationModel_Wallet_IWalletRelevantLocation<D>::Position() const
{
    Windows::Devices::Geolocation::BasicGeoposition value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletRelevantLocation)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletRelevantLocation<D>::Position(Windows::Devices::Geolocation::BasicGeoposition const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletRelevantLocation)->put_Position(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletRelevantLocation<D>::DisplayMessage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletRelevantLocation)->get_DisplayMessage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletRelevantLocation<D>::DisplayMessage(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletRelevantLocation)->put_DisplayMessage(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletTransaction<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletTransaction)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletTransaction<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletTransaction)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletTransaction<D>::DisplayAmount() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletTransaction)->get_DisplayAmount(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletTransaction<D>::DisplayAmount(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletTransaction)->put_DisplayAmount(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Wallet_IWalletTransaction<D>::IgnoreTimeOfDay() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletTransaction)->get_IgnoreTimeOfDay(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletTransaction<D>::IgnoreTimeOfDay(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletTransaction)->put_IgnoreTimeOfDay(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletTransaction<D>::DisplayLocation() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletTransaction)->get_DisplayLocation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletTransaction<D>::DisplayLocation(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletTransaction)->put_DisplayLocation(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Wallet_IWalletTransaction<D>::TransactionDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletTransaction)->get_TransactionDate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletTransaction<D>::TransactionDate(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletTransaction)->put_TransactionDate(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Wallet_IWalletTransaction<D>::IsLaunchable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletTransaction)->get_IsLaunchable(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletTransaction<D>::IsLaunchable(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletTransaction)->put_IsLaunchable(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Wallet_IWalletVerb<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletVerb)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Wallet_IWalletVerb<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletVerb)->put_Name(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Wallet::WalletVerb consume_Windows_ApplicationModel_Wallet_IWalletVerbFactory<D>::CreateWalletVerb(param::hstring const& name) const
{
    Windows::ApplicationModel::Wallet::WalletVerb WalletVerb{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Wallet::IWalletVerbFactory)->CreateWalletVerb(get_abi(name), put_abi(WalletVerb)));
    return WalletVerb;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Wallet::IWalletBarcode> : produce_base<D, Windows::ApplicationModel::Wallet::IWalletBarcode>
{
    HRESULT __stdcall get_Symbology(abi_t<Windows::ApplicationModel::Wallet::WalletBarcodeSymbology>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Symbology());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetImageAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetImageAsync());
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
struct produce<D, Windows::ApplicationModel::Wallet::IWalletBarcodeFactory> : produce_base<D, Windows::ApplicationModel::Wallet::IWalletBarcodeFactory>
{
    HRESULT __stdcall CreateWalletBarcode(abi_t<Windows::ApplicationModel::Wallet::WalletBarcodeSymbology> symbology, HSTRING value, ::IUnknown** barcode) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *barcode = detach_abi(this->shim().CreateWalletBarcode(*reinterpret_cast<Windows::ApplicationModel::Wallet::WalletBarcodeSymbology const*>(&symbology), *reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *barcode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCustomWalletBarcode(::IUnknown* streamToBarcodeImage, ::IUnknown** barcode) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *barcode = detach_abi(this->shim().CreateCustomWalletBarcode(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&streamToBarcodeImage)));
            return S_OK;
        }
        catch (...)
        {
            *barcode = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Wallet::IWalletItem> : produce_base<D, Windows::ApplicationModel::Wallet::IWalletItem>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAcknowledged(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAcknowledged());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsAcknowledged(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAcknowledged(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IssuerDisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IssuerDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IssuerDisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IssuerDisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastUpdated(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastUpdated());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastUpdated(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastUpdated(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Wallet::WalletItemKind>* value) noexcept override
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

    HRESULT __stdcall get_Barcode(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Barcode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Barcode(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Barcode(*reinterpret_cast<Windows::ApplicationModel::Wallet::WalletBarcode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationDate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpirationDate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExpirationDate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExpirationDate(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Logo159x159(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Logo159x159());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Logo159x159(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Logo159x159(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Logo336x336(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Logo336x336());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Logo336x336(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Logo336x336(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Logo99x99(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Logo99x99());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Logo99x99(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Logo99x99(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayMessage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayMessage(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayMessage(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDisplayMessageLaunchable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDisplayMessageLaunchable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsDisplayMessageLaunchable(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDisplayMessageLaunchable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogoText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LogoText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LogoText(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogoText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeaderColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeaderColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeaderColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BodyColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BodyColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BodyColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BodyColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderFontColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeaderFontColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeaderFontColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeaderFontColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BodyFontColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BodyFontColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BodyFontColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BodyFontColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderBackgroundImage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeaderBackgroundImage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeaderBackgroundImage(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeaderBackgroundImage(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BodyBackgroundImage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BodyBackgroundImage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BodyBackgroundImage(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BodyBackgroundImage(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogoImage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LogoImage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LogoImage(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogoImage(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PromotionalImage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PromotionalImage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PromotionalImage(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PromotionalImage(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelevantDate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelevantDate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelevantDate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelevantDate(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelevantDateDisplayMessage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelevantDateDisplayMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelevantDateDisplayMessage(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelevantDateDisplayMessage(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransactionHistory(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransactionHistory());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelevantLocations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelevantLocations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMoreTransactionHistoryLaunchable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMoreTransactionHistoryLaunchable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsMoreTransactionHistoryLaunchable(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsMoreTransactionHistoryLaunchable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Verbs(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Verbs());
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
struct produce<D, Windows::ApplicationModel::Wallet::IWalletItemCustomProperty> : produce_base<D, Windows::ApplicationModel::Wallet::IWalletItemCustomProperty>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoDetectLinks(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoDetectLinks());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoDetectLinks(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoDetectLinks(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DetailViewPosition(abi_t<Windows::ApplicationModel::Wallet::WalletDetailViewPosition>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DetailViewPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DetailViewPosition(abi_t<Windows::ApplicationModel::Wallet::WalletDetailViewPosition> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DetailViewPosition(*reinterpret_cast<Windows::ApplicationModel::Wallet::WalletDetailViewPosition const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SummaryViewPosition(abi_t<Windows::ApplicationModel::Wallet::WalletSummaryViewPosition>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SummaryViewPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SummaryViewPosition(abi_t<Windows::ApplicationModel::Wallet::WalletSummaryViewPosition> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SummaryViewPosition(*reinterpret_cast<Windows::ApplicationModel::Wallet::WalletSummaryViewPosition const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Wallet::IWalletItemCustomPropertyFactory> : produce_base<D, Windows::ApplicationModel::Wallet::IWalletItemCustomPropertyFactory>
{
    HRESULT __stdcall CreateWalletItemCustomProperty(HSTRING name, HSTRING value, ::IUnknown** walletItemCustomProperty) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *walletItemCustomProperty = detach_abi(this->shim().CreateWalletItemCustomProperty(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *walletItemCustomProperty = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Wallet::IWalletItemFactory> : produce_base<D, Windows::ApplicationModel::Wallet::IWalletItemFactory>
{
    HRESULT __stdcall CreateWalletItem(abi_t<Windows::ApplicationModel::Wallet::WalletItemKind> kind, HSTRING displayName, ::IUnknown** walletItem) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *walletItem = detach_abi(this->shim().CreateWalletItem(*reinterpret_cast<Windows::ApplicationModel::Wallet::WalletItemKind const*>(&kind), *reinterpret_cast<hstring const*>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            *walletItem = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Wallet::IWalletItemStore> : produce_base<D, Windows::ApplicationModel::Wallet::IWalletItemStore>
{
    HRESULT __stdcall AddAsync(HSTRING id, ::IUnknown* item, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AddAsync(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::ApplicationModel::Wallet::WalletItem const*>(&item)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ClearAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetWalletItemAsync(HSTRING id, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetWalletItemAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall GetItemsWithKindAsync(abi_t<Windows::ApplicationModel::Wallet::WalletItemKind> kind, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetItemsAsync(*reinterpret_cast<Windows::ApplicationModel::Wallet::WalletItemKind const*>(&kind)));
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

    HRESULT __stdcall DeleteAsync(HSTRING id, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ShowAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowItemAsync(HSTRING id, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ShowAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateAsync(::IUnknown* item, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().UpdateAsync(*reinterpret_cast<Windows::ApplicationModel::Wallet::WalletItem const*>(&item)));
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
struct produce<D, Windows::ApplicationModel::Wallet::IWalletItemStore2> : produce_base<D, Windows::ApplicationModel::Wallet::IWalletItemStore2>
{
    HRESULT __stdcall add_ItemsChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().ItemsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::WalletItemStore, Windows::Foundation::IInspectable> const*>(&handler)));
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
struct produce<D, Windows::ApplicationModel::Wallet::IWalletManagerStatics> : produce_base<D, Windows::ApplicationModel::Wallet::IWalletManagerStatics>
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

template <typename D>
struct produce<D, Windows::ApplicationModel::Wallet::IWalletRelevantLocation> : produce_base<D, Windows::ApplicationModel::Wallet::IWalletRelevantLocation>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Devices::Geolocation::BasicGeoposition>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Position(abi_t<Windows::Devices::Geolocation::BasicGeoposition> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(*reinterpret_cast<Windows::Devices::Geolocation::BasicGeoposition const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayMessage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayMessage(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayMessage(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Wallet::IWalletTransaction> : produce_base<D, Windows::ApplicationModel::Wallet::IWalletTransaction>
{
    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayAmount(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayAmount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayAmount(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayAmount(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IgnoreTimeOfDay(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IgnoreTimeOfDay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IgnoreTimeOfDay(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IgnoreTimeOfDay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayLocation(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayLocation(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayLocation(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransactionDate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransactionDate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransactionDate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransactionDate(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsLaunchable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsLaunchable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsLaunchable(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsLaunchable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Wallet::IWalletVerb> : produce_base<D, Windows::ApplicationModel::Wallet::IWalletVerb>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Wallet::IWalletVerbFactory> : produce_base<D, Windows::ApplicationModel::Wallet::IWalletVerbFactory>
{
    HRESULT __stdcall CreateWalletVerb(HSTRING name, ::IUnknown** WalletVerb) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *WalletVerb = detach_abi(this->shim().CreateWalletVerb(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *WalletVerb = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Wallet {

inline WalletBarcode::WalletBarcode(Windows::ApplicationModel::Wallet::WalletBarcodeSymbology const& symbology, param::hstring const& value) :
    WalletBarcode(get_activation_factory<WalletBarcode, Windows::ApplicationModel::Wallet::IWalletBarcodeFactory>().CreateWalletBarcode(symbology, value))
{}

inline WalletBarcode::WalletBarcode(Windows::Storage::Streams::IRandomAccessStreamReference const& streamToBarcodeImage) :
    WalletBarcode(get_activation_factory<WalletBarcode, Windows::ApplicationModel::Wallet::IWalletBarcodeFactory>().CreateCustomWalletBarcode(streamToBarcodeImage))
{}

inline WalletItem::WalletItem(Windows::ApplicationModel::Wallet::WalletItemKind const& kind, param::hstring const& displayName) :
    WalletItem(get_activation_factory<WalletItem, Windows::ApplicationModel::Wallet::IWalletItemFactory>().CreateWalletItem(kind, displayName))
{}

inline WalletItemCustomProperty::WalletItemCustomProperty(param::hstring const& name, param::hstring const& value) :
    WalletItemCustomProperty(get_activation_factory<WalletItemCustomProperty, Windows::ApplicationModel::Wallet::IWalletItemCustomPropertyFactory>().CreateWalletItemCustomProperty(name, value))
{}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItemStore> WalletManager::RequestStoreAsync()
{
    return get_activation_factory<WalletManager, Windows::ApplicationModel::Wallet::IWalletManagerStatics>().RequestStoreAsync();
}

inline WalletRelevantLocation::WalletRelevantLocation() :
    WalletRelevantLocation(activate_instance<WalletRelevantLocation>())
{}

inline WalletTransaction::WalletTransaction() :
    WalletTransaction(activate_instance<WalletTransaction>())
{}

inline WalletVerb::WalletVerb(param::hstring const& name) :
    WalletVerb(get_activation_factory<WalletVerb, Windows::ApplicationModel::Wallet::IWalletVerbFactory>().CreateWalletVerb(name))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::IWalletBarcode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::IWalletBarcode> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::IWalletBarcodeFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::IWalletBarcodeFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::IWalletItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::IWalletItem> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::IWalletItemCustomPropertyFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::IWalletItemCustomPropertyFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::IWalletItemFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::IWalletItemFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::IWalletItemStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::IWalletItemStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::IWalletItemStore2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::IWalletItemStore2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::IWalletManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::IWalletManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::IWalletRelevantLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::IWalletRelevantLocation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::IWalletTransaction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::IWalletTransaction> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::IWalletVerb> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::IWalletVerb> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::IWalletVerbFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::IWalletVerbFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::WalletBarcode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::WalletBarcode> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::WalletItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::WalletItem> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::WalletItemCustomProperty> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::WalletItemCustomProperty> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::WalletItemStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::WalletItemStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::WalletManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::WalletManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::WalletRelevantLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::WalletRelevantLocation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::WalletTransaction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::WalletTransaction> {};

template<> struct hash<winrt::Windows::ApplicationModel::Wallet::WalletVerb> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Wallet::WalletVerb> {};

}

WINRT_WARNING_POP
