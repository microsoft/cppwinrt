// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Globalization.NumberFormatting.0.h"

WINRT_EXPORT namespace winrt::Windows::Globalization::NumberFormatting {

struct WINRT_EBO ICurrencyFormatter :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrencyFormatter>,
    impl::require<ICurrencyFormatter, Windows::Globalization::NumberFormatting::INumberFormatter, Windows::Globalization::NumberFormatting::INumberFormatter2, Windows::Globalization::NumberFormatting::INumberFormatterOptions, Windows::Globalization::NumberFormatting::INumberParser>
{
    ICurrencyFormatter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrencyFormatter2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrencyFormatter2>
{
    ICurrencyFormatter2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrencyFormatterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrencyFormatterFactory>
{
    ICurrencyFormatterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDecimalFormatterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDecimalFormatterFactory>
{
    IDecimalFormatterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IIncrementNumberRounder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIncrementNumberRounder>
{
    IIncrementNumberRounder(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INumberFormatter :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumberFormatter>
{
    INumberFormatter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INumberFormatter2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumberFormatter2>
{
    INumberFormatter2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INumberFormatterOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumberFormatterOptions>
{
    INumberFormatterOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INumberParser :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumberParser>
{
    INumberParser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INumberRounder :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumberRounder>
{
    INumberRounder(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INumberRounderOption :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumberRounderOption>
{
    INumberRounderOption(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INumeralSystemTranslator :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumeralSystemTranslator>
{
    INumeralSystemTranslator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INumeralSystemTranslatorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<INumeralSystemTranslatorFactory>
{
    INumeralSystemTranslatorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPercentFormatterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPercentFormatterFactory>
{
    IPercentFormatterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPermilleFormatterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPermilleFormatterFactory>
{
    IPermilleFormatterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISignedZeroOption :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISignedZeroOption>
{
    ISignedZeroOption(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISignificantDigitsNumberRounder :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISignificantDigitsNumberRounder>
{
    ISignificantDigitsNumberRounder(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISignificantDigitsOption :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISignificantDigitsOption>
{
    ISignificantDigitsOption(std::nullptr_t = nullptr) noexcept {}
};

}
