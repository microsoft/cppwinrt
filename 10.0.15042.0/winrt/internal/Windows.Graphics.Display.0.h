// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Graphics::Display {

struct DisplayPropertiesEventHandler;
struct IBrightnessOverride;
struct IBrightnessOverrideStatics;
struct IDisplayInformation;
struct IDisplayInformation2;
struct IDisplayInformation3;
struct IDisplayInformation4;
struct IDisplayInformationStatics;
struct IDisplayPropertiesStatics;
struct BrightnessOverride;
struct DisplayInformation;

}

namespace Windows::Graphics::Display {

struct DisplayPropertiesEventHandler;
struct IBrightnessOverride;
struct IBrightnessOverrideStatics;
struct IDisplayInformation;
struct IDisplayInformation2;
struct IDisplayInformation3;
struct IDisplayInformation4;
struct IDisplayInformationStatics;
struct IDisplayPropertiesStatics;
struct BrightnessOverride;
struct DisplayInformation;
struct DisplayProperties;

}

namespace Windows::Graphics::Display {

template <typename T> struct impl_IBrightnessOverride;
template <typename T> struct impl_IBrightnessOverrideStatics;
template <typename T> struct impl_IDisplayInformation;
template <typename T> struct impl_IDisplayInformation2;
template <typename T> struct impl_IDisplayInformation3;
template <typename T> struct impl_IDisplayInformation4;
template <typename T> struct impl_IDisplayInformationStatics;
template <typename T> struct impl_IDisplayPropertiesStatics;
template <typename T> struct impl_DisplayPropertiesEventHandler;

}

namespace Windows::Graphics::Display {

enum class DisplayBrightnessOverrideOptions : unsigned
{
    None = 0x0,
    UseDimmedPolicyWhenBatteryIsLow = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(DisplayBrightnessOverrideOptions)

enum class DisplayBrightnessScenario
{
    DefaultBrightness = 0,
    IdleBrightness = 1,
    BarcodeReadingBrightness = 2,
    FullBrightness = 3,
};

enum class DisplayOrientations : unsigned
{
    None = 0x0,
    Landscape = 0x1,
    Portrait = 0x2,
    LandscapeFlipped = 0x4,
    PortraitFlipped = 0x8,
};

DEFINE_ENUM_FLAG_OPERATORS(DisplayOrientations)

enum class ResolutionScale
{
    Invalid = 0,
    Scale100Percent = 100,
    Scale120Percent = 120,
    Scale125Percent = 125,
    Scale140Percent = 140,
    Scale150Percent = 150,
    Scale160Percent = 160,
    Scale175Percent = 175,
    Scale180Percent = 180,
    Scale200Percent = 200,
    Scale225Percent = 225,
    Scale250Percent = 250,
    Scale300Percent = 300,
    Scale350Percent = 350,
    Scale400Percent = 400,
    Scale450Percent = 450,
    Scale500Percent = 500,
};

}

}
