// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Globalization::NumberFormatting {

struct ICurrencyFormatter;
struct ICurrencyFormatter2;
struct ICurrencyFormatterFactory;
struct IDecimalFormatterFactory;
struct IIncrementNumberRounder;
struct INumberFormatter;
struct INumberFormatter2;
struct INumberFormatterOptions;
struct INumberParser;
struct INumberRounder;
struct INumberRounderOption;
struct INumeralSystemTranslator;
struct INumeralSystemTranslatorFactory;
struct IPercentFormatterFactory;
struct IPermilleFormatterFactory;
struct ISignedZeroOption;
struct ISignificantDigitsNumberRounder;
struct ISignificantDigitsOption;
struct CurrencyFormatter;
struct DecimalFormatter;
struct IncrementNumberRounder;
struct NumeralSystemTranslator;
struct PercentFormatter;
struct PermilleFormatter;
struct SignificantDigitsNumberRounder;

}

namespace Windows::Globalization::NumberFormatting {

struct ICurrencyFormatter;
struct ICurrencyFormatter2;
struct ICurrencyFormatterFactory;
struct IDecimalFormatterFactory;
struct IIncrementNumberRounder;
struct INumberFormatter;
struct INumberFormatter2;
struct INumberFormatterOptions;
struct INumberParser;
struct INumberRounder;
struct INumberRounderOption;
struct INumeralSystemTranslator;
struct INumeralSystemTranslatorFactory;
struct IPercentFormatterFactory;
struct IPermilleFormatterFactory;
struct ISignedZeroOption;
struct ISignificantDigitsNumberRounder;
struct ISignificantDigitsOption;
struct CurrencyFormatter;
struct DecimalFormatter;
struct IncrementNumberRounder;
struct NumeralSystemTranslator;
struct PercentFormatter;
struct PermilleFormatter;
struct SignificantDigitsNumberRounder;

}

namespace Windows::Globalization::NumberFormatting {

enum class CurrencyFormatterMode
{
    UseSymbol = 0,
    UseCurrencyCode = 1,
};

enum class RoundingAlgorithm
{
    None = 0,
    RoundDown = 1,
    RoundUp = 2,
    RoundTowardsZero = 3,
    RoundAwayFromZero = 4,
    RoundHalfDown = 5,
    RoundHalfUp = 6,
    RoundHalfTowardsZero = 7,
    RoundHalfAwayFromZero = 8,
    RoundHalfToEven = 9,
    RoundHalfToOdd = 10,
};

}

}
