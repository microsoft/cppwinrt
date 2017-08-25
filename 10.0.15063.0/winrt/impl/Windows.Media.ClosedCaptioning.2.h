// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.Media.ClosedCaptioning.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::ClosedCaptioning {

struct ClosedCaptionProperties
{
    ClosedCaptionProperties() = delete;
    static Windows::Media::ClosedCaptioning::ClosedCaptionColor FontColor();
    static Windows::UI::Color ComputedFontColor();
    static Windows::Media::ClosedCaptioning::ClosedCaptionOpacity FontOpacity();
    static Windows::Media::ClosedCaptioning::ClosedCaptionSize FontSize();
    static Windows::Media::ClosedCaptioning::ClosedCaptionStyle FontStyle();
    static Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect FontEffect();
    static Windows::Media::ClosedCaptioning::ClosedCaptionColor BackgroundColor();
    static Windows::UI::Color ComputedBackgroundColor();
    static Windows::Media::ClosedCaptioning::ClosedCaptionOpacity BackgroundOpacity();
    static Windows::Media::ClosedCaptioning::ClosedCaptionColor RegionColor();
    static Windows::UI::Color ComputedRegionColor();
    static Windows::Media::ClosedCaptioning::ClosedCaptionOpacity RegionOpacity();
};

}
