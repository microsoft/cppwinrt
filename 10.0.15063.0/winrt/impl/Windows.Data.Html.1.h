// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Html.0.h"

WINRT_EXPORT namespace winrt::Windows::Data::Html {

struct WINRT_EBO IHtmlUtilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHtmlUtilities>
{
    IHtmlUtilities(std::nullptr_t = nullptr) noexcept {}
};

}
