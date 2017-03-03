// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.ClosedCaptioning.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Media::ClosedCaptioning {

struct IClosedCaptionPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IClosedCaptionPropertiesStatics>
{
    IClosedCaptionPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
