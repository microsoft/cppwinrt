// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.PointOfService.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Devices_PointOfService_IBarcodeScanner<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScanner)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::BarcodeScannerCapabilities consume_Windows_Devices_PointOfService_IBarcodeScanner<D>::Capabilities() const
{
    Windows::Devices::PointOfService::BarcodeScannerCapabilities value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScanner)->get_Capabilities(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedBarcodeScanner> consume_Windows_Devices_PointOfService_IBarcodeScanner<D>::ClaimScannerAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedBarcodeScanner> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScanner)->ClaimScannerAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Devices_PointOfService_IBarcodeScanner<D>::CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScanner)->CheckHealthAsync(get_abi(level), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<uint32_t>> consume_Windows_Devices_PointOfService_IBarcodeScanner<D>::GetSupportedSymbologiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<uint32_t>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScanner)->GetSupportedSymbologiesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IBarcodeScanner<D>::IsSymbologySupportedAsync(uint32_t barcodeSymbology) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScanner)->IsSymbologySupportedAsync(barcodeSymbology, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Devices_PointOfService_IBarcodeScanner<D>::RetrieveStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScanner)->RetrieveStatisticsAsync(get_abi(statisticsCategories), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Devices_PointOfService_IBarcodeScanner<D>::GetSupportedProfiles() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScanner)->GetSupportedProfiles(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IBarcodeScanner<D>::IsProfileSupported(param::hstring const& profile) const
{
    bool isSupported{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScanner)->IsProfileSupported(get_abi(profile), &isSupported));
    return isSupported;
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IBarcodeScanner<D>::StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::BarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScanner)->add_StatusUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IBarcodeScanner> consume_Windows_Devices_PointOfService_IBarcodeScanner<D>::StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::BarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IBarcodeScanner>(this, &abi_t<Windows::Devices::PointOfService::IBarcodeScanner>::remove_StatusUpdated, StatusUpdated(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IBarcodeScanner<D>::StatusUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScanner)->remove_StatusUpdated(get_abi(token)));
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IBarcodeScanner2<D>::VideoDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScanner2)->get_VideoDeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::UnifiedPosPowerReportingType consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities<D>::PowerReportingType() const
{
    Windows::Devices::PointOfService::UnifiedPosPowerReportingType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerCapabilities)->get_PowerReportingType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities<D>::IsStatisticsReportingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerCapabilities)->get_IsStatisticsReportingSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities<D>::IsStatisticsUpdatingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerCapabilities)->get_IsStatisticsUpdatingSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities<D>::IsImagePreviewSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerCapabilities)->get_IsImagePreviewSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities1<D>::IsSoftwareTriggerSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerCapabilities1)->get_IsSoftwareTriggerSupported(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::BarcodeScannerReport consume_Windows_Devices_PointOfService_IBarcodeScannerDataReceivedEventArgs<D>::Report() const
{
    Windows::Devices::PointOfService::BarcodeScannerReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs)->get_Report(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::BarcodeScannerReport consume_Windows_Devices_PointOfService_IBarcodeScannerErrorOccurredEventArgs<D>::PartialInputData() const
{
    Windows::Devices::PointOfService::BarcodeScannerReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs)->get_PartialInputData(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IBarcodeScannerErrorOccurredEventArgs<D>::IsRetriable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs)->get_IsRetriable(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::UnifiedPosErrorData consume_Windows_Devices_PointOfService_IBarcodeScannerErrorOccurredEventArgs<D>::ErrorData() const
{
    Windows::Devices::PointOfService::UnifiedPosErrorData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs)->get_ErrorData(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamWithContentType consume_Windows_Devices_PointOfService_IBarcodeScannerImagePreviewReceivedEventArgs<D>::Preview() const
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType preview{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs)->get_Preview(put_abi(preview)));
    return preview;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeScannerReport<D>::ScanDataType() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerReport)->get_ScanDataType(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_PointOfService_IBarcodeScannerReport<D>::ScanData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerReport)->get_ScanData(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_PointOfService_IBarcodeScannerReport<D>::ScanDataLabel() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerReport)->get_ScanDataLabel(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeScanner> consume_Windows_Devices_PointOfService_IBarcodeScannerStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeScanner> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerStatics)->GetDefaultAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeScanner> consume_Windows_Devices_PointOfService_IBarcodeScannerStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeScanner> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerStatics)->FromIdAsync(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IBarcodeScannerStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IBarcodeScannerStatics2<D>::GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerStatics2)->GetDeviceSelectorWithConnectionTypes(get_abi(connectionTypes), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::BarcodeScannerStatus consume_Windows_Devices_PointOfService_IBarcodeScannerStatusUpdatedEventArgs<D>::Status() const
{
    Windows::Devices::PointOfService::BarcodeScannerStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeScannerStatusUpdatedEventArgs<D>::ExtendedStatus() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs)->get_ExtendedStatus(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Unknown() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Unknown(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Ean8() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Ean8(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Ean8Add2() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Ean8Add2(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Ean8Add5() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Ean8Add5(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Eanv() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Eanv(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::EanvAdd2() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_EanvAdd2(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::EanvAdd5() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_EanvAdd5(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Ean13() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Ean13(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Ean13Add2() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Ean13Add2(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Ean13Add5() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Ean13Add5(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Isbn() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Isbn(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::IsbnAdd5() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_IsbnAdd5(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Ismn() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Ismn(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::IsmnAdd2() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_IsmnAdd2(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::IsmnAdd5() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_IsmnAdd5(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Issn() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Issn(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::IssnAdd2() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_IssnAdd2(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::IssnAdd5() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_IssnAdd5(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Ean99() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Ean99(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Ean99Add2() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Ean99Add2(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Ean99Add5() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Ean99Add5(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Upca() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Upca(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::UpcaAdd2() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_UpcaAdd2(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::UpcaAdd5() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_UpcaAdd5(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Upce() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Upce(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::UpceAdd2() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_UpceAdd2(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::UpceAdd5() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_UpceAdd5(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::UpcCoupon() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_UpcCoupon(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::TfStd() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_TfStd(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::TfDis() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_TfDis(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::TfInt() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_TfInt(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::TfInd() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_TfInd(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::TfMat() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_TfMat(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::TfIata() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_TfIata(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Gs1DatabarType1() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Gs1DatabarType1(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Gs1DatabarType2() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Gs1DatabarType2(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Gs1DatabarType3() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Gs1DatabarType3(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Code39() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Code39(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Code39Ex() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Code39Ex(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Trioptic39() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Trioptic39(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Code32() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Code32(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Pzn() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Pzn(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Code93() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Code93(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Code93Ex() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Code93Ex(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Code128() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Code128(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Gs1128() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Gs1128(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Gs1128Coupon() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Gs1128Coupon(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::UccEan128() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_UccEan128(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Sisac() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Sisac(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Isbt() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Isbt(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Codabar() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Codabar(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Code11() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Code11(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Msi() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Msi(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Plessey() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Plessey(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Telepen() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Telepen(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Code16k() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Code16k(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::CodablockA() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_CodablockA(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::CodablockF() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_CodablockF(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Codablock128() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Codablock128(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Code49() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Code49(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Aztec() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Aztec(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::DataCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_DataCode(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::DataMatrix() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_DataMatrix(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::HanXin() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_HanXin(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Maxicode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Maxicode(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::MicroPdf417() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_MicroPdf417(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::MicroQr() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_MicroQr(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Pdf417() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Pdf417(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Qr() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Qr(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::MsTag() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_MsTag(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Ccab() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Ccab(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Ccc() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Ccc(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Tlc39() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Tlc39(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::AusPost() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_AusPost(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::CanPost() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_CanPost(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::ChinaPost() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_ChinaPost(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::DutchKix() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_DutchKix(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::InfoMail() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_InfoMail(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::ItalianPost25() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_ItalianPost25(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::ItalianPost39() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_ItalianPost39(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::JapanPost() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_JapanPost(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::KoreanPost() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_KoreanPost(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::SwedenPost() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_SwedenPost(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::UkPost() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_UkPost(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::UsIntelligent() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_UsIntelligent(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::UsIntelligentPkg() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_UsIntelligentPkg(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::UsPlanet() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_UsPlanet(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::UsPostNet() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_UsPostNet(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Us4StateFics() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Us4StateFics(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::OcrA() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_OcrA(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::OcrB() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_OcrB(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::Micr() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_Micr(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::ExtendedBase() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->get_ExtendedBase(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>::GetName(uint32_t scanDataType) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics)->GetName(scanDataType, put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics2<D>::Gs1DWCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2)->get_Gs1DWCode(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>::IsCheckDigitValidationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologyAttributes)->get_IsCheckDigitValidationEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>::IsCheckDigitValidationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologyAttributes)->put_IsCheckDigitValidationEnabled(value));
}

template <typename D> bool consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>::IsCheckDigitValidationSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologyAttributes)->get_IsCheckDigitValidationSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>::IsCheckDigitTransmissionEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologyAttributes)->get_IsCheckDigitTransmissionEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>::IsCheckDigitTransmissionEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologyAttributes)->put_IsCheckDigitTransmissionEnabled(value));
}

template <typename D> bool consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>::IsCheckDigitTransmissionSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologyAttributes)->get_IsCheckDigitTransmissionSupported(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>::DecodeLength1() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologyAttributes)->get_DecodeLength1(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>::DecodeLength1(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologyAttributes)->put_DecodeLength1(value));
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>::DecodeLength2() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologyAttributes)->get_DecodeLength2(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>::DecodeLength2(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologyAttributes)->put_DecodeLength2(value));
}

template <typename D> Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>::DecodeLengthKind() const
{
    Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologyAttributes)->get_DecodeLengthKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>::DecodeLengthKind(Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologyAttributes)->put_DecodeLengthKind(get_abi(value)));
}

template <typename D> bool consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>::IsDecodeLengthSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IBarcodeSymbologyAttributes)->get_IsDecodeLengthSupported(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_ICashDrawer<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawer)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::CashDrawerCapabilities consume_Windows_Devices_PointOfService_ICashDrawer<D>::Capabilities() const
{
    Windows::Devices::PointOfService::CashDrawerCapabilities value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawer)->get_Capabilities(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::CashDrawerStatus consume_Windows_Devices_PointOfService_ICashDrawer<D>::Status() const
{
    Windows::Devices::PointOfService::CashDrawerStatus value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawer)->get_Status(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICashDrawer<D>::IsDrawerOpen() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawer)->get_IsDrawerOpen(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::CashDrawerEventSource consume_Windows_Devices_PointOfService_ICashDrawer<D>::DrawerEventSource() const
{
    Windows::Devices::PointOfService::CashDrawerEventSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawer)->get_DrawerEventSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedCashDrawer> consume_Windows_Devices_PointOfService_ICashDrawer<D>::ClaimDrawerAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedCashDrawer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawer)->ClaimDrawerAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Devices_PointOfService_ICashDrawer<D>::CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawer)->CheckHealthAsync(get_abi(level), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Devices_PointOfService_ICashDrawer<D>::GetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawer)->GetStatisticsAsync(get_abi(statisticsCategories), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Devices_PointOfService_ICashDrawer<D>::StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawer, Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawer)->add_StatusUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::ICashDrawer> consume_Windows_Devices_PointOfService_ICashDrawer<D>::StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawer, Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::ICashDrawer>(this, &abi_t<Windows::Devices::PointOfService::ICashDrawer>::remove_StatusUpdated, StatusUpdated(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_ICashDrawer<D>::StatusUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawer)->remove_StatusUpdated(get_abi(token)));
}

template <typename D> Windows::Devices::PointOfService::UnifiedPosPowerReportingType consume_Windows_Devices_PointOfService_ICashDrawerCapabilities<D>::PowerReportingType() const
{
    Windows::Devices::PointOfService::UnifiedPosPowerReportingType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCapabilities)->get_PowerReportingType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICashDrawerCapabilities<D>::IsStatisticsReportingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCapabilities)->get_IsStatisticsReportingSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICashDrawerCapabilities<D>::IsStatisticsUpdatingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCapabilities)->get_IsStatisticsUpdatingSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICashDrawerCapabilities<D>::IsStatusReportingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCapabilities)->get_IsStatusReportingSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICashDrawerCapabilities<D>::IsStatusMultiDrawerDetectSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCapabilities)->get_IsStatusMultiDrawerDetectSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICashDrawerCapabilities<D>::IsDrawerOpenSensorAvailable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCapabilities)->get_IsDrawerOpenSensorAvailable(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>::AlarmTimeout(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCloseAlarm)->put_AlarmTimeout(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>::AlarmTimeout() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCloseAlarm)->get_AlarmTimeout(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>::BeepFrequency(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCloseAlarm)->put_BeepFrequency(value));
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>::BeepFrequency() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCloseAlarm)->get_BeepFrequency(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>::BeepDuration(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCloseAlarm)->put_BeepDuration(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>::BeepDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCloseAlarm)->get_BeepDuration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>::BeepDelay(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCloseAlarm)->put_BeepDelay(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>::BeepDelay() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCloseAlarm)->get_BeepDelay(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>::AlarmTimeoutExpired(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerCloseAlarm, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCloseAlarm)->add_AlarmTimeoutExpired(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::ICashDrawerCloseAlarm> consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>::AlarmTimeoutExpired(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerCloseAlarm, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::ICashDrawerCloseAlarm>(this, &abi_t<Windows::Devices::PointOfService::ICashDrawerCloseAlarm>::remove_AlarmTimeoutExpired, AlarmTimeoutExpired(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>::AlarmTimeoutExpired(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCloseAlarm)->remove_AlarmTimeoutExpired(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>::StartAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerCloseAlarm)->StartAsync(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_PointOfService_ICashDrawerEventSource<D>::DrawerClosed(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerClosedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerEventSource)->add_DrawerClosed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::ICashDrawerEventSource> consume_Windows_Devices_PointOfService_ICashDrawerEventSource<D>::DrawerClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerClosedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::ICashDrawerEventSource>(this, &abi_t<Windows::Devices::PointOfService::ICashDrawerEventSource>::remove_DrawerClosed, DrawerClosed(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_ICashDrawerEventSource<D>::DrawerClosed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerEventSource)->remove_DrawerClosed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_ICashDrawerEventSource<D>::DrawerOpened(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerOpenedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerEventSource)->add_DrawerOpened(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::ICashDrawerEventSource> consume_Windows_Devices_PointOfService_ICashDrawerEventSource<D>::DrawerOpened(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerOpenedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::ICashDrawerEventSource>(this, &abi_t<Windows::Devices::PointOfService::ICashDrawerEventSource>::remove_DrawerOpened, DrawerOpened(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_ICashDrawerEventSource<D>::DrawerOpened(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerEventSource)->remove_DrawerOpened(get_abi(token)));
}

template <typename D> Windows::Devices::PointOfService::CashDrawer consume_Windows_Devices_PointOfService_ICashDrawerEventSourceEventArgs<D>::CashDrawer() const
{
    Windows::Devices::PointOfService::CashDrawer drawer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs)->get_CashDrawer(put_abi(drawer)));
    return drawer;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::CashDrawer> consume_Windows_Devices_PointOfService_ICashDrawerStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::CashDrawer> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerStatics)->GetDefaultAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::CashDrawer> consume_Windows_Devices_PointOfService_ICashDrawerStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::CashDrawer> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerStatics)->FromIdAsync(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_ICashDrawerStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_ICashDrawerStatics2<D>::GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerStatics2)->GetDeviceSelectorWithConnectionTypes(get_abi(connectionTypes), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::CashDrawerStatusKind consume_Windows_Devices_PointOfService_ICashDrawerStatus<D>::StatusKind() const
{
    Windows::Devices::PointOfService::CashDrawerStatusKind value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerStatus)->get_StatusKind(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_ICashDrawerStatus<D>::ExtendedStatus() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerStatus)->get_ExtendedStatus(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::CashDrawerStatus consume_Windows_Devices_PointOfService_ICashDrawerStatusUpdatedEventArgs<D>::Status() const
{
    Windows::Devices::PointOfService::CashDrawerStatus value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::IsDisabledOnDataReceived(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->put_IsDisabledOnDataReceived(value));
}

template <typename D> bool consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::IsDisabledOnDataReceived() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->get_IsDisabledOnDataReceived(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::IsDecodeDataEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->put_IsDecodeDataEnabled(value));
}

template <typename D> bool consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::IsDecodeDataEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->get_IsDecodeDataEnabled(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::EnableAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->EnableAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::DisableAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->DisableAsync(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::RetainDevice() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->RetainDevice());
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::SetActiveSymbologiesAsync(param::async_iterable<uint32_t> const& symbologies) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->SetActiveSymbologiesAsync(get_abi(symbologies), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::ResetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->ResetStatisticsAsync(get_abi(statisticsCategories), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::UpdateStatisticsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& statistics) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->UpdateStatisticsAsync(get_abi(statistics), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::SetActiveProfileAsync(param::hstring const& profile) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->SetActiveProfileAsync(get_abi(profile), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::DataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->add_DataReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner> consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::DataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedBarcodeScanner>(this, &abi_t<Windows::Devices::PointOfService::IClaimedBarcodeScanner>::remove_DataReceived, DataReceived(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::DataReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->remove_DataReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::TriggerPressed(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->add_TriggerPressed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner> consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::TriggerPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedBarcodeScanner>(this, &abi_t<Windows::Devices::PointOfService::IClaimedBarcodeScanner>::remove_TriggerPressed, TriggerPressed(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::TriggerPressed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->remove_TriggerPressed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::TriggerReleased(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->add_TriggerReleased(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner> consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::TriggerReleased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedBarcodeScanner>(this, &abi_t<Windows::Devices::PointOfService::IClaimedBarcodeScanner>::remove_TriggerReleased, TriggerReleased(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::TriggerReleased(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->remove_TriggerReleased(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::ReleaseDeviceRequested(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->add_ReleaseDeviceRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner> consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedBarcodeScanner>(this, &abi_t<Windows::Devices::PointOfService::IClaimedBarcodeScanner>::remove_ReleaseDeviceRequested, ReleaseDeviceRequested(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::ReleaseDeviceRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->remove_ReleaseDeviceRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::ImagePreviewReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->add_ImagePreviewReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner> consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::ImagePreviewReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedBarcodeScanner>(this, &abi_t<Windows::Devices::PointOfService::IClaimedBarcodeScanner>::remove_ImagePreviewReceived, ImagePreviewReceived(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::ImagePreviewReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->remove_ImagePreviewReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->add_ErrorOccurred(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner> consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::ErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedBarcodeScanner>(this, &abi_t<Windows::Devices::PointOfService::IClaimedBarcodeScanner>::remove_ErrorOccurred, ErrorOccurred(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>::ErrorOccurred(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner)->remove_ErrorOccurred(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner1<D>::StartSoftwareTriggerAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner1)->StartSoftwareTriggerAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner1<D>::StopSoftwareTriggerAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner1)->StopSoftwareTriggerAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeSymbologyAttributes> consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner2<D>::GetSymbologyAttributesAsync(uint32_t barcodeSymbology) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeSymbologyAttributes> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner2)->GetSymbologyAttributesAsync(barcodeSymbology, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner2<D>::SetSymbologyAttributesAsync(uint32_t barcodeSymbology, Windows::Devices::PointOfService::BarcodeSymbologyAttributes const& attributes) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedBarcodeScanner2)->SetSymbologyAttributesAsync(barcodeSymbology, get_abi(attributes), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedCashDrawer)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedCashDrawer)->get_IsEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>::IsDrawerOpen() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedCashDrawer)->get_IsDrawerOpen(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::CashDrawerCloseAlarm consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>::CloseAlarm() const
{
    Windows::Devices::PointOfService::CashDrawerCloseAlarm value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedCashDrawer)->get_CloseAlarm(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>::OpenDrawerAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedCashDrawer)->OpenDrawerAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>::EnableAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedCashDrawer)->EnableAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>::DisableAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedCashDrawer)->DisableAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>::RetainDeviceAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedCashDrawer)->RetainDeviceAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>::ResetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedCashDrawer)->ResetStatisticsAsync(get_abi(statisticsCategories), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>::UpdateStatisticsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& statistics) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedCashDrawer)->UpdateStatisticsAsync(get_abi(statistics), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>::ReleaseDeviceRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedCashDrawer, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedCashDrawer)->add_ReleaseDeviceRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedCashDrawer> consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>::ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedCashDrawer, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedCashDrawer>(this, &abi_t<Windows::Devices::PointOfService::IClaimedCashDrawer>::remove_ReleaseDeviceRequested, ReleaseDeviceRequested(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>::ReleaseDeviceRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedCashDrawer)->remove_ReleaseDeviceRequested(get_abi(token)));
}

template <typename D> Windows::Devices::PointOfService::JournalPrintJob consume_Windows_Devices_PointOfService_IClaimedJournalPrinter<D>::CreateJob() const
{
    Windows::Devices::PointOfService::JournalPrintJob value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedJournalPrinter)->CreateJob(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplay)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::LineDisplayCapabilities consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>::Capabilities() const
{
    Windows::Devices::PointOfService::LineDisplayCapabilities value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplay)->get_Capabilities(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>::PhysicalDeviceName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplay)->get_PhysicalDeviceName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>::PhysicalDeviceDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplay)->get_PhysicalDeviceDescription(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>::DeviceControlDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplay)->get_DeviceControlDescription(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>::DeviceControlVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplay)->get_DeviceControlVersion(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>::DeviceServiceVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplay)->get_DeviceServiceVersion(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::LineDisplayWindow consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>::DefaultWindow() const
{
    Windows::Devices::PointOfService::LineDisplayWindow value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplay)->get_DefaultWindow(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>::RetainDevice() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplay)->RetainDevice());
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>::ReleaseDeviceRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedLineDisplay, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplay)->add_ReleaseDeviceRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedLineDisplay> consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>::ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedLineDisplay, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedLineDisplay>(this, &abi_t<Windows::Devices::PointOfService::IClaimedLineDisplay>::remove_ReleaseDeviceRequested, ReleaseDeviceRequested(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>::ReleaseDeviceRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplay)->remove_ReleaseDeviceRequested(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedLineDisplay> consume_Windows_Devices_PointOfService_IClaimedLineDisplayStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedLineDisplay> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplayStatics)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IClaimedLineDisplayStatics<D>::GetDeviceSelector() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplayStatics)->GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IClaimedLineDisplayStatics<D>::GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedLineDisplayStatics)->GetDeviceSelectorWithConnectionTypes(get_abi(connectionTypes), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::IsDisabledOnDataReceived(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->put_IsDisabledOnDataReceived(value));
}

template <typename D> bool consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::IsDisabledOnDataReceived() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->get_IsDisabledOnDataReceived(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::IsDecodeDataEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->put_IsDecodeDataEnabled(value));
}

template <typename D> bool consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::IsDecodeDataEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->get_IsDecodeDataEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::IsDeviceAuthenticated() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->get_IsDeviceAuthenticated(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::DataEncryptionAlgorithm(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->put_DataEncryptionAlgorithm(value));
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::DataEncryptionAlgorithm() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->get_DataEncryptionAlgorithm(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::TracksToRead(Windows::Devices::PointOfService::MagneticStripeReaderTrackIds const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->put_TracksToRead(get_abi(value)));
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderTrackIds consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::TracksToRead() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderTrackIds value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->get_TracksToRead(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::IsTransmitSentinelsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->put_IsTransmitSentinelsEnabled(value));
}

template <typename D> bool consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::IsTransmitSentinelsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->get_IsTransmitSentinelsEnabled(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::EnableAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->EnableAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::DisableAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->DisableAsync(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::RetainDevice() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->RetainDevice());
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::SetErrorReportingType(Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->SetErrorReportingType(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::RetrieveDeviceAuthenticationDataAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->RetrieveDeviceAuthenticationDataAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::AuthenticateDeviceAsync(array_view<uint8_t const> responseToken) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->AuthenticateDeviceAsync(responseToken.size(), get_abi(responseToken), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::DeAuthenticateDeviceAsync(array_view<uint8_t const> responseToken) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->DeAuthenticateDeviceAsync(responseToken.size(), get_abi(responseToken), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::UpdateKeyAsync(param::hstring const& key, param::hstring const& keyName) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->UpdateKeyAsync(get_abi(key), get_abi(keyName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::ResetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->ResetStatisticsAsync(get_abi(statisticsCategories), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::UpdateStatisticsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& statistics) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->UpdateStatisticsAsync(get_abi(statistics), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::BankCardDataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->add_BankCardDataReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader> consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::BankCardDataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedMagneticStripeReader>(this, &abi_t<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>::remove_BankCardDataReceived, BankCardDataReceived(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::BankCardDataReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->remove_BankCardDataReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::AamvaCardDataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->add_AamvaCardDataReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader> consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::AamvaCardDataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedMagneticStripeReader>(this, &abi_t<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>::remove_AamvaCardDataReceived, AamvaCardDataReceived(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::AamvaCardDataReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->remove_AamvaCardDataReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::VendorSpecificDataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->add_VendorSpecificDataReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader> consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::VendorSpecificDataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedMagneticStripeReader>(this, &abi_t<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>::remove_VendorSpecificDataReceived, VendorSpecificDataReceived(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::VendorSpecificDataReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->remove_VendorSpecificDataReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::ReleaseDeviceRequested(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->add_ReleaseDeviceRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader> consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedMagneticStripeReader>(this, &abi_t<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>::remove_ReleaseDeviceRequested, ReleaseDeviceRequested(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::ReleaseDeviceRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->remove_ReleaseDeviceRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->add_ErrorOccurred(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader> consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::ErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedMagneticStripeReader>(this, &abi_t<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>::remove_ErrorOccurred, ErrorOccurred(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>::ErrorOccurred(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedMagneticStripeReader)->remove_ErrorOccurred(get_abi(token)));
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::CharacterSet(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->put_CharacterSet(value));
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::CharacterSet() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->get_CharacterSet(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::IsCoverOpen() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->get_IsCoverOpen(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::IsCharacterSetMappingEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->put_IsCharacterSetMappingEnabled(value));
}

template <typename D> bool consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::IsCharacterSetMappingEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->get_IsCharacterSetMappingEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::MapMode(Windows::Devices::PointOfService::PosPrinterMapMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->put_MapMode(get_abi(value)));
}

template <typename D> Windows::Devices::PointOfService::PosPrinterMapMode consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::MapMode() const
{
    Windows::Devices::PointOfService::PosPrinterMapMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->get_MapMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::ClaimedReceiptPrinter consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::Receipt() const
{
    Windows::Devices::PointOfService::ClaimedReceiptPrinter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->get_Receipt(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::ClaimedSlipPrinter consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::Slip() const
{
    Windows::Devices::PointOfService::ClaimedSlipPrinter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->get_Slip(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::ClaimedJournalPrinter consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::Journal() const
{
    Windows::Devices::PointOfService::ClaimedJournalPrinter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->get_Journal(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::EnableAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->EnableAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::DisableAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->DisableAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::RetainDeviceAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->RetainDeviceAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::ResetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->ResetStatisticsAsync(get_abi(statisticsCategories), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::UpdateStatisticsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& statistics) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->UpdateStatisticsAsync(get_abi(statistics), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::ReleaseDeviceRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedPosPrinter, Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->add_ReleaseDeviceRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IClaimedPosPrinter> consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedPosPrinter, Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IClaimedPosPrinter>(this, &abi_t<Windows::Devices::PointOfService::IClaimedPosPrinter>::remove_ReleaseDeviceRequested, ReleaseDeviceRequested(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>::ReleaseDeviceRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedPosPrinter)->remove_ReleaseDeviceRequested(get_abi(token)));
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IClaimedReceiptPrinter<D>::SidewaysMaxLines() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedReceiptPrinter)->get_SidewaysMaxLines(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IClaimedReceiptPrinter<D>::SidewaysMaxChars() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedReceiptPrinter)->get_SidewaysMaxChars(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IClaimedReceiptPrinter<D>::LinesToPaperCut() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedReceiptPrinter)->get_LinesToPaperCut(&value));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_Devices_PointOfService_IClaimedReceiptPrinter<D>::PageSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedReceiptPrinter)->get_PageSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Devices_PointOfService_IClaimedReceiptPrinter<D>::PrintArea() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedReceiptPrinter)->get_PrintArea(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::ReceiptPrintJob consume_Windows_Devices_PointOfService_IClaimedReceiptPrinter<D>::CreateJob() const
{
    Windows::Devices::PointOfService::ReceiptPrintJob value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedReceiptPrinter)->CreateJob(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>::SidewaysMaxLines() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedSlipPrinter)->get_SidewaysMaxLines(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>::SidewaysMaxChars() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedSlipPrinter)->get_SidewaysMaxChars(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>::MaxLines() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedSlipPrinter)->get_MaxLines(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>::LinesNearEndToEnd() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedSlipPrinter)->get_LinesNearEndToEnd(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::PosPrinterPrintSide consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>::PrintSide() const
{
    Windows::Devices::PointOfService::PosPrinterPrintSide value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedSlipPrinter)->get_PrintSide(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>::PageSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedSlipPrinter)->get_PageSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>::PrintArea() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedSlipPrinter)->get_PrintArea(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>::OpenJaws() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedSlipPrinter)->OpenJaws());
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>::CloseJaws() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedSlipPrinter)->CloseJaws());
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>::InsertSlipAsync(Windows::Foundation::TimeSpan const& timeout) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedSlipPrinter)->InsertSlipAsync(get_abi(timeout), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>::RemoveSlipAsync(Windows::Foundation::TimeSpan const& timeout) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedSlipPrinter)->RemoveSlipAsync(get_abi(timeout), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>::ChangePrintSide(Windows::Devices::PointOfService::PosPrinterPrintSide const& printSide) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedSlipPrinter)->ChangePrintSide(get_abi(printSide)));
}

template <typename D> Windows::Devices::PointOfService::SlipPrintJob consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>::CreateJob() const
{
    Windows::Devices::PointOfService::SlipPrintJob value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IClaimedSlipPrinter)->CreateJob(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::CharactersPerLine(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->put_CharactersPerLine(value));
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::CharactersPerLine() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->get_CharactersPerLine(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::LineHeight(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->put_LineHeight(value));
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::LineHeight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->get_LineHeight(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::LineSpacing(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->put_LineSpacing(value));
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::LineSpacing() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->get_LineSpacing(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::LineWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->get_LineWidth(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::IsLetterQuality(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->put_IsLetterQuality(value));
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::IsLetterQuality() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->get_IsLetterQuality(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::IsPaperNearEnd() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->get_IsPaperNearEnd(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::ColorCartridge(Windows::Devices::PointOfService::PosPrinterColorCartridge const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->put_ColorCartridge(get_abi(value)));
}

template <typename D> Windows::Devices::PointOfService::PosPrinterColorCartridge consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::ColorCartridge() const
{
    Windows::Devices::PointOfService::PosPrinterColorCartridge value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->get_ColorCartridge(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::IsCoverOpen() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->get_IsCoverOpen(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::IsCartridgeRemoved() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->get_IsCartridgeRemoved(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::IsCartridgeEmpty() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->get_IsCartridgeEmpty(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::IsHeadCleaning() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->get_IsHeadCleaning(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::IsPaperEmpty() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->get_IsPaperEmpty(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::IsReadyToPrint() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->get_IsReadyToPrint(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>::ValidateData(param::hstring const& data) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation)->ValidateData(get_abi(data), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>::IsPrinterPresent() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities)->get_IsPrinterPresent(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>::IsDualColorSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities)->get_IsDualColorSupported(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::PosPrinterColorCapabilities consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>::ColorCartridgeCapabilities() const
{
    Windows::Devices::PointOfService::PosPrinterColorCapabilities value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities)->get_ColorCartridgeCapabilities(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::PosPrinterCartridgeSensors consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>::CartridgeSensors() const
{
    Windows::Devices::PointOfService::PosPrinterCartridgeSensors value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities)->get_CartridgeSensors(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>::IsBoldSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities)->get_IsBoldSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>::IsItalicSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities)->get_IsItalicSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>::IsUnderlineSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities)->get_IsUnderlineSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>::IsDoubleHighPrintSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities)->get_IsDoubleHighPrintSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>::IsDoubleWidePrintSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities)->get_IsDoubleWidePrintSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>::IsDoubleHighDoubleWidePrintSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities)->get_IsDoubleHighDoubleWidePrintSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>::IsPaperEmptySensorSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities)->get_IsPaperEmptySensorSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>::IsPaperNearEndSensorSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities)->get_IsPaperNearEndSensorSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>::SupportedCharactersPerLine() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities)->get_SupportedCharactersPerLine(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities<D>::IsBarcodeSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities)->get_IsBarcodeSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities<D>::IsBitmapSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities)->get_IsBitmapSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities<D>::IsLeft90RotationSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities)->get_IsLeft90RotationSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities<D>::IsRight90RotationSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities)->get_IsRight90RotationSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities<D>::Is180RotationSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities)->get_Is180RotationSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities<D>::IsPrintAreaSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities)->get_IsPrintAreaSupported(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::PosPrinterRuledLineCapabilities consume_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities<D>::RuledLineCapabilities() const
{
    Windows::Devices::PointOfService::PosPrinterRuledLineCapabilities value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities)->get_RuledLineCapabilities(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::PointOfService::PosPrinterRotation> consume_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities<D>::SupportedBarcodeRotations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::PointOfService::PosPrinterRotation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities)->get_SupportedBarcodeRotations(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::PointOfService::PosPrinterRotation> consume_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities<D>::SupportedBitmapRotations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::PointOfService::PosPrinterRotation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities)->get_SupportedBitmapRotations(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_ILineDisplay<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplay)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::LineDisplayCapabilities consume_Windows_Devices_PointOfService_ILineDisplay<D>::Capabilities() const
{
    Windows::Devices::PointOfService::LineDisplayCapabilities value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplay)->get_Capabilities(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_ILineDisplay<D>::PhysicalDeviceName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplay)->get_PhysicalDeviceName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_ILineDisplay<D>::PhysicalDeviceDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplay)->get_PhysicalDeviceDescription(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_ILineDisplay<D>::DeviceControlDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplay)->get_DeviceControlDescription(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_ILineDisplay<D>::DeviceControlVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplay)->get_DeviceControlVersion(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_ILineDisplay<D>::DeviceServiceVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplay)->get_DeviceServiceVersion(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedLineDisplay> consume_Windows_Devices_PointOfService_ILineDisplay<D>::ClaimAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedLineDisplay> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplay)->ClaimAsync(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::IsStatisticsReportingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_IsStatisticsReportingSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::IsStatisticsUpdatingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_IsStatisticsUpdatingSupported(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::UnifiedPosPowerReportingType consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::PowerReportingType() const
{
    Windows::Devices::PointOfService::UnifiedPosPowerReportingType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_PowerReportingType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::CanChangeScreenSize() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_CanChangeScreenSize(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::CanDisplayBitmaps() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_CanDisplayBitmaps(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::CanReadCharacterAtCursor() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_CanReadCharacterAtCursor(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::CanMapCharacterSets() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_CanMapCharacterSets(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::CanDisplayCustomGlyphs() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_CanDisplayCustomGlyphs(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::CanReverse() const
{
    Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_CanReverse(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::CanBlink() const
{
    Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_CanBlink(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::CanChangeBlinkRate() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_CanChangeBlinkRate(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::IsBrightnessSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_IsBrightnessSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::IsCursorSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_IsCursorSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::IsHorizontalMarqueeSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_IsHorizontalMarqueeSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::IsVerticalMarqueeSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_IsVerticalMarqueeSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::IsInterCharacterWaitSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_IsInterCharacterWaitSupported(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::SupportedDescriptors() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_SupportedDescriptors(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>::SupportedWindows() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayCapabilities)->get_SupportedWindows(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplay> consume_Windows_Devices_PointOfService_ILineDisplayStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplay> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayStatics)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplay> consume_Windows_Devices_PointOfService_ILineDisplayStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplay> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayStatics)->GetDefaultAsync(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_ILineDisplayStatics<D>::GetDeviceSelector() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayStatics)->GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_ILineDisplayStatics<D>::GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayStatics)->GetDeviceSelectorWithConnectionTypes(get_abi(connectionTypes), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_Devices_PointOfService_ILineDisplayWindow<D>::SizeInCharacters() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayWindow)->get_SizeInCharacters(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_PointOfService_ILineDisplayWindow<D>::InterCharacterWaitInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayWindow)->get_InterCharacterWaitInterval(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_ILineDisplayWindow<D>::InterCharacterWaitInterval(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayWindow)->put_InterCharacterWaitInterval(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_ILineDisplayWindow<D>::TryRefreshAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayWindow)->TryRefreshAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_ILineDisplayWindow<D>::TryDisplayTextAsync(param::hstring const& text, Windows::Devices::PointOfService::LineDisplayTextAttribute const& displayAttribute) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayWindow)->TryDisplayTextAsync(get_abi(text), get_abi(displayAttribute), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_ILineDisplayWindow<D>::TryDisplayTextAsync(param::hstring const& text, Windows::Devices::PointOfService::LineDisplayTextAttribute const& displayAttribute, Windows::Foundation::Point const& startPosition) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayWindow)->TryDisplayTextAtPositionAsync(get_abi(text), get_abi(displayAttribute), get_abi(startPosition), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_ILineDisplayWindow<D>::TryDisplayTextAsync(param::hstring const& text) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayWindow)->TryDisplayTextNormalAsync(get_abi(text), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_ILineDisplayWindow<D>::TryScrollTextAsync(Windows::Devices::PointOfService::LineDisplayScrollDirection const& direction, uint32_t numberOfColumnsOrRows) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayWindow)->TryScrollTextAsync(get_abi(direction), numberOfColumnsOrRows, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_ILineDisplayWindow<D>::TryClearTextAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ILineDisplayWindow)->TryClearTextAsync(put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReader<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReader)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderCapabilities consume_Windows_Devices_PointOfService_IMagneticStripeReader<D>::Capabilities() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderCapabilities value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReader)->get_Capabilities(put_abi(value)));
    return value;
}

template <typename D> com_array<uint32_t> consume_Windows_Devices_PointOfService_IMagneticStripeReader<D>::SupportedCardTypes() const
{
    com_array<uint32_t> value;
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReader)->get_SupportedCardTypes(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationProtocol consume_Windows_Devices_PointOfService_IMagneticStripeReader<D>::DeviceAuthenticationProtocol() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationProtocol value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReader)->get_DeviceAuthenticationProtocol(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Devices_PointOfService_IMagneticStripeReader<D>::CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReader)->CheckHealthAsync(get_abi(level), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedMagneticStripeReader> consume_Windows_Devices_PointOfService_IMagneticStripeReader<D>::ClaimReaderAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedMagneticStripeReader> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReader)->ClaimReaderAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Devices_PointOfService_IMagneticStripeReader<D>::RetrieveStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReader)->RetrieveStatisticsAsync(get_abi(statisticsCategories), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType consume_Windows_Devices_PointOfService_IMagneticStripeReader<D>::GetErrorReportingType() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReader)->GetErrorReportingType(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IMagneticStripeReader<D>::StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::MagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReader)->add_StatusUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IMagneticStripeReader> consume_Windows_Devices_PointOfService_IMagneticStripeReader<D>::StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::MagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IMagneticStripeReader>(this, &abi_t<Windows::Devices::PointOfService::IMagneticStripeReader>::remove_StatusUpdated, StatusUpdated(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IMagneticStripeReader<D>::StatusUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReader)->remove_StatusUpdated(get_abi(token)));
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderReport consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::Report() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_Report(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::LicenseNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_LicenseNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::ExpirationDate() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_ExpirationDate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::Restrictions() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_Restrictions(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::Class() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_Class(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::Endorsements() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_Endorsements(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::BirthDate() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_BirthDate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::FirstName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_FirstName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::Surname() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_Surname(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::Suffix() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_Suffix(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::Gender() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_Gender(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::HairColor() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_HairColor(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::EyeColor() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_EyeColor(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::Height() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_Height(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::Weight() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_Weight(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::Address() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_Address(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::City() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_City(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::State() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_State(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>::PostalCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs)->get_PostalCode(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderReport consume_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs<D>::Report() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs)->get_Report(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs<D>::AccountNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs)->get_AccountNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs<D>::ExpirationDate() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs)->get_ExpirationDate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs<D>::ServiceCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs)->get_ServiceCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs)->get_Title(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs<D>::FirstName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs)->get_FirstName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs<D>::MiddleInitial() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs)->get_MiddleInitial(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs<D>::Surname() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs)->get_Surname(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs<D>::Suffix() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs)->get_Suffix(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities<D>::CardAuthentication() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities)->get_CardAuthentication(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities<D>::SupportedEncryptionAlgorithms() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities)->get_SupportedEncryptionAlgorithms(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationLevel consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities<D>::AuthenticationLevel() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationLevel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities)->get_AuthenticationLevel(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities<D>::IsIsoSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities)->get_IsIsoSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities<D>::IsJisOneSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities)->get_IsJisOneSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities<D>::IsJisTwoSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities)->get_IsJisTwoSupported(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::UnifiedPosPowerReportingType consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities<D>::PowerReportingType() const
{
    Windows::Devices::PointOfService::UnifiedPosPowerReportingType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities)->get_PowerReportingType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities<D>::IsStatisticsReportingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities)->get_IsStatisticsReportingSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities<D>::IsStatisticsUpdatingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities)->get_IsStatisticsUpdatingSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities<D>::IsTrackDataMaskingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities)->get_IsTrackDataMaskingSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities<D>::IsTransmitSentinelsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities)->get_IsTransmitSentinelsSupported(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IMagneticStripeReaderCardTypesStatics<D>::Unknown() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics)->get_Unknown(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IMagneticStripeReaderCardTypesStatics<D>::Bank() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics)->get_Bank(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IMagneticStripeReaderCardTypesStatics<D>::Aamva() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics)->get_Aamva(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IMagneticStripeReaderCardTypesStatics<D>::ExtendedBase() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics)->get_ExtendedBase(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IMagneticStripeReaderEncryptionAlgorithmsStatics<D>::None() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics)->get_None(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IMagneticStripeReaderEncryptionAlgorithmsStatics<D>::TripleDesDukpt() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics)->get_TripleDesDukpt(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IMagneticStripeReaderEncryptionAlgorithmsStatics<D>::ExtendedBase() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics)->get_ExtendedBase(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType consume_Windows_Devices_PointOfService_IMagneticStripeReaderErrorOccurredEventArgs<D>::Track1Status() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs)->get_Track1Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType consume_Windows_Devices_PointOfService_IMagneticStripeReaderErrorOccurredEventArgs<D>::Track2Status() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs)->get_Track2Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType consume_Windows_Devices_PointOfService_IMagneticStripeReaderErrorOccurredEventArgs<D>::Track3Status() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs)->get_Track3Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType consume_Windows_Devices_PointOfService_IMagneticStripeReaderErrorOccurredEventArgs<D>::Track4Status() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs)->get_Track4Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::UnifiedPosErrorData consume_Windows_Devices_PointOfService_IMagneticStripeReaderErrorOccurredEventArgs<D>::ErrorData() const
{
    Windows::Devices::PointOfService::UnifiedPosErrorData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs)->get_ErrorData(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderReport consume_Windows_Devices_PointOfService_IMagneticStripeReaderErrorOccurredEventArgs<D>::PartialInputData() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs)->get_PartialInputData(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IMagneticStripeReaderReport<D>::CardType() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderReport)->get_CardType(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderTrackData consume_Windows_Devices_PointOfService_IMagneticStripeReaderReport<D>::Track1() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderTrackData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderReport)->get_Track1(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderTrackData consume_Windows_Devices_PointOfService_IMagneticStripeReaderReport<D>::Track2() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderTrackData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderReport)->get_Track2(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderTrackData consume_Windows_Devices_PointOfService_IMagneticStripeReaderReport<D>::Track3() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderTrackData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderReport)->get_Track3(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderTrackData consume_Windows_Devices_PointOfService_IMagneticStripeReaderReport<D>::Track4() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderTrackData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderReport)->get_Track4(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> consume_Windows_Devices_PointOfService_IMagneticStripeReaderReport<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderReport)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_PointOfService_IMagneticStripeReaderReport<D>::CardAuthenticationData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderReport)->get_CardAuthenticationData(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IMagneticStripeReaderReport<D>::CardAuthenticationDataLength() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderReport)->get_CardAuthenticationDataLength(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_PointOfService_IMagneticStripeReaderReport<D>::AdditionalSecurityInformation() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderReport)->get_AdditionalSecurityInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::MagneticStripeReader> consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::MagneticStripeReader> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderStatics)->GetDefaultAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::MagneticStripeReader> consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::MagneticStripeReader> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderStatics)->FromIdAsync(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatics2<D>::GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderStatics2)->GetDeviceSelectorWithConnectionTypes(get_abi(connectionTypes), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderStatus consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatusUpdatedEventArgs<D>::Status() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatusUpdatedEventArgs<D>::ExtendedStatus() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs)->get_ExtendedStatus(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_PointOfService_IMagneticStripeReaderTrackData<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderTrackData)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_PointOfService_IMagneticStripeReaderTrackData<D>::DiscretionaryData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderTrackData)->get_DiscretionaryData(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_PointOfService_IMagneticStripeReaderTrackData<D>::EncryptedData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderTrackData)->get_EncryptedData(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::MagneticStripeReaderReport consume_Windows_Devices_PointOfService_IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs<D>::Report() const
{
    Windows::Devices::PointOfService::MagneticStripeReaderReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs)->get_Report(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IPosPrinter<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinter)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::PosPrinterCapabilities consume_Windows_Devices_PointOfService_IPosPrinter<D>::Capabilities() const
{
    Windows::Devices::PointOfService::PosPrinterCapabilities value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinter)->get_Capabilities(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Devices_PointOfService_IPosPrinter<D>::SupportedCharacterSets() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinter)->get_SupportedCharacterSets(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Devices_PointOfService_IPosPrinter<D>::SupportedTypeFaces() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinter)->get_SupportedTypeFaces(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::PosPrinterStatus consume_Windows_Devices_PointOfService_IPosPrinter<D>::Status() const
{
    Windows::Devices::PointOfService::PosPrinterStatus value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinter)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedPosPrinter> consume_Windows_Devices_PointOfService_IPosPrinter<D>::ClaimPrinterAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedPosPrinter> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinter)->ClaimPrinterAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Devices_PointOfService_IPosPrinter<D>::CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinter)->CheckHealthAsync(get_abi(level), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Devices_PointOfService_IPosPrinter<D>::GetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinter)->GetStatisticsAsync(get_abi(statisticsCategories), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Devices_PointOfService_IPosPrinter<D>::StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::PosPrinter, Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinter)->add_StatusUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::IPosPrinter> consume_Windows_Devices_PointOfService_IPosPrinter<D>::StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::PosPrinter, Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::IPosPrinter>(this, &abi_t<Windows::Devices::PointOfService::IPosPrinter>::remove_StatusUpdated, StatusUpdated(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_IPosPrinter<D>::StatusUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinter)->remove_StatusUpdated(get_abi(token)));
}

template <typename D> Windows::Devices::PointOfService::UnifiedPosPowerReportingType consume_Windows_Devices_PointOfService_IPosPrinterCapabilities<D>::PowerReportingType() const
{
    Windows::Devices::PointOfService::UnifiedPosPowerReportingType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterCapabilities)->get_PowerReportingType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IPosPrinterCapabilities<D>::IsStatisticsReportingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterCapabilities)->get_IsStatisticsReportingSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IPosPrinterCapabilities<D>::IsStatisticsUpdatingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterCapabilities)->get_IsStatisticsUpdatingSupported(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IPosPrinterCapabilities<D>::DefaultCharacterSet() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterCapabilities)->get_DefaultCharacterSet(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IPosPrinterCapabilities<D>::HasCoverSensor() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterCapabilities)->get_HasCoverSensor(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IPosPrinterCapabilities<D>::CanMapCharacterSet() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterCapabilities)->get_CanMapCharacterSet(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IPosPrinterCapabilities<D>::IsTransactionSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterCapabilities)->get_IsTransactionSupported(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::ReceiptPrinterCapabilities consume_Windows_Devices_PointOfService_IPosPrinterCapabilities<D>::Receipt() const
{
    Windows::Devices::PointOfService::ReceiptPrinterCapabilities value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterCapabilities)->get_Receipt(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::SlipPrinterCapabilities consume_Windows_Devices_PointOfService_IPosPrinterCapabilities<D>::Slip() const
{
    Windows::Devices::PointOfService::SlipPrinterCapabilities value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterCapabilities)->get_Slip(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::JournalPrinterCapabilities consume_Windows_Devices_PointOfService_IPosPrinterCapabilities<D>::Journal() const
{
    Windows::Devices::PointOfService::JournalPrinterCapabilities value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterCapabilities)->get_Journal(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IPosPrinterCharacterSetIdsStatics<D>::Utf16LE() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics)->get_Utf16LE(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IPosPrinterCharacterSetIdsStatics<D>::Ascii() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics)->get_Ascii(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IPosPrinterCharacterSetIdsStatics<D>::Ansi() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics)->get_Ansi(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IPosPrinterJob<D>::Print(param::hstring const& data) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterJob)->Print(get_abi(data)));
}

template <typename D> void consume_Windows_Devices_PointOfService_IPosPrinterJob<D>::PrintLine(param::hstring const& data) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterJob)->PrintLine(get_abi(data)));
}

template <typename D> void consume_Windows_Devices_PointOfService_IPosPrinterJob<D>::PrintLine() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterJob)->PrintNewline());
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Devices_PointOfService_IPosPrinterJob<D>::ExecuteAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterJob)->ExecuteAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::PosPrinter> consume_Windows_Devices_PointOfService_IPosPrinterStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::PosPrinter> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterStatics)->GetDefaultAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::PosPrinter> consume_Windows_Devices_PointOfService_IPosPrinterStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::PosPrinter> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterStatics)->FromIdAsync(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IPosPrinterStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IPosPrinterStatics2<D>::GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterStatics2)->GetDeviceSelectorWithConnectionTypes(get_abi(connectionTypes), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::PosPrinterStatusKind consume_Windows_Devices_PointOfService_IPosPrinterStatus<D>::StatusKind() const
{
    Windows::Devices::PointOfService::PosPrinterStatusKind value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterStatus)->get_StatusKind(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IPosPrinterStatus<D>::ExtendedStatus() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterStatus)->get_ExtendedStatus(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::PosPrinterStatus consume_Windows_Devices_PointOfService_IPosPrinterStatusUpdatedEventArgs<D>::Status() const
{
    Windows::Devices::PointOfService::PosPrinterStatus value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::SetBarcodeRotation(Windows::Devices::PointOfService::PosPrinterRotation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->SetBarcodeRotation(get_abi(value)));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::SetPrintRotation(Windows::Devices::PointOfService::PosPrinterRotation const& value, bool includeBitmaps) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->SetPrintRotation(get_abi(value), includeBitmaps));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::SetPrintArea(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->SetPrintArea(get_abi(value)));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::SetBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::BitmapFrame const& bitmap, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->SetBitmap(bitmapNumber, get_abi(bitmap), get_abi(alignment)));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::SetBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::BitmapFrame const& bitmap, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment, uint32_t width) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->SetBitmapCustomWidthStandardAlign(bitmapNumber, get_abi(bitmap), get_abi(alignment), width));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::SetCustomAlignedBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::BitmapFrame const& bitmap, uint32_t alignmentDistance) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->SetCustomAlignedBitmap(bitmapNumber, get_abi(bitmap), alignmentDistance));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::SetCustomAlignedBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::BitmapFrame const& bitmap, uint32_t alignmentDistance, uint32_t width) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->SetBitmapCustomWidthCustomAlign(bitmapNumber, get_abi(bitmap), alignmentDistance, width));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::PrintSavedBitmap(uint32_t bitmapNumber) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->PrintSavedBitmap(bitmapNumber));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::DrawRuledLine(param::hstring const& positionList, Windows::Devices::PointOfService::PosPrinterLineDirection const& lineDirection, uint32_t lineWidth, Windows::Devices::PointOfService::PosPrinterLineStyle const& lineStyle, uint32_t lineColor) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->DrawRuledLine(get_abi(positionList), get_abi(lineDirection), lineWidth, get_abi(lineStyle), lineColor));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::PrintBarcode(param::hstring const& data, uint32_t symbology, uint32_t height, uint32_t width, Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition const& textPosition, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->PrintBarcode(get_abi(data), symbology, height, width, get_abi(textPosition), get_abi(alignment)));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::PrintBarcodeCustomAlign(param::hstring const& data, uint32_t symbology, uint32_t height, uint32_t width, Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition const& textPosition, uint32_t alignmentDistance) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->PrintBarcodeCustomAlign(get_abi(data), symbology, height, width, get_abi(textPosition), alignmentDistance));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::PrintBitmap(Windows::Graphics::Imaging::BitmapFrame const& bitmap, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->PrintBitmap(get_abi(bitmap), get_abi(alignment)));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::PrintBitmap(Windows::Graphics::Imaging::BitmapFrame const& bitmap, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment, uint32_t width) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->PrintBitmapCustomWidthStandardAlign(get_abi(bitmap), get_abi(alignment), width));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::PrintCustomAlignedBitmap(Windows::Graphics::Imaging::BitmapFrame const& bitmap, uint32_t alignmentDistance) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->PrintCustomAlignedBitmap(get_abi(bitmap), alignmentDistance));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>::PrintCustomAlignedBitmap(Windows::Graphics::Imaging::BitmapFrame const& bitmap, uint32_t alignmentDistance, uint32_t width) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptOrSlipJob)->PrintBitmapCustomWidthCustomAlign(get_abi(bitmap), alignmentDistance, width));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptPrintJob<D>::MarkFeed(Windows::Devices::PointOfService::PosPrinterMarkFeedKind const& kind) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptPrintJob)->MarkFeed(get_abi(kind)));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptPrintJob<D>::CutPaper(double percentage) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptPrintJob)->CutPaper(percentage));
}

template <typename D> void consume_Windows_Devices_PointOfService_IReceiptPrintJob<D>::CutPaper() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptPrintJob)->CutPaperDefault());
}

template <typename D> bool consume_Windows_Devices_PointOfService_IReceiptPrinterCapabilities<D>::CanCutPaper() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptPrinterCapabilities)->get_CanCutPaper(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_IReceiptPrinterCapabilities<D>::IsStampSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptPrinterCapabilities)->get_IsStampSupported(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::PosPrinterMarkFeedCapabilities consume_Windows_Devices_PointOfService_IReceiptPrinterCapabilities<D>::MarkFeedCapabilities() const
{
    Windows::Devices::PointOfService::PosPrinterMarkFeedCapabilities value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IReceiptPrinterCapabilities)->get_MarkFeedCapabilities(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ISlipPrinterCapabilities<D>::IsFullLengthSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ISlipPrinterCapabilities)->get_IsFullLengthSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_PointOfService_ISlipPrinterCapabilities<D>::IsBothSidesPrintingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::ISlipPrinterCapabilities)->get_IsBothSidesPrintingSupported(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_IUnifiedPosErrorData<D>::Message() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IUnifiedPosErrorData)->get_Message(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::UnifiedPosErrorSeverity consume_Windows_Devices_PointOfService_IUnifiedPosErrorData<D>::Severity() const
{
    Windows::Devices::PointOfService::UnifiedPosErrorSeverity value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IUnifiedPosErrorData)->get_Severity(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::PointOfService::UnifiedPosErrorReason consume_Windows_Devices_PointOfService_IUnifiedPosErrorData<D>::Reason() const
{
    Windows::Devices::PointOfService::UnifiedPosErrorReason value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IUnifiedPosErrorData)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_IUnifiedPosErrorData<D>::ExtendedReason() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::IUnifiedPosErrorData)->get_ExtendedReason(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IBarcodeScanner> : produce_base<D, Windows::Devices::PointOfService::IBarcodeScanner>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Capabilities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Capabilities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClaimScannerAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ClaimScannerAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CheckHealthAsync(abi_t<Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel> level, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CheckHealthAsync(*reinterpret_cast<Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const*>(&level)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSupportedSymbologiesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetSupportedSymbologiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsSymbologySupportedAsync(uint32_t barcodeSymbology, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().IsSymbologySupportedAsync(barcodeSymbology));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetrieveStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RetrieveStatisticsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&statisticsCategories)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSupportedProfiles(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetSupportedProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsProfileSupported(HSTRING profile, bool* isSupported) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isSupported = detach_abi(this->shim().IsProfileSupported(*reinterpret_cast<hstring const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StatusUpdated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StatusUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::BarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusUpdated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IBarcodeScanner2> : produce_base<D, Windows::Devices::PointOfService::IBarcodeScanner2>
{
    HRESULT __stdcall get_VideoDeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoDeviceId());
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
struct produce<D, Windows::Devices::PointOfService::IBarcodeScannerCapabilities> : produce_base<D, Windows::Devices::PointOfService::IBarcodeScannerCapabilities>
{
    HRESULT __stdcall get_PowerReportingType(abi_t<Windows::Devices::PointOfService::UnifiedPosPowerReportingType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerReportingType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStatisticsReportingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStatisticsReportingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStatisticsUpdatingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsImagePreviewSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsImagePreviewSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IBarcodeScannerCapabilities1> : produce_base<D, Windows::Devices::PointOfService::IBarcodeScannerCapabilities1>
{
    HRESULT __stdcall get_IsSoftwareTriggerSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSoftwareTriggerSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs> : produce_base<D, Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs>
{
    HRESULT __stdcall get_Report(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Report());
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
struct produce<D, Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs> : produce_base<D, Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs>
{
    HRESULT __stdcall get_PartialInputData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PartialInputData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRetriable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRetriable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorData());
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
struct produce<D, Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs> : produce_base<D, Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs>
{
    HRESULT __stdcall get_Preview(::IUnknown** preview) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *preview = detach_abi(this->shim().Preview());
            return S_OK;
        }
        catch (...)
        {
            *preview = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IBarcodeScannerReport> : produce_base<D, Windows::Devices::PointOfService::IBarcodeScannerReport>
{
    HRESULT __stdcall get_ScanDataType(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScanDataType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScanData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScanData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScanDataLabel(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScanDataLabel());
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
struct produce<D, Windows::Devices::PointOfService::IBarcodeScannerStatics> : produce_base<D, Windows::Devices::PointOfService::IBarcodeScannerStatics>
{
    HRESULT __stdcall GetDefaultAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector());
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
struct produce<D, Windows::Devices::PointOfService::IBarcodeScannerStatics2> : produce_base<D, Windows::Devices::PointOfService::IBarcodeScannerStatics2>
{
    HRESULT __stdcall GetDeviceSelectorWithConnectionTypes(abi_t<Windows::Devices::PointOfService::PosConnectionTypes> connectionTypes, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Devices::PointOfService::PosConnectionTypes const*>(&connectionTypes)));
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
struct produce<D, Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs> : produce_base<D, Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::PointOfService::BarcodeScannerStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedStatus(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics> : produce_base<D, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>
{
    HRESULT __stdcall get_Unknown(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Unknown());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ean8(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ean8());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ean8Add2(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ean8Add2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ean8Add5(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ean8Add5());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Eanv(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Eanv());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EanvAdd2(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EanvAdd2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EanvAdd5(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EanvAdd5());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ean13(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ean13());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ean13Add2(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ean13Add2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ean13Add5(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ean13Add5());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Isbn(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Isbn());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsbnAdd5(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsbnAdd5());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ismn(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ismn());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsmnAdd2(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsmnAdd2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsmnAdd5(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsmnAdd5());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Issn(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Issn());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IssnAdd2(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IssnAdd2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IssnAdd5(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IssnAdd5());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ean99(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ean99());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ean99Add2(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ean99Add2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ean99Add5(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ean99Add5());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Upca(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Upca());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpcaAdd2(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UpcaAdd2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpcaAdd5(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UpcaAdd5());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Upce(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Upce());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpceAdd2(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UpceAdd2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpceAdd5(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UpceAdd5());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpcCoupon(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UpcCoupon());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TfStd(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TfStd());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TfDis(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TfDis());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TfInt(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TfInt());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TfInd(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TfInd());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TfMat(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TfMat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TfIata(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TfIata());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gs1DatabarType1(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gs1DatabarType1());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gs1DatabarType2(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gs1DatabarType2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gs1DatabarType3(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gs1DatabarType3());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Code39(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Code39());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Code39Ex(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Code39Ex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Trioptic39(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Trioptic39());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Code32(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Code32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pzn(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pzn());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Code93(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Code93());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Code93Ex(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Code93Ex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Code128(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Code128());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gs1128(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gs1128());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gs1128Coupon(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gs1128Coupon());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UccEan128(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UccEan128());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sisac(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sisac());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Isbt(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Isbt());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Codabar(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Codabar());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Code11(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Code11());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Msi(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Msi());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Plessey(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Plessey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Telepen(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Telepen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Code16k(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Code16k());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CodablockA(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CodablockA());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CodablockF(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CodablockF());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Codablock128(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Codablock128());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Code49(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Code49());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Aztec(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Aztec());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataCode(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataMatrix(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataMatrix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HanXin(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HanXin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Maxicode(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Maxicode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MicroPdf417(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MicroPdf417());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MicroQr(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MicroQr());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pdf417(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pdf417());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Qr(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Qr());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MsTag(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MsTag());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ccab(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ccab());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ccc(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ccc());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tlc39(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tlc39());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AusPost(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AusPost());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanPost(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanPost());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChinaPost(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChinaPost());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DutchKix(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DutchKix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InfoMail(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InfoMail());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItalianPost25(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItalianPost25());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItalianPost39(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItalianPost39());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JapanPost(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().JapanPost());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KoreanPost(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KoreanPost());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SwedenPost(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SwedenPost());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UkPost(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UkPost());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsIntelligent(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UsIntelligent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsIntelligentPkg(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UsIntelligentPkg());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsPlanet(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UsPlanet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsPostNet(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UsPostNet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Us4StateFics(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Us4StateFics());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OcrA(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OcrA());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OcrB(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OcrB());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Micr(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Micr());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedBase(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedBase());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetName(uint32_t scanDataType, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetName(scanDataType));
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
struct produce<D, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2> : produce_base<D, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2>
{
    HRESULT __stdcall get_Gs1DWCode(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gs1DWCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IBarcodeSymbologyAttributes> : produce_base<D, Windows::Devices::PointOfService::IBarcodeSymbologyAttributes>
{
    HRESULT __stdcall get_IsCheckDigitValidationEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCheckDigitValidationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsCheckDigitValidationEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCheckDigitValidationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCheckDigitValidationSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCheckDigitValidationSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCheckDigitTransmissionEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCheckDigitTransmissionEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsCheckDigitTransmissionEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCheckDigitTransmissionEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCheckDigitTransmissionSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCheckDigitTransmissionSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecodeLength1(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DecodeLength1());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DecodeLength1(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecodeLength1(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecodeLength2(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DecodeLength2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DecodeLength2(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecodeLength2(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecodeLengthKind(abi_t<Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DecodeLengthKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DecodeLengthKind(abi_t<Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecodeLengthKind(*reinterpret_cast<Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDecodeLengthSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDecodeLengthSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::ICashDrawer> : produce_base<D, Windows::Devices::PointOfService::ICashDrawer>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Capabilities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Capabilities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDrawerOpen(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDrawerOpen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DrawerEventSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DrawerEventSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClaimDrawerAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ClaimDrawerAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CheckHealthAsync(abi_t<Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel> level, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CheckHealthAsync(*reinterpret_cast<Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const*>(&level)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetStatisticsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&statisticsCategories)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StatusUpdated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StatusUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawer, Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusUpdated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::ICashDrawerCapabilities> : produce_base<D, Windows::Devices::PointOfService::ICashDrawerCapabilities>
{
    HRESULT __stdcall get_PowerReportingType(abi_t<Windows::Devices::PointOfService::UnifiedPosPowerReportingType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerReportingType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStatisticsReportingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStatisticsReportingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStatisticsUpdatingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStatusReportingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStatusReportingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStatusMultiDrawerDetectSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStatusMultiDrawerDetectSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDrawerOpenSensorAvailable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDrawerOpenSensorAvailable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::ICashDrawerCloseAlarm> : produce_base<D, Windows::Devices::PointOfService::ICashDrawerCloseAlarm>
{
    HRESULT __stdcall put_AlarmTimeout(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlarmTimeout(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlarmTimeout(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlarmTimeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BeepFrequency(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeepFrequency(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BeepFrequency(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BeepFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BeepDuration(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeepDuration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BeepDuration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BeepDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BeepDelay(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeepDelay(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BeepDelay(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BeepDelay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AlarmTimeoutExpired(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AlarmTimeoutExpired(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerCloseAlarm, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AlarmTimeoutExpired(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlarmTimeoutExpired(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::ICashDrawerEventSource> : produce_base<D, Windows::Devices::PointOfService::ICashDrawerEventSource>
{
    HRESULT __stdcall add_DrawerClosed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DrawerClosed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerClosedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DrawerClosed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawerClosed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DrawerOpened(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DrawerOpened(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerOpenedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DrawerOpened(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawerOpened(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs> : produce_base<D, Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs>
{
    HRESULT __stdcall get_CashDrawer(::IUnknown** drawer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *drawer = detach_abi(this->shim().CashDrawer());
            return S_OK;
        }
        catch (...)
        {
            *drawer = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::ICashDrawerStatics> : produce_base<D, Windows::Devices::PointOfService::ICashDrawerStatics>
{
    HRESULT __stdcall GetDefaultAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector());
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
struct produce<D, Windows::Devices::PointOfService::ICashDrawerStatics2> : produce_base<D, Windows::Devices::PointOfService::ICashDrawerStatics2>
{
    HRESULT __stdcall GetDeviceSelectorWithConnectionTypes(abi_t<Windows::Devices::PointOfService::PosConnectionTypes> connectionTypes, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Devices::PointOfService::PosConnectionTypes const*>(&connectionTypes)));
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
struct produce<D, Windows::Devices::PointOfService::ICashDrawerStatus> : produce_base<D, Windows::Devices::PointOfService::ICashDrawerStatus>
{
    HRESULT __stdcall get_StatusKind(abi_t<Windows::Devices::PointOfService::CashDrawerStatusKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StatusKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedStatus(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs> : produce_base<D, Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs>
{
    HRESULT __stdcall get_Status(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
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
struct produce<D, Windows::Devices::PointOfService::IClaimedBarcodeScanner> : produce_base<D, Windows::Devices::PointOfService::IClaimedBarcodeScanner>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsDisabledOnDataReceived(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDisabledOnDataReceived(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDisabledOnDataReceived(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDisabledOnDataReceived());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsDecodeDataEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDecodeDataEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDecodeDataEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDecodeDataEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnableAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().EnableAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DisableAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DisableAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetainDevice() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RetainDevice();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetActiveSymbologiesAsync(::IUnknown* symbologies, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SetActiveSymbologiesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<uint32_t> const*>(&symbologies)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResetStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ResetStatisticsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&statisticsCategories)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateStatisticsAsync(::IUnknown* statistics, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UpdateStatisticsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const*>(&statistics)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetActiveProfileAsync(HSTRING profile, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SetActiveProfileAsync(*reinterpret_cast<hstring const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DataReceived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DataReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DataReceived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TriggerPressed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().TriggerPressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TriggerPressed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TriggerPressed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TriggerReleased(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().TriggerReleased(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TriggerReleased(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TriggerReleased(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReleaseDeviceRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReleaseDeviceRequested(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReleaseDeviceRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReleaseDeviceRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ImagePreviewReceived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ImagePreviewReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ImagePreviewReceived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImagePreviewReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ErrorOccurred(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ErrorOccurred(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ErrorOccurred(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ErrorOccurred(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IClaimedBarcodeScanner1> : produce_base<D, Windows::Devices::PointOfService::IClaimedBarcodeScanner1>
{
    HRESULT __stdcall StartSoftwareTriggerAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().StartSoftwareTriggerAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopSoftwareTriggerAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().StopSoftwareTriggerAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IClaimedBarcodeScanner2> : produce_base<D, Windows::Devices::PointOfService::IClaimedBarcodeScanner2>
{
    HRESULT __stdcall GetSymbologyAttributesAsync(uint32_t barcodeSymbology, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSymbologyAttributesAsync(barcodeSymbology));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetSymbologyAttributesAsync(uint32_t barcodeSymbology, ::IUnknown* attributes, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SetSymbologyAttributesAsync(barcodeSymbology, *reinterpret_cast<Windows::Devices::PointOfService::BarcodeSymbologyAttributes const*>(&attributes)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IClaimedCashDrawer> : produce_base<D, Windows::Devices::PointOfService::IClaimedCashDrawer>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDrawerOpen(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDrawerOpen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CloseAlarm(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CloseAlarm());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenDrawerAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().OpenDrawerAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnableAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().EnableAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DisableAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DisableAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetainDeviceAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RetainDeviceAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResetStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ResetStatisticsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&statisticsCategories)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateStatisticsAsync(::IUnknown* statistics, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UpdateStatisticsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const*>(&statistics)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReleaseDeviceRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReleaseDeviceRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedCashDrawer, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReleaseDeviceRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReleaseDeviceRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IClaimedJournalPrinter> : produce_base<D, Windows::Devices::PointOfService::IClaimedJournalPrinter>
{
    HRESULT __stdcall CreateJob(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateJob());
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
struct produce<D, Windows::Devices::PointOfService::IClaimedLineDisplay> : produce_base<D, Windows::Devices::PointOfService::IClaimedLineDisplay>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Capabilities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Capabilities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalDeviceName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhysicalDeviceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalDeviceDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhysicalDeviceDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceControlDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceControlDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceControlVersion(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceControlVersion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceServiceVersion(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceServiceVersion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultWindow(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultWindow());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetainDevice() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RetainDevice();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReleaseDeviceRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReleaseDeviceRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedLineDisplay, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReleaseDeviceRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReleaseDeviceRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IClaimedLineDisplayStatics> : produce_base<D, Windows::Devices::PointOfService::IClaimedLineDisplayStatics>
{
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorWithConnectionTypes(abi_t<Windows::Devices::PointOfService::PosConnectionTypes> connectionTypes, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Devices::PointOfService::PosConnectionTypes const*>(&connectionTypes)));
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
struct produce<D, Windows::Devices::PointOfService::IClaimedMagneticStripeReader> : produce_base<D, Windows::Devices::PointOfService::IClaimedMagneticStripeReader>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsDisabledOnDataReceived(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDisabledOnDataReceived(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDisabledOnDataReceived(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDisabledOnDataReceived());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsDecodeDataEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDecodeDataEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDecodeDataEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDecodeDataEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDeviceAuthenticated(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDeviceAuthenticated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataEncryptionAlgorithm(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataEncryptionAlgorithm(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataEncryptionAlgorithm(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataEncryptionAlgorithm());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TracksToRead(abi_t<Windows::Devices::PointOfService::MagneticStripeReaderTrackIds> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TracksToRead(*reinterpret_cast<Windows::Devices::PointOfService::MagneticStripeReaderTrackIds const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TracksToRead(abi_t<Windows::Devices::PointOfService::MagneticStripeReaderTrackIds>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TracksToRead());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsTransmitSentinelsEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsTransmitSentinelsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTransmitSentinelsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTransmitSentinelsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnableAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().EnableAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DisableAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DisableAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetainDevice() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RetainDevice();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetErrorReportingType(abi_t<Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetErrorReportingType(*reinterpret_cast<Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetrieveDeviceAuthenticationDataAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RetrieveDeviceAuthenticationDataAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AuthenticateDeviceAsync(uint32_t __responseTokenSize, uint8_t* responseToken, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AuthenticateDeviceAsync(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(responseToken), reinterpret_cast<uint8_t const *>(responseToken) + __responseTokenSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeAuthenticateDeviceAsync(uint32_t __responseTokenSize, uint8_t* responseToken, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DeAuthenticateDeviceAsync(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(responseToken), reinterpret_cast<uint8_t const *>(responseToken) + __responseTokenSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateKeyAsync(HSTRING key, HSTRING keyName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UpdateKeyAsync(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<hstring const*>(&keyName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResetStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ResetStatisticsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&statisticsCategories)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateStatisticsAsync(::IUnknown* statistics, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UpdateStatisticsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const*>(&statistics)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BankCardDataReceived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().BankCardDataReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BankCardDataReceived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BankCardDataReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AamvaCardDataReceived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AamvaCardDataReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AamvaCardDataReceived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AamvaCardDataReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VendorSpecificDataReceived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VendorSpecificDataReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VendorSpecificDataReceived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VendorSpecificDataReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReleaseDeviceRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReleaseDeviceRequested(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReleaseDeviceRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReleaseDeviceRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ErrorOccurred(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ErrorOccurred(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ErrorOccurred(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ErrorOccurred(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IClaimedPosPrinter> : produce_base<D, Windows::Devices::PointOfService::IClaimedPosPrinter>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CharacterSet(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharacterSet(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CharacterSet(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharacterSet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCoverOpen(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCoverOpen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsCharacterSetMappingEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCharacterSetMappingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCharacterSetMappingEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCharacterSetMappingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MapMode(abi_t<Windows::Devices::PointOfService::PosPrinterMapMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapMode(*reinterpret_cast<Windows::Devices::PointOfService::PosPrinterMapMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MapMode(abi_t<Windows::Devices::PointOfService::PosPrinterMapMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MapMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Receipt(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Receipt());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Slip(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Slip());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Journal(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Journal());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnableAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().EnableAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DisableAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DisableAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetainDeviceAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RetainDeviceAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResetStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ResetStatisticsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&statisticsCategories)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateStatisticsAsync(::IUnknown* statistics, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UpdateStatisticsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const*>(&statistics)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReleaseDeviceRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReleaseDeviceRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedPosPrinter, Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReleaseDeviceRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReleaseDeviceRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IClaimedReceiptPrinter> : produce_base<D, Windows::Devices::PointOfService::IClaimedReceiptPrinter>
{
    HRESULT __stdcall get_SidewaysMaxLines(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SidewaysMaxLines());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidewaysMaxChars(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SidewaysMaxChars());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinesToPaperCut(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LinesToPaperCut());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PageSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrintArea(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrintArea());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateJob(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateJob());
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
struct produce<D, Windows::Devices::PointOfService::IClaimedSlipPrinter> : produce_base<D, Windows::Devices::PointOfService::IClaimedSlipPrinter>
{
    HRESULT __stdcall get_SidewaysMaxLines(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SidewaysMaxLines());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidewaysMaxChars(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SidewaysMaxChars());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxLines(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxLines());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinesNearEndToEnd(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LinesNearEndToEnd());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrintSide(abi_t<Windows::Devices::PointOfService::PosPrinterPrintSide>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrintSide());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PageSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrintArea(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrintArea());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenJaws() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OpenJaws();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CloseJaws() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CloseJaws();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertSlipAsync(abi_t<Windows::Foundation::TimeSpan> timeout, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().InsertSlipAsync(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeout)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveSlipAsync(abi_t<Windows::Foundation::TimeSpan> timeout, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RemoveSlipAsync(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeout)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ChangePrintSide(abi_t<Windows::Devices::PointOfService::PosPrinterPrintSide> printSide) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChangePrintSide(*reinterpret_cast<Windows::Devices::PointOfService::PosPrinterPrintSide const*>(&printSide));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateJob(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateJob());
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
struct produce<D, Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation> : produce_base<D, Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
{
    HRESULT __stdcall put_CharactersPerLine(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharactersPerLine(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CharactersPerLine(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharactersPerLine());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LineHeight(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineHeight(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LineSpacing(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineSpacing(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineSpacing(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineSpacing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineWidth(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsLetterQuality(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsLetterQuality(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsLetterQuality(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsLetterQuality());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPaperNearEnd(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPaperNearEnd());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ColorCartridge(abi_t<Windows::Devices::PointOfService::PosPrinterColorCartridge> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorCartridge(*reinterpret_cast<Windows::Devices::PointOfService::PosPrinterColorCartridge const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorCartridge(abi_t<Windows::Devices::PointOfService::PosPrinterColorCartridge>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColorCartridge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCoverOpen(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCoverOpen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCartridgeRemoved(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCartridgeRemoved());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCartridgeEmpty(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCartridgeEmpty());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHeadCleaning(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsHeadCleaning());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPaperEmpty(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPaperEmpty());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsReadyToPrint(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsReadyToPrint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ValidateData(HSTRING data, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ValidateData(*reinterpret_cast<hstring const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities> : produce_base<D, Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>
{
    HRESULT __stdcall get_IsPrinterPresent(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPrinterPresent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDualColorSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDualColorSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorCartridgeCapabilities(abi_t<Windows::Devices::PointOfService::PosPrinterColorCapabilities>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColorCartridgeCapabilities());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CartridgeSensors(abi_t<Windows::Devices::PointOfService::PosPrinterCartridgeSensors>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CartridgeSensors());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBoldSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBoldSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsItalicSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsItalicSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsUnderlineSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsUnderlineSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDoubleHighPrintSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDoubleHighPrintSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDoubleWidePrintSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDoubleWidePrintSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDoubleHighDoubleWidePrintSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDoubleHighDoubleWidePrintSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPaperEmptySensorSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPaperEmptySensorSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPaperNearEndSensorSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPaperNearEndSensorSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedCharactersPerLine(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedCharactersPerLine());
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
struct produce<D, Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities> : produce_base<D, Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>
{
    HRESULT __stdcall get_IsBarcodeSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBarcodeSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBitmapSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBitmapSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsLeft90RotationSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsLeft90RotationSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRight90RotationSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRight90RotationSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Is180RotationSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Is180RotationSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPrintAreaSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPrintAreaSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RuledLineCapabilities(abi_t<Windows::Devices::PointOfService::PosPrinterRuledLineCapabilities>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RuledLineCapabilities());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedBarcodeRotations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedBarcodeRotations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedBitmapRotations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedBitmapRotations());
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
struct produce<D, Windows::Devices::PointOfService::IJournalPrinterCapabilities> : produce_base<D, Windows::Devices::PointOfService::IJournalPrinterCapabilities>
{};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::ILineDisplay> : produce_base<D, Windows::Devices::PointOfService::ILineDisplay>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Capabilities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Capabilities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalDeviceName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhysicalDeviceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalDeviceDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhysicalDeviceDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceControlDescription(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceControlDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceControlVersion(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceControlVersion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceServiceVersion(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceServiceVersion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClaimAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ClaimAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::ILineDisplayCapabilities> : produce_base<D, Windows::Devices::PointOfService::ILineDisplayCapabilities>
{
    HRESULT __stdcall get_IsStatisticsReportingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStatisticsReportingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStatisticsUpdatingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerReportingType(abi_t<Windows::Devices::PointOfService::UnifiedPosPowerReportingType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerReportingType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanChangeScreenSize(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanChangeScreenSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanDisplayBitmaps(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanDisplayBitmaps());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanReadCharacterAtCursor(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanReadCharacterAtCursor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanMapCharacterSets(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanMapCharacterSets());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanDisplayCustomGlyphs(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanDisplayCustomGlyphs());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanReverse(abi_t<Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanReverse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanBlink(abi_t<Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanBlink());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanChangeBlinkRate(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanChangeBlinkRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBrightnessSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBrightnessSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCursorSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCursorSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHorizontalMarqueeSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsHorizontalMarqueeSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsVerticalMarqueeSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsVerticalMarqueeSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInterCharacterWaitSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInterCharacterWaitSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedDescriptors(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedDescriptors());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedWindows(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedWindows());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::ILineDisplayStatics> : produce_base<D, Windows::Devices::PointOfService::ILineDisplayStatics>
{
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorWithConnectionTypes(abi_t<Windows::Devices::PointOfService::PosConnectionTypes> connectionTypes, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Devices::PointOfService::PosConnectionTypes const*>(&connectionTypes)));
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
struct produce<D, Windows::Devices::PointOfService::ILineDisplayWindow> : produce_base<D, Windows::Devices::PointOfService::ILineDisplayWindow>
{
    HRESULT __stdcall get_SizeInCharacters(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SizeInCharacters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterCharacterWaitInterval(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterCharacterWaitInterval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InterCharacterWaitInterval(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InterCharacterWaitInterval(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryRefreshAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryRefreshAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryDisplayTextAsync(HSTRING text, abi_t<Windows::Devices::PointOfService::LineDisplayTextAttribute> displayAttribute, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryDisplayTextAsync(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Windows::Devices::PointOfService::LineDisplayTextAttribute const*>(&displayAttribute)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryDisplayTextAtPositionAsync(HSTRING text, abi_t<Windows::Devices::PointOfService::LineDisplayTextAttribute> displayAttribute, abi_t<Windows::Foundation::Point> startPosition, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryDisplayTextAsync(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Windows::Devices::PointOfService::LineDisplayTextAttribute const*>(&displayAttribute), *reinterpret_cast<Windows::Foundation::Point const*>(&startPosition)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryDisplayTextNormalAsync(HSTRING text, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryDisplayTextAsync(*reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryScrollTextAsync(abi_t<Windows::Devices::PointOfService::LineDisplayScrollDirection> direction, uint32_t numberOfColumnsOrRows, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryScrollTextAsync(*reinterpret_cast<Windows::Devices::PointOfService::LineDisplayScrollDirection const*>(&direction), numberOfColumnsOrRows));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryClearTextAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryClearTextAsync());
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
struct produce<D, Windows::Devices::PointOfService::IMagneticStripeReader> : produce_base<D, Windows::Devices::PointOfService::IMagneticStripeReader>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Capabilities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Capabilities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedCardTypes(uint32_t* __valueSize, uint32_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().SupportedCardTypes());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceAuthenticationProtocol(abi_t<Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationProtocol>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceAuthenticationProtocol());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CheckHealthAsync(abi_t<Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel> level, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CheckHealthAsync(*reinterpret_cast<Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const*>(&level)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClaimReaderAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ClaimReaderAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetrieveStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RetrieveStatisticsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&statisticsCategories)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetErrorReportingType(abi_t<Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetErrorReportingType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StatusUpdated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StatusUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::MagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusUpdated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs> : produce_base<D, Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs>
{
    HRESULT __stdcall get_Report(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Report());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LicenseNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LicenseNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationDate(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_Restrictions(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Restrictions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Class(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Class());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Endorsements(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Endorsements());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BirthDate(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BirthDate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Surname(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Surname());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Suffix(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Suffix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gender(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gender());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HairColor(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HairColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EyeColor(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EyeColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Weight(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Weight());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Address(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Address());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_City(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().City());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PostalCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PostalCode());
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
struct produce<D, Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs> : produce_base<D, Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs>
{
    HRESULT __stdcall get_Report(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Report());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccountNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccountNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationDate(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_ServiceCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MiddleInitial(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MiddleInitial());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Surname(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Surname());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Suffix(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Suffix());
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
struct produce<D, Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities> : produce_base<D, Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities>
{
    HRESULT __stdcall get_CardAuthentication(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CardAuthentication());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedEncryptionAlgorithms(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedEncryptionAlgorithms());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationLevel(abi_t<Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationLevel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AuthenticationLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsIsoSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsIsoSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsJisOneSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsJisOneSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsJisTwoSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsJisTwoSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerReportingType(abi_t<Windows::Devices::PointOfService::UnifiedPosPowerReportingType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerReportingType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStatisticsReportingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStatisticsReportingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStatisticsUpdatingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTrackDataMaskingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTrackDataMaskingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTransmitSentinelsSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTransmitSentinelsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics> : produce_base<D, Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>
{
    HRESULT __stdcall get_Unknown(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Unknown());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bank(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bank());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Aamva(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Aamva());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedBase(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedBase());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics> : produce_base<D, Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>
{
    HRESULT __stdcall get_None(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().None());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TripleDesDukpt(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TripleDesDukpt());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedBase(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedBase());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs> : produce_base<D, Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs>
{
    HRESULT __stdcall get_Track1Status(abi_t<Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Track1Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Track2Status(abi_t<Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Track2Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Track3Status(abi_t<Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Track3Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Track4Status(abi_t<Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Track4Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PartialInputData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PartialInputData());
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
struct produce<D, Windows::Devices::PointOfService::IMagneticStripeReaderReport> : produce_base<D, Windows::Devices::PointOfService::IMagneticStripeReaderReport>
{
    HRESULT __stdcall get_CardType(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CardType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Track1(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Track1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Track2(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Track2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Track3(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Track3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Track4(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Track4());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_CardAuthenticationData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CardAuthenticationData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CardAuthenticationDataLength(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CardAuthenticationDataLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdditionalSecurityInformation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdditionalSecurityInformation());
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
struct produce<D, Windows::Devices::PointOfService::IMagneticStripeReaderStatics> : produce_base<D, Windows::Devices::PointOfService::IMagneticStripeReaderStatics>
{
    HRESULT __stdcall GetDefaultAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector());
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
struct produce<D, Windows::Devices::PointOfService::IMagneticStripeReaderStatics2> : produce_base<D, Windows::Devices::PointOfService::IMagneticStripeReaderStatics2>
{
    HRESULT __stdcall GetDeviceSelectorWithConnectionTypes(abi_t<Windows::Devices::PointOfService::PosConnectionTypes> connectionTypes, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Devices::PointOfService::PosConnectionTypes const*>(&connectionTypes)));
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
struct produce<D, Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs> : produce_base<D, Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::PointOfService::MagneticStripeReaderStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedStatus(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IMagneticStripeReaderTrackData> : produce_base<D, Windows::Devices::PointOfService::IMagneticStripeReaderTrackData>
{
    HRESULT __stdcall get_Data(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DiscretionaryData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DiscretionaryData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EncryptedData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EncryptedData());
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
struct produce<D, Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> : produce_base<D, Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
{
    HRESULT __stdcall get_Report(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Report());
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
struct produce<D, Windows::Devices::PointOfService::IPosPrinter> : produce_base<D, Windows::Devices::PointOfService::IPosPrinter>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Capabilities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Capabilities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedCharacterSets(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedCharacterSets());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedTypeFaces(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedTypeFaces());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClaimPrinterAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ClaimPrinterAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CheckHealthAsync(abi_t<Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel> level, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CheckHealthAsync(*reinterpret_cast<Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const*>(&level)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetStatisticsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&statisticsCategories)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StatusUpdated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StatusUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::PosPrinter, Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusUpdated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IPosPrinterCapabilities> : produce_base<D, Windows::Devices::PointOfService::IPosPrinterCapabilities>
{
    HRESULT __stdcall get_PowerReportingType(abi_t<Windows::Devices::PointOfService::UnifiedPosPowerReportingType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerReportingType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStatisticsReportingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStatisticsReportingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStatisticsUpdatingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultCharacterSet(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultCharacterSet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasCoverSensor(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasCoverSensor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanMapCharacterSet(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanMapCharacterSet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTransactionSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTransactionSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Receipt(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Receipt());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Slip(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Slip());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Journal(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Journal());
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
struct produce<D, Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics> : produce_base<D, Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>
{
    HRESULT __stdcall get_Utf16LE(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Utf16LE());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ascii(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ascii());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ansi(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ansi());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IPosPrinterJob> : produce_base<D, Windows::Devices::PointOfService::IPosPrinterJob>
{
    HRESULT __stdcall Print(HSTRING data) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Print(*reinterpret_cast<hstring const*>(&data));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrintLine(HSTRING data) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintLine(*reinterpret_cast<hstring const*>(&data));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrintNewline() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintLine();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ExecuteAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ExecuteAsync());
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
struct produce<D, Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs> : produce_base<D, Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs>
{};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IPosPrinterStatics> : produce_base<D, Windows::Devices::PointOfService::IPosPrinterStatics>
{
    HRESULT __stdcall GetDefaultAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector());
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
struct produce<D, Windows::Devices::PointOfService::IPosPrinterStatics2> : produce_base<D, Windows::Devices::PointOfService::IPosPrinterStatics2>
{
    HRESULT __stdcall GetDeviceSelectorWithConnectionTypes(abi_t<Windows::Devices::PointOfService::PosConnectionTypes> connectionTypes, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Devices::PointOfService::PosConnectionTypes const*>(&connectionTypes)));
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
struct produce<D, Windows::Devices::PointOfService::IPosPrinterStatus> : produce_base<D, Windows::Devices::PointOfService::IPosPrinterStatus>
{
    HRESULT __stdcall get_StatusKind(abi_t<Windows::Devices::PointOfService::PosPrinterStatusKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StatusKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedStatus(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs> : produce_base<D, Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs>
{
    HRESULT __stdcall get_Status(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
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
struct produce<D, Windows::Devices::PointOfService::IReceiptOrSlipJob> : produce_base<D, Windows::Devices::PointOfService::IReceiptOrSlipJob>
{
    HRESULT __stdcall SetBarcodeRotation(abi_t<Windows::Devices::PointOfService::PosPrinterRotation> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBarcodeRotation(*reinterpret_cast<Windows::Devices::PointOfService::PosPrinterRotation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPrintRotation(abi_t<Windows::Devices::PointOfService::PosPrinterRotation> value, bool includeBitmaps) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPrintRotation(*reinterpret_cast<Windows::Devices::PointOfService::PosPrinterRotation const*>(&value), includeBitmaps);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPrintArea(abi_t<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPrintArea(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetBitmap(uint32_t bitmapNumber, ::IUnknown* bitmap, abi_t<Windows::Devices::PointOfService::PosPrinterAlignment> alignment) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBitmap(bitmapNumber, *reinterpret_cast<Windows::Graphics::Imaging::BitmapFrame const*>(&bitmap), *reinterpret_cast<Windows::Devices::PointOfService::PosPrinterAlignment const*>(&alignment));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetBitmapCustomWidthStandardAlign(uint32_t bitmapNumber, ::IUnknown* bitmap, abi_t<Windows::Devices::PointOfService::PosPrinterAlignment> alignment, uint32_t width) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBitmap(bitmapNumber, *reinterpret_cast<Windows::Graphics::Imaging::BitmapFrame const*>(&bitmap), *reinterpret_cast<Windows::Devices::PointOfService::PosPrinterAlignment const*>(&alignment), width);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCustomAlignedBitmap(uint32_t bitmapNumber, ::IUnknown* bitmap, uint32_t alignmentDistance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCustomAlignedBitmap(bitmapNumber, *reinterpret_cast<Windows::Graphics::Imaging::BitmapFrame const*>(&bitmap), alignmentDistance);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetBitmapCustomWidthCustomAlign(uint32_t bitmapNumber, ::IUnknown* bitmap, uint32_t alignmentDistance, uint32_t width) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCustomAlignedBitmap(bitmapNumber, *reinterpret_cast<Windows::Graphics::Imaging::BitmapFrame const*>(&bitmap), alignmentDistance, width);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrintSavedBitmap(uint32_t bitmapNumber) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintSavedBitmap(bitmapNumber);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRuledLine(HSTRING positionList, abi_t<Windows::Devices::PointOfService::PosPrinterLineDirection> lineDirection, uint32_t lineWidth, abi_t<Windows::Devices::PointOfService::PosPrinterLineStyle> lineStyle, uint32_t lineColor) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRuledLine(*reinterpret_cast<hstring const*>(&positionList), *reinterpret_cast<Windows::Devices::PointOfService::PosPrinterLineDirection const*>(&lineDirection), lineWidth, *reinterpret_cast<Windows::Devices::PointOfService::PosPrinterLineStyle const*>(&lineStyle), lineColor);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrintBarcode(HSTRING data, uint32_t symbology, uint32_t height, uint32_t width, abi_t<Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition> textPosition, abi_t<Windows::Devices::PointOfService::PosPrinterAlignment> alignment) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintBarcode(*reinterpret_cast<hstring const*>(&data), symbology, height, width, *reinterpret_cast<Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition const*>(&textPosition), *reinterpret_cast<Windows::Devices::PointOfService::PosPrinterAlignment const*>(&alignment));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrintBarcodeCustomAlign(HSTRING data, uint32_t symbology, uint32_t height, uint32_t width, abi_t<Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition> textPosition, uint32_t alignmentDistance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintBarcodeCustomAlign(*reinterpret_cast<hstring const*>(&data), symbology, height, width, *reinterpret_cast<Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition const*>(&textPosition), alignmentDistance);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrintBitmap(::IUnknown* bitmap, abi_t<Windows::Devices::PointOfService::PosPrinterAlignment> alignment) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintBitmap(*reinterpret_cast<Windows::Graphics::Imaging::BitmapFrame const*>(&bitmap), *reinterpret_cast<Windows::Devices::PointOfService::PosPrinterAlignment const*>(&alignment));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrintBitmapCustomWidthStandardAlign(::IUnknown* bitmap, abi_t<Windows::Devices::PointOfService::PosPrinterAlignment> alignment, uint32_t width) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintBitmap(*reinterpret_cast<Windows::Graphics::Imaging::BitmapFrame const*>(&bitmap), *reinterpret_cast<Windows::Devices::PointOfService::PosPrinterAlignment const*>(&alignment), width);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrintCustomAlignedBitmap(::IUnknown* bitmap, uint32_t alignmentDistance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintCustomAlignedBitmap(*reinterpret_cast<Windows::Graphics::Imaging::BitmapFrame const*>(&bitmap), alignmentDistance);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrintBitmapCustomWidthCustomAlign(::IUnknown* bitmap, uint32_t alignmentDistance, uint32_t width) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintCustomAlignedBitmap(*reinterpret_cast<Windows::Graphics::Imaging::BitmapFrame const*>(&bitmap), alignmentDistance, width);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IReceiptPrintJob> : produce_base<D, Windows::Devices::PointOfService::IReceiptPrintJob>
{
    HRESULT __stdcall MarkFeed(abi_t<Windows::Devices::PointOfService::PosPrinterMarkFeedKind> kind) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MarkFeed(*reinterpret_cast<Windows::Devices::PointOfService::PosPrinterMarkFeedKind const*>(&kind));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CutPaper(double percentage) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CutPaper(percentage);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CutPaperDefault() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CutPaper();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IReceiptPrinterCapabilities> : produce_base<D, Windows::Devices::PointOfService::IReceiptPrinterCapabilities>
{
    HRESULT __stdcall get_CanCutPaper(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanCutPaper());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStampSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStampSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MarkFeedCapabilities(abi_t<Windows::Devices::PointOfService::PosPrinterMarkFeedCapabilities>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MarkFeedCapabilities());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::ISlipPrinterCapabilities> : produce_base<D, Windows::Devices::PointOfService::ISlipPrinterCapabilities>
{
    HRESULT __stdcall get_IsFullLengthSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsFullLengthSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBothSidesPrintingSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBothSidesPrintingSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::IUnifiedPosErrorData> : produce_base<D, Windows::Devices::PointOfService::IUnifiedPosErrorData>
{
    HRESULT __stdcall get_Message(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Severity(abi_t<Windows::Devices::PointOfService::UnifiedPosErrorSeverity>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Severity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Reason(abi_t<Windows::Devices::PointOfService::UnifiedPosErrorReason>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedReason(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedReason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::PointOfService {

inline Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeScanner> BarcodeScanner::GetDefaultAsync()
{
    return get_activation_factory<BarcodeScanner, Windows::Devices::PointOfService::IBarcodeScannerStatics>().GetDefaultAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeScanner> BarcodeScanner::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<BarcodeScanner, Windows::Devices::PointOfService::IBarcodeScannerStatics>().FromIdAsync(deviceId);
}

inline hstring BarcodeScanner::GetDeviceSelector()
{
    return get_activation_factory<BarcodeScanner, Windows::Devices::PointOfService::IBarcodeScannerStatics>().GetDeviceSelector();
}

inline hstring BarcodeScanner::GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes)
{
    return get_activation_factory<BarcodeScanner, Windows::Devices::PointOfService::IBarcodeScannerStatics2>().GetDeviceSelector(connectionTypes);
}

inline uint32_t BarcodeSymbologies::Unknown()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Unknown();
}

inline uint32_t BarcodeSymbologies::Ean8()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Ean8();
}

inline uint32_t BarcodeSymbologies::Ean8Add2()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Ean8Add2();
}

inline uint32_t BarcodeSymbologies::Ean8Add5()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Ean8Add5();
}

inline uint32_t BarcodeSymbologies::Eanv()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Eanv();
}

inline uint32_t BarcodeSymbologies::EanvAdd2()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().EanvAdd2();
}

inline uint32_t BarcodeSymbologies::EanvAdd5()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().EanvAdd5();
}

inline uint32_t BarcodeSymbologies::Ean13()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Ean13();
}

inline uint32_t BarcodeSymbologies::Ean13Add2()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Ean13Add2();
}

inline uint32_t BarcodeSymbologies::Ean13Add5()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Ean13Add5();
}

inline uint32_t BarcodeSymbologies::Isbn()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Isbn();
}

inline uint32_t BarcodeSymbologies::IsbnAdd5()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().IsbnAdd5();
}

inline uint32_t BarcodeSymbologies::Ismn()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Ismn();
}

inline uint32_t BarcodeSymbologies::IsmnAdd2()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().IsmnAdd2();
}

inline uint32_t BarcodeSymbologies::IsmnAdd5()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().IsmnAdd5();
}

inline uint32_t BarcodeSymbologies::Issn()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Issn();
}

inline uint32_t BarcodeSymbologies::IssnAdd2()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().IssnAdd2();
}

inline uint32_t BarcodeSymbologies::IssnAdd5()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().IssnAdd5();
}

inline uint32_t BarcodeSymbologies::Ean99()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Ean99();
}

inline uint32_t BarcodeSymbologies::Ean99Add2()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Ean99Add2();
}

inline uint32_t BarcodeSymbologies::Ean99Add5()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Ean99Add5();
}

inline uint32_t BarcodeSymbologies::Upca()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Upca();
}

inline uint32_t BarcodeSymbologies::UpcaAdd2()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().UpcaAdd2();
}

inline uint32_t BarcodeSymbologies::UpcaAdd5()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().UpcaAdd5();
}

inline uint32_t BarcodeSymbologies::Upce()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Upce();
}

inline uint32_t BarcodeSymbologies::UpceAdd2()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().UpceAdd2();
}

inline uint32_t BarcodeSymbologies::UpceAdd5()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().UpceAdd5();
}

inline uint32_t BarcodeSymbologies::UpcCoupon()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().UpcCoupon();
}

inline uint32_t BarcodeSymbologies::TfStd()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().TfStd();
}

inline uint32_t BarcodeSymbologies::TfDis()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().TfDis();
}

inline uint32_t BarcodeSymbologies::TfInt()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().TfInt();
}

inline uint32_t BarcodeSymbologies::TfInd()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().TfInd();
}

inline uint32_t BarcodeSymbologies::TfMat()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().TfMat();
}

inline uint32_t BarcodeSymbologies::TfIata()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().TfIata();
}

inline uint32_t BarcodeSymbologies::Gs1DatabarType1()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Gs1DatabarType1();
}

inline uint32_t BarcodeSymbologies::Gs1DatabarType2()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Gs1DatabarType2();
}

inline uint32_t BarcodeSymbologies::Gs1DatabarType3()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Gs1DatabarType3();
}

inline uint32_t BarcodeSymbologies::Code39()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Code39();
}

inline uint32_t BarcodeSymbologies::Code39Ex()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Code39Ex();
}

inline uint32_t BarcodeSymbologies::Trioptic39()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Trioptic39();
}

inline uint32_t BarcodeSymbologies::Code32()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Code32();
}

inline uint32_t BarcodeSymbologies::Pzn()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Pzn();
}

inline uint32_t BarcodeSymbologies::Code93()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Code93();
}

inline uint32_t BarcodeSymbologies::Code93Ex()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Code93Ex();
}

inline uint32_t BarcodeSymbologies::Code128()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Code128();
}

inline uint32_t BarcodeSymbologies::Gs1128()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Gs1128();
}

inline uint32_t BarcodeSymbologies::Gs1128Coupon()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Gs1128Coupon();
}

inline uint32_t BarcodeSymbologies::UccEan128()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().UccEan128();
}

inline uint32_t BarcodeSymbologies::Sisac()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Sisac();
}

inline uint32_t BarcodeSymbologies::Isbt()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Isbt();
}

inline uint32_t BarcodeSymbologies::Codabar()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Codabar();
}

inline uint32_t BarcodeSymbologies::Code11()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Code11();
}

inline uint32_t BarcodeSymbologies::Msi()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Msi();
}

inline uint32_t BarcodeSymbologies::Plessey()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Plessey();
}

inline uint32_t BarcodeSymbologies::Telepen()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Telepen();
}

inline uint32_t BarcodeSymbologies::Code16k()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Code16k();
}

inline uint32_t BarcodeSymbologies::CodablockA()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().CodablockA();
}

inline uint32_t BarcodeSymbologies::CodablockF()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().CodablockF();
}

inline uint32_t BarcodeSymbologies::Codablock128()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Codablock128();
}

inline uint32_t BarcodeSymbologies::Code49()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Code49();
}

inline uint32_t BarcodeSymbologies::Aztec()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Aztec();
}

inline uint32_t BarcodeSymbologies::DataCode()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().DataCode();
}

inline uint32_t BarcodeSymbologies::DataMatrix()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().DataMatrix();
}

inline uint32_t BarcodeSymbologies::HanXin()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().HanXin();
}

inline uint32_t BarcodeSymbologies::Maxicode()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Maxicode();
}

inline uint32_t BarcodeSymbologies::MicroPdf417()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().MicroPdf417();
}

inline uint32_t BarcodeSymbologies::MicroQr()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().MicroQr();
}

inline uint32_t BarcodeSymbologies::Pdf417()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Pdf417();
}

inline uint32_t BarcodeSymbologies::Qr()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Qr();
}

inline uint32_t BarcodeSymbologies::MsTag()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().MsTag();
}

inline uint32_t BarcodeSymbologies::Ccab()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Ccab();
}

inline uint32_t BarcodeSymbologies::Ccc()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Ccc();
}

inline uint32_t BarcodeSymbologies::Tlc39()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Tlc39();
}

inline uint32_t BarcodeSymbologies::AusPost()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().AusPost();
}

inline uint32_t BarcodeSymbologies::CanPost()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().CanPost();
}

inline uint32_t BarcodeSymbologies::ChinaPost()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().ChinaPost();
}

inline uint32_t BarcodeSymbologies::DutchKix()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().DutchKix();
}

inline uint32_t BarcodeSymbologies::InfoMail()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().InfoMail();
}

inline uint32_t BarcodeSymbologies::ItalianPost25()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().ItalianPost25();
}

inline uint32_t BarcodeSymbologies::ItalianPost39()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().ItalianPost39();
}

inline uint32_t BarcodeSymbologies::JapanPost()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().JapanPost();
}

inline uint32_t BarcodeSymbologies::KoreanPost()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().KoreanPost();
}

inline uint32_t BarcodeSymbologies::SwedenPost()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().SwedenPost();
}

inline uint32_t BarcodeSymbologies::UkPost()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().UkPost();
}

inline uint32_t BarcodeSymbologies::UsIntelligent()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().UsIntelligent();
}

inline uint32_t BarcodeSymbologies::UsIntelligentPkg()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().UsIntelligentPkg();
}

inline uint32_t BarcodeSymbologies::UsPlanet()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().UsPlanet();
}

inline uint32_t BarcodeSymbologies::UsPostNet()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().UsPostNet();
}

inline uint32_t BarcodeSymbologies::Us4StateFics()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Us4StateFics();
}

inline uint32_t BarcodeSymbologies::OcrA()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().OcrA();
}

inline uint32_t BarcodeSymbologies::OcrB()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().OcrB();
}

inline uint32_t BarcodeSymbologies::Micr()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().Micr();
}

inline uint32_t BarcodeSymbologies::ExtendedBase()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().ExtendedBase();
}

inline hstring BarcodeSymbologies::GetName(uint32_t scanDataType)
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>().GetName(scanDataType);
}

inline uint32_t BarcodeSymbologies::Gs1DWCode()
{
    return get_activation_factory<BarcodeSymbologies, Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2>().Gs1DWCode();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::CashDrawer> CashDrawer::GetDefaultAsync()
{
    return get_activation_factory<CashDrawer, Windows::Devices::PointOfService::ICashDrawerStatics>().GetDefaultAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::CashDrawer> CashDrawer::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<CashDrawer, Windows::Devices::PointOfService::ICashDrawerStatics>().FromIdAsync(deviceId);
}

inline hstring CashDrawer::GetDeviceSelector()
{
    return get_activation_factory<CashDrawer, Windows::Devices::PointOfService::ICashDrawerStatics>().GetDeviceSelector();
}

inline hstring CashDrawer::GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes)
{
    return get_activation_factory<CashDrawer, Windows::Devices::PointOfService::ICashDrawerStatics2>().GetDeviceSelector(connectionTypes);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedLineDisplay> ClaimedLineDisplay::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<ClaimedLineDisplay, Windows::Devices::PointOfService::IClaimedLineDisplayStatics>().FromIdAsync(deviceId);
}

inline hstring ClaimedLineDisplay::GetDeviceSelector()
{
    return get_activation_factory<ClaimedLineDisplay, Windows::Devices::PointOfService::IClaimedLineDisplayStatics>().GetDeviceSelector();
}

inline hstring ClaimedLineDisplay::GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes)
{
    return get_activation_factory<ClaimedLineDisplay, Windows::Devices::PointOfService::IClaimedLineDisplayStatics>().GetDeviceSelector(connectionTypes);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplay> LineDisplay::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<LineDisplay, Windows::Devices::PointOfService::ILineDisplayStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplay> LineDisplay::GetDefaultAsync()
{
    return get_activation_factory<LineDisplay, Windows::Devices::PointOfService::ILineDisplayStatics>().GetDefaultAsync();
}

inline hstring LineDisplay::GetDeviceSelector()
{
    return get_activation_factory<LineDisplay, Windows::Devices::PointOfService::ILineDisplayStatics>().GetDeviceSelector();
}

inline hstring LineDisplay::GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes)
{
    return get_activation_factory<LineDisplay, Windows::Devices::PointOfService::ILineDisplayStatics>().GetDeviceSelector(connectionTypes);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::MagneticStripeReader> MagneticStripeReader::GetDefaultAsync()
{
    return get_activation_factory<MagneticStripeReader, Windows::Devices::PointOfService::IMagneticStripeReaderStatics>().GetDefaultAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::MagneticStripeReader> MagneticStripeReader::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<MagneticStripeReader, Windows::Devices::PointOfService::IMagneticStripeReaderStatics>().FromIdAsync(deviceId);
}

inline hstring MagneticStripeReader::GetDeviceSelector()
{
    return get_activation_factory<MagneticStripeReader, Windows::Devices::PointOfService::IMagneticStripeReaderStatics>().GetDeviceSelector();
}

inline hstring MagneticStripeReader::GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes)
{
    return get_activation_factory<MagneticStripeReader, Windows::Devices::PointOfService::IMagneticStripeReaderStatics2>().GetDeviceSelector(connectionTypes);
}

inline uint32_t MagneticStripeReaderCardTypes::Unknown()
{
    return get_activation_factory<MagneticStripeReaderCardTypes, Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>().Unknown();
}

inline uint32_t MagneticStripeReaderCardTypes::Bank()
{
    return get_activation_factory<MagneticStripeReaderCardTypes, Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>().Bank();
}

inline uint32_t MagneticStripeReaderCardTypes::Aamva()
{
    return get_activation_factory<MagneticStripeReaderCardTypes, Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>().Aamva();
}

inline uint32_t MagneticStripeReaderCardTypes::ExtendedBase()
{
    return get_activation_factory<MagneticStripeReaderCardTypes, Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>().ExtendedBase();
}

inline uint32_t MagneticStripeReaderEncryptionAlgorithms::None()
{
    return get_activation_factory<MagneticStripeReaderEncryptionAlgorithms, Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>().None();
}

inline uint32_t MagneticStripeReaderEncryptionAlgorithms::TripleDesDukpt()
{
    return get_activation_factory<MagneticStripeReaderEncryptionAlgorithms, Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>().TripleDesDukpt();
}

inline uint32_t MagneticStripeReaderEncryptionAlgorithms::ExtendedBase()
{
    return get_activation_factory<MagneticStripeReaderEncryptionAlgorithms, Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>().ExtendedBase();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::PosPrinter> PosPrinter::GetDefaultAsync()
{
    return get_activation_factory<PosPrinter, Windows::Devices::PointOfService::IPosPrinterStatics>().GetDefaultAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::PosPrinter> PosPrinter::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<PosPrinter, Windows::Devices::PointOfService::IPosPrinterStatics>().FromIdAsync(deviceId);
}

inline hstring PosPrinter::GetDeviceSelector()
{
    return get_activation_factory<PosPrinter, Windows::Devices::PointOfService::IPosPrinterStatics>().GetDeviceSelector();
}

inline hstring PosPrinter::GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes)
{
    return get_activation_factory<PosPrinter, Windows::Devices::PointOfService::IPosPrinterStatics2>().GetDeviceSelector(connectionTypes);
}

inline uint32_t PosPrinterCharacterSetIds::Utf16LE()
{
    return get_activation_factory<PosPrinterCharacterSetIds, Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>().Utf16LE();
}

inline uint32_t PosPrinterCharacterSetIds::Ascii()
{
    return get_activation_factory<PosPrinterCharacterSetIds, Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>().Ascii();
}

inline uint32_t PosPrinterCharacterSetIds::Ansi()
{
    return get_activation_factory<PosPrinterCharacterSetIds, Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>().Ansi();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeScanner> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeScanner> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeScanner2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeScanner2> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeScannerCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeScannerCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeScannerCapabilities1> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeScannerCapabilities1> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeScannerReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeScannerReport> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeScannerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeScannerStatics> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeScannerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeScannerStatics2> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeSymbologiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeSymbologiesStatics> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IBarcodeSymbologyAttributes> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IBarcodeSymbologyAttributes> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ICashDrawer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ICashDrawer> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ICashDrawerCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ICashDrawerCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ICashDrawerCloseAlarm> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ICashDrawerCloseAlarm> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ICashDrawerEventSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ICashDrawerEventSource> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ICashDrawerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ICashDrawerStatics> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ICashDrawerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ICashDrawerStatics2> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ICashDrawerStatus> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ICashDrawerStatus> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IClaimedBarcodeScanner> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IClaimedBarcodeScanner> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IClaimedBarcodeScanner1> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IClaimedBarcodeScanner1> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IClaimedBarcodeScanner2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IClaimedBarcodeScanner2> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IClaimedCashDrawer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IClaimedCashDrawer> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IClaimedJournalPrinter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IClaimedJournalPrinter> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IClaimedLineDisplay> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IClaimedLineDisplay> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IClaimedLineDisplayStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IClaimedLineDisplayStatics> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IClaimedMagneticStripeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IClaimedMagneticStripeReader> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IClaimedPosPrinter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IClaimedPosPrinter> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IClaimedReceiptPrinter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IClaimedReceiptPrinter> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IClaimedSlipPrinter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IClaimedSlipPrinter> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IJournalPrinterCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IJournalPrinterCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ILineDisplay> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ILineDisplay> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ILineDisplayCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ILineDisplayCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ILineDisplayStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ILineDisplayStatics> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ILineDisplayWindow> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ILineDisplayWindow> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IMagneticStripeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IMagneticStripeReader> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderReport> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderStatics> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderStatics2> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderTrackData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderTrackData> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IPosPrinter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IPosPrinter> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IPosPrinterCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IPosPrinterCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IPosPrinterJob> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IPosPrinterJob> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IPosPrinterStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IPosPrinterStatics> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IPosPrinterStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IPosPrinterStatics2> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IPosPrinterStatus> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IPosPrinterStatus> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IReceiptOrSlipJob> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IReceiptOrSlipJob> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IReceiptPrintJob> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IReceiptPrintJob> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IReceiptPrinterCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IReceiptPrinterCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ISlipPrinterCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ISlipPrinterCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::IUnifiedPosErrorData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::IUnifiedPosErrorData> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::BarcodeScanner> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::BarcodeScanner> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::BarcodeScannerCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::BarcodeScannerCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::BarcodeScannerReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::BarcodeScannerReport> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::BarcodeSymbologies> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::BarcodeSymbologies> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::BarcodeSymbologyAttributes> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::BarcodeSymbologyAttributes> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::CashDrawer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::CashDrawer> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::CashDrawerCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::CashDrawerCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::CashDrawerCloseAlarm> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::CashDrawerCloseAlarm> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::CashDrawerClosedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::CashDrawerClosedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::CashDrawerEventSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::CashDrawerEventSource> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::CashDrawerOpenedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::CashDrawerOpenedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::CashDrawerStatus> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::CashDrawerStatus> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ClaimedBarcodeScanner> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ClaimedBarcodeScanner> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ClaimedCashDrawer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ClaimedCashDrawer> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ClaimedJournalPrinter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ClaimedJournalPrinter> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ClaimedLineDisplay> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ClaimedLineDisplay> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ClaimedMagneticStripeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ClaimedMagneticStripeReader> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ClaimedPosPrinter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ClaimedPosPrinter> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ClaimedReceiptPrinter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ClaimedReceiptPrinter> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ClaimedSlipPrinter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ClaimedSlipPrinter> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::JournalPrintJob> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::JournalPrintJob> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::JournalPrinterCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::JournalPrinterCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::LineDisplay> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::LineDisplay> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::LineDisplayCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::LineDisplayCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::LineDisplayWindow> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::LineDisplayWindow> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::MagneticStripeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::MagneticStripeReader> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::MagneticStripeReaderCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::MagneticStripeReaderCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::MagneticStripeReaderCardTypes> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::MagneticStripeReaderCardTypes> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::MagneticStripeReaderEncryptionAlgorithms> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::MagneticStripeReaderEncryptionAlgorithms> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::MagneticStripeReaderReport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::MagneticStripeReaderReport> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackData> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::PosPrinter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::PosPrinter> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::PosPrinterCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::PosPrinterCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::PosPrinterCharacterSetIds> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::PosPrinterCharacterSetIds> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::PosPrinterStatus> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::PosPrinterStatus> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ReceiptPrintJob> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ReceiptPrintJob> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::ReceiptPrinterCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::ReceiptPrinterCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::SlipPrintJob> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::SlipPrintJob> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::SlipPrinterCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::SlipPrinterCapabilities> {};

template<> struct hash<winrt::Windows::Devices::PointOfService::UnifiedPosErrorData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::PointOfService::UnifiedPosErrorData> {};

}

WINRT_WARNING_POP
