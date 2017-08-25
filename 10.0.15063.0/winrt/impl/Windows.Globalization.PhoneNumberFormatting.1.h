// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Globalization.PhoneNumberFormatting.0.h"

WINRT_EXPORT namespace winrt::Windows::Globalization::PhoneNumberFormatting {

struct WINRT_EBO IPhoneNumberFormatter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNumberFormatter>
{
    IPhoneNumberFormatter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneNumberFormatterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNumberFormatterStatics>
{
    IPhoneNumberFormatterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneNumberInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNumberInfo>
{
    IPhoneNumberInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneNumberInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNumberInfoFactory>
{
    IPhoneNumberInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneNumberInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNumberInfoStatics>
{
    IPhoneNumberInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

}
