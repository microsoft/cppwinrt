// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.PointOfService.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.Streams.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::PointOfService {

struct __declspec(uuid("bea33e06-b264-4f03-a9c1-45b20f01134f")) __declspec(novtable) IBarcodeScanner : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Capabilities(Windows::Devices::PointOfService::IBarcodeScannerCapabilities ** value) = 0;
    virtual HRESULT __stdcall abi_ClaimScannerAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedBarcodeScanner> ** operation) = 0;
    virtual HRESULT __stdcall abi_CheckHealthAsync(winrt::Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel level, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetSupportedSymbologiesAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<uint32_t>> ** operation) = 0;
    virtual HRESULT __stdcall abi_IsSymbologySupportedAsync(uint32_t barcodeSymbology, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_RetrieveStatisticsAsync(Windows::Foundation::Collections::IIterable<hstring> * statisticsCategories, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetSupportedProfiles(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall abi_IsProfileSupported(hstring profile, bool * isSupported) = 0;
    virtual HRESULT __stdcall add_StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::BarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StatusUpdated(event_token token) = 0;
};

struct __declspec(uuid("89215167-8cee-436d-89ab-8dfb43bb4286")) __declspec(novtable) IBarcodeScanner2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_VideoDeviceId(hstring * value) = 0;
};

struct __declspec(uuid("c60691e4-f2c8-4420-a307-b12ef6622857")) __declspec(novtable) IBarcodeScannerCapabilities : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PowerReportingType(winrt::Windows::Devices::PointOfService::UnifiedPosPowerReportingType * value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsReportingSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsImagePreviewSupported(bool * value) = 0;
};

struct __declspec(uuid("8e5ab3e9-0e2c-472f-a1cc-ee8054b6a684")) __declspec(novtable) IBarcodeScannerCapabilities1 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsSoftwareTriggerSupported(bool * value) = 0;
};

struct __declspec(uuid("4234a7e2-ed97-467d-ad2b-01e44313a929")) __declspec(novtable) IBarcodeScannerDataReceivedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Report(Windows::Devices::PointOfService::IBarcodeScannerReport ** value) = 0;
};

struct __declspec(uuid("2cd2602f-cf3a-4002-a75a-c5ec468f0a20")) __declspec(novtable) IBarcodeScannerErrorOccurredEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PartialInputData(Windows::Devices::PointOfService::IBarcodeScannerReport ** value) = 0;
    virtual HRESULT __stdcall get_IsRetriable(bool * value) = 0;
    virtual HRESULT __stdcall get_ErrorData(Windows::Devices::PointOfService::IUnifiedPosErrorData ** value) = 0;
};

struct __declspec(uuid("f3b7de85-6e8b-434e-9f58-06ef26bc4baf")) __declspec(novtable) IBarcodeScannerImagePreviewReceivedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Preview(Windows::Storage::Streams::IRandomAccessStreamWithContentType ** preview) = 0;
};

struct __declspec(uuid("5ce4d8b0-a489-4b96-86c4-f0bf8a37753d")) __declspec(novtable) IBarcodeScannerReport : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ScanDataType(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ScanData(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_ScanDataLabel(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("5d115f6f-da49-41e8-8c8c-f0cb62a9c4fc")) __declspec(novtable) IBarcodeScannerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefaultAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeScanner> ** result) = 0;
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeScanner> ** result) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelector(hstring * value) = 0;
};

struct __declspec(uuid("355d8586-9c43-462b-a91a-816dc97f452c")) __declspec(novtable) IBarcodeScannerStatusUpdatedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::PointOfService::BarcodeScannerStatus * value) = 0;
    virtual HRESULT __stdcall get_ExtendedStatus(uint32_t * value) = 0;
};

struct __declspec(uuid("ca8549bb-06d2-43f4-a44b-c620679fd8d0")) __declspec(novtable) IBarcodeSymbologiesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Unknown(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ean8(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ean8Add2(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ean8Add5(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Eanv(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_EanvAdd2(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_EanvAdd5(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ean13(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ean13Add2(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ean13Add5(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Isbn(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_IsbnAdd5(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ismn(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_IsmnAdd2(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_IsmnAdd5(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Issn(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_IssnAdd2(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_IssnAdd5(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ean99(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ean99Add2(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ean99Add5(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Upca(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_UpcaAdd2(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_UpcaAdd5(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Upce(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_UpceAdd2(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_UpceAdd5(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_UpcCoupon(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_TfStd(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_TfDis(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_TfInt(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_TfInd(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_TfMat(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_TfIata(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Gs1DatabarType1(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Gs1DatabarType2(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Gs1DatabarType3(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Code39(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Code39Ex(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Trioptic39(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Code32(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Pzn(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Code93(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Code93Ex(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Code128(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Gs1128(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Gs1128Coupon(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_UccEan128(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Sisac(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Isbt(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Codabar(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Code11(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Msi(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Plessey(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Telepen(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Code16k(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_CodablockA(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_CodablockF(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Codablock128(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Code49(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Aztec(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_DataCode(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_DataMatrix(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_HanXin(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Maxicode(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_MicroPdf417(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_MicroQr(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Pdf417(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Qr(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_MsTag(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ccab(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ccc(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Tlc39(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_AusPost(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_CanPost(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ChinaPost(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_DutchKix(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_InfoMail(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ItalianPost25(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ItalianPost39(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_JapanPost(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_KoreanPost(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_SwedenPost(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_UkPost(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_UsIntelligent(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_UsIntelligentPkg(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_UsPlanet(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_UsPostNet(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Us4StateFics(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_OcrA(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_OcrB(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Micr(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ExtendedBase(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_GetName(uint32_t scanDataType, hstring * value) = 0;
};

struct __declspec(uuid("9f88f5c8-de54-4aee-a890-920bcbfe30fc")) __declspec(novtable) ICashDrawer : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Capabilities(Windows::Devices::PointOfService::ICashDrawerCapabilities ** value) = 0;
    virtual HRESULT __stdcall get_Status(Windows::Devices::PointOfService::ICashDrawerStatus ** value) = 0;
    virtual HRESULT __stdcall get_IsDrawerOpen(bool * value) = 0;
    virtual HRESULT __stdcall get_DrawerEventSource(Windows::Devices::PointOfService::ICashDrawerEventSource ** value) = 0;
    virtual HRESULT __stdcall abi_ClaimDrawerAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedCashDrawer> ** operation) = 0;
    virtual HRESULT __stdcall abi_CheckHealthAsync(winrt::Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel level, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetStatisticsAsync(Windows::Foundation::Collections::IIterable<hstring> * statisticsCategories, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall add_StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawer, Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StatusUpdated(event_token token) = 0;
};

struct __declspec(uuid("0bc6de0b-e8e7-4b1f-b1d1-3e501ad08247")) __declspec(novtable) ICashDrawerCapabilities : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PowerReportingType(winrt::Windows::Devices::PointOfService::UnifiedPosPowerReportingType * value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsReportingSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsStatusReportingSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsStatusMultiDrawerDetectSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsDrawerOpenSensorAvailable(bool * value) = 0;
};

struct __declspec(uuid("6bf88cc7-6f63-430e-ab3b-95d75ffbe87f")) __declspec(novtable) ICashDrawerCloseAlarm : Windows::IInspectable
{
    virtual HRESULT __stdcall put_AlarmTimeout(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_AlarmTimeout(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_BeepFrequency(uint32_t value) = 0;
    virtual HRESULT __stdcall get_BeepFrequency(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_BeepDuration(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_BeepDuration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_BeepDelay(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_BeepDelay(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall add_AlarmTimeoutExpired(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerCloseAlarm, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AlarmTimeoutExpired(event_token token) = 0;
    virtual HRESULT __stdcall abi_StartAsync(Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
};

struct __declspec(uuid("e006e46c-f2f9-442f-8dd6-06c10a4227ba")) __declspec(novtable) ICashDrawerEventSource : Windows::IInspectable
{
    virtual HRESULT __stdcall add_DrawerClosed(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerClosedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DrawerClosed(event_token token) = 0;
    virtual HRESULT __stdcall add_DrawerOpened(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerOpenedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DrawerOpened(event_token token) = 0;
};

struct __declspec(uuid("69cb3bc1-147f-421c-9c23-090123bb786c")) __declspec(novtable) ICashDrawerEventSourceEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CashDrawer(Windows::Devices::PointOfService::ICashDrawer ** drawer) = 0;
};

struct __declspec(uuid("dfa0955a-d437-4fff-b547-dda969a4f883")) __declspec(novtable) ICashDrawerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefaultAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::CashDrawer> ** result) = 0;
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::CashDrawer> ** result) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelector(hstring * value) = 0;
};

struct __declspec(uuid("6bbd78bf-dca1-4e06-99eb-5af6a5aec108")) __declspec(novtable) ICashDrawerStatus : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StatusKind(winrt::Windows::Devices::PointOfService::CashDrawerStatusKind * value) = 0;
    virtual HRESULT __stdcall get_ExtendedStatus(uint32_t * value) = 0;
};

struct __declspec(uuid("30aae98a-0d70-459c-9553-87e124c52488")) __declspec(novtable) ICashDrawerStatusUpdatedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(Windows::Devices::PointOfService::ICashDrawerStatus ** value) = 0;
};

struct __declspec(uuid("4a63b49c-8fa4-4332-bb26-945d11d81e0f")) __declspec(novtable) IClaimedBarcodeScanner : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsDisabledOnDataReceived(bool value) = 0;
    virtual HRESULT __stdcall get_IsDisabledOnDataReceived(bool * value) = 0;
    virtual HRESULT __stdcall put_IsDecodeDataEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsDecodeDataEnabled(bool * value) = 0;
    virtual HRESULT __stdcall abi_EnableAsync(Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_DisableAsync(Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_RetainDevice() = 0;
    virtual HRESULT __stdcall abi_SetActiveSymbologiesAsync(Windows::Foundation::Collections::IIterable<uint32_t> * symbologies, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ResetStatisticsAsync(Windows::Foundation::Collections::IIterable<hstring> * statisticsCategories, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_UpdateStatisticsAsync(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> * statistics, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_SetActiveProfileAsync(hstring profile, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall add_DataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DataReceived(event_token token) = 0;
    virtual HRESULT __stdcall add_TriggerPressed(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_TriggerPressed(event_token token) = 0;
    virtual HRESULT __stdcall add_TriggerReleased(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_TriggerReleased(event_token token) = 0;
    virtual HRESULT __stdcall add_ReleaseDeviceRequested(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ReleaseDeviceRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_ImagePreviewReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ImagePreviewReceived(event_token token) = 0;
    virtual HRESULT __stdcall add_ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ErrorOccurred(event_token token) = 0;
};

struct __declspec(uuid("f61aad0c-8551-42b4-998c-970c20210a22")) __declspec(novtable) IClaimedBarcodeScanner1 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_StartSoftwareTriggerAsync(Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_StopSoftwareTriggerAsync(Windows::Foundation::IAsyncAction ** result) = 0;
};

struct __declspec(uuid("ca3f99af-abb8-42c1-8a84-5c66512f5a75")) __declspec(novtable) IClaimedCashDrawer : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool * value) = 0;
    virtual HRESULT __stdcall get_IsDrawerOpen(bool * value) = 0;
    virtual HRESULT __stdcall get_CloseAlarm(Windows::Devices::PointOfService::ICashDrawerCloseAlarm ** value) = 0;
    virtual HRESULT __stdcall abi_OpenDrawerAsync(Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_EnableAsync(Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_DisableAsync(Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_RetainDeviceAsync(Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_ResetStatisticsAsync(Windows::Foundation::Collections::IIterable<hstring> * statisticsCategories, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_UpdateStatisticsAsync(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> * statistics, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall add_ReleaseDeviceRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedCashDrawer, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ReleaseDeviceRequested(event_token token) = 0;
};

struct __declspec(uuid("67ea0630-517d-487f-9fdf-d2e0a0a264a5")) __declspec(novtable) IClaimedJournalPrinter : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateJob(Windows::Devices::PointOfService::IPosPrinterJob ** value) = 0;
};

struct __declspec(uuid("475ca8f3-9417-48bc-b9d7-4163a7844c02")) __declspec(novtable) IClaimedMagneticStripeReader : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsDisabledOnDataReceived(bool value) = 0;
    virtual HRESULT __stdcall get_IsDisabledOnDataReceived(bool * value) = 0;
    virtual HRESULT __stdcall put_IsDecodeDataEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsDecodeDataEnabled(bool * value) = 0;
    virtual HRESULT __stdcall get_IsDeviceAuthenticated(bool * value) = 0;
    virtual HRESULT __stdcall put_DataEncryptionAlgorithm(uint32_t value) = 0;
    virtual HRESULT __stdcall get_DataEncryptionAlgorithm(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_TracksToRead(winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackIds value) = 0;
    virtual HRESULT __stdcall get_TracksToRead(winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackIds * value) = 0;
    virtual HRESULT __stdcall put_IsTransmitSentinelsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsTransmitSentinelsEnabled(bool * value) = 0;
    virtual HRESULT __stdcall abi_EnableAsync(Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_DisableAsync(Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_RetainDevice() = 0;
    virtual HRESULT __stdcall abi_SetErrorReportingType(winrt::Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType value) = 0;
    virtual HRESULT __stdcall abi_RetrieveDeviceAuthenticationDataAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ** operation) = 0;
    virtual HRESULT __stdcall abi_AuthenticateDeviceAsync(uint32_t __responseTokenSize, uint8_t * responseToken, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_DeAuthenticateDeviceAsync(uint32_t __responseTokenSize, uint8_t * responseToken, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_UpdateKeyAsync(hstring key, hstring keyName, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ResetStatisticsAsync(Windows::Foundation::Collections::IIterable<hstring> * statisticsCategories, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_UpdateStatisticsAsync(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> * statistics, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall add_BankCardDataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_BankCardDataReceived(event_token token) = 0;
    virtual HRESULT __stdcall add_AamvaCardDataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AamvaCardDataReceived(event_token token) = 0;
    virtual HRESULT __stdcall add_VendorSpecificDataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_VendorSpecificDataReceived(event_token token) = 0;
    virtual HRESULT __stdcall add_ReleaseDeviceRequested(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ReleaseDeviceRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ErrorOccurred(event_token token) = 0;
};

struct __declspec(uuid("6d64ce0c-e03e-4b14-a38e-c28c34b86353")) __declspec(novtable) IClaimedPosPrinter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_CharacterSet(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CharacterSet(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_IsCoverOpen(bool * value) = 0;
    virtual HRESULT __stdcall put_IsCharacterSetMappingEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsCharacterSetMappingEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_MapMode(winrt::Windows::Devices::PointOfService::PosPrinterMapMode value) = 0;
    virtual HRESULT __stdcall get_MapMode(winrt::Windows::Devices::PointOfService::PosPrinterMapMode * value) = 0;
    virtual HRESULT __stdcall get_Receipt(Windows::Devices::PointOfService::IClaimedReceiptPrinter ** value) = 0;
    virtual HRESULT __stdcall get_Slip(Windows::Devices::PointOfService::IClaimedSlipPrinter ** value) = 0;
    virtual HRESULT __stdcall get_Journal(Windows::Devices::PointOfService::IClaimedJournalPrinter ** value) = 0;
    virtual HRESULT __stdcall abi_EnableAsync(Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_DisableAsync(Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_RetainDeviceAsync(Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_ResetStatisticsAsync(Windows::Foundation::Collections::IIterable<hstring> * statisticsCategories, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_UpdateStatisticsAsync(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> * statistics, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall add_ReleaseDeviceRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedPosPrinter, Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ReleaseDeviceRequested(event_token token) = 0;
};

struct __declspec(uuid("9ad27a74-dd61-4ee2-9837-5b5d72d538b9")) __declspec(novtable) IClaimedReceiptPrinter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SidewaysMaxLines(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_SidewaysMaxChars(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_LinesToPaperCut(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_PageSize(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall get_PrintArea(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall abi_CreateJob(Windows::Devices::PointOfService::IReceiptPrintJob ** value) = 0;
};

struct __declspec(uuid("bd5deff2-af90-4e8a-b77b-e3ae9ca63a7f")) __declspec(novtable) IClaimedSlipPrinter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SidewaysMaxLines(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_SidewaysMaxChars(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_MaxLines(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_LinesNearEndToEnd(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_PrintSide(winrt::Windows::Devices::PointOfService::PosPrinterPrintSide * value) = 0;
    virtual HRESULT __stdcall get_PageSize(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall get_PrintArea(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall abi_OpenJaws() = 0;
    virtual HRESULT __stdcall abi_CloseJaws() = 0;
    virtual HRESULT __stdcall abi_InsertSlipAsync(Windows::Foundation::TimeSpan timeout, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_RemoveSlipAsync(Windows::Foundation::TimeSpan timeout, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_ChangePrintSide(winrt::Windows::Devices::PointOfService::PosPrinterPrintSide printSide) = 0;
    virtual HRESULT __stdcall abi_CreateJob(Windows::Devices::PointOfService::IReceiptOrSlipJob ** value) = 0;
};

struct __declspec(uuid("b7eb66a8-fe8a-4cfb-8b42-e35b280cb27c")) __declspec(novtable) ICommonClaimedPosPrinterStation : Windows::IInspectable
{
    virtual HRESULT __stdcall put_CharactersPerLine(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CharactersPerLine(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_LineHeight(uint32_t value) = 0;
    virtual HRESULT __stdcall get_LineHeight(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_LineSpacing(uint32_t value) = 0;
    virtual HRESULT __stdcall get_LineSpacing(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_LineWidth(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_IsLetterQuality(bool value) = 0;
    virtual HRESULT __stdcall get_IsLetterQuality(bool * value) = 0;
    virtual HRESULT __stdcall get_IsPaperNearEnd(bool * value) = 0;
    virtual HRESULT __stdcall put_ColorCartridge(winrt::Windows::Devices::PointOfService::PosPrinterColorCartridge value) = 0;
    virtual HRESULT __stdcall get_ColorCartridge(winrt::Windows::Devices::PointOfService::PosPrinterColorCartridge * value) = 0;
    virtual HRESULT __stdcall get_IsCoverOpen(bool * value) = 0;
    virtual HRESULT __stdcall get_IsCartridgeRemoved(bool * value) = 0;
    virtual HRESULT __stdcall get_IsCartridgeEmpty(bool * value) = 0;
    virtual HRESULT __stdcall get_IsHeadCleaning(bool * value) = 0;
    virtual HRESULT __stdcall get_IsPaperEmpty(bool * value) = 0;
    virtual HRESULT __stdcall get_IsReadyToPrint(bool * value) = 0;
    virtual HRESULT __stdcall abi_ValidateData(hstring data, bool * result) = 0;
};

struct __declspec(uuid("de5b52ca-e02e-40e9-9e5e-1b488e6aacfc")) __declspec(novtable) ICommonPosPrintStationCapabilities : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsPrinterPresent(bool * value) = 0;
    virtual HRESULT __stdcall get_IsDualColorSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_ColorCartridgeCapabilities(winrt::Windows::Devices::PointOfService::PosPrinterColorCapabilities * value) = 0;
    virtual HRESULT __stdcall get_CartridgeSensors(winrt::Windows::Devices::PointOfService::PosPrinterCartridgeSensors * value) = 0;
    virtual HRESULT __stdcall get_IsBoldSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsItalicSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsUnderlineSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsDoubleHighPrintSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsDoubleWidePrintSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsDoubleHighDoubleWidePrintSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsPaperEmptySensorSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsPaperNearEndSensorSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_SupportedCharactersPerLine(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
};

struct __declspec(uuid("09286b8b-9873-4d05-bfbe-4727a6038f69")) __declspec(novtable) ICommonReceiptSlipCapabilities : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsBarcodeSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsBitmapSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsLeft90RotationSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsRight90RotationSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_Is180RotationSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsPrintAreaSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_RuledLineCapabilities(winrt::Windows::Devices::PointOfService::PosPrinterRuledLineCapabilities * value) = 0;
    virtual HRESULT __stdcall get_SupportedBarcodeRotations(Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::PointOfService::PosPrinterRotation> ** value) = 0;
    virtual HRESULT __stdcall get_SupportedBitmapRotations(Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::PointOfService::PosPrinterRotation> ** value) = 0;
};

struct __declspec(uuid("3b5ccc43-e047-4463-bb58-17b5ba1d8056")) __declspec(novtable) IJournalPrinterCapabilities : Windows::IInspectable
{
};

struct __declspec(uuid("1a92b015-47c3-468a-9333-0c6517574883")) __declspec(novtable) IMagneticStripeReader : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Capabilities(Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities ** value) = 0;
    virtual HRESULT __stdcall get_SupportedCardTypes(uint32_t * __valueSize, uint32_t ** value) = 0;
    virtual HRESULT __stdcall get_DeviceAuthenticationProtocol(winrt::Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationProtocol * value) = 0;
    virtual HRESULT __stdcall abi_CheckHealthAsync(winrt::Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel level, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_ClaimReaderAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedMagneticStripeReader> ** operation) = 0;
    virtual HRESULT __stdcall abi_RetrieveStatisticsAsync(Windows::Foundation::Collections::IIterable<hstring> * statisticsCategories, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetErrorReportingType(winrt::Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType * value) = 0;
    virtual HRESULT __stdcall add_StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::MagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StatusUpdated(event_token token) = 0;
};

struct __declspec(uuid("0a4bbd51-c316-4910-87f3-7a62ba862d31")) __declspec(novtable) IMagneticStripeReaderAamvaCardDataReceivedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Report(Windows::Devices::PointOfService::IMagneticStripeReaderReport ** value) = 0;
    virtual HRESULT __stdcall get_LicenseNumber(hstring * value) = 0;
    virtual HRESULT __stdcall get_ExpirationDate(hstring * value) = 0;
    virtual HRESULT __stdcall get_Restrictions(hstring * value) = 0;
    virtual HRESULT __stdcall get_Class(hstring * value) = 0;
    virtual HRESULT __stdcall get_Endorsements(hstring * value) = 0;
    virtual HRESULT __stdcall get_BirthDate(hstring * value) = 0;
    virtual HRESULT __stdcall get_FirstName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Surname(hstring * value) = 0;
    virtual HRESULT __stdcall get_Suffix(hstring * value) = 0;
    virtual HRESULT __stdcall get_Gender(hstring * value) = 0;
    virtual HRESULT __stdcall get_HairColor(hstring * value) = 0;
    virtual HRESULT __stdcall get_EyeColor(hstring * value) = 0;
    virtual HRESULT __stdcall get_Height(hstring * value) = 0;
    virtual HRESULT __stdcall get_Weight(hstring * value) = 0;
    virtual HRESULT __stdcall get_Address(hstring * value) = 0;
    virtual HRESULT __stdcall get_City(hstring * value) = 0;
    virtual HRESULT __stdcall get_State(hstring * value) = 0;
    virtual HRESULT __stdcall get_PostalCode(hstring * value) = 0;
};

struct __declspec(uuid("2e958823-a31a-4763-882c-23725e39b08e")) __declspec(novtable) IMagneticStripeReaderBankCardDataReceivedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Report(Windows::Devices::PointOfService::IMagneticStripeReaderReport ** value) = 0;
    virtual HRESULT __stdcall get_AccountNumber(hstring * value) = 0;
    virtual HRESULT __stdcall get_ExpirationDate(hstring * value) = 0;
    virtual HRESULT __stdcall get_ServiceCode(hstring * value) = 0;
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall get_FirstName(hstring * value) = 0;
    virtual HRESULT __stdcall get_MiddleInitial(hstring * value) = 0;
    virtual HRESULT __stdcall get_Surname(hstring * value) = 0;
    virtual HRESULT __stdcall get_Suffix(hstring * value) = 0;
};

struct __declspec(uuid("7128809c-c440-44a2-a467-469175d02896")) __declspec(novtable) IMagneticStripeReaderCapabilities : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CardAuthentication(hstring * value) = 0;
    virtual HRESULT __stdcall get_SupportedEncryptionAlgorithms(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_AuthenticationLevel(winrt::Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationLevel * value) = 0;
    virtual HRESULT __stdcall get_IsIsoSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsJisOneSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsJisTwoSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_PowerReportingType(winrt::Windows::Devices::PointOfService::UnifiedPosPowerReportingType * value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsReportingSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsTrackDataMaskingSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsTransmitSentinelsSupported(bool * value) = 0;
};

struct __declspec(uuid("528f2c5d-2986-474f-8454-7ccd05928d5f")) __declspec(novtable) IMagneticStripeReaderCardTypesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Unknown(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Bank(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Aamva(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ExtendedBase(uint32_t * value) = 0;
};

struct __declspec(uuid("53b57350-c3db-4754-9c00-41392374a109")) __declspec(novtable) IMagneticStripeReaderEncryptionAlgorithmsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_None(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_TripleDesDukpt(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ExtendedBase(uint32_t * value) = 0;
};

struct __declspec(uuid("1fedf95d-2c84-41ad-b778-f2356a789ab1")) __declspec(novtable) IMagneticStripeReaderErrorOccurredEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Track1Status(winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType * value) = 0;
    virtual HRESULT __stdcall get_Track2Status(winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType * value) = 0;
    virtual HRESULT __stdcall get_Track3Status(winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType * value) = 0;
    virtual HRESULT __stdcall get_Track4Status(winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType * value) = 0;
    virtual HRESULT __stdcall get_ErrorData(Windows::Devices::PointOfService::IUnifiedPosErrorData ** value) = 0;
    virtual HRESULT __stdcall get_PartialInputData(Windows::Devices::PointOfService::IMagneticStripeReaderReport ** value) = 0;
};

struct __declspec(uuid("6a5b6047-99b0-4188-bef1-eddf79f78fe6")) __declspec(novtable) IMagneticStripeReaderReport : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CardType(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Track1(Windows::Devices::PointOfService::IMagneticStripeReaderTrackData ** value) = 0;
    virtual HRESULT __stdcall get_Track2(Windows::Devices::PointOfService::IMagneticStripeReaderTrackData ** value) = 0;
    virtual HRESULT __stdcall get_Track3(Windows::Devices::PointOfService::IMagneticStripeReaderTrackData ** value) = 0;
    virtual HRESULT __stdcall get_Track4(Windows::Devices::PointOfService::IMagneticStripeReaderTrackData ** value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IMapView<hstring, hstring> ** value) = 0;
    virtual HRESULT __stdcall get_CardAuthenticationData(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_CardAuthenticationDataLength(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_AdditionalSecurityInformation(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("c45fab4a-efd7-4760-a5ce-15b0e47e94eb")) __declspec(novtable) IMagneticStripeReaderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefaultAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::MagneticStripeReader> ** result) = 0;
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::MagneticStripeReader> ** result) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelector(hstring * value) = 0;
};

struct __declspec(uuid("09cc6bb0-3262-401d-9e8a-e80d6358906b")) __declspec(novtable) IMagneticStripeReaderStatusUpdatedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::PointOfService::MagneticStripeReaderStatus * value) = 0;
    virtual HRESULT __stdcall get_ExtendedStatus(uint32_t * value) = 0;
};

struct __declspec(uuid("104cf671-4a9d-446e-abc5-20402307ba36")) __declspec(novtable) IMagneticStripeReaderTrackData : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Data(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_DiscretionaryData(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_EncryptedData(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("af0a5514-59cc-4a60-99e8-99a53dace5aa")) __declspec(novtable) IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Report(Windows::Devices::PointOfService::IMagneticStripeReaderReport ** value) = 0;
};

struct __declspec(uuid("2a03c10e-9a19-4a01-994f-12dfad6adcbf")) __declspec(novtable) IPosPrinter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Capabilities(Windows::Devices::PointOfService::IPosPrinterCapabilities ** value) = 0;
    virtual HRESULT __stdcall get_SupportedCharacterSets(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_SupportedTypeFaces(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_Status(Windows::Devices::PointOfService::IPosPrinterStatus ** value) = 0;
    virtual HRESULT __stdcall abi_ClaimPrinterAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedPosPrinter> ** operation) = 0;
    virtual HRESULT __stdcall abi_CheckHealthAsync(winrt::Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel level, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetStatisticsAsync(Windows::Foundation::Collections::IIterable<hstring> * statisticsCategories, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall add_StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::PosPrinter, Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StatusUpdated(event_token token) = 0;
};

struct __declspec(uuid("cde95721-4380-4985-adc5-39db30cd93bc")) __declspec(novtable) IPosPrinterCapabilities : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PowerReportingType(winrt::Windows::Devices::PointOfService::UnifiedPosPowerReportingType * value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsReportingSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_DefaultCharacterSet(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_HasCoverSensor(bool * value) = 0;
    virtual HRESULT __stdcall get_CanMapCharacterSet(bool * value) = 0;
    virtual HRESULT __stdcall get_IsTransactionSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_Receipt(Windows::Devices::PointOfService::IReceiptPrinterCapabilities ** value) = 0;
    virtual HRESULT __stdcall get_Slip(Windows::Devices::PointOfService::ISlipPrinterCapabilities ** value) = 0;
    virtual HRESULT __stdcall get_Journal(Windows::Devices::PointOfService::IJournalPrinterCapabilities ** value) = 0;
};

struct __declspec(uuid("5c709eff-709a-4fe7-b215-06a748a38b39")) __declspec(novtable) IPosPrinterCharacterSetIdsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Utf16LE(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ascii(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Ansi(uint32_t * value) = 0;
};

struct __declspec(uuid("9a94005c-0615-4591-a58f-30f87edfe2e4")) __declspec(novtable) IPosPrinterJob : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Print(hstring data) = 0;
    virtual HRESULT __stdcall abi_PrintLine(hstring data) = 0;
    virtual HRESULT __stdcall abi_PrintNewline() = 0;
    virtual HRESULT __stdcall abi_ExecuteAsync(Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
};

struct __declspec(uuid("2bcba359-1cef-40b2-9ecb-f927f856ae3c")) __declspec(novtable) IPosPrinterReleaseDeviceRequestedEventArgs : Windows::IInspectable
{
};

struct __declspec(uuid("8ce0d4ea-132f-4cdf-a64a-2d0d7c96a85b")) __declspec(novtable) IPosPrinterStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefaultAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::PosPrinter> ** result) = 0;
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::PosPrinter> ** result) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelector(hstring * value) = 0;
};

struct __declspec(uuid("d1f0c730-da40-4328-bf76-5156fa33b747")) __declspec(novtable) IPosPrinterStatus : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StatusKind(winrt::Windows::Devices::PointOfService::PosPrinterStatusKind * value) = 0;
    virtual HRESULT __stdcall get_ExtendedStatus(uint32_t * value) = 0;
};

struct __declspec(uuid("2edb87df-13a6-428d-ba81-b0e7c3e5a3cd")) __declspec(novtable) IPosPrinterStatusUpdatedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(Windows::Devices::PointOfService::IPosPrinterStatus ** value) = 0;
};

struct __declspec(uuid("532199be-c8c3-4dc2-89e9-5c4a37b34ddc")) __declspec(novtable) IReceiptOrSlipJob : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetBarcodeRotation(winrt::Windows::Devices::PointOfService::PosPrinterRotation value) = 0;
    virtual HRESULT __stdcall abi_SetPrintRotation(winrt::Windows::Devices::PointOfService::PosPrinterRotation value, bool includeBitmaps) = 0;
    virtual HRESULT __stdcall abi_SetPrintArea(Windows::Foundation::Rect value) = 0;
    virtual HRESULT __stdcall abi_SetBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::IBitmapFrame * bitmap, winrt::Windows::Devices::PointOfService::PosPrinterAlignment alignment) = 0;
    virtual HRESULT __stdcall abi_SetBitmapCustomWidthStandardAlign(uint32_t bitmapNumber, Windows::Graphics::Imaging::IBitmapFrame * bitmap, winrt::Windows::Devices::PointOfService::PosPrinterAlignment alignment, uint32_t width) = 0;
    virtual HRESULT __stdcall abi_SetCustomAlignedBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::IBitmapFrame * bitmap, uint32_t alignmentDistance) = 0;
    virtual HRESULT __stdcall abi_SetBitmapCustomWidthCustomAlign(uint32_t bitmapNumber, Windows::Graphics::Imaging::IBitmapFrame * bitmap, uint32_t alignmentDistance, uint32_t width) = 0;
    virtual HRESULT __stdcall abi_PrintSavedBitmap(uint32_t bitmapNumber) = 0;
    virtual HRESULT __stdcall abi_DrawRuledLine(hstring positionList, winrt::Windows::Devices::PointOfService::PosPrinterLineDirection lineDirection, uint32_t lineWidth, winrt::Windows::Devices::PointOfService::PosPrinterLineStyle lineStyle, uint32_t lineColor) = 0;
    virtual HRESULT __stdcall abi_PrintBarcode(hstring data, uint32_t symbology, uint32_t height, uint32_t width, winrt::Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition textPosition, winrt::Windows::Devices::PointOfService::PosPrinterAlignment alignment) = 0;
    virtual HRESULT __stdcall abi_PrintBarcodeCustomAlign(hstring data, uint32_t symbology, uint32_t height, uint32_t width, winrt::Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition textPosition, uint32_t alignmentDistance) = 0;
    virtual HRESULT __stdcall abi_PrintBitmap(Windows::Graphics::Imaging::IBitmapFrame * bitmap, winrt::Windows::Devices::PointOfService::PosPrinterAlignment alignment) = 0;
    virtual HRESULT __stdcall abi_PrintBitmapCustomWidthStandardAlign(Windows::Graphics::Imaging::IBitmapFrame * bitmap, winrt::Windows::Devices::PointOfService::PosPrinterAlignment alignment, uint32_t width) = 0;
    virtual HRESULT __stdcall abi_PrintCustomAlignedBitmap(Windows::Graphics::Imaging::IBitmapFrame * bitmap, uint32_t alignmentDistance) = 0;
    virtual HRESULT __stdcall abi_PrintBitmapCustomWidthCustomAlign(Windows::Graphics::Imaging::IBitmapFrame * bitmap, uint32_t alignmentDistance, uint32_t width) = 0;
};

struct __declspec(uuid("aa96066e-acad-4b79-9d0f-c0cfc08dc77b")) __declspec(novtable) IReceiptPrintJob : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_MarkFeed(winrt::Windows::Devices::PointOfService::PosPrinterMarkFeedKind kind) = 0;
    virtual HRESULT __stdcall abi_CutPaper(double percentage) = 0;
    virtual HRESULT __stdcall abi_CutPaperDefault() = 0;
};

struct __declspec(uuid("b8f0b58f-51a8-43fc-9bd5-8de272a6415b")) __declspec(novtable) IReceiptPrinterCapabilities : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CanCutPaper(bool * value) = 0;
    virtual HRESULT __stdcall get_IsStampSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_MarkFeedCapabilities(winrt::Windows::Devices::PointOfService::PosPrinterMarkFeedCapabilities * value) = 0;
};

struct __declspec(uuid("99b16399-488c-4157-8ac2-9f57f708d3db")) __declspec(novtable) ISlipPrinterCapabilities : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsFullLengthSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsBothSidesPrintingSupported(bool * value) = 0;
};

struct __declspec(uuid("2b998c3a-555c-4889-8ed8-c599bb3a712a")) __declspec(novtable) IUnifiedPosErrorData : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Message(hstring * value) = 0;
    virtual HRESULT __stdcall get_Severity(winrt::Windows::Devices::PointOfService::UnifiedPosErrorSeverity * value) = 0;
    virtual HRESULT __stdcall get_Reason(winrt::Windows::Devices::PointOfService::UnifiedPosErrorReason * value) = 0;
    virtual HRESULT __stdcall get_ExtendedReason(uint32_t * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::PointOfService::BarcodeScanner> { using default_interface = Windows::Devices::PointOfService::IBarcodeScanner; };
template <> struct traits<Windows::Devices::PointOfService::BarcodeScannerCapabilities> { using default_interface = Windows::Devices::PointOfService::IBarcodeScannerCapabilities; };
template <> struct traits<Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs> { using default_interface = Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs> { using default_interface = Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs> { using default_interface = Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::BarcodeScannerReport> { using default_interface = Windows::Devices::PointOfService::IBarcodeScannerReport; };
template <> struct traits<Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs> { using default_interface = Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::CashDrawer> { using default_interface = Windows::Devices::PointOfService::ICashDrawer; };
template <> struct traits<Windows::Devices::PointOfService::CashDrawerCapabilities> { using default_interface = Windows::Devices::PointOfService::ICashDrawerCapabilities; };
template <> struct traits<Windows::Devices::PointOfService::CashDrawerCloseAlarm> { using default_interface = Windows::Devices::PointOfService::ICashDrawerCloseAlarm; };
template <> struct traits<Windows::Devices::PointOfService::CashDrawerClosedEventArgs> { using default_interface = Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::CashDrawerEventSource> { using default_interface = Windows::Devices::PointOfService::ICashDrawerEventSource; };
template <> struct traits<Windows::Devices::PointOfService::CashDrawerOpenedEventArgs> { using default_interface = Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::CashDrawerStatus> { using default_interface = Windows::Devices::PointOfService::ICashDrawerStatus; };
template <> struct traits<Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs> { using default_interface = Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::ClaimedBarcodeScanner> { using default_interface = Windows::Devices::PointOfService::IClaimedBarcodeScanner; };
template <> struct traits<Windows::Devices::PointOfService::ClaimedCashDrawer> { using default_interface = Windows::Devices::PointOfService::IClaimedCashDrawer; };
template <> struct traits<Windows::Devices::PointOfService::ClaimedJournalPrinter> { using default_interface = Windows::Devices::PointOfService::IClaimedJournalPrinter; };
template <> struct traits<Windows::Devices::PointOfService::ClaimedMagneticStripeReader> { using default_interface = Windows::Devices::PointOfService::IClaimedMagneticStripeReader; };
template <> struct traits<Windows::Devices::PointOfService::ClaimedPosPrinter> { using default_interface = Windows::Devices::PointOfService::IClaimedPosPrinter; };
template <> struct traits<Windows::Devices::PointOfService::ClaimedReceiptPrinter> { using default_interface = Windows::Devices::PointOfService::IClaimedReceiptPrinter; };
template <> struct traits<Windows::Devices::PointOfService::ClaimedSlipPrinter> { using default_interface = Windows::Devices::PointOfService::IClaimedSlipPrinter; };
template <> struct traits<Windows::Devices::PointOfService::JournalPrintJob> { using default_interface = Windows::Devices::PointOfService::IPosPrinterJob; };
template <> struct traits<Windows::Devices::PointOfService::JournalPrinterCapabilities> { using default_interface = Windows::Devices::PointOfService::IJournalPrinterCapabilities; };
template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReader> { using default_interface = Windows::Devices::PointOfService::IMagneticStripeReader; };
template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs> { using default_interface = Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs> { using default_interface = Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderCapabilities> { using default_interface = Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities; };
template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs> { using default_interface = Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderReport> { using default_interface = Windows::Devices::PointOfService::IMagneticStripeReaderReport; };
template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs> { using default_interface = Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderTrackData> { using default_interface = Windows::Devices::PointOfService::IMagneticStripeReaderTrackData; };
template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> { using default_interface = Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::PosPrinter> { using default_interface = Windows::Devices::PointOfService::IPosPrinter; };
template <> struct traits<Windows::Devices::PointOfService::PosPrinterCapabilities> { using default_interface = Windows::Devices::PointOfService::IPosPrinterCapabilities; };
template <> struct traits<Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs> { using default_interface = Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::PosPrinterStatus> { using default_interface = Windows::Devices::PointOfService::IPosPrinterStatus; };
template <> struct traits<Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs> { using default_interface = Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs; };
template <> struct traits<Windows::Devices::PointOfService::ReceiptPrintJob> { using default_interface = Windows::Devices::PointOfService::IReceiptPrintJob; };
template <> struct traits<Windows::Devices::PointOfService::ReceiptPrinterCapabilities> { using default_interface = Windows::Devices::PointOfService::IReceiptPrinterCapabilities; };
template <> struct traits<Windows::Devices::PointOfService::SlipPrintJob> { using default_interface = Windows::Devices::PointOfService::IReceiptOrSlipJob; };
template <> struct traits<Windows::Devices::PointOfService::SlipPrinterCapabilities> { using default_interface = Windows::Devices::PointOfService::ISlipPrinterCapabilities; };
template <> struct traits<Windows::Devices::PointOfService::UnifiedPosErrorData> { using default_interface = Windows::Devices::PointOfService::IUnifiedPosErrorData; };

}

namespace Windows::Devices::PointOfService {

template <typename T> struct impl_IBarcodeScanner;
template <typename T> struct impl_IBarcodeScanner2;
template <typename T> struct impl_IBarcodeScannerCapabilities;
template <typename T> struct impl_IBarcodeScannerCapabilities1;
template <typename T> struct impl_IBarcodeScannerDataReceivedEventArgs;
template <typename T> struct impl_IBarcodeScannerErrorOccurredEventArgs;
template <typename T> struct impl_IBarcodeScannerImagePreviewReceivedEventArgs;
template <typename T> struct impl_IBarcodeScannerReport;
template <typename T> struct impl_IBarcodeScannerStatics;
template <typename T> struct impl_IBarcodeScannerStatusUpdatedEventArgs;
template <typename T> struct impl_IBarcodeSymbologiesStatics;
template <typename T> struct impl_ICashDrawer;
template <typename T> struct impl_ICashDrawerCapabilities;
template <typename T> struct impl_ICashDrawerCloseAlarm;
template <typename T> struct impl_ICashDrawerEventSource;
template <typename T> struct impl_ICashDrawerEventSourceEventArgs;
template <typename T> struct impl_ICashDrawerStatics;
template <typename T> struct impl_ICashDrawerStatus;
template <typename T> struct impl_ICashDrawerStatusUpdatedEventArgs;
template <typename T> struct impl_IClaimedBarcodeScanner;
template <typename T> struct impl_IClaimedBarcodeScanner1;
template <typename T> struct impl_IClaimedCashDrawer;
template <typename T> struct impl_IClaimedJournalPrinter;
template <typename T> struct impl_IClaimedMagneticStripeReader;
template <typename T> struct impl_IClaimedPosPrinter;
template <typename T> struct impl_IClaimedReceiptPrinter;
template <typename T> struct impl_IClaimedSlipPrinter;
template <typename T> struct impl_ICommonClaimedPosPrinterStation;
template <typename T> struct impl_ICommonPosPrintStationCapabilities;
template <typename T> struct impl_ICommonReceiptSlipCapabilities;
template <typename T> struct impl_IJournalPrinterCapabilities;
template <typename T> struct impl_IMagneticStripeReader;
template <typename T> struct impl_IMagneticStripeReaderAamvaCardDataReceivedEventArgs;
template <typename T> struct impl_IMagneticStripeReaderBankCardDataReceivedEventArgs;
template <typename T> struct impl_IMagneticStripeReaderCapabilities;
template <typename T> struct impl_IMagneticStripeReaderCardTypesStatics;
template <typename T> struct impl_IMagneticStripeReaderEncryptionAlgorithmsStatics;
template <typename T> struct impl_IMagneticStripeReaderErrorOccurredEventArgs;
template <typename T> struct impl_IMagneticStripeReaderReport;
template <typename T> struct impl_IMagneticStripeReaderStatics;
template <typename T> struct impl_IMagneticStripeReaderStatusUpdatedEventArgs;
template <typename T> struct impl_IMagneticStripeReaderTrackData;
template <typename T> struct impl_IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
template <typename T> struct impl_IPosPrinter;
template <typename T> struct impl_IPosPrinterCapabilities;
template <typename T> struct impl_IPosPrinterCharacterSetIdsStatics;
template <typename T> struct impl_IPosPrinterJob;
template <typename T> struct impl_IPosPrinterReleaseDeviceRequestedEventArgs;
template <typename T> struct impl_IPosPrinterStatics;
template <typename T> struct impl_IPosPrinterStatus;
template <typename T> struct impl_IPosPrinterStatusUpdatedEventArgs;
template <typename T> struct impl_IReceiptOrSlipJob;
template <typename T> struct impl_IReceiptPrintJob;
template <typename T> struct impl_IReceiptPrinterCapabilities;
template <typename T> struct impl_ISlipPrinterCapabilities;
template <typename T> struct impl_IUnifiedPosErrorData;

}

namespace impl {

template <> struct traits<Windows::Devices::PointOfService::IBarcodeScanner>
{
    using abi = ABI::Windows::Devices::PointOfService::IBarcodeScanner;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IBarcodeScanner<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IBarcodeScanner2>
{
    using abi = ABI::Windows::Devices::PointOfService::IBarcodeScanner2;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IBarcodeScanner2<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IBarcodeScannerCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::IBarcodeScannerCapabilities;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IBarcodeScannerCapabilities<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IBarcodeScannerCapabilities1>
{
    using abi = ABI::Windows::Devices::PointOfService::IBarcodeScannerCapabilities1;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IBarcodeScannerCapabilities1<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IBarcodeScannerDataReceivedEventArgs<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IBarcodeScannerErrorOccurredEventArgs<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IBarcodeScannerImagePreviewReceivedEventArgs<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IBarcodeScannerReport>
{
    using abi = ABI::Windows::Devices::PointOfService::IBarcodeScannerReport;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IBarcodeScannerReport<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IBarcodeScannerStatics>
{
    using abi = ABI::Windows::Devices::PointOfService::IBarcodeScannerStatics;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IBarcodeScannerStatics<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IBarcodeScannerStatusUpdatedEventArgs<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>
{
    using abi = ABI::Windows::Devices::PointOfService::IBarcodeSymbologiesStatics;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IBarcodeSymbologiesStatics<D>;
};

template <> struct traits<Windows::Devices::PointOfService::ICashDrawer>
{
    using abi = ABI::Windows::Devices::PointOfService::ICashDrawer;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_ICashDrawer<D>;
};

template <> struct traits<Windows::Devices::PointOfService::ICashDrawerCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::ICashDrawerCapabilities;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_ICashDrawerCapabilities<D>;
};

template <> struct traits<Windows::Devices::PointOfService::ICashDrawerCloseAlarm>
{
    using abi = ABI::Windows::Devices::PointOfService::ICashDrawerCloseAlarm;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_ICashDrawerCloseAlarm<D>;
};

template <> struct traits<Windows::Devices::PointOfService::ICashDrawerEventSource>
{
    using abi = ABI::Windows::Devices::PointOfService::ICashDrawerEventSource;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_ICashDrawerEventSource<D>;
};

template <> struct traits<Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_ICashDrawerEventSourceEventArgs<D>;
};

template <> struct traits<Windows::Devices::PointOfService::ICashDrawerStatics>
{
    using abi = ABI::Windows::Devices::PointOfService::ICashDrawerStatics;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_ICashDrawerStatics<D>;
};

template <> struct traits<Windows::Devices::PointOfService::ICashDrawerStatus>
{
    using abi = ABI::Windows::Devices::PointOfService::ICashDrawerStatus;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_ICashDrawerStatus<D>;
};

template <> struct traits<Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_ICashDrawerStatusUpdatedEventArgs<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IClaimedBarcodeScanner>
{
    using abi = ABI::Windows::Devices::PointOfService::IClaimedBarcodeScanner;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IClaimedBarcodeScanner<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IClaimedBarcodeScanner1>
{
    using abi = ABI::Windows::Devices::PointOfService::IClaimedBarcodeScanner1;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IClaimedBarcodeScanner1<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IClaimedCashDrawer>
{
    using abi = ABI::Windows::Devices::PointOfService::IClaimedCashDrawer;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IClaimedCashDrawer<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IClaimedJournalPrinter>
{
    using abi = ABI::Windows::Devices::PointOfService::IClaimedJournalPrinter;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IClaimedJournalPrinter<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>
{
    using abi = ABI::Windows::Devices::PointOfService::IClaimedMagneticStripeReader;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IClaimedMagneticStripeReader<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IClaimedPosPrinter>
{
    using abi = ABI::Windows::Devices::PointOfService::IClaimedPosPrinter;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IClaimedPosPrinter<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IClaimedReceiptPrinter>
{
    using abi = ABI::Windows::Devices::PointOfService::IClaimedReceiptPrinter;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IClaimedReceiptPrinter<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IClaimedSlipPrinter>
{
    using abi = ABI::Windows::Devices::PointOfService::IClaimedSlipPrinter;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IClaimedSlipPrinter<D>;
};

template <> struct traits<Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
{
    using abi = ABI::Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_ICommonClaimedPosPrinterStation<D>;
};

template <> struct traits<Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_ICommonPosPrintStationCapabilities<D>;
};

template <> struct traits<Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_ICommonReceiptSlipCapabilities<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IJournalPrinterCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::IJournalPrinterCapabilities;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IJournalPrinterCapabilities<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IMagneticStripeReader>
{
    using abi = ABI::Windows::Devices::PointOfService::IMagneticStripeReader;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IMagneticStripeReader<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IMagneticStripeReaderBankCardDataReceivedEventArgs<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IMagneticStripeReaderCapabilities<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>
{
    using abi = ABI::Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IMagneticStripeReaderCardTypesStatics<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>
{
    using abi = ABI::Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IMagneticStripeReaderEncryptionAlgorithmsStatics<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IMagneticStripeReaderErrorOccurredEventArgs<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IMagneticStripeReaderReport>
{
    using abi = ABI::Windows::Devices::PointOfService::IMagneticStripeReaderReport;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IMagneticStripeReaderReport<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IMagneticStripeReaderStatics>
{
    using abi = ABI::Windows::Devices::PointOfService::IMagneticStripeReaderStatics;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IMagneticStripeReaderStatics<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IMagneticStripeReaderStatusUpdatedEventArgs<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IMagneticStripeReaderTrackData>
{
    using abi = ABI::Windows::Devices::PointOfService::IMagneticStripeReaderTrackData;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IMagneticStripeReaderTrackData<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IPosPrinter>
{
    using abi = ABI::Windows::Devices::PointOfService::IPosPrinter;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IPosPrinter<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IPosPrinterCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::IPosPrinterCapabilities;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IPosPrinterCapabilities<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>
{
    using abi = ABI::Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IPosPrinterCharacterSetIdsStatics<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IPosPrinterJob>
{
    using abi = ABI::Windows::Devices::PointOfService::IPosPrinterJob;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IPosPrinterJob<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IPosPrinterReleaseDeviceRequestedEventArgs<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IPosPrinterStatics>
{
    using abi = ABI::Windows::Devices::PointOfService::IPosPrinterStatics;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IPosPrinterStatics<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IPosPrinterStatus>
{
    using abi = ABI::Windows::Devices::PointOfService::IPosPrinterStatus;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IPosPrinterStatus<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IPosPrinterStatusUpdatedEventArgs<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IReceiptOrSlipJob>
{
    using abi = ABI::Windows::Devices::PointOfService::IReceiptOrSlipJob;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IReceiptOrSlipJob<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IReceiptPrintJob>
{
    using abi = ABI::Windows::Devices::PointOfService::IReceiptPrintJob;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IReceiptPrintJob<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IReceiptPrinterCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::IReceiptPrinterCapabilities;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IReceiptPrinterCapabilities<D>;
};

template <> struct traits<Windows::Devices::PointOfService::ISlipPrinterCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::ISlipPrinterCapabilities;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_ISlipPrinterCapabilities<D>;
};

template <> struct traits<Windows::Devices::PointOfService::IUnifiedPosErrorData>
{
    using abi = ABI::Windows::Devices::PointOfService::IUnifiedPosErrorData;
    template <typename D> using consume = Windows::Devices::PointOfService::impl_IUnifiedPosErrorData<D>;
};

template <> struct traits<Windows::Devices::PointOfService::BarcodeScanner>
{
    using abi = ABI::Windows::Devices::PointOfService::BarcodeScanner;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.BarcodeScanner"; }
};

template <> struct traits<Windows::Devices::PointOfService::BarcodeScannerCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::BarcodeScannerCapabilities;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.BarcodeScannerCapabilities"; }
};

template <> struct traits<Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.BarcodeScannerDataReceivedEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.BarcodeScannerErrorOccurredEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.BarcodeScannerImagePreviewReceivedEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::BarcodeScannerReport>
{
    using abi = ABI::Windows::Devices::PointOfService::BarcodeScannerReport;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.BarcodeScannerReport"; }
};

template <> struct traits<Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.BarcodeScannerStatusUpdatedEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::BarcodeSymbologies>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.BarcodeSymbologies"; }
};

template <> struct traits<Windows::Devices::PointOfService::CashDrawer>
{
    using abi = ABI::Windows::Devices::PointOfService::CashDrawer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.CashDrawer"; }
};

template <> struct traits<Windows::Devices::PointOfService::CashDrawerCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::CashDrawerCapabilities;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.CashDrawerCapabilities"; }
};

template <> struct traits<Windows::Devices::PointOfService::CashDrawerCloseAlarm>
{
    using abi = ABI::Windows::Devices::PointOfService::CashDrawerCloseAlarm;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.CashDrawerCloseAlarm"; }
};

template <> struct traits<Windows::Devices::PointOfService::CashDrawerClosedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::CashDrawerClosedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.CashDrawerClosedEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::CashDrawerEventSource>
{
    using abi = ABI::Windows::Devices::PointOfService::CashDrawerEventSource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.CashDrawerEventSource"; }
};

template <> struct traits<Windows::Devices::PointOfService::CashDrawerOpenedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::CashDrawerOpenedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.CashDrawerOpenedEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::CashDrawerStatus>
{
    using abi = ABI::Windows::Devices::PointOfService::CashDrawerStatus;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.CashDrawerStatus"; }
};

template <> struct traits<Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.CashDrawerStatusUpdatedEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::ClaimedBarcodeScanner>
{
    using abi = ABI::Windows::Devices::PointOfService::ClaimedBarcodeScanner;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.ClaimedBarcodeScanner"; }
};

template <> struct traits<Windows::Devices::PointOfService::ClaimedCashDrawer>
{
    using abi = ABI::Windows::Devices::PointOfService::ClaimedCashDrawer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.ClaimedCashDrawer"; }
};

template <> struct traits<Windows::Devices::PointOfService::ClaimedJournalPrinter>
{
    using abi = ABI::Windows::Devices::PointOfService::ClaimedJournalPrinter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.ClaimedJournalPrinter"; }
};

template <> struct traits<Windows::Devices::PointOfService::ClaimedMagneticStripeReader>
{
    using abi = ABI::Windows::Devices::PointOfService::ClaimedMagneticStripeReader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.ClaimedMagneticStripeReader"; }
};

template <> struct traits<Windows::Devices::PointOfService::ClaimedPosPrinter>
{
    using abi = ABI::Windows::Devices::PointOfService::ClaimedPosPrinter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.ClaimedPosPrinter"; }
};

template <> struct traits<Windows::Devices::PointOfService::ClaimedReceiptPrinter>
{
    using abi = ABI::Windows::Devices::PointOfService::ClaimedReceiptPrinter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.ClaimedReceiptPrinter"; }
};

template <> struct traits<Windows::Devices::PointOfService::ClaimedSlipPrinter>
{
    using abi = ABI::Windows::Devices::PointOfService::ClaimedSlipPrinter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.ClaimedSlipPrinter"; }
};

template <> struct traits<Windows::Devices::PointOfService::JournalPrintJob>
{
    using abi = ABI::Windows::Devices::PointOfService::JournalPrintJob;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.JournalPrintJob"; }
};

template <> struct traits<Windows::Devices::PointOfService::JournalPrinterCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::JournalPrinterCapabilities;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.JournalPrinterCapabilities"; }
};

template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReader>
{
    using abi = ABI::Windows::Devices::PointOfService::MagneticStripeReader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.MagneticStripeReader"; }
};

template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.MagneticStripeReaderAamvaCardDataReceivedEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.MagneticStripeReaderBankCardDataReceivedEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::MagneticStripeReaderCapabilities;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.MagneticStripeReaderCapabilities"; }
};

template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderCardTypes>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.MagneticStripeReaderCardTypes"; }
};

template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderEncryptionAlgorithms>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.MagneticStripeReaderEncryptionAlgorithms"; }
};

template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.MagneticStripeReaderErrorOccurredEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderReport>
{
    using abi = ABI::Windows::Devices::PointOfService::MagneticStripeReaderReport;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.MagneticStripeReaderReport"; }
};

template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.MagneticStripeReaderStatusUpdatedEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderTrackData>
{
    using abi = ABI::Windows::Devices::PointOfService::MagneticStripeReaderTrackData;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.MagneticStripeReaderTrackData"; }
};

template <> struct traits<Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::PosPrinter>
{
    using abi = ABI::Windows::Devices::PointOfService::PosPrinter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.PosPrinter"; }
};

template <> struct traits<Windows::Devices::PointOfService::PosPrinterCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::PosPrinterCapabilities;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.PosPrinterCapabilities"; }
};

template <> struct traits<Windows::Devices::PointOfService::PosPrinterCharacterSetIds>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.PosPrinterCharacterSetIds"; }
};

template <> struct traits<Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.PosPrinterReleaseDeviceRequestedEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::PosPrinterStatus>
{
    using abi = ABI::Windows::Devices::PointOfService::PosPrinterStatus;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.PosPrinterStatus"; }
};

template <> struct traits<Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs>
{
    using abi = ABI::Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.PosPrinterStatusUpdatedEventArgs"; }
};

template <> struct traits<Windows::Devices::PointOfService::ReceiptPrintJob>
{
    using abi = ABI::Windows::Devices::PointOfService::ReceiptPrintJob;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.ReceiptPrintJob"; }
};

template <> struct traits<Windows::Devices::PointOfService::ReceiptPrinterCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::ReceiptPrinterCapabilities;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.ReceiptPrinterCapabilities"; }
};

template <> struct traits<Windows::Devices::PointOfService::SlipPrintJob>
{
    using abi = ABI::Windows::Devices::PointOfService::SlipPrintJob;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.SlipPrintJob"; }
};

template <> struct traits<Windows::Devices::PointOfService::SlipPrinterCapabilities>
{
    using abi = ABI::Windows::Devices::PointOfService::SlipPrinterCapabilities;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.SlipPrinterCapabilities"; }
};

template <> struct traits<Windows::Devices::PointOfService::UnifiedPosErrorData>
{
    using abi = ABI::Windows::Devices::PointOfService::UnifiedPosErrorData;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.PointOfService.UnifiedPosErrorData"; }
};

}

}
