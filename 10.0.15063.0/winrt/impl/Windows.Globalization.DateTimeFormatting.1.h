// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Globalization.DateTimeFormatting.0.h"

WINRT_EXPORT namespace winrt::Windows::Globalization::DateTimeFormatting {

struct WINRT_EBO IDateTimeFormatter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDateTimeFormatter>
{
    IDateTimeFormatter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDateTimeFormatter2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDateTimeFormatter2>
{
    IDateTimeFormatter2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDateTimeFormatterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDateTimeFormatterFactory>
{
    IDateTimeFormatterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDateTimeFormatterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDateTimeFormatterStatics>
{
    IDateTimeFormatterStatics(std::nullptr_t = nullptr) noexcept {}
};

}
