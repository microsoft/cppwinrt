// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Data.Html.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Data::Html {

struct IHtmlUtilities :
    Windows::Foundation::IInspectable,
    impl::consume<IHtmlUtilities>
{
    IHtmlUtilities(std::nullptr_t = nullptr) noexcept {}
};

}

}
