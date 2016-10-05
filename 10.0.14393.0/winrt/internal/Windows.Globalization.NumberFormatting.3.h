// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Globalization.NumberFormatting.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Globalization::NumberFormatting {

struct WINRT_EBO CurrencyFormatter :
    Windows::Globalization::NumberFormatting::ICurrencyFormatter,
    impl::require<CurrencyFormatter, Windows::Globalization::NumberFormatting::ISignificantDigitsOption, Windows::Globalization::NumberFormatting::INumberRounderOption, Windows::Globalization::NumberFormatting::ISignedZeroOption, Windows::Globalization::NumberFormatting::ICurrencyFormatter2>
{
    CurrencyFormatter(std::nullptr_t) noexcept {}
    CurrencyFormatter(hstring_ref currencyCode);
    CurrencyFormatter(hstring_ref currencyCode, const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion);
};

struct WINRT_EBO DecimalFormatter :
    Windows::Globalization::NumberFormatting::INumberFormatter,
    impl::require<DecimalFormatter, Windows::Globalization::NumberFormatting::INumberFormatter2, Windows::Globalization::NumberFormatting::INumberParser, Windows::Globalization::NumberFormatting::INumberFormatterOptions, Windows::Globalization::NumberFormatting::ISignificantDigitsOption, Windows::Globalization::NumberFormatting::INumberRounderOption, Windows::Globalization::NumberFormatting::ISignedZeroOption>
{
    DecimalFormatter(std::nullptr_t) noexcept {}
    DecimalFormatter();
    DecimalFormatter(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion);
};

struct WINRT_EBO IncrementNumberRounder :
    Windows::Globalization::NumberFormatting::INumberRounder,
    impl::require<IncrementNumberRounder, Windows::Globalization::NumberFormatting::IIncrementNumberRounder>
{
    IncrementNumberRounder(std::nullptr_t) noexcept {}
    IncrementNumberRounder();
};

struct WINRT_EBO NumeralSystemTranslator :
    Windows::Globalization::NumberFormatting::INumeralSystemTranslator
{
    NumeralSystemTranslator(std::nullptr_t) noexcept {}
    NumeralSystemTranslator();
    NumeralSystemTranslator(const Windows::Foundation::Collections::IIterable<hstring> & languages);
};

struct WINRT_EBO PercentFormatter :
    Windows::Globalization::NumberFormatting::INumberFormatter,
    impl::require<PercentFormatter, Windows::Globalization::NumberFormatting::INumberFormatter2, Windows::Globalization::NumberFormatting::INumberParser, Windows::Globalization::NumberFormatting::INumberFormatterOptions, Windows::Globalization::NumberFormatting::ISignificantDigitsOption, Windows::Globalization::NumberFormatting::INumberRounderOption, Windows::Globalization::NumberFormatting::ISignedZeroOption>
{
    PercentFormatter(std::nullptr_t) noexcept {}
    PercentFormatter();
    PercentFormatter(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion);
};

struct WINRT_EBO PermilleFormatter :
    Windows::Globalization::NumberFormatting::INumberFormatter,
    impl::require<PermilleFormatter, Windows::Globalization::NumberFormatting::INumberFormatter2, Windows::Globalization::NumberFormatting::INumberParser, Windows::Globalization::NumberFormatting::INumberFormatterOptions, Windows::Globalization::NumberFormatting::ISignificantDigitsOption, Windows::Globalization::NumberFormatting::INumberRounderOption, Windows::Globalization::NumberFormatting::ISignedZeroOption>
{
    PermilleFormatter(std::nullptr_t) noexcept {}
    PermilleFormatter();
    PermilleFormatter(const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion);
};

struct WINRT_EBO SignificantDigitsNumberRounder :
    Windows::Globalization::NumberFormatting::INumberRounder,
    impl::require<SignificantDigitsNumberRounder, Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>
{
    SignificantDigitsNumberRounder(std::nullptr_t) noexcept {}
    SignificantDigitsNumberRounder();
};

}

}
