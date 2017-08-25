// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer {

struct DataPackagePropertySet;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing {

enum class PrintBinding
{
    Default = 0,
    NotAvailable = 1,
    PrinterCustom = 2,
    None = 3,
    Bale = 4,
    BindBottom = 5,
    BindLeft = 6,
    BindRight = 7,
    BindTop = 8,
    Booklet = 9,
    EdgeStitchBottom = 10,
    EdgeStitchLeft = 11,
    EdgeStitchRight = 12,
    EdgeStitchTop = 13,
    Fold = 14,
    JogOffset = 15,
    Trim = 16,
};

enum class PrintBordering
{
    Default = 0,
    NotAvailable = 1,
    PrinterCustom = 2,
    Bordered = 3,
    Borderless = 4,
};

enum class PrintCollation
{
    Default = 0,
    NotAvailable = 1,
    PrinterCustom = 2,
    Collated = 3,
    Uncollated = 4,
};

enum class PrintColorMode
{
    Default = 0,
    NotAvailable = 1,
    PrinterCustom = 2,
    Color = 3,
    Grayscale = 4,
    Monochrome = 5,
};

enum class PrintDuplex
{
    Default = 0,
    NotAvailable = 1,
    PrinterCustom = 2,
    OneSided = 3,
    TwoSidedShortEdge = 4,
    TwoSidedLongEdge = 5,
};

enum class PrintHolePunch
{
    Default = 0,
    NotAvailable = 1,
    PrinterCustom = 2,
    None = 3,
    LeftEdge = 4,
    RightEdge = 5,
    TopEdge = 6,
    BottomEdge = 7,
};

enum class PrintMediaSize
{
    Default = 0,
    NotAvailable = 1,
    PrinterCustom = 2,
    BusinessCard = 3,
    CreditCard = 4,
    IsoA0 = 5,
    IsoA1 = 6,
    IsoA10 = 7,
    IsoA2 = 8,
    IsoA3 = 9,
    IsoA3Extra = 10,
    IsoA3Rotated = 11,
    IsoA4 = 12,
    IsoA4Extra = 13,
    IsoA4Rotated = 14,
    IsoA5 = 15,
    IsoA5Extra = 16,
    IsoA5Rotated = 17,
    IsoA6 = 18,
    IsoA6Rotated = 19,
    IsoA7 = 20,
    IsoA8 = 21,
    IsoA9 = 22,
    IsoB0 = 23,
    IsoB1 = 24,
    IsoB10 = 25,
    IsoB2 = 26,
    IsoB3 = 27,
    IsoB4 = 28,
    IsoB4Envelope = 29,
    IsoB5Envelope = 30,
    IsoB5Extra = 31,
    IsoB7 = 32,
    IsoB8 = 33,
    IsoB9 = 34,
    IsoC0 = 35,
    IsoC1 = 36,
    IsoC10 = 37,
    IsoC2 = 38,
    IsoC3 = 39,
    IsoC3Envelope = 40,
    IsoC4 = 41,
    IsoC4Envelope = 42,
    IsoC5 = 43,
    IsoC5Envelope = 44,
    IsoC6 = 45,
    IsoC6C5Envelope = 46,
    IsoC6Envelope = 47,
    IsoC7 = 48,
    IsoC8 = 49,
    IsoC9 = 50,
    IsoDLEnvelope = 51,
    IsoDLEnvelopeRotated = 52,
    IsoSRA3 = 53,
    Japan2LPhoto = 54,
    JapanChou3Envelope = 55,
    JapanChou3EnvelopeRotated = 56,
    JapanChou4Envelope = 57,
    JapanChou4EnvelopeRotated = 58,
    JapanDoubleHagakiPostcard = 59,
    JapanDoubleHagakiPostcardRotated = 60,
    JapanHagakiPostcard = 61,
    JapanHagakiPostcardRotated = 62,
    JapanKaku2Envelope = 63,
    JapanKaku2EnvelopeRotated = 64,
    JapanKaku3Envelope = 65,
    JapanKaku3EnvelopeRotated = 66,
    JapanLPhoto = 67,
    JapanQuadrupleHagakiPostcard = 68,
    JapanYou1Envelope = 69,
    JapanYou2Envelope = 70,
    JapanYou3Envelope = 71,
    JapanYou4Envelope = 72,
    JapanYou4EnvelopeRotated = 73,
    JapanYou6Envelope = 74,
    JapanYou6EnvelopeRotated = 75,
    JisB0 = 76,
    JisB1 = 77,
    JisB10 = 78,
    JisB2 = 79,
    JisB3 = 80,
    JisB4 = 81,
    JisB4Rotated = 82,
    JisB5 = 83,
    JisB5Rotated = 84,
    JisB6 = 85,
    JisB6Rotated = 86,
    JisB7 = 87,
    JisB8 = 88,
    JisB9 = 89,
    NorthAmerica10x11 = 90,
    NorthAmerica10x12 = 91,
    NorthAmerica10x14 = 92,
    NorthAmerica11x17 = 93,
    NorthAmerica14x17 = 94,
    NorthAmerica4x6 = 95,
    NorthAmerica4x8 = 96,
    NorthAmerica5x7 = 97,
    NorthAmerica8x10 = 98,
    NorthAmerica9x11 = 99,
    NorthAmericaArchitectureASheet = 100,
    NorthAmericaArchitectureBSheet = 101,
    NorthAmericaArchitectureCSheet = 102,
    NorthAmericaArchitectureDSheet = 103,
    NorthAmericaArchitectureESheet = 104,
    NorthAmericaCSheet = 105,
    NorthAmericaDSheet = 106,
    NorthAmericaESheet = 107,
    NorthAmericaExecutive = 108,
    NorthAmericaGermanLegalFanfold = 109,
    NorthAmericaGermanStandardFanfold = 110,
    NorthAmericaLegal = 111,
    NorthAmericaLegalExtra = 112,
    NorthAmericaLetter = 113,
    NorthAmericaLetterExtra = 114,
    NorthAmericaLetterPlus = 115,
    NorthAmericaLetterRotated = 116,
    NorthAmericaMonarchEnvelope = 117,
    NorthAmericaNote = 118,
    NorthAmericaNumber10Envelope = 119,
    NorthAmericaNumber10EnvelopeRotated = 120,
    NorthAmericaNumber11Envelope = 121,
    NorthAmericaNumber12Envelope = 122,
    NorthAmericaNumber14Envelope = 123,
    NorthAmericaNumber9Envelope = 124,
    NorthAmericaPersonalEnvelope = 125,
    NorthAmericaQuarto = 126,
    NorthAmericaStatement = 127,
    NorthAmericaSuperA = 128,
    NorthAmericaSuperB = 129,
    NorthAmericaTabloid = 130,
    NorthAmericaTabloidExtra = 131,
    OtherMetricA3Plus = 132,
    OtherMetricA4Plus = 133,
    OtherMetricFolio = 134,
    OtherMetricInviteEnvelope = 135,
    OtherMetricItalianEnvelope = 136,
    Prc10Envelope = 137,
    Prc10EnvelopeRotated = 138,
    Prc16K = 139,
    Prc16KRotated = 140,
    Prc1Envelope = 141,
    Prc1EnvelopeRotated = 142,
    Prc2Envelope = 143,
    Prc2EnvelopeRotated = 144,
    Prc32K = 145,
    Prc32KBig = 146,
    Prc32KRotated = 147,
    Prc3Envelope = 148,
    Prc3EnvelopeRotated = 149,
    Prc4Envelope = 150,
    Prc4EnvelopeRotated = 151,
    Prc5Envelope = 152,
    Prc5EnvelopeRotated = 153,
    Prc6Envelope = 154,
    Prc6EnvelopeRotated = 155,
    Prc7Envelope = 156,
    Prc7EnvelopeRotated = 157,
    Prc8Envelope = 158,
    Prc8EnvelopeRotated = 159,
    Prc9Envelope = 160,
    Prc9EnvelopeRotated = 161,
    Roll04Inch = 162,
    Roll06Inch = 163,
    Roll08Inch = 164,
    Roll12Inch = 165,
    Roll15Inch = 166,
    Roll18Inch = 167,
    Roll22Inch = 168,
    Roll24Inch = 169,
    Roll30Inch = 170,
    Roll36Inch = 171,
    Roll54Inch = 172,
};

enum class PrintMediaType
{
    Default = 0,
    NotAvailable = 1,
    PrinterCustom = 2,
    AutoSelect = 3,
    Archival = 4,
    BackPrintFilm = 5,
    Bond = 6,
    CardStock = 7,
    Continuous = 8,
    EnvelopePlain = 9,
    EnvelopeWindow = 10,
    Fabric = 11,
    HighResolution = 12,
    Label = 13,
    MultiLayerForm = 14,
    MultiPartForm = 15,
    Photographic = 16,
    PhotographicFilm = 17,
    PhotographicGlossy = 18,
    PhotographicHighGloss = 19,
    PhotographicMatte = 20,
    PhotographicSatin = 21,
    PhotographicSemiGloss = 22,
    Plain = 23,
    Screen = 24,
    ScreenPaged = 25,
    Stationery = 26,
    TabStockFull = 27,
    TabStockPreCut = 28,
    Transparency = 29,
    TShirtTransfer = 30,
    None = 31,
};

enum class PrintOrientation
{
    Default = 0,
    NotAvailable = 1,
    PrinterCustom = 2,
    Portrait = 3,
    PortraitFlipped = 4,
    Landscape = 5,
    LandscapeFlipped = 6,
};

enum class PrintQuality
{
    Default = 0,
    NotAvailable = 1,
    PrinterCustom = 2,
    Automatic = 3,
    Draft = 4,
    Fax = 5,
    High = 6,
    Normal = 7,
    Photographic = 8,
    Text = 9,
};

enum class PrintStaple
{
    Default = 0,
    NotAvailable = 1,
    PrinterCustom = 2,
    None = 3,
    StapleTopLeft = 4,
    StapleTopRight = 5,
    StapleBottomLeft = 6,
    StapleBottomRight = 7,
    StapleDualLeft = 8,
    StapleDualRight = 9,
    StapleDualTop = 10,
    StapleDualBottom = 11,
    SaddleStitch = 12,
};

enum class PrintTaskCompletion
{
    Abandoned = 0,
    Canceled = 1,
    Failed = 2,
    Submitted = 3,
};

struct IPrintDocumentSource;
struct IPrintManager;
struct IPrintManagerStatic;
struct IPrintManagerStatic2;
struct IPrintPageInfo;
struct IPrintTask;
struct IPrintTask2;
struct IPrintTaskCompletedEventArgs;
struct IPrintTaskOptions;
struct IPrintTaskOptionsCore;
struct IPrintTaskOptionsCoreProperties;
struct IPrintTaskOptionsCoreUIConfiguration;
struct IPrintTaskProgressingEventArgs;
struct IPrintTaskRequest;
struct IPrintTaskRequestedDeferral;
struct IPrintTaskRequestedEventArgs;
struct IPrintTaskSourceRequestedArgs;
struct IPrintTaskSourceRequestedDeferral;
struct IPrintTaskTargetDeviceSupport;
struct IStandardPrintTaskOptionsStatic;
struct IStandardPrintTaskOptionsStatic2;
struct PrintManager;
struct PrintPageInfo;
struct PrintTask;
struct PrintTaskCompletedEventArgs;
struct PrintTaskOptions;
struct PrintTaskProgressingEventArgs;
struct PrintTaskRequest;
struct PrintTaskRequestedDeferral;
struct PrintTaskRequestedEventArgs;
struct PrintTaskSourceRequestedArgs;
struct PrintTaskSourceRequestedDeferral;
struct StandardPrintTaskOptions;
struct PrintPageDescription;
struct PrintTaskSourceRequestedHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Graphics::Printing::IPrintDocumentSource>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintManager>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintManagerStatic>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintManagerStatic2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintPageInfo>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTask>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTask2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTaskCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTaskOptions>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTaskOptionsCore>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTaskProgressingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTaskRequest>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTaskRequestedDeferral>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTaskRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::PrintManager>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintPageInfo>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTask>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTaskCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTaskOptions>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTaskProgressingEventArgs>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTaskRequest>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTaskRequestedDeferral>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTaskRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTaskSourceRequestedArgs>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::StandardPrintTaskOptions>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintBinding>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintBordering>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintCollation>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintColorMode>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintDuplex>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintHolePunch>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintMediaSize>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintMediaType>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintOrientation>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintQuality>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintStaple>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintTaskCompletion>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintPageDescription>{ using type = struct_category<Windows::Foundation::Size,Windows::Foundation::Rect,uint32_t,uint32_t>; };
template <> struct category<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler>{ using type = delegate_category; };
template <> struct name<Windows::Graphics::Printing::IPrintDocumentSource>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintDocumentSource" }; };
template <> struct name<Windows::Graphics::Printing::IPrintManager>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintManager" }; };
template <> struct name<Windows::Graphics::Printing::IPrintManagerStatic>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintManagerStatic" }; };
template <> struct name<Windows::Graphics::Printing::IPrintManagerStatic2>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintManagerStatic2" }; };
template <> struct name<Windows::Graphics::Printing::IPrintPageInfo>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintPageInfo" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTask>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTask" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTask2>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTask2" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTaskCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTaskCompletedEventArgs" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTaskOptions>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTaskOptions" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTaskOptionsCore>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTaskOptionsCore" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTaskOptionsCoreProperties" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTaskOptionsCoreUIConfiguration" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTaskProgressingEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTaskProgressingEventArgs" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTaskRequest>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTaskRequest" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTaskRequestedDeferral>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTaskRequestedDeferral" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTaskRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTaskRequestedEventArgs" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTaskSourceRequestedArgs" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTaskSourceRequestedDeferral" }; };
template <> struct name<Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IPrintTaskTargetDeviceSupport" }; };
template <> struct name<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic" }; };
template <> struct name<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2>{ static constexpr auto & value{ L"Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic2" }; };
template <> struct name<Windows::Graphics::Printing::PrintManager>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintManager" }; };
template <> struct name<Windows::Graphics::Printing::PrintPageInfo>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintPageInfo" }; };
template <> struct name<Windows::Graphics::Printing::PrintTask>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTask" }; };
template <> struct name<Windows::Graphics::Printing::PrintTaskCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTaskCompletedEventArgs" }; };
template <> struct name<Windows::Graphics::Printing::PrintTaskOptions>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTaskOptions" }; };
template <> struct name<Windows::Graphics::Printing::PrintTaskProgressingEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTaskProgressingEventArgs" }; };
template <> struct name<Windows::Graphics::Printing::PrintTaskRequest>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTaskRequest" }; };
template <> struct name<Windows::Graphics::Printing::PrintTaskRequestedDeferral>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTaskRequestedDeferral" }; };
template <> struct name<Windows::Graphics::Printing::PrintTaskRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTaskRequestedEventArgs" }; };
template <> struct name<Windows::Graphics::Printing::PrintTaskSourceRequestedArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTaskSourceRequestedArgs" }; };
template <> struct name<Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTaskSourceRequestedDeferral" }; };
template <> struct name<Windows::Graphics::Printing::StandardPrintTaskOptions>{ static constexpr auto & value{ L"Windows.Graphics.Printing.StandardPrintTaskOptions" }; };
template <> struct name<Windows::Graphics::Printing::PrintBinding>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintBinding" }; };
template <> struct name<Windows::Graphics::Printing::PrintBordering>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintBordering" }; };
template <> struct name<Windows::Graphics::Printing::PrintCollation>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintCollation" }; };
template <> struct name<Windows::Graphics::Printing::PrintColorMode>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintColorMode" }; };
template <> struct name<Windows::Graphics::Printing::PrintDuplex>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintDuplex" }; };
template <> struct name<Windows::Graphics::Printing::PrintHolePunch>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintHolePunch" }; };
template <> struct name<Windows::Graphics::Printing::PrintMediaSize>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintMediaSize" }; };
template <> struct name<Windows::Graphics::Printing::PrintMediaType>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintMediaType" }; };
template <> struct name<Windows::Graphics::Printing::PrintOrientation>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintOrientation" }; };
template <> struct name<Windows::Graphics::Printing::PrintQuality>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintQuality" }; };
template <> struct name<Windows::Graphics::Printing::PrintStaple>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintStaple" }; };
template <> struct name<Windows::Graphics::Printing::PrintTaskCompletion>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTaskCompletion" }; };
template <> struct name<Windows::Graphics::Printing::PrintPageDescription>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintPageDescription" }; };
template <> struct name<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTaskSourceRequestedHandler" }; };
template <> struct guid<Windows::Graphics::Printing::IPrintDocumentSource>{ static constexpr GUID value{ 0xDEDC0C30,0xF1EB,0x47DF,{ 0xAA,0xE6,0xED,0x54,0x27,0x51,0x1F,0x01 } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintManager>{ static constexpr GUID value{ 0xFF2A9694,0x8C99,0x44FD,{ 0xAE,0x4A,0x19,0xD9,0xAA,0x9A,0x0F,0x0A } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintManagerStatic>{ static constexpr GUID value{ 0x58185DCD,0xE634,0x4654,{ 0x84,0xF0,0xE0,0x15,0x2A,0x82,0x17,0xAC } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintManagerStatic2>{ static constexpr GUID value{ 0x35A99955,0xE6AB,0x4139,{ 0x9A,0xBD,0xB8,0x6A,0x72,0x9B,0x35,0x98 } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintPageInfo>{ static constexpr GUID value{ 0xDD4BE9C9,0xA6A1,0x4ADA,{ 0x93,0x0E,0xDA,0x87,0x2A,0x4F,0x23,0xD3 } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTask>{ static constexpr GUID value{ 0x61D80247,0x6CF6,0x4FAD,{ 0x84,0xE2,0xA5,0xE8,0x2E,0x2D,0x4C,0xEB } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTask2>{ static constexpr GUID value{ 0x36234877,0x3E53,0x4D9D,{ 0x8F,0x5E,0x31,0x6A,0xC8,0xDE,0xDA,0xE1 } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTaskCompletedEventArgs>{ static constexpr GUID value{ 0x5BCD34AF,0x24E9,0x4C10,{ 0x8D,0x07,0x14,0xC3,0x46,0xBA,0x3F,0xCE } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTaskOptions>{ static constexpr GUID value{ 0x5A0A66BB,0xD289,0x41BB,{ 0x96,0xDD,0x57,0xE2,0x83,0x38,0xAE,0x3F } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTaskOptionsCore>{ static constexpr GUID value{ 0x1BDBB474,0x4ED1,0x41EB,{ 0xBE,0x3C,0x72,0xD1,0x8E,0xD6,0x73,0x37 } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties>{ static constexpr GUID value{ 0xC1B71832,0x9E93,0x4E55,{ 0x81,0x4B,0x33,0x26,0xA5,0x9E,0xFC,0xE1 } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>{ static constexpr GUID value{ 0x62E69E23,0x9A1E,0x4336,{ 0xB7,0x4F,0x3C,0xC7,0xF4,0xCF,0xF7,0x09 } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTaskProgressingEventArgs>{ static constexpr GUID value{ 0x810CD3CB,0xB410,0x4282,{ 0xA0,0x73,0x5A,0xC3,0x78,0x23,0x41,0x74 } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTaskRequest>{ static constexpr GUID value{ 0x6FF61E2E,0x2722,0x4240,{ 0xA6,0x7C,0xF3,0x64,0x84,0x9A,0x17,0xF3 } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTaskRequestedDeferral>{ static constexpr GUID value{ 0xCFEFB3F0,0xCE3E,0x42C7,{ 0x94,0x96,0x64,0x80,0x0C,0x62,0x2C,0x44 } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTaskRequestedEventArgs>{ static constexpr GUID value{ 0xD0AFF924,0xA31B,0x454C,{ 0xA7,0xB6,0x5D,0x0C,0xC5,0x22,0xFC,0x16 } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs>{ static constexpr GUID value{ 0xF9F067BE,0xF456,0x41F0,{ 0x9C,0x98,0x5C,0xE7,0x3E,0x85,0x14,0x10 } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral>{ static constexpr GUID value{ 0x4A1560D1,0x6992,0x4D9D,{ 0x85,0x55,0x4C,0xA4,0x56,0x3F,0xB1,0x66 } }; };
template <> struct guid<Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport>{ static constexpr GUID value{ 0x295D70C0,0xC2CB,0x4B7D,{ 0xB0,0xEA,0x93,0x09,0x50,0x91,0xA2,0x20 } }; };
template <> struct guid<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>{ static constexpr GUID value{ 0xB4483D26,0x0DD0,0x4CD4,{ 0xBA,0xFF,0x93,0x0F,0xC7,0xD6,0xA5,0x74 } }; };
template <> struct guid<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2>{ static constexpr GUID value{ 0x3BE38BF4,0x7A44,0x4269,{ 0x9A,0x52,0x81,0x26,0x1E,0x28,0x9E,0xE9 } }; };
template <> struct guid<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler>{ static constexpr GUID value{ 0x6C109FA8,0x5CB6,0x4B3A,{ 0x86,0x63,0xF3,0x9C,0xB0,0x2D,0xC9,0xB4 } }; };
template <> struct default_interface<Windows::Graphics::Printing::PrintManager>{ using type = Windows::Graphics::Printing::IPrintManager; };
template <> struct default_interface<Windows::Graphics::Printing::PrintPageInfo>{ using type = Windows::Graphics::Printing::IPrintPageInfo; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTask>{ using type = Windows::Graphics::Printing::IPrintTask; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTaskCompletedEventArgs>{ using type = Windows::Graphics::Printing::IPrintTaskCompletedEventArgs; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTaskOptions>{ using type = Windows::Graphics::Printing::IPrintTaskOptionsCore; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTaskProgressingEventArgs>{ using type = Windows::Graphics::Printing::IPrintTaskProgressingEventArgs; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTaskRequest>{ using type = Windows::Graphics::Printing::IPrintTaskRequest; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTaskRequestedDeferral>{ using type = Windows::Graphics::Printing::IPrintTaskRequestedDeferral; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTaskRequestedEventArgs>{ using type = Windows::Graphics::Printing::IPrintTaskRequestedEventArgs; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTaskSourceRequestedArgs>{ using type = Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral>{ using type = Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintDocumentSource
{
};
template <> struct consume<Windows::Graphics::Printing::IPrintDocumentSource> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintDocumentSource<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintManager
{
    event_token PrintTaskRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> const& eventHandler) const;
    using PrintTaskRequested_revoker = event_revoker<Windows::Graphics::Printing::IPrintManager>;
    PrintTaskRequested_revoker PrintTaskRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> const& eventHandler) const;
    void PrintTaskRequested(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintManager> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintManager<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintManagerStatic
{
    Windows::Graphics::Printing::PrintManager GetForCurrentView() const;
    Windows::Foundation::IAsyncOperation<bool> ShowPrintUIAsync() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintManagerStatic> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintManagerStatic<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintManagerStatic2
{
    bool IsSupported() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintManagerStatic2> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintManagerStatic2<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintPageInfo
{
    void MediaSize(Windows::Graphics::Printing::PrintMediaSize const& value) const;
    Windows::Graphics::Printing::PrintMediaSize MediaSize() const;
    void PageSize(Windows::Foundation::Size const& value) const;
    Windows::Foundation::Size PageSize() const;
    void DpiX(uint32_t value) const;
    uint32_t DpiX() const;
    void DpiY(uint32_t value) const;
    uint32_t DpiY() const;
    void Orientation(Windows::Graphics::Printing::PrintOrientation const& value) const;
    Windows::Graphics::Printing::PrintOrientation Orientation() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintPageInfo> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintPageInfo<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTask
{
    Windows::ApplicationModel::DataTransfer::DataPackagePropertySet Properties() const;
    Windows::Graphics::Printing::IPrintDocumentSource Source() const;
    Windows::Graphics::Printing::PrintTaskOptions Options() const;
    event_token Previewing(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const;
    using Previewing_revoker = event_revoker<Windows::Graphics::Printing::IPrintTask>;
    Previewing_revoker Previewing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const;
    void Previewing(event_token const& eventCookie) const;
    event_token Submitting(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const;
    using Submitting_revoker = event_revoker<Windows::Graphics::Printing::IPrintTask>;
    Submitting_revoker Submitting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const;
    void Submitting(event_token const& eventCookie) const;
    event_token Progressing(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> const& eventHandler) const;
    using Progressing_revoker = event_revoker<Windows::Graphics::Printing::IPrintTask>;
    Progressing_revoker Progressing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> const& eventHandler) const;
    void Progressing(event_token const& eventCookie) const;
    event_token Completed(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> const& eventHandler) const;
    using Completed_revoker = event_revoker<Windows::Graphics::Printing::IPrintTask>;
    Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> const& eventHandler) const;
    void Completed(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTask> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTask<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTask2
{
    void IsPreviewEnabled(bool value) const;
    bool IsPreviewEnabled() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTask2> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTask2<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTaskCompletedEventArgs
{
    Windows::Graphics::Printing::PrintTaskCompletion Completion() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTaskCompletedEventArgs> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTaskOptions
{
    void Bordering(Windows::Graphics::Printing::PrintBordering const& value) const;
    Windows::Graphics::Printing::PrintBordering Bordering() const;
    Windows::Storage::Streams::IRandomAccessStream GetPagePrintTicket(Windows::Graphics::Printing::PrintPageInfo const& printPageInfo) const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTaskOptions> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskOptions<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTaskOptionsCore
{
    Windows::Graphics::Printing::PrintPageDescription GetPageDescription(uint32_t jobPageNumber) const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTaskOptionsCore> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskOptionsCore<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties
{
    void MediaSize(Windows::Graphics::Printing::PrintMediaSize const& value) const;
    Windows::Graphics::Printing::PrintMediaSize MediaSize() const;
    void MediaType(Windows::Graphics::Printing::PrintMediaType const& value) const;
    Windows::Graphics::Printing::PrintMediaType MediaType() const;
    void Orientation(Windows::Graphics::Printing::PrintOrientation const& value) const;
    Windows::Graphics::Printing::PrintOrientation Orientation() const;
    void PrintQuality(Windows::Graphics::Printing::PrintQuality const& value) const;
    Windows::Graphics::Printing::PrintQuality PrintQuality() const;
    void ColorMode(Windows::Graphics::Printing::PrintColorMode const& value) const;
    Windows::Graphics::Printing::PrintColorMode ColorMode() const;
    void Duplex(Windows::Graphics::Printing::PrintDuplex const& value) const;
    Windows::Graphics::Printing::PrintDuplex Duplex() const;
    void Collation(Windows::Graphics::Printing::PrintCollation const& value) const;
    Windows::Graphics::Printing::PrintCollation Collation() const;
    void Staple(Windows::Graphics::Printing::PrintStaple const& value) const;
    Windows::Graphics::Printing::PrintStaple Staple() const;
    void HolePunch(Windows::Graphics::Printing::PrintHolePunch const& value) const;
    Windows::Graphics::Printing::PrintHolePunch HolePunch() const;
    void Binding(Windows::Graphics::Printing::PrintBinding const& value) const;
    Windows::Graphics::Printing::PrintBinding Binding() const;
    uint32_t MinCopies() const;
    uint32_t MaxCopies() const;
    void NumberOfCopies(uint32_t value) const;
    uint32_t NumberOfCopies() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreUIConfiguration
{
    Windows::Foundation::Collections::IVector<hstring> DisplayedOptions() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreUIConfiguration<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTaskProgressingEventArgs
{
    uint32_t DocumentPageCount() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTaskProgressingEventArgs> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskProgressingEventArgs<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTaskRequest
{
    Windows::Foundation::DateTime Deadline() const;
    Windows::Graphics::Printing::PrintTask CreatePrintTask(param::hstring const& title, Windows::Graphics::Printing::PrintTaskSourceRequestedHandler const& handler) const;
    Windows::Graphics::Printing::PrintTaskRequestedDeferral GetDeferral() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTaskRequest> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskRequest<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTaskRequestedDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTaskRequestedDeferral> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskRequestedDeferral<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTaskRequestedEventArgs
{
    Windows::Graphics::Printing::PrintTaskRequest Request() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTaskRequestedEventArgs> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs
{
    Windows::Foundation::DateTime Deadline() const;
    void SetSource(Windows::Graphics::Printing::IPrintDocumentSource const& source) const;
    Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral GetDeferral() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedDeferral<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport
{
    void IsPrinterTargetEnabled(bool value) const;
    bool IsPrinterTargetEnabled() const;
    void Is3DManufacturingTargetEnabled(bool value) const;
    bool Is3DManufacturingTargetEnabled() const;
};
template <> struct consume<Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport> { template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic
{
    hstring MediaSize() const;
    hstring MediaType() const;
    hstring Orientation() const;
    hstring PrintQuality() const;
    hstring ColorMode() const;
    hstring Duplex() const;
    hstring Collation() const;
    hstring Staple() const;
    hstring HolePunch() const;
    hstring Binding() const;
    hstring Copies() const;
    hstring NUp() const;
    hstring InputBin() const;
};
template <> struct consume<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic> { template <typename D> using type = consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic2
{
    hstring Bordering() const;
};
template <> struct consume<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2> { template <typename D> using type = consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic2<D>; };

template <> struct abi<Windows::Graphics::Printing::IPrintDocumentSource>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Graphics::Printing::IPrintManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_PrintTaskRequested(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_PrintTaskRequested(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintManagerStatic>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** printingManager) = 0;
    virtual HRESULT __stdcall ShowPrintUIAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintManagerStatic2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsSupported(bool* result) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintPageInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_MediaSize(abi_t<Windows::Graphics::Printing::PrintMediaSize> value) = 0;
    virtual HRESULT __stdcall get_MediaSize(abi_t<Windows::Graphics::Printing::PrintMediaSize>* value) = 0;
    virtual HRESULT __stdcall put_PageSize(abi_t<Windows::Foundation::Size> value) = 0;
    virtual HRESULT __stdcall get_PageSize(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall put_DpiX(uint32_t value) = 0;
    virtual HRESULT __stdcall get_DpiX(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_DpiY(uint32_t value) = 0;
    virtual HRESULT __stdcall get_DpiY(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Orientation(abi_t<Windows::Graphics::Printing::PrintOrientation> value) = 0;
    virtual HRESULT __stdcall get_Orientation(abi_t<Windows::Graphics::Printing::PrintOrientation>* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTask>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Options(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_Previewing(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_Previewing(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall add_Submitting(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_Submitting(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall add_Progressing(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_Progressing(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall add_Completed(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_Completed(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTask2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_IsPreviewEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsPreviewEnabled(bool* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTaskCompletedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Completion(abi_t<Windows::Graphics::Printing::PrintTaskCompletion>* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTaskOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Bordering(abi_t<Windows::Graphics::Printing::PrintBordering> value) = 0;
    virtual HRESULT __stdcall get_Bordering(abi_t<Windows::Graphics::Printing::PrintBordering>* value) = 0;
    virtual HRESULT __stdcall GetPagePrintTicket(::IUnknown* printPageInfo, ::IUnknown** printTicket) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTaskOptionsCore>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetPageDescription(uint32_t jobPageNumber, abi_t<Windows::Graphics::Printing::PrintPageDescription>* description) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_MediaSize(abi_t<Windows::Graphics::Printing::PrintMediaSize> value) = 0;
    virtual HRESULT __stdcall get_MediaSize(abi_t<Windows::Graphics::Printing::PrintMediaSize>* value) = 0;
    virtual HRESULT __stdcall put_MediaType(abi_t<Windows::Graphics::Printing::PrintMediaType> value) = 0;
    virtual HRESULT __stdcall get_MediaType(abi_t<Windows::Graphics::Printing::PrintMediaType>* value) = 0;
    virtual HRESULT __stdcall put_Orientation(abi_t<Windows::Graphics::Printing::PrintOrientation> value) = 0;
    virtual HRESULT __stdcall get_Orientation(abi_t<Windows::Graphics::Printing::PrintOrientation>* value) = 0;
    virtual HRESULT __stdcall put_PrintQuality(abi_t<Windows::Graphics::Printing::PrintQuality> value) = 0;
    virtual HRESULT __stdcall get_PrintQuality(abi_t<Windows::Graphics::Printing::PrintQuality>* value) = 0;
    virtual HRESULT __stdcall put_ColorMode(abi_t<Windows::Graphics::Printing::PrintColorMode> value) = 0;
    virtual HRESULT __stdcall get_ColorMode(abi_t<Windows::Graphics::Printing::PrintColorMode>* value) = 0;
    virtual HRESULT __stdcall put_Duplex(abi_t<Windows::Graphics::Printing::PrintDuplex> value) = 0;
    virtual HRESULT __stdcall get_Duplex(abi_t<Windows::Graphics::Printing::PrintDuplex>* value) = 0;
    virtual HRESULT __stdcall put_Collation(abi_t<Windows::Graphics::Printing::PrintCollation> value) = 0;
    virtual HRESULT __stdcall get_Collation(abi_t<Windows::Graphics::Printing::PrintCollation>* value) = 0;
    virtual HRESULT __stdcall put_Staple(abi_t<Windows::Graphics::Printing::PrintStaple> value) = 0;
    virtual HRESULT __stdcall get_Staple(abi_t<Windows::Graphics::Printing::PrintStaple>* value) = 0;
    virtual HRESULT __stdcall put_HolePunch(abi_t<Windows::Graphics::Printing::PrintHolePunch> value) = 0;
    virtual HRESULT __stdcall get_HolePunch(abi_t<Windows::Graphics::Printing::PrintHolePunch>* value) = 0;
    virtual HRESULT __stdcall put_Binding(abi_t<Windows::Graphics::Printing::PrintBinding> value) = 0;
    virtual HRESULT __stdcall get_Binding(abi_t<Windows::Graphics::Printing::PrintBinding>* value) = 0;
    virtual HRESULT __stdcall get_MinCopies(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MaxCopies(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_NumberOfCopies(uint32_t value) = 0;
    virtual HRESULT __stdcall get_NumberOfCopies(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayedOptions(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTaskProgressingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DocumentPageCount(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTaskRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Deadline(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall CreatePrintTask(HSTRING title, ::IUnknown* handler, ::IUnknown** task) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** deferral) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTaskRequestedDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTaskRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Deadline(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall SetSource(::IUnknown* source) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** deferral) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_IsPrinterTargetEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsPrinterTargetEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_Is3DManufacturingTargetEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_Is3DManufacturingTargetEnabled(bool* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MediaSize(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MediaType(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Orientation(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PrintQuality(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ColorMode(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Duplex(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Collation(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Staple(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HolePunch(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Binding(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Copies(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NUp(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_InputBin(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Bordering(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* args) = 0;
};};

}
