// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct BitmapFrame;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;
struct IRandomAccessStreamWithContentType;

}

WINRT_EXPORT namespace winrt::Windows::Devices::PointOfService {

enum class BarcodeScannerStatus : int32_t
{
    Online = 0,
    Off = 1,
    Offline = 2,
    OffOrOffline = 3,
    Extended = 4,
};

enum class BarcodeSymbologyDecodeLengthKind : int32_t
{
    AnyLength = 0,
    Discrete = 1,
    Range = 2,
};

enum class CashDrawerStatusKind : int32_t
{
    Online = 0,
    Off = 1,
    Offline = 2,
    OffOrOffline = 3,
    Extended = 4,
};

enum class LineDisplayCursorType : int32_t
{
    None = 0,
    Block = 1,
    HalfBlock = 2,
    Underline = 3,
    Reverse = 4,
    Other = 5,
};

enum class LineDisplayDescriptorState : int32_t
{
    Off = 0,
    On = 1,
    Blink = 2,
};

enum class LineDisplayHorizontalAlignment : int32_t
{
    Left = 0,
    Center = 1,
    Right = 2,
};

enum class LineDisplayMarqueeFormat : int32_t
{
    None = 0,
    Walk = 1,
    Place = 2,
};

enum class LineDisplayPowerStatus : int32_t
{
    Unknown = 0,
    Online = 1,
    Off = 2,
    Offline = 3,
    OffOrOffline = 4,
};

enum class LineDisplayScrollDirection : int32_t
{
    Up = 0,
    Down = 1,
    Left = 2,
    Right = 3,
};

enum class LineDisplayTextAttribute : int32_t
{
    Normal = 0,
    Blink = 1,
    Reverse = 2,
    ReverseBlink = 3,
};

enum class LineDisplayTextAttributeGranularity : int32_t
{
    NotSupported = 0,
    EntireDisplay = 1,
    PerCharacter = 2,
};

enum class LineDisplayVerticalAlignment : int32_t
{
    Top = 0,
    Center = 1,
    Bottom = 2,
};

enum class MagneticStripeReaderAuthenticationLevel : int32_t
{
    NotSupported = 0,
    Optional = 1,
    Required = 2,
};

enum class MagneticStripeReaderAuthenticationProtocol : int32_t
{
    None = 0,
    ChallengeResponse = 1,
};

enum class MagneticStripeReaderErrorReportingType : int32_t
{
    CardLevel = 0,
    TrackLevel = 1,
};

enum class MagneticStripeReaderStatus : int32_t
{
    Unauthenticated = 0,
    Authenticated = 1,
    Extended = 2,
};

enum class MagneticStripeReaderTrackErrorType : int32_t
{
    None = 0,
    StartSentinelError = 1,
    EndSentinelError = 2,
    ParityError = 3,
    LrcError = 4,
    Unknown = -1,
};

enum class MagneticStripeReaderTrackIds : int32_t
{
    None = 0,
    Track1 = 1,
    Track2 = 2,
    Track3 = 4,
    Track4 = 8,
};

enum class PosConnectionTypes : uint32_t
{
    Local = 0x1,
    IP = 0x2,
    Bluetooth = 0x4,
    All = 0xFFFFFFFF,
};

enum class PosPrinterAlignment : int32_t
{
    Left = 0,
    Center = 1,
    Right = 2,
};

enum class PosPrinterBarcodeTextPosition : int32_t
{
    None = 0,
    Above = 1,
    Below = 2,
};

enum class PosPrinterCartridgeSensors : uint32_t
{
    None = 0x0,
    Removed = 0x1,
    Empty = 0x2,
    HeadCleaning = 0x4,
    NearEnd = 0x8,
};

enum class PosPrinterColorCapabilities : uint32_t
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

enum class PosPrinterColorCartridge : int32_t
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

enum class PosPrinterLineDirection : int32_t
{
    Horizontal = 0,
    Vertical = 1,
};

enum class PosPrinterLineStyle : int32_t
{
    SingleSolid = 0,
    DoubleSolid = 1,
    Broken = 2,
    Chain = 3,
};

enum class PosPrinterMapMode : int32_t
{
    Dots = 0,
    Twips = 1,
    English = 2,
    Metric = 3,
};

enum class PosPrinterMarkFeedCapabilities : uint32_t
{
    None = 0x0,
    ToTakeUp = 0x1,
    ToCutter = 0x2,
    ToCurrentTopOfForm = 0x4,
    ToNextTopOfForm = 0x8,
};

enum class PosPrinterMarkFeedKind : int32_t
{
    ToTakeUp = 0,
    ToCutter = 1,
    ToCurrentTopOfForm = 2,
    ToNextTopOfForm = 3,
};

enum class PosPrinterPrintSide : int32_t
{
    Unknown = 0,
    Side1 = 1,
    Side2 = 2,
};

enum class PosPrinterRotation : int32_t
{
    Normal = 0,
    Right90 = 1,
    Left90 = 2,
    Rotate180 = 3,
};

enum class PosPrinterRuledLineCapabilities : uint32_t
{
    None = 0x0,
    Horizontal = 0x1,
    Vertical = 0x2,
};

enum class PosPrinterStatusKind : int32_t
{
    Online = 0,
    Off = 1,
    Offline = 2,
    OffOrOffline = 3,
    Extended = 4,
};

enum class UnifiedPosErrorReason : int32_t
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

enum class UnifiedPosErrorSeverity : int32_t
{
    UnknownErrorSeverity = 0,
    Warning = 1,
    Recoverable = 2,
    Unrecoverable = 3,
    AssistanceRequired = 4,
    Fatal = 5,
};

enum class UnifiedPosHealthCheckLevel : int32_t
{
    UnknownHealthCheckLevel = 0,
    POSInternal = 1,
    External = 2,
    Interactive = 3,
};

enum class UnifiedPosPowerReportingType : int32_t
{
    UnknownPowerReportingType = 0,
    Standard = 1,
    Advanced = 2,
};

struct IBarcodeScanner;
struct IBarcodeScanner2;
struct IBarcodeScannerCapabilities;
struct IBarcodeScannerCapabilities1;
struct IBarcodeScannerDataReceivedEventArgs;
struct IBarcodeScannerErrorOccurredEventArgs;
struct IBarcodeScannerImagePreviewReceivedEventArgs;
struct IBarcodeScannerReport;
struct IBarcodeScannerStatics;
struct IBarcodeScannerStatics2;
struct IBarcodeScannerStatusUpdatedEventArgs;
struct IBarcodeSymbologiesStatics;
struct IBarcodeSymbologiesStatics2;
struct IBarcodeSymbologyAttributes;
struct ICashDrawer;
struct ICashDrawerCapabilities;
struct ICashDrawerCloseAlarm;
struct ICashDrawerEventSource;
struct ICashDrawerEventSourceEventArgs;
struct ICashDrawerStatics;
struct ICashDrawerStatics2;
struct ICashDrawerStatus;
struct ICashDrawerStatusUpdatedEventArgs;
struct IClaimedBarcodeScanner;
struct IClaimedBarcodeScanner1;
struct IClaimedBarcodeScanner2;
struct IClaimedCashDrawer;
struct IClaimedJournalPrinter;
struct IClaimedLineDisplay;
struct IClaimedLineDisplay2;
struct IClaimedLineDisplayStatics;
struct IClaimedMagneticStripeReader;
struct IClaimedPosPrinter;
struct IClaimedReceiptPrinter;
struct IClaimedSlipPrinter;
struct ICommonClaimedPosPrinterStation;
struct ICommonPosPrintStationCapabilities;
struct ICommonReceiptSlipCapabilities;
struct IJournalPrinterCapabilities;
struct ILineDisplay;
struct ILineDisplay2;
struct ILineDisplayAttributes;
struct ILineDisplayCapabilities;
struct ILineDisplayCursor;
struct ILineDisplayCursorAttributes;
struct ILineDisplayCustomGlyphs;
struct ILineDisplayMarquee;
struct ILineDisplayStatics;
struct ILineDisplayStatics2;
struct ILineDisplayStatisticsCategorySelector;
struct ILineDisplayStatusUpdatedEventArgs;
struct ILineDisplayStoredBitmap;
struct ILineDisplayWindow;
struct ILineDisplayWindow2;
struct IMagneticStripeReader;
struct IMagneticStripeReaderAamvaCardDataReceivedEventArgs;
struct IMagneticStripeReaderBankCardDataReceivedEventArgs;
struct IMagneticStripeReaderCapabilities;
struct IMagneticStripeReaderCardTypesStatics;
struct IMagneticStripeReaderEncryptionAlgorithmsStatics;
struct IMagneticStripeReaderErrorOccurredEventArgs;
struct IMagneticStripeReaderReport;
struct IMagneticStripeReaderStatics;
struct IMagneticStripeReaderStatics2;
struct IMagneticStripeReaderStatusUpdatedEventArgs;
struct IMagneticStripeReaderTrackData;
struct IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
struct IPosPrinter;
struct IPosPrinterCapabilities;
struct IPosPrinterCharacterSetIdsStatics;
struct IPosPrinterJob;
struct IPosPrinterReleaseDeviceRequestedEventArgs;
struct IPosPrinterStatics;
struct IPosPrinterStatics2;
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
struct BarcodeSymbologyAttributes;
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
struct ClaimedLineDisplay;
struct ClaimedMagneticStripeReader;
struct ClaimedPosPrinter;
struct ClaimedReceiptPrinter;
struct ClaimedSlipPrinter;
struct JournalPrintJob;
struct JournalPrinterCapabilities;
struct LineDisplay;
struct LineDisplayAttributes;
struct LineDisplayCapabilities;
struct LineDisplayCursor;
struct LineDisplayCursorAttributes;
struct LineDisplayCustomGlyphs;
struct LineDisplayMarquee;
struct LineDisplayStatisticsCategorySelector;
struct LineDisplayStatusUpdatedEventArgs;
struct LineDisplayStoredBitmap;
struct LineDisplayWindow;
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

namespace winrt::impl {

template<> struct is_enum_flag<Windows::Devices::PointOfService::PosConnectionTypes> : std::true_type {};
template<> struct is_enum_flag<Windows::Devices::PointOfService::PosPrinterCartridgeSensors> : std::true_type {};
template<> struct is_enum_flag<Windows::Devices::PointOfService::PosPrinterColorCapabilities> : std::true_type {};
template<> struct is_enum_flag<Windows::Devices::PointOfService::PosPrinterMarkFeedCapabilities> : std::true_type {};
template<> struct is_enum_flag<Windows::Devices::PointOfService::PosPrinterRuledLineCapabilities> : std::true_type {};
template <> struct category<Windows::Devices::PointOfService::IBarcodeScanner>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IBarcodeScanner2>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerCapabilities1>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerReport>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IBarcodeSymbologyAttributes>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ICashDrawer>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ICashDrawerCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ICashDrawerCloseAlarm>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ICashDrawerEventSource>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ICashDrawerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ICashDrawerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ICashDrawerStatus>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IClaimedBarcodeScanner>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IClaimedBarcodeScanner1>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IClaimedBarcodeScanner2>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IClaimedCashDrawer>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IClaimedJournalPrinter>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IClaimedLineDisplay>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IClaimedLineDisplay2>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IClaimedLineDisplayStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IClaimedPosPrinter>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IClaimedReceiptPrinter>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IClaimedSlipPrinter>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IJournalPrinterCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplay>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplay2>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplayAttributes>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplayCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplayCursor>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplayCursorAttributes>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplayCustomGlyphs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplayMarquee>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplayStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplayStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplayStatisticsCategorySelector>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplayStatusUpdatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplayStoredBitmap>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplayWindow>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ILineDisplayWindow2>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReader>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderReport>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderTrackData>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IPosPrinter>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IPosPrinterCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IPosPrinterJob>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IPosPrinterStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IPosPrinterStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IPosPrinterStatus>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IReceiptOrSlipJob>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IReceiptPrintJob>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IReceiptPrinterCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::ISlipPrinterCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::IUnifiedPosErrorData>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::BarcodeScanner>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::BarcodeScannerCapabilities>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::BarcodeScannerReport>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::BarcodeSymbologies>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::BarcodeSymbologyAttributes>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::CashDrawer>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::CashDrawerCapabilities>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::CashDrawerCloseAlarm>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::CashDrawerClosedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::CashDrawerEventSource>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::CashDrawerOpenedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::CashDrawerStatus>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::ClaimedBarcodeScanner>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::ClaimedCashDrawer>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::ClaimedJournalPrinter>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::ClaimedLineDisplay>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::ClaimedMagneticStripeReader>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::ClaimedPosPrinter>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::ClaimedReceiptPrinter>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::ClaimedSlipPrinter>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::JournalPrintJob>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::JournalPrinterCapabilities>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplay>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayAttributes>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayCapabilities>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayCursor>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayCursorAttributes>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayCustomGlyphs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayMarquee>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayStatisticsCategorySelector>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayStatusUpdatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayStoredBitmap>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayWindow>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReader>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderCapabilities>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderCardTypes>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderEncryptionAlgorithms>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderReport>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderTrackData>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinter>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterCapabilities>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterCharacterSetIds>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterStatus>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::ReceiptPrintJob>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::ReceiptPrinterCapabilities>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::SlipPrintJob>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::SlipPrinterCapabilities>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::UnifiedPosErrorData>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::BarcodeScannerStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::CashDrawerStatusKind>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayCursorType>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayDescriptorState>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayHorizontalAlignment>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayMarqueeFormat>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayPowerStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayScrollDirection>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayTextAttribute>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::LineDisplayVerticalAlignment>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationLevel>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationProtocol>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderTrackIds>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosConnectionTypes>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterAlignment>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterCartridgeSensors>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterColorCapabilities>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterColorCartridge>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterLineDirection>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterLineStyle>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterMapMode>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterMarkFeedCapabilities>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterMarkFeedKind>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterPrintSide>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterRotation>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterRuledLineCapabilities>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::PosPrinterStatusKind>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::UnifiedPosErrorReason>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::UnifiedPosErrorSeverity>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel>{ using type = enum_category; };
template <> struct category<Windows::Devices::PointOfService::UnifiedPosPowerReportingType>{ using type = enum_category; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeScanner>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScanner" }; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeScanner2>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScanner2" }; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerCapabilities1>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerCapabilities1" }; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerDataReceivedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerErrorOccurredEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerImagePreviewReceivedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerReport>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerReport" }; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerStatics>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerStatics" }; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerStatics2>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerStatics2" }; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerStatusUpdatedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeSymbologiesStatics" }; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeSymbologiesStatics2" }; };
template <> struct name<Windows::Devices::PointOfService::IBarcodeSymbologyAttributes>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeSymbologyAttributes" }; };
template <> struct name<Windows::Devices::PointOfService::ICashDrawer>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawer" }; };
template <> struct name<Windows::Devices::PointOfService::ICashDrawerCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::ICashDrawerCloseAlarm>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerCloseAlarm" }; };
template <> struct name<Windows::Devices::PointOfService::ICashDrawerEventSource>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerEventSource" }; };
template <> struct name<Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerEventSourceEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::ICashDrawerStatics>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerStatics" }; };
template <> struct name<Windows::Devices::PointOfService::ICashDrawerStatics2>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerStatics2" }; };
template <> struct name<Windows::Devices::PointOfService::ICashDrawerStatus>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerStatus" }; };
template <> struct name<Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerStatusUpdatedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::IClaimedBarcodeScanner>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedBarcodeScanner" }; };
template <> struct name<Windows::Devices::PointOfService::IClaimedBarcodeScanner1>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedBarcodeScanner1" }; };
template <> struct name<Windows::Devices::PointOfService::IClaimedBarcodeScanner2>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedBarcodeScanner2" }; };
template <> struct name<Windows::Devices::PointOfService::IClaimedCashDrawer>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedCashDrawer" }; };
template <> struct name<Windows::Devices::PointOfService::IClaimedJournalPrinter>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedJournalPrinter" }; };
template <> struct name<Windows::Devices::PointOfService::IClaimedLineDisplay>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedLineDisplay" }; };
template <> struct name<Windows::Devices::PointOfService::IClaimedLineDisplay2>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedLineDisplay2" }; };
template <> struct name<Windows::Devices::PointOfService::IClaimedLineDisplayStatics>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedLineDisplayStatics" }; };
template <> struct name<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedMagneticStripeReader" }; };
template <> struct name<Windows::Devices::PointOfService::IClaimedPosPrinter>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedPosPrinter" }; };
template <> struct name<Windows::Devices::PointOfService::IClaimedReceiptPrinter>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedReceiptPrinter" }; };
template <> struct name<Windows::Devices::PointOfService::IClaimedSlipPrinter>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedSlipPrinter" }; };
template <> struct name<Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ICommonClaimedPosPrinterStation" }; };
template <> struct name<Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ICommonPosPrintStationCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ICommonReceiptSlipCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::IJournalPrinterCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IJournalPrinterCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplay>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplay" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplay2>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplay2" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplayAttributes>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayAttributes" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplayCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplayCursor>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayCursor" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplayCursorAttributes>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayCursorAttributes" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplayCustomGlyphs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayCustomGlyphs" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplayMarquee>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayMarquee" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplayStatics>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayStatics" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplayStatics2>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayStatics2" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplayStatisticsCategorySelector>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayStatisticsCategorySelector" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplayStatusUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayStatusUpdatedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplayStoredBitmap>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayStoredBitmap" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplayWindow>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayWindow" }; };
template <> struct name<Windows::Devices::PointOfService::ILineDisplayWindow2>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayWindow2" }; };
template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReader>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReader" }; };
template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderAamvaCardDataReceivedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderBankCardDataReceivedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderCardTypesStatics" }; };
template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderEncryptionAlgorithmsStatics" }; };
template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderErrorOccurredEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderReport>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderReport" }; };
template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderStatics>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderStatics" }; };
template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderStatics2>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderStatics2" }; };
template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderStatusUpdatedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderTrackData>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderTrackData" }; };
template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::IPosPrinter>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinter" }; };
template <> struct name<Windows::Devices::PointOfService::IPosPrinterCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterCharacterSetIdsStatics" }; };
template <> struct name<Windows::Devices::PointOfService::IPosPrinterJob>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterJob" }; };
template <> struct name<Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterReleaseDeviceRequestedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::IPosPrinterStatics>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterStatics" }; };
template <> struct name<Windows::Devices::PointOfService::IPosPrinterStatics2>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterStatics2" }; };
template <> struct name<Windows::Devices::PointOfService::IPosPrinterStatus>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterStatus" }; };
template <> struct name<Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterStatusUpdatedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::IReceiptOrSlipJob>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IReceiptOrSlipJob" }; };
template <> struct name<Windows::Devices::PointOfService::IReceiptPrintJob>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IReceiptPrintJob" }; };
template <> struct name<Windows::Devices::PointOfService::IReceiptPrinterCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IReceiptPrinterCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::ISlipPrinterCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ISlipPrinterCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::IUnifiedPosErrorData>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.IUnifiedPosErrorData" }; };
template <> struct name<Windows::Devices::PointOfService::BarcodeScanner>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScanner" }; };
template <> struct name<Windows::Devices::PointOfService::BarcodeScannerCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerDataReceivedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerErrorOccurredEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerImagePreviewReceivedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::BarcodeScannerReport>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerReport" }; };
template <> struct name<Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerStatusUpdatedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::BarcodeSymbologies>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeSymbologies" }; };
template <> struct name<Windows::Devices::PointOfService::BarcodeSymbologyAttributes>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeSymbologyAttributes" }; };
template <> struct name<Windows::Devices::PointOfService::CashDrawer>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawer" }; };
template <> struct name<Windows::Devices::PointOfService::CashDrawerCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::CashDrawerCloseAlarm>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerCloseAlarm" }; };
template <> struct name<Windows::Devices::PointOfService::CashDrawerClosedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerClosedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::CashDrawerEventSource>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerEventSource" }; };
template <> struct name<Windows::Devices::PointOfService::CashDrawerOpenedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerOpenedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::CashDrawerStatus>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerStatus" }; };
template <> struct name<Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerStatusUpdatedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::ClaimedBarcodeScanner>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedBarcodeScanner" }; };
template <> struct name<Windows::Devices::PointOfService::ClaimedCashDrawer>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedCashDrawer" }; };
template <> struct name<Windows::Devices::PointOfService::ClaimedJournalPrinter>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedJournalPrinter" }; };
template <> struct name<Windows::Devices::PointOfService::ClaimedLineDisplay>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedLineDisplay" }; };
template <> struct name<Windows::Devices::PointOfService::ClaimedMagneticStripeReader>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedMagneticStripeReader" }; };
template <> struct name<Windows::Devices::PointOfService::ClaimedPosPrinter>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedPosPrinter" }; };
template <> struct name<Windows::Devices::PointOfService::ClaimedReceiptPrinter>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedReceiptPrinter" }; };
template <> struct name<Windows::Devices::PointOfService::ClaimedSlipPrinter>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedSlipPrinter" }; };
template <> struct name<Windows::Devices::PointOfService::JournalPrintJob>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.JournalPrintJob" }; };
template <> struct name<Windows::Devices::PointOfService::JournalPrinterCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.JournalPrinterCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplay>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplay" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayAttributes>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayAttributes" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayCursor>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayCursor" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayCursorAttributes>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayCursorAttributes" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayCustomGlyphs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayCustomGlyphs" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayMarquee>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayMarquee" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayStatisticsCategorySelector>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayStatisticsCategorySelector" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayStatusUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayStatusUpdatedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayStoredBitmap>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayStoredBitmap" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayWindow>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayWindow" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReader>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReader" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderAamvaCardDataReceivedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderBankCardDataReceivedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderCardTypes>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderCardTypes" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderEncryptionAlgorithms>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderEncryptionAlgorithms" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderErrorOccurredEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderReport>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderReport" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderStatusUpdatedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderTrackData>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderTrackData" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinter>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinter" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterCharacterSetIds>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterCharacterSetIds" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterReleaseDeviceRequestedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterStatus>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterStatus" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterStatusUpdatedEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::ReceiptPrintJob>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ReceiptPrintJob" }; };
template <> struct name<Windows::Devices::PointOfService::ReceiptPrinterCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.ReceiptPrinterCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::SlipPrintJob>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.SlipPrintJob" }; };
template <> struct name<Windows::Devices::PointOfService::SlipPrinterCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.SlipPrinterCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::UnifiedPosErrorData>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.UnifiedPosErrorData" }; };
template <> struct name<Windows::Devices::PointOfService::BarcodeScannerStatus>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerStatus" }; };
template <> struct name<Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeSymbologyDecodeLengthKind" }; };
template <> struct name<Windows::Devices::PointOfService::CashDrawerStatusKind>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerStatusKind" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayCursorType>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayCursorType" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayDescriptorState>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayDescriptorState" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayHorizontalAlignment>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayHorizontalAlignment" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayMarqueeFormat>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayMarqueeFormat" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayPowerStatus>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayPowerStatus" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayScrollDirection>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayScrollDirection" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayTextAttribute>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayTextAttribute" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayTextAttributeGranularity" }; };
template <> struct name<Windows::Devices::PointOfService::LineDisplayVerticalAlignment>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayVerticalAlignment" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationLevel>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderAuthenticationLevel" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationProtocol>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderAuthenticationProtocol" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderErrorReportingType" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderStatus>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderStatus" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderTrackErrorType" }; };
template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderTrackIds>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderTrackIds" }; };
template <> struct name<Windows::Devices::PointOfService::PosConnectionTypes>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosConnectionTypes" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterAlignment>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterAlignment" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterBarcodeTextPosition" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterCartridgeSensors>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterCartridgeSensors" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterColorCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterColorCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterColorCartridge>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterColorCartridge" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterLineDirection>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterLineDirection" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterLineStyle>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterLineStyle" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterMapMode>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterMapMode" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterMarkFeedCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterMarkFeedCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterMarkFeedKind>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterMarkFeedKind" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterPrintSide>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterPrintSide" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterRotation>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterRotation" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterRuledLineCapabilities>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterRuledLineCapabilities" }; };
template <> struct name<Windows::Devices::PointOfService::PosPrinterStatusKind>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterStatusKind" }; };
template <> struct name<Windows::Devices::PointOfService::UnifiedPosErrorReason>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.UnifiedPosErrorReason" }; };
template <> struct name<Windows::Devices::PointOfService::UnifiedPosErrorSeverity>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.UnifiedPosErrorSeverity" }; };
template <> struct name<Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.UnifiedPosHealthCheckLevel" }; };
template <> struct name<Windows::Devices::PointOfService::UnifiedPosPowerReportingType>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.UnifiedPosPowerReportingType" }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeScanner>{ static constexpr GUID value{ 0xBEA33E06,0xB264,0x4F03,{ 0xA9,0xC1,0x45,0xB2,0x0F,0x01,0x13,0x4F } }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeScanner2>{ static constexpr GUID value{ 0x89215167,0x8CEE,0x436D,{ 0x89,0xAB,0x8D,0xFB,0x43,0xBB,0x42,0x86 } }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeScannerCapabilities>{ static constexpr GUID value{ 0xC60691E4,0xF2C8,0x4420,{ 0xA3,0x07,0xB1,0x2E,0xF6,0x62,0x28,0x57 } }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeScannerCapabilities1>{ static constexpr GUID value{ 0x8E5AB3E9,0x0E2C,0x472F,{ 0xA1,0xCC,0xEE,0x80,0x54,0xB6,0xA6,0x84 } }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs>{ static constexpr GUID value{ 0x4234A7E2,0xED97,0x467D,{ 0xAD,0x2B,0x01,0xE4,0x43,0x13,0xA9,0x29 } }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs>{ static constexpr GUID value{ 0x2CD2602F,0xCF3A,0x4002,{ 0xA7,0x5A,0xC5,0xEC,0x46,0x8F,0x0A,0x20 } }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs>{ static constexpr GUID value{ 0xF3B7DE85,0x6E8B,0x434E,{ 0x9F,0x58,0x06,0xEF,0x26,0xBC,0x4B,0xAF } }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeScannerReport>{ static constexpr GUID value{ 0x5CE4D8B0,0xA489,0x4B96,{ 0x86,0xC4,0xF0,0xBF,0x8A,0x37,0x75,0x3D } }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeScannerStatics>{ static constexpr GUID value{ 0x5D115F6F,0xDA49,0x41E8,{ 0x8C,0x8C,0xF0,0xCB,0x62,0xA9,0xC4,0xFC } }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeScannerStatics2>{ static constexpr GUID value{ 0xB8652473,0xA36F,0x4007,{ 0xB1,0xD0,0x27,0x9E,0xBE,0x92,0xA6,0x56 } }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs>{ static constexpr GUID value{ 0x355D8586,0x9C43,0x462B,{ 0xA9,0x1A,0x81,0x6D,0xC9,0x7F,0x45,0x2C } }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>{ static constexpr GUID value{ 0xCA8549BB,0x06D2,0x43F4,{ 0xA4,0x4B,0xC6,0x20,0x67,0x9F,0xD8,0xD0 } }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2>{ static constexpr GUID value{ 0x8B7518F4,0x99D0,0x40BF,{ 0x94,0x24,0xB9,0x1D,0x6D,0xD4,0xC6,0xE0 } }; };
template <> struct guid<Windows::Devices::PointOfService::IBarcodeSymbologyAttributes>{ static constexpr GUID value{ 0x66413A78,0xAB7A,0x4ADA,{ 0x8E,0xCE,0x93,0x60,0x14,0xB2,0xEA,0xD7 } }; };
template <> struct guid<Windows::Devices::PointOfService::ICashDrawer>{ static constexpr GUID value{ 0x9F88F5C8,0xDE54,0x4AEE,{ 0xA8,0x90,0x92,0x0B,0xCB,0xFE,0x30,0xFC } }; };
template <> struct guid<Windows::Devices::PointOfService::ICashDrawerCapabilities>{ static constexpr GUID value{ 0x0BC6DE0B,0xE8E7,0x4B1F,{ 0xB1,0xD1,0x3E,0x50,0x1A,0xD0,0x82,0x47 } }; };
template <> struct guid<Windows::Devices::PointOfService::ICashDrawerCloseAlarm>{ static constexpr GUID value{ 0x6BF88CC7,0x6F63,0x430E,{ 0xAB,0x3B,0x95,0xD7,0x5F,0xFB,0xE8,0x7F } }; };
template <> struct guid<Windows::Devices::PointOfService::ICashDrawerEventSource>{ static constexpr GUID value{ 0xE006E46C,0xF2F9,0x442F,{ 0x8D,0xD6,0x06,0xC1,0x0A,0x42,0x27,0xBA } }; };
template <> struct guid<Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs>{ static constexpr GUID value{ 0x69CB3BC1,0x147F,0x421C,{ 0x9C,0x23,0x09,0x01,0x23,0xBB,0x78,0x6C } }; };
template <> struct guid<Windows::Devices::PointOfService::ICashDrawerStatics>{ static constexpr GUID value{ 0xDFA0955A,0xD437,0x4FFF,{ 0xB5,0x47,0xDD,0xA9,0x69,0xA4,0xF8,0x83 } }; };
template <> struct guid<Windows::Devices::PointOfService::ICashDrawerStatics2>{ static constexpr GUID value{ 0x3E818121,0x8C42,0x40E8,{ 0x9C,0x0E,0x40,0x29,0x70,0x48,0x10,0x4C } }; };
template <> struct guid<Windows::Devices::PointOfService::ICashDrawerStatus>{ static constexpr GUID value{ 0x6BBD78BF,0xDCA1,0x4E06,{ 0x99,0xEB,0x5A,0xF6,0xA5,0xAE,0xC1,0x08 } }; };
template <> struct guid<Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs>{ static constexpr GUID value{ 0x30AAE98A,0x0D70,0x459C,{ 0x95,0x53,0x87,0xE1,0x24,0xC5,0x24,0x88 } }; };
template <> struct guid<Windows::Devices::PointOfService::IClaimedBarcodeScanner>{ static constexpr GUID value{ 0x4A63B49C,0x8FA4,0x4332,{ 0xBB,0x26,0x94,0x5D,0x11,0xD8,0x1E,0x0F } }; };
template <> struct guid<Windows::Devices::PointOfService::IClaimedBarcodeScanner1>{ static constexpr GUID value{ 0xF61AAD0C,0x8551,0x42B4,{ 0x99,0x8C,0x97,0x0C,0x20,0x21,0x0A,0x22 } }; };
template <> struct guid<Windows::Devices::PointOfService::IClaimedBarcodeScanner2>{ static constexpr GUID value{ 0xE3B59E8C,0x2D8B,0x4F70,{ 0x8A,0xF3,0x34,0x48,0xBE,0xDD,0x5F,0xE2 } }; };
template <> struct guid<Windows::Devices::PointOfService::IClaimedCashDrawer>{ static constexpr GUID value{ 0xCA3F99AF,0xABB8,0x42C1,{ 0x8A,0x84,0x5C,0x66,0x51,0x2F,0x5A,0x75 } }; };
template <> struct guid<Windows::Devices::PointOfService::IClaimedJournalPrinter>{ static constexpr GUID value{ 0x67EA0630,0x517D,0x487F,{ 0x9F,0xDF,0xD2,0xE0,0xA0,0xA2,0x64,0xA5 } }; };
template <> struct guid<Windows::Devices::PointOfService::IClaimedLineDisplay>{ static constexpr GUID value{ 0x120AC970,0x9A75,0x4ACF,{ 0xAA,0xE7,0x09,0x97,0x2B,0xCF,0x87,0x94 } }; };
template <> struct guid<Windows::Devices::PointOfService::IClaimedLineDisplay2>{ static constexpr GUID value{ 0xA31C75ED,0x41F5,0x4E76,{ 0xA0,0x74,0x79,0x5E,0x47,0xA4,0x6E,0x97 } }; };
template <> struct guid<Windows::Devices::PointOfService::IClaimedLineDisplayStatics>{ static constexpr GUID value{ 0x78CA98FB,0x8B6B,0x4973,{ 0x86,0xF0,0x3E,0x57,0x0C,0x35,0x18,0x25 } }; };
template <> struct guid<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>{ static constexpr GUID value{ 0x475CA8F3,0x9417,0x48BC,{ 0xB9,0xD7,0x41,0x63,0xA7,0x84,0x4C,0x02 } }; };
template <> struct guid<Windows::Devices::PointOfService::IClaimedPosPrinter>{ static constexpr GUID value{ 0x6D64CE0C,0xE03E,0x4B14,{ 0xA3,0x8E,0xC2,0x8C,0x34,0xB8,0x63,0x53 } }; };
template <> struct guid<Windows::Devices::PointOfService::IClaimedReceiptPrinter>{ static constexpr GUID value{ 0x9AD27A74,0xDD61,0x4EE2,{ 0x98,0x37,0x5B,0x5D,0x72,0xD5,0x38,0xB9 } }; };
template <> struct guid<Windows::Devices::PointOfService::IClaimedSlipPrinter>{ static constexpr GUID value{ 0xBD5DEFF2,0xAF90,0x4E8A,{ 0xB7,0x7B,0xE3,0xAE,0x9C,0xA6,0x3A,0x7F } }; };
template <> struct guid<Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>{ static constexpr GUID value{ 0xB7EB66A8,0xFE8A,0x4CFB,{ 0x8B,0x42,0xE3,0x5B,0x28,0x0C,0xB2,0x7C } }; };
template <> struct guid<Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>{ static constexpr GUID value{ 0xDE5B52CA,0xE02E,0x40E9,{ 0x9E,0x5E,0x1B,0x48,0x8E,0x6A,0xAC,0xFC } }; };
template <> struct guid<Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>{ static constexpr GUID value{ 0x09286B8B,0x9873,0x4D05,{ 0xBF,0xBE,0x47,0x27,0xA6,0x03,0x8F,0x69 } }; };
template <> struct guid<Windows::Devices::PointOfService::IJournalPrinterCapabilities>{ static constexpr GUID value{ 0x3B5CCC43,0xE047,0x4463,{ 0xBB,0x58,0x17,0xB5,0xBA,0x1D,0x80,0x56 } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplay>{ static constexpr GUID value{ 0x24F5DF4E,0x3C99,0x44E2,{ 0xB7,0x3F,0xE5,0x1B,0xE3,0x63,0x7A,0x8C } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplay2>{ static constexpr GUID value{ 0xC296A628,0xEF44,0x40F3,{ 0xBD,0x1C,0xB0,0x4C,0x6A,0x5C,0xDC,0x7D } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplayAttributes>{ static constexpr GUID value{ 0xC17DE99C,0x229A,0x4C14,{ 0xA6,0xF1,0xB4,0xE4,0xB1,0xFE,0xAD,0x92 } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplayCapabilities>{ static constexpr GUID value{ 0x5A15B5D1,0x8DC5,0x4B9C,{ 0x91,0x72,0x30,0x3E,0x47,0xB7,0x0C,0x55 } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplayCursor>{ static constexpr GUID value{ 0xECDFFC45,0x754A,0x4E3B,{ 0xAB,0x2B,0x15,0x11,0x81,0x08,0x56,0x05 } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplayCursorAttributes>{ static constexpr GUID value{ 0x4E2D54FE,0x4FFD,0x4190,{ 0xAA,0xE1,0xCE,0x28,0x5F,0x20,0xC8,0x96 } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplayCustomGlyphs>{ static constexpr GUID value{ 0x2257F63C,0xF263,0x44F1,{ 0xA1,0xA0,0xE7,0x50,0xA6,0xA0,0xEC,0x54 } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplayMarquee>{ static constexpr GUID value{ 0xA3D33E3E,0xF46A,0x4B7A,{ 0xBC,0x21,0x53,0xEB,0x3B,0x57,0xF8,0xB4 } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplayStatics>{ static constexpr GUID value{ 0x022DC0B6,0x11B0,0x4690,{ 0x95,0x47,0x0B,0x39,0xC5,0xAF,0x21,0x14 } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplayStatics2>{ static constexpr GUID value{ 0x600C3F1C,0x77AB,0x4968,{ 0xA7,0xDE,0xC0,0x2F,0xF1,0x69,0xF2,0xCC } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplayStatisticsCategorySelector>{ static constexpr GUID value{ 0xB521C46B,0x9274,0x4D24,{ 0x94,0xF3,0xB6,0x01,0x7B,0x83,0x24,0x44 } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplayStatusUpdatedEventArgs>{ static constexpr GUID value{ 0xDDD57C1A,0x86FB,0x4EBA,{ 0x93,0xD1,0x6F,0x5E,0xDA,0x52,0xB7,0x52 } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplayStoredBitmap>{ static constexpr GUID value{ 0xF621515B,0xD81E,0x43BA,{ 0xBF,0x1B,0xBC,0xFA,0x3C,0x78,0x5B,0xA0 } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplayWindow>{ static constexpr GUID value{ 0xD21FEEF4,0x2364,0x4BE5,{ 0xBE,0xE1,0x85,0x16,0x80,0xAF,0x49,0x64 } }; };
template <> struct guid<Windows::Devices::PointOfService::ILineDisplayWindow2>{ static constexpr GUID value{ 0xA95CE2E6,0xBDD8,0x4365,{ 0x8E,0x11,0xDE,0x94,0xDE,0x8D,0xFF,0x02 } }; };
template <> struct guid<Windows::Devices::PointOfService::IMagneticStripeReader>{ static constexpr GUID value{ 0x1A92B015,0x47C3,0x468A,{ 0x93,0x33,0x0C,0x65,0x17,0x57,0x48,0x83 } }; };
template <> struct guid<Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs>{ static constexpr GUID value{ 0x0A4BBD51,0xC316,0x4910,{ 0x87,0xF3,0x7A,0x62,0xBA,0x86,0x2D,0x31 } }; };
template <> struct guid<Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs>{ static constexpr GUID value{ 0x2E958823,0xA31A,0x4763,{ 0x88,0x2C,0x23,0x72,0x5E,0x39,0xB0,0x8E } }; };
template <> struct guid<Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities>{ static constexpr GUID value{ 0x7128809C,0xC440,0x44A2,{ 0xA4,0x67,0x46,0x91,0x75,0xD0,0x28,0x96 } }; };
template <> struct guid<Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>{ static constexpr GUID value{ 0x528F2C5D,0x2986,0x474F,{ 0x84,0x54,0x7C,0xCD,0x05,0x92,0x8D,0x5F } }; };
template <> struct guid<Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>{ static constexpr GUID value{ 0x53B57350,0xC3DB,0x4754,{ 0x9C,0x00,0x41,0x39,0x23,0x74,0xA1,0x09 } }; };
template <> struct guid<Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs>{ static constexpr GUID value{ 0x1FEDF95D,0x2C84,0x41AD,{ 0xB7,0x78,0xF2,0x35,0x6A,0x78,0x9A,0xB1 } }; };
template <> struct guid<Windows::Devices::PointOfService::IMagneticStripeReaderReport>{ static constexpr GUID value{ 0x6A5B6047,0x99B0,0x4188,{ 0xBE,0xF1,0xED,0xDF,0x79,0xF7,0x8F,0xE6 } }; };
template <> struct guid<Windows::Devices::PointOfService::IMagneticStripeReaderStatics>{ static constexpr GUID value{ 0xC45FAB4A,0xEFD7,0x4760,{ 0xA5,0xCE,0x15,0xB0,0xE4,0x7E,0x94,0xEB } }; };
template <> struct guid<Windows::Devices::PointOfService::IMagneticStripeReaderStatics2>{ static constexpr GUID value{ 0x8CADC362,0xD667,0x48FA,{ 0x86,0xBC,0xF5,0xAE,0x11,0x89,0x26,0x2B } }; };
template <> struct guid<Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs>{ static constexpr GUID value{ 0x09CC6BB0,0x3262,0x401D,{ 0x9E,0x8A,0xE8,0x0D,0x63,0x58,0x90,0x6B } }; };
template <> struct guid<Windows::Devices::PointOfService::IMagneticStripeReaderTrackData>{ static constexpr GUID value{ 0x104CF671,0x4A9D,0x446E,{ 0xAB,0xC5,0x20,0x40,0x23,0x07,0xBA,0x36 } }; };
template <> struct guid<Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>{ static constexpr GUID value{ 0xAF0A5514,0x59CC,0x4A60,{ 0x99,0xE8,0x99,0xA5,0x3D,0xAC,0xE5,0xAA } }; };
template <> struct guid<Windows::Devices::PointOfService::IPosPrinter>{ static constexpr GUID value{ 0x2A03C10E,0x9A19,0x4A01,{ 0x99,0x4F,0x12,0xDF,0xAD,0x6A,0xDC,0xBF } }; };
template <> struct guid<Windows::Devices::PointOfService::IPosPrinterCapabilities>{ static constexpr GUID value{ 0xCDE95721,0x4380,0x4985,{ 0xAD,0xC5,0x39,0xDB,0x30,0xCD,0x93,0xBC } }; };
template <> struct guid<Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>{ static constexpr GUID value{ 0x5C709EFF,0x709A,0x4FE7,{ 0xB2,0x15,0x06,0xA7,0x48,0xA3,0x8B,0x39 } }; };
template <> struct guid<Windows::Devices::PointOfService::IPosPrinterJob>{ static constexpr GUID value{ 0x9A94005C,0x0615,0x4591,{ 0xA5,0x8F,0x30,0xF8,0x7E,0xDF,0xE2,0xE4 } }; };
template <> struct guid<Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs>{ static constexpr GUID value{ 0x2BCBA359,0x1CEF,0x40B2,{ 0x9E,0xCB,0xF9,0x27,0xF8,0x56,0xAE,0x3C } }; };
template <> struct guid<Windows::Devices::PointOfService::IPosPrinterStatics>{ static constexpr GUID value{ 0x8CE0D4EA,0x132F,0x4CDF,{ 0xA6,0x4A,0x2D,0x0D,0x7C,0x96,0xA8,0x5B } }; };
template <> struct guid<Windows::Devices::PointOfService::IPosPrinterStatics2>{ static constexpr GUID value{ 0xEECD2C1C,0xB0D0,0x42E7,{ 0xB1,0x37,0xB8,0x9B,0x16,0x24,0x4D,0x41 } }; };
template <> struct guid<Windows::Devices::PointOfService::IPosPrinterStatus>{ static constexpr GUID value{ 0xD1F0C730,0xDA40,0x4328,{ 0xBF,0x76,0x51,0x56,0xFA,0x33,0xB7,0x47 } }; };
template <> struct guid<Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs>{ static constexpr GUID value{ 0x2EDB87DF,0x13A6,0x428D,{ 0xBA,0x81,0xB0,0xE7,0xC3,0xE5,0xA3,0xCD } }; };
template <> struct guid<Windows::Devices::PointOfService::IReceiptOrSlipJob>{ static constexpr GUID value{ 0x532199BE,0xC8C3,0x4DC2,{ 0x89,0xE9,0x5C,0x4A,0x37,0xB3,0x4D,0xDC } }; };
template <> struct guid<Windows::Devices::PointOfService::IReceiptPrintJob>{ static constexpr GUID value{ 0xAA96066E,0xACAD,0x4B79,{ 0x9D,0x0F,0xC0,0xCF,0xC0,0x8D,0xC7,0x7B } }; };
template <> struct guid<Windows::Devices::PointOfService::IReceiptPrinterCapabilities>{ static constexpr GUID value{ 0xB8F0B58F,0x51A8,0x43FC,{ 0x9B,0xD5,0x8D,0xE2,0x72,0xA6,0x41,0x5B } }; };
template <> struct guid<Windows::Devices::PointOfService::ISlipPrinterCapabilities>{ static constexpr GUID value{ 0x99B16399,0x488C,0x4157,{ 0x8A,0xC2,0x9F,0x57,0xF7,0x08,0xD3,0xDB } }; };
template <> struct guid<Windows::Devices::PointOfService::IUnifiedPosErrorData>{ static constexpr GUID value{ 0x2B998C3A,0x555C,0x4889,{ 0x8E,0xD8,0xC5,0x99,0xBB,0x3A,0x71,0x2A } }; };
template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScanner>{ using type = Windows::Devices::PointOfService::IBarcodeScanner; };
template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScannerCapabilities>{ using type = Windows::Devices::PointOfService::IBarcodeScannerCapabilities; };
template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs>{ using type = Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs>{ using type = Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs>{ using type = Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScannerReport>{ using type = Windows::Devices::PointOfService::IBarcodeScannerReport; };
template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs>{ using type = Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::BarcodeSymbologyAttributes>{ using type = Windows::Devices::PointOfService::IBarcodeSymbologyAttributes; };
template <> struct default_interface<Windows::Devices::PointOfService::CashDrawer>{ using type = Windows::Devices::PointOfService::ICashDrawer; };
template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerCapabilities>{ using type = Windows::Devices::PointOfService::ICashDrawerCapabilities; };
template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerCloseAlarm>{ using type = Windows::Devices::PointOfService::ICashDrawerCloseAlarm; };
template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerClosedEventArgs>{ using type = Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerEventSource>{ using type = Windows::Devices::PointOfService::ICashDrawerEventSource; };
template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerOpenedEventArgs>{ using type = Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerStatus>{ using type = Windows::Devices::PointOfService::ICashDrawerStatus; };
template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs>{ using type = Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::ClaimedBarcodeScanner>{ using type = Windows::Devices::PointOfService::IClaimedBarcodeScanner; };
template <> struct default_interface<Windows::Devices::PointOfService::ClaimedCashDrawer>{ using type = Windows::Devices::PointOfService::IClaimedCashDrawer; };
template <> struct default_interface<Windows::Devices::PointOfService::ClaimedJournalPrinter>{ using type = Windows::Devices::PointOfService::IClaimedJournalPrinter; };
template <> struct default_interface<Windows::Devices::PointOfService::ClaimedLineDisplay>{ using type = Windows::Devices::PointOfService::IClaimedLineDisplay; };
template <> struct default_interface<Windows::Devices::PointOfService::ClaimedMagneticStripeReader>{ using type = Windows::Devices::PointOfService::IClaimedMagneticStripeReader; };
template <> struct default_interface<Windows::Devices::PointOfService::ClaimedPosPrinter>{ using type = Windows::Devices::PointOfService::IClaimedPosPrinter; };
template <> struct default_interface<Windows::Devices::PointOfService::ClaimedReceiptPrinter>{ using type = Windows::Devices::PointOfService::IClaimedReceiptPrinter; };
template <> struct default_interface<Windows::Devices::PointOfService::ClaimedSlipPrinter>{ using type = Windows::Devices::PointOfService::IClaimedSlipPrinter; };
template <> struct default_interface<Windows::Devices::PointOfService::JournalPrintJob>{ using type = Windows::Devices::PointOfService::IPosPrinterJob; };
template <> struct default_interface<Windows::Devices::PointOfService::JournalPrinterCapabilities>{ using type = Windows::Devices::PointOfService::IJournalPrinterCapabilities; };
template <> struct default_interface<Windows::Devices::PointOfService::LineDisplay>{ using type = Windows::Devices::PointOfService::ILineDisplay; };
template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayAttributes>{ using type = Windows::Devices::PointOfService::ILineDisplayAttributes; };
template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayCapabilities>{ using type = Windows::Devices::PointOfService::ILineDisplayCapabilities; };
template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayCursor>{ using type = Windows::Devices::PointOfService::ILineDisplayCursor; };
template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayCursorAttributes>{ using type = Windows::Devices::PointOfService::ILineDisplayCursorAttributes; };
template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayCustomGlyphs>{ using type = Windows::Devices::PointOfService::ILineDisplayCustomGlyphs; };
template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayMarquee>{ using type = Windows::Devices::PointOfService::ILineDisplayMarquee; };
template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayStatisticsCategorySelector>{ using type = Windows::Devices::PointOfService::ILineDisplayStatisticsCategorySelector; };
template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayStatusUpdatedEventArgs>{ using type = Windows::Devices::PointOfService::ILineDisplayStatusUpdatedEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayStoredBitmap>{ using type = Windows::Devices::PointOfService::ILineDisplayStoredBitmap; };
template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayWindow>{ using type = Windows::Devices::PointOfService::ILineDisplayWindow; };
template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReader>{ using type = Windows::Devices::PointOfService::IMagneticStripeReader; };
template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs>{ using type = Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs>{ using type = Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderCapabilities>{ using type = Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities; };
template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs>{ using type = Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderReport>{ using type = Windows::Devices::PointOfService::IMagneticStripeReaderReport; };
template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs>{ using type = Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderTrackData>{ using type = Windows::Devices::PointOfService::IMagneticStripeReaderTrackData; };
template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>{ using type = Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::PosPrinter>{ using type = Windows::Devices::PointOfService::IPosPrinter; };
template <> struct default_interface<Windows::Devices::PointOfService::PosPrinterCapabilities>{ using type = Windows::Devices::PointOfService::IPosPrinterCapabilities; };
template <> struct default_interface<Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs>{ using type = Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::PosPrinterStatus>{ using type = Windows::Devices::PointOfService::IPosPrinterStatus; };
template <> struct default_interface<Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs>{ using type = Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::ReceiptPrintJob>{ using type = Windows::Devices::PointOfService::IReceiptPrintJob; };
template <> struct default_interface<Windows::Devices::PointOfService::ReceiptPrinterCapabilities>{ using type = Windows::Devices::PointOfService::IReceiptPrinterCapabilities; };
template <> struct default_interface<Windows::Devices::PointOfService::SlipPrintJob>{ using type = Windows::Devices::PointOfService::IReceiptOrSlipJob; };
template <> struct default_interface<Windows::Devices::PointOfService::SlipPrinterCapabilities>{ using type = Windows::Devices::PointOfService::ISlipPrinterCapabilities; };
template <> struct default_interface<Windows::Devices::PointOfService::UnifiedPosErrorData>{ using type = Windows::Devices::PointOfService::IUnifiedPosErrorData; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeScanner
{
    hstring DeviceId() const noexcept;
    Windows::Devices::PointOfService::BarcodeScannerCapabilities Capabilities() const noexcept;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedBarcodeScanner> ClaimScannerAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<uint32_t>> GetSupportedSymbologiesAsync() const;
    Windows::Foundation::IAsyncOperation<bool> IsSymbologySupportedAsync(uint32_t barcodeSymbology) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> RetrieveStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
    Windows::Foundation::Collections::IVectorView<hstring> GetSupportedProfiles() const;
    bool IsProfileSupported(param::hstring const& profile) const;
    event_token StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::BarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs> const& handler) const;
    using StatusUpdated_revoker = event_revoker<Windows::Devices::PointOfService::IBarcodeScanner>;
    StatusUpdated_revoker StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::BarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs> const& handler) const;
    void StatusUpdated(event_token const& token) const;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeScanner> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScanner<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeScanner2
{
    hstring VideoDeviceId() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeScanner2> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScanner2<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities
{
    Windows::Devices::PointOfService::UnifiedPosPowerReportingType PowerReportingType() const noexcept;
    bool IsStatisticsReportingSupported() const noexcept;
    bool IsStatisticsUpdatingSupported() const noexcept;
    bool IsImagePreviewSupported() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerCapabilities> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities1
{
    bool IsSoftwareTriggerSupported() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerCapabilities1> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities1<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeScannerDataReceivedEventArgs
{
    Windows::Devices::PointOfService::BarcodeScannerReport Report() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerDataReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeScannerErrorOccurredEventArgs
{
    Windows::Devices::PointOfService::BarcodeScannerReport PartialInputData() const noexcept;
    bool IsRetriable() const noexcept;
    Windows::Devices::PointOfService::UnifiedPosErrorData ErrorData() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerErrorOccurredEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeScannerImagePreviewReceivedEventArgs
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType Preview() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerImagePreviewReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeScannerReport
{
    uint32_t ScanDataType() const noexcept;
    Windows::Storage::Streams::IBuffer ScanData() const noexcept;
    Windows::Storage::Streams::IBuffer ScanDataLabel() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerReport> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerReport<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeScannerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeScanner> GetDefaultAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeScanner> FromIdAsync(param::hstring const& deviceId) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerStatics> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeScannerStatics2
{
    hstring GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerStatics2> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeScannerStatusUpdatedEventArgs
{
    Windows::Devices::PointOfService::BarcodeScannerStatus Status() const noexcept;
    uint32_t ExtendedStatus() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerStatusUpdatedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics
{
    uint32_t Unknown() const noexcept;
    uint32_t Ean8() const noexcept;
    uint32_t Ean8Add2() const noexcept;
    uint32_t Ean8Add5() const noexcept;
    uint32_t Eanv() const noexcept;
    uint32_t EanvAdd2() const noexcept;
    uint32_t EanvAdd5() const noexcept;
    uint32_t Ean13() const noexcept;
    uint32_t Ean13Add2() const noexcept;
    uint32_t Ean13Add5() const noexcept;
    uint32_t Isbn() const noexcept;
    uint32_t IsbnAdd5() const noexcept;
    uint32_t Ismn() const noexcept;
    uint32_t IsmnAdd2() const noexcept;
    uint32_t IsmnAdd5() const noexcept;
    uint32_t Issn() const noexcept;
    uint32_t IssnAdd2() const noexcept;
    uint32_t IssnAdd5() const noexcept;
    uint32_t Ean99() const noexcept;
    uint32_t Ean99Add2() const noexcept;
    uint32_t Ean99Add5() const noexcept;
    uint32_t Upca() const noexcept;
    uint32_t UpcaAdd2() const noexcept;
    uint32_t UpcaAdd5() const noexcept;
    uint32_t Upce() const noexcept;
    uint32_t UpceAdd2() const noexcept;
    uint32_t UpceAdd5() const noexcept;
    uint32_t UpcCoupon() const noexcept;
    uint32_t TfStd() const noexcept;
    uint32_t TfDis() const noexcept;
    uint32_t TfInt() const noexcept;
    uint32_t TfInd() const noexcept;
    uint32_t TfMat() const noexcept;
    uint32_t TfIata() const noexcept;
    uint32_t Gs1DatabarType1() const noexcept;
    uint32_t Gs1DatabarType2() const noexcept;
    uint32_t Gs1DatabarType3() const noexcept;
    uint32_t Code39() const noexcept;
    uint32_t Code39Ex() const noexcept;
    uint32_t Trioptic39() const noexcept;
    uint32_t Code32() const noexcept;
    uint32_t Pzn() const noexcept;
    uint32_t Code93() const noexcept;
    uint32_t Code93Ex() const noexcept;
    uint32_t Code128() const noexcept;
    uint32_t Gs1128() const noexcept;
    uint32_t Gs1128Coupon() const noexcept;
    uint32_t UccEan128() const noexcept;
    uint32_t Sisac() const noexcept;
    uint32_t Isbt() const noexcept;
    uint32_t Codabar() const noexcept;
    uint32_t Code11() const noexcept;
    uint32_t Msi() const noexcept;
    uint32_t Plessey() const noexcept;
    uint32_t Telepen() const noexcept;
    uint32_t Code16k() const noexcept;
    uint32_t CodablockA() const noexcept;
    uint32_t CodablockF() const noexcept;
    uint32_t Codablock128() const noexcept;
    uint32_t Code49() const noexcept;
    uint32_t Aztec() const noexcept;
    uint32_t DataCode() const noexcept;
    uint32_t DataMatrix() const noexcept;
    uint32_t HanXin() const noexcept;
    uint32_t Maxicode() const noexcept;
    uint32_t MicroPdf417() const noexcept;
    uint32_t MicroQr() const noexcept;
    uint32_t Pdf417() const noexcept;
    uint32_t Qr() const noexcept;
    uint32_t MsTag() const noexcept;
    uint32_t Ccab() const noexcept;
    uint32_t Ccc() const noexcept;
    uint32_t Tlc39() const noexcept;
    uint32_t AusPost() const noexcept;
    uint32_t CanPost() const noexcept;
    uint32_t ChinaPost() const noexcept;
    uint32_t DutchKix() const noexcept;
    uint32_t InfoMail() const noexcept;
    uint32_t ItalianPost25() const noexcept;
    uint32_t ItalianPost39() const noexcept;
    uint32_t JapanPost() const noexcept;
    uint32_t KoreanPost() const noexcept;
    uint32_t SwedenPost() const noexcept;
    uint32_t UkPost() const noexcept;
    uint32_t UsIntelligent() const noexcept;
    uint32_t UsIntelligentPkg() const noexcept;
    uint32_t UsPlanet() const noexcept;
    uint32_t UsPostNet() const noexcept;
    uint32_t Us4StateFics() const noexcept;
    uint32_t OcrA() const noexcept;
    uint32_t OcrB() const noexcept;
    uint32_t Micr() const noexcept;
    uint32_t ExtendedBase() const noexcept;
    hstring GetName(uint32_t scanDataType) const;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics2
{
    uint32_t Gs1DWCode() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes
{
    bool IsCheckDigitValidationEnabled() const noexcept;
    void IsCheckDigitValidationEnabled(bool value) const noexcept;
    bool IsCheckDigitValidationSupported() const noexcept;
    bool IsCheckDigitTransmissionEnabled() const noexcept;
    void IsCheckDigitTransmissionEnabled(bool value) const noexcept;
    bool IsCheckDigitTransmissionSupported() const noexcept;
    uint32_t DecodeLength1() const noexcept;
    void DecodeLength1(uint32_t value) const noexcept;
    uint32_t DecodeLength2() const noexcept;
    void DecodeLength2(uint32_t value) const noexcept;
    Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind DecodeLengthKind() const noexcept;
    void DecodeLengthKind(Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind const& value) const noexcept;
    bool IsDecodeLengthSupported() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IBarcodeSymbologyAttributes> { template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ICashDrawer
{
    hstring DeviceId() const noexcept;
    Windows::Devices::PointOfService::CashDrawerCapabilities Capabilities() const noexcept;
    Windows::Devices::PointOfService::CashDrawerStatus Status() const noexcept;
    bool IsDrawerOpen() const noexcept;
    Windows::Devices::PointOfService::CashDrawerEventSource DrawerEventSource() const noexcept;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedCashDrawer> ClaimDrawerAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const;
    Windows::Foundation::IAsyncOperation<hstring> GetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
    event_token StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawer, Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs> const& handler) const;
    using StatusUpdated_revoker = event_revoker<Windows::Devices::PointOfService::ICashDrawer>;
    StatusUpdated_revoker StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawer, Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs> const& handler) const;
    void StatusUpdated(event_token const& token) const;
};
template <> struct consume<Windows::Devices::PointOfService::ICashDrawer> { template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawer<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ICashDrawerCapabilities
{
    Windows::Devices::PointOfService::UnifiedPosPowerReportingType PowerReportingType() const noexcept;
    bool IsStatisticsReportingSupported() const noexcept;
    bool IsStatisticsUpdatingSupported() const noexcept;
    bool IsStatusReportingSupported() const noexcept;
    bool IsStatusMultiDrawerDetectSupported() const noexcept;
    bool IsDrawerOpenSensorAvailable() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::ICashDrawerCapabilities> { template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerCapabilities<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm
{
    void AlarmTimeout(Windows::Foundation::TimeSpan const& value) const noexcept;
    Windows::Foundation::TimeSpan AlarmTimeout() const noexcept;
    void BeepFrequency(uint32_t value) const noexcept;
    uint32_t BeepFrequency() const noexcept;
    void BeepDuration(Windows::Foundation::TimeSpan const& value) const noexcept;
    Windows::Foundation::TimeSpan BeepDuration() const noexcept;
    void BeepDelay(Windows::Foundation::TimeSpan const& value) const noexcept;
    Windows::Foundation::TimeSpan BeepDelay() const noexcept;
    event_token AlarmTimeoutExpired(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerCloseAlarm, Windows::Foundation::IInspectable> const& handler) const;
    using AlarmTimeoutExpired_revoker = event_revoker<Windows::Devices::PointOfService::ICashDrawerCloseAlarm>;
    AlarmTimeoutExpired_revoker AlarmTimeoutExpired(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerCloseAlarm, Windows::Foundation::IInspectable> const& handler) const;
    void AlarmTimeoutExpired(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<bool> StartAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::ICashDrawerCloseAlarm> { template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ICashDrawerEventSource
{
    event_token DrawerClosed(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerClosedEventArgs> const& handler) const;
    using DrawerClosed_revoker = event_revoker<Windows::Devices::PointOfService::ICashDrawerEventSource>;
    DrawerClosed_revoker DrawerClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerClosedEventArgs> const& handler) const;
    void DrawerClosed(event_token const& token) const;
    event_token DrawerOpened(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerOpenedEventArgs> const& handler) const;
    using DrawerOpened_revoker = event_revoker<Windows::Devices::PointOfService::ICashDrawerEventSource>;
    DrawerOpened_revoker DrawerOpened(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerOpenedEventArgs> const& handler) const;
    void DrawerOpened(event_token const& token) const;
};
template <> struct consume<Windows::Devices::PointOfService::ICashDrawerEventSource> { template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerEventSource<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ICashDrawerEventSourceEventArgs
{
    Windows::Devices::PointOfService::CashDrawer CashDrawer() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerEventSourceEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ICashDrawerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::CashDrawer> GetDefaultAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::CashDrawer> FromIdAsync(param::hstring const& deviceId) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::Devices::PointOfService::ICashDrawerStatics> { template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ICashDrawerStatics2
{
    hstring GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const;
};
template <> struct consume<Windows::Devices::PointOfService::ICashDrawerStatics2> { template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ICashDrawerStatus
{
    Windows::Devices::PointOfService::CashDrawerStatusKind StatusKind() const noexcept;
    uint32_t ExtendedStatus() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::ICashDrawerStatus> { template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerStatus<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ICashDrawerStatusUpdatedEventArgs
{
    Windows::Devices::PointOfService::CashDrawerStatus Status() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerStatusUpdatedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner
{
    hstring DeviceId() const noexcept;
    bool IsEnabled() const noexcept;
    void IsDisabledOnDataReceived(bool value) const noexcept;
    bool IsDisabledOnDataReceived() const noexcept;
    void IsDecodeDataEnabled(bool value) const noexcept;
    bool IsDecodeDataEnabled() const noexcept;
    Windows::Foundation::IAsyncAction EnableAsync() const;
    Windows::Foundation::IAsyncAction DisableAsync() const;
    void RetainDevice() const;
    Windows::Foundation::IAsyncAction SetActiveSymbologiesAsync(param::async_iterable<uint32_t> const& symbologies) const;
    Windows::Foundation::IAsyncAction ResetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
    Windows::Foundation::IAsyncAction UpdateStatisticsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& statistics) const;
    Windows::Foundation::IAsyncAction SetActiveProfileAsync(param::hstring const& profile) const;
    event_token DataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs> const& handler) const;
    using DataReceived_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner>;
    DataReceived_revoker DataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs> const& handler) const;
    void DataReceived(event_token const& token) const;
    event_token TriggerPressed(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const;
    using TriggerPressed_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner>;
    TriggerPressed_revoker TriggerPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const;
    void TriggerPressed(event_token const& token) const;
    event_token TriggerReleased(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const;
    using TriggerReleased_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner>;
    TriggerReleased_revoker TriggerReleased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const;
    void TriggerReleased(event_token const& token) const;
    event_token ReleaseDeviceRequested(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const;
    using ReleaseDeviceRequested_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner>;
    ReleaseDeviceRequested_revoker ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const;
    void ReleaseDeviceRequested(event_token const& token) const;
    event_token ImagePreviewReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs> const& handler) const;
    using ImagePreviewReceived_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner>;
    ImagePreviewReceived_revoker ImagePreviewReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs> const& handler) const;
    void ImagePreviewReceived(event_token const& token) const;
    event_token ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs> const& handler) const;
    using ErrorOccurred_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner>;
    ErrorOccurred_revoker ErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs> const& handler) const;
    void ErrorOccurred(event_token const& token) const;
};
template <> struct consume<Windows::Devices::PointOfService::IClaimedBarcodeScanner> { template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner1
{
    Windows::Foundation::IAsyncAction StartSoftwareTriggerAsync() const;
    Windows::Foundation::IAsyncAction StopSoftwareTriggerAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::IClaimedBarcodeScanner1> { template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner1<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner2
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeSymbologyAttributes> GetSymbologyAttributesAsync(uint32_t barcodeSymbology) const;
    Windows::Foundation::IAsyncOperation<bool> SetSymbologyAttributesAsync(uint32_t barcodeSymbology, Windows::Devices::PointOfService::BarcodeSymbologyAttributes const& attributes) const;
};
template <> struct consume<Windows::Devices::PointOfService::IClaimedBarcodeScanner2> { template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner2<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IClaimedCashDrawer
{
    hstring DeviceId() const noexcept;
    bool IsEnabled() const noexcept;
    bool IsDrawerOpen() const noexcept;
    Windows::Devices::PointOfService::CashDrawerCloseAlarm CloseAlarm() const noexcept;
    Windows::Foundation::IAsyncOperation<bool> OpenDrawerAsync() const;
    Windows::Foundation::IAsyncOperation<bool> EnableAsync() const;
    Windows::Foundation::IAsyncOperation<bool> DisableAsync() const;
    Windows::Foundation::IAsyncOperation<bool> RetainDeviceAsync() const;
    Windows::Foundation::IAsyncOperation<bool> ResetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
    Windows::Foundation::IAsyncOperation<bool> UpdateStatisticsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& statistics) const;
    event_token ReleaseDeviceRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedCashDrawer, Windows::Foundation::IInspectable> const& handler) const;
    using ReleaseDeviceRequested_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedCashDrawer>;
    ReleaseDeviceRequested_revoker ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedCashDrawer, Windows::Foundation::IInspectable> const& handler) const;
    void ReleaseDeviceRequested(event_token const& token) const;
};
template <> struct consume<Windows::Devices::PointOfService::IClaimedCashDrawer> { template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IClaimedJournalPrinter
{
    Windows::Devices::PointOfService::JournalPrintJob CreateJob() const;
};
template <> struct consume<Windows::Devices::PointOfService::IClaimedJournalPrinter> { template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedJournalPrinter<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IClaimedLineDisplay
{
    hstring DeviceId() const noexcept;
    Windows::Devices::PointOfService::LineDisplayCapabilities Capabilities() const noexcept;
    hstring PhysicalDeviceName() const noexcept;
    hstring PhysicalDeviceDescription() const noexcept;
    hstring DeviceControlDescription() const noexcept;
    hstring DeviceControlVersion() const noexcept;
    hstring DeviceServiceVersion() const noexcept;
    Windows::Devices::PointOfService::LineDisplayWindow DefaultWindow() const noexcept;
    void RetainDevice() const;
    event_token ReleaseDeviceRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedLineDisplay, Windows::Foundation::IInspectable> const& handler) const;
    using ReleaseDeviceRequested_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedLineDisplay>;
    ReleaseDeviceRequested_revoker ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedLineDisplay, Windows::Foundation::IInspectable> const& handler) const;
    void ReleaseDeviceRequested(event_token const& token) const;
};
template <> struct consume<Windows::Devices::PointOfService::IClaimedLineDisplay> { template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IClaimedLineDisplay2
{
    Windows::Foundation::IAsyncOperation<hstring> GetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
    Windows::Foundation::IAsyncOperation<hstring> CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplayPowerStatus> CheckPowerStatusAsync() const;
    event_token StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedLineDisplay, Windows::Devices::PointOfService::LineDisplayStatusUpdatedEventArgs> const& handler) const;
    using StatusUpdated_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedLineDisplay2>;
    StatusUpdated_revoker StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedLineDisplay, Windows::Devices::PointOfService::LineDisplayStatusUpdatedEventArgs> const& handler) const;
    void StatusUpdated(event_token const& token) const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Size> SupportedScreenSizesInCharacters() const noexcept;
    Windows::Foundation::Size MaxBitmapSizeInPixels() const noexcept;
    Windows::Foundation::Collections::IVectorView<int32_t> SupportedCharacterSets() const noexcept;
    Windows::Devices::PointOfService::LineDisplayCustomGlyphs CustomGlyphs() const noexcept;
    Windows::Devices::PointOfService::LineDisplayAttributes GetAttributes() const;
    Windows::Foundation::IAsyncOperation<bool> TryUpdateAttributesAsync(Windows::Devices::PointOfService::LineDisplayAttributes const& attributes) const;
    Windows::Foundation::IAsyncOperation<bool> TrySetDescriptorAsync(uint32_t descriptor, Windows::Devices::PointOfService::LineDisplayDescriptorState const& descriptorState) const;
    Windows::Foundation::IAsyncOperation<bool> TryClearDescriptorsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplayWindow> TryCreateWindowAsync(Windows::Foundation::Rect const& viewport, Windows::Foundation::Size const& windowSize) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplayStoredBitmap> TryStoreStorageFileBitmapAsync(Windows::Storage::StorageFile const& bitmap) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplayStoredBitmap> TryStoreStorageFileBitmapAsync(Windows::Storage::StorageFile const& bitmap, Windows::Devices::PointOfService::LineDisplayHorizontalAlignment const& horizontalAlignment, Windows::Devices::PointOfService::LineDisplayVerticalAlignment const& verticalAlignment) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplayStoredBitmap> TryStoreStorageFileBitmapAsync(Windows::Storage::StorageFile const& bitmap, Windows::Devices::PointOfService::LineDisplayHorizontalAlignment const& horizontalAlignment, Windows::Devices::PointOfService::LineDisplayVerticalAlignment const& verticalAlignment, int32_t widthInPixels) const;
};
template <> struct consume<Windows::Devices::PointOfService::IClaimedLineDisplay2> { template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedLineDisplay2<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IClaimedLineDisplayStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedLineDisplay> FromIdAsync(param::hstring const& deviceId) const;
    hstring GetDeviceSelector() const;
    hstring GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const;
};
template <> struct consume<Windows::Devices::PointOfService::IClaimedLineDisplayStatics> { template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedLineDisplayStatics<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader
{
    hstring DeviceId() const noexcept;
    bool IsEnabled() const noexcept;
    void IsDisabledOnDataReceived(bool value) const noexcept;
    bool IsDisabledOnDataReceived() const noexcept;
    void IsDecodeDataEnabled(bool value) const noexcept;
    bool IsDecodeDataEnabled() const noexcept;
    bool IsDeviceAuthenticated() const noexcept;
    void DataEncryptionAlgorithm(uint32_t value) const noexcept;
    uint32_t DataEncryptionAlgorithm() const noexcept;
    void TracksToRead(Windows::Devices::PointOfService::MagneticStripeReaderTrackIds const& value) const noexcept;
    Windows::Devices::PointOfService::MagneticStripeReaderTrackIds TracksToRead() const noexcept;
    void IsTransmitSentinelsEnabled(bool value) const noexcept;
    bool IsTransmitSentinelsEnabled() const noexcept;
    Windows::Foundation::IAsyncAction EnableAsync() const;
    Windows::Foundation::IAsyncAction DisableAsync() const;
    void RetainDevice() const;
    void SetErrorReportingType(Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType const& value) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> RetrieveDeviceAuthenticationDataAsync() const;
    Windows::Foundation::IAsyncAction AuthenticateDeviceAsync(array_view<uint8_t const> responseToken) const;
    Windows::Foundation::IAsyncAction DeAuthenticateDeviceAsync(array_view<uint8_t const> responseToken) const;
    Windows::Foundation::IAsyncAction UpdateKeyAsync(param::hstring const& key, param::hstring const& keyName) const;
    Windows::Foundation::IAsyncAction ResetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
    Windows::Foundation::IAsyncAction UpdateStatisticsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& statistics) const;
    event_token BankCardDataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs> const& handler) const;
    using BankCardDataReceived_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>;
    BankCardDataReceived_revoker BankCardDataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs> const& handler) const;
    void BankCardDataReceived(event_token const& token) const;
    event_token AamvaCardDataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs> const& handler) const;
    using AamvaCardDataReceived_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>;
    AamvaCardDataReceived_revoker AamvaCardDataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs> const& handler) const;
    void AamvaCardDataReceived(event_token const& token) const;
    event_token VendorSpecificDataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> const& handler) const;
    using VendorSpecificDataReceived_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>;
    VendorSpecificDataReceived_revoker VendorSpecificDataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> const& handler) const;
    void VendorSpecificDataReceived(event_token const& token) const;
    event_token ReleaseDeviceRequested(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader> const& handler) const;
    using ReleaseDeviceRequested_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>;
    ReleaseDeviceRequested_revoker ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader> const& handler) const;
    void ReleaseDeviceRequested(event_token const& token) const;
    event_token ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs> const& handler) const;
    using ErrorOccurred_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>;
    ErrorOccurred_revoker ErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs> const& handler) const;
    void ErrorOccurred(event_token const& token) const;
};
template <> struct consume<Windows::Devices::PointOfService::IClaimedMagneticStripeReader> { template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IClaimedPosPrinter
{
    hstring DeviceId() const noexcept;
    bool IsEnabled() const noexcept;
    void CharacterSet(uint32_t value) const noexcept;
    uint32_t CharacterSet() const noexcept;
    bool IsCoverOpen() const noexcept;
    void IsCharacterSetMappingEnabled(bool value) const noexcept;
    bool IsCharacterSetMappingEnabled() const noexcept;
    void MapMode(Windows::Devices::PointOfService::PosPrinterMapMode const& value) const noexcept;
    Windows::Devices::PointOfService::PosPrinterMapMode MapMode() const noexcept;
    Windows::Devices::PointOfService::ClaimedReceiptPrinter Receipt() const noexcept;
    Windows::Devices::PointOfService::ClaimedSlipPrinter Slip() const noexcept;
    Windows::Devices::PointOfService::ClaimedJournalPrinter Journal() const noexcept;
    Windows::Foundation::IAsyncOperation<bool> EnableAsync() const;
    Windows::Foundation::IAsyncOperation<bool> DisableAsync() const;
    Windows::Foundation::IAsyncOperation<bool> RetainDeviceAsync() const;
    Windows::Foundation::IAsyncOperation<bool> ResetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
    Windows::Foundation::IAsyncOperation<bool> UpdateStatisticsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& statistics) const;
    event_token ReleaseDeviceRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedPosPrinter, Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs> const& handler) const;
    using ReleaseDeviceRequested_revoker = event_revoker<Windows::Devices::PointOfService::IClaimedPosPrinter>;
    ReleaseDeviceRequested_revoker ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedPosPrinter, Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs> const& handler) const;
    void ReleaseDeviceRequested(event_token const& token) const;
};
template <> struct consume<Windows::Devices::PointOfService::IClaimedPosPrinter> { template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IClaimedReceiptPrinter
{
    uint32_t SidewaysMaxLines() const noexcept;
    uint32_t SidewaysMaxChars() const noexcept;
    uint32_t LinesToPaperCut() const noexcept;
    Windows::Foundation::Size PageSize() const noexcept;
    Windows::Foundation::Rect PrintArea() const noexcept;
    Windows::Devices::PointOfService::ReceiptPrintJob CreateJob() const;
};
template <> struct consume<Windows::Devices::PointOfService::IClaimedReceiptPrinter> { template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedReceiptPrinter<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IClaimedSlipPrinter
{
    uint32_t SidewaysMaxLines() const noexcept;
    uint32_t SidewaysMaxChars() const noexcept;
    uint32_t MaxLines() const noexcept;
    uint32_t LinesNearEndToEnd() const noexcept;
    Windows::Devices::PointOfService::PosPrinterPrintSide PrintSide() const noexcept;
    Windows::Foundation::Size PageSize() const noexcept;
    Windows::Foundation::Rect PrintArea() const noexcept;
    void OpenJaws() const;
    void CloseJaws() const;
    Windows::Foundation::IAsyncOperation<bool> InsertSlipAsync(Windows::Foundation::TimeSpan const& timeout) const;
    Windows::Foundation::IAsyncOperation<bool> RemoveSlipAsync(Windows::Foundation::TimeSpan const& timeout) const;
    void ChangePrintSide(Windows::Devices::PointOfService::PosPrinterPrintSide const& printSide) const;
    Windows::Devices::PointOfService::SlipPrintJob CreateJob() const;
};
template <> struct consume<Windows::Devices::PointOfService::IClaimedSlipPrinter> { template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation
{
    void CharactersPerLine(uint32_t value) const noexcept;
    uint32_t CharactersPerLine() const noexcept;
    void LineHeight(uint32_t value) const noexcept;
    uint32_t LineHeight() const noexcept;
    void LineSpacing(uint32_t value) const noexcept;
    uint32_t LineSpacing() const noexcept;
    uint32_t LineWidth() const noexcept;
    void IsLetterQuality(bool value) const noexcept;
    bool IsLetterQuality() const noexcept;
    bool IsPaperNearEnd() const noexcept;
    void ColorCartridge(Windows::Devices::PointOfService::PosPrinterColorCartridge const& value) const noexcept;
    Windows::Devices::PointOfService::PosPrinterColorCartridge ColorCartridge() const noexcept;
    bool IsCoverOpen() const noexcept;
    bool IsCartridgeRemoved() const noexcept;
    bool IsCartridgeEmpty() const noexcept;
    bool IsHeadCleaning() const noexcept;
    bool IsPaperEmpty() const noexcept;
    bool IsReadyToPrint() const noexcept;
    bool ValidateData(param::hstring const& data) const;
};
template <> struct consume<Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation> { template <typename D> using type = consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities
{
    bool IsPrinterPresent() const noexcept;
    bool IsDualColorSupported() const noexcept;
    Windows::Devices::PointOfService::PosPrinterColorCapabilities ColorCartridgeCapabilities() const noexcept;
    Windows::Devices::PointOfService::PosPrinterCartridgeSensors CartridgeSensors() const noexcept;
    bool IsBoldSupported() const noexcept;
    bool IsItalicSupported() const noexcept;
    bool IsUnderlineSupported() const noexcept;
    bool IsDoubleHighPrintSupported() const noexcept;
    bool IsDoubleWidePrintSupported() const noexcept;
    bool IsDoubleHighDoubleWidePrintSupported() const noexcept;
    bool IsPaperEmptySensorSupported() const noexcept;
    bool IsPaperNearEndSensorSupported() const noexcept;
    Windows::Foundation::Collections::IVectorView<uint32_t> SupportedCharactersPerLine() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities> { template <typename D> using type = consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities
{
    bool IsBarcodeSupported() const noexcept;
    bool IsBitmapSupported() const noexcept;
    bool IsLeft90RotationSupported() const noexcept;
    bool IsRight90RotationSupported() const noexcept;
    bool Is180RotationSupported() const noexcept;
    bool IsPrintAreaSupported() const noexcept;
    Windows::Devices::PointOfService::PosPrinterRuledLineCapabilities RuledLineCapabilities() const noexcept;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::PointOfService::PosPrinterRotation> SupportedBarcodeRotations() const noexcept;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::PointOfService::PosPrinterRotation> SupportedBitmapRotations() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities> { template <typename D> using type = consume_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IJournalPrinterCapabilities
{
};
template <> struct consume<Windows::Devices::PointOfService::IJournalPrinterCapabilities> { template <typename D> using type = consume_Windows_Devices_PointOfService_IJournalPrinterCapabilities<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplay
{
    hstring DeviceId() const noexcept;
    Windows::Devices::PointOfService::LineDisplayCapabilities Capabilities() const noexcept;
    hstring PhysicalDeviceName() const noexcept;
    hstring PhysicalDeviceDescription() const noexcept;
    hstring DeviceControlDescription() const noexcept;
    hstring DeviceControlVersion() const noexcept;
    hstring DeviceServiceVersion() const noexcept;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedLineDisplay> ClaimAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplay> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplay<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplay2
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplayPowerStatus> CheckPowerStatusAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplay2> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplay2<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplayAttributes
{
    bool IsPowerNotifyEnabled() const noexcept;
    void IsPowerNotifyEnabled(bool value) const noexcept;
    int32_t Brightness() const noexcept;
    void Brightness(int32_t value) const noexcept;
    Windows::Foundation::TimeSpan BlinkRate() const noexcept;
    void BlinkRate(Windows::Foundation::TimeSpan const& value) const noexcept;
    Windows::Foundation::Size ScreenSizeInCharacters() const noexcept;
    void ScreenSizeInCharacters(Windows::Foundation::Size const& value) const noexcept;
    int32_t CharacterSet() const noexcept;
    void CharacterSet(int32_t value) const noexcept;
    bool IsCharacterSetMappingEnabled() const noexcept;
    void IsCharacterSetMappingEnabled(bool value) const noexcept;
    Windows::Devices::PointOfService::LineDisplayWindow CurrentWindow() const noexcept;
    void CurrentWindow(Windows::Devices::PointOfService::LineDisplayWindow const& value) const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplayAttributes> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayAttributes<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplayCapabilities
{
    bool IsStatisticsReportingSupported() const noexcept;
    bool IsStatisticsUpdatingSupported() const noexcept;
    Windows::Devices::PointOfService::UnifiedPosPowerReportingType PowerReportingType() const noexcept;
    bool CanChangeScreenSize() const noexcept;
    bool CanDisplayBitmaps() const noexcept;
    bool CanReadCharacterAtCursor() const noexcept;
    bool CanMapCharacterSets() const noexcept;
    bool CanDisplayCustomGlyphs() const noexcept;
    Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity CanReverse() const noexcept;
    Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity CanBlink() const noexcept;
    bool CanChangeBlinkRate() const noexcept;
    bool IsBrightnessSupported() const noexcept;
    bool IsCursorSupported() const noexcept;
    bool IsHorizontalMarqueeSupported() const noexcept;
    bool IsVerticalMarqueeSupported() const noexcept;
    bool IsInterCharacterWaitSupported() const noexcept;
    uint32_t SupportedDescriptors() const noexcept;
    uint32_t SupportedWindows() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplayCapabilities> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplayCursor
{
    bool CanCustomize() const noexcept;
    bool IsBlinkSupported() const noexcept;
    bool IsBlockSupported() const noexcept;
    bool IsHalfBlockSupported() const noexcept;
    bool IsUnderlineSupported() const noexcept;
    bool IsReverseSupported() const noexcept;
    bool IsOtherSupported() const noexcept;
    Windows::Devices::PointOfService::LineDisplayCursorAttributes GetAttributes() const;
    Windows::Foundation::IAsyncOperation<bool> TryUpdateAttributesAsync(Windows::Devices::PointOfService::LineDisplayCursorAttributes const& attributes) const;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplayCursor> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayCursor<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplayCursorAttributes
{
    bool IsBlinkEnabled() const noexcept;
    void IsBlinkEnabled(bool value) const noexcept;
    Windows::Devices::PointOfService::LineDisplayCursorType CursorType() const noexcept;
    void CursorType(Windows::Devices::PointOfService::LineDisplayCursorType const& value) const noexcept;
    bool IsAutoAdvanceEnabled() const noexcept;
    void IsAutoAdvanceEnabled(bool value) const noexcept;
    Windows::Foundation::Point Position() const noexcept;
    void Position(Windows::Foundation::Point const& value) const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplayCursorAttributes> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayCursorAttributes<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplayCustomGlyphs
{
    Windows::Foundation::Size SizeInPixels() const noexcept;
    Windows::Foundation::Collections::IVectorView<uint32_t> SupportedGlyphCodes() const noexcept;
    Windows::Foundation::IAsyncOperation<bool> TryRedefineAsync(uint32_t glyphCode, Windows::Storage::Streams::IBuffer const& glyphData) const;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplayCustomGlyphs> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayCustomGlyphs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplayMarquee
{
    Windows::Devices::PointOfService::LineDisplayMarqueeFormat Format() const noexcept;
    void Format(Windows::Devices::PointOfService::LineDisplayMarqueeFormat const& value) const noexcept;
    Windows::Foundation::TimeSpan RepeatWaitInterval() const noexcept;
    void RepeatWaitInterval(Windows::Foundation::TimeSpan const& value) const noexcept;
    Windows::Foundation::TimeSpan ScrollWaitInterval() const noexcept;
    void ScrollWaitInterval(Windows::Foundation::TimeSpan const& value) const noexcept;
    Windows::Foundation::IAsyncOperation<bool> TryStartScrollingAsync(Windows::Devices::PointOfService::LineDisplayScrollDirection const& direction) const;
    Windows::Foundation::IAsyncOperation<bool> TryStopScrollingAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplayMarquee> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayMarquee<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplayStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplay> FromIdAsync(param::hstring const& deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplay> GetDefaultAsync() const;
    hstring GetDeviceSelector() const;
    hstring GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplayStatics> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayStatics<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplayStatics2
{
    Windows::Devices::PointOfService::LineDisplayStatisticsCategorySelector StatisticsCategorySelector() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplayStatics2> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplayStatisticsCategorySelector
{
    hstring AllStatistics() const noexcept;
    hstring UnifiedPosStatistics() const noexcept;
    hstring ManufacturerStatistics() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplayStatisticsCategorySelector> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayStatisticsCategorySelector<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplayStatusUpdatedEventArgs
{
    Windows::Devices::PointOfService::LineDisplayPowerStatus Status() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplayStatusUpdatedEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayStatusUpdatedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplayStoredBitmap
{
    hstring EscapeSequence() const noexcept;
    Windows::Foundation::IAsyncOperation<bool> TryDeleteAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplayStoredBitmap> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayStoredBitmap<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplayWindow
{
    Windows::Foundation::Size SizeInCharacters() const noexcept;
    Windows::Foundation::TimeSpan InterCharacterWaitInterval() const noexcept;
    void InterCharacterWaitInterval(Windows::Foundation::TimeSpan const& value) const noexcept;
    Windows::Foundation::IAsyncOperation<bool> TryRefreshAsync() const;
    Windows::Foundation::IAsyncOperation<bool> TryDisplayTextAsync(param::hstring const& text, Windows::Devices::PointOfService::LineDisplayTextAttribute const& displayAttribute) const;
    Windows::Foundation::IAsyncOperation<bool> TryDisplayTextAsync(param::hstring const& text, Windows::Devices::PointOfService::LineDisplayTextAttribute const& displayAttribute, Windows::Foundation::Point const& startPosition) const;
    Windows::Foundation::IAsyncOperation<bool> TryDisplayTextAsync(param::hstring const& text) const;
    Windows::Foundation::IAsyncOperation<bool> TryScrollTextAsync(Windows::Devices::PointOfService::LineDisplayScrollDirection const& direction, uint32_t numberOfColumnsOrRows) const;
    Windows::Foundation::IAsyncOperation<bool> TryClearTextAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplayWindow> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayWindow<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ILineDisplayWindow2
{
    Windows::Devices::PointOfService::LineDisplayCursor Cursor() const noexcept;
    Windows::Devices::PointOfService::LineDisplayMarquee Marquee() const noexcept;
    Windows::Foundation::IAsyncOperation<uint32_t> ReadCharacterAtCursorAsync() const;
    Windows::Foundation::IAsyncOperation<bool> TryDisplayStoredBitmapAtCursorAsync(Windows::Devices::PointOfService::LineDisplayStoredBitmap const& bitmap) const;
    Windows::Foundation::IAsyncOperation<bool> TryDisplayStorageFileBitmapAtCursorAsync(Windows::Storage::StorageFile const& bitmap) const;
    Windows::Foundation::IAsyncOperation<bool> TryDisplayStorageFileBitmapAtCursorAsync(Windows::Storage::StorageFile const& bitmap, Windows::Devices::PointOfService::LineDisplayHorizontalAlignment const& horizontalAlignment, Windows::Devices::PointOfService::LineDisplayVerticalAlignment const& verticalAlignment) const;
    Windows::Foundation::IAsyncOperation<bool> TryDisplayStorageFileBitmapAtCursorAsync(Windows::Storage::StorageFile const& bitmap, Windows::Devices::PointOfService::LineDisplayHorizontalAlignment const& horizontalAlignment, Windows::Devices::PointOfService::LineDisplayVerticalAlignment const& verticalAlignment, int32_t widthInPixels) const;
    Windows::Foundation::IAsyncOperation<bool> TryDisplayStorageFileBitmapAtPointAsync(Windows::Storage::StorageFile const& bitmap, Windows::Foundation::Point const& offsetInPixels) const;
    Windows::Foundation::IAsyncOperation<bool> TryDisplayStorageFileBitmapAtPointAsync(Windows::Storage::StorageFile const& bitmap, Windows::Foundation::Point const& offsetInPixels, int32_t widthInPixels) const;
};
template <> struct consume<Windows::Devices::PointOfService::ILineDisplayWindow2> { template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayWindow2<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IMagneticStripeReader
{
    hstring DeviceId() const noexcept;
    Windows::Devices::PointOfService::MagneticStripeReaderCapabilities Capabilities() const noexcept;
    com_array<uint32_t> SupportedCardTypes() const noexcept;
    Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationProtocol DeviceAuthenticationProtocol() const noexcept;
    Windows::Foundation::IAsyncOperation<hstring> CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedMagneticStripeReader> ClaimReaderAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> RetrieveStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
    Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType GetErrorReportingType() const;
    event_token StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::MagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs> const& handler) const;
    using StatusUpdated_revoker = event_revoker<Windows::Devices::PointOfService::IMagneticStripeReader>;
    StatusUpdated_revoker StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::MagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs> const& handler) const;
    void StatusUpdated(event_token const& token) const;
};
template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReader> { template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReader<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs
{
    Windows::Devices::PointOfService::MagneticStripeReaderReport Report() const noexcept;
    hstring LicenseNumber() const noexcept;
    hstring ExpirationDate() const noexcept;
    hstring Restrictions() const noexcept;
    hstring Class() const noexcept;
    hstring Endorsements() const noexcept;
    hstring BirthDate() const noexcept;
    hstring FirstName() const noexcept;
    hstring Surname() const noexcept;
    hstring Suffix() const noexcept;
    hstring Gender() const noexcept;
    hstring HairColor() const noexcept;
    hstring EyeColor() const noexcept;
    hstring Height() const noexcept;
    hstring Weight() const noexcept;
    hstring Address() const noexcept;
    hstring City() const noexcept;
    hstring State() const noexcept;
    hstring PostalCode() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs
{
    Windows::Devices::PointOfService::MagneticStripeReaderReport Report() const noexcept;
    hstring AccountNumber() const noexcept;
    hstring ExpirationDate() const noexcept;
    hstring ServiceCode() const noexcept;
    hstring Title() const noexcept;
    hstring FirstName() const noexcept;
    hstring MiddleInitial() const noexcept;
    hstring Surname() const noexcept;
    hstring Suffix() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities
{
    hstring CardAuthentication() const noexcept;
    uint32_t SupportedEncryptionAlgorithms() const noexcept;
    Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationLevel AuthenticationLevel() const noexcept;
    bool IsIsoSupported() const noexcept;
    bool IsJisOneSupported() const noexcept;
    bool IsJisTwoSupported() const noexcept;
    Windows::Devices::PointOfService::UnifiedPosPowerReportingType PowerReportingType() const noexcept;
    bool IsStatisticsReportingSupported() const noexcept;
    bool IsStatisticsUpdatingSupported() const noexcept;
    bool IsTrackDataMaskingSupported() const noexcept;
    bool IsTransmitSentinelsSupported() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities> { template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderCardTypesStatics
{
    uint32_t Unknown() const noexcept;
    uint32_t Bank() const noexcept;
    uint32_t Aamva() const noexcept;
    uint32_t ExtendedBase() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics> { template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderCardTypesStatics<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderEncryptionAlgorithmsStatics
{
    uint32_t None() const noexcept;
    uint32_t TripleDesDukpt() const noexcept;
    uint32_t ExtendedBase() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics> { template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderEncryptionAlgorithmsStatics<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderErrorOccurredEventArgs
{
    Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType Track1Status() const noexcept;
    Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType Track2Status() const noexcept;
    Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType Track3Status() const noexcept;
    Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType Track4Status() const noexcept;
    Windows::Devices::PointOfService::UnifiedPosErrorData ErrorData() const noexcept;
    Windows::Devices::PointOfService::MagneticStripeReaderReport PartialInputData() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderErrorOccurredEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderReport
{
    uint32_t CardType() const noexcept;
    Windows::Devices::PointOfService::MagneticStripeReaderTrackData Track1() const noexcept;
    Windows::Devices::PointOfService::MagneticStripeReaderTrackData Track2() const noexcept;
    Windows::Devices::PointOfService::MagneticStripeReaderTrackData Track3() const noexcept;
    Windows::Devices::PointOfService::MagneticStripeReaderTrackData Track4() const noexcept;
    Windows::Foundation::Collections::IMapView<hstring, hstring> Properties() const noexcept;
    Windows::Storage::Streams::IBuffer CardAuthenticationData() const noexcept;
    uint32_t CardAuthenticationDataLength() const noexcept;
    Windows::Storage::Streams::IBuffer AdditionalSecurityInformation() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderReport> { template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderReport<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::MagneticStripeReader> GetDefaultAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::MagneticStripeReader> FromIdAsync(param::hstring const& deviceId) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderStatics> { template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatics<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatics2
{
    hstring GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const;
};
template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderStatics2> { template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatusUpdatedEventArgs
{
    Windows::Devices::PointOfService::MagneticStripeReaderStatus Status() const noexcept;
    uint32_t ExtendedStatus() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatusUpdatedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderTrackData
{
    Windows::Storage::Streams::IBuffer Data() const noexcept;
    Windows::Storage::Streams::IBuffer DiscretionaryData() const noexcept;
    Windows::Storage::Streams::IBuffer EncryptedData() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderTrackData> { template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderTrackData<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs
{
    Windows::Devices::PointOfService::MagneticStripeReaderReport Report() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IPosPrinter
{
    hstring DeviceId() const noexcept;
    Windows::Devices::PointOfService::PosPrinterCapabilities Capabilities() const noexcept;
    Windows::Foundation::Collections::IVectorView<uint32_t> SupportedCharacterSets() const noexcept;
    Windows::Foundation::Collections::IVectorView<hstring> SupportedTypeFaces() const noexcept;
    Windows::Devices::PointOfService::PosPrinterStatus Status() const noexcept;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedPosPrinter> ClaimPrinterAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const;
    Windows::Foundation::IAsyncOperation<hstring> GetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
    event_token StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::PosPrinter, Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs> const& handler) const;
    using StatusUpdated_revoker = event_revoker<Windows::Devices::PointOfService::IPosPrinter>;
    StatusUpdated_revoker StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::PosPrinter, Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs> const& handler) const;
    void StatusUpdated(event_token const& token) const;
};
template <> struct consume<Windows::Devices::PointOfService::IPosPrinter> { template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinter<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IPosPrinterCapabilities
{
    Windows::Devices::PointOfService::UnifiedPosPowerReportingType PowerReportingType() const noexcept;
    bool IsStatisticsReportingSupported() const noexcept;
    bool IsStatisticsUpdatingSupported() const noexcept;
    uint32_t DefaultCharacterSet() const noexcept;
    bool HasCoverSensor() const noexcept;
    bool CanMapCharacterSet() const noexcept;
    bool IsTransactionSupported() const noexcept;
    Windows::Devices::PointOfService::ReceiptPrinterCapabilities Receipt() const noexcept;
    Windows::Devices::PointOfService::SlipPrinterCapabilities Slip() const noexcept;
    Windows::Devices::PointOfService::JournalPrinterCapabilities Journal() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IPosPrinterCapabilities> { template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterCapabilities<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IPosPrinterCharacterSetIdsStatics
{
    uint32_t Utf16LE() const noexcept;
    uint32_t Ascii() const noexcept;
    uint32_t Ansi() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics> { template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterCharacterSetIdsStatics<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IPosPrinterJob
{
    void Print(param::hstring const& data) const;
    void PrintLine(param::hstring const& data) const;
    void PrintLine() const;
    Windows::Foundation::IAsyncOperation<bool> ExecuteAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::IPosPrinterJob> { template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterJob<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IPosPrinterReleaseDeviceRequestedEventArgs
{
};
template <> struct consume<Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterReleaseDeviceRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IPosPrinterStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::PosPrinter> GetDefaultAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::PosPrinter> FromIdAsync(param::hstring const& deviceId) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::Devices::PointOfService::IPosPrinterStatics> { template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterStatics<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IPosPrinterStatics2
{
    hstring GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const;
};
template <> struct consume<Windows::Devices::PointOfService::IPosPrinterStatics2> { template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IPosPrinterStatus
{
    Windows::Devices::PointOfService::PosPrinterStatusKind StatusKind() const noexcept;
    uint32_t ExtendedStatus() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IPosPrinterStatus> { template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterStatus<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IPosPrinterStatusUpdatedEventArgs
{
    Windows::Devices::PointOfService::PosPrinterStatus Status() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterStatusUpdatedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IReceiptOrSlipJob
{
    void SetBarcodeRotation(Windows::Devices::PointOfService::PosPrinterRotation const& value) const;
    void SetPrintRotation(Windows::Devices::PointOfService::PosPrinterRotation const& value, bool includeBitmaps) const;
    void SetPrintArea(Windows::Foundation::Rect const& value) const;
    void SetBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::BitmapFrame const& bitmap, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment) const;
    void SetBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::BitmapFrame const& bitmap, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment, uint32_t width) const;
    void SetCustomAlignedBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::BitmapFrame const& bitmap, uint32_t alignmentDistance) const;
    void SetCustomAlignedBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::BitmapFrame const& bitmap, uint32_t alignmentDistance, uint32_t width) const;
    void PrintSavedBitmap(uint32_t bitmapNumber) const;
    void DrawRuledLine(param::hstring const& positionList, Windows::Devices::PointOfService::PosPrinterLineDirection const& lineDirection, uint32_t lineWidth, Windows::Devices::PointOfService::PosPrinterLineStyle const& lineStyle, uint32_t lineColor) const;
    void PrintBarcode(param::hstring const& data, uint32_t symbology, uint32_t height, uint32_t width, Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition const& textPosition, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment) const;
    void PrintBarcodeCustomAlign(param::hstring const& data, uint32_t symbology, uint32_t height, uint32_t width, Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition const& textPosition, uint32_t alignmentDistance) const;
    void PrintBitmap(Windows::Graphics::Imaging::BitmapFrame const& bitmap, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment) const;
    void PrintBitmap(Windows::Graphics::Imaging::BitmapFrame const& bitmap, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment, uint32_t width) const;
    void PrintCustomAlignedBitmap(Windows::Graphics::Imaging::BitmapFrame const& bitmap, uint32_t alignmentDistance) const;
    void PrintCustomAlignedBitmap(Windows::Graphics::Imaging::BitmapFrame const& bitmap, uint32_t alignmentDistance, uint32_t width) const;
};
template <> struct consume<Windows::Devices::PointOfService::IReceiptOrSlipJob> { template <typename D> using type = consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IReceiptPrintJob
{
    void MarkFeed(Windows::Devices::PointOfService::PosPrinterMarkFeedKind const& kind) const;
    void CutPaper(double percentage) const;
    void CutPaper() const;
};
template <> struct consume<Windows::Devices::PointOfService::IReceiptPrintJob> { template <typename D> using type = consume_Windows_Devices_PointOfService_IReceiptPrintJob<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IReceiptPrinterCapabilities
{
    bool CanCutPaper() const noexcept;
    bool IsStampSupported() const noexcept;
    Windows::Devices::PointOfService::PosPrinterMarkFeedCapabilities MarkFeedCapabilities() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IReceiptPrinterCapabilities> { template <typename D> using type = consume_Windows_Devices_PointOfService_IReceiptPrinterCapabilities<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_ISlipPrinterCapabilities
{
    bool IsFullLengthSupported() const noexcept;
    bool IsBothSidesPrintingSupported() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::ISlipPrinterCapabilities> { template <typename D> using type = consume_Windows_Devices_PointOfService_ISlipPrinterCapabilities<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_IUnifiedPosErrorData
{
    hstring Message() const noexcept;
    Windows::Devices::PointOfService::UnifiedPosErrorSeverity Severity() const noexcept;
    Windows::Devices::PointOfService::UnifiedPosErrorReason Reason() const noexcept;
    uint32_t ExtendedReason() const noexcept;
};
template <> struct consume<Windows::Devices::PointOfService::IUnifiedPosErrorData> { template <typename D> using type = consume_Windows_Devices_PointOfService_IUnifiedPosErrorData<D>; };

template <> struct abi<Windows::Devices::PointOfService::IBarcodeScanner>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Capabilities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ClaimScannerAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel level, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetSupportedSymbologiesAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall IsSymbologySupportedAsync(uint32_t barcodeSymbology, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RetrieveStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetSupportedProfiles(::IUnknown** value) = 0;
    virtual HRESULT __stdcall IsProfileSupported(HSTRING profile, bool* isSupported) = 0;
    virtual HRESULT __stdcall add_StatusUpdated(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_StatusUpdated(event_token token) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IBarcodeScanner2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VideoDeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PowerReportingType(Windows::Devices::PointOfService::UnifiedPosPowerReportingType* value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsReportingSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsImagePreviewSupported(bool* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerCapabilities1>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSoftwareTriggerSupported(bool* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Report(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PartialInputData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsRetriable(bool* value) = 0;
    virtual HRESULT __stdcall get_ErrorData(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Preview(::IUnknown** preview) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ScanDataType(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ScanData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ScanDataLabel(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelectorWithConnectionTypes(Windows::Devices::PointOfService::PosConnectionTypes connectionTypes, HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(Windows::Devices::PointOfService::BarcodeScannerStatus* value) = 0;
    virtual HRESULT __stdcall get_ExtendedStatus(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Unknown(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ean8(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ean8Add2(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ean8Add5(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Eanv(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_EanvAdd2(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_EanvAdd5(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ean13(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ean13Add2(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ean13Add5(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Isbn(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_IsbnAdd5(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ismn(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_IsmnAdd2(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_IsmnAdd5(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Issn(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_IssnAdd2(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_IssnAdd5(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ean99(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ean99Add2(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ean99Add5(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Upca(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UpcaAdd2(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UpcaAdd5(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Upce(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UpceAdd2(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UpceAdd5(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UpcCoupon(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_TfStd(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_TfDis(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_TfInt(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_TfInd(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_TfMat(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_TfIata(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Gs1DatabarType1(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Gs1DatabarType2(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Gs1DatabarType3(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Code39(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Code39Ex(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Trioptic39(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Code32(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Pzn(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Code93(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Code93Ex(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Code128(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Gs1128(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Gs1128Coupon(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UccEan128(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Sisac(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Isbt(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Codabar(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Code11(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Msi(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Plessey(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Telepen(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Code16k(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_CodablockA(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_CodablockF(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Codablock128(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Code49(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Aztec(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_DataCode(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_DataMatrix(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_HanXin(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Maxicode(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MicroPdf417(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MicroQr(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Pdf417(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Qr(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MsTag(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ccab(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ccc(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Tlc39(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_AusPost(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_CanPost(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ChinaPost(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_DutchKix(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_InfoMail(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ItalianPost25(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ItalianPost39(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_JapanPost(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_KoreanPost(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_SwedenPost(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UkPost(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UsIntelligent(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UsIntelligentPkg(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UsPlanet(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_UsPostNet(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Us4StateFics(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_OcrA(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_OcrB(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Micr(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ExtendedBase(uint32_t* value) = 0;
    virtual HRESULT __stdcall GetName(uint32_t scanDataType, HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Gs1DWCode(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IBarcodeSymbologyAttributes>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsCheckDigitValidationEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsCheckDigitValidationEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsCheckDigitValidationSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsCheckDigitTransmissionEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsCheckDigitTransmissionEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsCheckDigitTransmissionSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_DecodeLength1(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_DecodeLength1(uint32_t value) = 0;
    virtual HRESULT __stdcall get_DecodeLength2(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_DecodeLength2(uint32_t value) = 0;
    virtual HRESULT __stdcall get_DecodeLengthKind(Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind* value) = 0;
    virtual HRESULT __stdcall put_DecodeLengthKind(Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind value) = 0;
    virtual HRESULT __stdcall get_IsDecodeLengthSupported(bool* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ICashDrawer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Capabilities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsDrawerOpen(bool* value) = 0;
    virtual HRESULT __stdcall get_DrawerEventSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ClaimDrawerAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel level, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_StatusUpdated(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_StatusUpdated(event_token token) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ICashDrawerCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PowerReportingType(Windows::Devices::PointOfService::UnifiedPosPowerReportingType* value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsReportingSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsStatusReportingSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsStatusMultiDrawerDetectSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDrawerOpenSensorAvailable(bool* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ICashDrawerCloseAlarm>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_AlarmTimeout(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_AlarmTimeout(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_BeepFrequency(uint32_t value) = 0;
    virtual HRESULT __stdcall get_BeepFrequency(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_BeepDuration(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_BeepDuration(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_BeepDelay(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_BeepDelay(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall add_AlarmTimeoutExpired(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_AlarmTimeoutExpired(event_token token) = 0;
    virtual HRESULT __stdcall StartAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ICashDrawerEventSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_DrawerClosed(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_DrawerClosed(event_token token) = 0;
    virtual HRESULT __stdcall add_DrawerOpened(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_DrawerOpened(event_token token) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CashDrawer(::IUnknown** drawer) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ICashDrawerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ICashDrawerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelectorWithConnectionTypes(Windows::Devices::PointOfService::PosConnectionTypes connectionTypes, HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ICashDrawerStatus>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StatusKind(Windows::Devices::PointOfService::CashDrawerStatusKind* value) = 0;
    virtual HRESULT __stdcall get_ExtendedStatus(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IClaimedBarcodeScanner>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsDisabledOnDataReceived(bool value) = 0;
    virtual HRESULT __stdcall get_IsDisabledOnDataReceived(bool* value) = 0;
    virtual HRESULT __stdcall put_IsDecodeDataEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsDecodeDataEnabled(bool* value) = 0;
    virtual HRESULT __stdcall EnableAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall DisableAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall RetainDevice() = 0;
    virtual HRESULT __stdcall SetActiveSymbologiesAsync(::IUnknown* symbologies, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ResetStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall UpdateStatisticsAsync(::IUnknown* statistics, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SetActiveProfileAsync(HSTRING profile, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_DataReceived(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_DataReceived(event_token token) = 0;
    virtual HRESULT __stdcall add_TriggerPressed(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_TriggerPressed(event_token token) = 0;
    virtual HRESULT __stdcall add_TriggerReleased(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_TriggerReleased(event_token token) = 0;
    virtual HRESULT __stdcall add_ReleaseDeviceRequested(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ReleaseDeviceRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_ImagePreviewReceived(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ImagePreviewReceived(event_token token) = 0;
    virtual HRESULT __stdcall add_ErrorOccurred(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ErrorOccurred(event_token token) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IClaimedBarcodeScanner1>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartSoftwareTriggerAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall StopSoftwareTriggerAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IClaimedBarcodeScanner2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetSymbologyAttributesAsync(uint32_t barcodeSymbology, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SetSymbologyAttributesAsync(uint32_t barcodeSymbology, ::IUnknown* attributes, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IClaimedCashDrawer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDrawerOpen(bool* value) = 0;
    virtual HRESULT __stdcall get_CloseAlarm(::IUnknown** value) = 0;
    virtual HRESULT __stdcall OpenDrawerAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall EnableAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall DisableAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall RetainDeviceAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ResetStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall UpdateStatisticsAsync(::IUnknown* statistics, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_ReleaseDeviceRequested(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ReleaseDeviceRequested(event_token token) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IClaimedJournalPrinter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateJob(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IClaimedLineDisplay>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Capabilities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PhysicalDeviceName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PhysicalDeviceDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceControlDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceControlVersion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceServiceVersion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DefaultWindow(::IUnknown** value) = 0;
    virtual HRESULT __stdcall RetainDevice() = 0;
    virtual HRESULT __stdcall add_ReleaseDeviceRequested(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ReleaseDeviceRequested(event_token token) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IClaimedLineDisplay2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel level, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CheckPowerStatusAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_StatusUpdated(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_StatusUpdated(event_token token) = 0;
    virtual HRESULT __stdcall get_SupportedScreenSizesInCharacters(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaxBitmapSizeInPixels(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_SupportedCharacterSets(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CustomGlyphs(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetAttributes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryUpdateAttributesAsync(::IUnknown* attributes, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TrySetDescriptorAsync(uint32_t descriptor, Windows::Devices::PointOfService::LineDisplayDescriptorState descriptorState, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryClearDescriptorsAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryCreateWindowAsync(Windows::Foundation::Rect viewport, Windows::Foundation::Size windowSize, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryStoreStorageFileBitmapAsync(::IUnknown* bitmap, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryStoreStorageFileBitmapWithAlignmentAsync(::IUnknown* bitmap, Windows::Devices::PointOfService::LineDisplayHorizontalAlignment horizontalAlignment, Windows::Devices::PointOfService::LineDisplayVerticalAlignment verticalAlignment, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryStoreStorageFileBitmapWithAlignmentAndWidthAsync(::IUnknown* bitmap, Windows::Devices::PointOfService::LineDisplayHorizontalAlignment horizontalAlignment, Windows::Devices::PointOfService::LineDisplayVerticalAlignment verticalAlignment, int32_t widthInPixels, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IClaimedLineDisplayStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* result) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorWithConnectionTypes(Windows::Devices::PointOfService::PosConnectionTypes connectionTypes, HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsDisabledOnDataReceived(bool value) = 0;
    virtual HRESULT __stdcall get_IsDisabledOnDataReceived(bool* value) = 0;
    virtual HRESULT __stdcall put_IsDecodeDataEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsDecodeDataEnabled(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDeviceAuthenticated(bool* value) = 0;
    virtual HRESULT __stdcall put_DataEncryptionAlgorithm(uint32_t value) = 0;
    virtual HRESULT __stdcall get_DataEncryptionAlgorithm(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_TracksToRead(Windows::Devices::PointOfService::MagneticStripeReaderTrackIds value) = 0;
    virtual HRESULT __stdcall get_TracksToRead(Windows::Devices::PointOfService::MagneticStripeReaderTrackIds* value) = 0;
    virtual HRESULT __stdcall put_IsTransmitSentinelsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsTransmitSentinelsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall EnableAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall DisableAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall RetainDevice() = 0;
    virtual HRESULT __stdcall SetErrorReportingType(Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType value) = 0;
    virtual HRESULT __stdcall RetrieveDeviceAuthenticationDataAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AuthenticateDeviceAsync(uint32_t __responseTokenSize, uint8_t* responseToken, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall DeAuthenticateDeviceAsync(uint32_t __responseTokenSize, uint8_t* responseToken, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall UpdateKeyAsync(HSTRING key, HSTRING keyName, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ResetStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall UpdateStatisticsAsync(::IUnknown* statistics, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_BankCardDataReceived(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_BankCardDataReceived(event_token token) = 0;
    virtual HRESULT __stdcall add_AamvaCardDataReceived(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_AamvaCardDataReceived(event_token token) = 0;
    virtual HRESULT __stdcall add_VendorSpecificDataReceived(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_VendorSpecificDataReceived(event_token token) = 0;
    virtual HRESULT __stdcall add_ReleaseDeviceRequested(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ReleaseDeviceRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_ErrorOccurred(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ErrorOccurred(event_token token) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IClaimedPosPrinter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_CharacterSet(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CharacterSet(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_IsCoverOpen(bool* value) = 0;
    virtual HRESULT __stdcall put_IsCharacterSetMappingEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsCharacterSetMappingEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_MapMode(Windows::Devices::PointOfService::PosPrinterMapMode value) = 0;
    virtual HRESULT __stdcall get_MapMode(Windows::Devices::PointOfService::PosPrinterMapMode* value) = 0;
    virtual HRESULT __stdcall get_Receipt(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Slip(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Journal(::IUnknown** value) = 0;
    virtual HRESULT __stdcall EnableAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall DisableAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall RetainDeviceAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ResetStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall UpdateStatisticsAsync(::IUnknown* statistics, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_ReleaseDeviceRequested(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ReleaseDeviceRequested(event_token token) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IClaimedReceiptPrinter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SidewaysMaxLines(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_SidewaysMaxChars(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_LinesToPaperCut(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_PageSize(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_PrintArea(Windows::Foundation::Rect* value) = 0;
    virtual HRESULT __stdcall CreateJob(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IClaimedSlipPrinter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SidewaysMaxLines(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_SidewaysMaxChars(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MaxLines(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_LinesNearEndToEnd(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_PrintSide(Windows::Devices::PointOfService::PosPrinterPrintSide* value) = 0;
    virtual HRESULT __stdcall get_PageSize(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_PrintArea(Windows::Foundation::Rect* value) = 0;
    virtual HRESULT __stdcall OpenJaws() = 0;
    virtual HRESULT __stdcall CloseJaws() = 0;
    virtual HRESULT __stdcall InsertSlipAsync(Windows::Foundation::TimeSpan timeout, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RemoveSlipAsync(Windows::Foundation::TimeSpan timeout, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ChangePrintSide(Windows::Devices::PointOfService::PosPrinterPrintSide printSide) = 0;
    virtual HRESULT __stdcall CreateJob(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_CharactersPerLine(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CharactersPerLine(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_LineHeight(uint32_t value) = 0;
    virtual HRESULT __stdcall get_LineHeight(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_LineSpacing(uint32_t value) = 0;
    virtual HRESULT __stdcall get_LineSpacing(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_LineWidth(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_IsLetterQuality(bool value) = 0;
    virtual HRESULT __stdcall get_IsLetterQuality(bool* value) = 0;
    virtual HRESULT __stdcall get_IsPaperNearEnd(bool* value) = 0;
    virtual HRESULT __stdcall put_ColorCartridge(Windows::Devices::PointOfService::PosPrinterColorCartridge value) = 0;
    virtual HRESULT __stdcall get_ColorCartridge(Windows::Devices::PointOfService::PosPrinterColorCartridge* value) = 0;
    virtual HRESULT __stdcall get_IsCoverOpen(bool* value) = 0;
    virtual HRESULT __stdcall get_IsCartridgeRemoved(bool* value) = 0;
    virtual HRESULT __stdcall get_IsCartridgeEmpty(bool* value) = 0;
    virtual HRESULT __stdcall get_IsHeadCleaning(bool* value) = 0;
    virtual HRESULT __stdcall get_IsPaperEmpty(bool* value) = 0;
    virtual HRESULT __stdcall get_IsReadyToPrint(bool* value) = 0;
    virtual HRESULT __stdcall ValidateData(HSTRING data, bool* result) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsPrinterPresent(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDualColorSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_ColorCartridgeCapabilities(Windows::Devices::PointOfService::PosPrinterColorCapabilities* value) = 0;
    virtual HRESULT __stdcall get_CartridgeSensors(Windows::Devices::PointOfService::PosPrinterCartridgeSensors* value) = 0;
    virtual HRESULT __stdcall get_IsBoldSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsItalicSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsUnderlineSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDoubleHighPrintSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDoubleWidePrintSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDoubleHighDoubleWidePrintSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsPaperEmptySensorSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsPaperNearEndSensorSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_SupportedCharactersPerLine(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsBarcodeSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsBitmapSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsLeft90RotationSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsRight90RotationSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_Is180RotationSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsPrintAreaSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_RuledLineCapabilities(Windows::Devices::PointOfService::PosPrinterRuledLineCapabilities* value) = 0;
    virtual HRESULT __stdcall get_SupportedBarcodeRotations(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedBitmapRotations(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IJournalPrinterCapabilities>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplay>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Capabilities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PhysicalDeviceName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PhysicalDeviceDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceControlDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceControlVersion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceServiceVersion(HSTRING* value) = 0;
    virtual HRESULT __stdcall ClaimAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplay2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CheckPowerStatusAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplayAttributes>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsPowerNotifyEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsPowerNotifyEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_Brightness(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Brightness(int32_t value) = 0;
    virtual HRESULT __stdcall get_BlinkRate(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_BlinkRate(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_ScreenSizeInCharacters(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall put_ScreenSizeInCharacters(Windows::Foundation::Size value) = 0;
    virtual HRESULT __stdcall get_CharacterSet(int32_t* value) = 0;
    virtual HRESULT __stdcall put_CharacterSet(int32_t value) = 0;
    virtual HRESULT __stdcall get_IsCharacterSetMappingEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsCharacterSetMappingEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_CurrentWindow(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CurrentWindow(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplayCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsStatisticsReportingSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_PowerReportingType(Windows::Devices::PointOfService::UnifiedPosPowerReportingType* value) = 0;
    virtual HRESULT __stdcall get_CanChangeScreenSize(bool* value) = 0;
    virtual HRESULT __stdcall get_CanDisplayBitmaps(bool* value) = 0;
    virtual HRESULT __stdcall get_CanReadCharacterAtCursor(bool* value) = 0;
    virtual HRESULT __stdcall get_CanMapCharacterSets(bool* value) = 0;
    virtual HRESULT __stdcall get_CanDisplayCustomGlyphs(bool* value) = 0;
    virtual HRESULT __stdcall get_CanReverse(Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity* value) = 0;
    virtual HRESULT __stdcall get_CanBlink(Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity* value) = 0;
    virtual HRESULT __stdcall get_CanChangeBlinkRate(bool* value) = 0;
    virtual HRESULT __stdcall get_IsBrightnessSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsCursorSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsHorizontalMarqueeSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsVerticalMarqueeSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsInterCharacterWaitSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_SupportedDescriptors(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_SupportedWindows(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplayCursor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanCustomize(bool* value) = 0;
    virtual HRESULT __stdcall get_IsBlinkSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsBlockSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsHalfBlockSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsUnderlineSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsReverseSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsOtherSupported(bool* value) = 0;
    virtual HRESULT __stdcall GetAttributes(::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryUpdateAttributesAsync(::IUnknown* attributes, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplayCursorAttributes>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsBlinkEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsBlinkEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_CursorType(Windows::Devices::PointOfService::LineDisplayCursorType* value) = 0;
    virtual HRESULT __stdcall put_CursorType(Windows::Devices::PointOfService::LineDisplayCursorType value) = 0;
    virtual HRESULT __stdcall get_IsAutoAdvanceEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsAutoAdvanceEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall put_Position(Windows::Foundation::Point value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplayCustomGlyphs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SizeInPixels(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_SupportedGlyphCodes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryRedefineAsync(uint32_t glyphCode, ::IUnknown* glyphData, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplayMarquee>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Format(Windows::Devices::PointOfService::LineDisplayMarqueeFormat* value) = 0;
    virtual HRESULT __stdcall put_Format(Windows::Devices::PointOfService::LineDisplayMarqueeFormat value) = 0;
    virtual HRESULT __stdcall get_RepeatWaitInterval(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_RepeatWaitInterval(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_ScrollWaitInterval(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_ScrollWaitInterval(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall TryStartScrollingAsync(Windows::Devices::PointOfService::LineDisplayScrollDirection direction, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryStopScrollingAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplayStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* result) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorWithConnectionTypes(Windows::Devices::PointOfService::PosConnectionTypes connectionTypes, HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplayStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StatisticsCategorySelector(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplayStatisticsCategorySelector>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllStatistics(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_UnifiedPosStatistics(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ManufacturerStatistics(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplayStatusUpdatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(Windows::Devices::PointOfService::LineDisplayPowerStatus* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplayStoredBitmap>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EscapeSequence(HSTRING* escapeSequence) = 0;
    virtual HRESULT __stdcall TryDeleteAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplayWindow>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SizeInCharacters(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_InterCharacterWaitInterval(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_InterCharacterWaitInterval(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall TryRefreshAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryDisplayTextAsync(HSTRING text, Windows::Devices::PointOfService::LineDisplayTextAttribute displayAttribute, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryDisplayTextAtPositionAsync(HSTRING text, Windows::Devices::PointOfService::LineDisplayTextAttribute displayAttribute, Windows::Foundation::Point startPosition, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryDisplayTextNormalAsync(HSTRING text, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryScrollTextAsync(Windows::Devices::PointOfService::LineDisplayScrollDirection direction, uint32_t numberOfColumnsOrRows, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryClearTextAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ILineDisplayWindow2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Cursor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Marquee(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ReadCharacterAtCursorAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryDisplayStoredBitmapAtCursorAsync(::IUnknown* bitmap, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryDisplayStorageFileBitmapAtCursorAsync(::IUnknown* bitmap, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryDisplayStorageFileBitmapAtCursorWithAlignmentAsync(::IUnknown* bitmap, Windows::Devices::PointOfService::LineDisplayHorizontalAlignment horizontalAlignment, Windows::Devices::PointOfService::LineDisplayVerticalAlignment verticalAlignment, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryDisplayStorageFileBitmapAtCursorWithAlignmentAndWidthAsync(::IUnknown* bitmap, Windows::Devices::PointOfService::LineDisplayHorizontalAlignment horizontalAlignment, Windows::Devices::PointOfService::LineDisplayVerticalAlignment verticalAlignment, int32_t widthInPixels, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryDisplayStorageFileBitmapAtPointAsync(::IUnknown* bitmap, Windows::Foundation::Point offsetInPixels, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryDisplayStorageFileBitmapAtPointWithWidthAsync(::IUnknown* bitmap, Windows::Foundation::Point offsetInPixels, int32_t widthInPixels, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Capabilities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedCardTypes(uint32_t* __valueSize, uint32_t** value) = 0;
    virtual HRESULT __stdcall get_DeviceAuthenticationProtocol(Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationProtocol* value) = 0;
    virtual HRESULT __stdcall CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel level, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ClaimReaderAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RetrieveStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetErrorReportingType(Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType* value) = 0;
    virtual HRESULT __stdcall add_StatusUpdated(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_StatusUpdated(event_token token) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Report(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LicenseNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ExpirationDate(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Restrictions(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Class(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Endorsements(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BirthDate(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FirstName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Surname(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Suffix(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Gender(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HairColor(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EyeColor(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Height(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Weight(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Address(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_City(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_State(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PostalCode(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Report(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AccountNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ExpirationDate(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ServiceCode(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FirstName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MiddleInitial(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Surname(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Suffix(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CardAuthentication(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SupportedEncryptionAlgorithms(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_AuthenticationLevel(Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationLevel* value) = 0;
    virtual HRESULT __stdcall get_IsIsoSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsJisOneSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsJisTwoSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_PowerReportingType(Windows::Devices::PointOfService::UnifiedPosPowerReportingType* value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsReportingSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsTrackDataMaskingSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsTransmitSentinelsSupported(bool* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Unknown(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Bank(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Aamva(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ExtendedBase(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_None(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_TripleDesDukpt(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ExtendedBase(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Track1Status(Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType* value) = 0;
    virtual HRESULT __stdcall get_Track2Status(Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType* value) = 0;
    virtual HRESULT __stdcall get_Track3Status(Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType* value) = 0;
    virtual HRESULT __stdcall get_Track4Status(Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType* value) = 0;
    virtual HRESULT __stdcall get_ErrorData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PartialInputData(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CardType(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Track1(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Track2(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Track3(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Track4(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CardAuthenticationData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CardAuthenticationDataLength(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_AdditionalSecurityInformation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelectorWithConnectionTypes(Windows::Devices::PointOfService::PosConnectionTypes connectionTypes, HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(Windows::Devices::PointOfService::MagneticStripeReaderStatus* value) = 0;
    virtual HRESULT __stdcall get_ExtendedStatus(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderTrackData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DiscretionaryData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EncryptedData(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Report(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IPosPrinter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Capabilities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedCharacterSets(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedTypeFaces(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ClaimPrinterAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel level, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetStatisticsAsync(::IUnknown* statisticsCategories, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_StatusUpdated(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_StatusUpdated(event_token token) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IPosPrinterCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PowerReportingType(Windows::Devices::PointOfService::UnifiedPosPowerReportingType* value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsReportingSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsStatisticsUpdatingSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_DefaultCharacterSet(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_HasCoverSensor(bool* value) = 0;
    virtual HRESULT __stdcall get_CanMapCharacterSet(bool* value) = 0;
    virtual HRESULT __stdcall get_IsTransactionSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_Receipt(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Slip(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Journal(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Utf16LE(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ascii(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Ansi(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IPosPrinterJob>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Print(HSTRING data) = 0;
    virtual HRESULT __stdcall PrintLine(HSTRING data) = 0;
    virtual HRESULT __stdcall PrintNewline() = 0;
    virtual HRESULT __stdcall ExecuteAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Devices::PointOfService::IPosPrinterStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IPosPrinterStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelectorWithConnectionTypes(Windows::Devices::PointOfService::PosConnectionTypes connectionTypes, HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IPosPrinterStatus>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StatusKind(Windows::Devices::PointOfService::PosPrinterStatusKind* value) = 0;
    virtual HRESULT __stdcall get_ExtendedStatus(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IReceiptOrSlipJob>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetBarcodeRotation(Windows::Devices::PointOfService::PosPrinterRotation value) = 0;
    virtual HRESULT __stdcall SetPrintRotation(Windows::Devices::PointOfService::PosPrinterRotation value, bool includeBitmaps) = 0;
    virtual HRESULT __stdcall SetPrintArea(Windows::Foundation::Rect value) = 0;
    virtual HRESULT __stdcall SetBitmap(uint32_t bitmapNumber, ::IUnknown* bitmap, Windows::Devices::PointOfService::PosPrinterAlignment alignment) = 0;
    virtual HRESULT __stdcall SetBitmapCustomWidthStandardAlign(uint32_t bitmapNumber, ::IUnknown* bitmap, Windows::Devices::PointOfService::PosPrinterAlignment alignment, uint32_t width) = 0;
    virtual HRESULT __stdcall SetCustomAlignedBitmap(uint32_t bitmapNumber, ::IUnknown* bitmap, uint32_t alignmentDistance) = 0;
    virtual HRESULT __stdcall SetBitmapCustomWidthCustomAlign(uint32_t bitmapNumber, ::IUnknown* bitmap, uint32_t alignmentDistance, uint32_t width) = 0;
    virtual HRESULT __stdcall PrintSavedBitmap(uint32_t bitmapNumber) = 0;
    virtual HRESULT __stdcall DrawRuledLine(HSTRING positionList, Windows::Devices::PointOfService::PosPrinterLineDirection lineDirection, uint32_t lineWidth, Windows::Devices::PointOfService::PosPrinterLineStyle lineStyle, uint32_t lineColor) = 0;
    virtual HRESULT __stdcall PrintBarcode(HSTRING data, uint32_t symbology, uint32_t height, uint32_t width, Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition textPosition, Windows::Devices::PointOfService::PosPrinterAlignment alignment) = 0;
    virtual HRESULT __stdcall PrintBarcodeCustomAlign(HSTRING data, uint32_t symbology, uint32_t height, uint32_t width, Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition textPosition, uint32_t alignmentDistance) = 0;
    virtual HRESULT __stdcall PrintBitmap(::IUnknown* bitmap, Windows::Devices::PointOfService::PosPrinterAlignment alignment) = 0;
    virtual HRESULT __stdcall PrintBitmapCustomWidthStandardAlign(::IUnknown* bitmap, Windows::Devices::PointOfService::PosPrinterAlignment alignment, uint32_t width) = 0;
    virtual HRESULT __stdcall PrintCustomAlignedBitmap(::IUnknown* bitmap, uint32_t alignmentDistance) = 0;
    virtual HRESULT __stdcall PrintBitmapCustomWidthCustomAlign(::IUnknown* bitmap, uint32_t alignmentDistance, uint32_t width) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IReceiptPrintJob>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall MarkFeed(Windows::Devices::PointOfService::PosPrinterMarkFeedKind kind) = 0;
    virtual HRESULT __stdcall CutPaper(double percentage) = 0;
    virtual HRESULT __stdcall CutPaperDefault() = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IReceiptPrinterCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanCutPaper(bool* value) = 0;
    virtual HRESULT __stdcall get_IsStampSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_MarkFeedCapabilities(Windows::Devices::PointOfService::PosPrinterMarkFeedCapabilities* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::ISlipPrinterCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsFullLengthSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsBothSidesPrintingSupported(bool* value) = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::IUnifiedPosErrorData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Message(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Severity(Windows::Devices::PointOfService::UnifiedPosErrorSeverity* value) = 0;
    virtual HRESULT __stdcall get_Reason(Windows::Devices::PointOfService::UnifiedPosErrorReason* value) = 0;
    virtual HRESULT __stdcall get_ExtendedReason(uint32_t* value) = 0;
};};

}
