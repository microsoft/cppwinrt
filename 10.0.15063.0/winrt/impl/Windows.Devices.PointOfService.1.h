// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.PointOfService.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::PointOfService {

struct WINRT_EBO IBarcodeScanner :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScanner>
{
    IBarcodeScanner(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScanner2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScanner2>
{
    IBarcodeScanner2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerCapabilities>
{
    IBarcodeScannerCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerCapabilities1 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerCapabilities1>
{
    IBarcodeScannerCapabilities1(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerDataReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerDataReceivedEventArgs>
{
    IBarcodeScannerDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerErrorOccurredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerErrorOccurredEventArgs>
{
    IBarcodeScannerErrorOccurredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerImagePreviewReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerImagePreviewReceivedEventArgs>
{
    IBarcodeScannerImagePreviewReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerReport>
{
    IBarcodeScannerReport(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerStatics>
{
    IBarcodeScannerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerStatics2>
{
    IBarcodeScannerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerStatusUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerStatusUpdatedEventArgs>
{
    IBarcodeScannerStatusUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeSymbologiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeSymbologiesStatics>
{
    IBarcodeSymbologiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeSymbologiesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeSymbologiesStatics2>
{
    IBarcodeSymbologiesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeSymbologyAttributes :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeSymbologyAttributes>
{
    IBarcodeSymbologyAttributes(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICashDrawer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawer>
{
    ICashDrawer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICashDrawerCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerCapabilities>
{
    ICashDrawerCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICashDrawerCloseAlarm :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerCloseAlarm>
{
    ICashDrawerCloseAlarm(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICashDrawerEventSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerEventSource>
{
    ICashDrawerEventSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICashDrawerEventSourceEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerEventSourceEventArgs>
{
    ICashDrawerEventSourceEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICashDrawerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerStatics>
{
    ICashDrawerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICashDrawerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerStatics2>
{
    ICashDrawerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICashDrawerStatus :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerStatus>
{
    ICashDrawerStatus(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICashDrawerStatusUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerStatusUpdatedEventArgs>
{
    ICashDrawerStatusUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IClaimedBarcodeScanner :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedBarcodeScanner>,
    impl::require<IClaimedBarcodeScanner, Windows::Foundation::IClosable>
{
    IClaimedBarcodeScanner(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IClaimedBarcodeScanner1 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedBarcodeScanner1>,
    impl::require<IClaimedBarcodeScanner1, Windows::Foundation::IClosable>
{
    IClaimedBarcodeScanner1(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IClaimedBarcodeScanner2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedBarcodeScanner2>,
    impl::require<IClaimedBarcodeScanner2, Windows::Foundation::IClosable>
{
    IClaimedBarcodeScanner2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IClaimedCashDrawer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedCashDrawer>,
    impl::require<IClaimedCashDrawer, Windows::Foundation::IClosable>
{
    IClaimedCashDrawer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IClaimedJournalPrinter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedJournalPrinter>,
    impl::require<IClaimedJournalPrinter, Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
{
    IClaimedJournalPrinter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IClaimedLineDisplay :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedLineDisplay>,
    impl::require<IClaimedLineDisplay, Windows::Foundation::IClosable>
{
    IClaimedLineDisplay(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IClaimedLineDisplayStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedLineDisplayStatics>
{
    IClaimedLineDisplayStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IClaimedMagneticStripeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedMagneticStripeReader>,
    impl::require<IClaimedMagneticStripeReader, Windows::Foundation::IClosable>
{
    IClaimedMagneticStripeReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IClaimedPosPrinter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedPosPrinter>,
    impl::require<IClaimedPosPrinter, Windows::Foundation::IClosable>
{
    IClaimedPosPrinter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IClaimedReceiptPrinter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedReceiptPrinter>,
    impl::require<IClaimedReceiptPrinter, Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
{
    IClaimedReceiptPrinter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IClaimedSlipPrinter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedSlipPrinter>,
    impl::require<IClaimedSlipPrinter, Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
{
    IClaimedSlipPrinter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICommonClaimedPosPrinterStation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommonClaimedPosPrinterStation>
{
    ICommonClaimedPosPrinterStation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICommonPosPrintStationCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommonPosPrintStationCapabilities>
{
    ICommonPosPrintStationCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICommonReceiptSlipCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommonReceiptSlipCapabilities>,
    impl::require<ICommonReceiptSlipCapabilities, Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>
{
    ICommonReceiptSlipCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IJournalPrinterCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJournalPrinterCapabilities>,
    impl::require<IJournalPrinterCapabilities, Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>
{
    IJournalPrinterCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILineDisplay :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineDisplay>,
    impl::require<ILineDisplay, Windows::Foundation::IClosable>
{
    ILineDisplay(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILineDisplayCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineDisplayCapabilities>
{
    ILineDisplayCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILineDisplayStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineDisplayStatics>
{
    ILineDisplayStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILineDisplayWindow :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineDisplayWindow>,
    impl::require<ILineDisplayWindow, Windows::Foundation::IClosable>
{
    ILineDisplayWindow(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMagneticStripeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReader>
{
    IMagneticStripeReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMagneticStripeReaderAamvaCardDataReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderAamvaCardDataReceivedEventArgs>
{
    IMagneticStripeReaderAamvaCardDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMagneticStripeReaderBankCardDataReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderBankCardDataReceivedEventArgs>
{
    IMagneticStripeReaderBankCardDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMagneticStripeReaderCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderCapabilities>
{
    IMagneticStripeReaderCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMagneticStripeReaderCardTypesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderCardTypesStatics>
{
    IMagneticStripeReaderCardTypesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMagneticStripeReaderEncryptionAlgorithmsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderEncryptionAlgorithmsStatics>
{
    IMagneticStripeReaderEncryptionAlgorithmsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMagneticStripeReaderErrorOccurredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderErrorOccurredEventArgs>
{
    IMagneticStripeReaderErrorOccurredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMagneticStripeReaderReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderReport>
{
    IMagneticStripeReaderReport(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMagneticStripeReaderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderStatics>
{
    IMagneticStripeReaderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMagneticStripeReaderStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderStatics2>
{
    IMagneticStripeReaderStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMagneticStripeReaderStatusUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderStatusUpdatedEventArgs>
{
    IMagneticStripeReaderStatusUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMagneticStripeReaderTrackData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderTrackData>
{
    IMagneticStripeReaderTrackData(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
{
    IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPosPrinter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinter>
{
    IPosPrinter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPosPrinterCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterCapabilities>
{
    IPosPrinterCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPosPrinterCharacterSetIdsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterCharacterSetIdsStatics>
{
    IPosPrinterCharacterSetIdsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPosPrinterJob :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterJob>
{
    IPosPrinterJob(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPosPrinterReleaseDeviceRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterReleaseDeviceRequestedEventArgs>
{
    IPosPrinterReleaseDeviceRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPosPrinterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterStatics>
{
    IPosPrinterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPosPrinterStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterStatics2>
{
    IPosPrinterStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPosPrinterStatus :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterStatus>
{
    IPosPrinterStatus(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPosPrinterStatusUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterStatusUpdatedEventArgs>
{
    IPosPrinterStatusUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IReceiptOrSlipJob :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReceiptOrSlipJob>,
    impl::require<IReceiptOrSlipJob, Windows::Devices::PointOfService::IPosPrinterJob>
{
    IReceiptOrSlipJob(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IReceiptPrintJob :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReceiptPrintJob>,
    impl::require<IReceiptPrintJob, Windows::Devices::PointOfService::IPosPrinterJob, Windows::Devices::PointOfService::IReceiptOrSlipJob>
{
    IReceiptPrintJob(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IReceiptPrinterCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReceiptPrinterCapabilities>,
    impl::require<IReceiptPrinterCapabilities, Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities, Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>
{
    IReceiptPrinterCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISlipPrinterCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISlipPrinterCapabilities>,
    impl::require<ISlipPrinterCapabilities, Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities, Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>
{
    ISlipPrinterCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUnifiedPosErrorData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUnifiedPosErrorData>
{
    IUnifiedPosErrorData(std::nullptr_t = nullptr) noexcept {}
};

}
