// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.ClosedCaptioning.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Media::ClosedCaptioning {

template <typename D>
struct WINRT_EBO impl_IClosedCaptionPropertiesStatics
{
    Windows::Media::ClosedCaptioning::ClosedCaptionColor FontColor() const;
    Windows::UI::Color ComputedFontColor() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionOpacity FontOpacity() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionSize FontSize() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionStyle FontStyle() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect FontEffect() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionColor BackgroundColor() const;
    Windows::UI::Color ComputedBackgroundColor() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionOpacity BackgroundOpacity() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionColor RegionColor() const;
    Windows::UI::Color ComputedRegionColor() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionOpacity RegionOpacity() const;
};

struct IClosedCaptionPropertiesStatics :
    Windows::IInspectable,
    impl::consume<IClosedCaptionPropertiesStatics>
{
    IClosedCaptionPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IClosedCaptionPropertiesStatics>(m_ptr); }
};

}

}
