// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::PointOfService {

struct IBarcodeScanner;
struct IBarcodeScanner2;
struct IBarcodeScannerCapabilities;
struct IBarcodeScannerCapabilities1;
struct IBarcodeScannerDataReceivedEventArgs;
struct IBarcodeScannerErrorOccurredEventArgs;
struct IBarcodeScannerImagePreviewReceivedEventArgs;
struct IBarcodeScannerReport;
struct IBarcodeScannerStatics;
struct IBarcodeScannerStatusUpdatedEventArgs;
struct IBarcodeSymbologiesStatics;
struct ICashDrawer;
struct ICashDrawerCapabilities;
struct ICashDrawerCloseAlarm;
struct ICashDrawerEventSource;
struct ICashDrawerEventSourceEventArgs;
struct ICashDrawerStatics;
struct ICashDrawerStatus;
struct ICashDrawerStatusUpdatedEventArgs;
struct IClaimedBarcodeScanner;
struct IClaimedBarcodeScanner1;
struct IClaimedCashDrawer;
struct IClaimedJournalPrinter;
struct IClaimedMagneticStripeReader;
struct IClaimedPosPrinter;
struct IClaimedReceiptPrinter;
struct IClaimedSlipPrinter;
struct ICommonClaimedPosPrinterStation;
struct ICommonPosPrintStationCapabilities;
struct ICommonReceiptSlipCapabilities;
struct IJournalPrinterCapabilities;
struct IMagneticStripeReader;
struct IMagneticStripeReaderAamvaCardDataReceivedEventArgs;
struct IMagneticStripeReaderBankCardDataReceivedEventArgs;
struct IMagneticStripeReaderCapabilities;
struct IMagneticStripeReaderCardTypesStatics;
struct IMagneticStripeReaderEncryptionAlgorithmsStatics;
struct IMagneticStripeReaderErrorOccurredEventArgs;
struct IMagneticStripeReaderReport;
struct IMagneticStripeReaderStatics;
struct IMagneticStripeReaderStatusUpdatedEventArgs;
struct IMagneticStripeReaderTrackData;
struct IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
struct IPosPrinter;
struct IPosPrinterCapabilities;
struct IPosPrinterCharacterSetIdsStatics;
struct IPosPrinterJob;
struct IPosPrinterReleaseDeviceRequestedEventArgs;
struct IPosPrinterStatics;
struct IPosPrinterStatus;
struct IPosPrinterStatusUpdatedEventArgs;
struct IReceiptOrSlipJob;
struct IReceiptPrintJob;
struct IReceiptPrinterCapabilities;
struct ISlipPrinterCapabilities;
struct IUnifiedPosErrorData;
struct BarcodeScanner;
struct BarcodeScannerCapabilities;
struct BarcodeScannerDataReceivedEventArgs;
struct BarcodeScannerErrorOccurredEventArgs;
struct BarcodeScannerImagePreviewReceivedEventArgs;
struct BarcodeScannerReport;
struct BarcodeScannerStatusUpdatedEventArgs;
struct CashDrawer;
struct CashDrawerCapabilities;
struct CashDrawerCloseAlarm;
struct CashDrawerClosedEventArgs;
struct CashDrawerEventSource;
struct CashDrawerOpenedEventArgs;
struct CashDrawerStatus;
struct CashDrawerStatusUpdatedEventArgs;
struct ClaimedBarcodeScanner;
struct ClaimedCashDrawer;
struct ClaimedJournalPrinter;
struct ClaimedMagneticStripeReader;
struct ClaimedPosPrinter;
struct ClaimedReceiptPrinter;
struct ClaimedSlipPrinter;
struct JournalPrintJob;
struct JournalPrinterCapabilities;
struct MagneticStripeReader;
struct MagneticStripeReaderAamvaCardDataReceivedEventArgs;
struct MagneticStripeReaderBankCardDataReceivedEventArgs;
struct MagneticStripeReaderCapabilities;
struct MagneticStripeReaderErrorOccurredEventArgs;
struct MagneticStripeReaderReport;
struct MagneticStripeReaderStatusUpdatedEventArgs;
struct MagneticStripeReaderTrackData;
struct MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
struct PosPrinter;
struct PosPrinterCapabilities;
struct PosPrinterReleaseDeviceRequestedEventArgs;
struct PosPrinterStatus;
struct PosPrinterStatusUpdatedEventArgs;
struct ReceiptPrintJob;
struct ReceiptPrinterCapabilities;
struct SlipPrintJob;
struct SlipPrinterCapabilities;
struct UnifiedPosErrorData;

}

namespace Windows::Devices::PointOfService {

struct IBarcodeScanner;
struct IBarcodeScanner2;
struct IBarcodeScannerCapabilities;
struct IBarcodeScannerCapabilities1;
struct IBarcodeScannerDataReceivedEventArgs;
struct IBarcodeScannerErrorOccurredEventArgs;
struct IBarcodeScannerImagePreviewReceivedEventArgs;
struct IBarcodeScannerReport;
struct IBarcodeScannerStatics;
struct IBarcodeScannerStatusUpdatedEventArgs;
struct IBarcodeSymbologiesStatics;
struct ICashDrawer;
struct ICashDrawerCapabilities;
struct ICashDrawerCloseAlarm;
struct ICashDrawerEventSource;
struct ICashDrawerEventSourceEventArgs;
struct ICashDrawerStatics;
struct ICashDrawerStatus;
struct ICashDrawerStatusUpdatedEventArgs;
struct IClaimedBarcodeScanner;
struct IClaimedBarcodeScanner1;
struct IClaimedCashDrawer;
struct IClaimedJournalPrinter;
struct IClaimedMagneticStripeReader;
struct IClaimedPosPrinter;
struct IClaimedReceiptPrinter;
struct IClaimedSlipPrinter;
struct ICommonClaimedPosPrinterStation;
struct ICommonPosPrintStationCapabilities;
struct ICommonReceiptSlipCapabilities;
struct IJournalPrinterCapabilities;
struct IMagneticStripeReader;
struct IMagneticStripeReaderAamvaCardDataReceivedEventArgs;
struct IMagneticStripeReaderBankCardDataReceivedEventArgs;
struct IMagneticStripeReaderCapabilities;
struct IMagneticStripeReaderCardTypesStatics;
struct IMagneticStripeReaderEncryptionAlgorithmsStatics;
struct IMagneticStripeReaderErrorOccurredEventArgs;
struct IMagneticStripeReaderReport;
struct IMagneticStripeReaderStatics;
struct IMagneticStripeReaderStatusUpdatedEventArgs;
struct IMagneticStripeReaderTrackData;
struct IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
struct IPosPrinter;
struct IPosPrinterCapabilities;
struct IPosPrinterCharacterSetIdsStatics;
struct IPosPrinterJob;
struct IPosPrinterReleaseDeviceRequestedEventArgs;
struct IPosPrinterStatics;
struct IPosPrinterStatus;
struct IPosPrinterStatusUpdatedEventArgs;
struct IReceiptOrSlipJob;
struct IReceiptPrintJob;
struct IReceiptPrinterCapabilities;
struct ISlipPrinterCapabilities;
struct IUnifiedPosErrorData;
struct BarcodeScanner;
struct BarcodeScannerCapabilities;
struct BarcodeScannerDataReceivedEventArgs;
struct BarcodeScannerErrorOccurredEventArgs;
struct BarcodeScannerImagePreviewReceivedEventArgs;
struct BarcodeScannerReport;
struct BarcodeScannerStatusUpdatedEventArgs;
struct BarcodeSymbologies;
struct CashDrawer;
struct CashDrawerCapabilities;
struct CashDrawerCloseAlarm;
struct CashDrawerClosedEventArgs;
struct CashDrawerEventSource;
struct CashDrawerOpenedEventArgs;
struct CashDrawerStatus;
struct CashDrawerStatusUpdatedEventArgs;
struct ClaimedBarcodeScanner;
struct ClaimedCashDrawer;
struct ClaimedJournalPrinter;
struct ClaimedMagneticStripeReader;
struct ClaimedPosPrinter;
struct ClaimedReceiptPrinter;
struct ClaimedSlipPrinter;
struct JournalPrintJob;
struct JournalPrinterCapabilities;
struct MagneticStripeReader;
struct MagneticStripeReaderAamvaCardDataReceivedEventArgs;
struct MagneticStripeReaderBankCardDataReceivedEventArgs;
struct MagneticStripeReaderCapabilities;
struct MagneticStripeReaderCardTypes;
struct MagneticStripeReaderEncryptionAlgorithms;
struct MagneticStripeReaderErrorOccurredEventArgs;
struct MagneticStripeReaderReport;
struct MagneticStripeReaderStatusUpdatedEventArgs;
struct MagneticStripeReaderTrackData;
struct MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
struct PosPrinter;
struct PosPrinterCapabilities;
struct PosPrinterCharacterSetIds;
struct PosPrinterReleaseDeviceRequestedEventArgs;
struct PosPrinterStatus;
struct PosPrinterStatusUpdatedEventArgs;
struct ReceiptPrintJob;
struct ReceiptPrinterCapabilities;
struct SlipPrintJob;
struct SlipPrinterCapabilities;
struct UnifiedPosErrorData;

}

namespace Windows::Devices::PointOfService {

enum class BarcodeScannerStatus
{
    Online = 0,
    Off = 1,
    Offline = 2,
    OffOrOffline = 3,
    Extended = 4,
};

enum class CashDrawerStatusKind
{
    Online = 0,
    Off = 1,
    Offline = 2,
    OffOrOffline = 3,
    Extended = 4,
};

enum class MagneticStripeReaderAuthenticationLevel
{
    NotSupported = 0,
    Optional = 1,
    Required = 2,
};

enum class MagneticStripeReaderAuthenticationProtocol
{
    None = 0,
    ChallengeResponse = 1,
};

enum class MagneticStripeReaderErrorReportingType
{
    CardLevel = 0,
    TrackLevel = 1,
};

enum class MagneticStripeReaderStatus
{
    Unauthenticated = 0,
    Authenticated = 1,
    Extended = 2,
};

enum class MagneticStripeReaderTrackErrorType
{
    None = 0,
    StartSentinelError = 1,
    EndSentinelError = 2,
    ParityError = 3,
    LrcError = 4,
    Unknown = -1,
};

enum class MagneticStripeReaderTrackIds
{
    None = 0,
    Track1 = 1,
    Track2 = 2,
    Track3 = 4,
    Track4 = 8,
};

enum class PosPrinterAlignment
{
    Left = 0,
    Center = 1,
    Right = 2,
};

enum class PosPrinterBarcodeTextPosition
{
    None = 0,
    Above = 1,
    Below = 2,
};

enum class PosPrinterCartridgeSensors : unsigned
{
    None = 0x0,
    Removed = 0x1,
    Empty = 0x2,
    HeadCleaning = 0x4,
    NearEnd = 0x8,
};

DEFINE_ENUM_FLAG_OPERATORS(PosPrinterCartridgeSensors)

enum class PosPrinterColorCapabilities : unsigned
{
    None = 0x0,
    Primary = 0x1,
    Custom1 = 0x2,
    Custom2 = 0x4,
    Custom3 = 0x8,
    Custom4 = 0x10,
    Custom5 = 0x20,
    Custom6 = 0x40,
    Cyan = 0x80,
    Magenta = 0x100,
    Yellow = 0x200,
    Full = 0x400,
};

DEFINE_ENUM_FLAG_OPERATORS(PosPrinterColorCapabilities)

enum class PosPrinterColorCartridge
{
    Unknown = 0,
    Primary = 1,
    Custom1 = 2,
    Custom2 = 3,
    Custom3 = 4,
    Custom4 = 5,
    Custom5 = 6,
    Custom6 = 7,
    Cyan = 8,
    Magenta = 9,
    Yellow = 10,
};

enum class PosPrinterLineDirection
{
    Horizontal = 0,
    Vertical = 1,
};

enum class PosPrinterLineStyle
{
    SingleSolid = 0,
    DoubleSolid = 1,
    Broken = 2,
    Chain = 3,
};

enum class PosPrinterMapMode
{
    Dots = 0,
    Twips = 1,
    English = 2,
    Metric = 3,
};

enum class PosPrinterMarkFeedCapabilities : unsigned
{
    None = 0x0,
    ToTakeUp = 0x1,
    ToCutter = 0x2,
    ToCurrentTopOfForm = 0x4,
    ToNextTopOfForm = 0x8,
};

DEFINE_ENUM_FLAG_OPERATORS(PosPrinterMarkFeedCapabilities)

enum class PosPrinterMarkFeedKind
{
    ToTakeUp = 0,
    ToCutter = 1,
    ToCurrentTopOfForm = 2,
    ToNextTopOfForm = 3,
};

enum class PosPrinterPrintSide
{
    Unknown = 0,
    Side1 = 1,
    Side2 = 2,
};

enum class PosPrinterRotation
{
    Normal = 0,
    Right90 = 1,
    Left90 = 2,
    Rotate180 = 3,
};

enum class PosPrinterRuledLineCapabilities : unsigned
{
    None = 0x0,
    Horizontal = 0x1,
    Vertical = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(PosPrinterRuledLineCapabilities)

enum class PosPrinterStatusKind
{
    Online = 0,
    Off = 1,
    Offline = 2,
    OffOrOffline = 3,
    Extended = 4,
};

enum class UnifiedPosErrorReason
{
    UnknownErrorReason = 0,
    NoService = 1,
    Disabled = 2,
    Illegal = 3,
    NoHardware = 4,
    Closed = 5,
    Offline = 6,
    Failure = 7,
    Timeout = 8,
    Busy = 9,
    Extended = 10,
};

enum class UnifiedPosErrorSeverity
{
    UnknownErrorSeverity = 0,
    Warning = 1,
    Recoverable = 2,
    Unrecoverable = 3,
    AssistanceRequired = 4,
    Fatal = 5,
};

enum class UnifiedPosHealthCheckLevel
{
    UnknownHealthCheckLevel = 0,
    POSInternal = 1,
    External = 2,
    Interactive = 3,
};

enum class UnifiedPosPowerReportingType
{
    UnknownPowerReportingType = 0,
    Standard = 1,
    Advanced = 2,
};

}

}
