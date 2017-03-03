// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Graphics::Display::Core {

struct HdmiDisplayHdr2086Metadata;

}

namespace Windows::Graphics::Display::Core {

using HdmiDisplayHdr2086Metadata = ABI::Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata;

}

namespace ABI::Windows::Graphics::Display::Core {

struct IHdmiDisplayInformation;
struct IHdmiDisplayInformationStatics;
struct IHdmiDisplayMode;
struct HdmiDisplayInformation;
struct HdmiDisplayMode;

}

namespace Windows::Graphics::Display::Core {

struct IHdmiDisplayInformation;
struct IHdmiDisplayInformationStatics;
struct IHdmiDisplayMode;
struct HdmiDisplayInformation;
struct HdmiDisplayMode;

}

namespace Windows::Graphics::Display::Core {

template <typename T> struct impl_IHdmiDisplayInformation;
template <typename T> struct impl_IHdmiDisplayInformationStatics;
template <typename T> struct impl_IHdmiDisplayMode;

}

namespace Windows::Graphics::Display::Core {

enum class HdmiDisplayColorSpace
{
    RgbLimited = 0,
    RgbFull = 1,
    BT2020 = 2,
    BT709 = 3,
};

enum class HdmiDisplayHdrOption
{
    None = 0,
    EotfSdr = 1,
    Eotf2084 = 2,
};

enum class HdmiDisplayPixelEncoding
{
    Rgb444 = 0,
    Ycc444 = 1,
    Ycc422 = 2,
    Ycc420 = 3,
};

}

}
